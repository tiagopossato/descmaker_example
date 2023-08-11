#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "se02_desce_braco.h"

// Supervisor specific instances
// alphabet create
Alphabet se02_desce_braco_ppx_on_evt0;
Alphabet se02_desce_braco_s1_evt1;
Alphabet se02_desce_braco_ppx_moving_evt2;
Alphabet se02_desce_braco_ppz_on_evt3;
Alphabet se02_desce_braco_ppx_stoped_evt4;
Alphabet se02_desce_braco_ppx_off_evt5;
Alphabet se02_desce_braco_ppz_off_evt6;

// Alphabet init
Alphabet se02_desce_braco_ppx_on_evt0 = {&ppx_on, &se02_desce_braco_s1_evt1};
Alphabet se02_desce_braco_s1_evt1 = {&s1, &se02_desce_braco_ppx_moving_evt2};
Alphabet se02_desce_braco_ppx_moving_evt2 = {&ppx_moving, &se02_desce_braco_ppz_on_evt3};
Alphabet se02_desce_braco_ppz_on_evt3 = {&ppz_on, &se02_desce_braco_ppx_stoped_evt4};
Alphabet se02_desce_braco_ppx_stoped_evt4 = {&ppx_stoped, &se02_desce_braco_ppx_off_evt5};
Alphabet se02_desce_braco_ppx_off_evt5 = {&ppx_off, &se02_desce_braco_ppz_off_evt6};
Alphabet se02_desce_braco_ppz_off_evt6 = {&ppz_off, NULL};

// states create
State se02_desce_braco_q0;
State se02_desce_braco_q1;
State se02_desce_braco_q10;
State se02_desce_braco_q11;
State se02_desce_braco_q12;
State se02_desce_braco_q13;
State se02_desce_braco_q14;
State se02_desce_braco_q15;
State se02_desce_braco_q16;
State se02_desce_braco_q17;
State se02_desce_braco_q18;
State se02_desce_braco_q19;
State se02_desce_braco_q20;
State se02_desce_braco_q21;
State se02_desce_braco_q22;
State se02_desce_braco_q23;
State se02_desce_braco_q24;
State se02_desce_braco_q25;
State se02_desce_braco_q26;
State se02_desce_braco_q27;
State se02_desce_braco_q28;
State se02_desce_braco_q29;
State se02_desce_braco_q3;
State se02_desce_braco_q30;
State se02_desce_braco_q31;
State se02_desce_braco_q32;
State se02_desce_braco_q33;
State se02_desce_braco_q34;
State se02_desce_braco_q35;
State se02_desce_braco_q36;
State se02_desce_braco_q37;
State se02_desce_braco_q38;
State se02_desce_braco_q39;
State se02_desce_braco_q4;
State se02_desce_braco_q40;
State se02_desce_braco_q5;
State se02_desce_braco_q6;
State se02_desce_braco_q7;
State se02_desce_braco_q8;
State se02_desce_braco_q9;

// transitions create and init
Transition se02_desce_braco_q0_t0;
Transition se02_desce_braco_q0_t1;
Transition se02_desce_braco_q0_t2;
Transition se02_desce_braco_q0_t0 = {&ppx_on, &se02_desce_braco_q14, &se02_desce_braco_q0_t1};
Transition se02_desce_braco_q0_t1 = {&s1, &se02_desce_braco_q3, &se02_desce_braco_q0_t2};
Transition se02_desce_braco_q0_t2 = {&ppx_moving, &se02_desce_braco_q7, NULL};

Transition se02_desce_braco_q1_t0;
Transition se02_desce_braco_q1_t1;
Transition se02_desce_braco_q1_t2;
Transition se02_desce_braco_q1_t0 = {&s1, &se02_desce_braco_q0, &se02_desce_braco_q1_t1};
Transition se02_desce_braco_q1_t1 = {&ppx_on, &se02_desce_braco_q11, &se02_desce_braco_q1_t2};
Transition se02_desce_braco_q1_t2 = {&ppx_moving, &se02_desce_braco_q6, NULL};

Transition se02_desce_braco_q10_t0;
Transition se02_desce_braco_q10_t1;
Transition se02_desce_braco_q10_t2;
Transition se02_desce_braco_q10_t3;
Transition se02_desce_braco_q10_t0 = {&s1, &se02_desce_braco_q10, &se02_desce_braco_q10_t1};
Transition se02_desce_braco_q10_t1 = {&ppx_on, &se02_desce_braco_q20, &se02_desce_braco_q10_t2};
Transition se02_desce_braco_q10_t2 = {&ppz_on, &se02_desce_braco_q26, &se02_desce_braco_q10_t3};
Transition se02_desce_braco_q10_t3 = {&ppx_stoped, &se02_desce_braco_q5, NULL};

Transition se02_desce_braco_q11_t0;
Transition se02_desce_braco_q11_t1;
Transition se02_desce_braco_q11_t2;
Transition se02_desce_braco_q11_t0 = {&ppx_off, &se02_desce_braco_q1, &se02_desce_braco_q11_t1};
Transition se02_desce_braco_q11_t1 = {&s1, &se02_desce_braco_q12, &se02_desce_braco_q11_t2};
Transition se02_desce_braco_q11_t2 = {&ppx_moving, &se02_desce_braco_q16, NULL};

Transition se02_desce_braco_q12_t0;
Transition se02_desce_braco_q12_t1;
Transition se02_desce_braco_q12_t2;
Transition se02_desce_braco_q12_t0 = {&ppx_off, &se02_desce_braco_q0, &se02_desce_braco_q12_t1};
Transition se02_desce_braco_q12_t1 = {&s1, &se02_desce_braco_q13, &se02_desce_braco_q12_t2};
Transition se02_desce_braco_q12_t2 = {&ppx_moving, &se02_desce_braco_q17, NULL};

Transition se02_desce_braco_q13_t0;
Transition se02_desce_braco_q13_t1;
Transition se02_desce_braco_q13_t2;
Transition se02_desce_braco_q13_t3;
Transition se02_desce_braco_q13_t0 = {&s1, &se02_desce_braco_q13, &se02_desce_braco_q13_t1};
Transition se02_desce_braco_q13_t1 = {&ppx_moving, &se02_desce_braco_q18, &se02_desce_braco_q13_t2};
Transition se02_desce_braco_q13_t2 = {&ppx_off, &se02_desce_braco_q3, &se02_desce_braco_q13_t3};
Transition se02_desce_braco_q13_t3 = {&ppz_on, &se02_desce_braco_q32, NULL};

Transition se02_desce_braco_q14_t0;
Transition se02_desce_braco_q14_t1;
Transition se02_desce_braco_q14_t2;
Transition se02_desce_braco_q14_t0 = {&s1, &se02_desce_braco_q14, &se02_desce_braco_q14_t1};
Transition se02_desce_braco_q14_t1 = {&ppx_moving, &se02_desce_braco_q19, &se02_desce_braco_q14_t2};
Transition se02_desce_braco_q14_t2 = {&ppx_off, &se02_desce_braco_q4, NULL};

Transition se02_desce_braco_q15_t0;
Transition se02_desce_braco_q15_t1;
Transition se02_desce_braco_q15_t2;
Transition se02_desce_braco_q15_t3;
Transition se02_desce_braco_q15_t0 = {&s1, &se02_desce_braco_q15, &se02_desce_braco_q15_t1};
Transition se02_desce_braco_q15_t1 = {&ppx_moving, &se02_desce_braco_q20, &se02_desce_braco_q15_t2};
Transition se02_desce_braco_q15_t2 = {&ppz_on, &se02_desce_braco_q31, &se02_desce_braco_q15_t3};
Transition se02_desce_braco_q15_t3 = {&ppx_off, &se02_desce_braco_q5, NULL};

Transition se02_desce_braco_q16_t0;
Transition se02_desce_braco_q16_t1;
Transition se02_desce_braco_q16_t2;
Transition se02_desce_braco_q16_t0 = {&ppx_stoped, &se02_desce_braco_q12, &se02_desce_braco_q16_t1};
Transition se02_desce_braco_q16_t1 = {&s1, &se02_desce_braco_q17, &se02_desce_braco_q16_t2};
Transition se02_desce_braco_q16_t2 = {&ppx_off, &se02_desce_braco_q6, NULL};

Transition se02_desce_braco_q17_t0;
Transition se02_desce_braco_q17_t1;
Transition se02_desce_braco_q17_t2;
Transition se02_desce_braco_q17_t0 = {&ppx_stoped, &se02_desce_braco_q13, &se02_desce_braco_q17_t1};
Transition se02_desce_braco_q17_t1 = {&s1, &se02_desce_braco_q18, &se02_desce_braco_q17_t2};
Transition se02_desce_braco_q17_t2 = {&ppx_off, &se02_desce_braco_q7, NULL};

Transition se02_desce_braco_q18_t0;
Transition se02_desce_braco_q18_t1;
Transition se02_desce_braco_q18_t2;
Transition se02_desce_braco_q18_t3;
Transition se02_desce_braco_q18_t0 = {&ppx_stoped, &se02_desce_braco_q13, &se02_desce_braco_q18_t1};
Transition se02_desce_braco_q18_t1 = {&s1, &se02_desce_braco_q18, &se02_desce_braco_q18_t2};
Transition se02_desce_braco_q18_t2 = {&ppz_on, &se02_desce_braco_q37, &se02_desce_braco_q18_t3};
Transition se02_desce_braco_q18_t3 = {&ppx_off, &se02_desce_braco_q8, NULL};

Transition se02_desce_braco_q19_t0;
Transition se02_desce_braco_q19_t1;
Transition se02_desce_braco_q19_t2;
Transition se02_desce_braco_q19_t0 = {&ppx_stoped, &se02_desce_braco_q15, &se02_desce_braco_q19_t1};
Transition se02_desce_braco_q19_t1 = {&s1, &se02_desce_braco_q19, &se02_desce_braco_q19_t2};
Transition se02_desce_braco_q19_t2 = {&ppx_off, &se02_desce_braco_q9, NULL};

Transition se02_desce_braco_q20_t0;
Transition se02_desce_braco_q20_t1;
Transition se02_desce_braco_q20_t2;
Transition se02_desce_braco_q20_t3;
Transition se02_desce_braco_q20_t0 = {&ppx_off, &se02_desce_braco_q10, &se02_desce_braco_q20_t1};
Transition se02_desce_braco_q20_t1 = {&ppx_stoped, &se02_desce_braco_q15, &se02_desce_braco_q20_t2};
Transition se02_desce_braco_q20_t2 = {&s1, &se02_desce_braco_q20, &se02_desce_braco_q20_t3};
Transition se02_desce_braco_q20_t3 = {&ppz_on, &se02_desce_braco_q36, NULL};

Transition se02_desce_braco_q21_t0;
Transition se02_desce_braco_q21_t1;
Transition se02_desce_braco_q21_t2;
Transition se02_desce_braco_q21_t3;
Transition se02_desce_braco_q21_t0 = {&ppz_off, &se02_desce_braco_q1, &se02_desce_braco_q21_t1};
Transition se02_desce_braco_q21_t1 = {&s1, &se02_desce_braco_q22, &se02_desce_braco_q21_t2};
Transition se02_desce_braco_q21_t2 = {&ppx_moving, &se02_desce_braco_q26, &se02_desce_braco_q21_t3};
Transition se02_desce_braco_q21_t3 = {&ppx_on, &se02_desce_braco_q31, NULL};

Transition se02_desce_braco_q22_t0;
Transition se02_desce_braco_q22_t1;
Transition se02_desce_braco_q22_t2;
Transition se02_desce_braco_q22_t3;
Transition se02_desce_braco_q22_t0 = {&ppz_off, &se02_desce_braco_q0, &se02_desce_braco_q22_t1};
Transition se02_desce_braco_q22_t1 = {&s1, &se02_desce_braco_q23, &se02_desce_braco_q22_t2};
Transition se02_desce_braco_q22_t2 = {&ppx_moving, &se02_desce_braco_q27, &se02_desce_braco_q22_t3};
Transition se02_desce_braco_q22_t3 = {&ppx_on, &se02_desce_braco_q34, NULL};

Transition se02_desce_braco_q23_t0;
Transition se02_desce_braco_q23_t1;
Transition se02_desce_braco_q23_t2;
Transition se02_desce_braco_q23_t3;
Transition se02_desce_braco_q23_t0 = {&s1, &se02_desce_braco_q23, &se02_desce_braco_q23_t1};
Transition se02_desce_braco_q23_t1 = {&ppx_moving, &se02_desce_braco_q28, &se02_desce_braco_q23_t2};
Transition se02_desce_braco_q23_t2 = {&ppz_off, &se02_desce_braco_q3, &se02_desce_braco_q23_t3};
Transition se02_desce_braco_q23_t3 = {&ppx_on, &se02_desce_braco_q33, NULL};

Transition se02_desce_braco_q24_t0;
Transition se02_desce_braco_q24_t1;
Transition se02_desce_braco_q24_t2;
Transition se02_desce_braco_q24_t3;
Transition se02_desce_braco_q24_t0 = {&s1, &se02_desce_braco_q24, &se02_desce_braco_q24_t1};
Transition se02_desce_braco_q24_t1 = {&ppx_moving, &se02_desce_braco_q29, &se02_desce_braco_q24_t2};
Transition se02_desce_braco_q24_t2 = {&ppx_on, &se02_desce_braco_q34, &se02_desce_braco_q24_t3};
Transition se02_desce_braco_q24_t3 = {&ppz_off, &se02_desce_braco_q4, NULL};

Transition se02_desce_braco_q25_t0;
Transition se02_desce_braco_q25_t1;
Transition se02_desce_braco_q25_t2;
Transition se02_desce_braco_q25_t3;
Transition se02_desce_braco_q25_t0 = {&s1, &se02_desce_braco_q25, &se02_desce_braco_q25_t1};
Transition se02_desce_braco_q25_t1 = {&ppx_moving, &se02_desce_braco_q30, &se02_desce_braco_q25_t2};
Transition se02_desce_braco_q25_t2 = {&ppx_on, &se02_desce_braco_q35, &se02_desce_braco_q25_t3};
Transition se02_desce_braco_q25_t3 = {&ppz_off, &se02_desce_braco_q5, NULL};

Transition se02_desce_braco_q26_t0;
Transition se02_desce_braco_q26_t1;
Transition se02_desce_braco_q26_t2;
Transition se02_desce_braco_q26_t3;
Transition se02_desce_braco_q26_t0 = {&ppx_stoped, &se02_desce_braco_q22, &se02_desce_braco_q26_t1};
Transition se02_desce_braco_q26_t1 = {&s1, &se02_desce_braco_q27, &se02_desce_braco_q26_t2};
Transition se02_desce_braco_q26_t2 = {&ppx_on, &se02_desce_braco_q36, &se02_desce_braco_q26_t3};
Transition se02_desce_braco_q26_t3 = {&ppz_off, &se02_desce_braco_q6, NULL};

Transition se02_desce_braco_q27_t0;
Transition se02_desce_braco_q27_t1;
Transition se02_desce_braco_q27_t2;
Transition se02_desce_braco_q27_t3;
Transition se02_desce_braco_q27_t0 = {&ppx_stoped, &se02_desce_braco_q23, &se02_desce_braco_q27_t1};
Transition se02_desce_braco_q27_t1 = {&s1, &se02_desce_braco_q28, &se02_desce_braco_q27_t2};
Transition se02_desce_braco_q27_t2 = {&ppx_on, &se02_desce_braco_q39, &se02_desce_braco_q27_t3};
Transition se02_desce_braco_q27_t3 = {&ppz_off, &se02_desce_braco_q7, NULL};

Transition se02_desce_braco_q28_t0;
Transition se02_desce_braco_q28_t1;
Transition se02_desce_braco_q28_t2;
Transition se02_desce_braco_q28_t3;
Transition se02_desce_braco_q28_t0 = {&ppx_stoped, &se02_desce_braco_q23, &se02_desce_braco_q28_t1};
Transition se02_desce_braco_q28_t1 = {&s1, &se02_desce_braco_q28, &se02_desce_braco_q28_t2};
Transition se02_desce_braco_q28_t2 = {&ppx_on, &se02_desce_braco_q38, &se02_desce_braco_q28_t3};
Transition se02_desce_braco_q28_t3 = {&ppz_off, &se02_desce_braco_q8, NULL};

Transition se02_desce_braco_q29_t0;
Transition se02_desce_braco_q29_t1;
Transition se02_desce_braco_q29_t2;
Transition se02_desce_braco_q29_t3;
Transition se02_desce_braco_q29_t0 = {&ppx_stoped, &se02_desce_braco_q25, &se02_desce_braco_q29_t1};
Transition se02_desce_braco_q29_t1 = {&s1, &se02_desce_braco_q29, &se02_desce_braco_q29_t2};
Transition se02_desce_braco_q29_t2 = {&ppx_on, &se02_desce_braco_q39, &se02_desce_braco_q29_t3};
Transition se02_desce_braco_q29_t3 = {&ppz_off, &se02_desce_braco_q9, NULL};

Transition se02_desce_braco_q3_t0;
Transition se02_desce_braco_q3_t1;
Transition se02_desce_braco_q3_t2;
Transition se02_desce_braco_q3_t3;
Transition se02_desce_braco_q3_t0 = {&ppx_on, &se02_desce_braco_q13, &se02_desce_braco_q3_t1};
Transition se02_desce_braco_q3_t1 = {&ppz_on, &se02_desce_braco_q22, &se02_desce_braco_q3_t2};
Transition se02_desce_braco_q3_t2 = {&s1, &se02_desce_braco_q3, &se02_desce_braco_q3_t3};
Transition se02_desce_braco_q3_t3 = {&ppx_moving, &se02_desce_braco_q8, NULL};

Transition se02_desce_braco_q30_t0;
Transition se02_desce_braco_q30_t1;
Transition se02_desce_braco_q30_t2;
Transition se02_desce_braco_q30_t3;
Transition se02_desce_braco_q30_t0 = {&ppz_off, &se02_desce_braco_q10, &se02_desce_braco_q30_t1};
Transition se02_desce_braco_q30_t1 = {&ppx_stoped, &se02_desce_braco_q25, &se02_desce_braco_q30_t2};
Transition se02_desce_braco_q30_t2 = {&s1, &se02_desce_braco_q30, &se02_desce_braco_q30_t3};
Transition se02_desce_braco_q30_t3 = {&ppx_on, &se02_desce_braco_q40, NULL};

Transition se02_desce_braco_q31_t0;
Transition se02_desce_braco_q31_t1;
Transition se02_desce_braco_q31_t2;
Transition se02_desce_braco_q31_t3;
Transition se02_desce_braco_q31_t0 = {&ppz_off, &se02_desce_braco_q11, &se02_desce_braco_q31_t1};
Transition se02_desce_braco_q31_t1 = {&ppx_off, &se02_desce_braco_q21, &se02_desce_braco_q31_t2};
Transition se02_desce_braco_q31_t2 = {&s1, &se02_desce_braco_q32, &se02_desce_braco_q31_t3};
Transition se02_desce_braco_q31_t3 = {&ppx_moving, &se02_desce_braco_q36, NULL};

Transition se02_desce_braco_q32_t0;
Transition se02_desce_braco_q32_t1;
Transition se02_desce_braco_q32_t2;
Transition se02_desce_braco_q32_t3;
Transition se02_desce_braco_q32_t0 = {&ppz_off, &se02_desce_braco_q12, &se02_desce_braco_q32_t1};
Transition se02_desce_braco_q32_t1 = {&ppx_off, &se02_desce_braco_q22, &se02_desce_braco_q32_t2};
Transition se02_desce_braco_q32_t2 = {&s1, &se02_desce_braco_q33, &se02_desce_braco_q32_t3};
Transition se02_desce_braco_q32_t3 = {&ppx_moving, &se02_desce_braco_q37, NULL};

Transition se02_desce_braco_q33_t0;
Transition se02_desce_braco_q33_t1;
Transition se02_desce_braco_q33_t2;
Transition se02_desce_braco_q33_t3;
Transition se02_desce_braco_q33_t0 = {&ppz_off, &se02_desce_braco_q13, &se02_desce_braco_q33_t1};
Transition se02_desce_braco_q33_t1 = {&ppx_off, &se02_desce_braco_q23, &se02_desce_braco_q33_t2};
Transition se02_desce_braco_q33_t2 = {&s1, &se02_desce_braco_q33, &se02_desce_braco_q33_t3};
Transition se02_desce_braco_q33_t3 = {&ppx_moving, &se02_desce_braco_q38, NULL};

Transition se02_desce_braco_q34_t0;
Transition se02_desce_braco_q34_t1;
Transition se02_desce_braco_q34_t2;
Transition se02_desce_braco_q34_t3;
Transition se02_desce_braco_q34_t0 = {&ppz_off, &se02_desce_braco_q14, &se02_desce_braco_q34_t1};
Transition se02_desce_braco_q34_t1 = {&ppx_off, &se02_desce_braco_q24, &se02_desce_braco_q34_t2};
Transition se02_desce_braco_q34_t2 = {&s1, &se02_desce_braco_q34, &se02_desce_braco_q34_t3};
Transition se02_desce_braco_q34_t3 = {&ppx_moving, &se02_desce_braco_q39, NULL};

Transition se02_desce_braco_q35_t0;
Transition se02_desce_braco_q35_t1;
Transition se02_desce_braco_q35_t2;
Transition se02_desce_braco_q35_t3;
Transition se02_desce_braco_q35_t0 = {&ppz_off, &se02_desce_braco_q15, &se02_desce_braco_q35_t1};
Transition se02_desce_braco_q35_t1 = {&ppx_off, &se02_desce_braco_q25, &se02_desce_braco_q35_t2};
Transition se02_desce_braco_q35_t2 = {&s1, &se02_desce_braco_q35, &se02_desce_braco_q35_t3};
Transition se02_desce_braco_q35_t3 = {&ppx_moving, &se02_desce_braco_q40, NULL};

Transition se02_desce_braco_q36_t0;
Transition se02_desce_braco_q36_t1;
Transition se02_desce_braco_q36_t2;
Transition se02_desce_braco_q36_t3;
Transition se02_desce_braco_q36_t0 = {&ppz_off, &se02_desce_braco_q16, &se02_desce_braco_q36_t1};
Transition se02_desce_braco_q36_t1 = {&ppx_off, &se02_desce_braco_q26, &se02_desce_braco_q36_t2};
Transition se02_desce_braco_q36_t2 = {&ppx_stoped, &se02_desce_braco_q32, &se02_desce_braco_q36_t3};
Transition se02_desce_braco_q36_t3 = {&s1, &se02_desce_braco_q37, NULL};

Transition se02_desce_braco_q37_t0;
Transition se02_desce_braco_q37_t1;
Transition se02_desce_braco_q37_t2;
Transition se02_desce_braco_q37_t3;
Transition se02_desce_braco_q37_t0 = {&ppz_off, &se02_desce_braco_q17, &se02_desce_braco_q37_t1};
Transition se02_desce_braco_q37_t1 = {&ppx_off, &se02_desce_braco_q27, &se02_desce_braco_q37_t2};
Transition se02_desce_braco_q37_t2 = {&ppx_stoped, &se02_desce_braco_q33, &se02_desce_braco_q37_t3};
Transition se02_desce_braco_q37_t3 = {&s1, &se02_desce_braco_q38, NULL};

Transition se02_desce_braco_q38_t0;
Transition se02_desce_braco_q38_t1;
Transition se02_desce_braco_q38_t2;
Transition se02_desce_braco_q38_t3;
Transition se02_desce_braco_q38_t0 = {&ppz_off, &se02_desce_braco_q18, &se02_desce_braco_q38_t1};
Transition se02_desce_braco_q38_t1 = {&ppx_off, &se02_desce_braco_q28, &se02_desce_braco_q38_t2};
Transition se02_desce_braco_q38_t2 = {&ppx_stoped, &se02_desce_braco_q33, &se02_desce_braco_q38_t3};
Transition se02_desce_braco_q38_t3 = {&s1, &se02_desce_braco_q38, NULL};

Transition se02_desce_braco_q39_t0;
Transition se02_desce_braco_q39_t1;
Transition se02_desce_braco_q39_t2;
Transition se02_desce_braco_q39_t3;
Transition se02_desce_braco_q39_t0 = {&ppz_off, &se02_desce_braco_q19, &se02_desce_braco_q39_t1};
Transition se02_desce_braco_q39_t1 = {&ppx_off, &se02_desce_braco_q29, &se02_desce_braco_q39_t2};
Transition se02_desce_braco_q39_t2 = {&ppx_stoped, &se02_desce_braco_q35, &se02_desce_braco_q39_t3};
Transition se02_desce_braco_q39_t3 = {&s1, &se02_desce_braco_q39, NULL};

Transition se02_desce_braco_q4_t0;
Transition se02_desce_braco_q4_t1;
Transition se02_desce_braco_q4_t2;
Transition se02_desce_braco_q4_t0 = {&ppx_on, &se02_desce_braco_q14, &se02_desce_braco_q4_t1};
Transition se02_desce_braco_q4_t1 = {&s1, &se02_desce_braco_q4, &se02_desce_braco_q4_t2};
Transition se02_desce_braco_q4_t2 = {&ppx_moving, &se02_desce_braco_q9, NULL};

Transition se02_desce_braco_q40_t0;
Transition se02_desce_braco_q40_t1;
Transition se02_desce_braco_q40_t2;
Transition se02_desce_braco_q40_t3;
Transition se02_desce_braco_q40_t0 = {&ppz_off, &se02_desce_braco_q20, &se02_desce_braco_q40_t1};
Transition se02_desce_braco_q40_t1 = {&ppx_off, &se02_desce_braco_q30, &se02_desce_braco_q40_t2};
Transition se02_desce_braco_q40_t2 = {&ppx_stoped, &se02_desce_braco_q35, &se02_desce_braco_q40_t3};
Transition se02_desce_braco_q40_t3 = {&s1, &se02_desce_braco_q40, NULL};

Transition se02_desce_braco_q5_t0;
Transition se02_desce_braco_q5_t1;
Transition se02_desce_braco_q5_t2;
Transition se02_desce_braco_q5_t3;
Transition se02_desce_braco_q5_t0 = {&ppx_moving, &se02_desce_braco_q10, &se02_desce_braco_q5_t1};
Transition se02_desce_braco_q5_t1 = {&ppx_on, &se02_desce_braco_q15, &se02_desce_braco_q5_t2};
Transition se02_desce_braco_q5_t2 = {&ppz_on, &se02_desce_braco_q21, &se02_desce_braco_q5_t3};
Transition se02_desce_braco_q5_t3 = {&s1, &se02_desce_braco_q5, NULL};

Transition se02_desce_braco_q6_t0;
Transition se02_desce_braco_q6_t1;
Transition se02_desce_braco_q6_t2;
Transition se02_desce_braco_q6_t0 = {&ppx_stoped, &se02_desce_braco_q0, &se02_desce_braco_q6_t1};
Transition se02_desce_braco_q6_t1 = {&ppx_on, &se02_desce_braco_q16, &se02_desce_braco_q6_t2};
Transition se02_desce_braco_q6_t2 = {&s1, &se02_desce_braco_q7, NULL};

Transition se02_desce_braco_q7_t0;
Transition se02_desce_braco_q7_t1;
Transition se02_desce_braco_q7_t2;
Transition se02_desce_braco_q7_t0 = {&ppx_on, &se02_desce_braco_q19, &se02_desce_braco_q7_t1};
Transition se02_desce_braco_q7_t1 = {&ppx_stoped, &se02_desce_braco_q3, &se02_desce_braco_q7_t2};
Transition se02_desce_braco_q7_t2 = {&s1, &se02_desce_braco_q8, NULL};

Transition se02_desce_braco_q8_t0;
Transition se02_desce_braco_q8_t1;
Transition se02_desce_braco_q8_t2;
Transition se02_desce_braco_q8_t3;
Transition se02_desce_braco_q8_t0 = {&ppx_on, &se02_desce_braco_q18, &se02_desce_braco_q8_t1};
Transition se02_desce_braco_q8_t1 = {&ppz_on, &se02_desce_braco_q27, &se02_desce_braco_q8_t2};
Transition se02_desce_braco_q8_t2 = {&ppx_stoped, &se02_desce_braco_q3, &se02_desce_braco_q8_t3};
Transition se02_desce_braco_q8_t3 = {&s1, &se02_desce_braco_q8, NULL};

Transition se02_desce_braco_q9_t0;
Transition se02_desce_braco_q9_t1;
Transition se02_desce_braco_q9_t2;
Transition se02_desce_braco_q9_t0 = {&ppx_on, &se02_desce_braco_q19, &se02_desce_braco_q9_t1};
Transition se02_desce_braco_q9_t1 = {&ppx_stoped, &se02_desce_braco_q5, &se02_desce_braco_q9_t2};
Transition se02_desce_braco_q9_t2 = {&s1, &se02_desce_braco_q9, NULL};


// states init
State se02_desce_braco_q0 = {true, SUP_DEBUG_STR("q0"), &se02_desce_braco_q0_t0};
State se02_desce_braco_q1 = {false, SUP_DEBUG_STR("q1"), &se02_desce_braco_q1_t0};
State se02_desce_braco_q10 = {false, SUP_DEBUG_STR("q10"), &se02_desce_braco_q10_t0};
State se02_desce_braco_q11 = {false, SUP_DEBUG_STR("q11"), &se02_desce_braco_q11_t0};
State se02_desce_braco_q12 = {false, SUP_DEBUG_STR("q12"), &se02_desce_braco_q12_t0};
State se02_desce_braco_q13 = {false, SUP_DEBUG_STR("q13"), &se02_desce_braco_q13_t0};
State se02_desce_braco_q14 = {false, SUP_DEBUG_STR("q14"), &se02_desce_braco_q14_t0};
State se02_desce_braco_q15 = {false, SUP_DEBUG_STR("q15"), &se02_desce_braco_q15_t0};
State se02_desce_braco_q16 = {false, SUP_DEBUG_STR("q16"), &se02_desce_braco_q16_t0};
State se02_desce_braco_q17 = {false, SUP_DEBUG_STR("q17"), &se02_desce_braco_q17_t0};
State se02_desce_braco_q18 = {false, SUP_DEBUG_STR("q18"), &se02_desce_braco_q18_t0};
State se02_desce_braco_q19 = {false, SUP_DEBUG_STR("q19"), &se02_desce_braco_q19_t0};
State se02_desce_braco_q20 = {false, SUP_DEBUG_STR("q20"), &se02_desce_braco_q20_t0};
State se02_desce_braco_q21 = {false, SUP_DEBUG_STR("q21"), &se02_desce_braco_q21_t0};
State se02_desce_braco_q22 = {false, SUP_DEBUG_STR("q22"), &se02_desce_braco_q22_t0};
State se02_desce_braco_q23 = {false, SUP_DEBUG_STR("q23"), &se02_desce_braco_q23_t0};
State se02_desce_braco_q24 = {false, SUP_DEBUG_STR("q24"), &se02_desce_braco_q24_t0};
State se02_desce_braco_q25 = {false, SUP_DEBUG_STR("q25"), &se02_desce_braco_q25_t0};
State se02_desce_braco_q26 = {false, SUP_DEBUG_STR("q26"), &se02_desce_braco_q26_t0};
State se02_desce_braco_q27 = {false, SUP_DEBUG_STR("q27"), &se02_desce_braco_q27_t0};
State se02_desce_braco_q28 = {false, SUP_DEBUG_STR("q28"), &se02_desce_braco_q28_t0};
State se02_desce_braco_q29 = {false, SUP_DEBUG_STR("q29"), &se02_desce_braco_q29_t0};
State se02_desce_braco_q3 = {false, SUP_DEBUG_STR("q3"), &se02_desce_braco_q3_t0};
State se02_desce_braco_q30 = {false, SUP_DEBUG_STR("q30"), &se02_desce_braco_q30_t0};
State se02_desce_braco_q31 = {false, SUP_DEBUG_STR("q31"), &se02_desce_braco_q31_t0};
State se02_desce_braco_q32 = {false, SUP_DEBUG_STR("q32"), &se02_desce_braco_q32_t0};
State se02_desce_braco_q33 = {false, SUP_DEBUG_STR("q33"), &se02_desce_braco_q33_t0};
State se02_desce_braco_q34 = {false, SUP_DEBUG_STR("q34"), &se02_desce_braco_q34_t0};
State se02_desce_braco_q35 = {false, SUP_DEBUG_STR("q35"), &se02_desce_braco_q35_t0};
State se02_desce_braco_q36 = {false, SUP_DEBUG_STR("q36"), &se02_desce_braco_q36_t0};
State se02_desce_braco_q37 = {false, SUP_DEBUG_STR("q37"), &se02_desce_braco_q37_t0};
State se02_desce_braco_q38 = {false, SUP_DEBUG_STR("q38"), &se02_desce_braco_q38_t0};
State se02_desce_braco_q39 = {false, SUP_DEBUG_STR("q39"), &se02_desce_braco_q39_t0};
State se02_desce_braco_q4 = {false, SUP_DEBUG_STR("q4"), &se02_desce_braco_q4_t0};
State se02_desce_braco_q40 = {false, SUP_DEBUG_STR("q40"), &se02_desce_braco_q40_t0};
State se02_desce_braco_q5 = {false, SUP_DEBUG_STR("q5"), &se02_desce_braco_q5_t0};
State se02_desce_braco_q6 = {false, SUP_DEBUG_STR("q6"), &se02_desce_braco_q6_t0};
State se02_desce_braco_q7 = {false, SUP_DEBUG_STR("q7"), &se02_desce_braco_q7_t0};
State se02_desce_braco_q8 = {false, SUP_DEBUG_STR("q8"), &se02_desce_braco_q8_t0};
State se02_desce_braco_q9 = {false, SUP_DEBUG_STR("q9"), &se02_desce_braco_q9_t0};

// Supervisor create
Supervisor se02_desce_braco = {&se02_desce_braco_q0, &se02_desce_braco_q0, NULL,  &se02_desce_braco_ppx_on_evt0, "se02_desce_braco"};
