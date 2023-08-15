#include <Arduino.h>
// Include the header for the ModbusClient TCP style
#include "ModbusClientTCP.h"
#include "factoryio.h"
#include "user_defined_interface.h"
#include "user_defined_actions.h"

#define MODBUS_READ_INTERVAL 100 // im ms

// Setup() - initialization happens here
void setup()
{
  // Init Serial monitor
  Serial.begin(115200);
  while (!Serial)
  {
  }

  // Set up Factory I/O interface
  factoryio_setup();

  // Set up ModbusTCP client.
  // - provide onData handler function
  set_MB_data_handler(&handleModbusData);

  // Turn off all outputs
  // to put the system in a known state
  write_single_coil(0, false); // cv1
  write_single_coil(1, false); // cv2
  write_single_coil(2, false); // ppx
  write_single_coil(3, false); // ppz
  write_single_coil(4, false); // ppg

  //  wait for the arm to be in the initial position
  delay(3000);

  start_user_defined_actions();
}

/**
 * Loop() - this function runs repeatedly
 * - read the inputs every MODBUS_READ_INTERVAL ms
 * - Every successful read will trigger the event handler in user defined interface
 */
void loop()
{
  static uint32_t last = 0;

  if (millis() - last > MODBUS_READ_INTERVAL)
  {
    last = millis();
    read_discrete_inputs(0, 8);
  }
  delay(1);
}
