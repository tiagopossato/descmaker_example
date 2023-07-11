/**
 * @file main.c
 *
 * @brief Main file for the supervisor project
 */
#include <stdio.h>
#include "../lib/supervisor/supervisor.h"
#include "supervisors/events.h"
#include "supervisors/handle_event.h"

void default_callback(Event *event) { printf("Default callback\n"); }

void setup(){
  printf("Start supervisor!\n\n");
  // set default callback for example
  set_event_callback(&Se, default_callback);
  set_event_callback(&a1, default_callback);
  set_event_callback(&b1, default_callback);
  set_event_callback(&b0, default_callback);
  set_event_callback(&a0, default_callback);
  set_event_callback(&b2, default_callback);
  set_event_callback(&a2, default_callback);
  set_event_callback(&b3, default_callback);
  set_event_callback(&a3, default_callback);
  set_event_callback(&a4, default_callback);
  set_event_callback(&b4, default_callback);

  // handle events for teste
  handle_event(&Se);
  handle_event(&a1);
  handle_event(&b1);
  handle_event(&b0);
  handle_event(&a0);
  handle_event(&b2);
  handle_event(&a2);
  handle_event(&b3);
  handle_event(&a3);
  handle_event(&a4);
  handle_event(&b4);

}

void loop(){
  // handle events for teste
}

int main(void) {
  setup();
  // while (1) {
  //   loop();
  // }
  return 0;
}