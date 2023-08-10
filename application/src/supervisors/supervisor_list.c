#include "supervisor_list.h"
#include "supE5.h"
#include "supE4.h"
#include "supE3.h"
#include "supE2.h"
#include "supE1.h"

// make list with all supervisors
// first create all supervisors
extern SupervisorList supE5_list;
extern SupervisorList supE4_list;
extern SupervisorList supE3_list;
extern SupervisorList supE2_list;
extern SupervisorList supE1_list;

// then recreate and linking them
SupervisorList sup_list = {&supE5, &supE4_list};
SupervisorList supE4_list = {&supE4, &supE3_list};
SupervisorList supE3_list = {&supE3, &supE2_list};
SupervisorList supE2_list = {&supE2, &supE1_list};
SupervisorList supE1_list = {&supE1, NULL};
