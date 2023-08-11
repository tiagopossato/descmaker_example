#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "se01_liga_cv1.h"

// Supervisor specific instances
// alphabet create
Alphabet se01_liga_cv1_stop_evt0;
Alphabet se01_liga_cv1_start_evt1;
Alphabet se01_liga_cv1_ppg_on_evt2;
Alphabet se01_liga_cv1_ppz_moving_evt3;
Alphabet se01_liga_cv1_ppz_stoped_evt4;
Alphabet se01_liga_cv1_cv1_on_evt5;
Alphabet se01_liga_cv1_ppg_off_evt6;
Alphabet se01_liga_cv1_cv1_off_evt7;

// Alphabet init
Alphabet se01_liga_cv1_stop_evt0 = {&stop, &se01_liga_cv1_start_evt1};
Alphabet se01_liga_cv1_start_evt1 = {&start, &se01_liga_cv1_ppg_on_evt2};
Alphabet se01_liga_cv1_ppg_on_evt2 = {&ppg_on, &se01_liga_cv1_ppz_moving_evt3};
Alphabet se01_liga_cv1_ppz_moving_evt3 = {&ppz_moving, &se01_liga_cv1_ppz_stoped_evt4};
Alphabet se01_liga_cv1_ppz_stoped_evt4 = {&ppz_stoped, &se01_liga_cv1_cv1_on_evt5};
Alphabet se01_liga_cv1_cv1_on_evt5 = {&cv1_on, &se01_liga_cv1_ppg_off_evt6};
Alphabet se01_liga_cv1_ppg_off_evt6 = {&ppg_off, &se01_liga_cv1_cv1_off_evt7};
Alphabet se01_liga_cv1_cv1_off_evt7 = {&cv1_off, NULL};

// states create
State se01_liga_cv1_q0;
State se01_liga_cv1_q10;
State se01_liga_cv1_q11;
State se01_liga_cv1_q12;
State se01_liga_cv1_q13;
State se01_liga_cv1_q14;
State se01_liga_cv1_q15;
State se01_liga_cv1_q16;
State se01_liga_cv1_q17;
State se01_liga_cv1_q18;
State se01_liga_cv1_q19;
State se01_liga_cv1_q2;
State se01_liga_cv1_q20;
State se01_liga_cv1_q21;
State se01_liga_cv1_q22;
State se01_liga_cv1_q23;
State se01_liga_cv1_q24;
State se01_liga_cv1_q25;
State se01_liga_cv1_q26;
State se01_liga_cv1_q27;
State se01_liga_cv1_q28;
State se01_liga_cv1_q29;
State se01_liga_cv1_q3;
State se01_liga_cv1_q30;
State se01_liga_cv1_q31;
State se01_liga_cv1_q32;
State se01_liga_cv1_q4;
State se01_liga_cv1_q5;
State se01_liga_cv1_q6;
State se01_liga_cv1_q7;
State se01_liga_cv1_q8;
State se01_liga_cv1_q9;

// transitions create and init
Transition se01_liga_cv1_q0_t0;
Transition se01_liga_cv1_q0_t1;
Transition se01_liga_cv1_q0_t2;
Transition se01_liga_cv1_q0_t3;
Transition se01_liga_cv1_q0_t0 = {&stop, &se01_liga_cv1_q0, &se01_liga_cv1_q0_t1};
Transition se01_liga_cv1_q0_t1 = {&start, &se01_liga_cv1_q2, &se01_liga_cv1_q0_t2};
Transition se01_liga_cv1_q0_t2 = {&ppg_on, &se01_liga_cv1_q5, &se01_liga_cv1_q0_t3};
Transition se01_liga_cv1_q0_t3 = {&ppz_moving, &se01_liga_cv1_q9, NULL};

Transition se01_liga_cv1_q10_t0;
Transition se01_liga_cv1_q10_t1;
Transition se01_liga_cv1_q10_t2;
Transition se01_liga_cv1_q10_t3;
Transition se01_liga_cv1_q10_t4;
Transition se01_liga_cv1_q10_t0 = {&start, &se01_liga_cv1_q10, &se01_liga_cv1_q10_t1};
Transition se01_liga_cv1_q10_t1 = {&ppg_on, &se01_liga_cv1_q14, &se01_liga_cv1_q10_t2};
Transition se01_liga_cv1_q10_t2 = {&ppz_stoped, &se01_liga_cv1_q2, &se01_liga_cv1_q10_t3};
Transition se01_liga_cv1_q10_t3 = {&cv1_on, &se01_liga_cv1_q27, &se01_liga_cv1_q10_t4};
Transition se01_liga_cv1_q10_t4 = {&stop, &se01_liga_cv1_q9, NULL};

Transition se01_liga_cv1_q11_t0;
Transition se01_liga_cv1_q11_t1;
Transition se01_liga_cv1_q11_t2;
Transition se01_liga_cv1_q11_t3;
Transition se01_liga_cv1_q11_t0 = {&start, &se01_liga_cv1_q11, &se01_liga_cv1_q11_t1};
Transition se01_liga_cv1_q11_t1 = {&ppg_on, &se01_liga_cv1_q16, &se01_liga_cv1_q11_t2};
Transition se01_liga_cv1_q11_t2 = {&ppz_stoped, &se01_liga_cv1_q3, &se01_liga_cv1_q11_t3};
Transition se01_liga_cv1_q11_t3 = {&stop, &se01_liga_cv1_q9, NULL};

Transition se01_liga_cv1_q12_t0;
Transition se01_liga_cv1_q12_t1;
Transition se01_liga_cv1_q12_t2;
Transition se01_liga_cv1_q12_t3;
Transition se01_liga_cv1_q12_t0 = {&start, &se01_liga_cv1_q12, &se01_liga_cv1_q12_t1};
Transition se01_liga_cv1_q12_t1 = {&stop, &se01_liga_cv1_q12, &se01_liga_cv1_q12_t2};
Transition se01_liga_cv1_q12_t2 = {&ppg_on, &se01_liga_cv1_q16, &se01_liga_cv1_q12_t3};
Transition se01_liga_cv1_q12_t3 = {&ppz_stoped, &se01_liga_cv1_q2, NULL};

Transition se01_liga_cv1_q13_t0;
Transition se01_liga_cv1_q13_t1;
Transition se01_liga_cv1_q13_t2;
Transition se01_liga_cv1_q13_t3;
Transition se01_liga_cv1_q13_t0 = {&stop, &se01_liga_cv1_q13, &se01_liga_cv1_q13_t1};
Transition se01_liga_cv1_q13_t1 = {&start, &se01_liga_cv1_q14, &se01_liga_cv1_q13_t2};
Transition se01_liga_cv1_q13_t2 = {&ppz_stoped, &se01_liga_cv1_q5, &se01_liga_cv1_q13_t3};
Transition se01_liga_cv1_q13_t3 = {&ppg_off, &se01_liga_cv1_q9, NULL};

Transition se01_liga_cv1_q14_t0;
Transition se01_liga_cv1_q14_t1;
Transition se01_liga_cv1_q14_t2;
Transition se01_liga_cv1_q14_t3;
Transition se01_liga_cv1_q14_t4;
Transition se01_liga_cv1_q14_t0 = {&ppg_off, &se01_liga_cv1_q10, &se01_liga_cv1_q14_t1};
Transition se01_liga_cv1_q14_t1 = {&stop, &se01_liga_cv1_q13, &se01_liga_cv1_q14_t2};
Transition se01_liga_cv1_q14_t2 = {&start, &se01_liga_cv1_q14, &se01_liga_cv1_q14_t3};
Transition se01_liga_cv1_q14_t3 = {&cv1_on, &se01_liga_cv1_q31, &se01_liga_cv1_q14_t4};
Transition se01_liga_cv1_q14_t4 = {&ppz_stoped, &se01_liga_cv1_q6, NULL};

Transition se01_liga_cv1_q15_t0;
Transition se01_liga_cv1_q15_t1;
Transition se01_liga_cv1_q15_t2;
Transition se01_liga_cv1_q15_t3;
Transition se01_liga_cv1_q15_t0 = {&ppg_off, &se01_liga_cv1_q11, &se01_liga_cv1_q15_t1};
Transition se01_liga_cv1_q15_t1 = {&stop, &se01_liga_cv1_q13, &se01_liga_cv1_q15_t2};
Transition se01_liga_cv1_q15_t2 = {&start, &se01_liga_cv1_q15, &se01_liga_cv1_q15_t3};
Transition se01_liga_cv1_q15_t3 = {&ppz_stoped, &se01_liga_cv1_q7, NULL};

Transition se01_liga_cv1_q16_t0;
Transition se01_liga_cv1_q16_t1;
Transition se01_liga_cv1_q16_t2;
Transition se01_liga_cv1_q16_t3;
Transition se01_liga_cv1_q16_t0 = {&ppg_off, &se01_liga_cv1_q12, &se01_liga_cv1_q16_t1};
Transition se01_liga_cv1_q16_t1 = {&start, &se01_liga_cv1_q16, &se01_liga_cv1_q16_t2};
Transition se01_liga_cv1_q16_t2 = {&stop, &se01_liga_cv1_q16, &se01_liga_cv1_q16_t3};
Transition se01_liga_cv1_q16_t3 = {&ppz_stoped, &se01_liga_cv1_q6, NULL};

Transition se01_liga_cv1_q17_t0;
Transition se01_liga_cv1_q17_t1;
Transition se01_liga_cv1_q17_t2;
Transition se01_liga_cv1_q17_t3;
Transition se01_liga_cv1_q17_t4;
Transition se01_liga_cv1_q17_t0 = {&cv1_off, &se01_liga_cv1_q0, &se01_liga_cv1_q17_t1};
Transition se01_liga_cv1_q17_t1 = {&stop, &se01_liga_cv1_q17, &se01_liga_cv1_q17_t2};
Transition se01_liga_cv1_q17_t2 = {&start, &se01_liga_cv1_q18, &se01_liga_cv1_q17_t3};
Transition se01_liga_cv1_q17_t3 = {&ppg_on, &se01_liga_cv1_q21, &se01_liga_cv1_q17_t4};
Transition se01_liga_cv1_q17_t4 = {&ppz_moving, &se01_liga_cv1_q25, NULL};

Transition se01_liga_cv1_q18_t0;
Transition se01_liga_cv1_q18_t1;
Transition se01_liga_cv1_q18_t2;
Transition se01_liga_cv1_q18_t3;
Transition se01_liga_cv1_q18_t4;
Transition se01_liga_cv1_q18_t0 = {&stop, &se01_liga_cv1_q17, &se01_liga_cv1_q18_t1};
Transition se01_liga_cv1_q18_t1 = {&start, &se01_liga_cv1_q18, &se01_liga_cv1_q18_t2};
Transition se01_liga_cv1_q18_t2 = {&cv1_off, &se01_liga_cv1_q2, &se01_liga_cv1_q18_t3};
Transition se01_liga_cv1_q18_t3 = {&ppg_on, &se01_liga_cv1_q22, &se01_liga_cv1_q18_t4};
Transition se01_liga_cv1_q18_t4 = {&ppz_moving, &se01_liga_cv1_q26, NULL};

Transition se01_liga_cv1_q19_t0;
Transition se01_liga_cv1_q19_t1;
Transition se01_liga_cv1_q19_t2;
Transition se01_liga_cv1_q19_t3;
Transition se01_liga_cv1_q19_t4;
Transition se01_liga_cv1_q19_t0 = {&stop, &se01_liga_cv1_q17, &se01_liga_cv1_q19_t1};
Transition se01_liga_cv1_q19_t1 = {&start, &se01_liga_cv1_q19, &se01_liga_cv1_q19_t2};
Transition se01_liga_cv1_q19_t2 = {&ppg_on, &se01_liga_cv1_q24, &se01_liga_cv1_q19_t3};
Transition se01_liga_cv1_q19_t3 = {&ppz_moving, &se01_liga_cv1_q27, &se01_liga_cv1_q19_t4};
Transition se01_liga_cv1_q19_t4 = {&cv1_off, &se01_liga_cv1_q3, NULL};

Transition se01_liga_cv1_q2_t0;
Transition se01_liga_cv1_q2_t1;
Transition se01_liga_cv1_q2_t2;
Transition se01_liga_cv1_q2_t3;
Transition se01_liga_cv1_q2_t4;
Transition se01_liga_cv1_q2_t0 = {&stop, &se01_liga_cv1_q0, &se01_liga_cv1_q2_t1};
Transition se01_liga_cv1_q2_t1 = {&ppz_moving, &se01_liga_cv1_q10, &se01_liga_cv1_q2_t2};
Transition se01_liga_cv1_q2_t2 = {&cv1_on, &se01_liga_cv1_q19, &se01_liga_cv1_q2_t3};
Transition se01_liga_cv1_q2_t3 = {&start, &se01_liga_cv1_q2, &se01_liga_cv1_q2_t4};
Transition se01_liga_cv1_q2_t4 = {&ppg_on, &se01_liga_cv1_q6, NULL};

Transition se01_liga_cv1_q20_t0;
Transition se01_liga_cv1_q20_t1;
Transition se01_liga_cv1_q20_t2;
Transition se01_liga_cv1_q20_t3;
Transition se01_liga_cv1_q20_t4;
Transition se01_liga_cv1_q20_t0 = {&start, &se01_liga_cv1_q20, &se01_liga_cv1_q20_t1};
Transition se01_liga_cv1_q20_t1 = {&stop, &se01_liga_cv1_q20, &se01_liga_cv1_q20_t2};
Transition se01_liga_cv1_q20_t2 = {&ppg_on, &se01_liga_cv1_q24, &se01_liga_cv1_q20_t3};
Transition se01_liga_cv1_q20_t3 = {&ppz_moving, &se01_liga_cv1_q28, &se01_liga_cv1_q20_t4};
Transition se01_liga_cv1_q20_t4 = {&cv1_off, &se01_liga_cv1_q4, NULL};

Transition se01_liga_cv1_q21_t0;
Transition se01_liga_cv1_q21_t1;
Transition se01_liga_cv1_q21_t2;
Transition se01_liga_cv1_q21_t3;
Transition se01_liga_cv1_q21_t4;
Transition se01_liga_cv1_q21_t0 = {&ppg_off, &se01_liga_cv1_q17, &se01_liga_cv1_q21_t1};
Transition se01_liga_cv1_q21_t1 = {&stop, &se01_liga_cv1_q21, &se01_liga_cv1_q21_t2};
Transition se01_liga_cv1_q21_t2 = {&start, &se01_liga_cv1_q22, &se01_liga_cv1_q21_t3};
Transition se01_liga_cv1_q21_t3 = {&ppz_moving, &se01_liga_cv1_q29, &se01_liga_cv1_q21_t4};
Transition se01_liga_cv1_q21_t4 = {&cv1_off, &se01_liga_cv1_q5, NULL};

Transition se01_liga_cv1_q22_t0;
Transition se01_liga_cv1_q22_t1;
Transition se01_liga_cv1_q22_t2;
Transition se01_liga_cv1_q22_t3;
Transition se01_liga_cv1_q22_t4;
Transition se01_liga_cv1_q22_t0 = {&ppg_off, &se01_liga_cv1_q18, &se01_liga_cv1_q22_t1};
Transition se01_liga_cv1_q22_t1 = {&stop, &se01_liga_cv1_q21, &se01_liga_cv1_q22_t2};
Transition se01_liga_cv1_q22_t2 = {&start, &se01_liga_cv1_q22, &se01_liga_cv1_q22_t3};
Transition se01_liga_cv1_q22_t3 = {&ppz_moving, &se01_liga_cv1_q30, &se01_liga_cv1_q22_t4};
Transition se01_liga_cv1_q22_t4 = {&cv1_off, &se01_liga_cv1_q6, NULL};

Transition se01_liga_cv1_q23_t0;
Transition se01_liga_cv1_q23_t1;
Transition se01_liga_cv1_q23_t2;
Transition se01_liga_cv1_q23_t3;
Transition se01_liga_cv1_q23_t4;
Transition se01_liga_cv1_q23_t0 = {&ppg_off, &se01_liga_cv1_q19, &se01_liga_cv1_q23_t1};
Transition se01_liga_cv1_q23_t1 = {&stop, &se01_liga_cv1_q21, &se01_liga_cv1_q23_t2};
Transition se01_liga_cv1_q23_t2 = {&start, &se01_liga_cv1_q23, &se01_liga_cv1_q23_t3};
Transition se01_liga_cv1_q23_t3 = {&ppz_moving, &se01_liga_cv1_q31, &se01_liga_cv1_q23_t4};
Transition se01_liga_cv1_q23_t4 = {&cv1_off, &se01_liga_cv1_q7, NULL};

Transition se01_liga_cv1_q24_t0;
Transition se01_liga_cv1_q24_t1;
Transition se01_liga_cv1_q24_t2;
Transition se01_liga_cv1_q24_t3;
Transition se01_liga_cv1_q24_t4;
Transition se01_liga_cv1_q24_t0 = {&ppg_off, &se01_liga_cv1_q20, &se01_liga_cv1_q24_t1};
Transition se01_liga_cv1_q24_t1 = {&start, &se01_liga_cv1_q24, &se01_liga_cv1_q24_t2};
Transition se01_liga_cv1_q24_t2 = {&stop, &se01_liga_cv1_q24, &se01_liga_cv1_q24_t3};
Transition se01_liga_cv1_q24_t3 = {&ppz_moving, &se01_liga_cv1_q32, &se01_liga_cv1_q24_t4};
Transition se01_liga_cv1_q24_t4 = {&cv1_off, &se01_liga_cv1_q8, NULL};

Transition se01_liga_cv1_q25_t0;
Transition se01_liga_cv1_q25_t1;
Transition se01_liga_cv1_q25_t2;
Transition se01_liga_cv1_q25_t3;
Transition se01_liga_cv1_q25_t4;
Transition se01_liga_cv1_q25_t0 = {&ppz_stoped, &se01_liga_cv1_q17, &se01_liga_cv1_q25_t1};
Transition se01_liga_cv1_q25_t1 = {&stop, &se01_liga_cv1_q25, &se01_liga_cv1_q25_t2};
Transition se01_liga_cv1_q25_t2 = {&start, &se01_liga_cv1_q26, &se01_liga_cv1_q25_t3};
Transition se01_liga_cv1_q25_t3 = {&ppg_on, &se01_liga_cv1_q29, &se01_liga_cv1_q25_t4};
Transition se01_liga_cv1_q25_t4 = {&cv1_off, &se01_liga_cv1_q9, NULL};

Transition se01_liga_cv1_q26_t0;
Transition se01_liga_cv1_q26_t1;
Transition se01_liga_cv1_q26_t2;
Transition se01_liga_cv1_q26_t3;
Transition se01_liga_cv1_q26_t4;
Transition se01_liga_cv1_q26_t0 = {&cv1_off, &se01_liga_cv1_q10, &se01_liga_cv1_q26_t1};
Transition se01_liga_cv1_q26_t1 = {&ppz_stoped, &se01_liga_cv1_q18, &se01_liga_cv1_q26_t2};
Transition se01_liga_cv1_q26_t2 = {&stop, &se01_liga_cv1_q25, &se01_liga_cv1_q26_t3};
Transition se01_liga_cv1_q26_t3 = {&start, &se01_liga_cv1_q26, &se01_liga_cv1_q26_t4};
Transition se01_liga_cv1_q26_t4 = {&ppg_on, &se01_liga_cv1_q30, NULL};

Transition se01_liga_cv1_q27_t0;
Transition se01_liga_cv1_q27_t1;
Transition se01_liga_cv1_q27_t2;
Transition se01_liga_cv1_q27_t3;
Transition se01_liga_cv1_q27_t4;
Transition se01_liga_cv1_q27_t0 = {&cv1_off, &se01_liga_cv1_q11, &se01_liga_cv1_q27_t1};
Transition se01_liga_cv1_q27_t1 = {&ppz_stoped, &se01_liga_cv1_q19, &se01_liga_cv1_q27_t2};
Transition se01_liga_cv1_q27_t2 = {&stop, &se01_liga_cv1_q25, &se01_liga_cv1_q27_t3};
Transition se01_liga_cv1_q27_t3 = {&start, &se01_liga_cv1_q27, &se01_liga_cv1_q27_t4};
Transition se01_liga_cv1_q27_t4 = {&ppg_on, &se01_liga_cv1_q32, NULL};

Transition se01_liga_cv1_q28_t0;
Transition se01_liga_cv1_q28_t1;
Transition se01_liga_cv1_q28_t2;
Transition se01_liga_cv1_q28_t3;
Transition se01_liga_cv1_q28_t4;
Transition se01_liga_cv1_q28_t0 = {&cv1_off, &se01_liga_cv1_q12, &se01_liga_cv1_q28_t1};
Transition se01_liga_cv1_q28_t1 = {&ppz_stoped, &se01_liga_cv1_q18, &se01_liga_cv1_q28_t2};
Transition se01_liga_cv1_q28_t2 = {&start, &se01_liga_cv1_q28, &se01_liga_cv1_q28_t3};
Transition se01_liga_cv1_q28_t3 = {&stop, &se01_liga_cv1_q28, &se01_liga_cv1_q28_t4};
Transition se01_liga_cv1_q28_t4 = {&ppg_on, &se01_liga_cv1_q32, NULL};

Transition se01_liga_cv1_q29_t0;
Transition se01_liga_cv1_q29_t1;
Transition se01_liga_cv1_q29_t2;
Transition se01_liga_cv1_q29_t3;
Transition se01_liga_cv1_q29_t4;
Transition se01_liga_cv1_q29_t0 = {&cv1_off, &se01_liga_cv1_q13, &se01_liga_cv1_q29_t1};
Transition se01_liga_cv1_q29_t1 = {&ppz_stoped, &se01_liga_cv1_q21, &se01_liga_cv1_q29_t2};
Transition se01_liga_cv1_q29_t2 = {&ppg_off, &se01_liga_cv1_q25, &se01_liga_cv1_q29_t3};
Transition se01_liga_cv1_q29_t3 = {&stop, &se01_liga_cv1_q29, &se01_liga_cv1_q29_t4};
Transition se01_liga_cv1_q29_t4 = {&start, &se01_liga_cv1_q30, NULL};

Transition se01_liga_cv1_q3_t0;
Transition se01_liga_cv1_q3_t1;
Transition se01_liga_cv1_q3_t2;
Transition se01_liga_cv1_q3_t3;
Transition se01_liga_cv1_q3_t0 = {&stop, &se01_liga_cv1_q0, &se01_liga_cv1_q3_t1};
Transition se01_liga_cv1_q3_t1 = {&ppz_moving, &se01_liga_cv1_q11, &se01_liga_cv1_q3_t2};
Transition se01_liga_cv1_q3_t2 = {&start, &se01_liga_cv1_q3, &se01_liga_cv1_q3_t3};
Transition se01_liga_cv1_q3_t3 = {&ppg_on, &se01_liga_cv1_q8, NULL};

Transition se01_liga_cv1_q30_t0;
Transition se01_liga_cv1_q30_t1;
Transition se01_liga_cv1_q30_t2;
Transition se01_liga_cv1_q30_t3;
Transition se01_liga_cv1_q30_t4;
Transition se01_liga_cv1_q30_t0 = {&cv1_off, &se01_liga_cv1_q14, &se01_liga_cv1_q30_t1};
Transition se01_liga_cv1_q30_t1 = {&ppz_stoped, &se01_liga_cv1_q22, &se01_liga_cv1_q30_t2};
Transition se01_liga_cv1_q30_t2 = {&ppg_off, &se01_liga_cv1_q26, &se01_liga_cv1_q30_t3};
Transition se01_liga_cv1_q30_t3 = {&stop, &se01_liga_cv1_q29, &se01_liga_cv1_q30_t4};
Transition se01_liga_cv1_q30_t4 = {&start, &se01_liga_cv1_q30, NULL};

Transition se01_liga_cv1_q31_t0;
Transition se01_liga_cv1_q31_t1;
Transition se01_liga_cv1_q31_t2;
Transition se01_liga_cv1_q31_t3;
Transition se01_liga_cv1_q31_t4;
Transition se01_liga_cv1_q31_t0 = {&cv1_off, &se01_liga_cv1_q15, &se01_liga_cv1_q31_t1};
Transition se01_liga_cv1_q31_t1 = {&ppz_stoped, &se01_liga_cv1_q23, &se01_liga_cv1_q31_t2};
Transition se01_liga_cv1_q31_t2 = {&ppg_off, &se01_liga_cv1_q27, &se01_liga_cv1_q31_t3};
Transition se01_liga_cv1_q31_t3 = {&stop, &se01_liga_cv1_q29, &se01_liga_cv1_q31_t4};
Transition se01_liga_cv1_q31_t4 = {&start, &se01_liga_cv1_q31, NULL};

Transition se01_liga_cv1_q32_t0;
Transition se01_liga_cv1_q32_t1;
Transition se01_liga_cv1_q32_t2;
Transition se01_liga_cv1_q32_t3;
Transition se01_liga_cv1_q32_t4;
Transition se01_liga_cv1_q32_t0 = {&cv1_off, &se01_liga_cv1_q16, &se01_liga_cv1_q32_t1};
Transition se01_liga_cv1_q32_t1 = {&ppz_stoped, &se01_liga_cv1_q22, &se01_liga_cv1_q32_t2};
Transition se01_liga_cv1_q32_t2 = {&ppg_off, &se01_liga_cv1_q28, &se01_liga_cv1_q32_t3};
Transition se01_liga_cv1_q32_t3 = {&start, &se01_liga_cv1_q32, &se01_liga_cv1_q32_t4};
Transition se01_liga_cv1_q32_t4 = {&stop, &se01_liga_cv1_q32, NULL};

Transition se01_liga_cv1_q4_t0;
Transition se01_liga_cv1_q4_t1;
Transition se01_liga_cv1_q4_t2;
Transition se01_liga_cv1_q4_t3;
Transition se01_liga_cv1_q4_t0 = {&ppz_moving, &se01_liga_cv1_q12, &se01_liga_cv1_q4_t1};
Transition se01_liga_cv1_q4_t1 = {&start, &se01_liga_cv1_q4, &se01_liga_cv1_q4_t2};
Transition se01_liga_cv1_q4_t2 = {&stop, &se01_liga_cv1_q4, &se01_liga_cv1_q4_t3};
Transition se01_liga_cv1_q4_t3 = {&ppg_on, &se01_liga_cv1_q8, NULL};

Transition se01_liga_cv1_q5_t0;
Transition se01_liga_cv1_q5_t1;
Transition se01_liga_cv1_q5_t2;
Transition se01_liga_cv1_q5_t3;
Transition se01_liga_cv1_q5_t0 = {&ppg_off, &se01_liga_cv1_q0, &se01_liga_cv1_q5_t1};
Transition se01_liga_cv1_q5_t1 = {&ppz_moving, &se01_liga_cv1_q13, &se01_liga_cv1_q5_t2};
Transition se01_liga_cv1_q5_t2 = {&stop, &se01_liga_cv1_q5, &se01_liga_cv1_q5_t3};
Transition se01_liga_cv1_q5_t3 = {&start, &se01_liga_cv1_q6, NULL};

Transition se01_liga_cv1_q6_t0;
Transition se01_liga_cv1_q6_t1;
Transition se01_liga_cv1_q6_t2;
Transition se01_liga_cv1_q6_t3;
Transition se01_liga_cv1_q6_t4;
Transition se01_liga_cv1_q6_t0 = {&ppz_moving, &se01_liga_cv1_q14, &se01_liga_cv1_q6_t1};
Transition se01_liga_cv1_q6_t1 = {&ppg_off, &se01_liga_cv1_q2, &se01_liga_cv1_q6_t2};
Transition se01_liga_cv1_q6_t2 = {&cv1_on, &se01_liga_cv1_q23, &se01_liga_cv1_q6_t3};
Transition se01_liga_cv1_q6_t3 = {&stop, &se01_liga_cv1_q5, &se01_liga_cv1_q6_t4};
Transition se01_liga_cv1_q6_t4 = {&start, &se01_liga_cv1_q6, NULL};

Transition se01_liga_cv1_q7_t0;
Transition se01_liga_cv1_q7_t1;
Transition se01_liga_cv1_q7_t2;
Transition se01_liga_cv1_q7_t3;
Transition se01_liga_cv1_q7_t0 = {&ppz_moving, &se01_liga_cv1_q15, &se01_liga_cv1_q7_t1};
Transition se01_liga_cv1_q7_t1 = {&ppg_off, &se01_liga_cv1_q3, &se01_liga_cv1_q7_t2};
Transition se01_liga_cv1_q7_t2 = {&stop, &se01_liga_cv1_q5, &se01_liga_cv1_q7_t3};
Transition se01_liga_cv1_q7_t3 = {&start, &se01_liga_cv1_q7, NULL};

Transition se01_liga_cv1_q8_t0;
Transition se01_liga_cv1_q8_t1;
Transition se01_liga_cv1_q8_t2;
Transition se01_liga_cv1_q8_t3;
Transition se01_liga_cv1_q8_t0 = {&ppz_moving, &se01_liga_cv1_q16, &se01_liga_cv1_q8_t1};
Transition se01_liga_cv1_q8_t1 = {&ppg_off, &se01_liga_cv1_q4, &se01_liga_cv1_q8_t2};
Transition se01_liga_cv1_q8_t2 = {&start, &se01_liga_cv1_q8, &se01_liga_cv1_q8_t3};
Transition se01_liga_cv1_q8_t3 = {&stop, &se01_liga_cv1_q8, NULL};

Transition se01_liga_cv1_q9_t0;
Transition se01_liga_cv1_q9_t1;
Transition se01_liga_cv1_q9_t2;
Transition se01_liga_cv1_q9_t3;
Transition se01_liga_cv1_q9_t0 = {&ppz_stoped, &se01_liga_cv1_q0, &se01_liga_cv1_q9_t1};
Transition se01_liga_cv1_q9_t1 = {&start, &se01_liga_cv1_q10, &se01_liga_cv1_q9_t2};
Transition se01_liga_cv1_q9_t2 = {&ppg_on, &se01_liga_cv1_q13, &se01_liga_cv1_q9_t3};
Transition se01_liga_cv1_q9_t3 = {&stop, &se01_liga_cv1_q9, NULL};


// states init
State se01_liga_cv1_q0 = {true, SUP_DEBUG_STR("q0"), &se01_liga_cv1_q0_t0};
State se01_liga_cv1_q10 = {false, SUP_DEBUG_STR("q10"), &se01_liga_cv1_q10_t0};
State se01_liga_cv1_q11 = {false, SUP_DEBUG_STR("q11"), &se01_liga_cv1_q11_t0};
State se01_liga_cv1_q12 = {false, SUP_DEBUG_STR("q12"), &se01_liga_cv1_q12_t0};
State se01_liga_cv1_q13 = {false, SUP_DEBUG_STR("q13"), &se01_liga_cv1_q13_t0};
State se01_liga_cv1_q14 = {false, SUP_DEBUG_STR("q14"), &se01_liga_cv1_q14_t0};
State se01_liga_cv1_q15 = {false, SUP_DEBUG_STR("q15"), &se01_liga_cv1_q15_t0};
State se01_liga_cv1_q16 = {false, SUP_DEBUG_STR("q16"), &se01_liga_cv1_q16_t0};
State se01_liga_cv1_q17 = {false, SUP_DEBUG_STR("q17"), &se01_liga_cv1_q17_t0};
State se01_liga_cv1_q18 = {false, SUP_DEBUG_STR("q18"), &se01_liga_cv1_q18_t0};
State se01_liga_cv1_q19 = {false, SUP_DEBUG_STR("q19"), &se01_liga_cv1_q19_t0};
State se01_liga_cv1_q2 = {false, SUP_DEBUG_STR("q2"), &se01_liga_cv1_q2_t0};
State se01_liga_cv1_q20 = {false, SUP_DEBUG_STR("q20"), &se01_liga_cv1_q20_t0};
State se01_liga_cv1_q21 = {false, SUP_DEBUG_STR("q21"), &se01_liga_cv1_q21_t0};
State se01_liga_cv1_q22 = {false, SUP_DEBUG_STR("q22"), &se01_liga_cv1_q22_t0};
State se01_liga_cv1_q23 = {false, SUP_DEBUG_STR("q23"), &se01_liga_cv1_q23_t0};
State se01_liga_cv1_q24 = {false, SUP_DEBUG_STR("q24"), &se01_liga_cv1_q24_t0};
State se01_liga_cv1_q25 = {false, SUP_DEBUG_STR("q25"), &se01_liga_cv1_q25_t0};
State se01_liga_cv1_q26 = {false, SUP_DEBUG_STR("q26"), &se01_liga_cv1_q26_t0};
State se01_liga_cv1_q27 = {false, SUP_DEBUG_STR("q27"), &se01_liga_cv1_q27_t0};
State se01_liga_cv1_q28 = {false, SUP_DEBUG_STR("q28"), &se01_liga_cv1_q28_t0};
State se01_liga_cv1_q29 = {false, SUP_DEBUG_STR("q29"), &se01_liga_cv1_q29_t0};
State se01_liga_cv1_q3 = {false, SUP_DEBUG_STR("q3"), &se01_liga_cv1_q3_t0};
State se01_liga_cv1_q30 = {false, SUP_DEBUG_STR("q30"), &se01_liga_cv1_q30_t0};
State se01_liga_cv1_q31 = {false, SUP_DEBUG_STR("q31"), &se01_liga_cv1_q31_t0};
State se01_liga_cv1_q32 = {false, SUP_DEBUG_STR("q32"), &se01_liga_cv1_q32_t0};
State se01_liga_cv1_q4 = {false, SUP_DEBUG_STR("q4"), &se01_liga_cv1_q4_t0};
State se01_liga_cv1_q5 = {false, SUP_DEBUG_STR("q5"), &se01_liga_cv1_q5_t0};
State se01_liga_cv1_q6 = {false, SUP_DEBUG_STR("q6"), &se01_liga_cv1_q6_t0};
State se01_liga_cv1_q7 = {false, SUP_DEBUG_STR("q7"), &se01_liga_cv1_q7_t0};
State se01_liga_cv1_q8 = {false, SUP_DEBUG_STR("q8"), &se01_liga_cv1_q8_t0};
State se01_liga_cv1_q9 = {false, SUP_DEBUG_STR("q9"), &se01_liga_cv1_q9_t0};

// Supervisor create
Supervisor se01_liga_cv1 = {&se01_liga_cv1_q0, &se01_liga_cv1_q0, NULL,  &se01_liga_cv1_stop_evt0, "se01_liga_cv1"};
