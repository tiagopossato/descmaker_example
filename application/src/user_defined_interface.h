#ifndef UNCONTROLLABLE_H
#define UNCONTROLLABLE_H

#include <Arduino.h>
// Include the header for the ModbusClient TCP style
#include "ModbusClientTCP.h"
#include "factoryio.h"

#include "event_handler/events.h"
#include "event_handler/event_handler.h"

/**
 * @brief This file contains the functions for reading the digital inputs 
 * and then triggering the associated non-controllable events.
*/

//First: Create a callback function
void sensor1_input_action(uint8_t value)
{
  if (value == 1)
  {
    trigger_event(&t1);
  }
}
//Second: Create an Input object and pass the callback function as a parameter
// every time the value of the input change, the callback function will be called
// the value of the input is update by the handleModbusData function, in the end of this file
Input s1_input = Input(&sensor1_input_action);

void sensor2_input_action(uint8_t value)
{
  if (value == 1)
  {
    trigger_event(&t2);
  }
}
Input s2_input = Input(&sensor2_input_action);

void ppx_moving_input_action(uint8_t value)
{
  if (value == 1)
  {
    trigger_event(&m7);
  }
  if (value == 0)
  {
    trigger_event(&p7);
  }
}
Input ppx_moving_input = Input(&ppx_moving_input_action);

void ppz_moving_input_action(uint8_t value)
{
  if (value == 1)
  {
    trigger_event(&m6);
  }
  if (value == 0)
  {
    trigger_event(&p6);
  }
}
Input ppz_moving_input = Input(&ppz_moving_input_action);

void ppg_item_input_action(uint8_t value)
{
  if (value == 1)
  {
    trigger_event(&t5);
  }
}
Input ppg_item_input = Input(&ppg_item_input_action);

void start_input_action(uint8_t value)
{
  if (value == 1)
  {
    trigger_event(&t3);
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
    trigger_event(&t4);
  }
}
Input stop_input = Input(&stop_input_action);

// Define an onData handler function to receive the regular responses
// Arguments are the message plus a user-supplied token to identify the causing request
void handleModbusData(ModbusMessage response, uint32_t token)
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
#endif // UNCONTROLLABLE_H
