#ifndef FACTORYIO_H
#define FACTORYIO_H
#include "ModbusClientTCP.h"

#ifndef MY_SSID
#define MY_SSID "Tiago"
#endif
#ifndef MY_PASS
#define MY_PASS "Po55@7088"
#endif

const uint8_t factoryio_ip[4] = {192, 168, 3, 45};

void factoryio_setup();

void set_MB_data_handler(MBOnData handler);

bool read_discrete_inputs(uint16_t start_address, uint16_t quantity);

bool write_single_coil(uint16_t address, bool value);

class Input
{
private:
    /* data */
    uint8_t value;

    // pointer to callback function
    void (*action)(uint8_t _value);

public:
    // initialize the input with callback function
    Input(void (*_action)(uint8_t _value));
    void set_value(uint8_t _value);
};

#endif // !FACTORYIO_H
