#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "supE11_desliga_cv2.h"

// Supervisor specific instances
// alphabet create
const Alphabet supE11_desliga_cv2_s3_evt0;
const Alphabet supE11_desliga_cv2_s2_evt1;
const Alphabet supE11_desliga_cv2_s4_evt2;
const Alphabet supE11_desliga_cv2_f4_evt3;
const Alphabet supE11_desliga_cv2_f2_evt4;
const Alphabet supE11_desliga_cv2_f3_evt5;

// Alphabet init
const Alphabet supE11_desliga_cv2_s3_evt0 = {&s3, &supE11_desliga_cv2_s2_evt1};
const Alphabet supE11_desliga_cv2_s2_evt1 = {&s2, &supE11_desliga_cv2_s4_evt2};
const Alphabet supE11_desliga_cv2_s4_evt2 = {&s4, &supE11_desliga_cv2_f4_evt3};
const Alphabet supE11_desliga_cv2_f4_evt3 = {&f4, &supE11_desliga_cv2_f2_evt4};
const Alphabet supE11_desliga_cv2_f2_evt4 = {&f2, &supE11_desliga_cv2_f3_evt5};
const Alphabet supE11_desliga_cv2_f3_evt5 = {&f3, NULL};

// states create
const State supE11_desliga_cv2_q0;
const State supE11_desliga_cv2_q10;
const State supE11_desliga_cv2_q11;
const State supE11_desliga_cv2_q12;
const State supE11_desliga_cv2_q13;
const State supE11_desliga_cv2_q14;
const State supE11_desliga_cv2_q15;
const State supE11_desliga_cv2_q16;
const State supE11_desliga_cv2_q17;
const State supE11_desliga_cv2_q18;
const State supE11_desliga_cv2_q19;
const State supE11_desliga_cv2_q2;
const State supE11_desliga_cv2_q20;
const State supE11_desliga_cv2_q21;
const State supE11_desliga_cv2_q22;
const State supE11_desliga_cv2_q23;
const State supE11_desliga_cv2_q24;
const State supE11_desliga_cv2_q3;
const State supE11_desliga_cv2_q4;
const State supE11_desliga_cv2_q5;
const State supE11_desliga_cv2_q6;
const State supE11_desliga_cv2_q7;
const State supE11_desliga_cv2_q8;
const State supE11_desliga_cv2_q9;

// transitions create and init
const Transition supE11_desliga_cv2_q0_t0;
const Transition supE11_desliga_cv2_q0_t1;
const Transition supE11_desliga_cv2_q0_t2;
const Transition supE11_desliga_cv2_q0_t0 = {&s3, &supE11_desliga_cv2_q13, &supE11_desliga_cv2_q0_t1};
const Transition supE11_desliga_cv2_q0_t1 = {&s2, &supE11_desliga_cv2_q4, &supE11_desliga_cv2_q0_t2};
const Transition supE11_desliga_cv2_q0_t2 = {&s4, &supE11_desliga_cv2_q8, NULL};

const Transition supE11_desliga_cv2_q10_t0;
const Transition supE11_desliga_cv2_q10_t1;
const Transition supE11_desliga_cv2_q10_t0 = {&s3, &supE11_desliga_cv2_q22, &supE11_desliga_cv2_q10_t1};
const Transition supE11_desliga_cv2_q10_t1 = {&f4, &supE11_desliga_cv2_q4, NULL};

const Transition supE11_desliga_cv2_q11_t0;
const Transition supE11_desliga_cv2_q11_t1;
const Transition supE11_desliga_cv2_q11_t0 = {&s3, &supE11_desliga_cv2_q24, &supE11_desliga_cv2_q11_t1};
const Transition supE11_desliga_cv2_q11_t1 = {&f4, &supE11_desliga_cv2_q5, NULL};

const Transition supE11_desliga_cv2_q12_t0;
const Transition supE11_desliga_cv2_q12_t1;
const Transition supE11_desliga_cv2_q12_t2;
const Transition supE11_desliga_cv2_q12_t0 = {&s3, &supE11_desliga_cv2_q24, &supE11_desliga_cv2_q12_t1};
const Transition supE11_desliga_cv2_q12_t1 = {&f4, &supE11_desliga_cv2_q6, &supE11_desliga_cv2_q12_t2};
const Transition supE11_desliga_cv2_q12_t2 = {&f2, &supE11_desliga_cv2_q7, NULL};

const Transition supE11_desliga_cv2_q13_t0;
const Transition supE11_desliga_cv2_q13_t1;
const Transition supE11_desliga_cv2_q13_t2;
const Transition supE11_desliga_cv2_q13_t0 = {&f3, &supE11_desliga_cv2_q0, &supE11_desliga_cv2_q13_t1};
const Transition supE11_desliga_cv2_q13_t1 = {&s2, &supE11_desliga_cv2_q16, &supE11_desliga_cv2_q13_t2};
const Transition supE11_desliga_cv2_q13_t2 = {&s4, &supE11_desliga_cv2_q20, NULL};

const Transition supE11_desliga_cv2_q14_t0;
const Transition supE11_desliga_cv2_q14_t1;
const Transition supE11_desliga_cv2_q14_t2;
const Transition supE11_desliga_cv2_q14_t0 = {&s2, &supE11_desliga_cv2_q17, &supE11_desliga_cv2_q14_t1};
const Transition supE11_desliga_cv2_q14_t1 = {&f3, &supE11_desliga_cv2_q2, &supE11_desliga_cv2_q14_t2};
const Transition supE11_desliga_cv2_q14_t2 = {&s4, &supE11_desliga_cv2_q20, NULL};

const Transition supE11_desliga_cv2_q15_t0;
const Transition supE11_desliga_cv2_q15_t1;
const Transition supE11_desliga_cv2_q15_t2;
const Transition supE11_desliga_cv2_q15_t0 = {&s2, &supE11_desliga_cv2_q16, &supE11_desliga_cv2_q15_t1};
const Transition supE11_desliga_cv2_q15_t1 = {&s4, &supE11_desliga_cv2_q21, &supE11_desliga_cv2_q15_t2};
const Transition supE11_desliga_cv2_q15_t2 = {&f3, &supE11_desliga_cv2_q3, NULL};

const Transition supE11_desliga_cv2_q16_t0;
const Transition supE11_desliga_cv2_q16_t1;
const Transition supE11_desliga_cv2_q16_t0 = {&s4, &supE11_desliga_cv2_q23, &supE11_desliga_cv2_q16_t1};
const Transition supE11_desliga_cv2_q16_t1 = {&f3, &supE11_desliga_cv2_q4, NULL};

const Transition supE11_desliga_cv2_q17_t0;
const Transition supE11_desliga_cv2_q17_t1;
const Transition supE11_desliga_cv2_q17_t0 = {&s4, &supE11_desliga_cv2_q23, &supE11_desliga_cv2_q17_t1};
const Transition supE11_desliga_cv2_q17_t1 = {&f3, &supE11_desliga_cv2_q5, NULL};

const Transition supE11_desliga_cv2_q18_t0;
const Transition supE11_desliga_cv2_q18_t1;
const Transition supE11_desliga_cv2_q18_t2;
const Transition supE11_desliga_cv2_q18_t0 = {&f2, &supE11_desliga_cv2_q13, &supE11_desliga_cv2_q18_t1};
const Transition supE11_desliga_cv2_q18_t1 = {&s4, &supE11_desliga_cv2_q24, &supE11_desliga_cv2_q18_t2};
const Transition supE11_desliga_cv2_q18_t2 = {&f3, &supE11_desliga_cv2_q6, NULL};

const Transition supE11_desliga_cv2_q19_t0;
const Transition supE11_desliga_cv2_q19_t1;
const Transition supE11_desliga_cv2_q19_t2;
const Transition supE11_desliga_cv2_q19_t0 = {&f4, &supE11_desliga_cv2_q13, &supE11_desliga_cv2_q19_t1};
const Transition supE11_desliga_cv2_q19_t1 = {&s2, &supE11_desliga_cv2_q22, &supE11_desliga_cv2_q19_t2};
const Transition supE11_desliga_cv2_q19_t2 = {&f3, &supE11_desliga_cv2_q7, NULL};

const Transition supE11_desliga_cv2_q2_t0;
const Transition supE11_desliga_cv2_q2_t1;
const Transition supE11_desliga_cv2_q2_t2;
const Transition supE11_desliga_cv2_q2_t0 = {&s3, &supE11_desliga_cv2_q15, &supE11_desliga_cv2_q2_t1};
const Transition supE11_desliga_cv2_q2_t1 = {&s2, &supE11_desliga_cv2_q5, &supE11_desliga_cv2_q2_t2};
const Transition supE11_desliga_cv2_q2_t2 = {&s4, &supE11_desliga_cv2_q8, NULL};

const Transition supE11_desliga_cv2_q20_t0;
const Transition supE11_desliga_cv2_q20_t1;
const Transition supE11_desliga_cv2_q20_t2;
const Transition supE11_desliga_cv2_q20_t0 = {&f4, &supE11_desliga_cv2_q14, &supE11_desliga_cv2_q20_t1};
const Transition supE11_desliga_cv2_q20_t1 = {&s2, &supE11_desliga_cv2_q23, &supE11_desliga_cv2_q20_t2};
const Transition supE11_desliga_cv2_q20_t2 = {&f3, &supE11_desliga_cv2_q8, NULL};

const Transition supE11_desliga_cv2_q21_t0;
const Transition supE11_desliga_cv2_q21_t1;
const Transition supE11_desliga_cv2_q21_t2;
const Transition supE11_desliga_cv2_q21_t0 = {&f4, &supE11_desliga_cv2_q15, &supE11_desliga_cv2_q21_t1};
const Transition supE11_desliga_cv2_q21_t1 = {&s2, &supE11_desliga_cv2_q22, &supE11_desliga_cv2_q21_t2};
const Transition supE11_desliga_cv2_q21_t2 = {&f3, &supE11_desliga_cv2_q9, NULL};

const Transition supE11_desliga_cv2_q22_t0;
const Transition supE11_desliga_cv2_q22_t1;
const Transition supE11_desliga_cv2_q22_t0 = {&f3, &supE11_desliga_cv2_q10, &supE11_desliga_cv2_q22_t1};
const Transition supE11_desliga_cv2_q22_t1 = {&f4, &supE11_desliga_cv2_q16, NULL};

const Transition supE11_desliga_cv2_q23_t0;
const Transition supE11_desliga_cv2_q23_t1;
const Transition supE11_desliga_cv2_q23_t0 = {&f3, &supE11_desliga_cv2_q11, &supE11_desliga_cv2_q23_t1};
const Transition supE11_desliga_cv2_q23_t1 = {&f4, &supE11_desliga_cv2_q17, NULL};

const Transition supE11_desliga_cv2_q24_t0;
const Transition supE11_desliga_cv2_q24_t1;
const Transition supE11_desliga_cv2_q24_t2;
const Transition supE11_desliga_cv2_q24_t0 = {&f3, &supE11_desliga_cv2_q12, &supE11_desliga_cv2_q24_t1};
const Transition supE11_desliga_cv2_q24_t1 = {&f4, &supE11_desliga_cv2_q18, &supE11_desliga_cv2_q24_t2};
const Transition supE11_desliga_cv2_q24_t2 = {&f2, &supE11_desliga_cv2_q19, NULL};

const Transition supE11_desliga_cv2_q3_t0;
const Transition supE11_desliga_cv2_q3_t1;
const Transition supE11_desliga_cv2_q3_t2;
const Transition supE11_desliga_cv2_q3_t0 = {&s3, &supE11_desliga_cv2_q15, &supE11_desliga_cv2_q3_t1};
const Transition supE11_desliga_cv2_q3_t1 = {&s2, &supE11_desliga_cv2_q4, &supE11_desliga_cv2_q3_t2};
const Transition supE11_desliga_cv2_q3_t2 = {&s4, &supE11_desliga_cv2_q9, NULL};

const Transition supE11_desliga_cv2_q4_t0;
const Transition supE11_desliga_cv2_q4_t1;
const Transition supE11_desliga_cv2_q4_t0 = {&s4, &supE11_desliga_cv2_q11, &supE11_desliga_cv2_q4_t1};
const Transition supE11_desliga_cv2_q4_t1 = {&s3, &supE11_desliga_cv2_q16, NULL};

const Transition supE11_desliga_cv2_q5_t0;
const Transition supE11_desliga_cv2_q5_t1;
const Transition supE11_desliga_cv2_q5_t0 = {&s4, &supE11_desliga_cv2_q11, &supE11_desliga_cv2_q5_t1};
const Transition supE11_desliga_cv2_q5_t1 = {&s3, &supE11_desliga_cv2_q18, NULL};

const Transition supE11_desliga_cv2_q6_t0;
const Transition supE11_desliga_cv2_q6_t1;
const Transition supE11_desliga_cv2_q6_t2;
const Transition supE11_desliga_cv2_q6_t0 = {&f2, &supE11_desliga_cv2_q0, &supE11_desliga_cv2_q6_t1};
const Transition supE11_desliga_cv2_q6_t1 = {&s4, &supE11_desliga_cv2_q12, &supE11_desliga_cv2_q6_t2};
const Transition supE11_desliga_cv2_q6_t2 = {&s3, &supE11_desliga_cv2_q18, NULL};

const Transition supE11_desliga_cv2_q7_t0;
const Transition supE11_desliga_cv2_q7_t1;
const Transition supE11_desliga_cv2_q7_t2;
const Transition supE11_desliga_cv2_q7_t0 = {&f4, &supE11_desliga_cv2_q0, &supE11_desliga_cv2_q7_t1};
const Transition supE11_desliga_cv2_q7_t1 = {&s2, &supE11_desliga_cv2_q10, &supE11_desliga_cv2_q7_t2};
const Transition supE11_desliga_cv2_q7_t2 = {&s3, &supE11_desliga_cv2_q19, NULL};

const Transition supE11_desliga_cv2_q8_t0;
const Transition supE11_desliga_cv2_q8_t1;
const Transition supE11_desliga_cv2_q8_t2;
const Transition supE11_desliga_cv2_q8_t0 = {&s2, &supE11_desliga_cv2_q11, &supE11_desliga_cv2_q8_t1};
const Transition supE11_desliga_cv2_q8_t1 = {&f4, &supE11_desliga_cv2_q2, &supE11_desliga_cv2_q8_t2};
const Transition supE11_desliga_cv2_q8_t2 = {&s3, &supE11_desliga_cv2_q21, NULL};

const Transition supE11_desliga_cv2_q9_t0;
const Transition supE11_desliga_cv2_q9_t1;
const Transition supE11_desliga_cv2_q9_t2;
const Transition supE11_desliga_cv2_q9_t0 = {&s2, &supE11_desliga_cv2_q10, &supE11_desliga_cv2_q9_t1};
const Transition supE11_desliga_cv2_q9_t1 = {&s3, &supE11_desliga_cv2_q21, &supE11_desliga_cv2_q9_t2};
const Transition supE11_desliga_cv2_q9_t2 = {&f4, &supE11_desliga_cv2_q3, NULL};


// states init
const State supE11_desliga_cv2_q0 = {true, SUP_DEBUG_STR("q0"), &supE11_desliga_cv2_q0_t0};
const State supE11_desliga_cv2_q10 = {false, SUP_DEBUG_STR("q10"), &supE11_desliga_cv2_q10_t0};
const State supE11_desliga_cv2_q11 = {false, SUP_DEBUG_STR("q11"), &supE11_desliga_cv2_q11_t0};
const State supE11_desliga_cv2_q12 = {false, SUP_DEBUG_STR("q12"), &supE11_desliga_cv2_q12_t0};
const State supE11_desliga_cv2_q13 = {false, SUP_DEBUG_STR("q13"), &supE11_desliga_cv2_q13_t0};
const State supE11_desliga_cv2_q14 = {false, SUP_DEBUG_STR("q14"), &supE11_desliga_cv2_q14_t0};
const State supE11_desliga_cv2_q15 = {false, SUP_DEBUG_STR("q15"), &supE11_desliga_cv2_q15_t0};
const State supE11_desliga_cv2_q16 = {false, SUP_DEBUG_STR("q16"), &supE11_desliga_cv2_q16_t0};
const State supE11_desliga_cv2_q17 = {false, SUP_DEBUG_STR("q17"), &supE11_desliga_cv2_q17_t0};
const State supE11_desliga_cv2_q18 = {false, SUP_DEBUG_STR("q18"), &supE11_desliga_cv2_q18_t0};
const State supE11_desliga_cv2_q19 = {false, SUP_DEBUG_STR("q19"), &supE11_desliga_cv2_q19_t0};
const State supE11_desliga_cv2_q2 = {false, SUP_DEBUG_STR("q2"), &supE11_desliga_cv2_q2_t0};
const State supE11_desliga_cv2_q20 = {false, SUP_DEBUG_STR("q20"), &supE11_desliga_cv2_q20_t0};
const State supE11_desliga_cv2_q21 = {false, SUP_DEBUG_STR("q21"), &supE11_desliga_cv2_q21_t0};
const State supE11_desliga_cv2_q22 = {false, SUP_DEBUG_STR("q22"), &supE11_desliga_cv2_q22_t0};
const State supE11_desliga_cv2_q23 = {false, SUP_DEBUG_STR("q23"), &supE11_desliga_cv2_q23_t0};
const State supE11_desliga_cv2_q24 = {false, SUP_DEBUG_STR("q24"), &supE11_desliga_cv2_q24_t0};
const State supE11_desliga_cv2_q3 = {false, SUP_DEBUG_STR("q3"), &supE11_desliga_cv2_q3_t0};
const State supE11_desliga_cv2_q4 = {false, SUP_DEBUG_STR("q4"), &supE11_desliga_cv2_q4_t0};
const State supE11_desliga_cv2_q5 = {false, SUP_DEBUG_STR("q5"), &supE11_desliga_cv2_q5_t0};
const State supE11_desliga_cv2_q6 = {false, SUP_DEBUG_STR("q6"), &supE11_desliga_cv2_q6_t0};
const State supE11_desliga_cv2_q7 = {false, SUP_DEBUG_STR("q7"), &supE11_desliga_cv2_q7_t0};
const State supE11_desliga_cv2_q8 = {false, SUP_DEBUG_STR("q8"), &supE11_desliga_cv2_q8_t0};
const State supE11_desliga_cv2_q9 = {false, SUP_DEBUG_STR("q9"), &supE11_desliga_cv2_q9_t0};

// Supervisor create
Supervisor supE11_desliga_cv2 = {&supE11_desliga_cv2_q0, &supE11_desliga_cv2_q0, NULL,  &supE11_desliga_cv2_s3_evt0, "supE11_desliga_cv2"};
