#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "supE10_liga_cv2.h"

// Supervisor specific instances
// alphabet create
const Alphabet supE10_liga_cv2_t2_evt0;
const Alphabet supE10_liga_cv2_s5_evt1;
const Alphabet supE10_liga_cv2_f5_evt2;
const Alphabet supE10_liga_cv2_f2_evt3;
const Alphabet supE10_liga_cv2_s2_evt4;

// Alphabet init
const Alphabet supE10_liga_cv2_t2_evt0 = {&t2, &supE10_liga_cv2_s5_evt1};
const Alphabet supE10_liga_cv2_s5_evt1 = {&s5, &supE10_liga_cv2_f5_evt2};
const Alphabet supE10_liga_cv2_f5_evt2 = {&f5, &supE10_liga_cv2_f2_evt3};
const Alphabet supE10_liga_cv2_f2_evt3 = {&f2, &supE10_liga_cv2_s2_evt4};
const Alphabet supE10_liga_cv2_s2_evt4 = {&s2, NULL};

// states create
const State supE10_liga_cv2_q0;
const State supE10_liga_cv2_q10;
const State supE10_liga_cv2_q11;
const State supE10_liga_cv2_q12;
const State supE10_liga_cv2_q2;
const State supE10_liga_cv2_q3;
const State supE10_liga_cv2_q4;
const State supE10_liga_cv2_q5;
const State supE10_liga_cv2_q6;
const State supE10_liga_cv2_q7;
const State supE10_liga_cv2_q8;
const State supE10_liga_cv2_q9;

// transitions create and init
const Transition supE10_liga_cv2_q0_t0;
const Transition supE10_liga_cv2_q0_t1;
const Transition supE10_liga_cv2_q0_t0 = {&t2, &supE10_liga_cv2_q2, &supE10_liga_cv2_q0_t1};
const Transition supE10_liga_cv2_q0_t1 = {&s5, &supE10_liga_cv2_q7, NULL};

const Transition supE10_liga_cv2_q10_t0;
const Transition supE10_liga_cv2_q10_t1;
const Transition supE10_liga_cv2_q10_t2;
const Transition supE10_liga_cv2_q10_t0 = {&t2, &supE10_liga_cv2_q11, &supE10_liga_cv2_q10_t1};
const Transition supE10_liga_cv2_q10_t1 = {&f5, &supE10_liga_cv2_q4, &supE10_liga_cv2_q10_t2};
const Transition supE10_liga_cv2_q10_t2 = {&f2, &supE10_liga_cv2_q7, NULL};

const Transition supE10_liga_cv2_q11_t0;
const Transition supE10_liga_cv2_q11_t1;
const Transition supE10_liga_cv2_q11_t2;
const Transition supE10_liga_cv2_q11_t0 = {&t2, &supE10_liga_cv2_q11, &supE10_liga_cv2_q11_t1};
const Transition supE10_liga_cv2_q11_t1 = {&f5, &supE10_liga_cv2_q6, &supE10_liga_cv2_q11_t2};
const Transition supE10_liga_cv2_q11_t2 = {&f2, &supE10_liga_cv2_q8, NULL};

const Transition supE10_liga_cv2_q12_t0;
const Transition supE10_liga_cv2_q12_t1;
const Transition supE10_liga_cv2_q12_t2;
const Transition supE10_liga_cv2_q12_t0 = {&t2, &supE10_liga_cv2_q12, &supE10_liga_cv2_q12_t1};
const Transition supE10_liga_cv2_q12_t1 = {&f5, &supE10_liga_cv2_q6, &supE10_liga_cv2_q12_t2};
const Transition supE10_liga_cv2_q12_t2 = {&f2, &supE10_liga_cv2_q9, NULL};

const Transition supE10_liga_cv2_q2_t0;
const Transition supE10_liga_cv2_q2_t1;
const Transition supE10_liga_cv2_q2_t0 = {&t2, &supE10_liga_cv2_q2, &supE10_liga_cv2_q2_t1};
const Transition supE10_liga_cv2_q2_t1 = {&s5, &supE10_liga_cv2_q8, NULL};

const Transition supE10_liga_cv2_q3_t0;
const Transition supE10_liga_cv2_q3_t1;
const Transition supE10_liga_cv2_q3_t2;
const Transition supE10_liga_cv2_q3_t0 = {&t2, &supE10_liga_cv2_q3, &supE10_liga_cv2_q3_t1};
const Transition supE10_liga_cv2_q3_t1 = {&s2, &supE10_liga_cv2_q4, &supE10_liga_cv2_q3_t2};
const Transition supE10_liga_cv2_q3_t2 = {&s5, &supE10_liga_cv2_q9, NULL};

const Transition supE10_liga_cv2_q4_t0;
const Transition supE10_liga_cv2_q4_t1;
const Transition supE10_liga_cv2_q4_t2;
const Transition supE10_liga_cv2_q4_t0 = {&f2, &supE10_liga_cv2_q0, &supE10_liga_cv2_q4_t1};
const Transition supE10_liga_cv2_q4_t1 = {&s5, &supE10_liga_cv2_q10, &supE10_liga_cv2_q4_t2};
const Transition supE10_liga_cv2_q4_t2 = {&t2, &supE10_liga_cv2_q5, NULL};

const Transition supE10_liga_cv2_q5_t0;
const Transition supE10_liga_cv2_q5_t1;
const Transition supE10_liga_cv2_q5_t2;
const Transition supE10_liga_cv2_q5_t0 = {&s5, &supE10_liga_cv2_q11, &supE10_liga_cv2_q5_t1};
const Transition supE10_liga_cv2_q5_t1 = {&f2, &supE10_liga_cv2_q2, &supE10_liga_cv2_q5_t2};
const Transition supE10_liga_cv2_q5_t2 = {&t2, &supE10_liga_cv2_q5, NULL};

const Transition supE10_liga_cv2_q6_t0;
const Transition supE10_liga_cv2_q6_t1;
const Transition supE10_liga_cv2_q6_t2;
const Transition supE10_liga_cv2_q6_t0 = {&s5, &supE10_liga_cv2_q12, &supE10_liga_cv2_q6_t1};
const Transition supE10_liga_cv2_q6_t1 = {&f2, &supE10_liga_cv2_q3, &supE10_liga_cv2_q6_t2};
const Transition supE10_liga_cv2_q6_t2 = {&t2, &supE10_liga_cv2_q6, NULL};

const Transition supE10_liga_cv2_q7_t0;
const Transition supE10_liga_cv2_q7_t1;
const Transition supE10_liga_cv2_q7_t0 = {&f5, &supE10_liga_cv2_q0, &supE10_liga_cv2_q7_t1};
const Transition supE10_liga_cv2_q7_t1 = {&t2, &supE10_liga_cv2_q8, NULL};

const Transition supE10_liga_cv2_q8_t0;
const Transition supE10_liga_cv2_q8_t1;
const Transition supE10_liga_cv2_q8_t0 = {&f5, &supE10_liga_cv2_q3, &supE10_liga_cv2_q8_t1};
const Transition supE10_liga_cv2_q8_t1 = {&t2, &supE10_liga_cv2_q8, NULL};

const Transition supE10_liga_cv2_q9_t0;
const Transition supE10_liga_cv2_q9_t1;
const Transition supE10_liga_cv2_q9_t2;
const Transition supE10_liga_cv2_q9_t0 = {&s2, &supE10_liga_cv2_q10, &supE10_liga_cv2_q9_t1};
const Transition supE10_liga_cv2_q9_t1 = {&f5, &supE10_liga_cv2_q3, &supE10_liga_cv2_q9_t2};
const Transition supE10_liga_cv2_q9_t2 = {&t2, &supE10_liga_cv2_q9, NULL};


// states init
const State supE10_liga_cv2_q0 = {true, SUP_DEBUG_STR("q0"), &supE10_liga_cv2_q0_t0};
const State supE10_liga_cv2_q10 = {false, SUP_DEBUG_STR("q10"), &supE10_liga_cv2_q10_t0};
const State supE10_liga_cv2_q11 = {false, SUP_DEBUG_STR("q11"), &supE10_liga_cv2_q11_t0};
const State supE10_liga_cv2_q12 = {false, SUP_DEBUG_STR("q12"), &supE10_liga_cv2_q12_t0};
const State supE10_liga_cv2_q2 = {false, SUP_DEBUG_STR("q2"), &supE10_liga_cv2_q2_t0};
const State supE10_liga_cv2_q3 = {false, SUP_DEBUG_STR("q3"), &supE10_liga_cv2_q3_t0};
const State supE10_liga_cv2_q4 = {false, SUP_DEBUG_STR("q4"), &supE10_liga_cv2_q4_t0};
const State supE10_liga_cv2_q5 = {false, SUP_DEBUG_STR("q5"), &supE10_liga_cv2_q5_t0};
const State supE10_liga_cv2_q6 = {false, SUP_DEBUG_STR("q6"), &supE10_liga_cv2_q6_t0};
const State supE10_liga_cv2_q7 = {false, SUP_DEBUG_STR("q7"), &supE10_liga_cv2_q7_t0};
const State supE10_liga_cv2_q8 = {false, SUP_DEBUG_STR("q8"), &supE10_liga_cv2_q8_t0};
const State supE10_liga_cv2_q9 = {false, SUP_DEBUG_STR("q9"), &supE10_liga_cv2_q9_t0};

// Supervisor create
Supervisor supE10_liga_cv2 = {&supE10_liga_cv2_q0, &supE10_liga_cv2_q0, NULL,  &supE10_liga_cv2_t2_evt0, "supE10_liga_cv2"};
