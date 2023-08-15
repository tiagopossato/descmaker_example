# DEScMaker use case for ESP32

- Open the file `Pick & Place (Basic).factoryio` with Factory I/O and start the simulation.
    - Check that the selected communication driver is `Modbus TCP IP Server`
    - In `CONFIGURATION` select the wireless network card connected to the same Wi-Fi as the ESP32 in `Network Adapter`
    - Set Port to 502
    - Set Slave ID to 1
    - Copy the Host IP
- Set `MY_SSID`, `MY_PASS` and `factoryio_ip` on `src/factoryio.h`.
- Upload the firmware into an ESP32 dev kit.
- If necessary, reset the ESP32 to ensure connection to the simulator.
- Click the green (start) button on the simulation panel.

- A video of the system in operation can be seen at [http://bit.ly/3KFqELY](http://bit.ly/3KFqELY).

## Considerations

- The file `pick_and_place_basic.wmod` has already been parsed and the generated code is in the folder `application`.

- See practical conversion details in the file `convert.py`.

# DEScMaker test
To test the use of the tool, simply change the modeling in the file `pick_and_place_basic.wmod`, synthesize the supervisor and save the file. Then run `convert.py` and upload the new program on ESP32.
