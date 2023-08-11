#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "se01_desliga_cv1.h"

// Supervisor specific instances
// alphabet create
Alphabet se01_desliga_cv1_s1_evt0;
Alphabet se01_desliga_cv1_cv1_on_evt1;
Alphabet se01_desliga_cv1_cv1_off_evt2;

// Alphabet init
Alphabet se01_desliga_cv1_s1_evt0 = {&s1, &se01_desliga_cv1_cv1_on_evt1};
Alphabet se01_desliga_cv1_cv1_on_evt1 = {&cv1_on, &se01_desliga_cv1_cv1_off_evt2};
Alphabet se01_desliga_cv1_cv1_off_evt2 = {&cv1_off, NULL};

// states create
State se01_desliga_cv1_q0;
State se01_desliga_cv1_q2;
State se01_desliga_cv1_q3;
State se01_desliga_cv1_q4;

// transitions create and init
Transition se01_desliga_cv1_q0_t0;
Transition se01_desliga_cv1_q0_t1;
Transition se01_desliga_cv1_q0_t0 = {&s1, &se01_desliga_cv1_q2, &se01_desliga_cv1_q0_t1};
Transition se01_desliga_cv1_q0_t1 = {&cv1_on, &se01_desliga_cv1_q3, NULL};

Transition se01_desliga_cv1_q2_t0;
Transition se01_desliga_cv1_q2_t1;
Transition se01_desliga_cv1_q2_t0 = {&s1, &se01_desliga_cv1_q2, &se01_desliga_cv1_q2_t1};
Transition se01_desliga_cv1_q2_t1 = {&cv1_on, &se01_desliga_cv1_q4, NULL};

Transition se01_desliga_cv1_q3_t0;
Transition se01_desliga_cv1_q3_t0 = {&s1, &se01_desliga_cv1_q4, NULL};

Transition se01_desliga_cv1_q4_t0;
Transition se01_desliga_cv1_q4_t1;
Transition se01_desliga_cv1_q4_t0 = {&cv1_off, &se01_desliga_cv1_q0, &se01_desliga_cv1_q4_t1};
Transition se01_desliga_cv1_q4_t1 = {&s1, &se01_desliga_cv1_q4, NULL};


// states init
State se01_desliga_cv1_q0 = {true, SUP_DEBUG_STR("q0"), &se01_desliga_cv1_q0_t0};
State se01_desliga_cv1_q2 = {false, SUP_DEBUG_STR("q2"), &se01_desliga_cv1_q2_t0};
State se01_desliga_cv1_q3 = {false, SUP_DEBUG_STR("q3"), &se01_desliga_cv1_q3_t0};
State se01_desliga_cv1_q4 = {false, SUP_DEBUG_STR("q4"), &se01_desliga_cv1_q4_t0};

// Supervisor create
Supervisor se01_desliga_cv1 = {&se01_desliga_cv1_q0, &se01_desliga_cv1_q0, NULL,  &se01_desliga_cv1_s1_evt0, "se01_desliga_cv1"};
