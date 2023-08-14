#ifndef __EVENTS_H__
#define __EVENTS_H__

#include <stdlib.h>

#include "../../lib/supervisor/supervisor.h"

#define CONTROLLABLE_EVENTS_COUNT 10

// create events
extern Event s1;
extern Event f1;
extern Event s2;
extern Event f2;
extern Event t1;
extern Event t2;
extern Event s4;
extern Event f4;
extern Event s5;
extern Event f5;
extern Event s3;
extern Event f3;
extern Event m6;
extern Event m7;
extern Event t5;
extern Event p6;
extern Event p7;
extern Event t3;
extern Event t4;

extern Event *controllable_event_list[CONTROLLABLE_EVENTS_COUNT];

#endif // __EVENTS_H__