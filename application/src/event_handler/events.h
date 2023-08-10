#ifndef __EVENTS_H__
#define __EVENTS_H__

#include <stdlib.h>

#include "../../lib/supervisor/supervisor.h"

#define CONTROLLABLE_EVENTS_COUNT 10

// create events
extern Event cv1_on;
extern Event cv1_off;
extern Event cv2_on;
extern Event cv2_off;
extern Event s1;
extern Event s2;
extern Event ppx_on;
extern Event ppx_off;
extern Event ppg_on;
extern Event ppg_off;
extern Event ppz_on;
extern Event ppz_off;
extern Event ppz_moving;
extern Event ppx_moving;
extern Event ppg_item;
extern Event ppz_stoped;
extern Event ppx_stoped;
extern Event start;
extern Event stop;

extern Event *controllable_event_list[CONTROLLABLE_EVENTS_COUNT];

#endif // __EVENTS_H__