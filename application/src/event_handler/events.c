#include <stdlib.h>
#include "events.h"
// create events
Event cv1_on = {CONTROLLABLE, 0, SUP_DEBUG_STR("cv1_on"), NULL};
Event cv1_off = {CONTROLLABLE, 1, SUP_DEBUG_STR("cv1_off"), NULL};
Event cv2_on = {CONTROLLABLE, 2, SUP_DEBUG_STR("cv2_on"), NULL};
Event cv2_off = {CONTROLLABLE, 3, SUP_DEBUG_STR("cv2_off"), NULL};
Event s1 = {UNCONTROLLABLE, 4, SUP_DEBUG_STR("s1"), NULL};
Event s2 = {UNCONTROLLABLE, 5, SUP_DEBUG_STR("s2"), NULL};
Event ppx_on = {CONTROLLABLE, 6, SUP_DEBUG_STR("ppx_on"), NULL};
Event ppx_off = {CONTROLLABLE, 7, SUP_DEBUG_STR("ppx_off"), NULL};
Event ppg_on = {CONTROLLABLE, 8, SUP_DEBUG_STR("ppg_on"), NULL};
Event ppg_off = {CONTROLLABLE, 9, SUP_DEBUG_STR("ppg_off"), NULL};
Event ppz_on = {CONTROLLABLE, 10, SUP_DEBUG_STR("ppz_on"), NULL};
Event ppz_off = {CONTROLLABLE, 11, SUP_DEBUG_STR("ppz_off"), NULL};
Event ppz_moving = {UNCONTROLLABLE, 12, SUP_DEBUG_STR("ppz_moving"), NULL};
Event ppx_moving = {UNCONTROLLABLE, 13, SUP_DEBUG_STR("ppx_moving"), NULL};
Event ppg_item = {UNCONTROLLABLE, 14, SUP_DEBUG_STR("ppg_item"), NULL};
Event ppz_stoped = {UNCONTROLLABLE, 15, SUP_DEBUG_STR("ppz_stoped"), NULL};
Event ppx_stoped = {UNCONTROLLABLE, 16, SUP_DEBUG_STR("ppx_stoped"), NULL};
Event start = {UNCONTROLLABLE, 17, SUP_DEBUG_STR("start"), NULL};
Event stop = {UNCONTROLLABLE, 18, SUP_DEBUG_STR("stop"), NULL};

Event *controllable_event_list[CONTROLLABLE_EVENTS_COUNT] = {&cv1_on,&cv1_off,&cv2_on,&cv2_off,&ppx_on,&ppx_off,&ppg_on,&ppg_off,&ppz_on,&ppz_off};