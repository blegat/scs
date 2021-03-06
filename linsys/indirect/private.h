#ifndef PRIV_H_GUARD
#define PRIV_H_GUARD

#include "glbopts.h"
#include "scs.h"
#include "cs.h"
#include <math.h>
#include "../common.h"
#include "linalg.h"

struct SCS_LIN_SYS_WORK {
  scs_float *p; /* cg iterate  */
  scs_float *r; /* cg residual */
  scs_float *Gp;
  scs_float *tmp;
  ScsMatrix *At;
  /* preconditioning */
  scs_float *z;
  scs_float *M;
  /* reporting */
  scs_int tot_cg_its;
  scs_float total_solve_time;
};

#endif
