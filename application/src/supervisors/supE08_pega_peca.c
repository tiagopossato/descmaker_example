#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "supE08_pega_peca.h"

// Supervisor specific instances
// alphabet create
Alphabet supE08_pega_peca_t5_evt0;
Alphabet supE08_pega_peca_s5_evt1;
Alphabet supE08_pega_peca_f5_evt2;

// Alphabet init
Alphabet supE08_pega_peca_t5_evt0 = {&t5, &supE08_pega_peca_s5_evt1};
Alphabet supE08_pega_peca_s5_evt1 = {&s5, &supE08_pega_peca_f5_evt2};
Alphabet supE08_pega_peca_f5_evt2 = {&f5, NULL};

// states create
State supE08_pega_peca_q0;
State supE08_pega_peca_q2;
State supE08_pega_peca_q3;
State supE08_pega_peca_q4;

// transitions create and init
Transition supE08_pega_peca_q0_t0;
Transition supE08_pega_peca_q0_t0 = {&t5, &supE08_pega_peca_q2, NULL};

Transition supE08_pega_peca_q2_t0;
Transition supE08_pega_peca_q2_t1;
Transition supE08_pega_peca_q2_t0 = {&t5, &supE08_pega_peca_q2, &supE08_pega_peca_q2_t1};
Transition supE08_pega_peca_q2_t1 = {&s5, &supE08_pega_peca_q3, NULL};

Transition supE08_pega_peca_q3_t0;
Transition supE08_pega_peca_q3_t1;
Transition supE08_pega_peca_q3_t0 = {&f5, &supE08_pega_peca_q0, &supE08_pega_peca_q3_t1};
Transition supE08_pega_peca_q3_t1 = {&t5, &supE08_pega_peca_q4, NULL};

Transition supE08_pega_peca_q4_t0;
Transition supE08_pega_peca_q4_t1;
Transition supE08_pega_peca_q4_t0 = {&f5, &supE08_pega_peca_q2, &supE08_pega_peca_q4_t1};
Transition supE08_pega_peca_q4_t1 = {&t5, &supE08_pega_peca_q4, NULL};


// states init
State supE08_pega_peca_q0 = {true, SUP_DEBUG_STR("q0"), &supE08_pega_peca_q0_t0};
State supE08_pega_peca_q2 = {false, SUP_DEBUG_STR("q2"), &supE08_pega_peca_q2_t0};
State supE08_pega_peca_q3 = {false, SUP_DEBUG_STR("q3"), &supE08_pega_peca_q3_t0};
State supE08_pega_peca_q4 = {false, SUP_DEBUG_STR("q4"), &supE08_pega_peca_q4_t0};

// Supervisor create
Supervisor supE08_pega_peca = {&supE08_pega_peca_q0, &supE08_pega_peca_q0, NULL,  &supE08_pega_peca_t5_evt0, "supE08_pega_peca"};
