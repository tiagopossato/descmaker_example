#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "supE03_bloqueia_braco.h"

// Supervisor specific instances
// alphabet create
Alphabet supE03_bloqueia_braco_m7_evt0;
Alphabet supE03_bloqueia_braco_s4_evt1;
Alphabet supE03_bloqueia_braco_s3_evt2;
Alphabet supE03_bloqueia_braco_f3_evt3;
Alphabet supE03_bloqueia_braco_f4_evt4;
Alphabet supE03_bloqueia_braco_p7_evt5;

// Alphabet init
Alphabet supE03_bloqueia_braco_m7_evt0 = {&m7, &supE03_bloqueia_braco_s4_evt1};
Alphabet supE03_bloqueia_braco_s4_evt1 = {&s4, &supE03_bloqueia_braco_s3_evt2};
Alphabet supE03_bloqueia_braco_s3_evt2 = {&s3, &supE03_bloqueia_braco_f3_evt3};
Alphabet supE03_bloqueia_braco_f3_evt3 = {&f3, &supE03_bloqueia_braco_f4_evt4};
Alphabet supE03_bloqueia_braco_f4_evt4 = {&f4, &supE03_bloqueia_braco_p7_evt5};
Alphabet supE03_bloqueia_braco_p7_evt5 = {&p7, NULL};

// states create
State supE03_bloqueia_braco_q0;
State supE03_bloqueia_braco_q10;
State supE03_bloqueia_braco_q11;
State supE03_bloqueia_braco_q12;
State supE03_bloqueia_braco_q2;
State supE03_bloqueia_braco_q3;
State supE03_bloqueia_braco_q4;
State supE03_bloqueia_braco_q5;
State supE03_bloqueia_braco_q6;
State supE03_bloqueia_braco_q7;
State supE03_bloqueia_braco_q8;
State supE03_bloqueia_braco_q9;

// transitions create and init
Transition supE03_bloqueia_braco_q0_t0;
Transition supE03_bloqueia_braco_q0_t1;
Transition supE03_bloqueia_braco_q0_t2;
Transition supE03_bloqueia_braco_q0_t0 = {&m7, &supE03_bloqueia_braco_q3, &supE03_bloqueia_braco_q0_t1};
Transition supE03_bloqueia_braco_q0_t1 = {&s4, &supE03_bloqueia_braco_q5, &supE03_bloqueia_braco_q0_t2};
Transition supE03_bloqueia_braco_q0_t2 = {&s3, &supE03_bloqueia_braco_q7, NULL};

Transition supE03_bloqueia_braco_q10_t0;
Transition supE03_bloqueia_braco_q10_t1;
Transition supE03_bloqueia_braco_q10_t2;
Transition supE03_bloqueia_braco_q10_t0 = {&m7, &supE03_bloqueia_braco_q12, &supE03_bloqueia_braco_q10_t1};
Transition supE03_bloqueia_braco_q10_t1 = {&f3, &supE03_bloqueia_braco_q4, &supE03_bloqueia_braco_q10_t2};
Transition supE03_bloqueia_braco_q10_t2 = {&f4, &supE03_bloqueia_braco_q8, NULL};

Transition supE03_bloqueia_braco_q11_t0;
Transition supE03_bloqueia_braco_q11_t1;
Transition supE03_bloqueia_braco_q11_t2;
Transition supE03_bloqueia_braco_q11_t0 = {&m7, &supE03_bloqueia_braco_q12, &supE03_bloqueia_braco_q11_t1};
Transition supE03_bloqueia_braco_q11_t1 = {&f3, &supE03_bloqueia_braco_q5, &supE03_bloqueia_braco_q11_t2};
Transition supE03_bloqueia_braco_q11_t2 = {&f4, &supE03_bloqueia_braco_q8, NULL};

Transition supE03_bloqueia_braco_q12_t0;
Transition supE03_bloqueia_braco_q12_t1;
Transition supE03_bloqueia_braco_q12_t2;
Transition supE03_bloqueia_braco_q12_t0 = {&p7, &supE03_bloqueia_braco_q10, &supE03_bloqueia_braco_q12_t1};
Transition supE03_bloqueia_braco_q12_t1 = {&f3, &supE03_bloqueia_braco_q6, &supE03_bloqueia_braco_q12_t2};
Transition supE03_bloqueia_braco_q12_t2 = {&f4, &supE03_bloqueia_braco_q9, NULL};

Transition supE03_bloqueia_braco_q2_t0;
Transition supE03_bloqueia_braco_q2_t1;
Transition supE03_bloqueia_braco_q2_t0 = {&m7, &supE03_bloqueia_braco_q3, &supE03_bloqueia_braco_q2_t1};
Transition supE03_bloqueia_braco_q2_t1 = {&s4, &supE03_bloqueia_braco_q5, NULL};

Transition supE03_bloqueia_braco_q3_t0;
Transition supE03_bloqueia_braco_q3_t1;
Transition supE03_bloqueia_braco_q3_t0 = {&p7, &supE03_bloqueia_braco_q0, &supE03_bloqueia_braco_q3_t1};
Transition supE03_bloqueia_braco_q3_t1 = {&s4, &supE03_bloqueia_braco_q6, NULL};

Transition supE03_bloqueia_braco_q4_t0;
Transition supE03_bloqueia_braco_q4_t1;
Transition supE03_bloqueia_braco_q4_t2;
Transition supE03_bloqueia_braco_q4_t0 = {&s3, &supE03_bloqueia_braco_q10, &supE03_bloqueia_braco_q4_t1};
Transition supE03_bloqueia_braco_q4_t1 = {&f4, &supE03_bloqueia_braco_q2, &supE03_bloqueia_braco_q4_t2};
Transition supE03_bloqueia_braco_q4_t2 = {&m7, &supE03_bloqueia_braco_q6, NULL};

Transition supE03_bloqueia_braco_q5_t0;
Transition supE03_bloqueia_braco_q5_t1;
Transition supE03_bloqueia_braco_q5_t0 = {&f4, &supE03_bloqueia_braco_q2, &supE03_bloqueia_braco_q5_t1};
Transition supE03_bloqueia_braco_q5_t1 = {&m7, &supE03_bloqueia_braco_q6, NULL};

Transition supE03_bloqueia_braco_q6_t0;
Transition supE03_bloqueia_braco_q6_t1;
Transition supE03_bloqueia_braco_q6_t0 = {&f4, &supE03_bloqueia_braco_q3, &supE03_bloqueia_braco_q6_t1};
Transition supE03_bloqueia_braco_q6_t1 = {&p7, &supE03_bloqueia_braco_q4, NULL};

Transition supE03_bloqueia_braco_q7_t0;
Transition supE03_bloqueia_braco_q7_t1;
Transition supE03_bloqueia_braco_q7_t2;
Transition supE03_bloqueia_braco_q7_t0 = {&f3, &supE03_bloqueia_braco_q0, &supE03_bloqueia_braco_q7_t1};
Transition supE03_bloqueia_braco_q7_t1 = {&s4, &supE03_bloqueia_braco_q11, &supE03_bloqueia_braco_q7_t2};
Transition supE03_bloqueia_braco_q7_t2 = {&m7, &supE03_bloqueia_braco_q9, NULL};

Transition supE03_bloqueia_braco_q8_t0;
Transition supE03_bloqueia_braco_q8_t1;
Transition supE03_bloqueia_braco_q8_t2;
Transition supE03_bloqueia_braco_q8_t0 = {&s4, &supE03_bloqueia_braco_q11, &supE03_bloqueia_braco_q8_t1};
Transition supE03_bloqueia_braco_q8_t1 = {&f3, &supE03_bloqueia_braco_q2, &supE03_bloqueia_braco_q8_t2};
Transition supE03_bloqueia_braco_q8_t2 = {&m7, &supE03_bloqueia_braco_q9, NULL};

Transition supE03_bloqueia_braco_q9_t0;
Transition supE03_bloqueia_braco_q9_t1;
Transition supE03_bloqueia_braco_q9_t2;
Transition supE03_bloqueia_braco_q9_t0 = {&s4, &supE03_bloqueia_braco_q12, &supE03_bloqueia_braco_q9_t1};
Transition supE03_bloqueia_braco_q9_t1 = {&f3, &supE03_bloqueia_braco_q3, &supE03_bloqueia_braco_q9_t2};
Transition supE03_bloqueia_braco_q9_t2 = {&p7, &supE03_bloqueia_braco_q7, NULL};


// states init
State supE03_bloqueia_braco_q0 = {true, SUP_DEBUG_STR("q0"), &supE03_bloqueia_braco_q0_t0};
State supE03_bloqueia_braco_q10 = {false, SUP_DEBUG_STR("q10"), &supE03_bloqueia_braco_q10_t0};
State supE03_bloqueia_braco_q11 = {false, SUP_DEBUG_STR("q11"), &supE03_bloqueia_braco_q11_t0};
State supE03_bloqueia_braco_q12 = {false, SUP_DEBUG_STR("q12"), &supE03_bloqueia_braco_q12_t0};
State supE03_bloqueia_braco_q2 = {false, SUP_DEBUG_STR("q2"), &supE03_bloqueia_braco_q2_t0};
State supE03_bloqueia_braco_q3 = {false, SUP_DEBUG_STR("q3"), &supE03_bloqueia_braco_q3_t0};
State supE03_bloqueia_braco_q4 = {false, SUP_DEBUG_STR("q4"), &supE03_bloqueia_braco_q4_t0};
State supE03_bloqueia_braco_q5 = {false, SUP_DEBUG_STR("q5"), &supE03_bloqueia_braco_q5_t0};
State supE03_bloqueia_braco_q6 = {false, SUP_DEBUG_STR("q6"), &supE03_bloqueia_braco_q6_t0};
State supE03_bloqueia_braco_q7 = {false, SUP_DEBUG_STR("q7"), &supE03_bloqueia_braco_q7_t0};
State supE03_bloqueia_braco_q8 = {false, SUP_DEBUG_STR("q8"), &supE03_bloqueia_braco_q8_t0};
State supE03_bloqueia_braco_q9 = {false, SUP_DEBUG_STR("q9"), &supE03_bloqueia_braco_q9_t0};

// Supervisor create
Supervisor supE03_bloqueia_braco = {&supE03_bloqueia_braco_q0, &supE03_bloqueia_braco_q0, NULL,  &supE03_bloqueia_braco_m7_evt0, "supE03_bloqueia_braco"};
