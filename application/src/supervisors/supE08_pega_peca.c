#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "supE08_pega_peca.h"

// Supervisor specific instances
// alphabet create
const Alphabet supE08_pega_peca_t5_evt0;
const Alphabet supE08_pega_peca_s5_evt1;
const Alphabet supE08_pega_peca_f5_evt2;

// Alphabet init
const Alphabet supE08_pega_peca_t5_evt0 = {&t5, &supE08_pega_peca_s5_evt1};
const Alphabet supE08_pega_peca_s5_evt1 = {&s5, &supE08_pega_peca_f5_evt2};
const Alphabet supE08_pega_peca_f5_evt2 = {&f5, NULL};

// states create
const State supE08_pega_peca_q0;
const State supE08_pega_peca_q2;
const State supE08_pega_peca_q3;
const State supE08_pega_peca_q4;

// transitions create and init
const Transition supE08_pega_peca_q0_t0;
const Transition supE08_pega_peca_q0_t0 = {&t5, &supE08_pega_peca_q2, NULL};

const Transition supE08_pega_peca_q2_t0;
const Transition supE08_pega_peca_q2_t1;
const Transition supE08_pega_peca_q2_t0 = {&t5, &supE08_pega_peca_q2, &supE08_pega_peca_q2_t1};
const Transition supE08_pega_peca_q2_t1 = {&s5, &supE08_pega_peca_q3, NULL};

const Transition supE08_pega_peca_q3_t0;
const Transition supE08_pega_peca_q3_t1;
const Transition supE08_pega_peca_q3_t0 = {&f5, &supE08_pega_peca_q0, &supE08_pega_peca_q3_t1};
const Transition supE08_pega_peca_q3_t1 = {&t5, &supE08_pega_peca_q4, NULL};

const Transition supE08_pega_peca_q4_t0;
const Transition supE08_pega_peca_q4_t1;
const Transition supE08_pega_peca_q4_t0 = {&f5, &supE08_pega_peca_q2, &supE08_pega_peca_q4_t1};
const Transition supE08_pega_peca_q4_t1 = {&t5, &supE08_pega_peca_q4, NULL};


// states init
const State supE08_pega_peca_q0 = {true, SUP_DEBUG_STR("q0"), &supE08_pega_peca_q0_t0};
const State supE08_pega_peca_q2 = {false, SUP_DEBUG_STR("q2"), &supE08_pega_peca_q2_t0};
const State supE08_pega_peca_q3 = {false, SUP_DEBUG_STR("q3"), &supE08_pega_peca_q3_t0};
const State supE08_pega_peca_q4 = {false, SUP_DEBUG_STR("q4"), &supE08_pega_peca_q4_t0};

// Supervisor create
Supervisor supE08_pega_peca = {&supE08_pega_peca_q0, &supE08_pega_peca_q0, NULL,  &supE08_pega_peca_t5_evt0, "supE08_pega_peca"};
