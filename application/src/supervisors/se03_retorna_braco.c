#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "se03_retorna_braco.h"

// Supervisor specific instances
// alphabet create
Alphabet se03_retorna_braco_ppz_moving_evt0;
Alphabet se03_retorna_braco_ppg_on_evt1;
Alphabet se03_retorna_braco_ppx_on_evt2;
Alphabet se03_retorna_braco_ppg_off_evt3;
Alphabet se03_retorna_braco_ppx_off_evt4;
Alphabet se03_retorna_braco_ppz_stoped_evt5;

// Alphabet init
Alphabet se03_retorna_braco_ppz_moving_evt0 = {&ppz_moving, &se03_retorna_braco_ppg_on_evt1};
Alphabet se03_retorna_braco_ppg_on_evt1 = {&ppg_on, &se03_retorna_braco_ppx_on_evt2};
Alphabet se03_retorna_braco_ppx_on_evt2 = {&ppx_on, &se03_retorna_braco_ppg_off_evt3};
Alphabet se03_retorna_braco_ppg_off_evt3 = {&ppg_off, &se03_retorna_braco_ppx_off_evt4};
Alphabet se03_retorna_braco_ppx_off_evt4 = {&ppx_off, &se03_retorna_braco_ppz_stoped_evt5};
Alphabet se03_retorna_braco_ppz_stoped_evt5 = {&ppz_stoped, NULL};

// states create
State se03_retorna_braco_q0;
State se03_retorna_braco_q10;
State se03_retorna_braco_q11;
State se03_retorna_braco_q12;
State se03_retorna_braco_q13;
State se03_retorna_braco_q14;
State se03_retorna_braco_q15;
State se03_retorna_braco_q16;
State se03_retorna_braco_q17;
State se03_retorna_braco_q18;
State se03_retorna_braco_q19;
State se03_retorna_braco_q2;
State se03_retorna_braco_q20;
State se03_retorna_braco_q21;
State se03_retorna_braco_q22;
State se03_retorna_braco_q23;
State se03_retorna_braco_q24;
State se03_retorna_braco_q3;
State se03_retorna_braco_q4;
State se03_retorna_braco_q5;
State se03_retorna_braco_q6;
State se03_retorna_braco_q7;
State se03_retorna_braco_q8;
State se03_retorna_braco_q9;

// transitions create and init
Transition se03_retorna_braco_q0_t0;
Transition se03_retorna_braco_q0_t1;
Transition se03_retorna_braco_q0_t2;
Transition se03_retorna_braco_q0_t0 = {&ppz_moving, &se03_retorna_braco_q13, &se03_retorna_braco_q0_t1};
Transition se03_retorna_braco_q0_t1 = {&ppg_on, &se03_retorna_braco_q4, &se03_retorna_braco_q0_t2};
Transition se03_retorna_braco_q0_t2 = {&ppx_on, &se03_retorna_braco_q7, NULL};

Transition se03_retorna_braco_q10_t0;
Transition se03_retorna_braco_q10_t1;
Transition se03_retorna_braco_q10_t0 = {&ppz_moving, &se03_retorna_braco_q22, &se03_retorna_braco_q10_t1};
Transition se03_retorna_braco_q10_t1 = {&ppg_off, &se03_retorna_braco_q9, NULL};

Transition se03_retorna_braco_q11_t0;
Transition se03_retorna_braco_q11_t1;
Transition se03_retorna_braco_q11_t2;
Transition se03_retorna_braco_q11_t0 = {&ppz_moving, &se03_retorna_braco_q23, &se03_retorna_braco_q11_t1};
Transition se03_retorna_braco_q11_t1 = {&ppx_off, &se03_retorna_braco_q4, &se03_retorna_braco_q11_t2};
Transition se03_retorna_braco_q11_t2 = {&ppg_off, &se03_retorna_braco_q8, NULL};

Transition se03_retorna_braco_q12_t0;
Transition se03_retorna_braco_q12_t1;
Transition se03_retorna_braco_q12_t0 = {&ppz_moving, &se03_retorna_braco_q24, &se03_retorna_braco_q12_t1};
Transition se03_retorna_braco_q12_t1 = {&ppg_off, &se03_retorna_braco_q9, NULL};

Transition se03_retorna_braco_q13_t0;
Transition se03_retorna_braco_q13_t1;
Transition se03_retorna_braco_q13_t2;
Transition se03_retorna_braco_q13_t0 = {&ppz_stoped, &se03_retorna_braco_q0, &se03_retorna_braco_q13_t1};
Transition se03_retorna_braco_q13_t1 = {&ppg_on, &se03_retorna_braco_q16, &se03_retorna_braco_q13_t2};
Transition se03_retorna_braco_q13_t2 = {&ppx_on, &se03_retorna_braco_q19, NULL};

Transition se03_retorna_braco_q14_t0;
Transition se03_retorna_braco_q14_t1;
Transition se03_retorna_braco_q14_t2;
Transition se03_retorna_braco_q14_t0 = {&ppg_on, &se03_retorna_braco_q17, &se03_retorna_braco_q14_t1};
Transition se03_retorna_braco_q14_t1 = {&ppz_stoped, &se03_retorna_braco_q2, &se03_retorna_braco_q14_t2};
Transition se03_retorna_braco_q14_t2 = {&ppx_on, &se03_retorna_braco_q20, NULL};

Transition se03_retorna_braco_q15_t0;
Transition se03_retorna_braco_q15_t1;
Transition se03_retorna_braco_q15_t2;
Transition se03_retorna_braco_q15_t0 = {&ppg_on, &se03_retorna_braco_q18, &se03_retorna_braco_q15_t1};
Transition se03_retorna_braco_q15_t1 = {&ppz_stoped, &se03_retorna_braco_q2, &se03_retorna_braco_q15_t2};
Transition se03_retorna_braco_q15_t2 = {&ppx_on, &se03_retorna_braco_q21, NULL};

Transition se03_retorna_braco_q16_t0;
Transition se03_retorna_braco_q16_t1;
Transition se03_retorna_braco_q16_t2;
Transition se03_retorna_braco_q16_t0 = {&ppg_off, &se03_retorna_braco_q15, &se03_retorna_braco_q16_t1};
Transition se03_retorna_braco_q16_t1 = {&ppx_on, &se03_retorna_braco_q22, &se03_retorna_braco_q16_t2};
Transition se03_retorna_braco_q16_t2 = {&ppz_stoped, &se03_retorna_braco_q4, NULL};

Transition se03_retorna_braco_q17_t0;
Transition se03_retorna_braco_q17_t1;
Transition se03_retorna_braco_q17_t2;
Transition se03_retorna_braco_q17_t0 = {&ppg_off, &se03_retorna_braco_q14, &se03_retorna_braco_q17_t1};
Transition se03_retorna_braco_q17_t1 = {&ppx_on, &se03_retorna_braco_q23, &se03_retorna_braco_q17_t2};
Transition se03_retorna_braco_q17_t2 = {&ppz_stoped, &se03_retorna_braco_q5, NULL};

Transition se03_retorna_braco_q18_t0;
Transition se03_retorna_braco_q18_t1;
Transition se03_retorna_braco_q18_t2;
Transition se03_retorna_braco_q18_t0 = {&ppg_off, &se03_retorna_braco_q15, &se03_retorna_braco_q18_t1};
Transition se03_retorna_braco_q18_t1 = {&ppx_on, &se03_retorna_braco_q24, &se03_retorna_braco_q18_t2};
Transition se03_retorna_braco_q18_t2 = {&ppz_stoped, &se03_retorna_braco_q5, NULL};

Transition se03_retorna_braco_q19_t0;
Transition se03_retorna_braco_q19_t1;
Transition se03_retorna_braco_q19_t0 = {&ppg_on, &se03_retorna_braco_q22, &se03_retorna_braco_q19_t1};
Transition se03_retorna_braco_q19_t1 = {&ppz_stoped, &se03_retorna_braco_q7, NULL};

Transition se03_retorna_braco_q2_t0;
Transition se03_retorna_braco_q2_t1;
Transition se03_retorna_braco_q2_t2;
Transition se03_retorna_braco_q2_t0 = {&ppz_moving, &se03_retorna_braco_q14, &se03_retorna_braco_q2_t1};
Transition se03_retorna_braco_q2_t1 = {&ppg_on, &se03_retorna_braco_q5, &se03_retorna_braco_q2_t2};
Transition se03_retorna_braco_q2_t2 = {&ppx_on, &se03_retorna_braco_q8, NULL};

Transition se03_retorna_braco_q20_t0;
Transition se03_retorna_braco_q20_t1;
Transition se03_retorna_braco_q20_t2;
Transition se03_retorna_braco_q20_t0 = {&ppx_off, &se03_retorna_braco_q13, &se03_retorna_braco_q20_t1};
Transition se03_retorna_braco_q20_t1 = {&ppg_on, &se03_retorna_braco_q23, &se03_retorna_braco_q20_t2};
Transition se03_retorna_braco_q20_t2 = {&ppz_stoped, &se03_retorna_braco_q8, NULL};

Transition se03_retorna_braco_q21_t0;
Transition se03_retorna_braco_q21_t1;
Transition se03_retorna_braco_q21_t0 = {&ppg_on, &se03_retorna_braco_q24, &se03_retorna_braco_q21_t1};
Transition se03_retorna_braco_q21_t1 = {&ppz_stoped, &se03_retorna_braco_q8, NULL};

Transition se03_retorna_braco_q22_t0;
Transition se03_retorna_braco_q22_t1;
Transition se03_retorna_braco_q22_t0 = {&ppz_stoped, &se03_retorna_braco_q10, &se03_retorna_braco_q22_t1};
Transition se03_retorna_braco_q22_t1 = {&ppg_off, &se03_retorna_braco_q21, NULL};

Transition se03_retorna_braco_q23_t0;
Transition se03_retorna_braco_q23_t1;
Transition se03_retorna_braco_q23_t2;
Transition se03_retorna_braco_q23_t0 = {&ppz_stoped, &se03_retorna_braco_q11, &se03_retorna_braco_q23_t1};
Transition se03_retorna_braco_q23_t1 = {&ppx_off, &se03_retorna_braco_q16, &se03_retorna_braco_q23_t2};
Transition se03_retorna_braco_q23_t2 = {&ppg_off, &se03_retorna_braco_q20, NULL};

Transition se03_retorna_braco_q24_t0;
Transition se03_retorna_braco_q24_t1;
Transition se03_retorna_braco_q24_t0 = {&ppz_stoped, &se03_retorna_braco_q11, &se03_retorna_braco_q24_t1};
Transition se03_retorna_braco_q24_t1 = {&ppg_off, &se03_retorna_braco_q21, NULL};

Transition se03_retorna_braco_q3_t0;
Transition se03_retorna_braco_q3_t1;
Transition se03_retorna_braco_q3_t2;
Transition se03_retorna_braco_q3_t0 = {&ppz_moving, &se03_retorna_braco_q15, &se03_retorna_braco_q3_t1};
Transition se03_retorna_braco_q3_t1 = {&ppg_on, &se03_retorna_braco_q6, &se03_retorna_braco_q3_t2};
Transition se03_retorna_braco_q3_t2 = {&ppx_on, &se03_retorna_braco_q9, NULL};

Transition se03_retorna_braco_q4_t0;
Transition se03_retorna_braco_q4_t1;
Transition se03_retorna_braco_q4_t2;
Transition se03_retorna_braco_q4_t0 = {&ppx_on, &se03_retorna_braco_q10, &se03_retorna_braco_q4_t1};
Transition se03_retorna_braco_q4_t1 = {&ppz_moving, &se03_retorna_braco_q16, &se03_retorna_braco_q4_t2};
Transition se03_retorna_braco_q4_t2 = {&ppg_off, &se03_retorna_braco_q3, NULL};

Transition se03_retorna_braco_q5_t0;
Transition se03_retorna_braco_q5_t1;
Transition se03_retorna_braco_q5_t2;
Transition se03_retorna_braco_q5_t0 = {&ppx_on, &se03_retorna_braco_q11, &se03_retorna_braco_q5_t1};
Transition se03_retorna_braco_q5_t1 = {&ppz_moving, &se03_retorna_braco_q17, &se03_retorna_braco_q5_t2};
Transition se03_retorna_braco_q5_t2 = {&ppg_off, &se03_retorna_braco_q2, NULL};

Transition se03_retorna_braco_q6_t0;
Transition se03_retorna_braco_q6_t1;
Transition se03_retorna_braco_q6_t2;
Transition se03_retorna_braco_q6_t0 = {&ppx_on, &se03_retorna_braco_q12, &se03_retorna_braco_q6_t1};
Transition se03_retorna_braco_q6_t1 = {&ppz_moving, &se03_retorna_braco_q18, &se03_retorna_braco_q6_t2};
Transition se03_retorna_braco_q6_t2 = {&ppg_off, &se03_retorna_braco_q3, NULL};

Transition se03_retorna_braco_q7_t0;
Transition se03_retorna_braco_q7_t1;
Transition se03_retorna_braco_q7_t0 = {&ppg_on, &se03_retorna_braco_q10, &se03_retorna_braco_q7_t1};
Transition se03_retorna_braco_q7_t1 = {&ppz_moving, &se03_retorna_braco_q19, NULL};

Transition se03_retorna_braco_q8_t0;
Transition se03_retorna_braco_q8_t1;
Transition se03_retorna_braco_q8_t2;
Transition se03_retorna_braco_q8_t0 = {&ppx_off, &se03_retorna_braco_q0, &se03_retorna_braco_q8_t1};
Transition se03_retorna_braco_q8_t1 = {&ppg_on, &se03_retorna_braco_q11, &se03_retorna_braco_q8_t2};
Transition se03_retorna_braco_q8_t2 = {&ppz_moving, &se03_retorna_braco_q20, NULL};

Transition se03_retorna_braco_q9_t0;
Transition se03_retorna_braco_q9_t1;
Transition se03_retorna_braco_q9_t0 = {&ppg_on, &se03_retorna_braco_q12, &se03_retorna_braco_q9_t1};
Transition se03_retorna_braco_q9_t1 = {&ppz_moving, &se03_retorna_braco_q21, NULL};


// states init
State se03_retorna_braco_q0 = {true, SUP_DEBUG_STR("q0"), &se03_retorna_braco_q0_t0};
State se03_retorna_braco_q10 = {false, SUP_DEBUG_STR("q10"), &se03_retorna_braco_q10_t0};
State se03_retorna_braco_q11 = {false, SUP_DEBUG_STR("q11"), &se03_retorna_braco_q11_t0};
State se03_retorna_braco_q12 = {false, SUP_DEBUG_STR("q12"), &se03_retorna_braco_q12_t0};
State se03_retorna_braco_q13 = {false, SUP_DEBUG_STR("q13"), &se03_retorna_braco_q13_t0};
State se03_retorna_braco_q14 = {false, SUP_DEBUG_STR("q14"), &se03_retorna_braco_q14_t0};
State se03_retorna_braco_q15 = {false, SUP_DEBUG_STR("q15"), &se03_retorna_braco_q15_t0};
State se03_retorna_braco_q16 = {false, SUP_DEBUG_STR("q16"), &se03_retorna_braco_q16_t0};
State se03_retorna_braco_q17 = {false, SUP_DEBUG_STR("q17"), &se03_retorna_braco_q17_t0};
State se03_retorna_braco_q18 = {false, SUP_DEBUG_STR("q18"), &se03_retorna_braco_q18_t0};
State se03_retorna_braco_q19 = {false, SUP_DEBUG_STR("q19"), &se03_retorna_braco_q19_t0};
State se03_retorna_braco_q2 = {false, SUP_DEBUG_STR("q2"), &se03_retorna_braco_q2_t0};
State se03_retorna_braco_q20 = {false, SUP_DEBUG_STR("q20"), &se03_retorna_braco_q20_t0};
State se03_retorna_braco_q21 = {false, SUP_DEBUG_STR("q21"), &se03_retorna_braco_q21_t0};
State se03_retorna_braco_q22 = {false, SUP_DEBUG_STR("q22"), &se03_retorna_braco_q22_t0};
State se03_retorna_braco_q23 = {false, SUP_DEBUG_STR("q23"), &se03_retorna_braco_q23_t0};
State se03_retorna_braco_q24 = {false, SUP_DEBUG_STR("q24"), &se03_retorna_braco_q24_t0};
State se03_retorna_braco_q3 = {false, SUP_DEBUG_STR("q3"), &se03_retorna_braco_q3_t0};
State se03_retorna_braco_q4 = {false, SUP_DEBUG_STR("q4"), &se03_retorna_braco_q4_t0};
State se03_retorna_braco_q5 = {false, SUP_DEBUG_STR("q5"), &se03_retorna_braco_q5_t0};
State se03_retorna_braco_q6 = {false, SUP_DEBUG_STR("q6"), &se03_retorna_braco_q6_t0};
State se03_retorna_braco_q7 = {false, SUP_DEBUG_STR("q7"), &se03_retorna_braco_q7_t0};
State se03_retorna_braco_q8 = {false, SUP_DEBUG_STR("q8"), &se03_retorna_braco_q8_t0};
State se03_retorna_braco_q9 = {false, SUP_DEBUG_STR("q9"), &se03_retorna_braco_q9_t0};

// Supervisor create
Supervisor se03_retorna_braco = {&se03_retorna_braco_q0, &se03_retorna_braco_q0, NULL,  &se03_retorna_braco_ppz_moving_evt0, "se03_retorna_braco"};
