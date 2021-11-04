#ifndef _CCHR_OUTPUT_H
#define _CCHR_OUTPUT_H

#include "cchr_csm.h"

#include "logical.h"

typedef struct {
  CSM_IDX_DEFINE(find_2_arg2);
  CSM_IDX_DEFINE(find_2_ra);
} lint_tag_t;

logical_header(int,lint_tag_t,lint)

#endif

