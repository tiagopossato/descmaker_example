#include <stdbool.h>
#include <stdlib.h>

#include "../event_handler/events.h"
#include "supE4.h"

// Supervisor specific instances
// alphabet create
Alphabet supE4_s2_evt0;
Alphabet supE4_ppg_item_evt1;
Alphabet supE4_ppg_on_evt2;
Alphabet supE4_ppg_off_evt3;

// Alphabet init
Alphabet supE4_s2_evt0 = {&s2, &supE4_ppg_item_evt1};
Alphabet supE4_ppg_item_evt1 = {&ppg_item, &supE4_ppg_on_evt2};
Alphabet supE4_ppg_on_evt2 = {&ppg_on, &supE4_ppg_off_evt3};
Alphabet supE4_ppg_off_evt3 = {&ppg_off, NULL};

// states create
State supE4_g5S0_S0_S0;
State supE4_g5S0_S0_S1;
State supE4_g5S0_S1_S0;
State supE4_g5S0_S1_S1;
State supE4_g5S1_S0_S0;
State supE4_g5S1_S0_S1;
State supE4_g5S1_S1_S0;
State supE4_g5S1_S1_S1;

// transitions create and init
Transition supE4_g5S0_S0_S0_t0;
Transition supE4_g5S0_S0_S0_t1;
Transition supE4_g5S0_S0_S0_t0 = {&s2, &supE4_g5S0_S0_S1, &supE4_g5S0_S0_S0_t1};
Transition supE4_g5S0_S0_S0_t1 = {&ppg_item, &supE4_g5S0_S1_S0, NULL};

Transition supE4_g5S0_S0_S1_t0;
Transition supE4_g5S0_S0_S1_t1;
Transition supE4_g5S0_S0_S1_t0 = {&s2, &supE4_g5S0_S0_S1, &supE4_g5S0_S0_S1_t1};
Transition supE4_g5S0_S0_S1_t1 = {&ppg_item, &supE4_g5S0_S1_S1, NULL};

Transition supE4_g5S0_S1_S0_t0;
Transition supE4_g5S0_S1_S0_t1;
Transition supE4_g5S0_S1_S0_t2;
Transition supE4_g5S0_S1_S0_t0 = {&ppg_item, &supE4_g5S0_S1_S0, &supE4_g5S0_S1_S0_t1};
Transition supE4_g5S0_S1_S0_t1 = {&s2, &supE4_g5S0_S1_S1, &supE4_g5S0_S1_S0_t2};
Transition supE4_g5S0_S1_S0_t2 = {&ppg_on, &supE4_g5S1_S0_S0, NULL};

Transition supE4_g5S0_S1_S1_t0;
Transition supE4_g5S0_S1_S1_t1;
Transition supE4_g5S0_S1_S1_t2;
Transition supE4_g5S0_S1_S1_t0 = {&ppg_item, &supE4_g5S0_S1_S1, &supE4_g5S0_S1_S1_t1};
Transition supE4_g5S0_S1_S1_t1 = {&s2, &supE4_g5S0_S1_S1, &supE4_g5S0_S1_S1_t2};
Transition supE4_g5S0_S1_S1_t2 = {&ppg_on, &supE4_g5S1_S0_S1, NULL};

Transition supE4_g5S1_S0_S0_t0;
Transition supE4_g5S1_S0_S0_t1;
Transition supE4_g5S1_S0_S0_t0 = {&s2, &supE4_g5S1_S0_S1, &supE4_g5S1_S0_S0_t1};
Transition supE4_g5S1_S0_S0_t1 = {&ppg_item, &supE4_g5S1_S1_S0, NULL};

Transition supE4_g5S1_S0_S1_t0;
Transition supE4_g5S1_S0_S1_t1;
Transition supE4_g5S1_S0_S1_t2;
Transition supE4_g5S1_S0_S1_t0 = {&ppg_off, &supE4_g5S0_S0_S0, &supE4_g5S1_S0_S1_t1};
Transition supE4_g5S1_S0_S1_t1 = {&s2, &supE4_g5S1_S0_S1, &supE4_g5S1_S0_S1_t2};
Transition supE4_g5S1_S0_S1_t2 = {&ppg_item, &supE4_g5S1_S1_S1, NULL};

Transition supE4_g5S1_S1_S0_t0;
Transition supE4_g5S1_S1_S0_t1;
Transition supE4_g5S1_S1_S0_t0 = {&ppg_item, &supE4_g5S1_S1_S0, &supE4_g5S1_S1_S0_t1};
Transition supE4_g5S1_S1_S0_t1 = {&s2, &supE4_g5S1_S1_S1, NULL};

Transition supE4_g5S1_S1_S1_t0;
Transition supE4_g5S1_S1_S1_t1;
Transition supE4_g5S1_S1_S1_t2;
Transition supE4_g5S1_S1_S1_t0 = {&ppg_off, &supE4_g5S0_S1_S0, &supE4_g5S1_S1_S1_t1};
Transition supE4_g5S1_S1_S1_t1 = {&ppg_item, &supE4_g5S1_S1_S1, &supE4_g5S1_S1_S1_t2};
Transition supE4_g5S1_S1_S1_t2 = {&s2, &supE4_g5S1_S1_S1, NULL};


// states init
State supE4_g5S0_S0_S0 = {true, SUP_DEBUG_STR("g5S0_S0_S0"), &supE4_g5S0_S0_S0_t0};
State supE4_g5S0_S0_S1 = {false, SUP_DEBUG_STR("g5S0_S0_S1"), &supE4_g5S0_S0_S1_t0};
State supE4_g5S0_S1_S0 = {false, SUP_DEBUG_STR("g5S0_S1_S0"), &supE4_g5S0_S1_S0_t0};
State supE4_g5S0_S1_S1 = {false, SUP_DEBUG_STR("g5S0_S1_S1"), &supE4_g5S0_S1_S1_t0};
State supE4_g5S1_S0_S0 = {false, SUP_DEBUG_STR("g5S1_S0_S0"), &supE4_g5S1_S0_S0_t0};
State supE4_g5S1_S0_S1 = {false, SUP_DEBUG_STR("g5S1_S0_S1"), &supE4_g5S1_S0_S1_t0};
State supE4_g5S1_S1_S0 = {false, SUP_DEBUG_STR("g5S1_S1_S0"), &supE4_g5S1_S1_S0_t0};
State supE4_g5S1_S1_S1 = {false, SUP_DEBUG_STR("g5S1_S1_S1"), &supE4_g5S1_S1_S1_t0};

// Supervisor create
Supervisor supE4 = {&supE4_g5S0_S0_S0, &supE4_g5S0_S0_S0, NULL,  &supE4_s2_evt0, "supE4"};
