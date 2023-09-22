#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "supE07_retorna_braco.h"

// Supervisor specific instances
// alphabet create
const Alphabet supE07_retorna_braco_m6_evt0;
const Alphabet supE07_retorna_braco_s5_evt1;
const Alphabet supE07_retorna_braco_s4_evt2;
const Alphabet supE07_retorna_braco_f5_evt3;
const Alphabet supE07_retorna_braco_f4_evt4;
const Alphabet supE07_retorna_braco_p6_evt5;

// Alphabet init
const Alphabet supE07_retorna_braco_m6_evt0 = {&m6, &supE07_retorna_braco_s5_evt1};
const Alphabet supE07_retorna_braco_s5_evt1 = {&s5, &supE07_retorna_braco_s4_evt2};
const Alphabet supE07_retorna_braco_s4_evt2 = {&s4, &supE07_retorna_braco_f5_evt3};
const Alphabet supE07_retorna_braco_f5_evt3 = {&f5, &supE07_retorna_braco_f4_evt4};
const Alphabet supE07_retorna_braco_f4_evt4 = {&f4, &supE07_retorna_braco_p6_evt5};
const Alphabet supE07_retorna_braco_p6_evt5 = {&p6, NULL};

// states create
const State supE07_retorna_braco_q0;
const State supE07_retorna_braco_q10;
const State supE07_retorna_braco_q11;
const State supE07_retorna_braco_q12;
const State supE07_retorna_braco_q13;
const State supE07_retorna_braco_q14;
const State supE07_retorna_braco_q15;
const State supE07_retorna_braco_q16;
const State supE07_retorna_braco_q17;
const State supE07_retorna_braco_q18;
const State supE07_retorna_braco_q19;
const State supE07_retorna_braco_q2;
const State supE07_retorna_braco_q20;
const State supE07_retorna_braco_q21;
const State supE07_retorna_braco_q22;
const State supE07_retorna_braco_q23;
const State supE07_retorna_braco_q24;
const State supE07_retorna_braco_q3;
const State supE07_retorna_braco_q4;
const State supE07_retorna_braco_q5;
const State supE07_retorna_braco_q6;
const State supE07_retorna_braco_q7;
const State supE07_retorna_braco_q8;
const State supE07_retorna_braco_q9;

// transitions create and init
const Transition supE07_retorna_braco_q0_t0;
const Transition supE07_retorna_braco_q0_t1;
const Transition supE07_retorna_braco_q0_t2;
const Transition supE07_retorna_braco_q0_t0 = {&m6, &supE07_retorna_braco_q13, &supE07_retorna_braco_q0_t1};
const Transition supE07_retorna_braco_q0_t1 = {&s5, &supE07_retorna_braco_q4, &supE07_retorna_braco_q0_t2};
const Transition supE07_retorna_braco_q0_t2 = {&s4, &supE07_retorna_braco_q7, NULL};

const Transition supE07_retorna_braco_q10_t0;
const Transition supE07_retorna_braco_q10_t1;
const Transition supE07_retorna_braco_q10_t0 = {&m6, &supE07_retorna_braco_q22, &supE07_retorna_braco_q10_t1};
const Transition supE07_retorna_braco_q10_t1 = {&f5, &supE07_retorna_braco_q9, NULL};

const Transition supE07_retorna_braco_q11_t0;
const Transition supE07_retorna_braco_q11_t1;
const Transition supE07_retorna_braco_q11_t2;
const Transition supE07_retorna_braco_q11_t0 = {&m6, &supE07_retorna_braco_q23, &supE07_retorna_braco_q11_t1};
const Transition supE07_retorna_braco_q11_t1 = {&f4, &supE07_retorna_braco_q4, &supE07_retorna_braco_q11_t2};
const Transition supE07_retorna_braco_q11_t2 = {&f5, &supE07_retorna_braco_q8, NULL};

const Transition supE07_retorna_braco_q12_t0;
const Transition supE07_retorna_braco_q12_t1;
const Transition supE07_retorna_braco_q12_t0 = {&m6, &supE07_retorna_braco_q24, &supE07_retorna_braco_q12_t1};
const Transition supE07_retorna_braco_q12_t1 = {&f5, &supE07_retorna_braco_q9, NULL};

const Transition supE07_retorna_braco_q13_t0;
const Transition supE07_retorna_braco_q13_t1;
const Transition supE07_retorna_braco_q13_t2;
const Transition supE07_retorna_braco_q13_t0 = {&p6, &supE07_retorna_braco_q0, &supE07_retorna_braco_q13_t1};
const Transition supE07_retorna_braco_q13_t1 = {&s5, &supE07_retorna_braco_q16, &supE07_retorna_braco_q13_t2};
const Transition supE07_retorna_braco_q13_t2 = {&s4, &supE07_retorna_braco_q19, NULL};

const Transition supE07_retorna_braco_q14_t0;
const Transition supE07_retorna_braco_q14_t1;
const Transition supE07_retorna_braco_q14_t2;
const Transition supE07_retorna_braco_q14_t0 = {&s5, &supE07_retorna_braco_q17, &supE07_retorna_braco_q14_t1};
const Transition supE07_retorna_braco_q14_t1 = {&p6, &supE07_retorna_braco_q2, &supE07_retorna_braco_q14_t2};
const Transition supE07_retorna_braco_q14_t2 = {&s4, &supE07_retorna_braco_q20, NULL};

const Transition supE07_retorna_braco_q15_t0;
const Transition supE07_retorna_braco_q15_t1;
const Transition supE07_retorna_braco_q15_t2;
const Transition supE07_retorna_braco_q15_t0 = {&s5, &supE07_retorna_braco_q18, &supE07_retorna_braco_q15_t1};
const Transition supE07_retorna_braco_q15_t1 = {&p6, &supE07_retorna_braco_q2, &supE07_retorna_braco_q15_t2};
const Transition supE07_retorna_braco_q15_t2 = {&s4, &supE07_retorna_braco_q21, NULL};

const Transition supE07_retorna_braco_q16_t0;
const Transition supE07_retorna_braco_q16_t1;
const Transition supE07_retorna_braco_q16_t2;
const Transition supE07_retorna_braco_q16_t0 = {&f5, &supE07_retorna_braco_q15, &supE07_retorna_braco_q16_t1};
const Transition supE07_retorna_braco_q16_t1 = {&s4, &supE07_retorna_braco_q22, &supE07_retorna_braco_q16_t2};
const Transition supE07_retorna_braco_q16_t2 = {&p6, &supE07_retorna_braco_q4, NULL};

const Transition supE07_retorna_braco_q17_t0;
const Transition supE07_retorna_braco_q17_t1;
const Transition supE07_retorna_braco_q17_t2;
const Transition supE07_retorna_braco_q17_t0 = {&f5, &supE07_retorna_braco_q14, &supE07_retorna_braco_q17_t1};
const Transition supE07_retorna_braco_q17_t1 = {&s4, &supE07_retorna_braco_q23, &supE07_retorna_braco_q17_t2};
const Transition supE07_retorna_braco_q17_t2 = {&p6, &supE07_retorna_braco_q5, NULL};

const Transition supE07_retorna_braco_q18_t0;
const Transition supE07_retorna_braco_q18_t1;
const Transition supE07_retorna_braco_q18_t2;
const Transition supE07_retorna_braco_q18_t0 = {&f5, &supE07_retorna_braco_q15, &supE07_retorna_braco_q18_t1};
const Transition supE07_retorna_braco_q18_t1 = {&s4, &supE07_retorna_braco_q24, &supE07_retorna_braco_q18_t2};
const Transition supE07_retorna_braco_q18_t2 = {&p6, &supE07_retorna_braco_q5, NULL};

const Transition supE07_retorna_braco_q19_t0;
const Transition supE07_retorna_braco_q19_t1;
const Transition supE07_retorna_braco_q19_t0 = {&s5, &supE07_retorna_braco_q22, &supE07_retorna_braco_q19_t1};
const Transition supE07_retorna_braco_q19_t1 = {&p6, &supE07_retorna_braco_q7, NULL};

const Transition supE07_retorna_braco_q2_t0;
const Transition supE07_retorna_braco_q2_t1;
const Transition supE07_retorna_braco_q2_t2;
const Transition supE07_retorna_braco_q2_t0 = {&m6, &supE07_retorna_braco_q14, &supE07_retorna_braco_q2_t1};
const Transition supE07_retorna_braco_q2_t1 = {&s5, &supE07_retorna_braco_q5, &supE07_retorna_braco_q2_t2};
const Transition supE07_retorna_braco_q2_t2 = {&s4, &supE07_retorna_braco_q8, NULL};

const Transition supE07_retorna_braco_q20_t0;
const Transition supE07_retorna_braco_q20_t1;
const Transition supE07_retorna_braco_q20_t2;
const Transition supE07_retorna_braco_q20_t0 = {&f4, &supE07_retorna_braco_q13, &supE07_retorna_braco_q20_t1};
const Transition supE07_retorna_braco_q20_t1 = {&s5, &supE07_retorna_braco_q23, &supE07_retorna_braco_q20_t2};
const Transition supE07_retorna_braco_q20_t2 = {&p6, &supE07_retorna_braco_q8, NULL};

const Transition supE07_retorna_braco_q21_t0;
const Transition supE07_retorna_braco_q21_t1;
const Transition supE07_retorna_braco_q21_t0 = {&s5, &supE07_retorna_braco_q24, &supE07_retorna_braco_q21_t1};
const Transition supE07_retorna_braco_q21_t1 = {&p6, &supE07_retorna_braco_q8, NULL};

const Transition supE07_retorna_braco_q22_t0;
const Transition supE07_retorna_braco_q22_t1;
const Transition supE07_retorna_braco_q22_t0 = {&p6, &supE07_retorna_braco_q10, &supE07_retorna_braco_q22_t1};
const Transition supE07_retorna_braco_q22_t1 = {&f5, &supE07_retorna_braco_q21, NULL};

const Transition supE07_retorna_braco_q23_t0;
const Transition supE07_retorna_braco_q23_t1;
const Transition supE07_retorna_braco_q23_t2;
const Transition supE07_retorna_braco_q23_t0 = {&p6, &supE07_retorna_braco_q11, &supE07_retorna_braco_q23_t1};
const Transition supE07_retorna_braco_q23_t1 = {&f4, &supE07_retorna_braco_q16, &supE07_retorna_braco_q23_t2};
const Transition supE07_retorna_braco_q23_t2 = {&f5, &supE07_retorna_braco_q20, NULL};

const Transition supE07_retorna_braco_q24_t0;
const Transition supE07_retorna_braco_q24_t1;
const Transition supE07_retorna_braco_q24_t0 = {&p6, &supE07_retorna_braco_q11, &supE07_retorna_braco_q24_t1};
const Transition supE07_retorna_braco_q24_t1 = {&f5, &supE07_retorna_braco_q21, NULL};

const Transition supE07_retorna_braco_q3_t0;
const Transition supE07_retorna_braco_q3_t1;
const Transition supE07_retorna_braco_q3_t2;
const Transition supE07_retorna_braco_q3_t0 = {&m6, &supE07_retorna_braco_q15, &supE07_retorna_braco_q3_t1};
const Transition supE07_retorna_braco_q3_t1 = {&s5, &supE07_retorna_braco_q6, &supE07_retorna_braco_q3_t2};
const Transition supE07_retorna_braco_q3_t2 = {&s4, &supE07_retorna_braco_q9, NULL};

const Transition supE07_retorna_braco_q4_t0;
const Transition supE07_retorna_braco_q4_t1;
const Transition supE07_retorna_braco_q4_t2;
const Transition supE07_retorna_braco_q4_t0 = {&s4, &supE07_retorna_braco_q10, &supE07_retorna_braco_q4_t1};
const Transition supE07_retorna_braco_q4_t1 = {&m6, &supE07_retorna_braco_q16, &supE07_retorna_braco_q4_t2};
const Transition supE07_retorna_braco_q4_t2 = {&f5, &supE07_retorna_braco_q3, NULL};

const Transition supE07_retorna_braco_q5_t0;
const Transition supE07_retorna_braco_q5_t1;
const Transition supE07_retorna_braco_q5_t2;
const Transition supE07_retorna_braco_q5_t0 = {&s4, &supE07_retorna_braco_q11, &supE07_retorna_braco_q5_t1};
const Transition supE07_retorna_braco_q5_t1 = {&m6, &supE07_retorna_braco_q17, &supE07_retorna_braco_q5_t2};
const Transition supE07_retorna_braco_q5_t2 = {&f5, &supE07_retorna_braco_q2, NULL};

const Transition supE07_retorna_braco_q6_t0;
const Transition supE07_retorna_braco_q6_t1;
const Transition supE07_retorna_braco_q6_t2;
const Transition supE07_retorna_braco_q6_t0 = {&s4, &supE07_retorna_braco_q12, &supE07_retorna_braco_q6_t1};
const Transition supE07_retorna_braco_q6_t1 = {&m6, &supE07_retorna_braco_q18, &supE07_retorna_braco_q6_t2};
const Transition supE07_retorna_braco_q6_t2 = {&f5, &supE07_retorna_braco_q3, NULL};

const Transition supE07_retorna_braco_q7_t0;
const Transition supE07_retorna_braco_q7_t1;
const Transition supE07_retorna_braco_q7_t0 = {&s5, &supE07_retorna_braco_q10, &supE07_retorna_braco_q7_t1};
const Transition supE07_retorna_braco_q7_t1 = {&m6, &supE07_retorna_braco_q19, NULL};

const Transition supE07_retorna_braco_q8_t0;
const Transition supE07_retorna_braco_q8_t1;
const Transition supE07_retorna_braco_q8_t2;
const Transition supE07_retorna_braco_q8_t0 = {&f4, &supE07_retorna_braco_q0, &supE07_retorna_braco_q8_t1};
const Transition supE07_retorna_braco_q8_t1 = {&s5, &supE07_retorna_braco_q11, &supE07_retorna_braco_q8_t2};
const Transition supE07_retorna_braco_q8_t2 = {&m6, &supE07_retorna_braco_q20, NULL};

const Transition supE07_retorna_braco_q9_t0;
const Transition supE07_retorna_braco_q9_t1;
const Transition supE07_retorna_braco_q9_t0 = {&s5, &supE07_retorna_braco_q12, &supE07_retorna_braco_q9_t1};
const Transition supE07_retorna_braco_q9_t1 = {&m6, &supE07_retorna_braco_q21, NULL};


// states init
const State supE07_retorna_braco_q0 = {true, SUP_DEBUG_STR("q0"), &supE07_retorna_braco_q0_t0};
const State supE07_retorna_braco_q10 = {false, SUP_DEBUG_STR("q10"), &supE07_retorna_braco_q10_t0};
const State supE07_retorna_braco_q11 = {false, SUP_DEBUG_STR("q11"), &supE07_retorna_braco_q11_t0};
const State supE07_retorna_braco_q12 = {false, SUP_DEBUG_STR("q12"), &supE07_retorna_braco_q12_t0};
const State supE07_retorna_braco_q13 = {false, SUP_DEBUG_STR("q13"), &supE07_retorna_braco_q13_t0};
const State supE07_retorna_braco_q14 = {false, SUP_DEBUG_STR("q14"), &supE07_retorna_braco_q14_t0};
const State supE07_retorna_braco_q15 = {false, SUP_DEBUG_STR("q15"), &supE07_retorna_braco_q15_t0};
const State supE07_retorna_braco_q16 = {false, SUP_DEBUG_STR("q16"), &supE07_retorna_braco_q16_t0};
const State supE07_retorna_braco_q17 = {false, SUP_DEBUG_STR("q17"), &supE07_retorna_braco_q17_t0};
const State supE07_retorna_braco_q18 = {false, SUP_DEBUG_STR("q18"), &supE07_retorna_braco_q18_t0};
const State supE07_retorna_braco_q19 = {false, SUP_DEBUG_STR("q19"), &supE07_retorna_braco_q19_t0};
const State supE07_retorna_braco_q2 = {false, SUP_DEBUG_STR("q2"), &supE07_retorna_braco_q2_t0};
const State supE07_retorna_braco_q20 = {false, SUP_DEBUG_STR("q20"), &supE07_retorna_braco_q20_t0};
const State supE07_retorna_braco_q21 = {false, SUP_DEBUG_STR("q21"), &supE07_retorna_braco_q21_t0};
const State supE07_retorna_braco_q22 = {false, SUP_DEBUG_STR("q22"), &supE07_retorna_braco_q22_t0};
const State supE07_retorna_braco_q23 = {false, SUP_DEBUG_STR("q23"), &supE07_retorna_braco_q23_t0};
const State supE07_retorna_braco_q24 = {false, SUP_DEBUG_STR("q24"), &supE07_retorna_braco_q24_t0};
const State supE07_retorna_braco_q3 = {false, SUP_DEBUG_STR("q3"), &supE07_retorna_braco_q3_t0};
const State supE07_retorna_braco_q4 = {false, SUP_DEBUG_STR("q4"), &supE07_retorna_braco_q4_t0};
const State supE07_retorna_braco_q5 = {false, SUP_DEBUG_STR("q5"), &supE07_retorna_braco_q5_t0};
const State supE07_retorna_braco_q6 = {false, SUP_DEBUG_STR("q6"), &supE07_retorna_braco_q6_t0};
const State supE07_retorna_braco_q7 = {false, SUP_DEBUG_STR("q7"), &supE07_retorna_braco_q7_t0};
const State supE07_retorna_braco_q8 = {false, SUP_DEBUG_STR("q8"), &supE07_retorna_braco_q8_t0};
const State supE07_retorna_braco_q9 = {false, SUP_DEBUG_STR("q9"), &supE07_retorna_braco_q9_t0};

// Supervisor create
Supervisor supE07_retorna_braco = {&supE07_retorna_braco_q0, &supE07_retorna_braco_q0, NULL,  &supE07_retorna_braco_m6_evt0, "supE07_retorna_braco"};
