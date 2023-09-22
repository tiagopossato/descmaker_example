#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "supE09_solta_peca.h"

// Supervisor specific instances
// alphabet create
const Alphabet supE09_solta_peca_t2_evt0;
const Alphabet supE09_solta_peca_s5_evt1;
const Alphabet supE09_solta_peca_f5_evt2;

// Alphabet init
const Alphabet supE09_solta_peca_t2_evt0 = {&t2, &supE09_solta_peca_s5_evt1};
const Alphabet supE09_solta_peca_s5_evt1 = {&s5, &supE09_solta_peca_f5_evt2};
const Alphabet supE09_solta_peca_f5_evt2 = {&f5, NULL};

// states create
const State supE09_solta_peca_q0;
const State supE09_solta_peca_q2;
const State supE09_solta_peca_q3;
const State supE09_solta_peca_q4;

// transitions create and init
const Transition supE09_solta_peca_q0_t0;
const Transition supE09_solta_peca_q0_t1;
const Transition supE09_solta_peca_q0_t0 = {&t2, &supE09_solta_peca_q2, &supE09_solta_peca_q0_t1};
const Transition supE09_solta_peca_q0_t1 = {&s5, &supE09_solta_peca_q3, NULL};

const Transition supE09_solta_peca_q2_t0;
const Transition supE09_solta_peca_q2_t1;
const Transition supE09_solta_peca_q2_t0 = {&t2, &supE09_solta_peca_q2, &supE09_solta_peca_q2_t1};
const Transition supE09_solta_peca_q2_t1 = {&s5, &supE09_solta_peca_q4, NULL};

const Transition supE09_solta_peca_q3_t0;
const Transition supE09_solta_peca_q3_t0 = {&t2, &supE09_solta_peca_q4, NULL};

const Transition supE09_solta_peca_q4_t0;
const Transition supE09_solta_peca_q4_t1;
const Transition supE09_solta_peca_q4_t0 = {&f5, &supE09_solta_peca_q0, &supE09_solta_peca_q4_t1};
const Transition supE09_solta_peca_q4_t1 = {&t2, &supE09_solta_peca_q4, NULL};


// states init
const State supE09_solta_peca_q0 = {true, SUP_DEBUG_STR("q0"), &supE09_solta_peca_q0_t0};
const State supE09_solta_peca_q2 = {false, SUP_DEBUG_STR("q2"), &supE09_solta_peca_q2_t0};
const State supE09_solta_peca_q3 = {false, SUP_DEBUG_STR("q3"), &supE09_solta_peca_q3_t0};
const State supE09_solta_peca_q4 = {false, SUP_DEBUG_STR("q4"), &supE09_solta_peca_q4_t0};

// Supervisor create
Supervisor supE09_solta_peca = {&supE09_solta_peca_q0, &supE09_solta_peca_q0, NULL,  &supE09_solta_peca_t2_evt0, "supE09_solta_peca"};
