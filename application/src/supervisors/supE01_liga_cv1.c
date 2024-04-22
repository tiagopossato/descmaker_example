#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "supE01_liga_cv1.h"

// Supervisor specific instances
// alphabet create
const Alphabet supE01_liga_cv1_t4_evt0;
const Alphabet supE01_liga_cv1_t3_evt1;
const Alphabet supE01_liga_cv1_s5_evt2;
const Alphabet supE01_liga_cv1_m6_evt3;
const Alphabet supE01_liga_cv1_p6_evt4;
const Alphabet supE01_liga_cv1_s1_evt5;
const Alphabet supE01_liga_cv1_f5_evt6;
const Alphabet supE01_liga_cv1_f1_evt7;

// Alphabet init
const Alphabet supE01_liga_cv1_t4_evt0 = {&t4, &supE01_liga_cv1_t3_evt1};
const Alphabet supE01_liga_cv1_t3_evt1 = {&t3, &supE01_liga_cv1_s5_evt2};
const Alphabet supE01_liga_cv1_s5_evt2 = {&s5, &supE01_liga_cv1_m6_evt3};
const Alphabet supE01_liga_cv1_m6_evt3 = {&m6, &supE01_liga_cv1_p6_evt4};
const Alphabet supE01_liga_cv1_p6_evt4 = {&p6, &supE01_liga_cv1_s1_evt5};
const Alphabet supE01_liga_cv1_s1_evt5 = {&s1, &supE01_liga_cv1_f5_evt6};
const Alphabet supE01_liga_cv1_f5_evt6 = {&f5, &supE01_liga_cv1_f1_evt7};
const Alphabet supE01_liga_cv1_f1_evt7 = {&f1, NULL};

// states create
const State supE01_liga_cv1_q0;
const State supE01_liga_cv1_q10;
const State supE01_liga_cv1_q11;
const State supE01_liga_cv1_q12;
const State supE01_liga_cv1_q13;
const State supE01_liga_cv1_q14;
const State supE01_liga_cv1_q15;
const State supE01_liga_cv1_q16;
const State supE01_liga_cv1_q17;
const State supE01_liga_cv1_q18;
const State supE01_liga_cv1_q19;
const State supE01_liga_cv1_q2;
const State supE01_liga_cv1_q20;
const State supE01_liga_cv1_q21;
const State supE01_liga_cv1_q22;
const State supE01_liga_cv1_q23;
const State supE01_liga_cv1_q24;
const State supE01_liga_cv1_q25;
const State supE01_liga_cv1_q26;
const State supE01_liga_cv1_q27;
const State supE01_liga_cv1_q28;
const State supE01_liga_cv1_q29;
const State supE01_liga_cv1_q3;
const State supE01_liga_cv1_q30;
const State supE01_liga_cv1_q31;
const State supE01_liga_cv1_q32;
const State supE01_liga_cv1_q4;
const State supE01_liga_cv1_q5;
const State supE01_liga_cv1_q6;
const State supE01_liga_cv1_q7;
const State supE01_liga_cv1_q8;
const State supE01_liga_cv1_q9;

// transitions create and init
const Transition supE01_liga_cv1_q0_t0;
const Transition supE01_liga_cv1_q0_t1;
const Transition supE01_liga_cv1_q0_t2;
const Transition supE01_liga_cv1_q0_t3;
const Transition supE01_liga_cv1_q0_t0 = {&t4, &supE01_liga_cv1_q0, &supE01_liga_cv1_q0_t1};
const Transition supE01_liga_cv1_q0_t1 = {&t3, &supE01_liga_cv1_q2, &supE01_liga_cv1_q0_t2};
const Transition supE01_liga_cv1_q0_t2 = {&s5, &supE01_liga_cv1_q5, &supE01_liga_cv1_q0_t3};
const Transition supE01_liga_cv1_q0_t3 = {&m6, &supE01_liga_cv1_q9, NULL};

const Transition supE01_liga_cv1_q10_t0;
const Transition supE01_liga_cv1_q10_t1;
const Transition supE01_liga_cv1_q10_t2;
const Transition supE01_liga_cv1_q10_t3;
const Transition supE01_liga_cv1_q10_t4;
const Transition supE01_liga_cv1_q10_t0 = {&t3, &supE01_liga_cv1_q10, &supE01_liga_cv1_q10_t1};
const Transition supE01_liga_cv1_q10_t1 = {&s5, &supE01_liga_cv1_q14, &supE01_liga_cv1_q10_t2};
const Transition supE01_liga_cv1_q10_t2 = {&p6, &supE01_liga_cv1_q2, &supE01_liga_cv1_q10_t3};
const Transition supE01_liga_cv1_q10_t3 = {&s1, &supE01_liga_cv1_q27, &supE01_liga_cv1_q10_t4};
const Transition supE01_liga_cv1_q10_t4 = {&t4, &supE01_liga_cv1_q9, NULL};

const Transition supE01_liga_cv1_q11_t0;
const Transition supE01_liga_cv1_q11_t1;
const Transition supE01_liga_cv1_q11_t2;
const Transition supE01_liga_cv1_q11_t3;
const Transition supE01_liga_cv1_q11_t0 = {&t3, &supE01_liga_cv1_q11, &supE01_liga_cv1_q11_t1};
const Transition supE01_liga_cv1_q11_t1 = {&s5, &supE01_liga_cv1_q16, &supE01_liga_cv1_q11_t2};
const Transition supE01_liga_cv1_q11_t2 = {&p6, &supE01_liga_cv1_q3, &supE01_liga_cv1_q11_t3};
const Transition supE01_liga_cv1_q11_t3 = {&t4, &supE01_liga_cv1_q9, NULL};

const Transition supE01_liga_cv1_q12_t0;
const Transition supE01_liga_cv1_q12_t1;
const Transition supE01_liga_cv1_q12_t2;
const Transition supE01_liga_cv1_q12_t3;
const Transition supE01_liga_cv1_q12_t0 = {&t3, &supE01_liga_cv1_q12, &supE01_liga_cv1_q12_t1};
const Transition supE01_liga_cv1_q12_t1 = {&t4, &supE01_liga_cv1_q12, &supE01_liga_cv1_q12_t2};
const Transition supE01_liga_cv1_q12_t2 = {&s5, &supE01_liga_cv1_q16, &supE01_liga_cv1_q12_t3};
const Transition supE01_liga_cv1_q12_t3 = {&p6, &supE01_liga_cv1_q2, NULL};

const Transition supE01_liga_cv1_q13_t0;
const Transition supE01_liga_cv1_q13_t1;
const Transition supE01_liga_cv1_q13_t2;
const Transition supE01_liga_cv1_q13_t3;
const Transition supE01_liga_cv1_q13_t0 = {&t4, &supE01_liga_cv1_q13, &supE01_liga_cv1_q13_t1};
const Transition supE01_liga_cv1_q13_t1 = {&t3, &supE01_liga_cv1_q14, &supE01_liga_cv1_q13_t2};
const Transition supE01_liga_cv1_q13_t2 = {&p6, &supE01_liga_cv1_q5, &supE01_liga_cv1_q13_t3};
const Transition supE01_liga_cv1_q13_t3 = {&f5, &supE01_liga_cv1_q9, NULL};

const Transition supE01_liga_cv1_q14_t0;
const Transition supE01_liga_cv1_q14_t1;
const Transition supE01_liga_cv1_q14_t2;
const Transition supE01_liga_cv1_q14_t3;
const Transition supE01_liga_cv1_q14_t4;
const Transition supE01_liga_cv1_q14_t0 = {&f5, &supE01_liga_cv1_q10, &supE01_liga_cv1_q14_t1};
const Transition supE01_liga_cv1_q14_t1 = {&t4, &supE01_liga_cv1_q13, &supE01_liga_cv1_q14_t2};
const Transition supE01_liga_cv1_q14_t2 = {&t3, &supE01_liga_cv1_q14, &supE01_liga_cv1_q14_t3};
const Transition supE01_liga_cv1_q14_t3 = {&s1, &supE01_liga_cv1_q31, &supE01_liga_cv1_q14_t4};
const Transition supE01_liga_cv1_q14_t4 = {&p6, &supE01_liga_cv1_q6, NULL};

const Transition supE01_liga_cv1_q15_t0;
const Transition supE01_liga_cv1_q15_t1;
const Transition supE01_liga_cv1_q15_t2;
const Transition supE01_liga_cv1_q15_t3;
const Transition supE01_liga_cv1_q15_t0 = {&f5, &supE01_liga_cv1_q11, &supE01_liga_cv1_q15_t1};
const Transition supE01_liga_cv1_q15_t1 = {&t4, &supE01_liga_cv1_q13, &supE01_liga_cv1_q15_t2};
const Transition supE01_liga_cv1_q15_t2 = {&t3, &supE01_liga_cv1_q15, &supE01_liga_cv1_q15_t3};
const Transition supE01_liga_cv1_q15_t3 = {&p6, &supE01_liga_cv1_q7, NULL};

const Transition supE01_liga_cv1_q16_t0;
const Transition supE01_liga_cv1_q16_t1;
const Transition supE01_liga_cv1_q16_t2;
const Transition supE01_liga_cv1_q16_t3;
const Transition supE01_liga_cv1_q16_t0 = {&f5, &supE01_liga_cv1_q12, &supE01_liga_cv1_q16_t1};
const Transition supE01_liga_cv1_q16_t1 = {&t3, &supE01_liga_cv1_q16, &supE01_liga_cv1_q16_t2};
const Transition supE01_liga_cv1_q16_t2 = {&t4, &supE01_liga_cv1_q16, &supE01_liga_cv1_q16_t3};
const Transition supE01_liga_cv1_q16_t3 = {&p6, &supE01_liga_cv1_q6, NULL};

const Transition supE01_liga_cv1_q17_t0;
const Transition supE01_liga_cv1_q17_t1;
const Transition supE01_liga_cv1_q17_t2;
const Transition supE01_liga_cv1_q17_t3;
const Transition supE01_liga_cv1_q17_t4;
const Transition supE01_liga_cv1_q17_t0 = {&f1, &supE01_liga_cv1_q0, &supE01_liga_cv1_q17_t1};
const Transition supE01_liga_cv1_q17_t1 = {&t4, &supE01_liga_cv1_q17, &supE01_liga_cv1_q17_t2};
const Transition supE01_liga_cv1_q17_t2 = {&t3, &supE01_liga_cv1_q18, &supE01_liga_cv1_q17_t3};
const Transition supE01_liga_cv1_q17_t3 = {&s5, &supE01_liga_cv1_q21, &supE01_liga_cv1_q17_t4};
const Transition supE01_liga_cv1_q17_t4 = {&m6, &supE01_liga_cv1_q25, NULL};

const Transition supE01_liga_cv1_q18_t0;
const Transition supE01_liga_cv1_q18_t1;
const Transition supE01_liga_cv1_q18_t2;
const Transition supE01_liga_cv1_q18_t3;
const Transition supE01_liga_cv1_q18_t4;
const Transition supE01_liga_cv1_q18_t0 = {&t4, &supE01_liga_cv1_q17, &supE01_liga_cv1_q18_t1};
const Transition supE01_liga_cv1_q18_t1 = {&t3, &supE01_liga_cv1_q18, &supE01_liga_cv1_q18_t2};
const Transition supE01_liga_cv1_q18_t2 = {&f1, &supE01_liga_cv1_q2, &supE01_liga_cv1_q18_t3};
const Transition supE01_liga_cv1_q18_t3 = {&s5, &supE01_liga_cv1_q22, &supE01_liga_cv1_q18_t4};
const Transition supE01_liga_cv1_q18_t4 = {&m6, &supE01_liga_cv1_q26, NULL};

const Transition supE01_liga_cv1_q19_t0;
const Transition supE01_liga_cv1_q19_t1;
const Transition supE01_liga_cv1_q19_t2;
const Transition supE01_liga_cv1_q19_t3;
const Transition supE01_liga_cv1_q19_t4;
const Transition supE01_liga_cv1_q19_t0 = {&t4, &supE01_liga_cv1_q17, &supE01_liga_cv1_q19_t1};
const Transition supE01_liga_cv1_q19_t1 = {&t3, &supE01_liga_cv1_q19, &supE01_liga_cv1_q19_t2};
const Transition supE01_liga_cv1_q19_t2 = {&s5, &supE01_liga_cv1_q24, &supE01_liga_cv1_q19_t3};
const Transition supE01_liga_cv1_q19_t3 = {&m6, &supE01_liga_cv1_q27, &supE01_liga_cv1_q19_t4};
const Transition supE01_liga_cv1_q19_t4 = {&f1, &supE01_liga_cv1_q3, NULL};

const Transition supE01_liga_cv1_q2_t0;
const Transition supE01_liga_cv1_q2_t1;
const Transition supE01_liga_cv1_q2_t2;
const Transition supE01_liga_cv1_q2_t3;
const Transition supE01_liga_cv1_q2_t4;
const Transition supE01_liga_cv1_q2_t0 = {&t4, &supE01_liga_cv1_q0, &supE01_liga_cv1_q2_t1};
const Transition supE01_liga_cv1_q2_t1 = {&m6, &supE01_liga_cv1_q10, &supE01_liga_cv1_q2_t2};
const Transition supE01_liga_cv1_q2_t2 = {&s1, &supE01_liga_cv1_q19, &supE01_liga_cv1_q2_t3};
const Transition supE01_liga_cv1_q2_t3 = {&t3, &supE01_liga_cv1_q2, &supE01_liga_cv1_q2_t4};
const Transition supE01_liga_cv1_q2_t4 = {&s5, &supE01_liga_cv1_q6, NULL};

const Transition supE01_liga_cv1_q20_t0;
const Transition supE01_liga_cv1_q20_t1;
const Transition supE01_liga_cv1_q20_t2;
const Transition supE01_liga_cv1_q20_t3;
const Transition supE01_liga_cv1_q20_t4;
const Transition supE01_liga_cv1_q20_t0 = {&t3, &supE01_liga_cv1_q20, &supE01_liga_cv1_q20_t1};
const Transition supE01_liga_cv1_q20_t1 = {&t4, &supE01_liga_cv1_q20, &supE01_liga_cv1_q20_t2};
const Transition supE01_liga_cv1_q20_t2 = {&s5, &supE01_liga_cv1_q24, &supE01_liga_cv1_q20_t3};
const Transition supE01_liga_cv1_q20_t3 = {&m6, &supE01_liga_cv1_q28, &supE01_liga_cv1_q20_t4};
const Transition supE01_liga_cv1_q20_t4 = {&f1, &supE01_liga_cv1_q4, NULL};

const Transition supE01_liga_cv1_q21_t0;
const Transition supE01_liga_cv1_q21_t1;
const Transition supE01_liga_cv1_q21_t2;
const Transition supE01_liga_cv1_q21_t3;
const Transition supE01_liga_cv1_q21_t4;
const Transition supE01_liga_cv1_q21_t0 = {&f5, &supE01_liga_cv1_q17, &supE01_liga_cv1_q21_t1};
const Transition supE01_liga_cv1_q21_t1 = {&t4, &supE01_liga_cv1_q21, &supE01_liga_cv1_q21_t2};
const Transition supE01_liga_cv1_q21_t2 = {&t3, &supE01_liga_cv1_q22, &supE01_liga_cv1_q21_t3};
const Transition supE01_liga_cv1_q21_t3 = {&m6, &supE01_liga_cv1_q29, &supE01_liga_cv1_q21_t4};
const Transition supE01_liga_cv1_q21_t4 = {&f1, &supE01_liga_cv1_q5, NULL};

const Transition supE01_liga_cv1_q22_t0;
const Transition supE01_liga_cv1_q22_t1;
const Transition supE01_liga_cv1_q22_t2;
const Transition supE01_liga_cv1_q22_t3;
const Transition supE01_liga_cv1_q22_t4;
const Transition supE01_liga_cv1_q22_t0 = {&f5, &supE01_liga_cv1_q18, &supE01_liga_cv1_q22_t1};
const Transition supE01_liga_cv1_q22_t1 = {&t4, &supE01_liga_cv1_q21, &supE01_liga_cv1_q22_t2};
const Transition supE01_liga_cv1_q22_t2 = {&t3, &supE01_liga_cv1_q22, &supE01_liga_cv1_q22_t3};
const Transition supE01_liga_cv1_q22_t3 = {&m6, &supE01_liga_cv1_q30, &supE01_liga_cv1_q22_t4};
const Transition supE01_liga_cv1_q22_t4 = {&f1, &supE01_liga_cv1_q6, NULL};

const Transition supE01_liga_cv1_q23_t0;
const Transition supE01_liga_cv1_q23_t1;
const Transition supE01_liga_cv1_q23_t2;
const Transition supE01_liga_cv1_q23_t3;
const Transition supE01_liga_cv1_q23_t4;
const Transition supE01_liga_cv1_q23_t0 = {&f5, &supE01_liga_cv1_q19, &supE01_liga_cv1_q23_t1};
const Transition supE01_liga_cv1_q23_t1 = {&t4, &supE01_liga_cv1_q21, &supE01_liga_cv1_q23_t2};
const Transition supE01_liga_cv1_q23_t2 = {&t3, &supE01_liga_cv1_q23, &supE01_liga_cv1_q23_t3};
const Transition supE01_liga_cv1_q23_t3 = {&m6, &supE01_liga_cv1_q31, &supE01_liga_cv1_q23_t4};
const Transition supE01_liga_cv1_q23_t4 = {&f1, &supE01_liga_cv1_q7, NULL};

const Transition supE01_liga_cv1_q24_t0;
const Transition supE01_liga_cv1_q24_t1;
const Transition supE01_liga_cv1_q24_t2;
const Transition supE01_liga_cv1_q24_t3;
const Transition supE01_liga_cv1_q24_t4;
const Transition supE01_liga_cv1_q24_t0 = {&f5, &supE01_liga_cv1_q20, &supE01_liga_cv1_q24_t1};
const Transition supE01_liga_cv1_q24_t1 = {&t3, &supE01_liga_cv1_q24, &supE01_liga_cv1_q24_t2};
const Transition supE01_liga_cv1_q24_t2 = {&t4, &supE01_liga_cv1_q24, &supE01_liga_cv1_q24_t3};
const Transition supE01_liga_cv1_q24_t3 = {&m6, &supE01_liga_cv1_q32, &supE01_liga_cv1_q24_t4};
const Transition supE01_liga_cv1_q24_t4 = {&f1, &supE01_liga_cv1_q8, NULL};

const Transition supE01_liga_cv1_q25_t0;
const Transition supE01_liga_cv1_q25_t1;
const Transition supE01_liga_cv1_q25_t2;
const Transition supE01_liga_cv1_q25_t3;
const Transition supE01_liga_cv1_q25_t4;
const Transition supE01_liga_cv1_q25_t0 = {&p6, &supE01_liga_cv1_q17, &supE01_liga_cv1_q25_t1};
const Transition supE01_liga_cv1_q25_t1 = {&t4, &supE01_liga_cv1_q25, &supE01_liga_cv1_q25_t2};
const Transition supE01_liga_cv1_q25_t2 = {&t3, &supE01_liga_cv1_q26, &supE01_liga_cv1_q25_t3};
const Transition supE01_liga_cv1_q25_t3 = {&s5, &supE01_liga_cv1_q29, &supE01_liga_cv1_q25_t4};
const Transition supE01_liga_cv1_q25_t4 = {&f1, &supE01_liga_cv1_q9, NULL};

const Transition supE01_liga_cv1_q26_t0;
const Transition supE01_liga_cv1_q26_t1;
const Transition supE01_liga_cv1_q26_t2;
const Transition supE01_liga_cv1_q26_t3;
const Transition supE01_liga_cv1_q26_t4;
const Transition supE01_liga_cv1_q26_t0 = {&f1, &supE01_liga_cv1_q10, &supE01_liga_cv1_q26_t1};
const Transition supE01_liga_cv1_q26_t1 = {&p6, &supE01_liga_cv1_q18, &supE01_liga_cv1_q26_t2};
const Transition supE01_liga_cv1_q26_t2 = {&t4, &supE01_liga_cv1_q25, &supE01_liga_cv1_q26_t3};
const Transition supE01_liga_cv1_q26_t3 = {&t3, &supE01_liga_cv1_q26, &supE01_liga_cv1_q26_t4};
const Transition supE01_liga_cv1_q26_t4 = {&s5, &supE01_liga_cv1_q30, NULL};

const Transition supE01_liga_cv1_q27_t0;
const Transition supE01_liga_cv1_q27_t1;
const Transition supE01_liga_cv1_q27_t2;
const Transition supE01_liga_cv1_q27_t3;
const Transition supE01_liga_cv1_q27_t4;
const Transition supE01_liga_cv1_q27_t0 = {&f1, &supE01_liga_cv1_q11, &supE01_liga_cv1_q27_t1};
const Transition supE01_liga_cv1_q27_t1 = {&p6, &supE01_liga_cv1_q19, &supE01_liga_cv1_q27_t2};
const Transition supE01_liga_cv1_q27_t2 = {&t4, &supE01_liga_cv1_q25, &supE01_liga_cv1_q27_t3};
const Transition supE01_liga_cv1_q27_t3 = {&t3, &supE01_liga_cv1_q27, &supE01_liga_cv1_q27_t4};
const Transition supE01_liga_cv1_q27_t4 = {&s5, &supE01_liga_cv1_q32, NULL};

const Transition supE01_liga_cv1_q28_t0;
const Transition supE01_liga_cv1_q28_t1;
const Transition supE01_liga_cv1_q28_t2;
const Transition supE01_liga_cv1_q28_t3;
const Transition supE01_liga_cv1_q28_t4;
const Transition supE01_liga_cv1_q28_t0 = {&f1, &supE01_liga_cv1_q12, &supE01_liga_cv1_q28_t1};
const Transition supE01_liga_cv1_q28_t1 = {&p6, &supE01_liga_cv1_q18, &supE01_liga_cv1_q28_t2};
const Transition supE01_liga_cv1_q28_t2 = {&t3, &supE01_liga_cv1_q28, &supE01_liga_cv1_q28_t3};
const Transition supE01_liga_cv1_q28_t3 = {&t4, &supE01_liga_cv1_q28, &supE01_liga_cv1_q28_t4};
const Transition supE01_liga_cv1_q28_t4 = {&s5, &supE01_liga_cv1_q32, NULL};

const Transition supE01_liga_cv1_q29_t0;
const Transition supE01_liga_cv1_q29_t1;
const Transition supE01_liga_cv1_q29_t2;
const Transition supE01_liga_cv1_q29_t3;
const Transition supE01_liga_cv1_q29_t4;
const Transition supE01_liga_cv1_q29_t0 = {&f1, &supE01_liga_cv1_q13, &supE01_liga_cv1_q29_t1};
const Transition supE01_liga_cv1_q29_t1 = {&p6, &supE01_liga_cv1_q21, &supE01_liga_cv1_q29_t2};
const Transition supE01_liga_cv1_q29_t2 = {&f5, &supE01_liga_cv1_q25, &supE01_liga_cv1_q29_t3};
const Transition supE01_liga_cv1_q29_t3 = {&t4, &supE01_liga_cv1_q29, &supE01_liga_cv1_q29_t4};
const Transition supE01_liga_cv1_q29_t4 = {&t3, &supE01_liga_cv1_q30, NULL};

const Transition supE01_liga_cv1_q3_t0;
const Transition supE01_liga_cv1_q3_t1;
const Transition supE01_liga_cv1_q3_t2;
const Transition supE01_liga_cv1_q3_t3;
const Transition supE01_liga_cv1_q3_t0 = {&t4, &supE01_liga_cv1_q0, &supE01_liga_cv1_q3_t1};
const Transition supE01_liga_cv1_q3_t1 = {&m6, &supE01_liga_cv1_q11, &supE01_liga_cv1_q3_t2};
const Transition supE01_liga_cv1_q3_t2 = {&t3, &supE01_liga_cv1_q3, &supE01_liga_cv1_q3_t3};
const Transition supE01_liga_cv1_q3_t3 = {&s5, &supE01_liga_cv1_q8, NULL};

const Transition supE01_liga_cv1_q30_t0;
const Transition supE01_liga_cv1_q30_t1;
const Transition supE01_liga_cv1_q30_t2;
const Transition supE01_liga_cv1_q30_t3;
const Transition supE01_liga_cv1_q30_t4;
const Transition supE01_liga_cv1_q30_t0 = {&f1, &supE01_liga_cv1_q14, &supE01_liga_cv1_q30_t1};
const Transition supE01_liga_cv1_q30_t1 = {&p6, &supE01_liga_cv1_q22, &supE01_liga_cv1_q30_t2};
const Transition supE01_liga_cv1_q30_t2 = {&f5, &supE01_liga_cv1_q26, &supE01_liga_cv1_q30_t3};
const Transition supE01_liga_cv1_q30_t3 = {&t4, &supE01_liga_cv1_q29, &supE01_liga_cv1_q30_t4};
const Transition supE01_liga_cv1_q30_t4 = {&t3, &supE01_liga_cv1_q30, NULL};

const Transition supE01_liga_cv1_q31_t0;
const Transition supE01_liga_cv1_q31_t1;
const Transition supE01_liga_cv1_q31_t2;
const Transition supE01_liga_cv1_q31_t3;
const Transition supE01_liga_cv1_q31_t4;
const Transition supE01_liga_cv1_q31_t0 = {&f1, &supE01_liga_cv1_q15, &supE01_liga_cv1_q31_t1};
const Transition supE01_liga_cv1_q31_t1 = {&p6, &supE01_liga_cv1_q23, &supE01_liga_cv1_q31_t2};
const Transition supE01_liga_cv1_q31_t2 = {&f5, &supE01_liga_cv1_q27, &supE01_liga_cv1_q31_t3};
const Transition supE01_liga_cv1_q31_t3 = {&t4, &supE01_liga_cv1_q29, &supE01_liga_cv1_q31_t4};
const Transition supE01_liga_cv1_q31_t4 = {&t3, &supE01_liga_cv1_q31, NULL};

const Transition supE01_liga_cv1_q32_t0;
const Transition supE01_liga_cv1_q32_t1;
const Transition supE01_liga_cv1_q32_t2;
const Transition supE01_liga_cv1_q32_t3;
const Transition supE01_liga_cv1_q32_t4;
const Transition supE01_liga_cv1_q32_t0 = {&f1, &supE01_liga_cv1_q16, &supE01_liga_cv1_q32_t1};
const Transition supE01_liga_cv1_q32_t1 = {&p6, &supE01_liga_cv1_q22, &supE01_liga_cv1_q32_t2};
const Transition supE01_liga_cv1_q32_t2 = {&f5, &supE01_liga_cv1_q28, &supE01_liga_cv1_q32_t3};
const Transition supE01_liga_cv1_q32_t3 = {&t3, &supE01_liga_cv1_q32, &supE01_liga_cv1_q32_t4};
const Transition supE01_liga_cv1_q32_t4 = {&t4, &supE01_liga_cv1_q32, NULL};

const Transition supE01_liga_cv1_q4_t0;
const Transition supE01_liga_cv1_q4_t1;
const Transition supE01_liga_cv1_q4_t2;
const Transition supE01_liga_cv1_q4_t3;
const Transition supE01_liga_cv1_q4_t0 = {&m6, &supE01_liga_cv1_q12, &supE01_liga_cv1_q4_t1};
const Transition supE01_liga_cv1_q4_t1 = {&t3, &supE01_liga_cv1_q4, &supE01_liga_cv1_q4_t2};
const Transition supE01_liga_cv1_q4_t2 = {&t4, &supE01_liga_cv1_q4, &supE01_liga_cv1_q4_t3};
const Transition supE01_liga_cv1_q4_t3 = {&s5, &supE01_liga_cv1_q8, NULL};

const Transition supE01_liga_cv1_q5_t0;
const Transition supE01_liga_cv1_q5_t1;
const Transition supE01_liga_cv1_q5_t2;
const Transition supE01_liga_cv1_q5_t3;
const Transition supE01_liga_cv1_q5_t0 = {&f5, &supE01_liga_cv1_q0, &supE01_liga_cv1_q5_t1};
const Transition supE01_liga_cv1_q5_t1 = {&m6, &supE01_liga_cv1_q13, &supE01_liga_cv1_q5_t2};
const Transition supE01_liga_cv1_q5_t2 = {&t4, &supE01_liga_cv1_q5, &supE01_liga_cv1_q5_t3};
const Transition supE01_liga_cv1_q5_t3 = {&t3, &supE01_liga_cv1_q6, NULL};

const Transition supE01_liga_cv1_q6_t0;
const Transition supE01_liga_cv1_q6_t1;
const Transition supE01_liga_cv1_q6_t2;
const Transition supE01_liga_cv1_q6_t3;
const Transition supE01_liga_cv1_q6_t4;
const Transition supE01_liga_cv1_q6_t0 = {&m6, &supE01_liga_cv1_q14, &supE01_liga_cv1_q6_t1};
const Transition supE01_liga_cv1_q6_t1 = {&f5, &supE01_liga_cv1_q2, &supE01_liga_cv1_q6_t2};
const Transition supE01_liga_cv1_q6_t2 = {&s1, &supE01_liga_cv1_q23, &supE01_liga_cv1_q6_t3};
const Transition supE01_liga_cv1_q6_t3 = {&t4, &supE01_liga_cv1_q5, &supE01_liga_cv1_q6_t4};
const Transition supE01_liga_cv1_q6_t4 = {&t3, &supE01_liga_cv1_q6, NULL};

const Transition supE01_liga_cv1_q7_t0;
const Transition supE01_liga_cv1_q7_t1;
const Transition supE01_liga_cv1_q7_t2;
const Transition supE01_liga_cv1_q7_t3;
const Transition supE01_liga_cv1_q7_t0 = {&m6, &supE01_liga_cv1_q15, &supE01_liga_cv1_q7_t1};
const Transition supE01_liga_cv1_q7_t1 = {&f5, &supE01_liga_cv1_q3, &supE01_liga_cv1_q7_t2};
const Transition supE01_liga_cv1_q7_t2 = {&t4, &supE01_liga_cv1_q5, &supE01_liga_cv1_q7_t3};
const Transition supE01_liga_cv1_q7_t3 = {&t3, &supE01_liga_cv1_q7, NULL};

const Transition supE01_liga_cv1_q8_t0;
const Transition supE01_liga_cv1_q8_t1;
const Transition supE01_liga_cv1_q8_t2;
const Transition supE01_liga_cv1_q8_t3;
const Transition supE01_liga_cv1_q8_t0 = {&m6, &supE01_liga_cv1_q16, &supE01_liga_cv1_q8_t1};
const Transition supE01_liga_cv1_q8_t1 = {&f5, &supE01_liga_cv1_q4, &supE01_liga_cv1_q8_t2};
const Transition supE01_liga_cv1_q8_t2 = {&t3, &supE01_liga_cv1_q8, &supE01_liga_cv1_q8_t3};
const Transition supE01_liga_cv1_q8_t3 = {&t4, &supE01_liga_cv1_q8, NULL};

const Transition supE01_liga_cv1_q9_t0;
const Transition supE01_liga_cv1_q9_t1;
const Transition supE01_liga_cv1_q9_t2;
const Transition supE01_liga_cv1_q9_t3;
const Transition supE01_liga_cv1_q9_t0 = {&p6, &supE01_liga_cv1_q0, &supE01_liga_cv1_q9_t1};
const Transition supE01_liga_cv1_q9_t1 = {&t3, &supE01_liga_cv1_q10, &supE01_liga_cv1_q9_t2};
const Transition supE01_liga_cv1_q9_t2 = {&s5, &supE01_liga_cv1_q13, &supE01_liga_cv1_q9_t3};
const Transition supE01_liga_cv1_q9_t3 = {&t4, &supE01_liga_cv1_q9, NULL};


// states init
const State supE01_liga_cv1_q0 = {true, SUP_DEBUG_STR("q0"), &supE01_liga_cv1_q0_t0};
const State supE01_liga_cv1_q10 = {false, SUP_DEBUG_STR("q10"), &supE01_liga_cv1_q10_t0};
const State supE01_liga_cv1_q11 = {false, SUP_DEBUG_STR("q11"), &supE01_liga_cv1_q11_t0};
const State supE01_liga_cv1_q12 = {false, SUP_DEBUG_STR("q12"), &supE01_liga_cv1_q12_t0};
const State supE01_liga_cv1_q13 = {false, SUP_DEBUG_STR("q13"), &supE01_liga_cv1_q13_t0};
const State supE01_liga_cv1_q14 = {false, SUP_DEBUG_STR("q14"), &supE01_liga_cv1_q14_t0};
const State supE01_liga_cv1_q15 = {false, SUP_DEBUG_STR("q15"), &supE01_liga_cv1_q15_t0};
const State supE01_liga_cv1_q16 = {false, SUP_DEBUG_STR("q16"), &supE01_liga_cv1_q16_t0};
const State supE01_liga_cv1_q17 = {false, SUP_DEBUG_STR("q17"), &supE01_liga_cv1_q17_t0};
const State supE01_liga_cv1_q18 = {false, SUP_DEBUG_STR("q18"), &supE01_liga_cv1_q18_t0};
const State supE01_liga_cv1_q19 = {false, SUP_DEBUG_STR("q19"), &supE01_liga_cv1_q19_t0};
const State supE01_liga_cv1_q2 = {false, SUP_DEBUG_STR("q2"), &supE01_liga_cv1_q2_t0};
const State supE01_liga_cv1_q20 = {false, SUP_DEBUG_STR("q20"), &supE01_liga_cv1_q20_t0};
const State supE01_liga_cv1_q21 = {false, SUP_DEBUG_STR("q21"), &supE01_liga_cv1_q21_t0};
const State supE01_liga_cv1_q22 = {false, SUP_DEBUG_STR("q22"), &supE01_liga_cv1_q22_t0};
const State supE01_liga_cv1_q23 = {false, SUP_DEBUG_STR("q23"), &supE01_liga_cv1_q23_t0};
const State supE01_liga_cv1_q24 = {false, SUP_DEBUG_STR("q24"), &supE01_liga_cv1_q24_t0};
const State supE01_liga_cv1_q25 = {false, SUP_DEBUG_STR("q25"), &supE01_liga_cv1_q25_t0};
const State supE01_liga_cv1_q26 = {false, SUP_DEBUG_STR("q26"), &supE01_liga_cv1_q26_t0};
const State supE01_liga_cv1_q27 = {false, SUP_DEBUG_STR("q27"), &supE01_liga_cv1_q27_t0};
const State supE01_liga_cv1_q28 = {false, SUP_DEBUG_STR("q28"), &supE01_liga_cv1_q28_t0};
const State supE01_liga_cv1_q29 = {false, SUP_DEBUG_STR("q29"), &supE01_liga_cv1_q29_t0};
const State supE01_liga_cv1_q3 = {false, SUP_DEBUG_STR("q3"), &supE01_liga_cv1_q3_t0};
const State supE01_liga_cv1_q30 = {false, SUP_DEBUG_STR("q30"), &supE01_liga_cv1_q30_t0};
const State supE01_liga_cv1_q31 = {false, SUP_DEBUG_STR("q31"), &supE01_liga_cv1_q31_t0};
const State supE01_liga_cv1_q32 = {false, SUP_DEBUG_STR("q32"), &supE01_liga_cv1_q32_t0};
const State supE01_liga_cv1_q4 = {false, SUP_DEBUG_STR("q4"), &supE01_liga_cv1_q4_t0};
const State supE01_liga_cv1_q5 = {false, SUP_DEBUG_STR("q5"), &supE01_liga_cv1_q5_t0};
const State supE01_liga_cv1_q6 = {false, SUP_DEBUG_STR("q6"), &supE01_liga_cv1_q6_t0};
const State supE01_liga_cv1_q7 = {false, SUP_DEBUG_STR("q7"), &supE01_liga_cv1_q7_t0};
const State supE01_liga_cv1_q8 = {false, SUP_DEBUG_STR("q8"), &supE01_liga_cv1_q8_t0};
const State supE01_liga_cv1_q9 = {false, SUP_DEBUG_STR("q9"), &supE01_liga_cv1_q9_t0};

// Supervisor create
Supervisor supE01_liga_cv1 = {&supE01_liga_cv1_q0, &supE01_liga_cv1_q0, NULL,  &supE01_liga_cv1_t4_evt0, "supE01_liga_cv1"};
