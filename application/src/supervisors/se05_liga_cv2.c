#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "se05_liga_cv2.h"

// Supervisor specific instances
// alphabet create
Alphabet se05_liga_cv2_s2_evt0;
Alphabet se05_liga_cv2_ppg_on_evt1;
Alphabet se05_liga_cv2_ppg_off_evt2;
Alphabet se05_liga_cv2_cv2_off_evt3;
Alphabet se05_liga_cv2_cv2_on_evt4;

// Alphabet init
Alphabet se05_liga_cv2_s2_evt0 = {&s2, &se05_liga_cv2_ppg_on_evt1};
Alphabet se05_liga_cv2_ppg_on_evt1 = {&ppg_on, &se05_liga_cv2_ppg_off_evt2};
Alphabet se05_liga_cv2_ppg_off_evt2 = {&ppg_off, &se05_liga_cv2_cv2_off_evt3};
Alphabet se05_liga_cv2_cv2_off_evt3 = {&cv2_off, &se05_liga_cv2_cv2_on_evt4};
Alphabet se05_liga_cv2_cv2_on_evt4 = {&cv2_on, NULL};

// states create
State se05_liga_cv2_q0;
State se05_liga_cv2_q10;
State se05_liga_cv2_q11;
State se05_liga_cv2_q12;
State se05_liga_cv2_q2;
State se05_liga_cv2_q3;
State se05_liga_cv2_q4;
State se05_liga_cv2_q5;
State se05_liga_cv2_q6;
State se05_liga_cv2_q7;
State se05_liga_cv2_q8;
State se05_liga_cv2_q9;

// transitions create and init
Transition se05_liga_cv2_q0_t0;
Transition se05_liga_cv2_q0_t1;
Transition se05_liga_cv2_q0_t0 = {&s2, &se05_liga_cv2_q2, &se05_liga_cv2_q0_t1};
Transition se05_liga_cv2_q0_t1 = {&ppg_on, &se05_liga_cv2_q7, NULL};

Transition se05_liga_cv2_q10_t0;
Transition se05_liga_cv2_q10_t1;
Transition se05_liga_cv2_q10_t2;
Transition se05_liga_cv2_q10_t0 = {&s2, &se05_liga_cv2_q11, &se05_liga_cv2_q10_t1};
Transition se05_liga_cv2_q10_t1 = {&ppg_off, &se05_liga_cv2_q4, &se05_liga_cv2_q10_t2};
Transition se05_liga_cv2_q10_t2 = {&cv2_off, &se05_liga_cv2_q7, NULL};

Transition se05_liga_cv2_q11_t0;
Transition se05_liga_cv2_q11_t1;
Transition se05_liga_cv2_q11_t2;
Transition se05_liga_cv2_q11_t0 = {&s2, &se05_liga_cv2_q11, &se05_liga_cv2_q11_t1};
Transition se05_liga_cv2_q11_t1 = {&ppg_off, &se05_liga_cv2_q6, &se05_liga_cv2_q11_t2};
Transition se05_liga_cv2_q11_t2 = {&cv2_off, &se05_liga_cv2_q8, NULL};

Transition se05_liga_cv2_q12_t0;
Transition se05_liga_cv2_q12_t1;
Transition se05_liga_cv2_q12_t2;
Transition se05_liga_cv2_q12_t0 = {&s2, &se05_liga_cv2_q12, &se05_liga_cv2_q12_t1};
Transition se05_liga_cv2_q12_t1 = {&ppg_off, &se05_liga_cv2_q6, &se05_liga_cv2_q12_t2};
Transition se05_liga_cv2_q12_t2 = {&cv2_off, &se05_liga_cv2_q9, NULL};

Transition se05_liga_cv2_q2_t0;
Transition se05_liga_cv2_q2_t1;
Transition se05_liga_cv2_q2_t0 = {&s2, &se05_liga_cv2_q2, &se05_liga_cv2_q2_t1};
Transition se05_liga_cv2_q2_t1 = {&ppg_on, &se05_liga_cv2_q8, NULL};

Transition se05_liga_cv2_q3_t0;
Transition se05_liga_cv2_q3_t1;
Transition se05_liga_cv2_q3_t2;
Transition se05_liga_cv2_q3_t0 = {&s2, &se05_liga_cv2_q3, &se05_liga_cv2_q3_t1};
Transition se05_liga_cv2_q3_t1 = {&cv2_on, &se05_liga_cv2_q4, &se05_liga_cv2_q3_t2};
Transition se05_liga_cv2_q3_t2 = {&ppg_on, &se05_liga_cv2_q9, NULL};

Transition se05_liga_cv2_q4_t0;
Transition se05_liga_cv2_q4_t1;
Transition se05_liga_cv2_q4_t2;
Transition se05_liga_cv2_q4_t0 = {&cv2_off, &se05_liga_cv2_q0, &se05_liga_cv2_q4_t1};
Transition se05_liga_cv2_q4_t1 = {&ppg_on, &se05_liga_cv2_q10, &se05_liga_cv2_q4_t2};
Transition se05_liga_cv2_q4_t2 = {&s2, &se05_liga_cv2_q5, NULL};

Transition se05_liga_cv2_q5_t0;
Transition se05_liga_cv2_q5_t1;
Transition se05_liga_cv2_q5_t2;
Transition se05_liga_cv2_q5_t0 = {&ppg_on, &se05_liga_cv2_q11, &se05_liga_cv2_q5_t1};
Transition se05_liga_cv2_q5_t1 = {&cv2_off, &se05_liga_cv2_q2, &se05_liga_cv2_q5_t2};
Transition se05_liga_cv2_q5_t2 = {&s2, &se05_liga_cv2_q5, NULL};

Transition se05_liga_cv2_q6_t0;
Transition se05_liga_cv2_q6_t1;
Transition se05_liga_cv2_q6_t2;
Transition se05_liga_cv2_q6_t0 = {&ppg_on, &se05_liga_cv2_q12, &se05_liga_cv2_q6_t1};
Transition se05_liga_cv2_q6_t1 = {&cv2_off, &se05_liga_cv2_q3, &se05_liga_cv2_q6_t2};
Transition se05_liga_cv2_q6_t2 = {&s2, &se05_liga_cv2_q6, NULL};

Transition se05_liga_cv2_q7_t0;
Transition se05_liga_cv2_q7_t1;
Transition se05_liga_cv2_q7_t0 = {&ppg_off, &se05_liga_cv2_q0, &se05_liga_cv2_q7_t1};
Transition se05_liga_cv2_q7_t1 = {&s2, &se05_liga_cv2_q8, NULL};

Transition se05_liga_cv2_q8_t0;
Transition se05_liga_cv2_q8_t1;
Transition se05_liga_cv2_q8_t0 = {&ppg_off, &se05_liga_cv2_q3, &se05_liga_cv2_q8_t1};
Transition se05_liga_cv2_q8_t1 = {&s2, &se05_liga_cv2_q8, NULL};

Transition se05_liga_cv2_q9_t0;
Transition se05_liga_cv2_q9_t1;
Transition se05_liga_cv2_q9_t2;
Transition se05_liga_cv2_q9_t0 = {&cv2_on, &se05_liga_cv2_q10, &se05_liga_cv2_q9_t1};
Transition se05_liga_cv2_q9_t1 = {&ppg_off, &se05_liga_cv2_q3, &se05_liga_cv2_q9_t2};
Transition se05_liga_cv2_q9_t2 = {&s2, &se05_liga_cv2_q9, NULL};


// states init
State se05_liga_cv2_q0 = {true, SUP_DEBUG_STR("q0"), &se05_liga_cv2_q0_t0};
State se05_liga_cv2_q10 = {false, SUP_DEBUG_STR("q10"), &se05_liga_cv2_q10_t0};
State se05_liga_cv2_q11 = {false, SUP_DEBUG_STR("q11"), &se05_liga_cv2_q11_t0};
State se05_liga_cv2_q12 = {false, SUP_DEBUG_STR("q12"), &se05_liga_cv2_q12_t0};
State se05_liga_cv2_q2 = {false, SUP_DEBUG_STR("q2"), &se05_liga_cv2_q2_t0};
State se05_liga_cv2_q3 = {false, SUP_DEBUG_STR("q3"), &se05_liga_cv2_q3_t0};
State se05_liga_cv2_q4 = {false, SUP_DEBUG_STR("q4"), &se05_liga_cv2_q4_t0};
State se05_liga_cv2_q5 = {false, SUP_DEBUG_STR("q5"), &se05_liga_cv2_q5_t0};
State se05_liga_cv2_q6 = {false, SUP_DEBUG_STR("q6"), &se05_liga_cv2_q6_t0};
State se05_liga_cv2_q7 = {false, SUP_DEBUG_STR("q7"), &se05_liga_cv2_q7_t0};
State se05_liga_cv2_q8 = {false, SUP_DEBUG_STR("q8"), &se05_liga_cv2_q8_t0};
State se05_liga_cv2_q9 = {false, SUP_DEBUG_STR("q9"), &se05_liga_cv2_q9_t0};

// Supervisor create
Supervisor se05_liga_cv2 = {&se05_liga_cv2_q0, &se05_liga_cv2_q0, NULL,  &se05_liga_cv2_s2_evt0, "se05_liga_cv2"};
