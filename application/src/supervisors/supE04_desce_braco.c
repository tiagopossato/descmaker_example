#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "supE04_desce_braco.h"

// Supervisor specific instances
// alphabet create
Alphabet supE04_desce_braco_s4_evt0;
Alphabet supE04_desce_braco_t1_evt1;
Alphabet supE04_desce_braco_m7_evt2;
Alphabet supE04_desce_braco_s3_evt3;
Alphabet supE04_desce_braco_p7_evt4;
Alphabet supE04_desce_braco_f4_evt5;
Alphabet supE04_desce_braco_f3_evt6;

// Alphabet init
Alphabet supE04_desce_braco_s4_evt0 = {&s4, &supE04_desce_braco_t1_evt1};
Alphabet supE04_desce_braco_t1_evt1 = {&t1, &supE04_desce_braco_m7_evt2};
Alphabet supE04_desce_braco_m7_evt2 = {&m7, &supE04_desce_braco_s3_evt3};
Alphabet supE04_desce_braco_s3_evt3 = {&s3, &supE04_desce_braco_p7_evt4};
Alphabet supE04_desce_braco_p7_evt4 = {&p7, &supE04_desce_braco_f4_evt5};
Alphabet supE04_desce_braco_f4_evt5 = {&f4, &supE04_desce_braco_f3_evt6};
Alphabet supE04_desce_braco_f3_evt6 = {&f3, NULL};

// states create
State supE04_desce_braco_q0;
State supE04_desce_braco_q1;
State supE04_desce_braco_q10;
State supE04_desce_braco_q11;
State supE04_desce_braco_q12;
State supE04_desce_braco_q13;
State supE04_desce_braco_q14;
State supE04_desce_braco_q15;
State supE04_desce_braco_q16;
State supE04_desce_braco_q17;
State supE04_desce_braco_q18;
State supE04_desce_braco_q19;
State supE04_desce_braco_q20;
State supE04_desce_braco_q21;
State supE04_desce_braco_q22;
State supE04_desce_braco_q23;
State supE04_desce_braco_q24;
State supE04_desce_braco_q25;
State supE04_desce_braco_q26;
State supE04_desce_braco_q27;
State supE04_desce_braco_q28;
State supE04_desce_braco_q29;
State supE04_desce_braco_q3;
State supE04_desce_braco_q30;
State supE04_desce_braco_q31;
State supE04_desce_braco_q32;
State supE04_desce_braco_q33;
State supE04_desce_braco_q34;
State supE04_desce_braco_q35;
State supE04_desce_braco_q36;
State supE04_desce_braco_q37;
State supE04_desce_braco_q38;
State supE04_desce_braco_q39;
State supE04_desce_braco_q4;
State supE04_desce_braco_q40;
State supE04_desce_braco_q5;
State supE04_desce_braco_q6;
State supE04_desce_braco_q7;
State supE04_desce_braco_q8;
State supE04_desce_braco_q9;

// transitions create and init
Transition supE04_desce_braco_q0_t0;
Transition supE04_desce_braco_q0_t1;
Transition supE04_desce_braco_q0_t2;
Transition supE04_desce_braco_q0_t0 = {&s4, &supE04_desce_braco_q14, &supE04_desce_braco_q0_t1};
Transition supE04_desce_braco_q0_t1 = {&t1, &supE04_desce_braco_q3, &supE04_desce_braco_q0_t2};
Transition supE04_desce_braco_q0_t2 = {&m7, &supE04_desce_braco_q7, NULL};

Transition supE04_desce_braco_q1_t0;
Transition supE04_desce_braco_q1_t1;
Transition supE04_desce_braco_q1_t2;
Transition supE04_desce_braco_q1_t0 = {&t1, &supE04_desce_braco_q0, &supE04_desce_braco_q1_t1};
Transition supE04_desce_braco_q1_t1 = {&s4, &supE04_desce_braco_q11, &supE04_desce_braco_q1_t2};
Transition supE04_desce_braco_q1_t2 = {&m7, &supE04_desce_braco_q6, NULL};

Transition supE04_desce_braco_q10_t0;
Transition supE04_desce_braco_q10_t1;
Transition supE04_desce_braco_q10_t2;
Transition supE04_desce_braco_q10_t3;
Transition supE04_desce_braco_q10_t0 = {&t1, &supE04_desce_braco_q10, &supE04_desce_braco_q10_t1};
Transition supE04_desce_braco_q10_t1 = {&s4, &supE04_desce_braco_q20, &supE04_desce_braco_q10_t2};
Transition supE04_desce_braco_q10_t2 = {&s3, &supE04_desce_braco_q26, &supE04_desce_braco_q10_t3};
Transition supE04_desce_braco_q10_t3 = {&p7, &supE04_desce_braco_q5, NULL};

Transition supE04_desce_braco_q11_t0;
Transition supE04_desce_braco_q11_t1;
Transition supE04_desce_braco_q11_t2;
Transition supE04_desce_braco_q11_t0 = {&f4, &supE04_desce_braco_q1, &supE04_desce_braco_q11_t1};
Transition supE04_desce_braco_q11_t1 = {&t1, &supE04_desce_braco_q12, &supE04_desce_braco_q11_t2};
Transition supE04_desce_braco_q11_t2 = {&m7, &supE04_desce_braco_q16, NULL};

Transition supE04_desce_braco_q12_t0;
Transition supE04_desce_braco_q12_t1;
Transition supE04_desce_braco_q12_t2;
Transition supE04_desce_braco_q12_t0 = {&f4, &supE04_desce_braco_q0, &supE04_desce_braco_q12_t1};
Transition supE04_desce_braco_q12_t1 = {&t1, &supE04_desce_braco_q13, &supE04_desce_braco_q12_t2};
Transition supE04_desce_braco_q12_t2 = {&m7, &supE04_desce_braco_q17, NULL};

Transition supE04_desce_braco_q13_t0;
Transition supE04_desce_braco_q13_t1;
Transition supE04_desce_braco_q13_t2;
Transition supE04_desce_braco_q13_t3;
Transition supE04_desce_braco_q13_t0 = {&t1, &supE04_desce_braco_q13, &supE04_desce_braco_q13_t1};
Transition supE04_desce_braco_q13_t1 = {&m7, &supE04_desce_braco_q18, &supE04_desce_braco_q13_t2};
Transition supE04_desce_braco_q13_t2 = {&f4, &supE04_desce_braco_q3, &supE04_desce_braco_q13_t3};
Transition supE04_desce_braco_q13_t3 = {&s3, &supE04_desce_braco_q32, NULL};

Transition supE04_desce_braco_q14_t0;
Transition supE04_desce_braco_q14_t1;
Transition supE04_desce_braco_q14_t2;
Transition supE04_desce_braco_q14_t0 = {&t1, &supE04_desce_braco_q14, &supE04_desce_braco_q14_t1};
Transition supE04_desce_braco_q14_t1 = {&m7, &supE04_desce_braco_q19, &supE04_desce_braco_q14_t2};
Transition supE04_desce_braco_q14_t2 = {&f4, &supE04_desce_braco_q4, NULL};

Transition supE04_desce_braco_q15_t0;
Transition supE04_desce_braco_q15_t1;
Transition supE04_desce_braco_q15_t2;
Transition supE04_desce_braco_q15_t3;
Transition supE04_desce_braco_q15_t0 = {&t1, &supE04_desce_braco_q15, &supE04_desce_braco_q15_t1};
Transition supE04_desce_braco_q15_t1 = {&m7, &supE04_desce_braco_q20, &supE04_desce_braco_q15_t2};
Transition supE04_desce_braco_q15_t2 = {&s3, &supE04_desce_braco_q31, &supE04_desce_braco_q15_t3};
Transition supE04_desce_braco_q15_t3 = {&f4, &supE04_desce_braco_q5, NULL};

Transition supE04_desce_braco_q16_t0;
Transition supE04_desce_braco_q16_t1;
Transition supE04_desce_braco_q16_t2;
Transition supE04_desce_braco_q16_t0 = {&p7, &supE04_desce_braco_q12, &supE04_desce_braco_q16_t1};
Transition supE04_desce_braco_q16_t1 = {&t1, &supE04_desce_braco_q17, &supE04_desce_braco_q16_t2};
Transition supE04_desce_braco_q16_t2 = {&f4, &supE04_desce_braco_q6, NULL};

Transition supE04_desce_braco_q17_t0;
Transition supE04_desce_braco_q17_t1;
Transition supE04_desce_braco_q17_t2;
Transition supE04_desce_braco_q17_t0 = {&p7, &supE04_desce_braco_q13, &supE04_desce_braco_q17_t1};
Transition supE04_desce_braco_q17_t1 = {&t1, &supE04_desce_braco_q18, &supE04_desce_braco_q17_t2};
Transition supE04_desce_braco_q17_t2 = {&f4, &supE04_desce_braco_q7, NULL};

Transition supE04_desce_braco_q18_t0;
Transition supE04_desce_braco_q18_t1;
Transition supE04_desce_braco_q18_t2;
Transition supE04_desce_braco_q18_t3;
Transition supE04_desce_braco_q18_t0 = {&p7, &supE04_desce_braco_q13, &supE04_desce_braco_q18_t1};
Transition supE04_desce_braco_q18_t1 = {&t1, &supE04_desce_braco_q18, &supE04_desce_braco_q18_t2};
Transition supE04_desce_braco_q18_t2 = {&s3, &supE04_desce_braco_q37, &supE04_desce_braco_q18_t3};
Transition supE04_desce_braco_q18_t3 = {&f4, &supE04_desce_braco_q8, NULL};

Transition supE04_desce_braco_q19_t0;
Transition supE04_desce_braco_q19_t1;
Transition supE04_desce_braco_q19_t2;
Transition supE04_desce_braco_q19_t0 = {&p7, &supE04_desce_braco_q15, &supE04_desce_braco_q19_t1};
Transition supE04_desce_braco_q19_t1 = {&t1, &supE04_desce_braco_q19, &supE04_desce_braco_q19_t2};
Transition supE04_desce_braco_q19_t2 = {&f4, &supE04_desce_braco_q9, NULL};

Transition supE04_desce_braco_q20_t0;
Transition supE04_desce_braco_q20_t1;
Transition supE04_desce_braco_q20_t2;
Transition supE04_desce_braco_q20_t3;
Transition supE04_desce_braco_q20_t0 = {&f4, &supE04_desce_braco_q10, &supE04_desce_braco_q20_t1};
Transition supE04_desce_braco_q20_t1 = {&p7, &supE04_desce_braco_q15, &supE04_desce_braco_q20_t2};
Transition supE04_desce_braco_q20_t2 = {&t1, &supE04_desce_braco_q20, &supE04_desce_braco_q20_t3};
Transition supE04_desce_braco_q20_t3 = {&s3, &supE04_desce_braco_q36, NULL};

Transition supE04_desce_braco_q21_t0;
Transition supE04_desce_braco_q21_t1;
Transition supE04_desce_braco_q21_t2;
Transition supE04_desce_braco_q21_t3;
Transition supE04_desce_braco_q21_t0 = {&f3, &supE04_desce_braco_q1, &supE04_desce_braco_q21_t1};
Transition supE04_desce_braco_q21_t1 = {&t1, &supE04_desce_braco_q22, &supE04_desce_braco_q21_t2};
Transition supE04_desce_braco_q21_t2 = {&m7, &supE04_desce_braco_q26, &supE04_desce_braco_q21_t3};
Transition supE04_desce_braco_q21_t3 = {&s4, &supE04_desce_braco_q31, NULL};

Transition supE04_desce_braco_q22_t0;
Transition supE04_desce_braco_q22_t1;
Transition supE04_desce_braco_q22_t2;
Transition supE04_desce_braco_q22_t3;
Transition supE04_desce_braco_q22_t0 = {&f3, &supE04_desce_braco_q0, &supE04_desce_braco_q22_t1};
Transition supE04_desce_braco_q22_t1 = {&t1, &supE04_desce_braco_q23, &supE04_desce_braco_q22_t2};
Transition supE04_desce_braco_q22_t2 = {&m7, &supE04_desce_braco_q27, &supE04_desce_braco_q22_t3};
Transition supE04_desce_braco_q22_t3 = {&s4, &supE04_desce_braco_q34, NULL};

Transition supE04_desce_braco_q23_t0;
Transition supE04_desce_braco_q23_t1;
Transition supE04_desce_braco_q23_t2;
Transition supE04_desce_braco_q23_t3;
Transition supE04_desce_braco_q23_t0 = {&t1, &supE04_desce_braco_q23, &supE04_desce_braco_q23_t1};
Transition supE04_desce_braco_q23_t1 = {&m7, &supE04_desce_braco_q28, &supE04_desce_braco_q23_t2};
Transition supE04_desce_braco_q23_t2 = {&f3, &supE04_desce_braco_q3, &supE04_desce_braco_q23_t3};
Transition supE04_desce_braco_q23_t3 = {&s4, &supE04_desce_braco_q33, NULL};

Transition supE04_desce_braco_q24_t0;
Transition supE04_desce_braco_q24_t1;
Transition supE04_desce_braco_q24_t2;
Transition supE04_desce_braco_q24_t3;
Transition supE04_desce_braco_q24_t0 = {&t1, &supE04_desce_braco_q24, &supE04_desce_braco_q24_t1};
Transition supE04_desce_braco_q24_t1 = {&m7, &supE04_desce_braco_q29, &supE04_desce_braco_q24_t2};
Transition supE04_desce_braco_q24_t2 = {&s4, &supE04_desce_braco_q34, &supE04_desce_braco_q24_t3};
Transition supE04_desce_braco_q24_t3 = {&f3, &supE04_desce_braco_q4, NULL};

Transition supE04_desce_braco_q25_t0;
Transition supE04_desce_braco_q25_t1;
Transition supE04_desce_braco_q25_t2;
Transition supE04_desce_braco_q25_t3;
Transition supE04_desce_braco_q25_t0 = {&t1, &supE04_desce_braco_q25, &supE04_desce_braco_q25_t1};
Transition supE04_desce_braco_q25_t1 = {&m7, &supE04_desce_braco_q30, &supE04_desce_braco_q25_t2};
Transition supE04_desce_braco_q25_t2 = {&s4, &supE04_desce_braco_q35, &supE04_desce_braco_q25_t3};
Transition supE04_desce_braco_q25_t3 = {&f3, &supE04_desce_braco_q5, NULL};

Transition supE04_desce_braco_q26_t0;
Transition supE04_desce_braco_q26_t1;
Transition supE04_desce_braco_q26_t2;
Transition supE04_desce_braco_q26_t3;
Transition supE04_desce_braco_q26_t0 = {&p7, &supE04_desce_braco_q22, &supE04_desce_braco_q26_t1};
Transition supE04_desce_braco_q26_t1 = {&t1, &supE04_desce_braco_q27, &supE04_desce_braco_q26_t2};
Transition supE04_desce_braco_q26_t2 = {&s4, &supE04_desce_braco_q36, &supE04_desce_braco_q26_t3};
Transition supE04_desce_braco_q26_t3 = {&f3, &supE04_desce_braco_q6, NULL};

Transition supE04_desce_braco_q27_t0;
Transition supE04_desce_braco_q27_t1;
Transition supE04_desce_braco_q27_t2;
Transition supE04_desce_braco_q27_t3;
Transition supE04_desce_braco_q27_t0 = {&p7, &supE04_desce_braco_q23, &supE04_desce_braco_q27_t1};
Transition supE04_desce_braco_q27_t1 = {&t1, &supE04_desce_braco_q28, &supE04_desce_braco_q27_t2};
Transition supE04_desce_braco_q27_t2 = {&s4, &supE04_desce_braco_q39, &supE04_desce_braco_q27_t3};
Transition supE04_desce_braco_q27_t3 = {&f3, &supE04_desce_braco_q7, NULL};

Transition supE04_desce_braco_q28_t0;
Transition supE04_desce_braco_q28_t1;
Transition supE04_desce_braco_q28_t2;
Transition supE04_desce_braco_q28_t3;
Transition supE04_desce_braco_q28_t0 = {&p7, &supE04_desce_braco_q23, &supE04_desce_braco_q28_t1};
Transition supE04_desce_braco_q28_t1 = {&t1, &supE04_desce_braco_q28, &supE04_desce_braco_q28_t2};
Transition supE04_desce_braco_q28_t2 = {&s4, &supE04_desce_braco_q38, &supE04_desce_braco_q28_t3};
Transition supE04_desce_braco_q28_t3 = {&f3, &supE04_desce_braco_q8, NULL};

Transition supE04_desce_braco_q29_t0;
Transition supE04_desce_braco_q29_t1;
Transition supE04_desce_braco_q29_t2;
Transition supE04_desce_braco_q29_t3;
Transition supE04_desce_braco_q29_t0 = {&p7, &supE04_desce_braco_q25, &supE04_desce_braco_q29_t1};
Transition supE04_desce_braco_q29_t1 = {&t1, &supE04_desce_braco_q29, &supE04_desce_braco_q29_t2};
Transition supE04_desce_braco_q29_t2 = {&s4, &supE04_desce_braco_q39, &supE04_desce_braco_q29_t3};
Transition supE04_desce_braco_q29_t3 = {&f3, &supE04_desce_braco_q9, NULL};

Transition supE04_desce_braco_q3_t0;
Transition supE04_desce_braco_q3_t1;
Transition supE04_desce_braco_q3_t2;
Transition supE04_desce_braco_q3_t3;
Transition supE04_desce_braco_q3_t0 = {&s4, &supE04_desce_braco_q13, &supE04_desce_braco_q3_t1};
Transition supE04_desce_braco_q3_t1 = {&s3, &supE04_desce_braco_q22, &supE04_desce_braco_q3_t2};
Transition supE04_desce_braco_q3_t2 = {&t1, &supE04_desce_braco_q3, &supE04_desce_braco_q3_t3};
Transition supE04_desce_braco_q3_t3 = {&m7, &supE04_desce_braco_q8, NULL};

Transition supE04_desce_braco_q30_t0;
Transition supE04_desce_braco_q30_t1;
Transition supE04_desce_braco_q30_t2;
Transition supE04_desce_braco_q30_t3;
Transition supE04_desce_braco_q30_t0 = {&f3, &supE04_desce_braco_q10, &supE04_desce_braco_q30_t1};
Transition supE04_desce_braco_q30_t1 = {&p7, &supE04_desce_braco_q25, &supE04_desce_braco_q30_t2};
Transition supE04_desce_braco_q30_t2 = {&t1, &supE04_desce_braco_q30, &supE04_desce_braco_q30_t3};
Transition supE04_desce_braco_q30_t3 = {&s4, &supE04_desce_braco_q40, NULL};

Transition supE04_desce_braco_q31_t0;
Transition supE04_desce_braco_q31_t1;
Transition supE04_desce_braco_q31_t2;
Transition supE04_desce_braco_q31_t3;
Transition supE04_desce_braco_q31_t0 = {&f3, &supE04_desce_braco_q11, &supE04_desce_braco_q31_t1};
Transition supE04_desce_braco_q31_t1 = {&f4, &supE04_desce_braco_q21, &supE04_desce_braco_q31_t2};
Transition supE04_desce_braco_q31_t2 = {&t1, &supE04_desce_braco_q32, &supE04_desce_braco_q31_t3};
Transition supE04_desce_braco_q31_t3 = {&m7, &supE04_desce_braco_q36, NULL};

Transition supE04_desce_braco_q32_t0;
Transition supE04_desce_braco_q32_t1;
Transition supE04_desce_braco_q32_t2;
Transition supE04_desce_braco_q32_t3;
Transition supE04_desce_braco_q32_t0 = {&f3, &supE04_desce_braco_q12, &supE04_desce_braco_q32_t1};
Transition supE04_desce_braco_q32_t1 = {&f4, &supE04_desce_braco_q22, &supE04_desce_braco_q32_t2};
Transition supE04_desce_braco_q32_t2 = {&t1, &supE04_desce_braco_q33, &supE04_desce_braco_q32_t3};
Transition supE04_desce_braco_q32_t3 = {&m7, &supE04_desce_braco_q37, NULL};

Transition supE04_desce_braco_q33_t0;
Transition supE04_desce_braco_q33_t1;
Transition supE04_desce_braco_q33_t2;
Transition supE04_desce_braco_q33_t3;
Transition supE04_desce_braco_q33_t0 = {&f3, &supE04_desce_braco_q13, &supE04_desce_braco_q33_t1};
Transition supE04_desce_braco_q33_t1 = {&f4, &supE04_desce_braco_q23, &supE04_desce_braco_q33_t2};
Transition supE04_desce_braco_q33_t2 = {&t1, &supE04_desce_braco_q33, &supE04_desce_braco_q33_t3};
Transition supE04_desce_braco_q33_t3 = {&m7, &supE04_desce_braco_q38, NULL};

Transition supE04_desce_braco_q34_t0;
Transition supE04_desce_braco_q34_t1;
Transition supE04_desce_braco_q34_t2;
Transition supE04_desce_braco_q34_t3;
Transition supE04_desce_braco_q34_t0 = {&f3, &supE04_desce_braco_q14, &supE04_desce_braco_q34_t1};
Transition supE04_desce_braco_q34_t1 = {&f4, &supE04_desce_braco_q24, &supE04_desce_braco_q34_t2};
Transition supE04_desce_braco_q34_t2 = {&t1, &supE04_desce_braco_q34, &supE04_desce_braco_q34_t3};
Transition supE04_desce_braco_q34_t3 = {&m7, &supE04_desce_braco_q39, NULL};

Transition supE04_desce_braco_q35_t0;
Transition supE04_desce_braco_q35_t1;
Transition supE04_desce_braco_q35_t2;
Transition supE04_desce_braco_q35_t3;
Transition supE04_desce_braco_q35_t0 = {&f3, &supE04_desce_braco_q15, &supE04_desce_braco_q35_t1};
Transition supE04_desce_braco_q35_t1 = {&f4, &supE04_desce_braco_q25, &supE04_desce_braco_q35_t2};
Transition supE04_desce_braco_q35_t2 = {&t1, &supE04_desce_braco_q35, &supE04_desce_braco_q35_t3};
Transition supE04_desce_braco_q35_t3 = {&m7, &supE04_desce_braco_q40, NULL};

Transition supE04_desce_braco_q36_t0;
Transition supE04_desce_braco_q36_t1;
Transition supE04_desce_braco_q36_t2;
Transition supE04_desce_braco_q36_t3;
Transition supE04_desce_braco_q36_t0 = {&f3, &supE04_desce_braco_q16, &supE04_desce_braco_q36_t1};
Transition supE04_desce_braco_q36_t1 = {&f4, &supE04_desce_braco_q26, &supE04_desce_braco_q36_t2};
Transition supE04_desce_braco_q36_t2 = {&p7, &supE04_desce_braco_q32, &supE04_desce_braco_q36_t3};
Transition supE04_desce_braco_q36_t3 = {&t1, &supE04_desce_braco_q37, NULL};

Transition supE04_desce_braco_q37_t0;
Transition supE04_desce_braco_q37_t1;
Transition supE04_desce_braco_q37_t2;
Transition supE04_desce_braco_q37_t3;
Transition supE04_desce_braco_q37_t0 = {&f3, &supE04_desce_braco_q17, &supE04_desce_braco_q37_t1};
Transition supE04_desce_braco_q37_t1 = {&f4, &supE04_desce_braco_q27, &supE04_desce_braco_q37_t2};
Transition supE04_desce_braco_q37_t2 = {&p7, &supE04_desce_braco_q33, &supE04_desce_braco_q37_t3};
Transition supE04_desce_braco_q37_t3 = {&t1, &supE04_desce_braco_q38, NULL};

Transition supE04_desce_braco_q38_t0;
Transition supE04_desce_braco_q38_t1;
Transition supE04_desce_braco_q38_t2;
Transition supE04_desce_braco_q38_t3;
Transition supE04_desce_braco_q38_t0 = {&f3, &supE04_desce_braco_q18, &supE04_desce_braco_q38_t1};
Transition supE04_desce_braco_q38_t1 = {&f4, &supE04_desce_braco_q28, &supE04_desce_braco_q38_t2};
Transition supE04_desce_braco_q38_t2 = {&p7, &supE04_desce_braco_q33, &supE04_desce_braco_q38_t3};
Transition supE04_desce_braco_q38_t3 = {&t1, &supE04_desce_braco_q38, NULL};

Transition supE04_desce_braco_q39_t0;
Transition supE04_desce_braco_q39_t1;
Transition supE04_desce_braco_q39_t2;
Transition supE04_desce_braco_q39_t3;
Transition supE04_desce_braco_q39_t0 = {&f3, &supE04_desce_braco_q19, &supE04_desce_braco_q39_t1};
Transition supE04_desce_braco_q39_t1 = {&f4, &supE04_desce_braco_q29, &supE04_desce_braco_q39_t2};
Transition supE04_desce_braco_q39_t2 = {&p7, &supE04_desce_braco_q35, &supE04_desce_braco_q39_t3};
Transition supE04_desce_braco_q39_t3 = {&t1, &supE04_desce_braco_q39, NULL};

Transition supE04_desce_braco_q4_t0;
Transition supE04_desce_braco_q4_t1;
Transition supE04_desce_braco_q4_t2;
Transition supE04_desce_braco_q4_t0 = {&s4, &supE04_desce_braco_q14, &supE04_desce_braco_q4_t1};
Transition supE04_desce_braco_q4_t1 = {&t1, &supE04_desce_braco_q4, &supE04_desce_braco_q4_t2};
Transition supE04_desce_braco_q4_t2 = {&m7, &supE04_desce_braco_q9, NULL};

Transition supE04_desce_braco_q40_t0;
Transition supE04_desce_braco_q40_t1;
Transition supE04_desce_braco_q40_t2;
Transition supE04_desce_braco_q40_t3;
Transition supE04_desce_braco_q40_t0 = {&f3, &supE04_desce_braco_q20, &supE04_desce_braco_q40_t1};
Transition supE04_desce_braco_q40_t1 = {&f4, &supE04_desce_braco_q30, &supE04_desce_braco_q40_t2};
Transition supE04_desce_braco_q40_t2 = {&p7, &supE04_desce_braco_q35, &supE04_desce_braco_q40_t3};
Transition supE04_desce_braco_q40_t3 = {&t1, &supE04_desce_braco_q40, NULL};

Transition supE04_desce_braco_q5_t0;
Transition supE04_desce_braco_q5_t1;
Transition supE04_desce_braco_q5_t2;
Transition supE04_desce_braco_q5_t3;
Transition supE04_desce_braco_q5_t0 = {&m7, &supE04_desce_braco_q10, &supE04_desce_braco_q5_t1};
Transition supE04_desce_braco_q5_t1 = {&s4, &supE04_desce_braco_q15, &supE04_desce_braco_q5_t2};
Transition supE04_desce_braco_q5_t2 = {&s3, &supE04_desce_braco_q21, &supE04_desce_braco_q5_t3};
Transition supE04_desce_braco_q5_t3 = {&t1, &supE04_desce_braco_q5, NULL};

Transition supE04_desce_braco_q6_t0;
Transition supE04_desce_braco_q6_t1;
Transition supE04_desce_braco_q6_t2;
Transition supE04_desce_braco_q6_t0 = {&p7, &supE04_desce_braco_q0, &supE04_desce_braco_q6_t1};
Transition supE04_desce_braco_q6_t1 = {&s4, &supE04_desce_braco_q16, &supE04_desce_braco_q6_t2};
Transition supE04_desce_braco_q6_t2 = {&t1, &supE04_desce_braco_q7, NULL};

Transition supE04_desce_braco_q7_t0;
Transition supE04_desce_braco_q7_t1;
Transition supE04_desce_braco_q7_t2;
Transition supE04_desce_braco_q7_t0 = {&s4, &supE04_desce_braco_q19, &supE04_desce_braco_q7_t1};
Transition supE04_desce_braco_q7_t1 = {&p7, &supE04_desce_braco_q3, &supE04_desce_braco_q7_t2};
Transition supE04_desce_braco_q7_t2 = {&t1, &supE04_desce_braco_q8, NULL};

Transition supE04_desce_braco_q8_t0;
Transition supE04_desce_braco_q8_t1;
Transition supE04_desce_braco_q8_t2;
Transition supE04_desce_braco_q8_t3;
Transition supE04_desce_braco_q8_t0 = {&s4, &supE04_desce_braco_q18, &supE04_desce_braco_q8_t1};
Transition supE04_desce_braco_q8_t1 = {&s3, &supE04_desce_braco_q27, &supE04_desce_braco_q8_t2};
Transition supE04_desce_braco_q8_t2 = {&p7, &supE04_desce_braco_q3, &supE04_desce_braco_q8_t3};
Transition supE04_desce_braco_q8_t3 = {&t1, &supE04_desce_braco_q8, NULL};

Transition supE04_desce_braco_q9_t0;
Transition supE04_desce_braco_q9_t1;
Transition supE04_desce_braco_q9_t2;
Transition supE04_desce_braco_q9_t0 = {&s4, &supE04_desce_braco_q19, &supE04_desce_braco_q9_t1};
Transition supE04_desce_braco_q9_t1 = {&p7, &supE04_desce_braco_q5, &supE04_desce_braco_q9_t2};
Transition supE04_desce_braco_q9_t2 = {&t1, &supE04_desce_braco_q9, NULL};


// states init
State supE04_desce_braco_q0 = {true, SUP_DEBUG_STR("q0"), &supE04_desce_braco_q0_t0};
State supE04_desce_braco_q1 = {false, SUP_DEBUG_STR("q1"), &supE04_desce_braco_q1_t0};
State supE04_desce_braco_q10 = {false, SUP_DEBUG_STR("q10"), &supE04_desce_braco_q10_t0};
State supE04_desce_braco_q11 = {false, SUP_DEBUG_STR("q11"), &supE04_desce_braco_q11_t0};
State supE04_desce_braco_q12 = {false, SUP_DEBUG_STR("q12"), &supE04_desce_braco_q12_t0};
State supE04_desce_braco_q13 = {false, SUP_DEBUG_STR("q13"), &supE04_desce_braco_q13_t0};
State supE04_desce_braco_q14 = {false, SUP_DEBUG_STR("q14"), &supE04_desce_braco_q14_t0};
State supE04_desce_braco_q15 = {false, SUP_DEBUG_STR("q15"), &supE04_desce_braco_q15_t0};
State supE04_desce_braco_q16 = {false, SUP_DEBUG_STR("q16"), &supE04_desce_braco_q16_t0};
State supE04_desce_braco_q17 = {false, SUP_DEBUG_STR("q17"), &supE04_desce_braco_q17_t0};
State supE04_desce_braco_q18 = {false, SUP_DEBUG_STR("q18"), &supE04_desce_braco_q18_t0};
State supE04_desce_braco_q19 = {false, SUP_DEBUG_STR("q19"), &supE04_desce_braco_q19_t0};
State supE04_desce_braco_q20 = {false, SUP_DEBUG_STR("q20"), &supE04_desce_braco_q20_t0};
State supE04_desce_braco_q21 = {false, SUP_DEBUG_STR("q21"), &supE04_desce_braco_q21_t0};
State supE04_desce_braco_q22 = {false, SUP_DEBUG_STR("q22"), &supE04_desce_braco_q22_t0};
State supE04_desce_braco_q23 = {false, SUP_DEBUG_STR("q23"), &supE04_desce_braco_q23_t0};
State supE04_desce_braco_q24 = {false, SUP_DEBUG_STR("q24"), &supE04_desce_braco_q24_t0};
State supE04_desce_braco_q25 = {false, SUP_DEBUG_STR("q25"), &supE04_desce_braco_q25_t0};
State supE04_desce_braco_q26 = {false, SUP_DEBUG_STR("q26"), &supE04_desce_braco_q26_t0};
State supE04_desce_braco_q27 = {false, SUP_DEBUG_STR("q27"), &supE04_desce_braco_q27_t0};
State supE04_desce_braco_q28 = {false, SUP_DEBUG_STR("q28"), &supE04_desce_braco_q28_t0};
State supE04_desce_braco_q29 = {false, SUP_DEBUG_STR("q29"), &supE04_desce_braco_q29_t0};
State supE04_desce_braco_q3 = {false, SUP_DEBUG_STR("q3"), &supE04_desce_braco_q3_t0};
State supE04_desce_braco_q30 = {false, SUP_DEBUG_STR("q30"), &supE04_desce_braco_q30_t0};
State supE04_desce_braco_q31 = {false, SUP_DEBUG_STR("q31"), &supE04_desce_braco_q31_t0};
State supE04_desce_braco_q32 = {false, SUP_DEBUG_STR("q32"), &supE04_desce_braco_q32_t0};
State supE04_desce_braco_q33 = {false, SUP_DEBUG_STR("q33"), &supE04_desce_braco_q33_t0};
State supE04_desce_braco_q34 = {false, SUP_DEBUG_STR("q34"), &supE04_desce_braco_q34_t0};
State supE04_desce_braco_q35 = {false, SUP_DEBUG_STR("q35"), &supE04_desce_braco_q35_t0};
State supE04_desce_braco_q36 = {false, SUP_DEBUG_STR("q36"), &supE04_desce_braco_q36_t0};
State supE04_desce_braco_q37 = {false, SUP_DEBUG_STR("q37"), &supE04_desce_braco_q37_t0};
State supE04_desce_braco_q38 = {false, SUP_DEBUG_STR("q38"), &supE04_desce_braco_q38_t0};
State supE04_desce_braco_q39 = {false, SUP_DEBUG_STR("q39"), &supE04_desce_braco_q39_t0};
State supE04_desce_braco_q4 = {false, SUP_DEBUG_STR("q4"), &supE04_desce_braco_q4_t0};
State supE04_desce_braco_q40 = {false, SUP_DEBUG_STR("q40"), &supE04_desce_braco_q40_t0};
State supE04_desce_braco_q5 = {false, SUP_DEBUG_STR("q5"), &supE04_desce_braco_q5_t0};
State supE04_desce_braco_q6 = {false, SUP_DEBUG_STR("q6"), &supE04_desce_braco_q6_t0};
State supE04_desce_braco_q7 = {false, SUP_DEBUG_STR("q7"), &supE04_desce_braco_q7_t0};
State supE04_desce_braco_q8 = {false, SUP_DEBUG_STR("q8"), &supE04_desce_braco_q8_t0};
State supE04_desce_braco_q9 = {false, SUP_DEBUG_STR("q9"), &supE04_desce_braco_q9_t0};

// Supervisor create
Supervisor supE04_desce_braco = {&supE04_desce_braco_q0, &supE04_desce_braco_q0, NULL,  &supE04_desce_braco_s4_evt0, "supE04_desce_braco"};
