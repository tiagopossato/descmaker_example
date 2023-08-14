#include "supervisor_list.h"
#include "supE01_liga_cv1.h"
#include "supE02_desliga_cv1.h"
#include "supE03_bloqueia_braco.h"
#include "supE04_desce_braco.h"
#include "supE05_sobre_braco.h"
#include "supE06_avanca_braco.h"
#include "supE07_retorna_braco.h"
#include "supE08_pega_peca.h"
#include "supE09_solta_peca.h"
#include "supE10_liga_cv2.h"
#include "supE11_desliga_cv2.h"

// make list with all supervisors
// first create all supervisors
extern SupervisorList supE01_liga_cv1_list;
extern SupervisorList supE02_desliga_cv1_list;
extern SupervisorList supE03_bloqueia_braco_list;
extern SupervisorList supE04_desce_braco_list;
extern SupervisorList supE05_sobre_braco_list;
extern SupervisorList supE06_avanca_braco_list;
extern SupervisorList supE07_retorna_braco_list;
extern SupervisorList supE08_pega_peca_list;
extern SupervisorList supE09_solta_peca_list;
extern SupervisorList supE10_liga_cv2_list;
extern SupervisorList supE11_desliga_cv2_list;

// then recreate and linking them
SupervisorList sup_list = {&supE01_liga_cv1, &supE02_desliga_cv1_list};
SupervisorList supE02_desliga_cv1_list = {&supE02_desliga_cv1, &supE03_bloqueia_braco_list};
SupervisorList supE03_bloqueia_braco_list = {&supE03_bloqueia_braco, &supE04_desce_braco_list};
SupervisorList supE04_desce_braco_list = {&supE04_desce_braco, &supE05_sobre_braco_list};
SupervisorList supE05_sobre_braco_list = {&supE05_sobre_braco, &supE06_avanca_braco_list};
SupervisorList supE06_avanca_braco_list = {&supE06_avanca_braco, &supE07_retorna_braco_list};
SupervisorList supE07_retorna_braco_list = {&supE07_retorna_braco, &supE08_pega_peca_list};
SupervisorList supE08_pega_peca_list = {&supE08_pega_peca, &supE09_solta_peca_list};
SupervisorList supE09_solta_peca_list = {&supE09_solta_peca, &supE10_liga_cv2_list};
SupervisorList supE10_liga_cv2_list = {&supE10_liga_cv2, &supE11_desliga_cv2_list};
SupervisorList supE11_desliga_cv2_list = {&supE11_desliga_cv2, NULL};
