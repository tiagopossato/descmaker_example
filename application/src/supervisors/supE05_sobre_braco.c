#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "supE05_sobre_braco.h"

// Supervisor specific instances
// alphabet create
const Alphabet supE05_sobre_braco_s5_evt0;
const Alphabet supE05_sobre_braco_s3_evt1;
const Alphabet supE05_sobre_braco_f5_evt2;
const Alphabet supE05_sobre_braco_f3_evt3;

// Alphabet init
const Alphabet supE05_sobre_braco_s5_evt0 = {&s5, &supE05_sobre_braco_s3_evt1};
const Alphabet supE05_sobre_braco_s3_evt1 = {&s3, &supE05_sobre_braco_f5_evt2};
const Alphabet supE05_sobre_braco_f5_evt2 = {&f5, &supE05_sobre_braco_f3_evt3};
const Alphabet supE05_sobre_braco_f3_evt3 = {&f3, NULL};

// states create
const State supE05_sobre_braco_q0;
const State supE05_sobre_braco_q2;
const State supE05_sobre_braco_q3;
const State supE05_sobre_braco_q4;
const State supE05_sobre_braco_q5;
const State supE05_sobre_braco_q6;
const State supE05_sobre_braco_q7;
const State supE05_sobre_braco_q8;

// transitions create and init
const Transition supE05_sobre_braco_q0_t0;
const Transition supE05_sobre_braco_q0_t1;
const Transition supE05_sobre_braco_q0_t0 = {&s5, &supE05_sobre_braco_q4, &supE05_sobre_braco_q0_t1};
const Transition supE05_sobre_braco_q0_t1 = {&s3, &supE05_sobre_braco_q5, NULL};

const Transition supE05_sobre_braco_q2_t0;
const Transition supE05_sobre_braco_q2_t1;
const Transition supE05_sobre_braco_q2_t0 = {&s5, &supE05_sobre_braco_q4, &supE05_sobre_braco_q2_t1};
const Transition supE05_sobre_braco_q2_t1 = {&s3, &supE05_sobre_braco_q6, NULL};

const Transition supE05_sobre_braco_q3_t0;
const Transition supE05_sobre_braco_q3_t1;
const Transition supE05_sobre_braco_q3_t0 = {&f5, &supE05_sobre_braco_q2, &supE05_sobre_braco_q3_t1};
const Transition supE05_sobre_braco_q3_t1 = {&s3, &supE05_sobre_braco_q7, NULL};

const Transition supE05_sobre_braco_q4_t0;
const Transition supE05_sobre_braco_q4_t1;
const Transition supE05_sobre_braco_q4_t0 = {&f5, &supE05_sobre_braco_q2, &supE05_sobre_braco_q4_t1};
const Transition supE05_sobre_braco_q4_t1 = {&s3, &supE05_sobre_braco_q8, NULL};

const Transition supE05_sobre_braco_q5_t0;
const Transition supE05_sobre_braco_q5_t0 = {&s5, &supE05_sobre_braco_q8, NULL};

const Transition supE05_sobre_braco_q6_t0;
const Transition supE05_sobre_braco_q6_t1;
const Transition supE05_sobre_braco_q6_t0 = {&f3, &supE05_sobre_braco_q0, &supE05_sobre_braco_q6_t1};
const Transition supE05_sobre_braco_q6_t1 = {&s5, &supE05_sobre_braco_q8, NULL};

const Transition supE05_sobre_braco_q7_t0;
const Transition supE05_sobre_braco_q7_t0 = {&f5, &supE05_sobre_braco_q6, NULL};

const Transition supE05_sobre_braco_q8_t0;
const Transition supE05_sobre_braco_q8_t1;
const Transition supE05_sobre_braco_q8_t0 = {&f3, &supE05_sobre_braco_q3, &supE05_sobre_braco_q8_t1};
const Transition supE05_sobre_braco_q8_t1 = {&f5, &supE05_sobre_braco_q6, NULL};


// states init
const State supE05_sobre_braco_q0 = {true, SUP_DEBUG_STR("q0"), &supE05_sobre_braco_q0_t0};
const State supE05_sobre_braco_q2 = {false, SUP_DEBUG_STR("q2"), &supE05_sobre_braco_q2_t0};
const State supE05_sobre_braco_q3 = {false, SUP_DEBUG_STR("q3"), &supE05_sobre_braco_q3_t0};
const State supE05_sobre_braco_q4 = {false, SUP_DEBUG_STR("q4"), &supE05_sobre_braco_q4_t0};
const State supE05_sobre_braco_q5 = {false, SUP_DEBUG_STR("q5"), &supE05_sobre_braco_q5_t0};
const State supE05_sobre_braco_q6 = {false, SUP_DEBUG_STR("q6"), &supE05_sobre_braco_q6_t0};
const State supE05_sobre_braco_q7 = {false, SUP_DEBUG_STR("q7"), &supE05_sobre_braco_q7_t0};
const State supE05_sobre_braco_q8 = {false, SUP_DEBUG_STR("q8"), &supE05_sobre_braco_q8_t0};

// Supervisor create
Supervisor supE05_sobre_braco = {&supE05_sobre_braco_q0, &supE05_sobre_braco_q0, NULL,  &supE05_sobre_braco_s5_evt0, "supE05_sobre_braco"};
