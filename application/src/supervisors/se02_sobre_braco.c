#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "se02_sobre_braco.h"

// Supervisor specific instances
// alphabet create
Alphabet se02_sobre_braco_ppg_on_evt0;
Alphabet se02_sobre_braco_ppz_on_evt1;
Alphabet se02_sobre_braco_ppg_off_evt2;
Alphabet se02_sobre_braco_ppz_off_evt3;

// Alphabet init
Alphabet se02_sobre_braco_ppg_on_evt0 = {&ppg_on, &se02_sobre_braco_ppz_on_evt1};
Alphabet se02_sobre_braco_ppz_on_evt1 = {&ppz_on, &se02_sobre_braco_ppg_off_evt2};
Alphabet se02_sobre_braco_ppg_off_evt2 = {&ppg_off, &se02_sobre_braco_ppz_off_evt3};
Alphabet se02_sobre_braco_ppz_off_evt3 = {&ppz_off, NULL};

// states create
State se02_sobre_braco_q0;
State se02_sobre_braco_q2;
State se02_sobre_braco_q3;
State se02_sobre_braco_q4;
State se02_sobre_braco_q5;
State se02_sobre_braco_q6;
State se02_sobre_braco_q7;
State se02_sobre_braco_q8;

// transitions create and init
Transition se02_sobre_braco_q0_t0;
Transition se02_sobre_braco_q0_t1;
Transition se02_sobre_braco_q0_t0 = {&ppg_on, &se02_sobre_braco_q4, &se02_sobre_braco_q0_t1};
Transition se02_sobre_braco_q0_t1 = {&ppz_on, &se02_sobre_braco_q5, NULL};

Transition se02_sobre_braco_q2_t0;
Transition se02_sobre_braco_q2_t1;
Transition se02_sobre_braco_q2_t0 = {&ppg_on, &se02_sobre_braco_q4, &se02_sobre_braco_q2_t1};
Transition se02_sobre_braco_q2_t1 = {&ppz_on, &se02_sobre_braco_q6, NULL};

Transition se02_sobre_braco_q3_t0;
Transition se02_sobre_braco_q3_t1;
Transition se02_sobre_braco_q3_t0 = {&ppg_off, &se02_sobre_braco_q2, &se02_sobre_braco_q3_t1};
Transition se02_sobre_braco_q3_t1 = {&ppz_on, &se02_sobre_braco_q7, NULL};

Transition se02_sobre_braco_q4_t0;
Transition se02_sobre_braco_q4_t1;
Transition se02_sobre_braco_q4_t0 = {&ppg_off, &se02_sobre_braco_q2, &se02_sobre_braco_q4_t1};
Transition se02_sobre_braco_q4_t1 = {&ppz_on, &se02_sobre_braco_q8, NULL};

Transition se02_sobre_braco_q5_t0;
Transition se02_sobre_braco_q5_t0 = {&ppg_on, &se02_sobre_braco_q8, NULL};

Transition se02_sobre_braco_q6_t0;
Transition se02_sobre_braco_q6_t1;
Transition se02_sobre_braco_q6_t0 = {&ppz_off, &se02_sobre_braco_q0, &se02_sobre_braco_q6_t1};
Transition se02_sobre_braco_q6_t1 = {&ppg_on, &se02_sobre_braco_q8, NULL};

Transition se02_sobre_braco_q7_t0;
Transition se02_sobre_braco_q7_t0 = {&ppg_off, &se02_sobre_braco_q6, NULL};

Transition se02_sobre_braco_q8_t0;
Transition se02_sobre_braco_q8_t1;
Transition se02_sobre_braco_q8_t0 = {&ppz_off, &se02_sobre_braco_q3, &se02_sobre_braco_q8_t1};
Transition se02_sobre_braco_q8_t1 = {&ppg_off, &se02_sobre_braco_q6, NULL};


// states init
State se02_sobre_braco_q0 = {true, SUP_DEBUG_STR("q0"), &se02_sobre_braco_q0_t0};
State se02_sobre_braco_q2 = {false, SUP_DEBUG_STR("q2"), &se02_sobre_braco_q2_t0};
State se02_sobre_braco_q3 = {false, SUP_DEBUG_STR("q3"), &se02_sobre_braco_q3_t0};
State se02_sobre_braco_q4 = {false, SUP_DEBUG_STR("q4"), &se02_sobre_braco_q4_t0};
State se02_sobre_braco_q5 = {false, SUP_DEBUG_STR("q5"), &se02_sobre_braco_q5_t0};
State se02_sobre_braco_q6 = {false, SUP_DEBUG_STR("q6"), &se02_sobre_braco_q6_t0};
State se02_sobre_braco_q7 = {false, SUP_DEBUG_STR("q7"), &se02_sobre_braco_q7_t0};
State se02_sobre_braco_q8 = {false, SUP_DEBUG_STR("q8"), &se02_sobre_braco_q8_t0};

// Supervisor create
Supervisor se02_sobre_braco = {&se02_sobre_braco_q0, &se02_sobre_braco_q0, NULL,  &se02_sobre_braco_ppg_on_evt0, "se02_sobre_braco"};
