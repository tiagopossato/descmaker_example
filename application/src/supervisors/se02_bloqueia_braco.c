#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "se02_bloqueia_braco.h"

// Supervisor specific instances
// alphabet create
Alphabet se02_bloqueia_braco_ppx_moving_evt0;
Alphabet se02_bloqueia_braco_ppx_on_evt1;
Alphabet se02_bloqueia_braco_ppz_on_evt2;
Alphabet se02_bloqueia_braco_ppz_off_evt3;
Alphabet se02_bloqueia_braco_ppx_off_evt4;
Alphabet se02_bloqueia_braco_ppx_stoped_evt5;

// Alphabet init
Alphabet se02_bloqueia_braco_ppx_moving_evt0 = {&ppx_moving, &se02_bloqueia_braco_ppx_on_evt1};
Alphabet se02_bloqueia_braco_ppx_on_evt1 = {&ppx_on, &se02_bloqueia_braco_ppz_on_evt2};
Alphabet se02_bloqueia_braco_ppz_on_evt2 = {&ppz_on, &se02_bloqueia_braco_ppz_off_evt3};
Alphabet se02_bloqueia_braco_ppz_off_evt3 = {&ppz_off, &se02_bloqueia_braco_ppx_off_evt4};
Alphabet se02_bloqueia_braco_ppx_off_evt4 = {&ppx_off, &se02_bloqueia_braco_ppx_stoped_evt5};
Alphabet se02_bloqueia_braco_ppx_stoped_evt5 = {&ppx_stoped, NULL};

// states create
State se02_bloqueia_braco_q0;
State se02_bloqueia_braco_q10;
State se02_bloqueia_braco_q11;
State se02_bloqueia_braco_q12;
State se02_bloqueia_braco_q2;
State se02_bloqueia_braco_q3;
State se02_bloqueia_braco_q4;
State se02_bloqueia_braco_q5;
State se02_bloqueia_braco_q6;
State se02_bloqueia_braco_q7;
State se02_bloqueia_braco_q8;
State se02_bloqueia_braco_q9;

// transitions create and init
Transition se02_bloqueia_braco_q0_t0;
Transition se02_bloqueia_braco_q0_t1;
Transition se02_bloqueia_braco_q0_t2;
Transition se02_bloqueia_braco_q0_t0 = {&ppx_moving, &se02_bloqueia_braco_q3, &se02_bloqueia_braco_q0_t1};
Transition se02_bloqueia_braco_q0_t1 = {&ppx_on, &se02_bloqueia_braco_q5, &se02_bloqueia_braco_q0_t2};
Transition se02_bloqueia_braco_q0_t2 = {&ppz_on, &se02_bloqueia_braco_q7, NULL};

Transition se02_bloqueia_braco_q10_t0;
Transition se02_bloqueia_braco_q10_t1;
Transition se02_bloqueia_braco_q10_t2;
Transition se02_bloqueia_braco_q10_t0 = {&ppx_moving, &se02_bloqueia_braco_q12, &se02_bloqueia_braco_q10_t1};
Transition se02_bloqueia_braco_q10_t1 = {&ppz_off, &se02_bloqueia_braco_q4, &se02_bloqueia_braco_q10_t2};
Transition se02_bloqueia_braco_q10_t2 = {&ppx_off, &se02_bloqueia_braco_q8, NULL};

Transition se02_bloqueia_braco_q11_t0;
Transition se02_bloqueia_braco_q11_t1;
Transition se02_bloqueia_braco_q11_t2;
Transition se02_bloqueia_braco_q11_t0 = {&ppx_moving, &se02_bloqueia_braco_q12, &se02_bloqueia_braco_q11_t1};
Transition se02_bloqueia_braco_q11_t1 = {&ppz_off, &se02_bloqueia_braco_q5, &se02_bloqueia_braco_q11_t2};
Transition se02_bloqueia_braco_q11_t2 = {&ppx_off, &se02_bloqueia_braco_q8, NULL};

Transition se02_bloqueia_braco_q12_t0;
Transition se02_bloqueia_braco_q12_t1;
Transition se02_bloqueia_braco_q12_t2;
Transition se02_bloqueia_braco_q12_t0 = {&ppx_stoped, &se02_bloqueia_braco_q10, &se02_bloqueia_braco_q12_t1};
Transition se02_bloqueia_braco_q12_t1 = {&ppz_off, &se02_bloqueia_braco_q6, &se02_bloqueia_braco_q12_t2};
Transition se02_bloqueia_braco_q12_t2 = {&ppx_off, &se02_bloqueia_braco_q9, NULL};

Transition se02_bloqueia_braco_q2_t0;
Transition se02_bloqueia_braco_q2_t1;
Transition se02_bloqueia_braco_q2_t0 = {&ppx_moving, &se02_bloqueia_braco_q3, &se02_bloqueia_braco_q2_t1};
Transition se02_bloqueia_braco_q2_t1 = {&ppx_on, &se02_bloqueia_braco_q5, NULL};

Transition se02_bloqueia_braco_q3_t0;
Transition se02_bloqueia_braco_q3_t1;
Transition se02_bloqueia_braco_q3_t0 = {&ppx_stoped, &se02_bloqueia_braco_q0, &se02_bloqueia_braco_q3_t1};
Transition se02_bloqueia_braco_q3_t1 = {&ppx_on, &se02_bloqueia_braco_q6, NULL};

Transition se02_bloqueia_braco_q4_t0;
Transition se02_bloqueia_braco_q4_t1;
Transition se02_bloqueia_braco_q4_t2;
Transition se02_bloqueia_braco_q4_t0 = {&ppz_on, &se02_bloqueia_braco_q10, &se02_bloqueia_braco_q4_t1};
Transition se02_bloqueia_braco_q4_t1 = {&ppx_off, &se02_bloqueia_braco_q2, &se02_bloqueia_braco_q4_t2};
Transition se02_bloqueia_braco_q4_t2 = {&ppx_moving, &se02_bloqueia_braco_q6, NULL};

Transition se02_bloqueia_braco_q5_t0;
Transition se02_bloqueia_braco_q5_t1;
Transition se02_bloqueia_braco_q5_t0 = {&ppx_off, &se02_bloqueia_braco_q2, &se02_bloqueia_braco_q5_t1};
Transition se02_bloqueia_braco_q5_t1 = {&ppx_moving, &se02_bloqueia_braco_q6, NULL};

Transition se02_bloqueia_braco_q6_t0;
Transition se02_bloqueia_braco_q6_t1;
Transition se02_bloqueia_braco_q6_t0 = {&ppx_off, &se02_bloqueia_braco_q3, &se02_bloqueia_braco_q6_t1};
Transition se02_bloqueia_braco_q6_t1 = {&ppx_stoped, &se02_bloqueia_braco_q4, NULL};

Transition se02_bloqueia_braco_q7_t0;
Transition se02_bloqueia_braco_q7_t1;
Transition se02_bloqueia_braco_q7_t2;
Transition se02_bloqueia_braco_q7_t0 = {&ppz_off, &se02_bloqueia_braco_q0, &se02_bloqueia_braco_q7_t1};
Transition se02_bloqueia_braco_q7_t1 = {&ppx_on, &se02_bloqueia_braco_q11, &se02_bloqueia_braco_q7_t2};
Transition se02_bloqueia_braco_q7_t2 = {&ppx_moving, &se02_bloqueia_braco_q9, NULL};

Transition se02_bloqueia_braco_q8_t0;
Transition se02_bloqueia_braco_q8_t1;
Transition se02_bloqueia_braco_q8_t2;
Transition se02_bloqueia_braco_q8_t0 = {&ppx_on, &se02_bloqueia_braco_q11, &se02_bloqueia_braco_q8_t1};
Transition se02_bloqueia_braco_q8_t1 = {&ppz_off, &se02_bloqueia_braco_q2, &se02_bloqueia_braco_q8_t2};
Transition se02_bloqueia_braco_q8_t2 = {&ppx_moving, &se02_bloqueia_braco_q9, NULL};

Transition se02_bloqueia_braco_q9_t0;
Transition se02_bloqueia_braco_q9_t1;
Transition se02_bloqueia_braco_q9_t2;
Transition se02_bloqueia_braco_q9_t0 = {&ppx_on, &se02_bloqueia_braco_q12, &se02_bloqueia_braco_q9_t1};
Transition se02_bloqueia_braco_q9_t1 = {&ppz_off, &se02_bloqueia_braco_q3, &se02_bloqueia_braco_q9_t2};
Transition se02_bloqueia_braco_q9_t2 = {&ppx_stoped, &se02_bloqueia_braco_q7, NULL};


// states init
State se02_bloqueia_braco_q0 = {true, SUP_DEBUG_STR("q0"), &se02_bloqueia_braco_q0_t0};
State se02_bloqueia_braco_q10 = {false, SUP_DEBUG_STR("q10"), &se02_bloqueia_braco_q10_t0};
State se02_bloqueia_braco_q11 = {false, SUP_DEBUG_STR("q11"), &se02_bloqueia_braco_q11_t0};
State se02_bloqueia_braco_q12 = {false, SUP_DEBUG_STR("q12"), &se02_bloqueia_braco_q12_t0};
State se02_bloqueia_braco_q2 = {false, SUP_DEBUG_STR("q2"), &se02_bloqueia_braco_q2_t0};
State se02_bloqueia_braco_q3 = {false, SUP_DEBUG_STR("q3"), &se02_bloqueia_braco_q3_t0};
State se02_bloqueia_braco_q4 = {false, SUP_DEBUG_STR("q4"), &se02_bloqueia_braco_q4_t0};
State se02_bloqueia_braco_q5 = {false, SUP_DEBUG_STR("q5"), &se02_bloqueia_braco_q5_t0};
State se02_bloqueia_braco_q6 = {false, SUP_DEBUG_STR("q6"), &se02_bloqueia_braco_q6_t0};
State se02_bloqueia_braco_q7 = {false, SUP_DEBUG_STR("q7"), &se02_bloqueia_braco_q7_t0};
State se02_bloqueia_braco_q8 = {false, SUP_DEBUG_STR("q8"), &se02_bloqueia_braco_q8_t0};
State se02_bloqueia_braco_q9 = {false, SUP_DEBUG_STR("q9"), &se02_bloqueia_braco_q9_t0};

// Supervisor create
Supervisor se02_bloqueia_braco = {&se02_bloqueia_braco_q0, &se02_bloqueia_braco_q0, NULL,  &se02_bloqueia_braco_ppx_moving_evt0, "se02_bloqueia_braco"};
