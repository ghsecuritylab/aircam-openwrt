/* Test the `vmul_nu32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vmul_nu32 (void)
{
  uint32x2_t out_uint32x2_t;
  uint32x2_t arg0_uint32x2_t;
  uint32_t arg1_uint32_t;

  out_uint32x2_t = vmul_n_u32 (arg0_uint32x2_t, arg1_uint32_t);
}

/* { dg-final { scan-assembler "vmul\.i32\[ 	\]+\[dD\]\[0-9\]+, \[dD\]\[0-9\]+, \[dD\]\[0-9\]+\\\[\[0-9\]+\\\]!?\(\[ 	\]+@.*\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */