
#include <Arduino.h>
#include <WiFi.h>
// Include the header for the ModbusClient TCP style
#include "ModbusClientTCP.h"

#include "factoryio.h"

void handleError(Error error, uint32_t token);

WiFiClient theClient; // Set up a client

char ssid[] = MY_SSID; // SSID and ...
char pass[] = MY_PASS; // password for the WiFi network used

// Create a ModbusTCP client instance
ModbusClientTCP MB(theClient);

void factoryio_setup(void)
{
    // Initialize the factoryio interface
    // Connect to WiFi
    WiFi.begin(ssid, pass);
    delay(200);
    while (WiFi.status() != WL_CONNECTED)
    {
        Serial.print(". ");
        delay(1000);
    }
    Serial.println("__ OK __");
    IPAddress wIP = WiFi.localIP();
    Serial.printf("WIFi IP address: %u.%u.%u.%u\n", wIP[0], wIP[1], wIP[2], wIP[3]);

    // - provide onError handler function
    MB.onErrorHandler(&handleError);
    // Set message timeout to 2000ms and interval between requests to the same host to 25ms
    MB.setTimeout(2000, 25);
    // Start ModbusTCP background task
    MB.begin();

    // Issue a request
    // Set Modbus TCP server address and port number
    // (Fill in your data here!)
    MB.setTarget(IPAddress(factoryio_ip[0], factoryio_ip[1], factoryio_ip[2], factoryio_ip[3]), 502);
}

void set_MB_data_handler(MBOnData handler)
{
    MB.onDataHandler(handler);
}

// Define an onError handler function to receive error responses
// Arguments are the error code returned and a user-supplied token to identify the causing request
void handleError(Error error, uint32_t token)
{
    // ModbusError wraps the error code and provides a readable error message for it
    ModbusError me(error);
    Serial.printf("Error response: %02X - %s\n", (int)me, (const char *)me);
}

bool read_discrete_inputs(uint16_t start_address, uint16_t quantity)
{
    Error err = MB.addRequest((uint32_t)millis(), 1, READ_DISCR_INPUT, start_address, quantity);
    if (err != SUCCESS)
    {
        ModbusError e(err);
        Serial.printf("Error creating read request: %02X - %s\n", (int)e, (const char *)e);
        return false;
    }
    return true;
}

bool write_single_coil(uint16_t address, bool value)
{
    // convert bool value into uint16_t
    uint16_t _value = value ? 0xff00 : 0x0000;

    Error err = MB.addRequest((uint32_t)millis(), 1, WRITE_COIL, address, _value);
    if (err != SUCCESS)
    {
        ModbusError e(err);
        Serial.printf("Error creating write request: %02X - %s\n", (int)e, (const char *)e);
        return false;
    }
    return true;
}

Input::Input(void (*_action)(uint8_t _value))
{
    this->value = 255;
    action = _action;
}

void Input::set_value(uint8_t _value)
{
    if (value != _value)
    {
        value = _value;
        // verify if action is not null
        if (action != NULL)
        {
            action(value);
        }
    }
}
