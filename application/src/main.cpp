#include <Arduino.h>
// Include the header for the ModbusClient TCP style
#include "ModbusClientTCP.h"
#include "factoryio.h"

#include "event_handler/events.h"
#include "event_handler/event_handler.h"

//------------------ENTRADAS------------------//
/*
Cria funções de callback para cada objeto do tipo Input
Toda vez que o valor da entrada mudar, a função de callback será chamada
A função de callback, verifica o valor recebido e
dispara o evento correspondente
*/
void s1_input_action(uint8_t value)
{
  if (value == 1)
  {
    trigger_event(&s1);
  }
}
// Cria o objeto do tipo Input e passa a função de callback como parâmetro
Input s1_input = Input(&s1_input_action);

void s2_input_action(uint8_t value)
{
  if (value == 1)
  {
    trigger_event(&s2);
  }
}
Input s2_input = Input(&s2_input_action);

void ppx_moving_input_action(uint8_t value)
{
  if (value == 1)
  {
    trigger_event(&ppx_moving);
  }
  if (value == 0)
  {
    trigger_event(&ppx_stoped);
  }
}
Input ppx_moving_input = Input(&ppx_moving_input_action);

void ppz_moving_input_action(uint8_t value)
{
  if (value == 1)
  {
    trigger_event(&ppz_moving);
  }
  if (value == 0)
  {
    trigger_event(&ppz_stoped);
  }
}
Input ppz_moving_input = Input(&ppz_moving_input_action);

void ppg_item_input_action(uint8_t value)
{
  if (value == 1)
  {
    trigger_event(&ppg_item);
  }
}
Input ppg_item_input = Input(&ppg_item_input_action);

void start_input_action(uint8_t value)
{
  if (value == 1)
  {
    trigger_event(&start);
  }
}
Input start_input = Input(&start_input_action);

void reset_input_action(uint8_t value)
{
  //reset esp32
  if (value == 1)
  {
    printf("Reset pressionado\n");
    ESP.restart();
  }
}
Input reset_input = Input(&reset_input_action);

void stop_input_action(uint8_t value)
{
  if (value == 1)
  {
    trigger_event(&stop);
  }
}
Input stop_input = Input(&stop_input_action);

// Define an onData handler function to receive the regular responses
// Arguments are the message plus a user-supplied token to identify the causing request
void handleData(ModbusMessage response, uint32_t token)
{
  // Serial.printf("Response: serverID=%d, FC=%d, Token=%08X, length=%d:\n", response.getServerID(), response.getFunctionCode(), token, response.size());
  // for (auto &byte : response)
  // {
  //   Serial.printf("%02X ", byte);
  // }
  // Serial.println("");
  if (response.getFunctionCode() == 2)
  {
    // get bit 0 from byte 4
    s1_input.set_value(response[3] & 0x01);
    // get bit 1 from byte 4
    s2_input.set_value((response[3] & 0x02) >> 1);
    // get bit 2 from byte 4
    ppx_moving_input.set_value((response[3] & 0x04) >> 2);
    // get bit 3 from byte 4
    ppz_moving_input.set_value((response[3] & 0x08) >> 3);
    // get bit 4 from byte 4
    ppg_item_input.set_value((response[3] & 0x10) >> 4);
    // get bit 5 from byte 4
    start_input.set_value((response[3] & 0x20) >> 5);
    // get bit 6 from byte 4
    reset_input.set_value((response[3] & 0x40) >> 6);
    // get bit 7 from byte 4
    stop_input.set_value((response[3] & 0x80) >> 7);
  }
}
//------------------FIM DAS ENTRADAS------------------//

//------------------SAÍDAS------------------//

void cv1_on_action(Event *event)
{
  write_single_coil(0, true); // cv1
}

void cv1_off_action(Event *event)
{
  write_single_coil(0, false); // cv1
}

void cv2_on_action(Event *event)
{
  write_single_coil(1, true); // cv2
}

void cv2_off_action(Event *event)
{
  write_single_coil(1, false); // cv2
}

void ppx_on_action(Event *event)
{
  write_single_coil(2, true); // ppx
}

void ppx_off_action(Event *event)
{
  write_single_coil(2, false); // ppx
}

void ppz_on_action(Event *event)
{
  write_single_coil(3, true); // ppz
}

void ppz_off_action(Event *event)
{
  write_single_coil(3, false); // ppz
}

void ppg_on_action(Event *event)
{
  write_single_coil(4, true); // ppg
}

void ppg_off_action(Event *event)
{
  write_single_coil(4, false); // ppg
}
//------------------FIM DAS SAÍDAS------------------//

// Setup() - initialization happens here
void setup()
{
  // Init Serial monitor
  Serial.begin(115200);
  while (!Serial)
  {
  }

  factoryio_setup();

  // Set up ModbusTCP client.
  // - provide onData handler function
  set_MB_data_handler(&handleData);

  // desliga todas as saídas do controlador
  //Colocando a máquina no estado inicial
  write_single_coil(0, false); // cv1
  write_single_coil(1, false); // cv2
  write_single_coil(2, false); // ppx
  write_single_coil(3, false); // ppz
  write_single_coil(4, false); // ppg
// aguarda o retorno dos braços
  delay(3000);

  // associa ações aos eventos controláveis
  set_event_action(&cv1_on, cv1_on_action);
  set_event_action(&cv1_off, cv1_off_action);
  set_event_action(&cv2_on, cv2_on_action);
  set_event_action(&cv2_off, cv2_off_action);
  set_event_action(&ppx_on, ppx_on_action);
  set_event_action(&ppx_off, ppx_off_action);
  set_event_action(&ppg_on, ppg_on_action);
  set_event_action(&ppg_off, ppg_off_action);
  set_event_action(&ppz_on, ppz_on_action);
  set_event_action(&ppz_off, ppz_off_action);
}

uint32_t interval = 100;
void loop()
{
  static uint32_t last = 0;

  if (millis() - last > interval)
  {
    last = millis();
    // Serial.printf("Loop: %d\n", last);
     read_discrete_inputs(0, 8);
    // if (read_discrete_inputs(0, 8))
    // {
    //   interval--;
    // }
    // else
    // {
    //   interval++;
    // }
  }
  delay(1);
}
