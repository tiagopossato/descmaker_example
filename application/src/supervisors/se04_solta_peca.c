#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "se04_solta_peca.h"

// Supervisor specific instances
// alphabet create
Alphabet se04_solta_peca_s2_evt0;
Alphabet se04_solta_peca_ppg_on_evt1;
Alphabet se04_solta_peca_ppg_off_evt2;

// Alphabet init
Alphabet se04_solta_peca_s2_evt0 = {&s2, &se04_solta_peca_ppg_on_evt1};
Alphabet se04_solta_peca_ppg_on_evt1 = {&ppg_on, &se04_solta_peca_ppg_off_evt2};
Alphabet se04_solta_peca_ppg_off_evt2 = {&ppg_off, NULL};

// states create
State se04_solta_peca_q0;
State se04_solta_peca_q2;
State se04_solta_peca_q3;
State se04_solta_peca_q4;

// transitions create and init
Transition se04_solta_peca_q0_t0;
Transition se04_solta_peca_q0_t1;
Transition se04_solta_peca_q0_t0 = {&s2, &se04_solta_peca_q2, &se04_solta_peca_q0_t1};
Transition se04_solta_peca_q0_t1 = {&ppg_on, &se04_solta_peca_q3, NULL};

Transition se04_solta_peca_q2_t0;
Transition se04_solta_peca_q2_t1;
Transition se04_solta_peca_q2_t0 = {&s2, &se04_solta_peca_q2, &se04_solta_peca_q2_t1};
Transition se04_solta_peca_q2_t1 = {&ppg_on, &se04_solta_peca_q4, NULL};

Transition se04_solta_peca_q3_t0;
Transition se04_solta_peca_q3_t0 = {&s2, &se04_solta_peca_q4, NULL};

Transition se04_solta_peca_q4_t0;
Transition se04_solta_peca_q4_t1;
Transition se04_solta_peca_q4_t0 = {&ppg_off, &se04_solta_peca_q0, &se04_solta_peca_q4_t1};
Transition se04_solta_peca_q4_t1 = {&s2, &se04_solta_peca_q4, NULL};


// states init
State se04_solta_peca_q0 = {true, SUP_DEBUG_STR("q0"), &se04_solta_peca_q0_t0};
State se04_solta_peca_q2 = {false, SUP_DEBUG_STR("q2"), &se04_solta_peca_q2_t0};
State se04_solta_peca_q3 = {false, SUP_DEBUG_STR("q3"), &se04_solta_peca_q3_t0};
State se04_solta_peca_q4 = {false, SUP_DEBUG_STR("q4"), &se04_solta_peca_q4_t0};

// Supervisor create
Supervisor se04_solta_peca = {&se04_solta_peca_q0, &se04_solta_peca_q0, NULL,  &se04_solta_peca_s2_evt0, "se04_solta_peca"};
