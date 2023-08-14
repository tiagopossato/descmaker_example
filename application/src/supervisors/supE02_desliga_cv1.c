#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "supE02_desliga_cv1.h"

// Supervisor specific instances
// alphabet create
Alphabet supE02_desliga_cv1_t1_evt0;
Alphabet supE02_desliga_cv1_s1_evt1;
Alphabet supE02_desliga_cv1_f1_evt2;

// Alphabet init
Alphabet supE02_desliga_cv1_t1_evt0 = {&t1, &supE02_desliga_cv1_s1_evt1};
Alphabet supE02_desliga_cv1_s1_evt1 = {&s1, &supE02_desliga_cv1_f1_evt2};
Alphabet supE02_desliga_cv1_f1_evt2 = {&f1, NULL};

// states create
State supE02_desliga_cv1_q0;
State supE02_desliga_cv1_q2;
State supE02_desliga_cv1_q3;
State supE02_desliga_cv1_q4;

// transitions create and init
Transition supE02_desliga_cv1_q0_t0;
Transition supE02_desliga_cv1_q0_t1;
Transition supE02_desliga_cv1_q0_t0 = {&t1, &supE02_desliga_cv1_q2, &supE02_desliga_cv1_q0_t1};
Transition supE02_desliga_cv1_q0_t1 = {&s1, &supE02_desliga_cv1_q3, NULL};

Transition supE02_desliga_cv1_q2_t0;
Transition supE02_desliga_cv1_q2_t1;
Transition supE02_desliga_cv1_q2_t0 = {&t1, &supE02_desliga_cv1_q2, &supE02_desliga_cv1_q2_t1};
Transition supE02_desliga_cv1_q2_t1 = {&s1, &supE02_desliga_cv1_q4, NULL};

Transition supE02_desliga_cv1_q3_t0;
Transition supE02_desliga_cv1_q3_t0 = {&t1, &supE02_desliga_cv1_q4, NULL};

Transition supE02_desliga_cv1_q4_t0;
Transition supE02_desliga_cv1_q4_t1;
Transition supE02_desliga_cv1_q4_t0 = {&f1, &supE02_desliga_cv1_q0, &supE02_desliga_cv1_q4_t1};
Transition supE02_desliga_cv1_q4_t1 = {&t1, &supE02_desliga_cv1_q4, NULL};


// states init
State supE02_desliga_cv1_q0 = {true, SUP_DEBUG_STR("q0"), &supE02_desliga_cv1_q0_t0};
State supE02_desliga_cv1_q2 = {false, SUP_DEBUG_STR("q2"), &supE02_desliga_cv1_q2_t0};
State supE02_desliga_cv1_q3 = {false, SUP_DEBUG_STR("q3"), &supE02_desliga_cv1_q3_t0};
State supE02_desliga_cv1_q4 = {false, SUP_DEBUG_STR("q4"), &supE02_desliga_cv1_q4_t0};

// Supervisor create
Supervisor supE02_desliga_cv1 = {&supE02_desliga_cv1_q0, &supE02_desliga_cv1_q0, NULL,  &supE02_desliga_cv1_t1_evt0, "supE02_desliga_cv1"};
