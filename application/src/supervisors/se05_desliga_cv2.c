#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "se05_desliga_cv2.h"

// Supervisor specific instances
// alphabet create
Alphabet se05_desliga_cv2_ppz_on_evt0;
Alphabet se05_desliga_cv2_cv2_on_evt1;
Alphabet se05_desliga_cv2_ppx_on_evt2;
Alphabet se05_desliga_cv2_ppx_off_evt3;
Alphabet se05_desliga_cv2_cv2_off_evt4;
Alphabet se05_desliga_cv2_ppz_off_evt5;

// Alphabet init
Alphabet se05_desliga_cv2_ppz_on_evt0 = {&ppz_on, &se05_desliga_cv2_cv2_on_evt1};
Alphabet se05_desliga_cv2_cv2_on_evt1 = {&cv2_on, &se05_desliga_cv2_ppx_on_evt2};
Alphabet se05_desliga_cv2_ppx_on_evt2 = {&ppx_on, &se05_desliga_cv2_ppx_off_evt3};
Alphabet se05_desliga_cv2_ppx_off_evt3 = {&ppx_off, &se05_desliga_cv2_cv2_off_evt4};
Alphabet se05_desliga_cv2_cv2_off_evt4 = {&cv2_off, &se05_desliga_cv2_ppz_off_evt5};
Alphabet se05_desliga_cv2_ppz_off_evt5 = {&ppz_off, NULL};

// states create
State se05_desliga_cv2_q0;
State se05_desliga_cv2_q10;
State se05_desliga_cv2_q11;
State se05_desliga_cv2_q12;
State se05_desliga_cv2_q13;
State se05_desliga_cv2_q14;
State se05_desliga_cv2_q15;
State se05_desliga_cv2_q16;
State se05_desliga_cv2_q17;
State se05_desliga_cv2_q18;
State se05_desliga_cv2_q19;
State se05_desliga_cv2_q2;
State se05_desliga_cv2_q20;
State se05_desliga_cv2_q21;
State se05_desliga_cv2_q22;
State se05_desliga_cv2_q23;
State se05_desliga_cv2_q24;
State se05_desliga_cv2_q3;
State se05_desliga_cv2_q4;
State se05_desliga_cv2_q5;
State se05_desliga_cv2_q6;
State se05_desliga_cv2_q7;
State se05_desliga_cv2_q8;
State se05_desliga_cv2_q9;

// transitions create and init
Transition se05_desliga_cv2_q0_t0;
Transition se05_desliga_cv2_q0_t1;
Transition se05_desliga_cv2_q0_t2;
Transition se05_desliga_cv2_q0_t0 = {&ppz_on, &se05_desliga_cv2_q13, &se05_desliga_cv2_q0_t1};
Transition se05_desliga_cv2_q0_t1 = {&cv2_on, &se05_desliga_cv2_q4, &se05_desliga_cv2_q0_t2};
Transition se05_desliga_cv2_q0_t2 = {&ppx_on, &se05_desliga_cv2_q8, NULL};

Transition se05_desliga_cv2_q10_t0;
Transition se05_desliga_cv2_q10_t1;
Transition se05_desliga_cv2_q10_t0 = {&ppz_on, &se05_desliga_cv2_q22, &se05_desliga_cv2_q10_t1};
Transition se05_desliga_cv2_q10_t1 = {&ppx_off, &se05_desliga_cv2_q4, NULL};

Transition se05_desliga_cv2_q11_t0;
Transition se05_desliga_cv2_q11_t1;
Transition se05_desliga_cv2_q11_t0 = {&ppz_on, &se05_desliga_cv2_q24, &se05_desliga_cv2_q11_t1};
Transition se05_desliga_cv2_q11_t1 = {&ppx_off, &se05_desliga_cv2_q5, NULL};

Transition se05_desliga_cv2_q12_t0;
Transition se05_desliga_cv2_q12_t1;
Transition se05_desliga_cv2_q12_t2;
Transition se05_desliga_cv2_q12_t0 = {&ppz_on, &se05_desliga_cv2_q24, &se05_desliga_cv2_q12_t1};
Transition se05_desliga_cv2_q12_t1 = {&ppx_off, &se05_desliga_cv2_q6, &se05_desliga_cv2_q12_t2};
Transition se05_desliga_cv2_q12_t2 = {&cv2_off, &se05_desliga_cv2_q7, NULL};

Transition se05_desliga_cv2_q13_t0;
Transition se05_desliga_cv2_q13_t1;
Transition se05_desliga_cv2_q13_t2;
Transition se05_desliga_cv2_q13_t0 = {&ppz_off, &se05_desliga_cv2_q0, &se05_desliga_cv2_q13_t1};
Transition se05_desliga_cv2_q13_t1 = {&cv2_on, &se05_desliga_cv2_q16, &se05_desliga_cv2_q13_t2};
Transition se05_desliga_cv2_q13_t2 = {&ppx_on, &se05_desliga_cv2_q20, NULL};

Transition se05_desliga_cv2_q14_t0;
Transition se05_desliga_cv2_q14_t1;
Transition se05_desliga_cv2_q14_t2;
Transition se05_desliga_cv2_q14_t0 = {&cv2_on, &se05_desliga_cv2_q17, &se05_desliga_cv2_q14_t1};
Transition se05_desliga_cv2_q14_t1 = {&ppz_off, &se05_desliga_cv2_q2, &se05_desliga_cv2_q14_t2};
Transition se05_desliga_cv2_q14_t2 = {&ppx_on, &se05_desliga_cv2_q20, NULL};

Transition se05_desliga_cv2_q15_t0;
Transition se05_desliga_cv2_q15_t1;
Transition se05_desliga_cv2_q15_t2;
Transition se05_desliga_cv2_q15_t0 = {&cv2_on, &se05_desliga_cv2_q16, &se05_desliga_cv2_q15_t1};
Transition se05_desliga_cv2_q15_t1 = {&ppx_on, &se05_desliga_cv2_q21, &se05_desliga_cv2_q15_t2};
Transition se05_desliga_cv2_q15_t2 = {&ppz_off, &se05_desliga_cv2_q3, NULL};

Transition se05_desliga_cv2_q16_t0;
Transition se05_desliga_cv2_q16_t1;
Transition se05_desliga_cv2_q16_t0 = {&ppx_on, &se05_desliga_cv2_q23, &se05_desliga_cv2_q16_t1};
Transition se05_desliga_cv2_q16_t1 = {&ppz_off, &se05_desliga_cv2_q4, NULL};

Transition se05_desliga_cv2_q17_t0;
Transition se05_desliga_cv2_q17_t1;
Transition se05_desliga_cv2_q17_t0 = {&ppx_on, &se05_desliga_cv2_q23, &se05_desliga_cv2_q17_t1};
Transition se05_desliga_cv2_q17_t1 = {&ppz_off, &se05_desliga_cv2_q5, NULL};

Transition se05_desliga_cv2_q18_t0;
Transition se05_desliga_cv2_q18_t1;
Transition se05_desliga_cv2_q18_t2;
Transition se05_desliga_cv2_q18_t0 = {&cv2_off, &se05_desliga_cv2_q13, &se05_desliga_cv2_q18_t1};
Transition se05_desliga_cv2_q18_t1 = {&ppx_on, &se05_desliga_cv2_q24, &se05_desliga_cv2_q18_t2};
Transition se05_desliga_cv2_q18_t2 = {&ppz_off, &se05_desliga_cv2_q6, NULL};

Transition se05_desliga_cv2_q19_t0;
Transition se05_desliga_cv2_q19_t1;
Transition se05_desliga_cv2_q19_t2;
Transition se05_desliga_cv2_q19_t0 = {&ppx_off, &se05_desliga_cv2_q13, &se05_desliga_cv2_q19_t1};
Transition se05_desliga_cv2_q19_t1 = {&cv2_on, &se05_desliga_cv2_q22, &se05_desliga_cv2_q19_t2};
Transition se05_desliga_cv2_q19_t2 = {&ppz_off, &se05_desliga_cv2_q7, NULL};

Transition se05_desliga_cv2_q2_t0;
Transition se05_desliga_cv2_q2_t1;
Transition se05_desliga_cv2_q2_t2;
Transition se05_desliga_cv2_q2_t0 = {&ppz_on, &se05_desliga_cv2_q15, &se05_desliga_cv2_q2_t1};
Transition se05_desliga_cv2_q2_t1 = {&cv2_on, &se05_desliga_cv2_q5, &se05_desliga_cv2_q2_t2};
Transition se05_desliga_cv2_q2_t2 = {&ppx_on, &se05_desliga_cv2_q8, NULL};

Transition se05_desliga_cv2_q20_t0;
Transition se05_desliga_cv2_q20_t1;
Transition se05_desliga_cv2_q20_t2;
Transition se05_desliga_cv2_q20_t0 = {&ppx_off, &se05_desliga_cv2_q14, &se05_desliga_cv2_q20_t1};
Transition se05_desliga_cv2_q20_t1 = {&cv2_on, &se05_desliga_cv2_q23, &se05_desliga_cv2_q20_t2};
Transition se05_desliga_cv2_q20_t2 = {&ppz_off, &se05_desliga_cv2_q8, NULL};

Transition se05_desliga_cv2_q21_t0;
Transition se05_desliga_cv2_q21_t1;
Transition se05_desliga_cv2_q21_t2;
Transition se05_desliga_cv2_q21_t0 = {&ppx_off, &se05_desliga_cv2_q15, &se05_desliga_cv2_q21_t1};
Transition se05_desliga_cv2_q21_t1 = {&cv2_on, &se05_desliga_cv2_q22, &se05_desliga_cv2_q21_t2};
Transition se05_desliga_cv2_q21_t2 = {&ppz_off, &se05_desliga_cv2_q9, NULL};

Transition se05_desliga_cv2_q22_t0;
Transition se05_desliga_cv2_q22_t1;
Transition se05_desliga_cv2_q22_t0 = {&ppz_off, &se05_desliga_cv2_q10, &se05_desliga_cv2_q22_t1};
Transition se05_desliga_cv2_q22_t1 = {&ppx_off, &se05_desliga_cv2_q16, NULL};

Transition se05_desliga_cv2_q23_t0;
Transition se05_desliga_cv2_q23_t1;
Transition se05_desliga_cv2_q23_t0 = {&ppz_off, &se05_desliga_cv2_q11, &se05_desliga_cv2_q23_t1};
Transition se05_desliga_cv2_q23_t1 = {&ppx_off, &se05_desliga_cv2_q17, NULL};

Transition se05_desliga_cv2_q24_t0;
Transition se05_desliga_cv2_q24_t1;
Transition se05_desliga_cv2_q24_t2;
Transition se05_desliga_cv2_q24_t0 = {&ppz_off, &se05_desliga_cv2_q12, &se05_desliga_cv2_q24_t1};
Transition se05_desliga_cv2_q24_t1 = {&ppx_off, &se05_desliga_cv2_q18, &se05_desliga_cv2_q24_t2};
Transition se05_desliga_cv2_q24_t2 = {&cv2_off, &se05_desliga_cv2_q19, NULL};

Transition se05_desliga_cv2_q3_t0;
Transition se05_desliga_cv2_q3_t1;
Transition se05_desliga_cv2_q3_t2;
Transition se05_desliga_cv2_q3_t0 = {&ppz_on, &se05_desliga_cv2_q15, &se05_desliga_cv2_q3_t1};
Transition se05_desliga_cv2_q3_t1 = {&cv2_on, &se05_desliga_cv2_q4, &se05_desliga_cv2_q3_t2};
Transition se05_desliga_cv2_q3_t2 = {&ppx_on, &se05_desliga_cv2_q9, NULL};

Transition se05_desliga_cv2_q4_t0;
Transition se05_desliga_cv2_q4_t1;
Transition se05_desliga_cv2_q4_t0 = {&ppx_on, &se05_desliga_cv2_q11, &se05_desliga_cv2_q4_t1};
Transition se05_desliga_cv2_q4_t1 = {&ppz_on, &se05_desliga_cv2_q16, NULL};

Transition se05_desliga_cv2_q5_t0;
Transition se05_desliga_cv2_q5_t1;
Transition se05_desliga_cv2_q5_t0 = {&ppx_on, &se05_desliga_cv2_q11, &se05_desliga_cv2_q5_t1};
Transition se05_desliga_cv2_q5_t1 = {&ppz_on, &se05_desliga_cv2_q18, NULL};

Transition se05_desliga_cv2_q6_t0;
Transition se05_desliga_cv2_q6_t1;
Transition se05_desliga_cv2_q6_t2;
Transition se05_desliga_cv2_q6_t0 = {&cv2_off, &se05_desliga_cv2_q0, &se05_desliga_cv2_q6_t1};
Transition se05_desliga_cv2_q6_t1 = {&ppx_on, &se05_desliga_cv2_q12, &se05_desliga_cv2_q6_t2};
Transition se05_desliga_cv2_q6_t2 = {&ppz_on, &se05_desliga_cv2_q18, NULL};

Transition se05_desliga_cv2_q7_t0;
Transition se05_desliga_cv2_q7_t1;
Transition se05_desliga_cv2_q7_t2;
Transition se05_desliga_cv2_q7_t0 = {&ppx_off, &se05_desliga_cv2_q0, &se05_desliga_cv2_q7_t1};
Transition se05_desliga_cv2_q7_t1 = {&cv2_on, &se05_desliga_cv2_q10, &se05_desliga_cv2_q7_t2};
Transition se05_desliga_cv2_q7_t2 = {&ppz_on, &se05_desliga_cv2_q19, NULL};

Transition se05_desliga_cv2_q8_t0;
Transition se05_desliga_cv2_q8_t1;
Transition se05_desliga_cv2_q8_t2;
Transition se05_desliga_cv2_q8_t0 = {&cv2_on, &se05_desliga_cv2_q11, &se05_desliga_cv2_q8_t1};
Transition se05_desliga_cv2_q8_t1 = {&ppx_off, &se05_desliga_cv2_q2, &se05_desliga_cv2_q8_t2};
Transition se05_desliga_cv2_q8_t2 = {&ppz_on, &se05_desliga_cv2_q21, NULL};

Transition se05_desliga_cv2_q9_t0;
Transition se05_desliga_cv2_q9_t1;
Transition se05_desliga_cv2_q9_t2;
Transition se05_desliga_cv2_q9_t0 = {&cv2_on, &se05_desliga_cv2_q10, &se05_desliga_cv2_q9_t1};
Transition se05_desliga_cv2_q9_t1 = {&ppz_on, &se05_desliga_cv2_q21, &se05_desliga_cv2_q9_t2};
Transition se05_desliga_cv2_q9_t2 = {&ppx_off, &se05_desliga_cv2_q3, NULL};


// states init
State se05_desliga_cv2_q0 = {true, SUP_DEBUG_STR("q0"), &se05_desliga_cv2_q0_t0};
State se05_desliga_cv2_q10 = {false, SUP_DEBUG_STR("q10"), &se05_desliga_cv2_q10_t0};
State se05_desliga_cv2_q11 = {false, SUP_DEBUG_STR("q11"), &se05_desliga_cv2_q11_t0};
State se05_desliga_cv2_q12 = {false, SUP_DEBUG_STR("q12"), &se05_desliga_cv2_q12_t0};
State se05_desliga_cv2_q13 = {false, SUP_DEBUG_STR("q13"), &se05_desliga_cv2_q13_t0};
State se05_desliga_cv2_q14 = {false, SUP_DEBUG_STR("q14"), &se05_desliga_cv2_q14_t0};
State se05_desliga_cv2_q15 = {false, SUP_DEBUG_STR("q15"), &se05_desliga_cv2_q15_t0};
State se05_desliga_cv2_q16 = {false, SUP_DEBUG_STR("q16"), &se05_desliga_cv2_q16_t0};
State se05_desliga_cv2_q17 = {false, SUP_DEBUG_STR("q17"), &se05_desliga_cv2_q17_t0};
State se05_desliga_cv2_q18 = {false, SUP_DEBUG_STR("q18"), &se05_desliga_cv2_q18_t0};
State se05_desliga_cv2_q19 = {false, SUP_DEBUG_STR("q19"), &se05_desliga_cv2_q19_t0};
State se05_desliga_cv2_q2 = {false, SUP_DEBUG_STR("q2"), &se05_desliga_cv2_q2_t0};
State se05_desliga_cv2_q20 = {false, SUP_DEBUG_STR("q20"), &se05_desliga_cv2_q20_t0};
State se05_desliga_cv2_q21 = {false, SUP_DEBUG_STR("q21"), &se05_desliga_cv2_q21_t0};
State se05_desliga_cv2_q22 = {false, SUP_DEBUG_STR("q22"), &se05_desliga_cv2_q22_t0};
State se05_desliga_cv2_q23 = {false, SUP_DEBUG_STR("q23"), &se05_desliga_cv2_q23_t0};
State se05_desliga_cv2_q24 = {false, SUP_DEBUG_STR("q24"), &se05_desliga_cv2_q24_t0};
State se05_desliga_cv2_q3 = {false, SUP_DEBUG_STR("q3"), &se05_desliga_cv2_q3_t0};
State se05_desliga_cv2_q4 = {false, SUP_DEBUG_STR("q4"), &se05_desliga_cv2_q4_t0};
State se05_desliga_cv2_q5 = {false, SUP_DEBUG_STR("q5"), &se05_desliga_cv2_q5_t0};
State se05_desliga_cv2_q6 = {false, SUP_DEBUG_STR("q6"), &se05_desliga_cv2_q6_t0};
State se05_desliga_cv2_q7 = {false, SUP_DEBUG_STR("q7"), &se05_desliga_cv2_q7_t0};
State se05_desliga_cv2_q8 = {false, SUP_DEBUG_STR("q8"), &se05_desliga_cv2_q8_t0};
State se05_desliga_cv2_q9 = {false, SUP_DEBUG_STR("q9"), &se05_desliga_cv2_q9_t0};

// Supervisor create
Supervisor se05_desliga_cv2 = {&se05_desliga_cv2_q0, &se05_desliga_cv2_q0, NULL,  &se05_desliga_cv2_ppz_on_evt0, "se05_desliga_cv2"};
