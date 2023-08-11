#include "supervisor_list.h"
#include "se02_bloqueia_braco.h"
#include "se01_desliga_cv1.h"
#include "se01_liga_cv1.h"
#include "se02_desce_braco.h"
#include "se02_sobre_braco.h"
#include "se03_retorna_braco.h"
#include "se03_avanca_braco.h"
#include "se04_pega_peca.h"
#include "se04_solta_peca.h"
#include "se05_desliga_cv2.h"
#include "se05_liga_cv2.h"

// make list with all supervisors
// first create all supervisors
extern SupervisorList se02_bloqueia_braco_list;
extern SupervisorList se01_desliga_cv1_list;
extern SupervisorList se01_liga_cv1_list;
extern SupervisorList se02_desce_braco_list;
extern SupervisorList se02_sobre_braco_list;
extern SupervisorList se03_retorna_braco_list;
extern SupervisorList se03_avanca_braco_list;
extern SupervisorList se04_pega_peca_list;
extern SupervisorList se04_solta_peca_list;
extern SupervisorList se05_desliga_cv2_list;
extern SupervisorList se05_liga_cv2_list;

// then recreate and linking them
SupervisorList sup_list = {&se02_bloqueia_braco, &se01_desliga_cv1_list};
SupervisorList se01_desliga_cv1_list = {&se01_desliga_cv1, &se01_liga_cv1_list};
SupervisorList se01_liga_cv1_list = {&se01_liga_cv1, &se02_desce_braco_list};
SupervisorList se02_desce_braco_list = {&se02_desce_braco, &se02_sobre_braco_list};
SupervisorList se02_sobre_braco_list = {&se02_sobre_braco, &se03_retorna_braco_list};
SupervisorList se03_retorna_braco_list = {&se03_retorna_braco, &se03_avanca_braco_list};
SupervisorList se03_avanca_braco_list = {&se03_avanca_braco, &se04_pega_peca_list};
SupervisorList se04_pega_peca_list = {&se04_pega_peca, &se04_solta_peca_list};
SupervisorList se04_solta_peca_list = {&se04_solta_peca, &se05_desliga_cv2_list};
SupervisorList se05_desliga_cv2_list = {&se05_desliga_cv2, &se05_liga_cv2_list};
SupervisorList se05_liga_cv2_list = {&se05_liga_cv2, NULL};
