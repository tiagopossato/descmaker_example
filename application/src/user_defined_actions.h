#ifndef USER_ACTIONS_H
#define USER_ACTIONS_H

#include <Arduino.h>
#include "factoryio.h"
#include "event_handler/events.h"

/**
 * @brief This file contains the user actions for the controllable events
 */

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

/**
 * @brief This function links the actions to the events
 */
void start_user_defined_actions()
{
    // Link the actions to the events
    set_event_action(&s1, cv1_on_action);
    set_event_action(&f1, cv1_off_action);
    set_event_action(&s2, cv2_on_action);
    set_event_action(&f2, cv2_off_action);
    set_event_action(&s4, ppx_on_action);
    set_event_action(&f4, ppx_off_action);
    set_event_action(&s5, ppg_on_action);
    set_event_action(&f5, ppg_off_action);
    set_event_action(&s3, ppz_on_action);
    set_event_action(&f3, ppz_off_action);
}

#endif // USER_ACTIONS_H
