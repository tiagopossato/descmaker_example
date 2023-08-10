/**
 * @file main.c
 *
 * @brief Main file for the supervisor project
 */
#include <stdio.h>
#include <modbus.h>
#include <errno.h>
#include "../lib/supervisor/supervisor.h"
#include "supervisors/events.h"
#include "supervisors/handle_event.h"

void default_callback(Event *event) { printf("Default callback\n"); }

void setup()
{
  printf("Start supervisor!\n\n");
  // set default callback for example
  // set_event_callback(&Se, default_callback);
  // set_event_callback(&a1, default_callback);
  // set_event_callback(&b1, default_callback);
  // set_event_callback(&b0, default_callback);
  // set_event_callback(&a0, default_callback);
  // set_event_callback(&b2, default_callback);
  // set_event_callback(&a2, default_callback);
  // set_event_callback(&b3, default_callback);
  // set_event_callback(&a3, default_callback);
  // set_event_callback(&a4, default_callback);
  // set_event_callback(&b4, default_callback);

  // // handle events for teste
  // handle_event(&Se);
  // handle_event(&a1);
  // handle_event(&b1);
  // handle_event(&b0);
  // handle_event(&a0);
  // handle_event(&b2);
  // handle_event(&a2);
  // handle_event(&b3);
  // handle_event(&a3);
  // handle_event(&a4);
  // handle_event(&b4);
}

void loop()
{
  // handle events for teste
}

int main(void)
{
  printf("inciando\n");

  modbus_t *ctx;
  uint16_t tab_reg[64];
  int rc;
  int i;

  ctx = modbus_new_tcp("172.19.160.1", 502);
  if (modbus_connect(ctx) == -1)
  {
    fprintf(stderr, "Connection failed: %s\n", modbus_strerror(errno));
    modbus_free(ctx);
    return -1;
  }

  rc = modbus_read_registers(ctx, 1, 3, tab_reg);
  if (rc == -1)
  {
    fprintf(stderr, "modbus_read_registers: %s\n", modbus_strerror(errno));
    return -1;
  }

  for (i = 0; i < rc; i++)
  {
    printf("reg[%d]=%d (0x%X)\n", i, tab_reg[i], tab_reg[i]);
  }

  modbus_close(ctx);
  modbus_free(ctx);
  // setup();
  //  while (1) {
  //    loop();
  //  }
  return 0;
}

// netsh interface portproxy add v4tov4 listenport=502 listenaddress=$($(wsl hostname -I).Trim())  connectport=502 connectaddress=127.0.0.1

// netsh interface portproxy delete v4tov4 listenport=502 listenaddress=172.19.175.170

// netsh interface portproxy show v4tov4
