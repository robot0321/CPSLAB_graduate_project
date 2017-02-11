//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: bsxfun.h
//
// MATLAB Coder version            : 2.8
// C/C++ source code generated on  : 21-Jul-2016 17:02:06
//
#ifndef __BSXFUN_H__
#define __BSXFUN_H__

// Include Files
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "fcn_track_ccdp_fast_types.h"

// Function Declarations
extern void b_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
                     emxArray_boolean_T *c);
extern void bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
                   emxArray_real_T *c);
extern void c_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
                     emxArray_real_T *c);

#endif

//
// File trailer for bsxfun.h
//
// [EOF]
//
