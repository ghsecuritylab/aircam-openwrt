/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "toplev.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char * const output_4[] = {
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %2, %1",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "#",
};

static const char *
output_5 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 687 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

   static const char * const asms[] = 
   {
     "add\t%0, %0, %2",
     "sub\t%0, %0, #%n2",
     "add\t%0, %1, %2",
     "add\t%0, %0, %2",
     "add\t%0, %0, %2",
     "add\t%0, %1, %2",
     "add\t%0, %1, %2",
     "#",
     "#"
   };
   if ((which_alternative == 2 || which_alternative == 6)
       && GET_CODE (operands[2]) == CONST_INT
       && INTVAL (operands[2]) < 0)
     return "sub\t%0, %1, #%n2";
   return asms[which_alternative];
  
}

static const char * const output_6[] = {
  "add%.\t%0, %1, %2",
  "sub%.\t%0, %1, #%n2",
};

static const char * const output_7[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
};

static const char * const output_9[] = {
  "sub%.\t%0, %1, %2",
  "add%.\t%0, %1, #%n2",
};

static const char * const output_10[] = {
  "add%.\t%0, %1, %2",
  "sub%.\t%0, %1, #%n2",
};

static const char * const output_11[] = {
  "add%.\t%0, %1, %2",
  "sub%.\t%0, %1, #%n2",
};

static const char * const output_12[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
};

static const char * const output_13[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
};

static const char * const output_20[] = {
  "add%d2\t%0, %1, #1",
  "mov%D2\t%0, %1\n\tadd%d2\t%0, %1, #1",
};

static const char * const output_29[] = {
  "rsb%?\t%0, %2, %1",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_30[] = {
  "sub%.\t%0, %1, %2",
  "rsb%.\t%0, %2, %1",
};

static const char * const output_31[] = {
  "sub%.\t%0, %1, %2",
  "rsb%.\t%0, %2, %1",
};

static const char * const output_32[] = {
  "sub%d2\t%0, %1, #1",
  "mov%D2\t%0, %1\n\tsub%d2\t%0, %1, #1",
};

static const char *
output_35 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1291 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  if (which_alternative < 2)
    return "mov\t%0, %1\n\tmul\t%0, %2";
  else
    return "mul\t%0, %2";
  
}

static const char * const output_36[] = {
  "mul\t%0, %2",
  "mul\t%0, %1",
  "mul\t%0, %1",
};

static const char * const output_69[] = {
  "and%?\t%0, %1, %2",
  "bic%?\t%0, %1, #%B2",
  "#",
};

static const char * const output_71[] = {
  "and%.\t%0, %1, %2",
  "bic%.\t%0, %1, #%B2",
};

static const char * const output_72[] = {
  "tst%?\t%0, %1",
  "bic%.\t%2, %0, #%B1",
};

static const char *
output_73 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2152 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  operands[1] = GEN_INT (((1 << INTVAL (operands[1])) - 1)
			 << INTVAL (operands[2]));
  output_asm_insn ("tst%?\t%0, %1", operands);
  return "";
  
}

static const char * const output_81[] = {
  "bic%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_89[] = {
  "orr%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_91[] = {
  "orr%?\t%0, %1, %2",
  "#",
};

static const char * const output_96[] = {
  "eor%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_105[] = {
  "cmp\t%1, %2\n\tmovlt\t%0, %2",
  "cmp\t%1, %2\n\tmovge\t%0, %1\n\tmovlt\t%0, %2",
};

static const char * const output_107[] = {
  "cmp\t%1, %2\n\tmovge\t%0, %2",
  "cmp\t%1, %2\n\tmovlt\t%0, %1\n\tmovge\t%0, %2",
};

static const char * const output_108[] = {
  "cmp\t%1, %2\n\tmovcc\t%0, %2",
  "cmp\t%1, %2\n\tmovcs\t%0, %1",
  "cmp\t%1, %2\n\tmovcs\t%0, %1\n\tmovcc\t%0, %2",
};

static const char * const output_109[] = {
  "cmp\t%1, %2\n\tmovcs\t%0, %2",
  "cmp\t%1, %2\n\tmovcc\t%0, %1",
  "cmp\t%1, %2\n\tmovcc\t%0, %1\n\tmovcs\t%0, %2",
};

static const char *
output_110 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3227 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  operands[3] = gen_rtx_fmt_ee (minmax_code (operands[3]), SImode,
				operands[1], operands[2]);
  output_asm_insn ("cmp\t%1, %2", operands);
  if (TARGET_THUMB2)
    output_asm_insn ("ite\t%d3", operands);
  output_asm_insn ("str%d3\t%1, %0", operands);
  output_asm_insn ("str%D3\t%2, %0", operands);
  return "";
  
}

static const char *
output_111 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3256 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    enum rtx_code code = GET_CODE (operands[4]);
    bool need_else;

    if (which_alternative != 0 || operands[3] != const0_rtx
        || (code != PLUS && code != MINUS && code != IOR && code != XOR))
      need_else = true;
    else
      need_else = false;

    operands[5] = gen_rtx_fmt_ee (minmax_code (operands[5]), SImode,
				  operands[2], operands[3]);
    output_asm_insn ("cmp\t%2, %3", operands);
    if (TARGET_THUMB2)
      {
	if (need_else)
	  output_asm_insn ("ite\t%d5", operands);
	else
	  output_asm_insn ("it\t%d5", operands);
      }
    output_asm_insn ("%i4%d5\t%0, %1, %2", operands);
    if (need_else)
      output_asm_insn ("%i4%D5\t%0, %1, %3", operands);
    return "";
  }
}

static const char *
output_119 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3518 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 0);
}

static const char *
output_120 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3535 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 1);
}

static const char *
output_121 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3551 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 1);
}

static const char * const output_131[] = {
  "cmp\t%0, #0\n\trsblt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\tsub%?\t%0, %0, %1, asr #31",
};

static const char * const output_133[] = {
  "cmp\t%0, #0\n\trsbgt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\trsb%?\t%0, %0, %1, asr #31",
};

static const char *
output_140 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4044 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

    if (REGNO (operands[1])
        != REGNO (operands[0]) + (WORDS_BIG_ENDIAN ? 1 : 0))
      output_asm_insn ("mov%?\t%Q0, %1", operands);
    return "mov%?\t%R0, #0";
  
}

static const char * const output_141[] = {
  "and%?\t%Q0, %1, #255\n\tmov%?\t%R0, #0",
  "ldr%(b%)\t%Q0, %1\n\tmov%?\t%R0, #0",
};

static const char *
output_142 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4086 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

    if (REGNO (operands[1])
        != REGNO (operands[0]) + (WORDS_BIG_ENDIAN ? 1 : 0))
      output_asm_insn ("mov%?\t%Q0, %1", operands);
    return "mov%?\t%R0, %Q0, asr #31";
  
}

static const char *
output_143 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4131 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  rtx mem;

  if (which_alternative == 0 && arm_arch6)
    return "uxth\t%0, %1";
  if (which_alternative == 0)
    return "#";

  mem = XEXP (operands[1], 0);

  if (GET_CODE (mem) == CONST)
    mem = XEXP (mem, 0);
    
  if (GET_CODE (mem) == LABEL_REF)
    return "ldr\t%0, %1";
    
  if (GET_CODE (mem) == PLUS)
    {
      rtx a = XEXP (mem, 0);
      rtx b = XEXP (mem, 1);

      /* This can happen due to bugs in reload.  */
      if (GET_CODE (a) == REG && REGNO (a) == SP_REGNUM)
        {
          rtx ops[2];
          ops[0] = operands[0];
          ops[1] = a;
      
          output_asm_insn ("mov	%0, %1", ops);

          XEXP (mem, 0) = operands[0];
       }

      else if (   GET_CODE (a) == LABEL_REF
	       && GET_CODE (b) == CONST_INT)
        return "ldr\t%0, %1";
    }
    
  return "ldrh\t%0, %1";
  
}

static const char * const output_144[] = {
  "#",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_145[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_147[] = {
  "#",
  "ldrb\t%0, %1",
};

static const char * const output_148[] = {
  "uxtb\t%0, %1",
  "ldrb\t%0, %1",
};

static const char * const output_149[] = {
  "#",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_150[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char *
output_153 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4415 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    rtx ops[4];
    rtx mem;

    if (which_alternative == 0 && !arm_arch6)
      return "#";
    if (which_alternative == 0)
      return "sxth\t%0, %1";

    mem = XEXP (operands[1], 0);

    /* This code used to try to use 'V', and fix the address only if it was
       offsettable, but this fails for e.g. REG+48 because 48 is outside the
       range of QImode offsets, and offsettable_address_p does a QImode
       address check.  */
       
    if (GET_CODE (mem) == CONST)
      mem = XEXP (mem, 0);
    
    if (GET_CODE (mem) == LABEL_REF)
      return "ldr\t%0, %1";
    
    if (GET_CODE (mem) == PLUS)
      {
        rtx a = XEXP (mem, 0);
        rtx b = XEXP (mem, 1);

        if (GET_CODE (a) == LABEL_REF
	    && GET_CODE (b) == CONST_INT)
          return "ldr\t%0, %1";

        if (GET_CODE (b) == REG)
          return "ldrsh\t%0, %1";
	  
        ops[1] = a;
        ops[2] = b;
      }
    else
      {
        ops[1] = mem;
        ops[2] = const0_rtx;
      }
      
    gcc_assert (GET_CODE (ops[1]) == REG);

    ops[0] = operands[0];
    if (reg_mentioned_p (operands[2], ops[1]))
      ops[3] = ops[0];
    else
      ops[3] = operands[2];
    output_asm_insn ("mov\t%3, %2\n\tldrsh\t%0, [%1, %3]", ops);
    return "";
  }
}

static const char * const output_154[] = {
  "#",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_155[] = {
  "sxth%?\t%0, %1",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_158[] = {
  "#",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_159[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char *
output_161 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4737 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"
{
  rtx addr;

  if (which_alternative == 0 && arm_arch6)
    return "sxtb\t%0, %1";
  if (which_alternative == 0)
    return "#";

  addr = XEXP (operands[1], 0);
  if (GET_CODE (addr) == PLUS
      && REG_P (XEXP (addr, 0)) && REG_P (XEXP (addr, 1)))
    return "ldrsb\t%0, %1";
      
  return "#";
}
}

static const char *
output_162 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4865 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    default:
      return output_move_double (operands);
    }
  
}

static const char *
output_163 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4984 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
  switch (which_alternative)
    {
    default:
    case 0:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "add\t%0,  %1,  #0\n\tadd\t%H0, %H1, #0";
      return   "add\t%H0, %H1, #0\n\tadd\t%0,  %1,  #0";
    case 1:
      return "mov\t%Q0, %1\n\tmov\t%R0, #0";
    case 2:
      operands[1] = GEN_INT (- INTVAL (operands[1]));
      return "mov\t%Q0, %1\n\tneg\t%Q0, %Q0\n\tasr\t%R0, %Q0, #31";
    case 3:
      return "ldmia\t%1, {%0, %H0}";
    case 4:
      return "stmia\t%0, {%1, %H1}";
    case 5:
      return thumb_load_double_from_address (operands);
    case 6:
      operands[2] = gen_rtx_MEM (SImode,
			     plus_constant (XEXP (operands[0], 0), 4));
      output_asm_insn ("str\t%1, %0\n\tstr\t%H1, %2", operands);
      return "";
    case 7:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "mov\t%0, %1\n\tmov\t%H0, %H1";
      return "mov\t%H0, %H1\n\tmov\t%0, %1";
    }
  }
}

static const char * const output_165[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
};

static const char * const output_166[] = {
  "mov	%0, %1",
  "mov	%0, %1",
  "#",
  "#",
  "ldmia\t%1, {%0}",
  "stmia\t%0, {%1}",
  "ldr\t%0, %1",
  "str\t%1, %0",
  "mov\t%0, %1",
};

static const char *
output_169 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5289 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				     INTVAL (operands[2]));
  return "add\t%0, %|pc";
  
}

static const char *
output_170 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5304 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "add%?\t%0, %|pc, %1";
  
}

static const char *
output_171 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5319 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "ldr%?\t%0, [%|pc, %1]\t\t@ tls_load_dot_plus_eight";
  
}

static const char * const output_172[] = {
  "cmp%?\t%0, #0",
  "sub%.\t%0, %1, #0",
};

static const char *
output_173 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5702 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0: return "add	%0, %1, #0";
    case 2: return "strh	%1, %0";
    case 3: return "mov	%0, %1";
    case 4: return "mov	%0, %1";
    case 5: return "mov	%0, %1";
    default: gcc_unreachable ();
    case 1:
      /* The stack pointer can end up being taken as an index register.
          Catch this case here and deal with it.  */
      if (GET_CODE (XEXP (operands[1], 0)) == PLUS
	  && GET_CODE (XEXP (XEXP (operands[1], 0), 0)) == REG
	  && REGNO    (XEXP (XEXP (operands[1], 0), 0)) == SP_REGNUM)
        {
	  rtx ops[2];
          ops[0] = operands[0];
          ops[1] = XEXP (XEXP (operands[1], 0), 0);
      
          output_asm_insn ("mov	%0, %1", ops);

          XEXP (XEXP (operands[1], 0), 0) = operands[0];
    
	}
      return "ldrh	%0, %1";
    }
}

static const char * const output_174[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_175[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
};

static const char * const output_176[] = {
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "ldr%(b%)\t%0, %1",
  "str%(b%)\t%1, %0",
};

static const char * const output_177[] = {
  "add\t%0, %1, #0",
  "ldrb\t%0, %1",
  "strb\t%1, %0",
  "mov\t%0, %1",
  "mov\t%0, %1",
  "mov\t%0, %1",
};

static const char *
output_178 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5995 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:	/* ARM register from memory */
      return "ldr%(h%)\t%0, %1\t%@ __fp16";
    case 1:	/* memory from ARM register */
      return "str%(h%)\t%1, %0\t%@ __fp16";
    case 2:	/* ARM register from ARM register */
      return "mov%?\t%0, %1\t%@ __fp16";
    case 3:	/* ARM register from constant */
      {
	REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

	REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw%?\t%0, %1", ops);
	else
	  output_asm_insn ("mov%?\t%0, %2\n\torr%?\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_179 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6040 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 1:
      {
	rtx addr;
	gcc_assert (GET_CODE(operands[1]) == MEM);
	addr = XEXP (operands[1], 0);
	if (GET_CODE (addr) == LABEL_REF
	    || (GET_CODE (addr) == CONST
		&& GET_CODE (XEXP (addr, 0)) == PLUS
		&& GET_CODE (XEXP (XEXP (addr, 0), 0)) == LABEL_REF
		&& GET_CODE (XEXP (XEXP (addr, 0), 1)) == CONST_INT))
	  {
	    /* Constant pool entry.  */
	    return "ldr\t%0, %1";
	  }
	return "ldrh\t%0, %1";
      }
    case 2: return "strh\t%1, %0";
    default: return "mov\t%0, %1";
    }
  
}

static const char * const output_180[] = {
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char * const output_181[] = {
  "add\t%0, %1, #0",
  "ldmia\t%1, {%0}",
  "stmia\t%0, {%1}",
  "ldr\t%0, %1",
  "str\t%1, %0",
  "mov\t%0, %1",
  "mov\t%0, %1",
};

static const char *
output_182 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6215 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    default:
      return output_move_double (operands);
    }
  
}

static const char *
output_183 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6242 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    default:
    case 0:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "add\t%0, %1, #0\n\tadd\t%H0, %H1, #0";
      return "add\t%H0, %H1, #0\n\tadd\t%0, %1, #0";
    case 1:
      return "ldmia\t%1, {%0, %H0}";
    case 2:
      return "stmia\t%0, {%1, %H1}";
    case 3:
      return thumb_load_double_from_address (operands);
    case 4:
      operands[2] = gen_rtx_MEM (SImode,
				 plus_constant (XEXP (operands[0], 0), 4));
      output_asm_insn ("str\t%1, %0\n\tstr\t%H1, %2", operands);
      return "";
    case 5:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "mov\t%0, %1\n\tmov\t%H0, %H1";
      return "mov\t%H0, %H1\n\tmov\t%0, %1";
    }
  
}

static const char *
output_198 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6612 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"
 return thumb_output_move_mem_multiple (3, operands);
}

static const char *
output_199 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6631 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"
 return thumb_output_move_mem_multiple (2, operands);
}

static const char *
output_200 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6781 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  rtx t = prev_nonnote_insn (insn);
  if (t != NULL_RTX
      && INSN_P (t)
      && INSN_CODE (t) == CODE_FOR_cbranchsi4_insn)
    {
      t = XEXP (SET_SRC (PATTERN (t)), 0);
      if (!rtx_equal_p (XEXP (t, 0), operands[1])
	  || !rtx_equal_p (XEXP (t, 1), operands[2]))
	t = NULL_RTX;
    }
  else
    t = NULL_RTX;
  if (t == NULL_RTX)
    output_asm_insn ("cmp\t%1, %2", operands);

  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char *
output_201 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6830 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  output_asm_insn ("add\t%0, %1, #%n2", operands);

  switch (get_attr_length (insn))
    {
    case 4:  return "b%d4\t%l3";
    case 6:  return "b%D4\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D4\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char *
output_202 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6868 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"
{
  if (which_alternative == 0)
    output_asm_insn ("cmp\t%0, #0", operands);
  else if (which_alternative == 1)
    output_asm_insn ("sub\t%0, %1, #0", operands);
  else
    {
      output_asm_insn ("cmp\t%1, #0", operands);
      if (which_alternative == 2)
	output_asm_insn ("mov\t%0, %1", operands);
      else
	output_asm_insn ("str\t%1, %0", operands);
    }
  switch (get_attr_length (insn) - ((which_alternative > 1) ? 2 : 0))
    {
    case 4:  return "b%d3\t%l2";
    case 6:  return "b%D3\t.LCB%=\n\tb\t%l2\t%@long jump\n.LCB%=:";
    default: return "b%D3\t.LCB%=\n\tbl\t%l2\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_203 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6968 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  output_asm_insn ("cmn\t%1, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char *
output_204 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7006 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
  rtx op[3];
  op[0] = operands[4];
  op[1] = operands[1];
  op[2] = GEN_INT (32 - 1 - INTVAL (operands[2]));

  output_asm_insn ("lsl\t%0, %1, %2", op);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_205 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7050 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
  rtx op[3];
  op[0] = operands[4];
  op[1] = operands[1];
  op[2] = GEN_INT (32 - INTVAL (operands[2]));

  output_asm_insn ("lsl\t%0, %1, %2", op);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_206 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7092 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
  output_asm_insn ("tst\t%0, %1", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d3\t%l2";
    case 6:  return "b%D3\t.LCB%=\n\tb\t%l2\t%@long jump\n.LCB%=:";
    default: return "b%D3\t.LCB%=\n\tbl\t%l2\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_207 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7132 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
  if (which_alternative == 0)
    output_asm_insn ("and\t%0, %3", operands);
  else if (which_alternative == 1)
    {
      output_asm_insn ("and\t%1, %3", operands);
      output_asm_insn ("mov\t%0, %1", operands);
    }
  else
    {
      output_asm_insn ("and\t%1, %3", operands);
      output_asm_insn ("str\t%1, %0", operands);
    }

  switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
    {
    case 4:  return "b%d5\t%l4";
    case 6:  return "b%D5\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
    default: return "b%D5\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_208 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7197 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
  output_asm_insn ("orr\t%0, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d4\t%l3";
    case 6:  return "b%D4\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D4\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_209 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7237 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
  if (which_alternative == 0)
    output_asm_insn ("orr\t%0, %3", operands);
  else if (which_alternative == 1)
    {
      output_asm_insn ("orr\t%1, %3", operands);
      output_asm_insn ("mov\t%0, %1", operands);
    }
  else
    {
      output_asm_insn ("orr\t%1, %3", operands);
      output_asm_insn ("str\t%1, %0", operands);
    }

  switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
    {
    case 4:  return "b%d5\t%l4";
    case 6:  return "b%D5\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
    default: return "b%D5\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_210 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7302 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
  output_asm_insn ("eor\t%0, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d4\t%l3";
    case 6:  return "b%D4\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D4\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_211 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7342 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
  if (which_alternative == 0)
    output_asm_insn ("eor\t%0, %3", operands);
  else if (which_alternative == 1)
    {
      output_asm_insn ("eor\t%1, %3", operands);
      output_asm_insn ("mov\t%0, %1", operands);
    }
  else
    {
      output_asm_insn ("eor\t%1, %3", operands);
      output_asm_insn ("str\t%1, %0", operands);
    }

  switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
    {
    case 4:  return "b%d5\t%l4";
    case 6:  return "b%D5\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
    default: return "b%D5\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_212 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7407 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
  output_asm_insn ("bic\t%0, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d4\t%l3";
    case 6:  return "b%D4\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D4\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_213 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7447 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
  if (which_alternative == 0)
    output_asm_insn ("bic\t%0, %3", operands);
  else if (which_alternative <= 2)
    {
      output_asm_insn ("bic\t%1, %3", operands);
      /* It's ok if OP0 is a lo-reg, even though the mov will set the
	 conditions again, since we're only testing for equality.  */
      output_asm_insn ("mov\t%0, %1", operands);
    }
  else
    {
      output_asm_insn ("bic\t%1, %3", operands);
      output_asm_insn ("str\t%1, %0", operands);
    }

  switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
    {
    case 4:  return "b%d5\t%l4";
    case 6:  return "b%D5\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
    default: return "b%D5\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_214 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7514 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

   {
     rtx cond[2];
     cond[0] = gen_rtx_fmt_ee ((GET_CODE (operands[3]) == NE
				? GEU : LTU),
			       VOIDmode, operands[2], const1_rtx);
     cond[1] = operands[4];

     if (which_alternative == 0)
       output_asm_insn ("sub\t%0, %2, #1", operands);
     else if (which_alternative == 1)
       {
	 /* We must provide an alternative for a hi reg because reload 
	    cannot handle output reloads on a jump instruction, but we
	    can't subtract into that.  Fortunately a mov from lo to hi
	    does not clobber the condition codes.  */
	 output_asm_insn ("sub\t%1, %2, #1", operands);
	 output_asm_insn ("mov\t%0, %1", operands);
       }
     else
       {
	 /* Similarly, but the target is memory.  */
	 output_asm_insn ("sub\t%1, %2, #1", operands);
	 output_asm_insn ("str\t%1, %0", operands);
       }

     switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
       {
	 case 4:
	   output_asm_insn ("b%d0\t%l1", cond);
	   return "";
	 case 6:
	   output_asm_insn ("b%D0\t.LCB%=", cond);
	   return "b\t%l4\t%@long jump\n.LCB%=:";
	 default:
	   output_asm_insn ("b%D0\t.LCB%=", cond);
	   return "bl\t%l4\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_215 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7625 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

   {
     rtx cond[3];

     cond[0] = (which_alternative < 2) ? operands[0] : operands[1];
     cond[1] = operands[2];
     cond[2] = operands[3];

     if (GET_CODE (cond[2]) == CONST_INT && INTVAL (cond[2]) < 0)
       output_asm_insn ("sub\t%0, %1, #%n2", cond);
     else
       output_asm_insn ("add\t%0, %1, %2", cond);

     if (which_alternative >= 2
	 && which_alternative < 4)
       output_asm_insn ("mov\t%0, %1", operands);
     else if (which_alternative >= 4)
       output_asm_insn ("str\t%1, %0", operands);

     switch (get_attr_length (insn) - ((which_alternative >= 2) ? 2 : 0))
       {
	 case 4:
	   return "b%d4\t%l5";
	 case 6:
	   return "b%D4\t.LCB%=\n\tb\t%l5\t%@long jump\n.LCB%=:";
	 default:
	   return "b%D4\t.LCB%=\n\tbl\t%l5\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_216 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7703 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

   {
     switch (which_alternative)
       {
       case 0:
	 output_asm_insn ("cmp\t%1, #%n2", operands);
	 break;
       case 1:
	 output_asm_insn ("cmn\t%1, %2", operands);
	 break;
       case 2:
	 if (INTVAL (operands[2]) < 0)
	   output_asm_insn ("sub\t%0, %1, %2", operands);
	 else
	   output_asm_insn ("add\t%0, %1, %2", operands);
	 break;
       case 3:
	 if (INTVAL (operands[2]) < 0)
	   output_asm_insn ("sub\t%0, %0, %2", operands);
	 else
	   output_asm_insn ("add\t%0, %0, %2", operands);
	 break;
       }

     switch (get_attr_length (insn))
       {
	 case 4:
	   return "b%d3\t%l4";
	 case 6:
	   return "b%D3\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
	 default:
	   return "b%D3\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_217 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7773 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

   {
     if (which_alternative == 0)
       output_asm_insn ("sub\t%0, %2, %3", operands);
     else if (which_alternative == 1)
       {
	 /* We must provide an alternative for a hi reg because reload 
	    cannot handle output reloads on a jump instruction, but we
	    can't subtract into that.  Fortunately a mov from lo to hi
	    does not clobber the condition codes.  */
	 output_asm_insn ("sub\t%1, %2, %3", operands);
	 output_asm_insn ("mov\t%0, %1", operands);
       }
     else
       {
	 /* Similarly, but the target is memory.  */
	 output_asm_insn ("sub\t%1, %2, %3", operands);
	 output_asm_insn ("str\t%1, %0", operands);
       }

     switch (get_attr_length (insn) - ((which_alternative != 0) ? 2 : 0))
       {
	 case 4:
	   return "b%d4\t%l5";
	 case 6:
	   return "b%D4\t.LCB%=\n\tb\t%l5\t%@long jump\n.LCB%=:";
	 default:
	   return "b%D4\t.LCB%=\n\tbl\t%l5\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_218 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7850 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  output_asm_insn ("cmp\t%1, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char * const output_219[] = {
  "cmp%?\t%0, %1",
  "cmn%?\t%0, #%n1",
};

static const char *
output_231 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8052 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
    {
      arm_ccfsm_state += 2;
      return "";
    }
  return "b%d1\t%l0";
  
}

static const char *
output_232 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8071 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
    {
      arm_ccfsm_state += 2;
      return "";
    }
  return "b%D1\t%l0";
  
}

static const char * const output_236[] = {
  "neg\t%0, %1\n\tadc\t%0, %0, %1",
  "neg\t%2, %1\n\tadc\t%0, %1, %2",
};

static const char * const output_241[] = {
  "mov%D3\t%0, %2",
  "mvn%D3\t%0, #%B2",
  "mov%d3\t%0, %1",
  "mvn%d3\t%0, #%B1",
  "mov%d3\t%0, %1\n\tmov%D3\t%0, %2",
  "mov%d3\t%0, %1\n\tmvn%D3\t%0, #%B2",
  "mvn%d3\t%0, #%B1\n\tmov%D3\t%0, %2",
  "mvn%d3\t%0, #%B1\n\tmvn%D3\t%0, #%B2",
};

static const char * const output_242[] = {
  "mov%D3\t%0, %2",
  "mov%d3\t%0, %1",
};

static const char *
output_243 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8517 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return "b%?\t%l0";
  }
  
}

static const char *
output_244 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8534 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  if (get_attr_length (insn) == 2)
    return "b\t%l0";
  return "bl\t%l0\t%@ far jump";
  
}

static const char *
output_246 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8603 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  return output_call (operands);
  
}

static const char *
output_247 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8622 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  return output_call_mem (operands);
  
}

static const char *
output_249 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8646 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    if (!TARGET_CALLER_INTERWORKING)
      return thumb_call_via_reg (operands[0]);
    else if (operands[1] == const0_rtx)
      return "bl\t%__interwork_call_via_%0";
    else if (frame_pointer_needed)
      return "bl\t%__interwork_r7_call_via_%0";
    else
      return "bl\t%__interwork_r11_call_via_%0";
  }
}

static const char *
output_251 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8716 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  return output_call (&operands[1]);
  
}

static const char *
output_252 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8732 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  return output_call_mem (&operands[1]);
  
}

static const char *
output_254 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8758 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    if (!TARGET_CALLER_INTERWORKING)
      return thumb_call_via_reg (operands[1]);
    else if (operands[2] == const0_rtx)
      return "bl\t%__interwork_call_via_%1";
    else if (frame_pointer_needed)
      return "bl\t%__interwork_r7_call_via_%1";
    else
      return "bl\t%__interwork_r11_call_via_%1";
  }
}

static const char *
output_255 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8783 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    return NEED_PLT_RELOC ? "bl%?\t%a0(PLT)" : "bl%?\t%a0";
  }
}

static const char *
output_256 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8799 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    return NEED_PLT_RELOC ? "bl%?\t%a1(PLT)" : "bl%?\t%a1";
  }
}

static const char *
output_259 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8867 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  return NEED_PLT_RELOC ? "b%?\t%a0(PLT)" : "b%?\t%a0";
  
}

static const char *
output_260 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8880 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  return NEED_PLT_RELOC ? "b%?\t%a1(PLT)" : "b%?\t%a1";
  
}

static const char *
output_261 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8895 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, TRUE, FALSE);
  }
}

static const char *
output_262 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8916 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], TRUE, FALSE);
  }
}

static const char *
output_263 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8937 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], TRUE, TRUE);
  }
}

static const char *
output_266 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9159 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

    if (flag_pic)
      return "cmp\t%0, %1\n\taddls\t%|pc, %|pc, %0, asl #2\n\tb\t%l3";
    return   "cmp\t%0, %1\n\tldrls\t%|pc, [%|pc, %0, asl #2]\n\tb\t%l3";
  
}

static const char *
output_267 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9195 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"
 return thumb1_output_casesi(operands);
}

static const char *
output_271 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9252 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  if (TARGET_UNIFIED_ASM)
    return "nop";
  if (TARGET_ARM)
    return "mov%?\t%|r0, %|r0\t%@ nop";
  return  "mov\tr8, r8";
  
}

static const char * const output_279[] = {
  "orr%d2\t%0, %1, #1",
  "mov%D2\t%0, %1\n\torr%d2\t%0, %1, #1",
};

static const char *
output_281 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9540 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

    if (GET_CODE (operands[3]) == NE)
      {
        if (which_alternative != 1)
	  output_asm_insn ("mov%D4\t%0, %2", operands);
        if (which_alternative != 0)
	  output_asm_insn ("mov%d4\t%0, %1", operands);
        return "";
      }
    if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    if (which_alternative != 1)
      output_asm_insn ("mov%d4\t%0, %2", operands);
    return "";
  
}

static const char *
output_282 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9568 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

    if (GET_CODE (operands[4]) == LT && operands[3] == const0_rtx)
      return "%i5\t%0, %1, %2, lsr #31";

    output_asm_insn ("cmp\t%2, %3", operands);
    if (GET_CODE (operands[5]) == AND)
      output_asm_insn ("mov%D4\t%0, #0", operands);
    else if (GET_CODE (operands[5]) == MINUS)
      output_asm_insn ("rsb%D4\t%0, %1, #0", operands);
    else if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    return "%i5%d4\t%0, %1, #1";
  
}

static const char *
output_283 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9593 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

    output_asm_insn ("cmp\t%2, %3", operands);
    if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    return "sub%d4\t%0, %1, #1";
  
}

static const char *
output_284 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9617 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    static const char * const opcodes[4][2] =
    {
      {"cmp\t%2, %3\n\tcmp%d5\t%0, %1",
       "cmp\t%0, %1\n\tcmp%d4\t%2, %3"},
      {"cmp\t%2, %3\n\tcmn%d5\t%0, #%n1",
       "cmn\t%0, #%n1\n\tcmp%d4\t%2, %3"},
      {"cmn\t%2, #%n3\n\tcmp%d5\t%0, %1",
       "cmp\t%0, %1\n\tcmn%d4\t%2, #%n3"},
      {"cmn\t%2, #%n3\n\tcmn%d5\t%0, #%n1",
       "cmn\t%0, #%n1\n\tcmn%d4\t%2, #%n3"}
    };
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    return opcodes[which_alternative][swap];
  }
}

static const char *
output_285 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9652 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    static const char * const opcodes[4][2] =
    {
      {"cmp\t%0, %1\n\tcmp%d4\t%2, %3",
       "cmp\t%2, %3\n\tcmp%D5\t%0, %1"},
      {"cmn\t%0, #%n1\n\tcmp%d4\t%2, %3",
       "cmp\t%2, %3\n\tcmn%D5\t%0, #%n1"},
      {"cmp\t%0, %1\n\tcmn%d4\t%2, #%n3",
       "cmn\t%2, #%n3\n\tcmp%D5\t%0, %1"},
      {"cmn\t%0, #%n1\n\tcmn%d4\t%2, #%n3",
       "cmn\t%2, #%n3\n\tcmn%D5\t%0, #%n1"}
    };
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]),
			      reverse_condition (GET_CODE (operands[4])));

    return opcodes[which_alternative][swap];
  }
}

static const char *
output_286 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9687 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    static const char *const opcodes[4][2] =
    {
      {"cmp\t%2, %3\n\tcmp%d5\t%0, %1",
       "cmp\t%0, %1\n\tcmp%d4\t%2, %3"},
      {"cmp\t%2, %3\n\tcmn%d5\t%0, #%n1",
       "cmn\t%0, #%n1\n\tcmp%d4\t%2, %3"},
      {"cmn\t%2, #%n3\n\tcmp%d5\t%0, %1",
       "cmp\t%0, %1\n\tcmn%d4\t%2, #%n3"},
      {"cmn\t%2, #%n3\n\tcmn%d5\t%0, #%n1",
       "cmn\t%0, #%n1\n\tcmn%d4\t%2, #%n3"}
    };
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    return opcodes[which_alternative][swap];
  }
}

static const char *
output_287 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9722 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

{
  static const char *const opcodes[4][2] =
  {
    {"cmp\t%0, %1\n\tcmp%D4\t%2, %3",
     "cmp\t%2, %3\n\tcmp%D5\t%0, %1"},
    {"cmn\t%0, #%n1\n\tcmp%D4\t%2, %3",
     "cmp\t%2, %3\n\tcmn%D5\t%0, #%n1"},
    {"cmp\t%0, %1\n\tcmn%D4\t%2, #%n3",
     "cmn\t%2, #%n3\n\tcmp%D5\t%0, %1"},
    {"cmn\t%0, #%n1\n\tcmn%D4\t%2, #%n3",
     "cmn\t%2, #%n3\n\tcmn%D5\t%0, #%n1"}
  };
  int swap =
    comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

  return opcodes[which_alternative][swap];
}

}

static const char *
output_293 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9939 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  if (GET_CODE (operands[3]) == LT && operands[2] == const0_rtx)
    return "mov\t%0, %1, asr #31";

  if (GET_CODE (operands[3]) == NE)
    return "subs\t%0, %1, %2\n\tmvnne\t%0, #0";

  output_asm_insn ("cmp\t%1, %2", operands);
  output_asm_insn ("mov%D3\t%0, #0", operands);
  return "mvn%d3\t%0, #0";
  
}

static const char *
output_294 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9964 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  if (GET_CODE (operands[5]) == LT
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && GET_CODE (operands[1]) == REG)
	{
	  if (operands[2] == const0_rtx)
	    return "and\t%0, %1, %3, asr #31";
	  return "ands\t%0, %1, %3, asr #32\n\tmovcc\t%0, %2";
	}
      else if (which_alternative != 0 && GET_CODE (operands[2]) == REG)
	{
	  if (operands[1] == const0_rtx)
	    return "bic\t%0, %2, %3, asr #31";
	  return "bics\t%0, %2, %3, asr #32\n\tmovcs\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }

  if (GET_CODE (operands[5]) == GE
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && GET_CODE (operands[1]) == REG)
	{
	  if (operands[2] == const0_rtx)
	    return "bic\t%0, %1, %3, asr #31";
	  return "bics\t%0, %1, %3, asr #32\n\tmovcs\t%0, %2";
	}
      else if (which_alternative != 0 && GET_CODE (operands[2]) == REG)
	{
	  if (operands[1] == const0_rtx)
	    return "and\t%0, %2, %3, asr #31";
	  return "ands\t%0, %2, %3, asr #32\n\tmovcc\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }
  if (GET_CODE (operands[4]) == CONST_INT
      && !const_ok_for_arm (INTVAL (operands[4])))
    output_asm_insn ("cmn\t%3, #%n4", operands);
  else
    output_asm_insn ("cmp\t%3, %4", operands);
  if (which_alternative != 0)
    output_asm_insn ("mov%d5\t%0, %1", operands);
  if (which_alternative != 1)
    output_asm_insn ("mov%D5\t%0, %2", operands);
  return "";
  
}

static const char * const output_296[] = {
  "add%d4\t%0, %2, %3",
  "sub%d4\t%0, %2, #%n3",
  "add%d4\t%0, %2, %3\n\tmov%D4\t%0, %1",
  "sub%d4\t%0, %2, #%n3\n\tmov%D4\t%0, %1",
};

static const char * const output_298[] = {
  "add%D4\t%0, %2, %3",
  "sub%D4\t%0, %2, #%n3",
  "add%D4\t%0, %2, %3\n\tmov%d4\t%0, %1",
  "sub%D4\t%0, %2, #%n3\n\tmov%d4\t%0, %1",
};

static const char *
output_301 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10136 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  /* If we have an operation where (op x 0) is the identity operation and
     the conditional operator is LT or GE and we are comparing against zero and
     everything is in registers then we can do this in two instructions.  */
  if (operands[3] == const0_rtx
      && GET_CODE (operands[7]) != AND
      && GET_CODE (operands[5]) == REG
      && GET_CODE (operands[1]) == REG 
      && REGNO (operands[1]) == REGNO (operands[4])
      && REGNO (operands[4]) != REGNO (operands[0]))
    {
      if (GET_CODE (operands[6]) == LT)
	return "and\t%0, %5, %2, asr #31\n\t%I7\t%0, %4, %0";
      else if (GET_CODE (operands[6]) == GE)
	return "bic\t%0, %5, %2, asr #31\n\t%I7\t%0, %4, %0";
    }
  if (GET_CODE (operands[3]) == CONST_INT
      && !const_ok_for_arm (INTVAL (operands[3])))
    output_asm_insn ("cmn\t%2, #%n3", operands);
  else
    output_asm_insn ("cmp\t%2, %3", operands);
  output_asm_insn ("%I7%d6\t%0, %4, %5", operands);
  if (which_alternative != 0)
    return "mov%D6\t%0, %1";
  return "";
  
}

static const char * const output_302[] = {
  "%I5%d4\t%0, %2, %3",
  "%I5%d4\t%0, %2, %3\n\tmov%D4\t%0, %1",
};

static const char *
output_303 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10194 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  /* If we have an operation where (op x 0) is the identity operation and
     the conditional operator is LT or GE and we are comparing against zero and
     everything is in registers then we can do this in two instructions */
  if (operands[5] == const0_rtx
      && GET_CODE (operands[7]) != AND
      && GET_CODE (operands[3]) == REG
      && GET_CODE (operands[1]) == REG 
      && REGNO (operands[1]) == REGNO (operands[2])
      && REGNO (operands[2]) != REGNO (operands[0]))
    {
      if (GET_CODE (operands[6]) == GE)
	return "and\t%0, %3, %4, asr #31\n\t%I7\t%0, %2, %0";
      else if (GET_CODE (operands[6]) == LT)
	return "bic\t%0, %3, %4, asr #31\n\t%I7\t%0, %2, %0";
    }

  if (GET_CODE (operands[5]) == CONST_INT
      && !const_ok_for_arm (INTVAL (operands[5])))
    output_asm_insn ("cmn\t%4, #%n5", operands);
  else
    output_asm_insn ("cmp\t%4, %5", operands);

  if (which_alternative != 0)
    output_asm_insn ("mov%d6\t%0, %1", operands);
  return "%I7%D6\t%0, %2, %3";
  
}

static const char * const output_304[] = {
  "%I5%D4\t%0, %2, %3",
  "%I5%D4\t%0, %2, %3\n\tmov%d4\t%0, %1",
};

static const char * const output_306[] = {
  "mvn%D4\t%0, %2",
  "mov%d4\t%0, %1\n\tmvn%D4\t%0, %2",
  "mvn%d4\t%0, #%B1\n\tmvn%D4\t%0, %2",
};

static const char * const output_308[] = {
  "mvn%d4\t%0, %2",
  "mov%D4\t%0, %1\n\tmvn%d4\t%0, %2",
  "mvn%D4\t%0, #%B1\n\tmvn%d4\t%0, %2",
};

static const char * const output_310[] = {
  "mov%d5\t%0, %2%S4",
  "mov%D5\t%0, %1\n\tmov%d5\t%0, %2%S4",
  "mvn%D5\t%0, #%B1\n\tmov%d5\t%0, %2%S4",
};

static const char * const output_312[] = {
  "mov%D5\t%0, %2%S4",
  "mov%d5\t%0, %1\n\tmov%D5\t%0, %2%S4",
  "mvn%d5\t%0, #%B1\n\tmov%D5\t%0, %2%S4",
};

static const char * const output_320[] = {
  "rsb%d4\t%0, %2, #0",
  "mov%D4\t%0, %1\n\trsb%d4\t%0, %2, #0",
  "mvn%D4\t%0, #%B1\n\trsb%d4\t%0, %2, #0",
};

static const char * const output_322[] = {
  "rsb%D4\t%0, %2, #0",
  "mov%d4\t%0, %1\n\trsb%D4\t%0, %2, #0",
  "mvn%d4\t%0, #%B1\n\trsb%D4\t%0, %2, #0",
};

static const char *
output_323 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10560 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    rtx ldm[3];
    rtx arith[4];
    rtx base_reg;
    HOST_WIDE_INT val1 = 0, val2 = 0;

    if (REGNO (operands[0]) > REGNO (operands[4]))
      {
	ldm[1] = operands[4];
	ldm[2] = operands[0];
      }
    else
      {
	ldm[1] = operands[0];
	ldm[2] = operands[4];
      }

    base_reg = XEXP (operands[2], 0);

    if (!REG_P (base_reg))
      {
	val1 = INTVAL (XEXP (base_reg, 1));
	base_reg = XEXP (base_reg, 0);
      }

    if (!REG_P (XEXP (operands[3], 0)))
      val2 = INTVAL (XEXP (XEXP (operands[3], 0), 1));

    arith[0] = operands[0];
    arith[3] = operands[1];

    if (val1 < val2)
      {
	arith[1] = ldm[1];
	arith[2] = ldm[2];
      }
    else
      {
	arith[1] = ldm[2];
	arith[2] = ldm[1];
      }

    ldm[0] = base_reg;
    if (val1 !=0 && val2 != 0)
      {
	rtx ops[3];

	if (val1 == 4 || val2 == 4)
	  /* Other val must be 8, since we know they are adjacent and neither
	     is zero.  */
	  output_asm_insn ("ldm%(ib%)\t%0, {%1, %2}", ldm);
	else if (const_ok_for_arm (val1) || const_ok_for_arm (-val1))
	  {
	    ldm[0] = ops[0] = operands[4];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_add_immediate (ops);
	    if (val1 < val2)
	      output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	    else
	      output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	  }
	else
	  {
	    /* Offset is out of range for a single add, so use two ldr.  */
	    ops[0] = ldm[1];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	    ops[0] = ldm[2];
	    ops[2] = GEN_INT (val2);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	  }
      }
    else if (val1 != 0)
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
      }
    else
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
      }
    output_asm_insn ("%I3%?\t%0, %1, %2", arith);
    return "";
  }
}

static const char *
output_324 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10829 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  if (use_return_insn (FALSE, next_nonnote_insn (insn)))
    return output_return_instruction (const_true_rtx, FALSE, FALSE);
  return arm_output_epilogue (next_nonnote_insn (insn));
  
}

static const char *
output_325 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10846 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  if (TARGET_32BIT)
    return arm_output_epilogue (NULL);
  else /* TARGET_THUMB1 */
    return thumb_unexpanded_epilogue ();
  
}

static const char * const output_326[] = {
  "mvn%D4\t%0, %2",
  "mov%d4\t%0, %1\n\tmvn%D4\t%0, %2",
};

static const char *
output_327 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11028 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

    operands[2] = GEN_INT (1 << INTVAL (operands[2]));
    output_asm_insn ("ands\t%0, %1, %2", operands);
    return "mvnne\t%0, #0";
  
}

static const char *
output_328 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11045 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

    operands[2] = GEN_INT (1 << INTVAL (operands[2]));
    output_asm_insn ("tst\t%1, %2", operands);
    output_asm_insn ("mvneq\t%0, #0", operands);
    return "movne\t%0, #0";
  
}

static const char *
output_329 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11065 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    int num_saves = XVECLEN (operands[2], 0);
     
    /* For the StrongARM at least it is faster to
       use STR to store only a single register.
       In Thumb mode always use push, and the assembler will pick
       something appropriate.  */
    if (num_saves == 1 && TARGET_ARM)
      output_asm_insn ("str\t%1, [%m0, #-4]!", operands);
    else
      {
	int i;
	char pattern[100];

	if (TARGET_ARM)
	    strcpy (pattern, "stmfd\t%m0!, {%1");
	else
	    strcpy (pattern, "push\t{%1");

	for (i = 1; i < num_saves; i++)
	  {
	    strcat (pattern, ", %|");
	    strcat (pattern,
		    reg_names[REGNO (XEXP (XVECEXP (operands[2], 0, i), 0))]);
	  }

	strcat (pattern, "}");
	output_asm_insn (pattern, operands);
      }

    return "";
  }
}

static const char *
output_331 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11118 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    char pattern[100];

    sprintf (pattern, "sfmfd\t%%1, %d, [%%m0]!", XVECLEN (operands[2], 0));
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_332 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11134 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  assemble_align (32);
  return "";
  
}

static const char *
output_333 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11143 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  assemble_align (64);
  return "";
  
}

static const char *
output_334 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11152 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  assemble_align (128);
  return "";
  
}

static const char *
output_335 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11161 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  assemble_align (256);
  return "";
  
}

static const char *
output_336 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11170 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  making_const_table = FALSE;
  return "";
  
}

static const char *
output_337 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11179 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  making_const_table = TRUE;
  assemble_integer (operands[0], 1, BITS_PER_WORD, 1);
  assemble_zeros (3);
  return "";
  
}

static const char *
output_338 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11191 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  making_const_table = TRUE;
  gcc_assert (GET_MODE_CLASS (GET_MODE (operands[0])) != MODE_FLOAT);
  assemble_integer (operands[0], 2, BITS_PER_WORD, 1);
  assemble_zeros (2);
  return "";
  
}

static const char *
output_339 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11204 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    rtx x = operands[0];
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (x)))
      {
      case MODE_FLOAT:
 	if (GET_MODE (x) == HFmode)
 	  arm_emit_fp16_const (x);
 	else
 	  {
 	    REAL_VALUE_TYPE r;
 	    REAL_VALUE_FROM_CONST_DOUBLE (r, x);
 	    assemble_real (r, GET_MODE (x), BITS_PER_WORD);
 	  }
 	break;
      default:
	/* XXX: Sometimes gcc does something really dumb and ends up with
	   a HIGH in a constant pool entry, usually because it's trying to
	   load into a VFP register.  We know this will always be used in
	   combination with a LO_SUM which ignores the high bits, so just
	   strip off the HIGH.  */
	if (GET_CODE (x) == HIGH)
	  x = XEXP (x, 0);
        assemble_integer (x, 4, BITS_PER_WORD, 1);
	mark_symbol_refs_as_used (x);
        break;
      }
    return "";
  }
}

static const char *
output_340 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11240 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (operands[0])))
      {
       case MODE_FLOAT:
        {
          REAL_VALUE_TYPE r;
          REAL_VALUE_FROM_CONST_DOUBLE (r, operands[0]);
          assemble_real (r, GET_MODE (operands[0]), BITS_PER_WORD);
          break;
        }
      default:
        assemble_integer (operands[0], 8, BITS_PER_WORD, 1);
        break;
      }
    return "";
  }
}

static const char *
output_341 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11264 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (operands[0])))
      {
       case MODE_FLOAT:
        {
          REAL_VALUE_TYPE r;
          REAL_VALUE_FROM_CONST_DOUBLE (r, operands[0]);
          assemble_real (r, GET_MODE (operands[0]), BITS_PER_WORD);
          break;
        }
      default:
        assemble_integer (operands[0], 16, BITS_PER_WORD, 1);
        break;
      }
    return "";
  }
}

static const char * const output_354[] = {
  "adf%?s\t%0, %1, %2",
  "suf%?s\t%0, %1, #%N2",
};

static const char * const output_355[] = {
  "adf%?d\t%0, %1, %2",
  "suf%?d\t%0, %1, #%N2",
};

static const char * const output_356[] = {
  "adf%?d\t%0, %1, %2",
  "suf%?d\t%0, %1, #%N2",
};

static const char * const output_359[] = {
  "suf%?s\t%0, %1, %2",
  "rsf%?s\t%0, %2, %1",
};

static const char * const output_360[] = {
  "suf%?d\t%0, %1, %2",
  "rsf%?d\t%0, %2, %1",
};

static const char * const output_362[] = {
  "suf%?d\t%0, %1, %2",
  "rsf%?d\t%0, %2, %1",
};

static const char * const output_369[] = {
  "fdv%?s\t%0, %1, %2",
  "frd%?s\t%0, %2, %1",
};

static const char * const output_370[] = {
  "dvf%?d\t%0, %1, %2",
  "rdf%?d\t%0, %2, %1",
};

static const char * const output_394[] = {
  "mvf%?s\t%0, %1",
  "mnf%?s\t%0, #%N1",
  "ldf%?s\t%0, %1",
  "stf%?s\t%1, %0",
  "str%?\t%1, [%|sp, #-4]!\n\tldf%?s\t%0, [%|sp], #4",
  "stf%?s\t%1, [%|sp, #-4]!\n\tldr%?\t%0, [%|sp], #4",
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_395 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 562 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md"

  {
  switch (which_alternative)
    {
    default:
    case 0: return "ldm%(ia%)\t%m1, %M0\t%@ double";
    case 1: return "stm%(ia%)\t%m0, %M1\t%@ double";
    case 2: return "#";
    case 3: case 4: return output_move_double (operands);
    case 5: return "mvf%?d\t%0, %1";
    case 6: return "mnf%?d\t%0, #%N1";
    case 7: return "ldf%?d\t%0, %1";
    case 8: return "stf%?d\t%1, %0";
    case 9: return output_mov_double_fpa_from_arm (operands);
    case 10: return output_mov_double_arm_from_fpa (operands);
    }
  }
  
}

static const char *
output_396 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 597 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md"

  switch (which_alternative)
    {
    default:
    case 0: return "mvf%?e\t%0, %1";
    case 1: if (TARGET_FPA_EMU2)
	      return "ldf%?e\t%0, %1";
	    return "lfm%?\t%0, 1, %1";
    case 2: if (TARGET_FPA_EMU2)
	      return "stf%?e\t%1, %0";
	    return "sfm%?\t%1, 1, %0";
    }
  
}

static const char * const output_397[] = {
  "mvf%?s\t%0, %1",
  "mnf%?s\t%0, #%N1",
  "ldf%?s\t%0, %1",
  "stf%?s\t%1, %0",
  "str%?\t%1, [%|sp, #-4]!\n\tldf%?s\t%0, [%|sp], #4",
  "stf%?s\t%1, [%|sp, #-4]!\n\tldr%?\t%0, [%|sp], #4",
  "mov%?\t%0, %1 @bar",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_398 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 653 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md"

  {
  switch (which_alternative)
    {
    default:
    case 0: return "ldm%(ia%)\t%m1, %M0\t%@ double";
    case 1: return "stm%(ia%)\t%m0, %M1\t%@ double";
    case 2: case 3: case 4: return output_move_double (operands);
    case 5: return "mvf%?d\t%0, %1";
    case 6: return "mnf%?d\t%0, #%N1";
    case 7: return "ldf%?d\t%0, %1";
    case 8: return "stf%?d\t%1, %0";
    case 9: return output_mov_double_fpa_from_arm (operands);
    case 10: return output_mov_double_arm_from_fpa (operands);
    }
  }
  
}

static const char *
output_399 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 687 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md"

  switch (which_alternative)
    {
    default:
    case 0: return "mvf%?e\t%0, %1";
    case 1: return "mnf%?e\t%0, #%N1";
    case 2: return "ldf%?e\t%0, %1";
    case 3: return "stf%?e\t%1, %0";
    case 4: return output_mov_long_double_fpa_from_arm (operands);
    case 5: return output_mov_long_double_arm_from_fpa (operands);
    case 6: return output_mov_long_double_arm_from_arm (operands);
    }
  
}

static const char * const output_400[] = {
  "cmf%?\t%0, %1",
  "cnf%?\t%0, #%N1",
};

static const char * const output_401[] = {
  "cmf%?\t%0, %1",
  "cnf%?\t%0, #%N1",
};

static const char * const output_402[] = {
  "cmf%?\t%0, %1",
  "cnf%?\t%0, #%N1",
};

static const char * const output_404[] = {
  "cmf%?e\t%0, %1",
  "cnf%?e\t%0, #%N1",
};

static const char * const output_405[] = {
  "cmf%?e\t%0, %1",
  "cnf%?e\t%0, #%N1",
};

static const char * const output_406[] = {
  "cmf%?e\t%0, %1",
  "cnf%?e\t%0, #%N1",
};

static const char * const output_408[] = {
  "mvf%D3s\t%0, %2",
  "mnf%D3s\t%0, #%N2",
  "mvf%d3s\t%0, %1",
  "mnf%d3s\t%0, #%N1",
  "mvf%d3s\t%0, %1\n\tmvf%D3s\t%0, %2",
  "mvf%d3s\t%0, %1\n\tmnf%D3s\t%0, #%N2",
  "mnf%d3s\t%0, #%N1\n\tmvf%D3s\t%0, %2",
  "mnf%d3s\t%0, #%N1\n\tmnf%D3s\t%0, #%N2",
};

static const char * const output_409[] = {
  "mvf%D3d\t%0, %2",
  "mnf%D3d\t%0, #%N2",
  "mvf%d3d\t%0, %1",
  "mnf%d3d\t%0, #%N1",
  "mvf%d3d\t%0, %1\n\tmvf%D3d\t%0, %2",
  "mvf%d3d\t%0, %1\n\tmnf%D3d\t%0, #%N2",
  "mnf%d3d\t%0, #%N1\n\tmvf%D3d\t%0, %2",
  "mnf%d3d\t%0, #%N1\n\tmnf%D3d\t%0, #%N2",
};

static const char * const output_410[] = {
  "it\t%D3\n\tmvf%D3s\t%0, %2",
  "it\t%D3\n\tmnf%D3s\t%0, #%N2",
  "it\t%d3\n\tmvf%d3s\t%0, %1",
  "it\t%d3\n\tmnf%d3s\t%0, #%N1",
  "ite\t%d3\n\tmvf%d3s\t%0, %1\n\tmvf%D3s\t%0, %2",
  "ite\t%d3\n\tmvf%d3s\t%0, %1\n\tmnf%D3s\t%0, #%N2",
  "ite\t%d3\n\tmnf%d3s\t%0, #%N1\n\tmvf%D3s\t%0, %2",
  "ite\t%d3\n\tmnf%d3s\t%0, #%N1\n\tmnf%D3s\t%0, #%N2",
};

static const char * const output_411[] = {
  "it\t%D3\n\tmvf%D3d\t%0, %2",
  "it\t%D3\n\tmnf%D3d\t%0, #%N2",
  "it\t%d3\n\tmvf%d3d\t%0, %1",
  "it\t%d3\n\tmnf%d3d\t%0, #%N1",
  "ite\t%d3\n\tmvf%d3d\t%0, %1\n\tmvf%D3d\t%0, %2",
  "ite\t%d3\n\tmvf%d3d\t%0, %1\n\tmnf%D3d\t%0, #%N2",
  "ite\t%d3\n\tmnf%d3d\t%0, #%N1\n\tmvf%D3d\t%0, %2",
  "ite\t%d3\n\tmnf%d3d\t%0, #%N1\n\tmnf%D3d\t%0, #%N2",
};

static const char *
output_438 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 374 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md"

  {
  switch (which_alternative)
    {
    case 0:
      return "#";
    case 1:
    case 2:
      return output_move_double (operands);

    case 3: return "cfmv64lr%?\t%V0, %Q1\n\tcfmv64hr%?\t%V0, %R1";
    case 4: return "cfmvr64l%?\t%Q0, %V1\n\tcfmvr64h%?\t%R0, %V1";

    case 5: return "cfldr64%?\t%V0, %1";
    case 6: return "cfstr64%?\t%V1, %0";

    /* Shifting by 0 will just copy %1 into %0.  */
    case 7: return "cfsh64%?\t%V0, %V1, #0";

    default: gcc_unreachable ();
    }
  }
}

static const char * const output_439[] = {
  "cfcpys%?\t%V0, %V1",
  "cfldrs%?\t%V0, %1",
  "cfmvsr%?\t%V0, %1",
  "cfmvrs%?\t%0, %V1",
  "cfstrs%?\t%V1, %0",
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_440 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 435 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md"

  {
  switch (which_alternative)
    {
    case 0: return "ldm%?ia\t%m1, %M0\t%@ double";
    case 1: return "stm%?ia\t%m0, %M1\t%@ double";
    case 2: return "#";
    case 3: case 4: return output_move_double (operands);
    case 5: return "cfcpyd%?\t%V0, %V1";
    case 6: return "cfldrd%?\t%V0, %1";
    case 7: return "cfmvdlr\t%V0, %Q1\n\tcfmvdhr%?\t%V0, %R1";
    case 8: return "cfmvrdl%?\t%Q0, %V1\n\tcfmvrdh%?\t%R0, %V1";
    case 9: return "cfstrd%?\t%V1, %0";
    default: gcc_unreachable ();
    }
  }
}

static const char *
output_441 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 462 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md"

  {
  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return (output_move_double (operands));

    case 3: return "cfmv64lr%?\t%V0, %Q1\n\tcfmv64hr%?\t%V0, %R1";
    case 4: return "cfmvr64l%?\t%Q0, %V1\n\tcfmvr64h%?\t%R0, %V1";

    case 5: return "cfldr64%?\t%V0, %1";
    case 6: return "cfstr64%?\t%V1, %0";

    /* Shifting by 0 will just copy %1 into %0.  */
    case 7: return "cfsh64%?\t%V0, %V1, #0";

    default: abort ();
    }
  }
}

static const char * const output_442[] = {
  "cfcpys%?\t%V0, %V1",
  "cfldrs%?\t%V0, %1",
  "cfmvsr%?\t%V0, %1",
  "cfmvrs%?\t%0, %V1",
  "cfstrs%?\t%V1, %0",
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_443 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 519 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md"

  {
  switch (which_alternative)
    {
    case 0: return "ldm%?ia\t%m1, %M0\t%@ double";
    case 1: return "stm%?ia\t%m0, %M1\t%@ double";
    case 2: case 3: case 4: return output_move_double (operands);
    case 5: return "cfcpyd%?\t%V0, %V1";
    case 6: return "cfldrd%?\t%V0, %1";
    case 7: return "cfmvdlr\t%V0, %Q1\n\tcfmvdhr%?\t%V0, %R1";
    case 8: return "cfmvrdl%?\t%Q0, %V1\n\tcfmvrdh%?\t%R0, %V1";
    case 9: return "cfstrd%?\t%V1, %0";
    default: abort ();
    }
  }
}

static const char * const output_444[] = {
  "wor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_445[] = {
  "wxor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_446[] = {
  "wand%?\t%0, %1, %2",
  "#",
  "#",
};

static const char *
output_448 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 81 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md"

{
  switch (which_alternative)
    {
    default:
      return output_move_double (operands);
    case 0:
      return "#";
    case 3:
      return "wmov%?\t%0,%1";
    case 4:
      return "tmcrr%?\t%0,%Q1,%R1";
    case 5:
      return "tmrrc%?\t%Q0,%R0,%1";
    case 6:
      return "wldrd%?\t%0,%1";
    case 7:
      return "wstrd%?\t%1,%0";
    }
}
}

static const char *
output_449 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 113 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "mov\t%0, %1";
   case 1: return "mov\t%0, %1";
   case 2: return "mvn\t%0, #%B1";
   case 3: return "ldr\t%0, %1";
   case 4: return "str\t%1, %0";
   case 5: return "tmcr\t%0, %1";
   case 6: return "tmrc\t%0, %1";
   case 7: return arm_output_load_gr (operands);
   case 8: return "wstrw\t%1, %0";
   default:return "wstrw\t%1, [sp, #-4]!\n\twldrw\t%0, [sp], #4\t@move CG reg";
  }
}

static const char *
output_450 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 155 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "mov%?\t%0, %1";
   case 1: return "mvn%?\t%0, #%B1";
   case 2: return "ldr%?\t%0, %1";
   case 3: return "str%?\t%1, %0";
   case 4: return "tmcr%?\t%0, %1";
   default: return "tmrc%?\t%0, %1";
  }
}

static const char *
output_451 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 174 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands);
   }
}

static const char *
output_452 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 174 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands);
   }
}

static const char *
output_453 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 174 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands);
   }
}

static const char * const output_583[] = {
  "waligni%?\t%0, %1, %2, %3",
  "walignr%U3%?\t%0, %1, %2",
};

static const char *
output_590 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 58 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
      return "ldr%?\t%0, %1";
    case 5:
      return "str%?\t%1, %0";
    case 6:
      return "fmsr%?\t%0, %1\t%@ int";
    case 7:
      return "fmrs%?\t%0, %1\t%@ int";
    case 8:
      return "fcpys%?\t%0, %1\t%@ int";
    case 9: case 10:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_591 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 98 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
    case 5:
      return "ldr%?\t%0, %1";
    case 6:
    case 7:
      return "str%?\t%1, %0";
    case 8:
      return "fmsr%?\t%0, %1\t%@ int";
    case 9:
      return "fmrs%?\t%0, %1\t%@ int";
    case 10:
      return "fcpys%?\t%0, %1\t%@ int";
    case 11: case 12:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_592 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 141 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: 
      return "#";
    case 1:
    case 2:
      return output_move_double (operands);
    case 3:
      return "fmdrr%?\t%P0, %Q1, %R1\t%@ int";
    case 4:
      return "fmrrd%?\t%Q0, %R0, %P1\t%@ int";
    case 5:
      if (TARGET_VFP_SINGLE)
	return "fcpys%?\t%0, %1\t%@ int\n\tfcpys%?\t%p0, %p1\t%@ int";
      else
	return "fcpyd%?\t%P0, %P1\t%@ int";
    case 6: case 7:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_593 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 183 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: 
      return "#";
    case 1:
    case 2:
      return output_move_double (operands);
    case 3:
      return "fmdrr%?\t%P0, %Q1, %R1\t%@ int";
    case 4:
      return "fmrrd%?\t%Q0, %R0, %P1\t%@ int";
    case 5:
      if (TARGET_VFP_SINGLE)
	return "fcpys%?\t%0, %1\t%@ int\n\tfcpys%?\t%p0, %p1\t%@ int";
      else
	return "fcpyd%?\t%P0, %P1\t%@ int";
    case 6: case 7:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_594 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 225 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1: case 2:
      return (output_move_double (operands));
    case 3:
      return "fmdrr%?\t%P0, %Q1, %R1\t%@ int";
    case 4:
      return "fmrrd%?\t%Q0, %R0, %P1\t%@ int";
    case 5:
      if (TARGET_VFP_SINGLE)
	return "fcpys%?\t%0, %1\t%@ int\n\tfcpys%?\t%p0, %p1\t%@ int";
      else
	return "fcpyd%?\t%P0, %P1\t%@ int";
    case 6: case 7:
      return output_move_vfp (operands);
    default:
      abort ();
    }
  
}

static const char *
output_595 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 266 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:     /* S register from memory */
      return "vld1.16\t{%z0}, %A1";
    case 1:     /* memory from S register */
      return "vst1.16\t{%z1}, %A0";
    case 2:     /* ARM register from memory */
      return "ldrh\t%0, %1\t%@ __fp16";
    case 3:     /* memory from ARM register */
      return "strh\t%1, %0\t%@ __fp16";
    case 4:	/* S register from S register */
      return "fcpys\t%0, %1";
    case 5:	/* ARM register from ARM register */
      return "mov\t%0, %1\t%@ __fp16";
    case 6:	/* S register from ARM register */
      return "fmsr\t%0, %1";
    case 7:	/* ARM register from S register */
      return "fmrs\t%0, %1";
    case 8:	/* ARM register from constant */
      {
        REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

        REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw\t%0, %1", ops);
	else
	  output_asm_insn ("mov\t%0, %2\n\torr\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_596 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 321 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:     /* ARM register from memory */
      return "ldrh\t%0, %1\t%@ __fp16";
    case 1:     /* memory from ARM register */
      return "strh\t%1, %0\t%@ __fp16";
    case 2:	/* S register from S register */
      return "fcpys\t%0, %1";
    case 3:	/* ARM register from ARM register */
      return "mov\t%0, %1\t%@ __fp16";
    case 4:	/* S register from ARM register */
      return "fmsr\t%0, %1";
    case 5:	/* ARM register from S register */
      return "fmrs\t%0, %1";
    case 6:	/* ARM register from constant */
      {
        REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

        REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw\t%0, %1", ops);
	else
	  output_asm_insn ("mov\t%0, %2\n\torr\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_597 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 375 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "fmsr%?\t%0, %1";
    case 1:
      return "fmrs%?\t%0, %1";
    case 2:
      return "fconsts%?\t%0, #%G1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "fcpys%?\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_598 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 412 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "fmsr%?\t%0, %1";
    case 1:
      return "fmrs%?\t%0, %1";
    case 2:
      return "fconsts%?\t%0, #%G1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "fcpys%?\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_599 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 452 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "fmdrr%?\t%P0, %Q1, %R1";
      case 1:
	return "fmrrd%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
        return "fconstd%?\t%P0, #%G1";
      case 3:
	return "vmov.i32\t%P0, #0";
      case 4: case 5:
	return output_move_double (operands);
      case 6: case 7:
	return output_move_vfp (operands);
      case 8:
	if (TARGET_VFP_SINGLE)
	  return "fcpys%?\t%0, %1\n\tfcpys%?\t%p0, %p1";
	else
	  return "fcpyd%?\t%P0, %P1";
      case 9:
        return "#";
      default:
	gcc_unreachable ();
      }
    }
  
}

static const char *
output_600 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 503 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "fmdrr%?\t%P0, %Q1, %R1";
      case 1:
	return "fmrrd%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
	return "fconstd%?\t%P0, #%G1";
      case 3:
	return "vmov.i32\t%P0, #0";
      case 4: case 5: case 9:
	return output_move_double (operands);
      case 6: case 7:
	return output_move_vfp (operands);
      case 8:
	if (TARGET_VFP_SINGLE)
	  return "fcpys%?\t%0, %1\n\tfcpys%?\t%p0, %p1";
	else
	  return "fcpyd%?\t%P0, %P1";
      default:
	abort ();
      }
    }
  
}

static const char * const output_601[] = {
  "fcpys%D3\t%0, %2",
  "fcpys%d3\t%0, %1",
  "fcpys%D3\t%0, %2\n\tfcpys%d3\t%0, %1",
  "fmsr%D3\t%0, %2",
  "fmsr%d3\t%0, %1",
  "fmsr%D3\t%0, %2\n\tfmsr%d3\t%0, %1",
  "fmrs%D3\t%0, %2",
  "fmrs%d3\t%0, %1",
  "fmrs%D3\t%0, %2\n\tfmrs%d3\t%0, %1",
};

static const char * const output_602[] = {
  "it\t%D3\n\tfcpys%D3\t%0, %2",
  "it\t%d3\n\tfcpys%d3\t%0, %1",
  "ite\t%D3\n\tfcpys%D3\t%0, %2\n\tfcpys%d3\t%0, %1",
  "it\t%D3\n\tfmsr%D3\t%0, %2",
  "it\t%d3\n\tfmsr%d3\t%0, %1",
  "ite\t%D3\n\tfmsr%D3\t%0, %2\n\tfmsr%d3\t%0, %1",
  "it\t%D3\n\tfmrs%D3\t%0, %2",
  "it\t%d3\n\tfmrs%d3\t%0, %1",
  "ite\t%D3\n\tfmrs%D3\t%0, %2\n\tfmrs%d3\t%0, %1",
};

static const char * const output_603[] = {
  "fcpyd%D3\t%P0, %P2",
  "fcpyd%d3\t%P0, %P1",
  "fcpyd%D3\t%P0, %P2\n\tfcpyd%d3\t%P0, %P1",
  "fmdrr%D3\t%P0, %Q2, %R2",
  "fmdrr%d3\t%P0, %Q1, %R1",
  "fmdrr%D3\t%P0, %Q2, %R2\n\tfmdrr%d3\t%P0, %Q1, %R1",
  "fmrrd%D3\t%Q0, %R0, %P2",
  "fmrrd%d3\t%Q0, %R0, %P1",
  "fmrrd%D3\t%Q0, %R0, %P2\n\tfmrrd%d3\t%Q0, %R0, %P1",
};

static const char * const output_604[] = {
  "it\t%D3\n\tfcpyd%D3\t%P0, %P2",
  "it\t%d3\n\tfcpyd%d3\t%P0, %P1",
  "ite\t%D3\n\tfcpyd%D3\t%P0, %P2\n\tfcpyd%d3\t%P0, %P1",
  "it\t%D3\n\tfmdrr%D3\t%P0, %Q2, %R2",
  "it\t%d3\n\tfmdrr%d3\t%P0, %Q1, %R1",
  "ite\t%D3\n\tfmdrr%D3\t%P0, %Q2, %R2\n\tfmdrr%d3\t%P0, %Q1, %R1",
  "it\t%D3\n\tfmrrd%D3\t%Q0, %R0, %P2",
  "it\t%d3\n\tfmrrd%d3\t%Q0, %R0, %P1",
  "ite\t%D3\n\tfmrrd%D3\t%Q0, %R0, %P2\n\tfmrrd%d3\t%Q0, %R0, %P1",
};

static const char * const output_607[] = {
  "fnegs%?\t%0, %1",
  "eor%?\t%0, %1, #-2147483648",
};

static const char * const output_608[] = {
  "fnegd%?\t%P0, %P1",
  "#",
  "#",
};

static const char * const output_646[] = {
  "fcmps%?\t%0, %1",
  "fcmpzs%?\t%0",
};

static const char * const output_647[] = {
  "fcmpes%?\t%0, %1",
  "fcmpezs%?\t%0",
};

static const char * const output_648[] = {
  "fcmpd%?\t%P0, %P1",
  "fcmpzd%?\t%P0",
};

static const char * const output_649[] = {
  "fcmped%?\t%P0, %P1",
  "fcmpezd%?\t%P0",
};

static const char *
output_650 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1198 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"
 return vfp_output_fstmd (operands);
}

static const char * const output_651[] = {
  "it\t%d2\n\tadd%d2\t%0, %1, #1",
  "ite\t%D2\n\tmov%D2\t%0, %1\n\tadd%d2\t%0, %1, #1",
};

static const char * const output_652[] = {
  "it\t%d2\n\tsub%d2\t%0, %1, #1",
  "ite\t%D2\n\tmov%D2\t%0, %1\n\tsub%d2\t%0, %1, #1",
};

static const char * const output_654[] = {
  "cmp\t%1, %2\n\tit\tlt\n\tmovlt\t%0, %2",
  "cmp\t%1, %2\n\tit\tge\n\tmovge\t%0, %1",
  "cmp\t%1, %2\n\tite\tge\n\tmovge\t%0, %1\n\tmovlt\t%0, %2",
};

static const char * const output_655[] = {
  "cmp\t%1, %2\n\tit\tge\n\tmovge\t%0, %2",
  "cmp\t%1, %2\n\tit\tlt\n\tmovlt\t%0, %1",
  "cmp\t%1, %2\n\tite\tlt\n\tmovlt\t%0, %1\n\tmovge\t%0, %2",
};

static const char * const output_656[] = {
  "cmp\t%1, %2\n\tit\tcc\n\tmovcc\t%0, %2",
  "cmp\t%1, %2\n\tit\tcs\n\tmovcs\t%0, %1",
  "cmp\t%1, %2\n\tite\tcs\n\tmovcs\t%0, %1\n\tmovcc\t%0, %2",
};

static const char * const output_657[] = {
  "cmp\t%1, %2\n\tit\tcs\n\tmovcs\t%0, %2",
  "cmp\t%1, %2\n\tit\tcc\n\tmovcc\t%0, %1",
  "cmp\t%1, %2\n\tite\tcc\n\tmovcc\t%0, %1\n\tmovcs\t%0, %2",
};

static const char * const output_662[] = {
  "cmp\t%0, #0\n\tit\tlt\n\trsblt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\tsub%?\t%0, %0, %1, asr #31",
};

static const char * const output_663[] = {
  "cmp\t%0, #0\n\tit\tgt\n\trsbgt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\trsb%?\t%0, %0, %1, asr #31",
};

static const char *
output_664 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 209 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    default:
      return output_move_double (operands);
    }
  
}

static const char * const output_665[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
  "str%?\t%1, %0",
};

static const char *
output_666 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 261 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"

  (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
			     INTVAL (operands[3]));
  return "add\t%2, %|pc\n\tldr%?\t%0, [%2]";
  
}

static const char * const output_667[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "movw%?\t%0, %L1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_668[] = {
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_669 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 309 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    default:
      return output_move_double (operands);
    }
  
}

static const char * const output_676[] = {
  "it\t%D3\n\tmov%D3\t%0, %2",
  "it\t%D3\n\tmvn%D3\t%0, #%B2",
  "it\t%d3\n\tmov%d3\t%0, %1",
  "it\t%d3\n\tmvn%d3\t%0, #%B1",
  "ite\t%d3\n\tmov%d3\t%0, %1\n\tmov%D3\t%0, %2",
  "ite\t%d3\n\tmov%d3\t%0, %1\n\tmvn%D3\t%0, #%B2",
  "ite\t%d3\n\tmvn%d3\t%0, #%B1\n\tmov%D3\t%0, %2",
  "ite\t%d3\n\tmvn%d3\t%0, #%B1\n\tmvn%D3\t%0, #%B2",
};

static const char * const output_677[] = {
  "it\t%D3\n\tmov%D3\t%0, %2",
  "it\t%d3\n\tmov%d3\t%0, %1",
};

static const char * const output_688[] = {
  "it\t%d2\n\torr%d2\t%0, %1, #1",
  "ite\t%D2\n\tmov%D2\t%0, %1\n\torr%d2\t%0, %1, #1",
};

static const char *
output_689 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 611 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"

    if (GET_CODE (operands[3]) == NE)
      {
        if (which_alternative != 1)
	  output_asm_insn ("it\t%D4\n\tmov%D4\t%0, %2", operands);
        if (which_alternative != 0)
	  output_asm_insn ("it\t%d4\n\tmov%d4\t%0, %1", operands);
        return "";
      }
    switch (which_alternative)
      {
      case 0:
	output_asm_insn ("it\t%d4", operands);
	break;
      case 1:
	output_asm_insn ("it\t%D4", operands);
	break;
      case 2:
	output_asm_insn ("ite\t%D4", operands);
	break;
      default:
	abort();
      }
    if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    if (which_alternative != 1)
      output_asm_insn ("mov%d4\t%0, %2", operands);
    return "";
  
}

static const char *
output_690 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 653 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"

    if (GET_CODE (operands[4]) == LT && operands[3] == const0_rtx)
      return "%i5\t%0, %1, %2, lsr #31";

    output_asm_insn ("cmp\t%2, %3", operands);
    if (GET_CODE (operands[5]) == AND)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("mov%D4\t%0, #0", operands);
      }
    else if (GET_CODE (operands[5]) == MINUS)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("rsb%D4\t%0, %1, #0", operands);
      }
    else if (which_alternative != 0)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("mov%D4\t%0, %1", operands);
      }
    else
      output_asm_insn ("it\t%d4", operands);
    return "%i5%d4\t%0, %1, #1";
  
}

static const char *
output_691 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 689 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"

    output_asm_insn ("cmp\t%2, %3", operands);
    if (which_alternative != 0)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("mov%D4\t%0, %1", operands);
      }
    else
      output_asm_insn ("it\t%d4", operands);
    return "sub%d4\t%0, %1, #1";
  
}

static const char *
output_692 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 711 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"

  if (GET_CODE (operands[3]) == LT && operands[2] == const0_rtx)
    return "asr\t%0, %1, #31";

  if (GET_CODE (operands[3]) == NE)
    return "subs\t%0, %1, %2\n\tit\tne\n\tmvnne\t%0, #0";

  output_asm_insn ("cmp\t%1, %2", operands);
  output_asm_insn ("ite\t%D3", operands);
  output_asm_insn ("mov%D3\t%0, #0", operands);
  return "mvn%d3\t%0, #0";
  
}

static const char *
output_693 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 737 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"

  if (GET_CODE (operands[5]) == LT
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && GET_CODE (operands[1]) == REG)
	{
	  if (operands[2] == const0_rtx)
	    return "and\t%0, %1, %3, asr #31";
	  return "ands\t%0, %1, %3, asr #32\n\tit\tcc\n\tmovcc\t%0, %2";
	}
      else if (which_alternative != 0 && GET_CODE (operands[2]) == REG)
	{
	  if (operands[1] == const0_rtx)
	    return "bic\t%0, %2, %3, asr #31";
	  return "bics\t%0, %2, %3, asr #32\n\tit\tcs\n\tmovcs\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }

  if (GET_CODE (operands[5]) == GE
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && GET_CODE (operands[1]) == REG)
	{
	  if (operands[2] == const0_rtx)
	    return "bic\t%0, %1, %3, asr #31";
	  return "bics\t%0, %1, %3, asr #32\n\tit\tcs\n\tmovcs\t%0, %2";
	}
      else if (which_alternative != 0 && GET_CODE (operands[2]) == REG)
	{
	  if (operands[1] == const0_rtx)
	    return "and\t%0, %2, %3, asr #31";
	  return "ands\t%0, %2, %3, asr #32\n\tit\tcc\n\tmovcc\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }
  if (GET_CODE (operands[4]) == CONST_INT
      && !const_ok_for_arm (INTVAL (operands[4])))
    output_asm_insn ("cmn\t%3, #%n4", operands);
  else
    output_asm_insn ("cmp\t%3, %4", operands);
  switch (which_alternative)
    {
    case 0:
      output_asm_insn ("it\t%D5", operands);
      break;
    case 1:
      output_asm_insn ("it\t%d5", operands);
      break;
    case 2:
      output_asm_insn ("ite\t%d5", operands);
      break;
    default:
      abort();
    }
  if (which_alternative != 0)
    output_asm_insn ("mov%d5\t%0, %1", operands);
  if (which_alternative != 1)
    output_asm_insn ("mov%D5\t%0, %2", operands);
  return "";
  
}

static const char * const output_695[] = {
  "uxth%?\t%Q0, %1\n\tmov%?\t%R0, #0",
  "ldr%(h%)\t%Q0, %1\n\tmov%?\t%R0, #0",
};

static const char * const output_696[] = {
  "uxtb%?\t%Q0, %1\n\tmov%?\t%R0, #0",
  "ldr%(b%)\t%Q0, %1\n\tmov%?\t%R0, #0",
};

static const char * const output_698[] = {
  "sxth%?\t%Q0, %1\n\tasr%?\t%R0, %Q0, #31",
  "ldrsh%?\t%Q0, %1\n\tasr%?\t%R0, %Q0, #31",
};

static const char * const output_699[] = {
  "sxtb%?\t%Q0, %1\n\tasr%?\t%R0, %Q0, #31",
  "ldrsb%?\t%Q0, %1\n\tasr%?\t%R0, %Q0, #31",
};

static const char * const output_700[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_701[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_702[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char *
output_703 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 998 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"
 return thumb2_output_casesi(operands);
}

static const char *
output_704 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1016 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"
 return thumb2_output_casesi(operands);
}

static const char *
output_705 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1026 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"

  {
    return output_return_instruction (const_true_rtx, TRUE, FALSE);
  }
}

static const char *
output_708 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1092 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"
 return arm_output_shift(operands, 2);
}

static const char *
output_712 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1149 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (GET_CODE (operands[2]) == CONST_INT)
      val = INTVAL(operands[2]);
    else
      val = 0;

    /* We prefer eg. subs rn, rn, #1 over adds rn, rn, #0xffffffff.  */
    if (val < 0 && const_ok_for_arm(ARM_SIGN_EXTEND (-val)))
      return "sub%!\t%0, %1, #%n2";
    else
      return "add%!\t%0, %1, %2";
  
}

static const char *
output_716 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1207 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (GET_CODE (operands[2]) == CONST_INT)
      val = INTVAL (operands[2]);
    else
      val = 0;

    if (val < 0 && const_ok_for_arm (ARM_SIGN_EXTEND (-val)))
      return "subs\t%0, %1, #%n2";
    else
      return "adds\t%0, %1, %2";
  
}

static const char *
output_717 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1231 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (GET_CODE (operands[1]) == CONST_INT)
      val = INTVAL (operands[1]);
    else
      val = 0;

    if (val < 0 && const_ok_for_arm (ARM_SIGN_EXTEND (-val)))
      return "cmp\t%0, #%n1";
    else
      return "cmn\t%0, %1";
  
}

static const char *
output_721 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1321 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"

  if (get_attr_length (insn) == 2)
    return "cbz\t%0, %l1";
  else
    return "cmp\t%0, #0\n\tbeq\t%l1";
  
}

static const char *
output_722 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1344 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"

  if (get_attr_length (insn) == 2)
    return "cbnz\t%0, %l1";
  else
    return "cmp\t%0, #0\n\tbne\t%l1";
  
}

static const char * const output_727[] = {
  "orr%?\t%0, %1, %2",
  "orn%?\t%0, %1, #%B2",
  "#",
};

static const char *
output_728 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 466 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V8QImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v8qi";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%1  @ v8qi", width);

      return templ;
    }

  /* FIXME: If the memory layout is changed in big-endian mode, output_move_vfp
     below must be changed to output_move_neon (which will use the
     element/structure loads/stores), and the constraint changed to 'Um' instead
     of 'Uv'.  */

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v8qi";
    case 1: case 3: return output_move_vfp (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v8qi";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v8qi";
    default: return output_move_double (operands);
    }
}
}

static const char *
output_729 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 466 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4HImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v4hi";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%1  @ v4hi", width);

      return templ;
    }

  /* FIXME: If the memory layout is changed in big-endian mode, output_move_vfp
     below must be changed to output_move_neon (which will use the
     element/structure loads/stores), and the constraint changed to 'Um' instead
     of 'Uv'.  */

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v4hi";
    case 1: case 3: return output_move_vfp (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v4hi";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v4hi";
    default: return output_move_double (operands);
    }
}
}

static const char *
output_730 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 466 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2SImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v2si";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%1  @ v2si", width);

      return templ;
    }

  /* FIXME: If the memory layout is changed in big-endian mode, output_move_vfp
     below must be changed to output_move_neon (which will use the
     element/structure loads/stores), and the constraint changed to 'Um' instead
     of 'Uv'.  */

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v2si";
    case 1: case 3: return output_move_vfp (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v2si";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v2si";
    default: return output_move_double (operands);
    }
}
}

static const char *
output_731 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 466 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2SFmode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v2sf";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%1  @ v2sf", width);

      return templ;
    }

  /* FIXME: If the memory layout is changed in big-endian mode, output_move_vfp
     below must be changed to output_move_neon (which will use the
     element/structure loads/stores), and the constraint changed to 'Um' instead
     of 'Uv'.  */

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v2sf";
    case 1: case 3: return output_move_vfp (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v2sf";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v2sf";
    default: return output_move_double (operands);
    }
}
}

static const char *
output_732 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 515 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V16QImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v16qi";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v16qi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v16qi";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v16qi\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v16qi\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_733 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 515 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V8HImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v8hi";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v8hi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v8hi";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v8hi\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v8hi\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_734 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 515 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4SImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v4si";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v4si", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v4si";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v4si\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v4si\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_735 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 515 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4SFmode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v4sf";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v4sf", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v4sf";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v4sf\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v4sf\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_736 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 515 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2DImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v2di";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v2di", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v2di";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v2di\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v2di\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_737 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 515 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], TImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ ti";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ ti", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ ti";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ ti\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ ti\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_738 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 582 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_739 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 582 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_740 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 582 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_741 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 582 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_762 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 732 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2]) - 1);
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
  operands[2] = GEN_INT (elt);
  
  return "vmov%?.8\t%P0[%c2], %1";
}
}

static const char *
output_763 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 732 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2]) - 1);
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
  operands[2] = GEN_INT (elt);
  
  return "vmov%?.16\t%P0[%c2], %1";
}
}

static const char *
output_764 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 732 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2]) - 1);
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
  operands[2] = GEN_INT (elt);
  
  return "vmov%?.32\t%P0[%c2], %1";
}
}

static const char *
output_765 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 732 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2]) - 1);
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
  operands[2] = GEN_INT (elt);
  
  return "vmov%?.32\t%P0[%c2], %1";
}
}

static const char *
output_766 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 751 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V16QImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V8QImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.8\t%P0[%c2], %1";
}
}

static const char *
output_767 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 751 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V8HImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V4HImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.16\t%P0[%c2], %1";
}
}

static const char *
output_768 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 751 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V4SImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V2SImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.32\t%P0[%c2], %1";
}
}

static const char *
output_769 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 751 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V4SFmode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V2SFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.32\t%P0[%c2], %1";
}
}

static const char *
output_770 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 778 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int regno = REGNO (operands[0]) + 2 * elem;

  operands[0] = gen_rtx_REG (DImode, regno);

  return "vmov%?\t%P0, %Q1, %R1";
}
}

static const char *
output_771 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 808 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u8\t%0, %P1[%c2]";
}
}

static const char *
output_772 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 808 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u16\t%0, %P1[%c2]";
}
}

static const char *
output_773 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 808 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.32\t%0, %P1[%c2]";
}
}

static const char *
output_774 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 808 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.32\t%0, %P1[%c2]";
}
}

static const char *
output_775 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 827 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V16QImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V8QImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.u8\t%0, %P1[%c2]";
}
}

static const char *
output_776 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 827 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V8HImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V4HImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.u16\t%0, %P1[%c2]";
}
}

static const char *
output_777 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 827 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V4SImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V2SImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.32\t%0, %P1[%c2]";
}
}

static const char *
output_778 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 827 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V4SFmode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V2SFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.32\t%0, %P1[%c2]";
}
}

static const char *
output_779 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 851 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]) + 2 * INTVAL (operands[2]);

  operands[1] = gen_rtx_REG (DImode, regno);

  return "vmov%?\t%Q0, %R0, %P1  @ v2di";
}
}

static const char *
output_789 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 896 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 1: return "vadd.i64\t%P0, %P1, %P2";
    case 2: return "#";
    case 3: return "#";
    default: gcc_unreachable ();
    }
}
}

static const char *
output_799 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 932 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 1: return "vsub.i64\t%P0, %P1, %P2";
    case 2: /* fall through */ 
    case 3: /* fall through */
    case 4: return  "subs\t%Q0, %Q1, %Q2\n\tsbc\t%R0, %R1, %R2";
    default: gcc_unreachable ();
    }
}
}

static const char *
output_827 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1019 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V8QImode, 0, VALID_NEON_QREG_MODE (V8QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_828 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1019 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V16QImode, 0, VALID_NEON_QREG_MODE (V16QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_829 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1019 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4HImode, 0, VALID_NEON_QREG_MODE (V4HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_830 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1019 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V8HImode, 0, VALID_NEON_QREG_MODE (V8HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_831 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1019 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2SImode, 0, VALID_NEON_QREG_MODE (V2SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_832 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1019 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4SImode, 0, VALID_NEON_QREG_MODE (V4SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_833 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1019 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2SFmode, 0, VALID_NEON_QREG_MODE (V2SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_834 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1019 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4SFmode, 0, VALID_NEON_QREG_MODE (V4SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_835 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1019 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2DImode, 0, VALID_NEON_QREG_MODE (V2DImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_836 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1036 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 1: return "vorr\t%P0, %P1, %P2";
    case 2: /* fall through */
    case 3: return neon_output_logic_immediate ("vorr", &operands[2],
		     DImode, 0, VALID_NEON_QREG_MODE (DImode));
    case 4: return "#";
    case 5: return "#";
    default: gcc_unreachable ();
    }
}
}

static const char *
output_837 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1064 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V8QImode, 1, VALID_NEON_QREG_MODE (V8QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_838 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1064 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V16QImode, 1, VALID_NEON_QREG_MODE (V16QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_839 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1064 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4HImode, 1, VALID_NEON_QREG_MODE (V4HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_840 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1064 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V8HImode, 1, VALID_NEON_QREG_MODE (V8HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_841 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1064 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2SImode, 1, VALID_NEON_QREG_MODE (V2SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_842 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1064 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4SImode, 1, VALID_NEON_QREG_MODE (V4SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_843 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1064 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2SFmode, 1, VALID_NEON_QREG_MODE (V2SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_844 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1064 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4SFmode, 1, VALID_NEON_QREG_MODE (V4SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_845 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1064 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2DImode, 1, VALID_NEON_QREG_MODE (V2DImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_846 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1081 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 1: return "vand\t%P0, %P1, %P2";
    case 2: /* fall through */
    case 3: return neon_output_logic_immediate ("vand", &operands[2],
    		     DImode, 1, VALID_NEON_QREG_MODE (DImode));
    case 4: return "#";
    case 5: return "#";
    default: gcc_unreachable ();
    }
}
}

static const char * const output_856[] = {
  "vorn\t%P0, %P1, %P2",
  "#",
  "#",
};

static const char * const output_866[] = {
  "vbic\t%P0, %P1, %P2",
  "#",
  "#",
};

static const char * const output_876[] = {
  "veor\t%P0, %P1, %P2",
  "veor\t%P0, %P1, %P2",
  "#",
  "#",
};

static const char *
output_974 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1491 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%e0, %P1";
  else
    return "";
}
}

static const char *
output_975 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1510 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%e0, %P1";
  else
    return "";
}
}

static const char *
output_976 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1530 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%e0, %P1";
  else
    return "";
}
}

static const char *
output_977 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1552 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%e0, %P1";
  else
    return "";
}
}

static const char * const output_1124[] = {
  "vceq.i8\t%P0, %P1, %P2",
  "vceq.i8\t%P0, %P1, #0",
};

static const char * const output_1125[] = {
  "vceq.i8\t%q0, %q1, %q2",
  "vceq.i8\t%q0, %q1, #0",
};

static const char * const output_1126[] = {
  "vceq.i16\t%P0, %P1, %P2",
  "vceq.i16\t%P0, %P1, #0",
};

static const char * const output_1127[] = {
  "vceq.i16\t%q0, %q1, %q2",
  "vceq.i16\t%q0, %q1, #0",
};

static const char * const output_1128[] = {
  "vceq.i32\t%P0, %P1, %P2",
  "vceq.i32\t%P0, %P1, #0",
};

static const char * const output_1129[] = {
  "vceq.i32\t%q0, %q1, %q2",
  "vceq.i32\t%q0, %q1, #0",
};

static const char * const output_1130[] = {
  "vceq.f32\t%P0, %P1, %P2",
  "vceq.f32\t%P0, %P1, #0",
};

static const char * const output_1131[] = {
  "vceq.f32\t%q0, %q1, %q2",
  "vceq.f32\t%q0, %q1, #0",
};

static const char * const output_1132[] = {
  "vcge.%T3%#8\t%P0, %P1, %P2",
  "vcge.%T3%#8\t%P0, %P1, #0",
};

static const char * const output_1133[] = {
  "vcge.%T3%#8\t%q0, %q1, %q2",
  "vcge.%T3%#8\t%q0, %q1, #0",
};

static const char * const output_1134[] = {
  "vcge.%T3%#16\t%P0, %P1, %P2",
  "vcge.%T3%#16\t%P0, %P1, #0",
};

static const char * const output_1135[] = {
  "vcge.%T3%#16\t%q0, %q1, %q2",
  "vcge.%T3%#16\t%q0, %q1, #0",
};

static const char * const output_1136[] = {
  "vcge.%T3%#32\t%P0, %P1, %P2",
  "vcge.%T3%#32\t%P0, %P1, #0",
};

static const char * const output_1137[] = {
  "vcge.%T3%#32\t%q0, %q1, %q2",
  "vcge.%T3%#32\t%q0, %q1, #0",
};

static const char * const output_1138[] = {
  "vcge.%T3%#32\t%P0, %P1, %P2",
  "vcge.%T3%#32\t%P0, %P1, #0",
};

static const char * const output_1139[] = {
  "vcge.%T3%#32\t%q0, %q1, %q2",
  "vcge.%T3%#32\t%q0, %q1, #0",
};

static const char * const output_1140[] = {
  "vcgt.%T3%#8\t%P0, %P1, %P2",
  "vcgt.%T3%#8\t%P0, %P1, #0",
};

static const char * const output_1141[] = {
  "vcgt.%T3%#8\t%q0, %q1, %q2",
  "vcgt.%T3%#8\t%q0, %q1, #0",
};

static const char * const output_1142[] = {
  "vcgt.%T3%#16\t%P0, %P1, %P2",
  "vcgt.%T3%#16\t%P0, %P1, #0",
};

static const char * const output_1143[] = {
  "vcgt.%T3%#16\t%q0, %q1, %q2",
  "vcgt.%T3%#16\t%q0, %q1, #0",
};

static const char * const output_1144[] = {
  "vcgt.%T3%#32\t%P0, %P1, %P2",
  "vcgt.%T3%#32\t%P0, %P1, #0",
};

static const char * const output_1145[] = {
  "vcgt.%T3%#32\t%q0, %q1, %q2",
  "vcgt.%T3%#32\t%q0, %q1, #0",
};

static const char * const output_1146[] = {
  "vcgt.%T3%#32\t%P0, %P1, %P2",
  "vcgt.%T3%#32\t%P0, %P1, #0",
};

static const char * const output_1147[] = {
  "vcgt.%T3%#32\t%q0, %q1, %q2",
  "vcgt.%T3%#32\t%q0, %q1, #0",
};

static const char *
output_1268 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2834 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.s8\t%0, %P1[%c2]";
}
}

static const char *
output_1269 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2834 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.s16\t%0, %P1[%c2]";
}
}

static const char *
output_1270 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2834 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.s32\t%0, %P1[%c2]";
}
}

static const char *
output_1271 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2834 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.s32\t%0, %P1[%c2]";
}
}

static const char *
output_1272 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2854 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u8\t%0, %P1[%c2]";
}
}

static const char *
output_1273 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2854 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u16\t%0, %P1[%c2]";
}
}

static const char *
output_1274 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2854 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u32\t%0, %P1[%c2]";
}
}

static const char *
output_1275 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2854 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u32\t%0, %P1[%c2]";
}
}

static const char *
output_1276 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2874 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.s8\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1277 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2874 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.s16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1278 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2874 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.s32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1279 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2874 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.s32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1280 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2902 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.u8\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1281 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2902 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.u16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1282 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2902 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.u32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1283 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2902 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.u32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char * const output_1288[] = {
  "vdup%?.32\t%P0, %1",
  "vdup%?.32\t%P0, %y1",
};

static const char * const output_1289[] = {
  "vdup%?.32\t%P0, %1",
  "vdup%?.32\t%P0, %y1",
};

static const char * const output_1290[] = {
  "vdup%?.32\t%q0, %1",
  "vdup%?.32\t%q0, %y1",
};

static const char * const output_1291[] = {
  "vdup%?.32\t%q0, %1",
  "vdup%?.32\t%q0, %y1",
};

static const char * const output_1292[] = {
  "vmov%?\t%e0, %Q1, %R1\n\tvmov%?\t%f0, %Q1, %R1",
  "vmov%?\t%e0, %P1\n\tvmov%?\t%f0, %P1",
};

static const char *
output_1293 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3088 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.8\t%P0, %P1[%c2]";
  else
    return "vdup.8\t%q0, %P1[%c2]";
}
}

static const char *
output_1294 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3088 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.8\t%P0, %P1[%c2]";
  else
    return "vdup.8\t%q0, %P1[%c2]";
}
}

static const char *
output_1295 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3088 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.16\t%P0, %P1[%c2]";
  else
    return "vdup.16\t%q0, %P1[%c2]";
}
}

static const char *
output_1296 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3088 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.16\t%P0, %P1[%c2]";
  else
    return "vdup.16\t%q0, %P1[%c2]";
}
}

static const char *
output_1297 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3088 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1298 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3088 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1299 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3088 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1300 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3088 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1301 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3160 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src1 = REGNO (operands[1]);
  int src2 = REGNO (operands[2]);
  rtx destlo;

  if (src1 == dest && src2 == dest + 2)
    return "";
  else if (src2 == dest && src1 == dest + 2)
    /* Special case of reversed high/low parts.  */
    return "vswp\t%P1, %P2";

  destlo = gen_rtx_REG (V8QImode, dest);

  if (!reg_overlap_mentioned_p (operands[2], destlo))
    {
      /* Try to avoid unnecessary moves if part of the result is in the right
         place already.  */
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
    }
  else
    {
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
    }

  return "";
}
}

static const char *
output_1302 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3160 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src1 = REGNO (operands[1]);
  int src2 = REGNO (operands[2]);
  rtx destlo;

  if (src1 == dest && src2 == dest + 2)
    return "";
  else if (src2 == dest && src1 == dest + 2)
    /* Special case of reversed high/low parts.  */
    return "vswp\t%P1, %P2";

  destlo = gen_rtx_REG (V4HImode, dest);

  if (!reg_overlap_mentioned_p (operands[2], destlo))
    {
      /* Try to avoid unnecessary moves if part of the result is in the right
         place already.  */
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
    }
  else
    {
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
    }

  return "";
}
}

static const char *
output_1303 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3160 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src1 = REGNO (operands[1]);
  int src2 = REGNO (operands[2]);
  rtx destlo;

  if (src1 == dest && src2 == dest + 2)
    return "";
  else if (src2 == dest && src1 == dest + 2)
    /* Special case of reversed high/low parts.  */
    return "vswp\t%P1, %P2";

  destlo = gen_rtx_REG (V2SImode, dest);

  if (!reg_overlap_mentioned_p (operands[2], destlo))
    {
      /* Try to avoid unnecessary moves if part of the result is in the right
         place already.  */
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
    }
  else
    {
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
    }

  return "";
}
}

static const char *
output_1304 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3160 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src1 = REGNO (operands[1]);
  int src2 = REGNO (operands[2]);
  rtx destlo;

  if (src1 == dest && src2 == dest + 2)
    return "";
  else if (src2 == dest && src1 == dest + 2)
    /* Special case of reversed high/low parts.  */
    return "vswp\t%P1, %P2";

  destlo = gen_rtx_REG (V2SFmode, dest);

  if (!reg_overlap_mentioned_p (operands[2], destlo))
    {
      /* Try to avoid unnecessary moves if part of the result is in the right
         place already.  */
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
    }
  else
    {
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
    }

  return "";
}
}

static const char *
output_1305 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3160 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src1 = REGNO (operands[1]);
  int src2 = REGNO (operands[2]);
  rtx destlo;

  if (src1 == dest && src2 == dest + 2)
    return "";
  else if (src2 == dest && src1 == dest + 2)
    /* Special case of reversed high/low parts.  */
    return "vswp\t%P1, %P2";

  destlo = gen_rtx_REG (DImode, dest);

  if (!reg_overlap_mentioned_p (operands[2], destlo))
    {
      /* Try to avoid unnecessary moves if part of the result is in the right
         place already.  */
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
    }
  else
    {
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
    }

  return "";
}
}

static const char *
output_1306 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3206 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src + 2)
    return "vmov\t%P0, %f1";
  else
    return "";
}
}

static const char *
output_1307 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3224 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src + 2)
    return "vmov\t%P0, %f1";
  else
    return "";
}
}

static const char *
output_1308 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3241 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src + 2)
    return "vmov\t%P0, %f1";
  else
    return "";
}
}

static const char *
output_1309 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3258 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src + 2)
    return "vmov\t%P0, %f1";
  else
    return "";
}
}

static const char *
output_1310 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3275 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src + 2)
    return "vmov\t%P0, %f1";
  else
    return "";
}
}

static const char *
output_1311 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3295 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%P0, %e1";
  else
    return "";
}
}

static const char *
output_1312 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3313 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%P0, %e1";
  else
    return "";
}
}

static const char *
output_1313 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3330 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%P0, %e1";
  else
    return "";
}
}

static const char *
output_1314 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3347 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%P0, %e1";
  else
    return "";
}
}

static const char *
output_1315 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3364 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%P0, %e1";
  else
    return "";
}
}

static const char *
output_1320 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3409 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.%T3%#32.f32\t%P0, %P1, %2";
}
}

static const char *
output_1321 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3409 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.%T3%#32.f32\t%q0, %q1, %2";
}
}

static const char *
output_1322 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3426 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.f32.%T3%#32\t%P0, %P1, %2";
}
}

static const char *
output_1323 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3426 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.f32.%T3%#32\t%q0, %q1, %2";
}
}

static const char *
output_1336 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3485 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmul.i16\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1337 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3485 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmul.i32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1338 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3485 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmul.f32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1339 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3506 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmul.i16\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1340 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3506 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmul.i32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1341 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3506 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmul.f32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1342 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3527 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmull.%T4%#16\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1343 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3527 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmull.%T4%#32\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1344 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3546 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vqdmull.s16\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1345 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3546 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vqdmull.s32\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1346 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3565 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V8HImode));
  return "vq%O4dmulh.%T4%#16\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1347 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3565 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4SImode));
  return "vq%O4dmulh.%T4%#32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1348 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3584 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vq%O4dmulh.%T4%#16\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1349 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3584 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vq%O4dmulh.%T4%#32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1350 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3604 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmla.i16\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1351 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3604 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmla.i32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1352 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3604 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmla.f32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1353 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3626 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V8HImode));
  return "vmla.i16\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1354 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3626 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SImode));
  return "vmla.i32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1355 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3626 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SFmode));
  return "vmla.f32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1356 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3648 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmlal.%T5%#16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1357 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3648 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmlal.%T5%#32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1358 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3668 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vqdmlal.s16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1359 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3668 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vqdmlal.s32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1360 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3688 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmls.i16\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1361 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3688 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmls.i32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1362 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3688 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmls.f32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1363 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3710 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V8HImode));
  return "vmls.i16\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1364 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3710 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SImode));
  return "vmls.i32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1365 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3710 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SFmode));
  return "vmls.f32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1366 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3732 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmlsl.%T5%#16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1367 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3732 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmlsl.%T5%#32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1368 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3752 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vqdmlsl.s16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1369 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3752 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vqdmlsl.s32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1370 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3980 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V8QImode));
  return "vext.8\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1371 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3980 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V16QImode));
  return "vext.8\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1372 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3980 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vext.16\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1373 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3980 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V8HImode));
  return "vext.16\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1374 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3980 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vext.32\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1375 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3980 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4SImode));
  return "vext.32\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1376 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3980 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vext.32\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1377 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3980 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4SFmode));
  return "vext.32\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1378 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3980 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (DImode));
  return "vext.64\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1379 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3980 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2DImode));
  return "vext.64\t%q0, %q1, %q2, %3";
}
}

static const char * const output_1395[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1396[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1397[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1398[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1399[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1400[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1401[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1402[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1403[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1404[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char *
output_1421 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4089 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8QImode) + 1);
  return "v%O3shr.%T3%#8\t%P0, %P1, %2";
}
}

static const char *
output_1422 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4089 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V16QImode) + 1);
  return "v%O3shr.%T3%#8\t%q0, %q1, %2";
}
}

static const char *
output_1423 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4089 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4HImode) + 1);
  return "v%O3shr.%T3%#16\t%P0, %P1, %2";
}
}

static const char *
output_1424 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4089 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) + 1);
  return "v%O3shr.%T3%#16\t%q0, %q1, %2";
}
}

static const char *
output_1425 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4089 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2SImode) + 1);
  return "v%O3shr.%T3%#32\t%P0, %P1, %2";
}
}

static const char *
output_1426 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4089 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) + 1);
  return "v%O3shr.%T3%#32\t%q0, %q1, %2";
}
}

static const char *
output_1427 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4089 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (DImode) + 1);
  return "v%O3shr.%T3%#64\t%P0, %P1, %2";
}
}

static const char *
output_1428 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4089 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) + 1);
  return "v%O3shr.%T3%#64\t%q0, %q1, %2";
}
}

static const char *
output_1429 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4103 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "v%O3shrn.i16\t%P0, %q1, %2";
}
}

static const char *
output_1430 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4103 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "v%O3shrn.i32\t%P0, %q1, %2";
}
}

static const char *
output_1431 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4103 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "v%O3shrn.i64\t%P0, %q1, %2";
}
}

static const char *
output_1432 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4117 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vq%O3shrn.%T3%#16\t%P0, %q1, %2";
}
}

static const char *
output_1433 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4117 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vq%O3shrn.%T3%#32\t%P0, %q1, %2";
}
}

static const char *
output_1434 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4117 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vq%O3shrn.%T3%#64\t%P0, %q1, %2";
}
}

static const char *
output_1435 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4131 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vq%O3shrun.%T3%#16\t%P0, %q1, %2";
}
}

static const char *
output_1436 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4131 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vq%O3shrun.%T3%#32\t%P0, %q1, %2";
}
}

static const char *
output_1437 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4131 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vq%O3shrun.%T3%#64\t%P0, %q1, %2";
}
}

static const char *
output_1438 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4145 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vshl.i8\t%P0, %P1, %2";
}
}

static const char *
output_1439 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4145 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vshl.i8\t%q0, %q1, %2";
}
}

static const char *
output_1440 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4145 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vshl.i16\t%P0, %P1, %2";
}
}

static const char *
output_1441 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4145 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vshl.i16\t%q0, %q1, %2";
}
}

static const char *
output_1442 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4145 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vshl.i32\t%P0, %P1, %2";
}
}

static const char *
output_1443 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4145 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vshl.i32\t%q0, %q1, %2";
}
}

static const char *
output_1444 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4145 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vshl.i64\t%P0, %P1, %2";
}
}

static const char *
output_1445 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4145 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vshl.i64\t%q0, %q1, %2";
}
}

static const char *
output_1446 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4159 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vqshl.%T3%#8\t%P0, %P1, %2";
}
}

static const char *
output_1447 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4159 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vqshl.%T3%#8\t%q0, %q1, %2";
}
}

static const char *
output_1448 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4159 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vqshl.%T3%#16\t%P0, %P1, %2";
}
}

static const char *
output_1449 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4159 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vqshl.%T3%#16\t%q0, %q1, %2";
}
}

static const char *
output_1450 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4159 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vqshl.%T3%#32\t%P0, %P1, %2";
}
}

static const char *
output_1451 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4159 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vqshl.%T3%#32\t%q0, %q1, %2";
}
}

static const char *
output_1452 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4159 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vqshl.%T3%#64\t%P0, %P1, %2";
}
}

static const char *
output_1453 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4159 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vqshl.%T3%#64\t%q0, %q1, %2";
}
}

static const char *
output_1454 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4173 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vqshlu.%T3%#8\t%P0, %P1, %2";
}
}

static const char *
output_1455 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4173 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vqshlu.%T3%#8\t%q0, %q1, %2";
}
}

static const char *
output_1456 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4173 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vqshlu.%T3%#16\t%P0, %P1, %2";
}
}

static const char *
output_1457 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4173 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vqshlu.%T3%#16\t%q0, %q1, %2";
}
}

static const char *
output_1458 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4173 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vqshlu.%T3%#32\t%P0, %P1, %2";
}
}

static const char *
output_1459 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4173 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vqshlu.%T3%#32\t%q0, %q1, %2";
}
}

static const char *
output_1460 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4173 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vqshlu.%T3%#64\t%P0, %P1, %2";
}
}

static const char *
output_1461 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4173 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vqshlu.%T3%#64\t%q0, %q1, %2";
}
}

static const char *
output_1462 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4187 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode) + 1);
  return "vshll.%T3%#8\t%q0, %P1, %2";
}
}

static const char *
output_1463 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4187 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode) + 1);
  return "vshll.%T3%#16\t%q0, %P1, %2";
}
}

static const char *
output_1464 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4187 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode) + 1);
  return "vshll.%T3%#32\t%q0, %P1, %2";
}
}

static const char *
output_1465 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4203 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "v%O4sra.%T4%#8\t%P0, %P2, %3";
}
}

static const char *
output_1466 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4203 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "v%O4sra.%T4%#8\t%q0, %q2, %3";
}
}

static const char *
output_1467 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4203 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "v%O4sra.%T4%#16\t%P0, %P2, %3";
}
}

static const char *
output_1468 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4203 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "v%O4sra.%T4%#16\t%q0, %q2, %3";
}
}

static const char *
output_1469 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4203 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "v%O4sra.%T4%#32\t%P0, %P2, %3";
}
}

static const char *
output_1470 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4203 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "v%O4sra.%T4%#32\t%q0, %q2, %3";
}
}

static const char *
output_1471 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4203 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "v%O4sra.%T4%#64\t%P0, %P2, %3";
}
}

static const char *
output_1472 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4203 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "v%O4sra.%T4%#64\t%q0, %q2, %3";
}
}

static const char *
output_1473 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4217 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "vsri.8\t%P0, %P2, %3";
}
}

static const char *
output_1474 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4217 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "vsri.8\t%q0, %q2, %3";
}
}

static const char *
output_1475 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4217 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "vsri.16\t%P0, %P2, %3";
}
}

static const char *
output_1476 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4217 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "vsri.16\t%q0, %q2, %3";
}
}

static const char *
output_1477 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4217 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "vsri.32\t%P0, %P2, %3";
}
}

static const char *
output_1478 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4217 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "vsri.32\t%q0, %q2, %3";
}
}

static const char *
output_1479 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4217 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "vsri.64\t%P0, %P2, %3";
}
}

static const char *
output_1480 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4217 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "vsri.64\t%q0, %q2, %3";
}
}

static const char *
output_1481 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4234 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V8QImode));
  return "vsli.8\t%P0, %P2, %3";
}
}

static const char *
output_1482 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4234 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V16QImode));
  return "vsli.8\t%q0, %q2, %3";
}
}

static const char *
output_1483 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4234 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V4HImode));
  return "vsli.16\t%P0, %P2, %3";
}
}

static const char *
output_1484 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4234 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V8HImode));
  return "vsli.16\t%q0, %q2, %3";
}
}

static const char *
output_1485 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4234 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V2SImode));
  return "vsli.32\t%P0, %P2, %3";
}
}

static const char *
output_1486 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4234 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V4SImode));
  return "vsli.32\t%q0, %q2, %3";
}
}

static const char *
output_1487 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4234 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (DImode));
  return "vsli.64\t%P0, %P2, %3";
}
}

static const char *
output_1488 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4234 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V2DImode));
  return "vsli.64\t%q0, %q2, %3";
}
}

static const char *
output_1490 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4260 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[4];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2}, %P3", ops);

  return "";
}
}

static const char *
output_1491 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4281 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[5];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2, %P3}, %P4", ops);

  return "";
}
}

static const char *
output_1492 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4303 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[6];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = gen_rtx_REG (V8QImode, tabbase + 6);
  ops[5] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2, %P3, %P4}, %P5", ops);

  return "";
}
}

static const char *
output_1494 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4338 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[4];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2}, %P3", ops);

  return "";
}
}

static const char *
output_1495 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4360 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[5];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2, %P3}, %P4", ops);

  return "";
}
}

static const char *
output_1496 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4383 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[6];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = gen_rtx_REG (V8QImode, tabbase + 6);
  ops[5] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2, %P3, %P4}, %P5", ops);

  return "";
}
}

static const char *
output_1531 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4584 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.8\t%P0, [%1]";
  else
    return "vld1.8\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1532 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4584 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.16\t%P0, [%1]";
  else
    return "vld1.16\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1533 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4584 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.32\t%P0, [%1]";
  else
    return "vld1.32\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1534 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4584 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.32\t%P0, [%1]";
  else
    return "vld1.32\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1535 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4584 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (DImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.64\t%P0, [%1]";
  else
    return "vld1.64\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1536 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4607 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V16QImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V8QImode, regno);
  if (max == 2)
    return "vld1.8\t%P0, [%1]";
  else
    return "vld1.8\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1537 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4607 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V4HImode, regno);
  if (max == 2)
    return "vld1.16\t%P0, [%1]";
  else
    return "vld1.16\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1538 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4607 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V2SImode, regno);
  if (max == 2)
    return "vld1.32\t%P0, [%1]";
  else
    return "vld1.32\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1539 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4607 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V2SFmode, regno);
  if (max == 2)
    return "vld1.32\t%P0, [%1]";
  else
    return "vld1.32\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1540 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4607 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2DImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (DImode, regno);
  if (max == 2)
    return "vld1.64\t%P0, [%1]";
  else
    return "vld1.64\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1541 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4636 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    return "vld1.8\t{%P0[]}, [%1]";
  else
    return "vld1.8\t%h0, [%1]";
}
}

static const char *
output_1542 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4636 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    return "vld1.16\t{%P0[]}, [%1]";
  else
    return "vld1.16\t%h0, [%1]";
}
}

static const char *
output_1543 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4636 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    return "vld1.32\t{%P0[]}, [%1]";
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1544 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4636 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    return "vld1.32\t{%P0[]}, [%1]";
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1545 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4636 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    return "vld1.64\t{%P0[]}, [%1]";
  else
    return "vld1.64\t%h0, [%1]";
}
}

static const char *
output_1546 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4653 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V16QImode) > 2)
    return "vld1.8\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.8\t%h0, [%1]";
}
}

static const char *
output_1547 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4653 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8HImode) > 2)
    return "vld1.16\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.16\t%h0, [%1]";
}
}

static const char *
output_1548 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4653 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4SImode) > 2)
    return "vld1.32\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1549 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4653 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4SFmode) > 2)
    return "vld1.32\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1550 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4653 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2DImode) > 2)
    return "vld1.64\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.64\t%h0, [%1]";
}
}

static const char *
output_1561 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4679 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.8\t{%P1}, [%0]";
  else
    return "vst1.8\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1562 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4679 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.16\t{%P1}, [%0]";
  else
    return "vst1.16\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1563 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4679 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.32\t{%P1}, [%0]";
  else
    return "vst1.32\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1564 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4679 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.32\t{%P1}, [%0]";
  else
    return "vst1.32\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1565 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4679 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (DImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.64\t{%P1}, [%0]";
  else
    return "vst1.64\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1566 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4700 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V16QImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V8QImode, regno);
  if (max == 2)
    return "vst1.8\t{%P1}, [%0]";
  else
    return "vst1.8\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1567 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4700 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V4HImode, regno);
  if (max == 2)
    return "vst1.16\t{%P1}, [%0]";
  else
    return "vst1.16\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1568 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4700 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V2SImode, regno);
  if (max == 2)
    return "vst1.32\t{%P1}, [%0]";
  else
    return "vst1.32\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1569 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4700 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V2SFmode, regno);
  if (max == 2)
    return "vst1.32\t{%P1}, [%0]";
  else
    return "vst1.32\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1570 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4700 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2DImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (DImode, regno);
  if (max == 2)
    return "vst1.64\t{%P1}, [%0]";
  else
    return "vst1.64\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1571 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4727 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld2.8\t%h0, [%1]";
}
}

static const char *
output_1572 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4727 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld2.16\t%h0, [%1]";
}
}

static const char *
output_1573 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4727 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld2.32\t%h0, [%1]";
}
}

static const char *
output_1574 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4727 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld2.32\t%h0, [%1]";
}
}

static const char *
output_1575 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4727 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld2.64\t%h0, [%1]";
}
}

static const char *
output_1580 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4756 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.8\t{%P0[%c3], %P1[%c3]}, [%2]", ops);
  return "";
}
}

static const char *
output_1581 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4756 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.16\t{%P0[%c3], %P1[%c3]}, [%2]", ops);
  return "";
}
}

static const char *
output_1582 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4756 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, [%2]", ops);
  return "";
}
}

static const char *
output_1583 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4756 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, [%2]", ops);
  return "";
}
}

static const char *
output_1584 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4781 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.16\t{%P0[%c3], %P1[%c3]}, [%2]", ops);
  return "";
}
}

static const char *
output_1585 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4781 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, [%2]", ops);
  return "";
}
}

static const char *
output_1586 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4781 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, [%2]", ops);
  return "";
}
}

static const char *
output_1587 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4809 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    return "vld2.8\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.8\t%h0, [%1]";
}
}

static const char *
output_1588 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4809 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    return "vld2.16\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.16\t%h0, [%1]";
}
}

static const char *
output_1589 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4809 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    return "vld2.32\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1590 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4809 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    return "vld2.32\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1591 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4809 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    return "vld2.64\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.64\t%h0, [%1]";
}
}

static const char *
output_1592 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4827 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst2.8\t%h1, [%0]";
}
}

static const char *
output_1593 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4827 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst2.16\t%h1, [%0]";
}
}

static const char *
output_1594 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4827 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst2.32\t%h1, [%0]";
}
}

static const char *
output_1595 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4827 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst2.32\t%h1, [%0]";
}
}

static const char *
output_1596 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4827 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst2.64\t%h1, [%0]";
}
}

static const char *
output_1601 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4857 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.8\t{%P1[%c3], %P2[%c3]}, [%0]", ops);
  return "";
}
}

static const char *
output_1602 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4857 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.16\t{%P1[%c3], %P2[%c3]}, [%0]", ops);
  return "";
}
}

static const char *
output_1603 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4857 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, [%0]", ops);
  return "";
}
}

static const char *
output_1604 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4857 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, [%0]", ops);
  return "";
}
}

static const char *
output_1605 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4882 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.16\t{%P1[%c3], %P2[%c3]}, [%0]", ops);
  return "";
}
}

static const char *
output_1606 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4882 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, [%0]", ops);
  return "";
}
}

static const char *
output_1607 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4882 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, [%0]", ops);
  return "";
}
}

static const char *
output_1608 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4910 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld3.8\t%h0, [%1]";
}
}

static const char *
output_1609 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4910 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld3.16\t%h0, [%1]";
}
}

static const char *
output_1610 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4910 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld3.32\t%h0, [%1]";
}
}

static const char *
output_1611 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4910 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld3.32\t%h0, [%1]";
}
}

static const char *
output_1612 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4910 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld3.64\t%h0, [%1]";
}
}

static const char *
output_1613 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4945 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[2];
  output_asm_insn ("vld3.8\t{%P0, %P1, %P2}, [%3]!", ops);
  return "";
}
}

static const char *
output_1614 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4945 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[2];
  output_asm_insn ("vld3.16\t{%P0, %P1, %P2}, [%3]!", ops);
  return "";
}
}

static const char *
output_1615 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4945 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[2];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, [%3]!", ops);
  return "";
}
}

static const char *
output_1616 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4945 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[2];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, [%3]!", ops);
  return "";
}
}

static const char *
output_1617 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4968 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[2];
  output_asm_insn ("vld3.8\t{%P0, %P1, %P2}, [%3]!", ops);
  return "";
}
}

static const char *
output_1618 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4968 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[2];
  output_asm_insn ("vld3.16\t{%P0, %P1, %P2}, [%3]!", ops);
  return "";
}
}

static const char *
output_1619 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4968 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[2];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, [%3]!", ops);
  return "";
}
}

static const char *
output_1620 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4968 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[2];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, [%3]!", ops);
  return "";
}
}

static const char *
output_1621 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4989 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.8\t{%P0[%c4], %P1[%c4], %P2[%c4]}, [%3]",
                   ops);
  return "";
}
}

static const char *
output_1622 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4989 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.16\t{%P0[%c4], %P1[%c4], %P2[%c4]}, [%3]",
                   ops);
  return "";
}
}

static const char *
output_1623 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4989 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, [%3]",
                   ops);
  return "";
}
}

static const char *
output_1624 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4989 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, [%3]",
                   ops);
  return "";
}
}

static const char *
output_1625 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5016 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.16\t{%P0[%c4], %P1[%c4], %P2[%c4]}, [%3]",
                   ops);
  return "";
}
}

static const char *
output_1626 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5016 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, [%3]",
                   ops);
  return "";
}
}

static const char *
output_1627 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5016 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, [%3]",
                   ops);
  return "";
}
}

static const char *
output_1628 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5046 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.8\t{%P0[], %P1[], %P2[]}, [%3]", ops);
      return "";
    }
  else
    return "vld1.8\t%h0, [%1]";
}
}

static const char *
output_1629 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5046 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.16\t{%P0[], %P1[], %P2[]}, [%3]", ops);
      return "";
    }
  else
    return "vld1.16\t%h0, [%1]";
}
}

static const char *
output_1630 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5046 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.32\t{%P0[], %P1[], %P2[]}, [%3]", ops);
      return "";
    }
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1631 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5046 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.32\t{%P0[], %P1[], %P2[]}, [%3]", ops);
      return "";
    }
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1632 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5046 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.64\t{%P0[], %P1[], %P2[]}, [%3]", ops);
      return "";
    }
  else
    return "vld1.64\t%h0, [%1]";
}
}

static const char *
output_1633 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5072 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst3.8\t%h1, [%0]";
}
}

static const char *
output_1634 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5072 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst3.16\t%h1, [%0]";
}
}

static const char *
output_1635 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5072 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst3.32\t%h1, [%0]";
}
}

static const char *
output_1636 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5072 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst3.32\t%h1, [%0]";
}
}

static const char *
output_1637 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5072 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst3.64\t%h1, [%0]";
}
}

static const char *
output_1638 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5103 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.8\t{%P1, %P2, %P3}, [%0]!", ops);
  return "";
}
}

static const char *
output_1639 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5103 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.16\t{%P1, %P2, %P3}, [%0]!", ops);
  return "";
}
}

static const char *
output_1640 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5103 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, [%0]!", ops);
  return "";
}
}

static const char *
output_1641 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5103 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, [%0]!", ops);
  return "";
}
}

static const char *
output_1642 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5125 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.8\t{%P1, %P2, %P3}, [%0]!", ops);
  return "";
}
}

static const char *
output_1643 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5125 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.16\t{%P1, %P2, %P3}, [%0]!", ops);
  return "";
}
}

static const char *
output_1644 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5125 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, [%0]!", ops);
  return "";
}
}

static const char *
output_1645 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5125 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, [%0]!", ops);
  return "";
}
}

static const char *
output_1646 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5146 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.8\t{%P1[%c4], %P2[%c4], %P3[%c4]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1647 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5146 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.16\t{%P1[%c4], %P2[%c4], %P3[%c4]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1648 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5146 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1649 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5146 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1650 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5173 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.16\t{%P1[%c4], %P2[%c4], %P3[%c4]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1651 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5173 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1652 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5173 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1653 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5202 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld4.8\t%h0, [%1]";
}
}

static const char *
output_1654 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5202 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld4.16\t%h0, [%1]";
}
}

static const char *
output_1655 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5202 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld4.32\t%h0, [%1]";
}
}

static const char *
output_1656 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5202 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld4.32\t%h0, [%1]";
}
}

static const char *
output_1657 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5202 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld4.64\t%h0, [%1]";
}
}

static const char *
output_1658 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5237 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[2];
  output_asm_insn ("vld4.8\t{%P0, %P1, %P2, %P3}, [%4]!", ops);
  return "";
}
}

static const char *
output_1659 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5237 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[2];
  output_asm_insn ("vld4.16\t{%P0, %P1, %P2, %P3}, [%4]!", ops);
  return "";
}
}

static const char *
output_1660 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5237 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[2];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, [%4]!", ops);
  return "";
}
}

static const char *
output_1661 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5237 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[2];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, [%4]!", ops);
  return "";
}
}

static const char *
output_1662 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5261 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[2];
  output_asm_insn ("vld4.8\t{%P0, %P1, %P2, %P3}, [%4]!", ops);
  return "";
}
}

static const char *
output_1663 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5261 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[2];
  output_asm_insn ("vld4.16\t{%P0, %P1, %P2, %P3}, [%4]!", ops);
  return "";
}
}

static const char *
output_1664 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5261 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[2];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, [%4]!", ops);
  return "";
}
}

static const char *
output_1665 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5261 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[2];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, [%4]!", ops);
  return "";
}
}

static const char *
output_1666 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5283 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.8\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, [%4]",
                   ops);
  return "";
}
}

static const char *
output_1667 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5283 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.16\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, [%4]",
                   ops);
  return "";
}
}

static const char *
output_1668 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5283 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, [%4]",
                   ops);
  return "";
}
}

static const char *
output_1669 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5283 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, [%4]",
                   ops);
  return "";
}
}

static const char *
output_1670 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5311 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.16\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, [%4]",
                   ops);
  return "";
}
}

static const char *
output_1671 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5311 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, [%4]",
                   ops);
  return "";
}
}

static const char *
output_1672 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5311 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, [%4]",
                   ops);
  return "";
}
}

static const char *
output_1673 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5342 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.8\t{%P0[], %P1[], %P2[], %P3[]}, [%4]",
                       ops);
      return "";
    }
  else
    return "vld1.8\t%h0, [%1]";
}
}

static const char *
output_1674 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5342 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.16\t{%P0[], %P1[], %P2[], %P3[]}, [%4]",
                       ops);
      return "";
    }
  else
    return "vld1.16\t%h0, [%1]";
}
}

static const char *
output_1675 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5342 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.32\t{%P0[], %P1[], %P2[], %P3[]}, [%4]",
                       ops);
      return "";
    }
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1676 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5342 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.32\t{%P0[], %P1[], %P2[], %P3[]}, [%4]",
                       ops);
      return "";
    }
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1677 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5342 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.64\t{%P0[], %P1[], %P2[], %P3[]}, [%4]",
                       ops);
      return "";
    }
  else
    return "vld1.64\t%h0, [%1]";
}
}

static const char *
output_1678 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5371 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst4.8\t%h1, [%0]";
}
}

static const char *
output_1679 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5371 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst4.16\t%h1, [%0]";
}
}

static const char *
output_1680 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5371 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst4.32\t%h1, [%0]";
}
}

static const char *
output_1681 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5371 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst4.32\t%h1, [%0]";
}
}

static const char *
output_1682 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5371 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst4.64\t%h1, [%0]";
}
}

static const char *
output_1683 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5403 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.8\t{%P1, %P2, %P3, %P4}, [%0]!", ops);
  return "";
}
}

static const char *
output_1684 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5403 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.16\t{%P1, %P2, %P3, %P4}, [%0]!", ops);
  return "";
}
}

static const char *
output_1685 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5403 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, [%0]!", ops);
  return "";
}
}

static const char *
output_1686 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5403 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, [%0]!", ops);
  return "";
}
}

static const char *
output_1687 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5426 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.8\t{%P1, %P2, %P3, %P4}, [%0]!", ops);
  return "";
}
}

static const char *
output_1688 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5426 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.16\t{%P1, %P2, %P3, %P4}, [%0]!", ops);
  return "";
}
}

static const char *
output_1689 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5426 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, [%0]!", ops);
  return "";
}
}

static const char *
output_1690 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5426 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, [%0]!", ops);
  return "";
}
}

static const char *
output_1691 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5448 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.8\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1692 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5448 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.16\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1693 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5448 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1694 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5448 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1695 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5476 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.16\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1696 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5476 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1697 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5476 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1734 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 305 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1735 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 330 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1736 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 330 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1737 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 350 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1738 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 371 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1739 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 371 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1740 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 396 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1741 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 396 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1742 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 396 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1743 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 396 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1744 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 396 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1745 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 421 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1746 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 447 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1747 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 447 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1748 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 447 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1749 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 447 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1750 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 447 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1751 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 447 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1752 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 447 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1753 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 447 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1754 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 447 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1755 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 447 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1756 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 474 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1757 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 474 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1758 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 500 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1759 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 500 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1760 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 500 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1761 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 500 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1762 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 500 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1763 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 526 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1764 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 553 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1765 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 553 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1766 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 553 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1767 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 553 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1768 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 553 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1769 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 553 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1770 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 553 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1771 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 553 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1772 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 553 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1773 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 553 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1774 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 580 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1775 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 580 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_sync_insn (insn, operands);
  }
}

static const char *
output_1776 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 596 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/sync.md"
{
    return arm_output_memory_barrier (operands);
  }
}

static const char *
output_2000 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10683 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  return emit_ldm_seq (operands, 4);
  
}

static const char *
output_2001 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10696 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  return emit_ldm_seq (operands, 3);
  
}

static const char *
output_2002 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10707 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  return emit_ldm_seq (operands, 2);
  
}

static const char *
output_2003 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10722 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  return emit_stm_seq (operands, 4);
  
}

static const char *
output_2004 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10735 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  return emit_stm_seq (operands, 3);
  
}

static const char *
output_2005 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10746 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  return emit_stm_seq (operands, 2);
  
}

static const char * const output_2632[] = {
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %2, %1",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "#",
};

static const char * const output_2634[] = {
  "rsb%?\t%0, %2, %1",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_2659[] = {
  "and%?\t%0, %1, %2",
  "bic%?\t%0, %1, #%B2",
  "#",
};

static const char * const output_2665[] = {
  "bic%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_2672[] = {
  "orr%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_2674[] = {
  "orr%?\t%0, %1, %2",
  "#",
};

static const char * const output_2677[] = {
  "eor%?\t%Q0, %Q1, %2",
  "#",
};

static const char *
output_2684 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3518 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 0);
}

static const char *
output_2692 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4044 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

    if (REGNO (operands[1])
        != REGNO (operands[0]) + (WORDS_BIG_ENDIAN ? 1 : 0))
      output_asm_insn ("mov%?\t%Q0, %1", operands);
    return "mov%?\t%R0, #0";
  
}

static const char * const output_2693[] = {
  "and%?\t%Q0, %1, #255\n\tmov%?\t%R0, #0",
  "ldr%(b%)\t%Q0, %1\n\tmov%?\t%R0, #0",
};

static const char *
output_2694 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4086 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

    if (REGNO (operands[1])
        != REGNO (operands[0]) + (WORDS_BIG_ENDIAN ? 1 : 0))
      output_asm_insn ("mov%?\t%Q0, %1", operands);
    return "mov%?\t%R0, %Q0, asr #31";
  
}

static const char * const output_2695[] = {
  "#",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_2696[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_2698[] = {
  "#",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_2699[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_2701[] = {
  "#",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_2702[] = {
  "sxth%?\t%0, %1",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_2704[] = {
  "#",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_2705[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_2708[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
};

static const char *
output_2709 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5304 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "add%?\t%0, %|pc, %1";
  
}

static const char *
output_2710 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5319 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "ldr%?\t%0, [%|pc, %1]\t\t@ tls_load_dot_plus_eight";
  
}

static const char * const output_2711[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_2712[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
};

static const char * const output_2713[] = {
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "ldr%(b%)\t%0, %1",
  "str%(b%)\t%1, %0",
};

static const char *
output_2714 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5995 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:	/* ARM register from memory */
      return "ldr%(h%)\t%0, %1\t%@ __fp16";
    case 1:	/* memory from ARM register */
      return "str%(h%)\t%1, %0\t%@ __fp16";
    case 2:	/* ARM register from ARM register */
      return "mov%?\t%0, %1\t%@ __fp16";
    case 3:	/* ARM register from constant */
      {
	REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

	REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw%?\t%0, %1", ops);
	else
	  output_asm_insn ("mov%?\t%0, %2\n\torr%?\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char * const output_2715[] = {
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_2728 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8517 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return "b%?\t%l0";
  }
  
}

static const char *
output_2729 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8895 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, TRUE, FALSE);
  }
}

static const char *
output_2734 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10560 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md"

  {
    rtx ldm[3];
    rtx arith[4];
    rtx base_reg;
    HOST_WIDE_INT val1 = 0, val2 = 0;

    if (REGNO (operands[0]) > REGNO (operands[4]))
      {
	ldm[1] = operands[4];
	ldm[2] = operands[0];
      }
    else
      {
	ldm[1] = operands[0];
	ldm[2] = operands[4];
      }

    base_reg = XEXP (operands[2], 0);

    if (!REG_P (base_reg))
      {
	val1 = INTVAL (XEXP (base_reg, 1));
	base_reg = XEXP (base_reg, 0);
      }

    if (!REG_P (XEXP (operands[3], 0)))
      val2 = INTVAL (XEXP (XEXP (operands[3], 0), 1));

    arith[0] = operands[0];
    arith[3] = operands[1];

    if (val1 < val2)
      {
	arith[1] = ldm[1];
	arith[2] = ldm[2];
      }
    else
      {
	arith[1] = ldm[2];
	arith[2] = ldm[1];
      }

    ldm[0] = base_reg;
    if (val1 !=0 && val2 != 0)
      {
	rtx ops[3];

	if (val1 == 4 || val2 == 4)
	  /* Other val must be 8, since we know they are adjacent and neither
	     is zero.  */
	  output_asm_insn ("ldm%(ib%)\t%0, {%1, %2}", ldm);
	else if (const_ok_for_arm (val1) || const_ok_for_arm (-val1))
	  {
	    ldm[0] = ops[0] = operands[4];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_add_immediate (ops);
	    if (val1 < val2)
	      output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	    else
	      output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	  }
	else
	  {
	    /* Offset is out of range for a single add, so use two ldr.  */
	    ops[0] = ldm[1];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	    ops[0] = ldm[2];
	    ops[2] = GEN_INT (val2);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	  }
      }
    else if (val1 != 0)
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
      }
    else
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
      }
    output_asm_insn ("%I3%?\t%0, %1, %2", arith);
    return "";
  }
}

static const char * const output_2740[] = {
  "adf%?s\t%0, %1, %2",
  "suf%?s\t%0, %1, #%N2",
};

static const char * const output_2741[] = {
  "adf%?d\t%0, %1, %2",
  "suf%?d\t%0, %1, #%N2",
};

static const char * const output_2742[] = {
  "adf%?d\t%0, %1, %2",
  "suf%?d\t%0, %1, #%N2",
};

static const char * const output_2745[] = {
  "suf%?d\t%0, %1, %2",
  "rsf%?d\t%0, %2, %1",
};

static const char * const output_2747[] = {
  "suf%?d\t%0, %1, %2",
  "rsf%?d\t%0, %2, %1",
};

static const char * const output_2754[] = {
  "fdv%?s\t%0, %1, %2",
  "frd%?s\t%0, %2, %1",
};

static const char * const output_2755[] = {
  "dvf%?d\t%0, %1, %2",
  "rdf%?d\t%0, %2, %1",
};

static const char * const output_2779[] = {
  "mvf%?s\t%0, %1",
  "mnf%?s\t%0, #%N1",
  "ldf%?s\t%0, %1",
  "stf%?s\t%1, %0",
  "str%?\t%1, [%|sp, #-4]!\n\tldf%?s\t%0, [%|sp], #4",
  "stf%?s\t%1, [%|sp, #-4]!\n\tldr%?\t%0, [%|sp], #4",
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_2780 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 562 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md"

  {
  switch (which_alternative)
    {
    default:
    case 0: return "ldm%(ia%)\t%m1, %M0\t%@ double";
    case 1: return "stm%(ia%)\t%m0, %M1\t%@ double";
    case 2: return "#";
    case 3: case 4: return output_move_double (operands);
    case 5: return "mvf%?d\t%0, %1";
    case 6: return "mnf%?d\t%0, #%N1";
    case 7: return "ldf%?d\t%0, %1";
    case 8: return "stf%?d\t%1, %0";
    case 9: return output_mov_double_fpa_from_arm (operands);
    case 10: return output_mov_double_arm_from_fpa (operands);
    }
  }
  
}

static const char *
output_2781 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 597 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md"

  switch (which_alternative)
    {
    default:
    case 0: return "mvf%?e\t%0, %1";
    case 1: if (TARGET_FPA_EMU2)
	      return "ldf%?e\t%0, %1";
	    return "lfm%?\t%0, 1, %1";
    case 2: if (TARGET_FPA_EMU2)
	      return "stf%?e\t%1, %0";
	    return "sfm%?\t%1, 1, %0";
    }
  
}

static const char * const output_2782[] = {
  "mvf%?s\t%0, %1",
  "mnf%?s\t%0, #%N1",
  "ldf%?s\t%0, %1",
  "stf%?s\t%1, %0",
  "str%?\t%1, [%|sp, #-4]!\n\tldf%?s\t%0, [%|sp], #4",
  "stf%?s\t%1, [%|sp, #-4]!\n\tldr%?\t%0, [%|sp], #4",
  "mov%?\t%0, %1 @bar",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char * const output_2783[] = {
  "wor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_2784[] = {
  "wxor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_2785[] = {
  "wand%?\t%0, %1, %2",
  "#",
  "#",
};

static const char *
output_2787 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 174 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands);
   }
}

static const char *
output_2788 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 174 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands);
   }
}

static const char *
output_2789 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 174 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands);
   }
}

static const char * const output_2919[] = {
  "waligni%?\t%0, %1, %2, %3",
  "walignr%U3%?\t%0, %1, %2",
};

static const char *
output_2926 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 58 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
      return "ldr%?\t%0, %1";
    case 5:
      return "str%?\t%1, %0";
    case 6:
      return "fmsr%?\t%0, %1\t%@ int";
    case 7:
      return "fmrs%?\t%0, %1\t%@ int";
    case 8:
      return "fcpys%?\t%0, %1\t%@ int";
    case 9: case 10:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_2927 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 98 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
    case 5:
      return "ldr%?\t%0, %1";
    case 6:
    case 7:
      return "str%?\t%1, %0";
    case 8:
      return "fmsr%?\t%0, %1\t%@ int";
    case 9:
      return "fmrs%?\t%0, %1\t%@ int";
    case 10:
      return "fcpys%?\t%0, %1\t%@ int";
    case 11: case 12:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_2928 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 183 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: 
      return "#";
    case 1:
    case 2:
      return output_move_double (operands);
    case 3:
      return "fmdrr%?\t%P0, %Q1, %R1\t%@ int";
    case 4:
      return "fmrrd%?\t%Q0, %R0, %P1\t%@ int";
    case 5:
      if (TARGET_VFP_SINGLE)
	return "fcpys%?\t%0, %1\t%@ int\n\tfcpys%?\t%p0, %p1\t%@ int";
      else
	return "fcpyd%?\t%P0, %P1\t%@ int";
    case 6: case 7:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_2929 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 375 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "fmsr%?\t%0, %1";
    case 1:
      return "fmrs%?\t%0, %1";
    case 2:
      return "fconsts%?\t%0, #%G1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "fcpys%?\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_2930 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 412 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "fmsr%?\t%0, %1";
    case 1:
      return "fmrs%?\t%0, %1";
    case 2:
      return "fconsts%?\t%0, #%G1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "fcpys%?\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_2931 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 452 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "fmdrr%?\t%P0, %Q1, %R1";
      case 1:
	return "fmrrd%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
        return "fconstd%?\t%P0, #%G1";
      case 3:
	return "vmov.i32\t%P0, #0";
      case 4: case 5:
	return output_move_double (operands);
      case 6: case 7:
	return output_move_vfp (operands);
      case 8:
	if (TARGET_VFP_SINGLE)
	  return "fcpys%?\t%0, %1\n\tfcpys%?\t%p0, %p1";
	else
	  return "fcpyd%?\t%P0, %P1";
      case 9:
        return "#";
      default:
	gcc_unreachable ();
      }
    }
  
}

static const char * const output_2934[] = {
  "fnegs%?\t%0, %1",
  "eor%?\t%0, %1, #-2147483648",
};

static const char * const output_2935[] = {
  "fnegd%?\t%P0, %P1",
  "#",
  "#",
};

static const char * const output_2969[] = {
  "fcmps%?\t%0, %1",
  "fcmpzs%?\t%0",
};

static const char * const output_2970[] = {
  "fcmpes%?\t%0, %1",
  "fcmpezs%?\t%0",
};

static const char * const output_2971[] = {
  "fcmpd%?\t%P0, %P1",
  "fcmpzd%?\t%P0",
};

static const char * const output_2972[] = {
  "fcmped%?\t%P0, %P1",
  "fcmpezd%?\t%P0",
};

static const char * const output_2975[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
  "str%?\t%1, %0",
};

static const char * const output_2976[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "movw%?\t%0, %L1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_2977[] = {
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char * const output_2982[] = {
  "uxth%?\t%Q0, %1\n\tmov%?\t%R0, #0",
  "ldr%(h%)\t%Q0, %1\n\tmov%?\t%R0, #0",
};

static const char * const output_2984[] = {
  "uxtb%?\t%Q0, %1\n\tmov%?\t%R0, #0",
  "ldr%(b%)\t%Q0, %1\n\tmov%?\t%R0, #0",
};

static const char * const output_2988[] = {
  "sxth%?\t%Q0, %1\n\tasr%?\t%R0, %Q0, #31",
  "ldrsh%?\t%Q0, %1\n\tasr%?\t%R0, %Q0, #31",
};

static const char * const output_2990[] = {
  "sxtb%?\t%Q0, %1\n\tasr%?\t%R0, %Q0, #31",
  "ldrsb%?\t%Q0, %1\n\tasr%?\t%R0, %Q0, #31",
};

static const char * const output_2992[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_2993[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_2994[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char *
output_2996 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1092 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"
 return arm_output_shift(operands, 2);
}

static const char *
output_3000 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1149 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (GET_CODE (operands[2]) == CONST_INT)
      val = INTVAL(operands[2]);
    else
      val = 0;

    /* We prefer eg. subs rn, rn, #1 over adds rn, rn, #0xffffffff.  */
    if (val < 0 && const_ok_for_arm(ARM_SIGN_EXTEND (-val)))
      return "sub%!\t%0, %1, #%n2";
    else
      return "add%!\t%0, %1, %2";
  
}

static const char * const output_3009[] = {
  "orr%?\t%0, %1, %2",
  "orn%?\t%0, %1, #%B2",
  "#",
};

static const char *
output_3011 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 732 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2]) - 1);
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
  operands[2] = GEN_INT (elt);
  
  return "vmov%?.8\t%P0[%c2], %1";
}
}

static const char *
output_3012 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 732 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2]) - 1);
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
  operands[2] = GEN_INT (elt);
  
  return "vmov%?.16\t%P0[%c2], %1";
}
}

static const char *
output_3013 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 732 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2]) - 1);
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
  operands[2] = GEN_INT (elt);
  
  return "vmov%?.32\t%P0[%c2], %1";
}
}

static const char *
output_3014 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 732 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2]) - 1);
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
  operands[2] = GEN_INT (elt);
  
  return "vmov%?.32\t%P0[%c2], %1";
}
}

static const char *
output_3015 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 751 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V16QImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V8QImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.8\t%P0[%c2], %1";
}
}

static const char *
output_3016 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 751 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V8HImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V4HImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.16\t%P0[%c2], %1";
}
}

static const char *
output_3017 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 751 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V4SImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V2SImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.32\t%P0[%c2], %1";
}
}

static const char *
output_3018 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 751 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V4SFmode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V2SFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.32\t%P0[%c2], %1";
}
}

static const char *
output_3019 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 778 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int regno = REGNO (operands[0]) + 2 * elem;

  operands[0] = gen_rtx_REG (DImode, regno);

  return "vmov%?\t%P0, %Q1, %R1";
}
}

static const char *
output_3020 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 808 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u8\t%0, %P1[%c2]";
}
}

static const char *
output_3021 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 808 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u16\t%0, %P1[%c2]";
}
}

static const char *
output_3022 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 808 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.32\t%0, %P1[%c2]";
}
}

static const char *
output_3023 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 808 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.32\t%0, %P1[%c2]";
}
}

static const char *
output_3024 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 827 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V16QImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V8QImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.u8\t%0, %P1[%c2]";
}
}

static const char *
output_3025 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 827 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V8HImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V4HImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.u16\t%0, %P1[%c2]";
}
}

static const char *
output_3026 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 827 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V4SImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V2SImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.32\t%0, %P1[%c2]";
}
}

static const char *
output_3027 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 827 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V4SFmode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V2SFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.32\t%0, %P1[%c2]";
}
}

static const char *
output_3028 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 851 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]) + 2 * INTVAL (operands[2]);

  operands[1] = gen_rtx_REG (DImode, regno);

  return "vmov%?\t%Q0, %R0, %P1  @ v2di";
}
}

static const char *
output_3029 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2834 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.s8\t%0, %P1[%c2]";
}
}

static const char *
output_3030 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2834 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.s16\t%0, %P1[%c2]";
}
}

static const char *
output_3031 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2834 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.s32\t%0, %P1[%c2]";
}
}

static const char *
output_3032 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2834 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.s32\t%0, %P1[%c2]";
}
}

static const char *
output_3033 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2854 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u8\t%0, %P1[%c2]";
}
}

static const char *
output_3034 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2854 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u16\t%0, %P1[%c2]";
}
}

static const char *
output_3035 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2854 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u32\t%0, %P1[%c2]";
}
}

static const char *
output_3036 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2854 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u32\t%0, %P1[%c2]";
}
}

static const char *
output_3037 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2874 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.s8\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_3038 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2874 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.s16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_3039 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2874 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.s32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_3040 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2874 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.s32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_3041 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2902 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.u8\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_3042 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2902 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.u16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_3043 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2902 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.u32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_3044 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2902 "/home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.u32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char * const output_3049[] = {
  "vdup%?.32\t%P0, %1",
  "vdup%?.32\t%P0, %y1",
};

static const char * const output_3050[] = {
  "vdup%?.32\t%P0, %1",
  "vdup%?.32\t%P0, %y1",
};

static const char * const output_3051[] = {
  "vdup%?.32\t%q0, %1",
  "vdup%?.32\t%q0, %y1",
};

static const char * const output_3052[] = {
  "vdup%?.32\t%q0, %1",
  "vdup%?.32\t%q0, %y1",
};

static const char * const output_3053[] = {
  "vmov%?\t%e0, %Q1, %R1\n\tvmov%?\t%f0, %Q1, %R1",
  "vmov%?\t%e0, %P1\n\tvmov%?\t%f0, %P1",
};



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,!k,r,r,!k,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%rk,!k,r,rk,!k,rk",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,rI,!k,L,L,?n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l,l,*rk,*hk,l,!k,l,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0,0,l,*0,*0,!k,!k,0,l",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,J,lL,*hk,*rk,!M,!O,Pa,Pb",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rI,L",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_addimm_operand,
    "I,L",
    SImode,
    0,
    1
  },
  {
    arm_addimm_operand,
    "L,I",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    CCmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,0,0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,rk,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,r,!k,?n,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "r,rI,r,r,?n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&l,&l,&l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%l,*h,0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l,l,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,l,0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l,0,0",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r,0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,0,0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%0,r,0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "?r,r,0,0",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,K,?n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "rI,K",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "rIK",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "rIK",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,?n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI,rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,?r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r,?r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    minmax_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    minmax_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "N,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "l,m",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "l,m",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "l,m",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    arm_extendqisi_mem_op,
    "Uq",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,Uq",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l,l",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "l,V,m",
    QImode,
    0,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,m",
    DImode,
    0,
    1
  },
  {
    di_operand,
    "rDa,Db,Dc,mi,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,l,l,>,l,m,*r",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "l,I,J,>,l,mi,l,*r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,l,l,l,>,l,m,*l*h*k",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "l,I,J,K,>,l,mi,l,*l*h*k",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    0,
    "mX",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    0,
    "mX",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,*r,*h,l",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "l,m,l,*h,*r,I",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,r,m",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,K",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,m,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,*r,*h,l",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "l,m,l,*h,*r,I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,r,r",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "m,r,r,F",
    HFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,*r,*h",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "l,mF,l,*h,*r",
    HFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "r,mE,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,>,l,m,*r,*h",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "l,>,l,mF,l,*h,*r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_soft_df_operand,
    "=r,r,r,r,m",
    DFmode,
    0,
    1
  },
  {
    soft_df_operand,
    "rDa,Db,Dc,mF,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,>,l,m,*r",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "l,>,l,mF,l,*r",
    DFmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "l,*h",
    SImode,
    0,
    1
  },
  {
    thumb1_cmp_operand,
    "lI*h,*r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "l,0",
    SImode,
    0,
    1
  },
  {
    thumb1_cmpneg_operand,
    "L,J",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=l,l,*h,*m",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,l,l,l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=l,*?h,*?m,*?m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l,&l,&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%0,1,1,1",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l,l,l,l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=!l,l,*?h,*?m,*?m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l,l,&l,&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "0,1,1,1,1",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l,l,l,l,l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=l,*?h,*?m,*?m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l,&l,&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "l,l,1,l",
    SImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    thumb_cbrch_target_operand,
    "=l,l,*!h,*?h,*?m,*?m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,l,l,&l,&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%0,l,*l,1,1,1",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "IJ,lL,*l,lIJ,lIJ,lIJ",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,l,l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%l,l,l,0",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "J,l,L,IJ",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    thumb_cbrch_target_operand,
    "=l,*?h,*?m,*?m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l,&l,&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "l,l,1,l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l,l,l,l",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    arm_di_operand,
    "rDi",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&l,l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l,0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=X,l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=l,l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l,*h",
    SImode,
    0,
    1
  },
  {
    thumb1_cmp_operand,
    "lI*h,*r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    thumb1_cmp_operand,
    "lI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r,r,r,r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "0,0,rI,K,rI,rI,K,K",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "rI,K,0,0,rI,K,rI,K",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r,0",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "l*r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "X",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    cc_register,
    "",
    CC_NOOVmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rI,L",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,rI,?rI",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rI,L,rI,L",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rI,rI,L,L",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,0",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,0,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,rI,?rI",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,0,?rI,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rI,L,rI,L",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "0,?rIK",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "0,?rI,K",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "0,?rIK",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM,rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "0,?rI,K",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM,rM,rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    multi_register_push,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    1
  },
  {
    f_register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    multi_register_push,
    "",
    VOIDmode,
    0,
    0
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "%f,f",
    SFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "%f,f",
    DFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    SFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "f,G",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG,f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "f,G",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG,f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "f,G",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,f,r,r,r,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "fG,H,mE,f,r,f,r,mE,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,Q,r,m,r,f,f,f,m,!f,!r",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "Q,r,r,r,mF,fG,H,mF,f,r,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,m",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "f,m,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,f,r,r",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "fG,H,m,f,r,f,r",
    XFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    SFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    DFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f,f,f,f,f,f,f",
    SFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "0,0,fG,H,fG,fG,H,H",
    SFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H,0,0,fG,H,fG,H",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f,f,f,f,f,f,f",
    DFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "0,0,fG,H,fG,fG,H,H",
    DFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H,0,0,fG,H,fG,H",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    cirrus_shift_const,
    "",
    SImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=v",
    DFmode,
    0,
    0
  },
  {
    cirrus_fp_register,
    "=v",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=v",
    DFmode,
    0,
    0
  },
  {
    cirrus_fp_register,
    "=v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=v",
    DFmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=v",
    DFmode,
    0,
    0
  },
  {
    cirrus_fp_register,
    "=v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,o<>,v,r,v,m,v",
    DImode,
    0,
    1
  },
  {
    di_operand,
    "rIK,mi,r,r,v,mi,v,v",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,v,r,m,r,r,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "v,mE,r,v,v,r,mE,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,Q,r,m,r,v,v,v,r,m",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "Q,r,r,r,mF,v,mF,r,v,v",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=y,?&r,?&r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%y,0,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y,r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,m,y,y,yr,y,yrUy",
    DImode,
    0,
    1
  },
  {
    di_operand,
    "rIK,mi,r,y,yr,y,yrUy,y",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,rk,m,z,r,?z,Uy,z",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rk,I,K,mi,rk,r,z,Uy,z,z",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,z,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,mi,r,r,z",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y,y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y,y",
    V8QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "i,z",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,l,*hk,m,*m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,*mi,l,*hk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,m,w,r,w,w,Uv",
    DImode,
    0,
    1
  },
  {
    di_operand,
    "rIK,mi,r,r,w,w,Uvi,w",
    DImode,
    0,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,m,w,!r,w,w,Uv",
    DImode,
    0,
    1
  },
  {
    di_operand,
    "rIK,mi,r,r,w,w,Uvi,w",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=t,Um,r,m,t,r,t,r,r",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "Um,t,m,r,t,r,r,t,F",
    HFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,t,r,t,r,r",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "m,r,t,r,r,t,F",
    HFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=t,?r,t,t,Uv,r,m,t,r",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "?r,t,Dv,UvE,t,mE,r,t,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_soft_df_operand,
    "=w,?r,w,w,r,m,w,Uv,w,r",
    DFmode,
    0,
    1
  },
  {
    soft_df_operand,
    "?r,w,Dy,D0,mF,r,UvF,w,w,r",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t,t,t,t,t,t,?r,?r,?r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0,t,t,0,?r,?r,0,t,t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t,0,t,?r,0,?r,t,0,t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w,w,w,w,?r,?r,?r",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w,0,?r,?r,0,w,w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w,?r,0,?r,w,0,w",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t,?r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t,r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,?r,?r",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,r",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "+t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "+w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    HFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    HFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    vfp_compare_operand,
    "tG",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    vfp_compare_operand,
    "wG",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t,t",
    SFmode,
    0,
    1
  },
  {
    vfp_compare_operand,
    "t,G",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w",
    DFmode,
    0,
    1
  },
  {
    vfp_compare_operand,
    "w,G",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    1
  },
  {
    vfp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    multi_register_push,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_count,
    "M",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_count,
    "M",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_count,
    "M",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "?r,0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,l,*hk,m,*m",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,*mi,l,*hk",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l,r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l,X,r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "0,1,0,1",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rI,n,r,m",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_count,
    "M",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_count,
    "M",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_count,
    "M",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_count,
    "M",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_count,
    "M",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    thumb_16bit_operator,
    "",
    SImode,
    0,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    low_reg_or_int_operand,
    "lM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    low_register_operand,
    "=l",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "I",
    HImode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "=l,l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l,0",
    SImode,
    0,
    1
  },
  {
    low_reg_or_int_operand,
    "lPt,Ps",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=l,l,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l,0,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "lPt,Ps,rIL",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "lPv,rIL",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l,?r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=w,Uv,w,w,?r,?w,?r,?r,?Us",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uvi,w,r,r,Usi,r",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Uv,w,w,?r,?w,?r,?r,?Us",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uvi,w,r,r,Usi,r",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Uv,w,w,?r,?w,?r,?r,?Us",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uvi,w,r,r,Usi,r",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Uv,w,w,?r,?w,?r,?r,?Us",
    V2SFmode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uvi,w,r,r,Usi,r",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V16QImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V8HImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V2DImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    TImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    EImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    EImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    OImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    OImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    CImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    CImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    XImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    XImode,
    0,
    1
  },
  {
    memory_operand,
    "=Um",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    memory_operand,
    "=Um",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    memory_operand,
    "=Um",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    memory_operand,
    "=Um",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=Um",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    memory_operand,
    "Um",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    memory_operand,
    "Um",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    memory_operand,
    "Um",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    memory_operand,
    "Um",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "Um",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=Um",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    memory_operand,
    "=Um",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    memory_operand,
    "=Um",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    memory_operand,
    "=Um",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=Um",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    memory_operand,
    "Um",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    memory_operand,
    "Um",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    memory_operand,
    "Um",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "Um",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    memory_operand,
    "Um",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,?w,?&r,?&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%w,w,0,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,r,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,?w,?&r,?&r,?&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0,r,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,r,0,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V8QImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V16QImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V4HImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V8HImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V2SImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V4SImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V2SFmode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V4SFmode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V2DImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,?w,w,?w,?&r,?&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%w,w,0,0,0,r",
    DImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,w,Dl,Dl,r,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V8QImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V16QImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V4HImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V8HImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V2SImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V4SImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V2SFmode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V4SFmode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V2DImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,?w,w,?w,?&r,?&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%w,w,0,0,0,r",
    DImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,w,DL,DL,r,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,?=&r,?&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,r,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,?=&r,?&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,r,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,?w,?&r,?&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%w,w,0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,r,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "%w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "+w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "+w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "+w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "+w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "+w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "+w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w",
    V8QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "w,Dz",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w",
    V16QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "w,Dz",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w",
    V4HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "w,Dz",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w",
    V8HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "w,Dz",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w",
    V2SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "w,Dz",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w",
    V4SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "w,Dz",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w",
    V2SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "w,Dz",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w",
    V4SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "w,Dz",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Dz",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Dz",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Dz",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Dz",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Dz",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Dz",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Dz",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Dz",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r,t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r,t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    TImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    EImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    CImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    CImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    EImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    EImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    CImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    CImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    CImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    CImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    XImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    vect_par_constant_low,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    vect_par_constant_low,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    vect_par_constant_low,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    vect_par_constant_high,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    vect_par_constant_high,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    vect_par_constant_high,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    vect_par_constant_low,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    vect_par_constant_low,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    vect_par_constant_low,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    vect_par_constant_high,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    vect_par_constant_high,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    vect_par_constant_high,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    arm_sync_memory_operand,
    "+Q",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    arm_sync_memory_operand,
    "+Q",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    arm_sync_memory_operand,
    "+Q",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    arm_sync_memory_operand,
    "+Q",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    arm_sync_memory_operand,
    "+Q",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    arm_sync_memory_operand,
    "+Q",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    arm_sync_memory_operand,
    "+Q",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "X",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    arm_sync_memory_operand,
    "+Q",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    arm_sync_memory_operand,
    "+Q",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "X",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    arm_sync_memory_operand,
    "+Q",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    arm_sync_memory_operand,
    "+Q",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "X",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    arm_sync_memory_operand,
    "+Q",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    BLKmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    plusminus_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    logical_binary_operator,
    "",
    DImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    logical_binary_operator,
    "",
    DImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    logical_binary_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    logical_binary_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    subreg_lowpart_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arm_reload_memory_operand,
    "=o",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&l",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    arm_reload_memory_operand,
    "o",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_reload_memory_operand,
    "=o",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    lt_ge_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    arm_float_compare_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_float_compare_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cmpdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cmpdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    arm_float_compare_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_float_compare_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cmpdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cmpdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    thumb1_cmp_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    thumb1_cmp_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    vfp_compare_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    vfp_compare_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    low_reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    low_register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    general_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    EImode,
    0,
    1
  },
  {
    general_operand,
    "",
    EImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    OImode,
    0,
    1
  },
  {
    general_operand,
    "",
    OImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    CImode,
    0,
    1
  },
  {
    general_operand,
    "",
    CImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XImode,
    0,
    1
  },
  {
    general_operand,
    "",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    EImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    EImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    CImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    CImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    XImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    CImode,
    0,
    1
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    CImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,!k,r,r,!k,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%rk,!k,r,rk,!k,rk",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,rI,!k,L,L,?n",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,rk,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,r,!k,?n,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "r,rI,r,r,?n",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r,0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,0,0",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,K,?n",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,0",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,?n",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI,rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    arm_extendqisi_mem_op,
    "Uq",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,Uq",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,r,m",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,K",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,m,r",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,r,r",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "m,r,r,F",
    HFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "r,mE,r",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "%f,f",
    SFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "%f,f",
    DFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    SFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "f,G",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG,f",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "f,G",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "f,G",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG,f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,f,r,r,r,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "fG,H,mE,f,r,f,r,mE,r",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,Q,r,m,r,f,f,f,m,!f,!r",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "Q,r,r,r,mF,fG,H,mF,f,r,f",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,m",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "f,m,f",
    XFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y,?&r,?&r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%y,0,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y,r,r",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y,y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y,y",
    V8QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "i,z",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,l,*hk,m,*m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,*mi,l,*hk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,m,w,!r,w,w,Uv",
    DImode,
    0,
    1
  },
  {
    di_operand,
    "rIK,mi,r,r,w,w,Uvi,w",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=t,?r,t,t,Uv,r,m,t,r",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "?r,t,Dv,UvE,t,mE,r,t,r",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_soft_df_operand,
    "=w,?r,w,w,r,m,w,Uv,w,r",
    DFmode,
    0,
    1
  },
  {
    soft_df_operand,
    "?r,w,Dy,D0,mF,r,UvF,w,w,r",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t,?r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t,r",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,?r,?r",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,r",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "+t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "+w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    HFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    HFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "t,t",
    SFmode,
    0,
    1
  },
  {
    vfp_compare_operand,
    "t,G",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w",
    DFmode,
    0,
    1
  },
  {
    vfp_compare_operand,
    "w,G",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_count,
    "M",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_count,
    "M",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,l,*hk,m,*m",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,*mi,l,*hk",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rI,n,r,m",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_count,
    "M",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_count,
    "M",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    thumb_16bit_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    low_reg_or_int_operand,
    "lM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "I",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "=l,l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l,0",
    SImode,
    0,
    1
  },
  {
    low_reg_or_int_operand,
    "lPt,Ps",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,t",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r,t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,t",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r,t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,w",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data insn_data[] = 
{
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:520 */
  {
    "*thumb1_adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%Q0, %Q0, %Q2\n\tadc\t%R0, %R0, %R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:531 */
  {
    "*arm_adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[4],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:559 */
  {
    "*adddi_sesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:588 */
  {
    "*adddi_zesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:650 */
  {
    "*arm_addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_4 },
#else
    { 0, output_4, 0 },
#endif
    0,
    &operand_data[10],
    3,
    0,
    6,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:682 */
  {
    "*thumb1_addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_5 },
#else
    { 0, 0, output_5 },
#endif
    0,
    &operand_data[13],
    3,
    0,
    9,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:738 */
  {
    "*addsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_6 },
#else
    { 0, output_6, 0 },
#endif
    0,
    &operand_data[16],
    3,
    2,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:753 */
  {
    "*addsi3_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_7 },
#else
    { 0, output_7, 0 },
#endif
    0,
    &operand_data[17],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:766 */
  {
    "*compare_negsi_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmn%?\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[19],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:778 */
  {
    "*cmpsi2_addneg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_9 },
#else
    { 0, output_9, 0 },
#endif
    0,
    &operand_data[21],
    4,
    1,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:834 */
  {
    "*addsi3_compare_op1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_10 },
#else
    { 0, output_10, 0 },
#endif
    0,
    &operand_data[16],
    3,
    3,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:849 */
  {
    "*addsi3_compare_op2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_11 },
#else
    { 0, output_11, 0 },
#endif
    0,
    &operand_data[16],
    3,
    3,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:864 */
  {
    "*compare_addsi2_op0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_12 },
#else
    { 0, output_12, 0 },
#endif
    0,
    &operand_data[17],
    2,
    1,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:877 */
  {
    "*compare_addsi2_op1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_13 },
#else
    { 0, output_13, 0 },
#endif
    0,
    &operand_data[17],
    2,
    1,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:890 */
  {
    "*addsi3_carryin_ltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:890 */
  {
    "*addsi3_carryin_geu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:907 */
  {
    "*addsi3_carryin_alt2_ltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:907 */
  {
    "*addsi3_carryin_alt2_geu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:917 */
  {
    "*addsi3_carryin_shift_ltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    5,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:917 */
  {
    "*addsi3_carryin_shift_geu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    5,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:942 */
  {
    "*arm_incscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_20 },
#else
    { 0, output_20, 0 },
#endif
    0,
    &operand_data[33],
    4,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1018 */
  {
    "*arm_subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subs\t%Q0, %Q1, %Q2\n\tsbc\t%R0, %R1, %R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[37],
    3,
    0,
    3,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1029 */
  {
    "*thumb_subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%Q0, %Q0, %Q2\n\tsbc\t%R0, %R0, %R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1039 */
  {
    "*subdi_di_zesidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subs\t%Q0, %Q1, %2\n\tsbc\t%R0, %R1, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1051 */
  {
    "*subdi_di_sesidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subs\t%Q0, %Q1, %2\n\tsbc\t%R0, %R1, %2, asr #31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1063 */
  {
    "*subdi_zesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsbs\t%Q0, %Q1, %2\n\trsc\t%R0, %R1, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1075 */
  {
    "*subdi_sesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsbs\t%Q0, %Q1, %2\n\trsc\t%R0, %R1, %2, asr #31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1087 */
  {
    "*subdi_zesidi_zesidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subs\t%Q0, %1, %2\n\tsbc\t%R0, %1, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1121 */
  {
    "*thumb1_subsi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[46],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1131 */
  {
    "*arm_subsi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_29 },
#else
    { 0, output_29, 0 },
#endif
    0,
    &operand_data[49],
    3,
    0,
    5,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1169 */
  {
    "*subsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_30 },
#else
    { 0, output_30, 0 },
#endif
    0,
    &operand_data[52],
    3,
    2,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1184 */
  {
    "*subsi3_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_31 },
#else
    { 0, output_31, 0 },
#endif
    0,
    &operand_data[52],
    3,
    2,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1206 */
  {
    "*arm_decscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_32 },
#else
    { 0, output_32, 0 },
#endif
    0,
    &operand_data[55],
    4,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1261 */
  {
    "*arm_mulsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%?\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[59],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1271 */
  {
    "*arm_mulsi3_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[62],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1286 */
  {
    "*thumb_mulsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_35 },
#else
    { 0, 0, output_35 },
#endif
    0,
    &operand_data[65],
    3,
    0,
    3,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1301 */
  {
    "*thumb_mulsi3_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_36 },
#else
    { 0, output_36, 0 },
#endif
    0,
    &operand_data[68],
    3,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1314 */
  {
    "*mulsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[59],
    3,
    2,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1328 */
  {
    "*mulsi3_compare0_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[62],
    3,
    2,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1342 */
  {
    "*mulsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[71],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1355 */
  {
    "*mulsi_compare0_scratch_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[74],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1370 */
  {
    "*mulsi3addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[77],
    4,
    0,
    4,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1382 */
  {
    "*mulsi3addsi_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[81],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1437 */
  {
    "*mulsi3addsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[77],
    4,
    3,
    4,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1454 */
  {
    "*mulsi3addsi_compare0_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[81],
    4,
    3,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1471 */
  {
    "*mulsi3addsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[85],
    4,
    0,
    4,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1486 */
  {
    "*mulsi3addsi_compare0_scratch_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[89],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1501 */
  {
    "*mulsi3subsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mls%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[81],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1523 */
  {
    "*mulsidi3adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[93],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1536 */
  {
    "*mulsidi3adddi_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[97],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1564 */
  {
    "*mulsidi3_nov6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[101],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1575 */
  {
    "*mulsidi3_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1595 */
  {
    "*umulsidi3_nov6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[101],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1606 */
  {
    "*umulsidi3_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1627 */
  {
    "*umulsidi3adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[93],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1640 */
  {
    "*umulsidi3adddi_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[97],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1667 */
  {
    "*smulsi3_highpart_nov6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[104],
    4,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1682 */
  {
    "*smulsi3_highpart_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[108],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1711 */
  {
    "*umulsi3_highpart_nov6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[104],
    4,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1726 */
  {
    "*umulsi3_highpart_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[108],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1741 */
  {
    "mulhisi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulbb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulhisi3,
    &operand_data[112],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1753 */
  {
    "*mulhisi3tb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smultb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[115],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1766 */
  {
    "*mulhisi3bt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulbt%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[118],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1779 */
  {
    "*mulhisi3tt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smultt%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[62],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1793 */
  {
    "maddhisi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlabb%?\t%0, %1, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_maddhisi4,
    &operand_data[121],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1806 */
  {
    "*maddhidi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlalbb%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[125],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1967 */
  {
    "*anddi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[129],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1976 */
  {
    "*anddi_zesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:1997 */
  {
    "*anddi_sesdi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2079 */
  {
    "*arm_andsi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_69 },
#else
    { 0, output_69, 0 },
#endif
    0,
    &operand_data[132],
    3,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2102 */
  {
    "*thumb1_andsi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%0, %0, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[135],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2111 */
  {
    "*andsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_71 },
#else
    { 0, output_71, 0 },
#endif
    0,
    &operand_data[138],
    3,
    2,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2126 */
  {
    "*andsi3_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_72 },
#else
    { 0, output_72, 0 },
#endif
    0,
    &operand_data[139],
    3,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2140 */
  {
    "*zeroextractsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_73 },
#else
    { 0, 0, output_73 },
#endif
    0,
    &operand_data[142],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2161 */
  {
    "*ne_zeroextractsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[145],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2198 */
  {
    "*ne_zeroextractsi_shifted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[145],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2223 */
  {
    "*ite_ne_zeroextractsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[145],
    5,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2261 */
  {
    "*ite_ne_zeroextractsi_shifted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[150],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2542 */
  {
    "insv_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bfc%?\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_insv_zero,
    &operand_data[154],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2553 */
  {
    "insv_t2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bfi%?\t%0, %3, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_insv_t2,
    &operand_data[154],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2565 */
  {
    "*anddi_notdi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[158],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2589 */
  {
    "*anddi_notzesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_81 },
#else
    { 0, output_81, 0 },
#endif
    0,
    &operand_data[161],
    3,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2616 */
  {
    "*anddi_notsesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2639 */
  {
    "andsi_notsi_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_andsi_notsi_si,
    &operand_data[62],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2648 */
  {
    "bicsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic\t%0, %0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bicsi3,
    &operand_data[164],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2657 */
  {
    "andsi_not_shiftsi_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %2%S4",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_andsi_not_shiftsi_si,
    &operand_data[167],
    5,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2672 */
  {
    "*andsi_notsi_si_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%.\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[62],
    3,
    2,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2685 */
  {
    "*andsi_notsi_si_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%.\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[74],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2705 */
  {
    "*iordi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[129],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2715 */
  {
    "*iordi_zesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_89 },
#else
    { 0, output_89, 0 },
#endif
    0,
    &operand_data[161],
    3,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2728 */
  {
    "*iordi_sesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2769 */
  {
    "*arm_iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_91 },
#else
    { 0, output_91, 0 },
#endif
    0,
    &operand_data[172],
    3,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2790 */
  {
    "*thumb1_iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr\t%0, %0, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[135],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2812 */
  {
    "*iorsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%.\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    3,
    2,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2824 */
  {
    "*iorsi3_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%.\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[175],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2843 */
  {
    "*xordi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[129],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2853 */
  {
    "*xordi_zesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_96 },
#else
    { 0, output_96, 0 },
#endif
    0,
    &operand_data[161],
    3,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2866 */
  {
    "*xordi_sesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2905 */
  {
    "*arm_xorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[178],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2914 */
  {
    "*thumb1_xorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor\t%0, %0, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[135],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2923 */
  {
    "*xorsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor%.\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[178],
    3,
    2,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2935 */
  {
    "*xorsi3_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "teq%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[179],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:2962 */
  {
    "*andsi_iorsi3_notsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%?\t%0, %1, %2\n\tbic%?\t%0, %0, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[181],
    4,
    0,
    3,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3101 */
  {
    "*smax_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %1, asr #31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3110 */
  {
    "*smax_m1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%?\t%0, %1, %1, asr #31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3119 */
  {
    "*arm_smax_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_105 },
#else
    { 0, output_105, 0 },
#endif
    0,
    &operand_data[185],
    3,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3150 */
  {
    "*smin_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and%?\t%0, %1, %1, asr #31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3159 */
  {
    "*arm_smin_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_107 },
#else
    { 0, output_107, 0 },
#endif
    0,
    &operand_data[185],
    3,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3182 */
  {
    "*arm_umaxsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_108 },
#else
    { 0, output_108, 0 },
#endif
    0,
    &operand_data[188],
    3,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3206 */
  {
    "*arm_uminsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_109 },
#else
    { 0, output_109, 0 },
#endif
    0,
    &operand_data[188],
    3,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3220 */
  {
    "*store_minmaxsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_110 },
#else
    { 0, 0, output_110 },
#endif
    0,
    &operand_data[191],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3247 */
  {
    "*minmax_arithsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_111 },
#else
    { 0, 0, output_111 },
#endif
    0,
    &operand_data[195],
    6,
    0,
    2,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3316 */
  {
    "arm_ashldi3_1bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs\t%Q0, %Q1, asl #1\n\tadc\t%R0, %R1, %R1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_arm_ashldi3_1bit,
    &operand_data[201],
    2,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3342 */
  {
    "*thumb1_ashlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lsl\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[203],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3375 */
  {
    "arm_ashrdi3_1bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs\t%R0, %R1, asr #1\n\tmov\t%Q0, %Q1, rrx",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_arm_ashrdi3_1bit,
    &operand_data[201],
    2,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3398 */
  {
    "*thumb1_ashrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "asr\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[203],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3431 */
  {
    "arm_lshrdi3_1bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs\t%R0, %R1, lsr #1\n\tmov\t%Q0, %Q1, rrx",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_arm_lshrdi3_1bit,
    &operand_data[201],
    2,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3457 */
  {
    "*thumb1_lshrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lsr\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[203],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3503 */
  {
    "*thumb1_rotrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror\t%0, %0, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[206],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3512 */
  {
    "*arm_shiftsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_119 },
#else
    { 0, 0, output_119 },
#endif
    0,
    &operand_data[209],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3526 */
  {
    "*shiftsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_120 },
#else
    { 0, 0, output_120 },
#endif
    0,
    &operand_data[213],
    4,
    3,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3543 */
  {
    "*shiftsi3_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_121 },
#else
    { 0, 0, output_121 },
#endif
    0,
    &operand_data[217],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3556 */
  {
    "*arm_notsi_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[213],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3570 */
  {
    "*arm_notsi_shiftsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[213],
    4,
    3,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3587 */
  {
    "*arm_not_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[217],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3639 */
  {
    "extv",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbfx%?\t%0, %1, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extv,
    &operand_data[221],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3650 */
  {
    "extzv_t2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ubfx%?\t%0, %1, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extzv_t2,
    &operand_data[221],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3681 */
  {
    "*arm_negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsbs\t%Q0, %Q1, #0\n\trsc\t%R0, %R1, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[225],
    2,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3691 */
  {
    "*thumb1_negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\t%R0, #0\n\tneg\t%Q0, %Q1\n\tsbc\t%R0, %R1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[227],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3707 */
  {
    "*arm_negsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsb%?\t%0, %1, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3715 */
  {
    "*thumb1_negsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[46],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3754 */
  {
    "*arm_abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_131 },
#else
    { 0, output_131, 0 },
#endif
    0,
    &operand_data[229],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3768 */
  {
    "*thumb1_abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[231],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3782 */
  {
    "*arm_neg_abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_133 },
#else
    { 0, output_133, 0 },
#endif
    0,
    &operand_data[229],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3796 */
  {
    "*thumb1_neg_abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[231],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3834 */
  {
    "one_cmpldi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmpldi2,
    &operand_data[7],
    2,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3860 */
  {
    "*arm_one_cmplsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3868 */
  {
    "*thumb1_one_cmplsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[46],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3876 */
  {
    "*notsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    2,
    1,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:3887 */
  {
    "*notsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[74],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4040 */
  {
    "*arm_zero_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_140 },
#else
    { 0, 0, output_140 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4061 */
  {
    "*arm_zero_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_141 },
#else
    { 0, output_141, 0 },
#endif
    0,
    &operand_data[234],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4082 */
  {
    "*arm_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_142 },
#else
    { 0, 0, output_142 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4127 */
  {
    "*thumb1_zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_143 },
#else
    { 0, 0, output_143 },
#endif
    0,
    &operand_data[236],
    2,
    0,
    2,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4179 */
  {
    "*arm_zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_144 },
#else
    { 0, output_144, 0 },
#endif
    0,
    &operand_data[238],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4192 */
  {
    "*arm_zero_extendhisi2_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_145 },
#else
    { 0, output_145, 0 },
#endif
    0,
    &operand_data[238],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4205 */
  {
    "*arm_zero_extendhisi2addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "uxtah%?\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[118],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4252 */
  {
    "*thumb1_zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_147 },
#else
    { 0, output_147, 0 },
#endif
    0,
    &operand_data[240],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4264 */
  {
    "*thumb1_zero_extendqisi2_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_148 },
#else
    { 0, output_148, 0 },
#endif
    0,
    &operand_data[240],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4276 */
  {
    "*arm_zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_149 },
#else
    { 0, output_149, 0 },
#endif
    0,
    &operand_data[242],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4290 */
  {
    "*arm_zero_extendqisi2_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_150 },
#else
    { 0, output_150, 0 },
#endif
    0,
    &operand_data[242],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4303 */
  {
    "*arm_zero_extendqisi2addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "uxtab%?\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[244],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4356 */
  {
    "*compareqi_eq0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tst\t%0, #255",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[245],
    1,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4410 */
  {
    "thumb1_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_153 },
#else
    { 0, 0, output_153 },
#endif
    (insn_gen_fn) gen_thumb1_extendhisi2,
    &operand_data[247],
    3,
    0,
    2,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4523 */
  {
    "*arm_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_154 },
#else
    { 0, output_154, 0 },
#endif
    0,
    &operand_data[238],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4538 */
  {
    "*arm_extendhisi2_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_155 },
#else
    { 0, output_155, 0 },
#endif
    0,
    &operand_data[238],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4551 */
  {
    "*arm_extendhisi2addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sxtah%?\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[118],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4584 */
  {
    "*arm_extendqihi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%(sb%)\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[250],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4623 */
  {
    "*arm_extendqisi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_158 },
#else
    { 0, output_158, 0 },
#endif
    0,
    &operand_data[252],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4637 */
  {
    "*arm_extendqisi_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_159 },
#else
    { 0, output_159, 0 },
#endif
    0,
    &operand_data[252],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4651 */
  {
    "*arm_extendqisi2addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sxtab%?\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[244],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4733 */
  {
    "thumb1_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_161 },
#else
    { 0, 0, output_161 },
#endif
    (insn_gen_fn) gen_thumb1_extendqisi2,
    &operand_data[254],
    2,
    0,
    3,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4857 */
  {
    "*arm_movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_162 },
#else
    { 0, 0, output_162 },
#endif
    0,
    &operand_data[256],
    2,
    0,
    5,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:4977 */
  {
    "*thumb1_movdi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_163 },
#else
    { 0, 0, output_163 },
#endif
    0,
    &operand_data[258],
    2,
    0,
    8,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:5106 */
  {
    "*arm_movt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movt%?\t%0, #:upper16:%c2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[260],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:5116 */
  {
    "*arm_movsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_165 },
#else
    { 0, output_165, 0 },
#endif
    0,
    &operand_data[263],
    2,
    0,
    6,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:5163 */
  {
    "*thumb1_movsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_166 },
#else
    { 0, output_166, 0 },
#endif
    0,
    &operand_data[265],
    2,
    0,
    9,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:5260 */
  {
    "pic_load_addr_32bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_pic_load_addr_32bit,
    &operand_data[267],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:5273 */
  {
    "pic_load_addr_thumb1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_pic_load_addr_thumb1,
    &operand_data[269],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:5282 */
  {
    "pic_add_dot_plus_four",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_169 },
#else
    { 0, 0, output_169 },
#endif
    (insn_gen_fn) gen_pic_add_dot_plus_four,
    &operand_data[271],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:5297 */
  {
    "pic_add_dot_plus_eight",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_170 },
#else
    { 0, 0, output_170 },
#endif
    (insn_gen_fn) gen_pic_add_dot_plus_eight,
    &operand_data[274],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:5312 */
  {
    "tls_load_dot_plus_eight",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_171 },
#else
    { 0, 0, output_171 },
#endif
    (insn_gen_fn) gen_tls_load_dot_plus_eight,
    &operand_data[274],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:5373 */
  {
    "*movsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_172 },
#else
    { 0, output_172, 0 },
#endif
    0,
    &operand_data[277],
    2,
    1,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:5696 */
  {
    "*thumb1_movhi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_173 },
#else
    { 0, 0, output_173 },
#endif
    0,
    &operand_data[279],
    2,
    0,
    6,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:5784 */
  {
    "*movhi_insn_arch4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_174 },
#else
    { 0, output_174, 0 },
#endif
    0,
    &operand_data[281],
    2,
    0,
    4,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:5803 */
  {
    "*movhi_bytes",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_175 },
#else
    { 0, output_175, 0 },
#endif
    0,
    &operand_data[283],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:5934 */
  {
    "*arm_movqi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_176 },
#else
    { 0, output_176, 0 },
#endif
    0,
    &operand_data[285],
    2,
    0,
    4,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:5949 */
  {
    "*thumb1_movqi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_177 },
#else
    { 0, output_177, 0 },
#endif
    0,
    &operand_data[287],
    2,
    0,
    6,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:5989 */
  {
    "*arm32_movhf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_178 },
#else
    { 0, 0, output_178 },
#endif
    0,
    &operand_data[289],
    2,
    0,
    4,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6034 */
  {
    "*thumb1_movhf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_179 },
#else
    { 0, 0, output_179 },
#endif
    0,
    &operand_data[291],
    2,
    0,
    5,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6106 */
  {
    "*arm_movsf_soft_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_180 },
#else
    { 0, output_180, 0 },
#endif
    0,
    &operand_data[293],
    2,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6125 */
  {
    "*thumb1_movsf_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_181 },
#else
    { 0, output_181, 0 },
#endif
    0,
    &operand_data[295],
    2,
    0,
    7,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6209 */
  {
    "*movdf_soft_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_182 },
#else
    { 0, 0, output_182 },
#endif
    0,
    &operand_data[297],
    2,
    0,
    5,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6236 */
  {
    "*thumb_movdf_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_183 },
#else
    { 0, 0, output_183 },
#endif
    0,
    &operand_data[299],
    2,
    0,
    6,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6314 */
  {
    "*ldmsi_postinc4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%1!, {%3, %4, %5, %6}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[301],
    7,
    4,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6333 */
  {
    "*ldmsi_postinc4_thumb1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldmia\t%1!, {%3, %4, %5, %6}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[308],
    7,
    4,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6351 */
  {
    "*ldmsi_postinc3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%1!, {%3, %4, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[301],
    6,
    3,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6368 */
  {
    "*ldmsi_postinc2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%1!, {%3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[301],
    5,
    2,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6385 */
  {
    "*ldmsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%1, {%2, %3, %4, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[315],
    6,
    3,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6401 */
  {
    "*ldmsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%1, {%2, %3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[315],
    5,
    2,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6415 */
  {
    "*ldmsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%1, {%2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[315],
    4,
    1,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6453 */
  {
    "*stmsi_postinc4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%1!, {%3, %4, %5, %6}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[321],
    7,
    4,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6472 */
  {
    "*stmsi_postinc4_thumb1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stmia\t%1!, {%3, %4, %5, %6}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[328],
    7,
    4,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6490 */
  {
    "*stmsi_postinc3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%1!, {%3, %4, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[321],
    6,
    3,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6507 */
  {
    "*stmsi_postinc2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%1!, {%3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[321],
    5,
    2,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6524 */
  {
    "*stmsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%1, {%2, %3, %4, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[335],
    6,
    3,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6540 */
  {
    "*stmsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%1, {%2, %3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[335],
    5,
    2,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6554 */
  {
    "*stmsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%1, {%2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[335],
    4,
    1,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6597 */
  {
    "movmem12b",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_198 },
#else
    { 0, 0, output_198 },
#endif
    (insn_gen_fn) gen_movmem12b,
    &operand_data[341],
    7,
    6,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6619 */
  {
    "movmem8b",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_199 },
#else
    { 0, 0, output_199 },
#endif
    (insn_gen_fn) gen_movmem8b,
    &operand_data[341],
    6,
    4,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6773 */
  {
    "cbranchsi4_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_200 },
#else
    { 0, 0, output_200 },
#endif
    (insn_gen_fn) gen_cbranchsi4_insn,
    &operand_data[348],
    4,
    0,
    2,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6821 */
  {
    "cbranchsi4_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_201 },
#else
    { 0, 0, output_201 },
#endif
    (insn_gen_fn) gen_cbranchsi4_scratch,
    &operand_data[352],
    5,
    0,
    2,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6857 */
  {
    "*movsi_cbranchsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_202 },
#else
    { 0, 0, output_202 },
#endif
    0,
    &operand_data[357],
    4,
    1,
    4,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6959 */
  {
    "*negated_cbranchsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_203 },
#else
    { 0, 0, output_203 },
#endif
    0,
    &operand_data[361],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:6994 */
  {
    "*tbit_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_204 },
#else
    { 0, 0, output_204 },
#endif
    0,
    &operand_data[365],
    5,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7038 */
  {
    "*tlobits_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_205 },
#else
    { 0, 0, output_205 },
#endif
    0,
    &operand_data[365],
    5,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7082 */
  {
    "*tstsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_206 },
#else
    { 0, 0, output_206 },
#endif
    0,
    &operand_data[370],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7119 */
  {
    "*andsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_207 },
#else
    { 0, 0, output_207 },
#endif
    0,
    &operand_data[374],
    6,
    2,
    4,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7186 */
  {
    "*orrsi3_cbranch_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_208 },
#else
    { 0, 0, output_208 },
#endif
    0,
    &operand_data[380],
    5,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7224 */
  {
    "*orrsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_209 },
#else
    { 0, 0, output_209 },
#endif
    0,
    &operand_data[374],
    6,
    2,
    4,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7291 */
  {
    "*xorsi3_cbranch_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_210 },
#else
    { 0, 0, output_210 },
#endif
    0,
    &operand_data[380],
    5,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7329 */
  {
    "*xorsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_211 },
#else
    { 0, 0, output_211 },
#endif
    0,
    &operand_data[374],
    6,
    2,
    4,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7396 */
  {
    "*bicsi3_cbranch_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_212 },
#else
    { 0, 0, output_212 },
#endif
    0,
    &operand_data[385],
    5,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7434 */
  {
    "*bicsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_213 },
#else
    { 0, 0, output_213 },
#endif
    0,
    &operand_data[390],
    6,
    2,
    5,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7503 */
  {
    "*cbranchne_decr1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_214 },
#else
    { 0, 0, output_214 },
#endif
    0,
    &operand_data[396],
    5,
    1,
    4,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7606 */
  {
    "*addsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_215 },
#else
    { 0, 0, output_215 },
#endif
    0,
    &operand_data[401],
    6,
    2,
    6,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7687 */
  {
    "*addsi3_cbranch_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_216 },
#else
    { 0, 0, output_216 },
#endif
    0,
    &operand_data[407],
    5,
    0,
    4,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7755 */
  {
    "*subsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_217 },
#else
    { 0, 0, output_217 },
#endif
    0,
    &operand_data[412],
    6,
    2,
    4,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7836 */
  {
    "*subsi3_cbranch_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_218 },
#else
    { 0, 0, output_218 },
#endif
    0,
    &operand_data[418],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7878 */
  {
    "*arm_cmpsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_219 },
#else
    { 0, output_219, 0 },
#endif
    0,
    &operand_data[17],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7889 */
  {
    "*arm_cmpsi_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[168],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7904 */
  {
    "*arm_cmpsi_shiftsi_swp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[422],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7919 */
  {
    "*arm_cmpsi_negshiftsi_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmn%?\t%0, %2%S1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[29],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7938 */
  {
    "*arm_cmpdi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%Q0, %Q1\n\tsbcs\t%2, %R0, %R1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[426],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7949 */
  {
    "*arm_cmpdi_unsigned",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%?\t%R0, %R1\n\tcmpeq\t%Q0, %Q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[426],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7959 */
  {
    "*arm_cmpdi_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%.\t%1, %Q0, %R0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[429],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7969 */
  {
    "*thumb_cmpdi_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr\t%1, %Q0, %R0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[431],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7981 */
  {
    "*cirrus_cmpsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcmps%?\tr15, %V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[433],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:7992 */
  {
    "*cirrus_cmpdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcmpd%?\tr15, %V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[435],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8002 */
  {
    "*cirrus_cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcmp64%?\tr15, %V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[437],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8018 */
  {
    "*deleted_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "\t%@ deleted compare",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    1,
    1,
    0,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8045 */
  {
    "*arm_cond_branch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_231 },
#else
    { 0, 0, output_231 },
#endif
    0,
    &operand_data[439],
    3,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8064 */
  {
    "*arm_cond_branch_reversed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_232 },
#else
    { 0, 0, output_232 },
#endif
    0,
    &operand_data[439],
    3,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8097 */
  {
    "*mov_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%D1\t%0, #0\n\tmov%d1\t%0, #1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[442],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8107 */
  {
    "*mov_negscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%D1\t%0, #0\n\tmvn%d1\t%0, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[442],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8117 */
  {
    "*mov_notscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%D1\t%0, #0\n\tmvn%d1\t%0, #1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[442],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8342 */
  {
    "*cstoresi_eq0_thumb1_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_236 },
#else
    { 0, output_236, 0 },
#endif
    0,
    &operand_data[445],
    3,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8354 */
  {
    "*cstoresi_ne0_thumb1_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%2, %1, #1\n\tsbc\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[448],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8365 */
  {
    "cstoresi_nltu_thumb1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%1, %2\n\tsbc\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cstoresi_nltu_thumb1,
    &operand_data[451],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8374 */
  {
    "cstoresi_ltu_thumb1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cstoresi_ltu_thumb1,
    &operand_data[451],
    3,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8389 */
  {
    "thumb1_addsi3_addgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%3, %4\n\tadc\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_thumb1_addsi3_addgeu,
    &operand_data[454],
    5,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8469 */
  {
    "*movsicc_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_241 },
#else
    { 0, output_241, 0 },
#endif
    0,
    &operand_data[459],
    5,
    0,
    8,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8490 */
  {
    "*movsfcc_soft_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_242 },
#else
    { 0, output_242, 0 },
#endif
    0,
    &operand_data[464],
    5,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8513 */
  {
    "*arm_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_243 },
#else
    { 0, 0, output_243 },
#endif
    0,
    &operand_data[273],
    1,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8530 */
  {
    "*thumb_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_244 },
#else
    { 0, 0, output_244 },
#endif
    0,
    &operand_data[273],
    1,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8587 */
  {
    "*call_reg_armv5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[469],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8597 */
  {
    "*call_reg_arm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_246 },
#else
    { 0, 0, output_246 },
#endif
    0,
    &operand_data[469],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8616 */
  {
    "*call_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_247 },
#else
    { 0, 0, output_247 },
#endif
    0,
    &operand_data[472],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8629 */
  {
    "*call_reg_thumb1_v5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[475],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8640 */
  {
    "*call_reg_thumb1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_249 },
#else
    { 0, 0, output_249 },
#endif
    0,
    &operand_data[475],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8698 */
  {
    "*call_value_reg_armv5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx%?\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[477],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8709 */
  {
    "*call_value_reg_arm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_251 },
#else
    { 0, 0, output_251 },
#endif
    0,
    &operand_data[477],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8725 */
  {
    "*call_value_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_252 },
#else
    { 0, 0, output_252 },
#endif
    0,
    &operand_data[471],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8739 */
  {
    "*call_value_reg_thumb1_v5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[474],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8751 */
  {
    "*call_value_reg_thumb1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_254 },
#else
    { 0, 0, output_254 },
#endif
    0,
    &operand_data[474],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8775 */
  {
    "*call_symbol",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_255 },
#else
    { 0, 0, output_255 },
#endif
    0,
    &operand_data[481],
    3,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8790 */
  {
    "*call_value_symbol",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_256 },
#else
    { 0, 0, output_256 },
#endif
    0,
    &operand_data[483],
    4,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8806 */
  {
    "*call_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl\t%a0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[484],
    3,
    0,
    0,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8819 */
  {
    "*call_value_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl\t%a1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[486],
    4,
    0,
    0,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8861 */
  {
    "*sibcall_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_259 },
#else
    { 0, 0, output_259 },
#endif
    0,
    &operand_data[490],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8873 */
  {
    "*sibcall_value_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_260 },
#else
    { 0, 0, output_260 },
#endif
    0,
    &operand_data[489],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8892 */
  {
    "*arm_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_261 },
#else
    { 0, 0, output_261 },
#endif
    0,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8909 */
  {
    "*cond_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_262 },
#else
    { 0, 0, output_262 },
#endif
    0,
    &operand_data[440],
    2,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8930 */
  {
    "*cond_return_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_263 },
#else
    { 0, 0, output_263 },
#endif
    0,
    &operand_data[440],
    2,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:8968 */
  {
    "*check_arch2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "teq\t%|r0, %|r0\n\tteq\t%|pc, %|pc",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[493],
    1,
    0,
    0,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9101 */
  {
    "blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_blockage,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9148 */
  {
    "arm_casesi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_266 },
#else
    { 0, 0, output_266 },
#endif
    (insn_gen_fn) gen_arm_casesi_internal,
    &operand_data[494],
    4,
    2,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9186 */
  {
    "thumb1_casesi_dispatch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_267 },
#else
    { 0, 0, output_267 },
#endif
    (insn_gen_fn) gen_thumb1_casesi_dispatch,
    &operand_data[273],
    1,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9217 */
  {
    "*arm_indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?\t%|pc, %0\t%@ indirect register jump",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[19],
    1,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9225 */
  {
    "*load_indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%|pc, %0\t%@ indirect memory jump",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[498],
    1,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9237 */
  {
    "*thumb1_indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\tpc, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[475],
    1,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9249 */
  {
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_271 },
#else
    { 0, 0, output_271 },
#endif
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9268 */
  {
    "*arith_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%?\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[499],
    6,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9302 */
  {
    "*arith_shiftsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%.\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[505],
    6,
    5,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9322 */
  {
    "*arith_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%.\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[511],
    6,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9340 */
  {
    "*sub_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    5,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9355 */
  {
    "*sub_shiftsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%.\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    5,
    4,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9375 */
  {
    "*sub_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%.\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[517],
    5,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9395 */
  {
    "*and_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%D1\t%0, #0\n\tand%d1\t%0, %2, #1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[522],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9406 */
  {
    "*ior_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_279 },
#else
    { 0, output_279, 0 },
#endif
    0,
    &operand_data[55],
    4,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9482 */
  {
    "*compare_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[526],
    4,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9531 */
  {
    "*cond_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_281 },
#else
    { 0, 0, output_281 },
#endif
    0,
    &operand_data[530],
    6,
    0,
    3,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9559 */
  {
    "*cond_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_282 },
#else
    { 0, 0, output_282 },
#endif
    0,
    &operand_data[536],
    6,
    0,
    2,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9585 */
  {
    "*cond_sub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_283 },
#else
    { 0, 0, output_283 },
#endif
    0,
    &operand_data[536],
    5,
    0,
    2,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9604 */
  {
    "*cmp_ite0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_284 },
#else
    { 0, 0, output_284 },
#endif
    0,
    &operand_data[542],
    7,
    0,
    4,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9639 */
  {
    "*cmp_ite1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_285 },
#else
    { 0, 0, output_285 },
#endif
    0,
    &operand_data[542],
    7,
    0,
    4,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9675 */
  {
    "*cmp_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_286 },
#else
    { 0, 0, output_286 },
#endif
    0,
    &operand_data[542],
    7,
    0,
    4,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9710 */
  {
    "*cmp_ior",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_287 },
#else
    { 0, 0, output_287 },
#endif
    0,
    &operand_data[542],
    7,
    0,
    4,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9745 */
  {
    "*ior_scc_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[549],
    7,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9775 */
  {
    "*ior_scc_scc_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[556],
    8,
    6,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9801 */
  {
    "*and_scc_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[549],
    7,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9833 */
  {
    "*and_scc_scc_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[556],
    8,
    6,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9863 */
  {
    "*and_scc_scc_nodom",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[564],
    7,
    0,
    3,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9932 */
  {
    "*negscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_293 },
#else
    { 0, 0, output_293 },
#endif
    0,
    &operand_data[571],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:9954 */
  {
    "movcond",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_294 },
#else
    { 0, 0, output_294 },
#endif
    (insn_gen_fn) gen_movcond,
    &operand_data[575],
    6,
    0,
    3,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10019 */
  {
    "*ifcompare_plus_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[581],
    7,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10035 */
  {
    "*if_plus_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_296 },
#else
    { 0, output_296, 0 },
#endif
    0,
    &operand_data[588],
    6,
    0,
    4,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10055 */
  {
    "*ifcompare_move_plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[581],
    7,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10071 */
  {
    "*if_move_plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_298 },
#else
    { 0, output_298, 0 },
#endif
    0,
    &operand_data[588],
    6,
    0,
    4,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10091 */
  {
    "*ifcompare_arith_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[594],
    10,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10109 */
  {
    "*if_arith_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%I6%d5\t%0, %1, %2\n\t%I7%D5\t%0, %3, %4",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[604],
    9,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10125 */
  {
    "*ifcompare_arith_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_301 },
#else
    { 0, 0, output_301 },
#endif
    0,
    &operand_data[613],
    8,
    0,
    2,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10166 */
  {
    "*if_arith_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_302 },
#else
    { 0, output_302, 0 },
#endif
    0,
    &operand_data[621],
    7,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10183 */
  {
    "*ifcompare_move_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_303 },
#else
    { 0, 0, output_303 },
#endif
    0,
    &operand_data[628],
    8,
    0,
    2,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10225 */
  {
    "*if_move_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_304 },
#else
    { 0, output_304, 0 },
#endif
    0,
    &operand_data[621],
    7,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10243 */
  {
    "*ifcompare_move_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[636],
    6,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10259 */
  {
    "*if_move_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_306 },
#else
    { 0, output_306, 0 },
#endif
    0,
    &operand_data[642],
    5,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10275 */
  {
    "*ifcompare_not_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[636],
    6,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10291 */
  {
    "*if_not_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_308 },
#else
    { 0, output_308, 0 },
#endif
    0,
    &operand_data[642],
    5,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10307 */
  {
    "*ifcompare_shift_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[647],
    8,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10324 */
  {
    "*if_shift_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_310 },
#else
    { 0, output_310, 0 },
#endif
    0,
    &operand_data[655],
    7,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10346 */
  {
    "*ifcompare_move_shift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[647],
    8,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10363 */
  {
    "*if_move_shift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_312 },
#else
    { 0, output_312, 0 },
#endif
    0,
    &operand_data[655],
    7,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10385 */
  {
    "*ifcompare_shift_shift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[662],
    10,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10404 */
  {
    "*if_shift_shift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%d5\t%0, %1%S6\n\tmov%D5\t%0, %3%S7",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[672],
    9,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10427 */
  {
    "*ifcompare_not_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[681],
    8,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10444 */
  {
    "*if_not_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%d5\t%0, %1\n\t%I6%D5\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[689],
    7,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10459 */
  {
    "*ifcompare_arith_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[681],
    8,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10476 */
  {
    "*if_arith_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%D5\t%0, %1\n\t%I6%d5\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[689],
    7,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10491 */
  {
    "*ifcompare_neg_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[636],
    6,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10506 */
  {
    "*if_neg_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_320 },
#else
    { 0, output_320, 0 },
#endif
    0,
    &operand_data[642],
    5,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10522 */
  {
    "*ifcompare_move_neg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[636],
    6,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10537 */
  {
    "*if_move_neg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_322 },
#else
    { 0, output_322, 0 },
#endif
    0,
    &operand_data[642],
    5,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10553 */
  {
    "*arith_adjacentmem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_323 },
#else
    { 0, 0, output_323 },
#endif
    0,
    &operand_data[696],
    5,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10825 */
  {
    "sibcall_epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_324 },
#else
    { 0, 0, output_324 },
#endif
    (insn_gen_fn) gen_sibcall_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:10843 */
  {
    "*epilogue_insns",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_325 },
#else
    { 0, 0, output_325 },
#endif
    0,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11003 */
  {
    "*cond_move_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_326 },
#else
    { 0, output_326, 0 },
#endif
    0,
    &operand_data[701],
    5,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11021 */
  {
    "*sign_extract_onebit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_327 },
#else
    { 0, 0, output_327 },
#endif
    0,
    &operand_data[145],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11037 */
  {
    "*not_signextract_onebit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_328 },
#else
    { 0, 0, output_328 },
#endif
    0,
    &operand_data[145],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11059 */
  {
    "*push_multi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_329 },
#else
    { 0, 0, output_329 },
#endif
    0,
    &operand_data[706],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11101 */
  {
    "stack_tie",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_tie,
    &operand_data[709],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11112 */
  {
    "*push_fp_multi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_331 },
#else
    { 0, 0, output_331 },
#endif
    0,
    &operand_data[711],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11131 */
  {
    "align_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_332 },
#else
    { 0, 0, output_332 },
#endif
    (insn_gen_fn) gen_align_4,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11140 */
  {
    "align_8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_333 },
#else
    { 0, 0, output_333 },
#endif
    (insn_gen_fn) gen_align_8,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11149 */
  {
    "align_16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_334 },
#else
    { 0, 0, output_334 },
#endif
    (insn_gen_fn) gen_align_16,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11158 */
  {
    "align_32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_335 },
#else
    { 0, 0, output_335 },
#endif
    (insn_gen_fn) gen_align_32,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11167 */
  {
    "consttable_end",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_336 },
#else
    { 0, 0, output_336 },
#endif
    (insn_gen_fn) gen_consttable_end,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11176 */
  {
    "consttable_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_337 },
#else
    { 0, 0, output_337 },
#endif
    (insn_gen_fn) gen_consttable_1,
    &operand_data[273],
    1,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11188 */
  {
    "consttable_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_338 },
#else
    { 0, 0, output_338 },
#endif
    (insn_gen_fn) gen_consttable_2,
    &operand_data[273],
    1,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11201 */
  {
    "consttable_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_339 },
#else
    { 0, 0, output_339 },
#endif
    (insn_gen_fn) gen_consttable_4,
    &operand_data[273],
    1,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11237 */
  {
    "consttable_8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_340 },
#else
    { 0, 0, output_340 },
#endif
    (insn_gen_fn) gen_consttable_8,
    &operand_data[273],
    1,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11261 */
  {
    "consttable_16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_341 },
#else
    { 0, 0, output_341 },
#endif
    (insn_gen_fn) gen_consttable_16,
    &operand_data[273],
    1,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11305 */
  {
    "*thumb1_tablejump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\t%|pc, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[475],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11315 */
  {
    "clzsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "clz%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_clzsi2,
    &operand_data[28],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11323 */
  {
    "rbitsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rbit%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rbitsi2,
    &operand_data[28],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11347 */
  {
    "prefetch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pld\t%a0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_prefetch,
    &operand_data[714],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11364 */
  {
    "prologue_use",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%@ %0 needed for prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_prologue_use,
    &operand_data[717],
    1,
    0,
    0,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11388 */
  {
    "arm_eh_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_arm_eh_return,
    &operand_data[718],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11403 */
  {
    "thumb_eh_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_thumb_eh_return,
    &operand_data[232],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11421 */
  {
    "load_tp_hard",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mrc%?\tp15, 0, %0, c13, c0, 3\t@ load_tp_hard",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_tp_hard,
    &operand_data[271],
    1,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11430 */
  {
    "load_tp_soft",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl\t__aeabi_read_tp\t@ load_tp_soft",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_tp_soft,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11440 */
  {
    "*arm_movtas_ze",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movt%?\t%0, %c1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[720],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11451 */
  {
    "*arm_rev",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rev%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/arm.md:11460 */
  {
    "*thumb1_rev",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rev\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[231],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:103 */
  {
    "*addsf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_354 },
#else
    { 0, output_354, 0 },
#endif
    0,
    &operand_data[722],
    3,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:115 */
  {
    "*adddf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_355 },
#else
    { 0, output_355, 0 },
#endif
    0,
    &operand_data[725],
    3,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:127 */
  {
    "*adddf_esfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_356 },
#else
    { 0, output_356, 0 },
#endif
    0,
    &operand_data[728],
    3,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:140 */
  {
    "*adddf_df_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[731],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:151 */
  {
    "*adddf_esfdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:163 */
  {
    "*subsf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_359 },
#else
    { 0, output_359, 0 },
#endif
    0,
    &operand_data[737],
    3,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:174 */
  {
    "*subdf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_360 },
#else
    { 0, output_360, 0 },
#endif
    0,
    &operand_data[740],
    3,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:186 */
  {
    "*subdf_esfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "suf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[743],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:197 */
  {
    "*subdf_df_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_362 },
#else
    { 0, output_362, 0 },
#endif
    0,
    &operand_data[746],
    3,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:210 */
  {
    "*subdf_esfdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "suf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:222 */
  {
    "*mulsf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fml%?s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[749],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:232 */
  {
    "*muldf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[752],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:242 */
  {
    "*muldf_esfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[743],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:253 */
  {
    "*muldf_df_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[731],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:264 */
  {
    "*muldf_esfdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:277 */
  {
    "*divsf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_369 },
#else
    { 0, output_369, 0 },
#endif
    0,
    &operand_data[737],
    3,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:289 */
  {
    "*divdf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_370 },
#else
    { 0, output_370, 0 },
#endif
    0,
    &operand_data[740],
    3,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:301 */
  {
    "*divdf_esfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dvf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[743],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:312 */
  {
    "*divdf_df_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdf%?d\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[755],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:323 */
  {
    "*divdf_esfdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dvf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:335 */
  {
    "*modsf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[749],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:345 */
  {
    "*moddf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[752],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:355 */
  {
    "*moddf_esfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[743],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:366 */
  {
    "*moddf_df_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[731],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:377 */
  {
    "*moddf_esfdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:389 */
  {
    "*negsf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mnf%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[749],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:398 */
  {
    "*negdf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mnf%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[731],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:407 */
  {
    "*negdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mnf%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:417 */
  {
    "*abssf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[749],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:426 */
  {
    "*absdf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[731],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:435 */
  {
    "*absdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:445 */
  {
    "*sqrtsf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqt%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[749],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:454 */
  {
    "*sqrtdf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqt%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[731],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:463 */
  {
    "*sqrtdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqt%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:473 */
  {
    "*floatsisf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "flt%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[758],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:482 */
  {
    "*floatsidf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "flt%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[760],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:491 */
  {
    "*fix_truncsfsi2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fix%?z\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[762],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:500 */
  {
    "*fix_truncdfsi2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fix%?z\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[764],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:509 */
  {
    "*truncdfsf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvf%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[766],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:519 */
  {
    "*extendsfdf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvf%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:528 */
  {
    "*movsf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_394 },
#else
    { 0, output_394, 0 },
#endif
    0,
    &operand_data[768],
    2,
    0,
    9,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:553 */
  {
    "*movdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_395 },
#else
    { 0, 0, output_395 },
#endif
    0,
    &operand_data[770],
    2,
    0,
    11,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:591 */
  {
    "*movxf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_396 },
#else
    { 0, 0, output_396 },
#endif
    0,
    &operand_data[772],
    2,
    0,
    3,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:617 */
  {
    "*thumb2_movsf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_397 },
#else
    { 0, output_397, 0 },
#endif
    0,
    &operand_data[768],
    2,
    0,
    9,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:644 */
  {
    "*thumb2_movdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_398 },
#else
    { 0, 0, output_398 },
#endif
    0,
    &operand_data[770],
    2,
    0,
    11,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:683 */
  {
    "*thumb2_movxf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_399 },
#else
    { 0, 0, output_399 },
#endif
    0,
    &operand_data[774],
    2,
    0,
    7,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:706 */
  {
    "*cmpsf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_400 },
#else
    { 0, output_400, 0 },
#endif
    0,
    &operand_data[776],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:718 */
  {
    "*cmpdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_401 },
#else
    { 0, output_401, 0 },
#endif
    0,
    &operand_data[778],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:730 */
  {
    "*cmpesfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_402 },
#else
    { 0, output_402, 0 },
#endif
    0,
    &operand_data[729],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:743 */
  {
    "*cmpdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmf%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[732],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:754 */
  {
    "*cmpsf_trap_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_404 },
#else
    { 0, output_404, 0 },
#endif
    0,
    &operand_data[776],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:766 */
  {
    "*cmpdf_trap_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_405 },
#else
    { 0, output_405, 0 },
#endif
    0,
    &operand_data[778],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:778 */
  {
    "*cmp_esfdf_df_trap_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_406 },
#else
    { 0, output_406, 0 },
#endif
    0,
    &operand_data[729],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:791 */
  {
    "*cmp_df_esfdf_trap_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmf%?e\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[732],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:802 */
  {
    "*movsfcc_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_408 },
#else
    { 0, output_408, 0 },
#endif
    0,
    &operand_data[780],
    5,
    0,
    8,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:824 */
  {
    "*movdfcc_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_409 },
#else
    { 0, output_409, 0 },
#endif
    0,
    &operand_data[785],
    5,
    0,
    8,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:846 */
  {
    "*thumb2_movsfcc_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_410 },
#else
    { 0, output_410, 0 },
#endif
    0,
    &operand_data[780],
    5,
    0,
    8,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/fpa.md:868 */
  {
    "*thumb2_movdfcc_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_411 },
#else
    { 0, output_411, 0 },
#endif
    0,
    &operand_data[785],
    5,
    0,
    8,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:32 */
  {
    "cirrus_adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfadd64%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_adddi3,
    &operand_data[790],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:52 */
  {
    "*cirrus_addsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfadds%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[793],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:62 */
  {
    "*cirrus_adddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfaddd%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[796],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:72 */
  {
    "cirrus_subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfsub64%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_subdi3,
    &operand_data[790],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:92 */
  {
    "*cirrus_subsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfsubs%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[793],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:102 */
  {
    "*cirrus_subdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfsubd%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[796],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:122 */
  {
    "muldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfmul64%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_muldi3,
    &operand_data[790],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:157 */
  {
    "*cirrus_mulsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfmuls%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[793],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:167 */
  {
    "*cirrus_muldf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfmuld%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[796],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:204 */
  {
    "ashldi3_cirrus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfrshl64%?\t%V1, %V0, %s2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3_cirrus,
    &operand_data[799],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:213 */
  {
    "cirrus_ashldi_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfsh64%?\t%V0, %V1, #%s2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_ashldi_const,
    &operand_data[802],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:222 */
  {
    "cirrus_ashiftrtdi_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfsh64%?\t%V0, %V1, #-%s2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_ashiftrtdi_const,
    &operand_data[802],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:231 */
  {
    "*cirrus_absdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfabs64%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[790],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:240 */
  {
    "*cirrus_negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfneg64%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[790],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:257 */
  {
    "*cirrus_negsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfnegs%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[793],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:265 */
  {
    "*cirrus_negdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfnegd%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[796],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:283 */
  {
    "*cirrus_abssf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfabss%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[793],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:291 */
  {
    "*cirrus_absdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfabsd%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[796],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:300 */
  {
    "cirrus_floatsisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfmv64lr%?\t%Z2, %1\n\tcfcvt32s%?\t%V0, %Y2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_floatsisf2,
    &operand_data[805],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:310 */
  {
    "cirrus_floatsidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfmv64lr%?\t%Z2, %1\n\tcfcvt32d%?\t%V0, %Y2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_floatsidf2,
    &operand_data[808],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:320 */
  {
    "floatdisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcvt64s%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdisf2,
    &operand_data[811],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:327 */
  {
    "floatdidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcvt64d%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdidf2,
    &operand_data[813],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:334 */
  {
    "cirrus_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cftruncs32%?\t%Y2, %V1\n\tcfmvr64l%?\t%0, %Z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_truncsfsi2,
    &operand_data[815],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:344 */
  {
    "cirrus_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cftruncd32%?\t%Y2, %V1\n\tcfmvr64l%?\t%0, %Z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_truncdfsi2,
    &operand_data[818],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:353 */
  {
    "*cirrus_truncdfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcvtds%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[821],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:362 */
  {
    "*cirrus_extendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcvtsd%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[823],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:370 */
  {
    "*cirrus_arm_movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_438 },
#else
    { 0, 0, output_438 },
#endif
    0,
    &operand_data[825],
    2,
    0,
    8,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:406 */
  {
    "*cirrus_movsf_hard_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_439 },
#else
    { 0, output_439, 0 },
#endif
    0,
    &operand_data[827],
    2,
    0,
    8,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:428 */
  {
    "*cirrus_movdf_hard_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_440 },
#else
    { 0, 0, output_440 },
#endif
    0,
    &operand_data[829],
    2,
    0,
    10,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:458 */
  {
    "*cirrus_thumb2_movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_441 },
#else
    { 0, 0, output_441 },
#endif
    0,
    &operand_data[825],
    2,
    0,
    8,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:490 */
  {
    "*thumb2_cirrus_movsf_hard_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_442 },
#else
    { 0, output_442, 0 },
#endif
    0,
    &operand_data[827],
    2,
    0,
    8,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/cirrus.md:512 */
  {
    "*thumb2_cirrus_movdf_hard_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_443 },
#else
    { 0, 0, output_443 },
#endif
    0,
    &operand_data[829],
    2,
    0,
    10,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:23 */
  {
    "iwmmxt_iordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_444 },
#else
    { 0, output_444, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_iordi3,
    &operand_data[831],
    3,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:43 */
  {
    "iwmmxt_xordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_445 },
#else
    { 0, output_445, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_xordi3,
    &operand_data[831],
    3,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:55 */
  {
    "iwmmxt_anddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_446 },
#else
    { 0, output_446, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_anddi3,
    &operand_data[831],
    3,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:67 */
  {
    "iwmmxt_nanddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wandn%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_nanddi3,
    &operand_data[834],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:75 */
  {
    "*iwmmxt_arm_movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_448 },
#else
    { 0, 0, output_448 },
#endif
    0,
    &operand_data[837],
    2,
    0,
    8,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:107 */
  {
    "*iwmmxt_movsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_449 },
#else
    { 0, 0, output_449 },
#endif
    0,
    &operand_data[839],
    2,
    0,
    10,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:145 */
  {
    "*cond_iwmmxt_movsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_450 },
#else
    { 0, 0, output_450 },
#endif
    0,
    &operand_data[841],
    4,
    0,
    6,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:170 */
  {
    "movv2si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_451 },
#else
    { 0, 0, output_451 },
#endif
    (insn_gen_fn) gen_movv2si_internal,
    &operand_data[845],
    2,
    0,
    8,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:170 */
  {
    "movv4hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_452 },
#else
    { 0, 0, output_452 },
#endif
    (insn_gen_fn) gen_movv4hi_internal,
    &operand_data[847],
    2,
    0,
    8,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:170 */
  {
    "movv8qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_453 },
#else
    { 0, 0, output_453 },
#endif
    (insn_gen_fn) gen_movv8qi_internal,
    &operand_data[849],
    2,
    0,
    8,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:193 */
  {
    "*addv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[851],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:193 */
  {
    "*addv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:193 */
  {
    "*addv8qi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:201 */
  {
    "ssaddv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddbss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssaddv8qi3,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:209 */
  {
    "ssaddv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssaddv4hi3,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:217 */
  {
    "ssaddv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssaddv2si3,
    &operand_data[851],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:225 */
  {
    "usaddv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddbus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_usaddv8qi3,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:233 */
  {
    "usaddv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_usaddv4hi3,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:241 */
  {
    "usaddv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_usaddv2si3,
    &operand_data[851],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:249 */
  {
    "*subv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[851],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:249 */
  {
    "*subv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:249 */
  {
    "*subv8qi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:257 */
  {
    "sssubv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubbss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sssubv8qi3,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:265 */
  {
    "sssubv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sssubv4hi3,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:273 */
  {
    "sssubv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sssubv2si3,
    &operand_data[851],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:281 */
  {
    "ussubv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubbus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ussubv8qi3,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:289 */
  {
    "ussubv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ussubv4hi3,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:297 */
  {
    "ussubv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ussubv2si3,
    &operand_data[851],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:305 */
  {
    "*mulv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulul%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:313 */
  {
    "smulv4hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulsm%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smulv4hi3_highpart,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:324 */
  {
    "umulv4hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulum%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulv4hi3_highpart,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:335 */
  {
    "iwmmxt_wmacs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacs%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmacs,
    &operand_data[860],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:344 */
  {
    "iwmmxt_wmacsz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacsz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmacsz,
    &operand_data[864],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:352 */
  {
    "iwmmxt_wmacu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacu%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmacu,
    &operand_data[860],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:361 */
  {
    "iwmmxt_wmacuz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacuz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmacuz,
    &operand_data[864],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:371 */
  {
    "iwmmxt_clrdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_clrdi,
    &operand_data[834],
    1,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:380 */
  {
    "*iwmmxt_clrv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[857],
    1,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:390 */
  {
    "*iwmmxt_clrv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[854],
    1,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:398 */
  {
    "*iwmmxt_clrv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[851],
    1,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:407 */
  {
    "iwmmxt_uavgrndv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2br%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_uavgrndv8qi3,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:426 */
  {
    "iwmmxt_uavgrndv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2hr%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_uavgrndv4hi3,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:442 */
  {
    "iwmmxt_uavgv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2b%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_uavgv8qi3,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:452 */
  {
    "iwmmxt_uavgv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2h%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_uavgv4hi3,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:462 */
  {
    "iwmmxt_psadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psadbw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_psadbw,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:473 */
  {
    "iwmmxt_tinsrb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tinsrb%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tinsrb,
    &operand_data[867],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:483 */
  {
    "iwmmxt_tinsrh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tinsrh%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tinsrh,
    &operand_data[871],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:493 */
  {
    "iwmmxt_tinsrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tinsrw%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tinsrw,
    &operand_data[875],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:503 */
  {
    "iwmmxt_textrmub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_textrmub,
    &operand_data[879],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:512 */
  {
    "iwmmxt_textrmsb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_textrmsb,
    &operand_data[879],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:521 */
  {
    "iwmmxt_textrmuh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_textrmuh,
    &operand_data[882],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:530 */
  {
    "iwmmxt_textrmsh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_textrmsh,
    &operand_data[882],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:541 */
  {
    "iwmmxt_textrmw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_textrmw,
    &operand_data[885],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:549 */
  {
    "iwmmxt_wshufh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wshufh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wshufh,
    &operand_data[888],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:573 */
  {
    "eqv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eqv8qi3,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:582 */
  {
    "eqv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eqv4hi3,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:591 */
  {
    "eqv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eqv2si3,
    &operand_data[851],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:600 */
  {
    "gtuv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtuv8qi3,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:609 */
  {
    "gtuv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtuv4hi3,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:618 */
  {
    "gtuv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtuv2si3,
    &operand_data[851],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:627 */
  {
    "gtv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtv8qi3,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:636 */
  {
    "gtv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtv4hi3,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:645 */
  {
    "gtv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtv2si3,
    &operand_data[851],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:656 */
  {
    "*smaxv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[851],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:656 */
  {
    "*smaxv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:656 */
  {
    "*smaxv8qi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:664 */
  {
    "*umaxv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[851],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:664 */
  {
    "*umaxv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:664 */
  {
    "*umaxv8qi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:672 */
  {
    "*sminv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[851],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:672 */
  {
    "*sminv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:672 */
  {
    "*sminv8qi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:680 */
  {
    "*uminv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[851],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:680 */
  {
    "*uminv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:680 */
  {
    "*uminv8qi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:690 */
  {
    "iwmmxt_wpackhss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackhss,
    &operand_data[891],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:699 */
  {
    "iwmmxt_wpackwss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackwss,
    &operand_data[894],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:708 */
  {
    "iwmmxt_wpackdss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackdss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackdss,
    &operand_data[897],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:717 */
  {
    "iwmmxt_wpackhus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackhus,
    &operand_data[891],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:726 */
  {
    "iwmmxt_wpackwus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackwus,
    &operand_data[894],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:735 */
  {
    "iwmmxt_wpackdus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackdus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackdus,
    &operand_data[897],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:745 */
  {
    "iwmmxt_wunpckihb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckihb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckihb,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:771 */
  {
    "iwmmxt_wunpckihh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckihh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckihh,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:789 */
  {
    "iwmmxt_wunpckihw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckihw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckihw,
    &operand_data[851],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:803 */
  {
    "iwmmxt_wunpckilb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckilb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckilb,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:829 */
  {
    "iwmmxt_wunpckilh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckilh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckilh,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:847 */
  {
    "iwmmxt_wunpckilw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckilw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckilw,
    &operand_data[851],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:861 */
  {
    "iwmmxt_wunpckehub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehub,
    &operand_data[900],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:871 */
  {
    "iwmmxt_wunpckehuh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehuh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehuh,
    &operand_data[902],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:880 */
  {
    "iwmmxt_wunpckehuw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehuw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehuw,
    &operand_data[904],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:889 */
  {
    "iwmmxt_wunpckehsb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehsb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehsb,
    &operand_data[900],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:899 */
  {
    "iwmmxt_wunpckehsh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehsh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehsh,
    &operand_data[902],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:908 */
  {
    "iwmmxt_wunpckehsw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehsw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehsw,
    &operand_data[904],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:917 */
  {
    "iwmmxt_wunpckelub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckelub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckelub,
    &operand_data[900],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:927 */
  {
    "iwmmxt_wunpckeluh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckeluh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckeluh,
    &operand_data[902],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:936 */
  {
    "iwmmxt_wunpckeluw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckeluw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckeluw,
    &operand_data[904],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:945 */
  {
    "iwmmxt_wunpckelsb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckelsb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckelsb,
    &operand_data[900],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:955 */
  {
    "iwmmxt_wunpckelsh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckelsh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckelsh,
    &operand_data[902],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:964 */
  {
    "iwmmxt_wunpckelsw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckelsw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckelsw,
    &operand_data[904],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:975 */
  {
    "rorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrorhg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rorv4hi3,
    &operand_data[906],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:983 */
  {
    "rorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrorwg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rorv2si3,
    &operand_data[909],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:991 */
  {
    "rordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrordg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rordi3,
    &operand_data[912],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:999 */
  {
    "ashrv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrahg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv4hi3_iwmmxt,
    &operand_data[906],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:999 */
  {
    "ashrv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrawg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv2si3_iwmmxt,
    &operand_data[909],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:999 */
  {
    "ashrdi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsradg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrdi3_iwmmxt,
    &operand_data[912],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1007 */
  {
    "lshrv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrlhg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv4hi3_iwmmxt,
    &operand_data[906],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1007 */
  {
    "lshrv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrlwg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv2si3_iwmmxt,
    &operand_data[909],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1007 */
  {
    "lshrdi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrldg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrdi3_iwmmxt,
    &operand_data[912],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1015 */
  {
    "ashlv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsllhg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv4hi3_iwmmxt,
    &operand_data[906],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1015 */
  {
    "ashlv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsllwg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv2si3_iwmmxt,
    &operand_data[909],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1015 */
  {
    "ashldi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wslldg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3_iwmmxt,
    &operand_data[912],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1023 */
  {
    "rorv4hi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrorh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rorv4hi3_di,
    &operand_data[915],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1031 */
  {
    "rorv2si3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrorw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rorv2si3_di,
    &operand_data[918],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1039 */
  {
    "rordi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrord%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rordi3_di,
    &operand_data[834],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1047 */
  {
    "ashrv4hi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrah%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv4hi3_di,
    &operand_data[915],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1055 */
  {
    "ashrv2si3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsraw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv2si3_di,
    &operand_data[918],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1063 */
  {
    "ashrdi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrad%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrdi3_di,
    &operand_data[834],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1071 */
  {
    "lshrv4hi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrlh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv4hi3_di,
    &operand_data[915],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1079 */
  {
    "lshrv2si3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrlw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv2si3_di,
    &operand_data[918],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1087 */
  {
    "lshrdi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrld%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrdi3_di,
    &operand_data[834],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1095 */
  {
    "ashlv4hi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsllh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv4hi3_di,
    &operand_data[915],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1103 */
  {
    "ashlv2si3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsllw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv2si3_di,
    &operand_data[918],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1111 */
  {
    "ashldi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wslld%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3_di,
    &operand_data[834],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1119 */
  {
    "iwmmxt_wmadds",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmadds%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmadds,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1127 */
  {
    "iwmmxt_wmaddu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaddu%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmaddu,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1135 */
  {
    "iwmmxt_tmia",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmia%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmia,
    &operand_data[921],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1146 */
  {
    "iwmmxt_tmiaph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiaph%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmiaph,
    &operand_data[921],
    4,
    2,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1162 */
  {
    "iwmmxt_tmiabb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiabb%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmiabb,
    &operand_data[921],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1173 */
  {
    "iwmmxt_tmiatb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiatb%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmiatb,
    &operand_data[921],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1186 */
  {
    "iwmmxt_tmiabt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiabt%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmiabt,
    &operand_data[921],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1199 */
  {
    "iwmmxt_tmiatt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiatt%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmiatt,
    &operand_data[921],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1214 */
  {
    "iwmmxt_tbcstqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcstb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tbcstqi,
    &operand_data[925],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1221 */
  {
    "iwmmxt_tbcsthi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcsth%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tbcsthi,
    &operand_data[927],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1228 */
  {
    "iwmmxt_tbcstsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcstw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tbcstsi,
    &operand_data[929],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1235 */
  {
    "iwmmxt_tmovmskb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmovmskb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmovmskb,
    &operand_data[879],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1242 */
  {
    "iwmmxt_tmovmskh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmovmskh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmovmskh,
    &operand_data[882],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1249 */
  {
    "iwmmxt_tmovmskw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmovmskw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmovmskw,
    &operand_data[885],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1256 */
  {
    "iwmmxt_waccb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waccb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_waccb,
    &operand_data[931],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1263 */
  {
    "iwmmxt_wacch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wacch%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wacch,
    &operand_data[864],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1270 */
  {
    "iwmmxt_waccw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waccw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_waccw,
    &operand_data[904],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1277 */
  {
    "iwmmxt_walign",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_583 },
#else
    { 0, output_583, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_walign,
    &operand_data[933],
    4,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1292 */
  {
    "iwmmxt_tmrc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmrc%?\t%0, %w1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmrc,
    &operand_data[937],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1300 */
  {
    "iwmmxt_tmcr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmcr%?\t%w0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmcr,
    &operand_data[938],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1308 */
  {
    "iwmmxt_wsadb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsadb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wsadb,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1316 */
  {
    "iwmmxt_wsadh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsadh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wsadh,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1324 */
  {
    "iwmmxt_wsadbz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsadbz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wsadbz,
    &operand_data[857],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/iwmmxt.md:1332 */
  {
    "iwmmxt_wsadhz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsadhz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wsadhz,
    &operand_data[854],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:22 */
  {
    "*arm_movsi_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_590 },
#else
    { 0, 0, output_590 },
#endif
    0,
    &operand_data[940],
    2,
    0,
    11,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:92 */
  {
    "*thumb2_movsi_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_591 },
#else
    { 0, 0, output_591 },
#endif
    0,
    &operand_data[942],
    2,
    0,
    13,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:135 */
  {
    "*arm_movdi_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_592 },
#else
    { 0, 0, output_592 },
#endif
    0,
    &operand_data[944],
    2,
    0,
    8,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:177 */
  {
    "*arm_movdi_vfp_cortexa8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_593 },
#else
    { 0, 0, output_593 },
#endif
    0,
    &operand_data[946],
    2,
    0,
    8,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:221 */
  {
    "*thumb2_movdi_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_594 },
#else
    { 0, 0, output_594 },
#endif
    0,
    &operand_data[944],
    2,
    0,
    8,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:260 */
  {
    "*movhf_vfp_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_595 },
#else
    { 0, 0, output_595 },
#endif
    0,
    &operand_data[948],
    2,
    0,
    9,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:315 */
  {
    "*movhf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_596 },
#else
    { 0, 0, output_596 },
#endif
    0,
    &operand_data[950],
    2,
    0,
    7,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:369 */
  {
    "*movsf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_597 },
#else
    { 0, 0, output_597 },
#endif
    0,
    &operand_data[952],
    2,
    0,
    9,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:406 */
  {
    "*thumb2_movsf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_598 },
#else
    { 0, 0, output_598 },
#endif
    0,
    &operand_data[952],
    2,
    0,
    9,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:446 */
  {
    "*movdf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_599 },
#else
    { 0, 0, output_599 },
#endif
    0,
    &operand_data[954],
    2,
    0,
    10,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:497 */
  {
    "*thumb2_movdf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_600 },
#else
    { 0, 0, output_600 },
#endif
    0,
    &operand_data[954],
    2,
    0,
    10,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:548 */
  {
    "*movsfcc_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_601 },
#else
    { 0, output_601, 0 },
#endif
    0,
    &operand_data[956],
    5,
    0,
    9,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:572 */
  {
    "*thumb2_movsfcc_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_602 },
#else
    { 0, output_602, 0 },
#endif
    0,
    &operand_data[956],
    5,
    0,
    9,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:596 */
  {
    "*movdfcc_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_603 },
#else
    { 0, output_603, 0 },
#endif
    0,
    &operand_data[961],
    5,
    0,
    9,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:620 */
  {
    "*thumb2_movdfcc_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_604 },
#else
    { 0, output_604, 0 },
#endif
    0,
    &operand_data[961],
    5,
    0,
    9,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:647 */
  {
    "*abssf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabss%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[966],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:656 */
  {
    "*absdf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabsd%?\t%P0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[968],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:665 */
  {
    "*negsf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_607 },
#else
    { 0, output_607, 0 },
#endif
    0,
    &operand_data[970],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:676 */
  {
    "*negdf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_608 },
#else
    { 0, output_608, 0 },
#endif
    0,
    &operand_data[972],
    2,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:725 */
  {
    "*addsf3_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fadds%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[974],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:735 */
  {
    "*adddf3_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "faddd%?\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[977],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:746 */
  {
    "*subsf3_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsubs%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[974],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:756 */
  {
    "*subdf3_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsubd%?\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[977],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:769 */
  {
    "*divsf3_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdivs%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[980],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:779 */
  {
    "*divdf3_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdivd%?\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[983],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:792 */
  {
    "*mulsf3_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmuls%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[980],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:802 */
  {
    "*muldf3_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmuld%?\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[983],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:813 */
  {
    "*mulsf3negsf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmuls%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[980],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:823 */
  {
    "*muldf3negdf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmuld%?\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[983],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:837 */
  {
    "*mulsf3addsf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmacs%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[986],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:848 */
  {
    "*muldf3adddf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmacd%?\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[990],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:860 */
  {
    "*mulsf3subsf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmscs%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[986],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:871 */
  {
    "*muldf3subdf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmscd%?\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[990],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:883 */
  {
    "*mulsf3negsfaddsf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmacs%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[986],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:894 */
  {
    "*fmuldf3negdfadddf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmacd%?\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[990],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:907 */
  {
    "*mulsf3negsfsubsf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmscs%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[986],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:919 */
  {
    "*muldf3negdfsubdf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmscd%?\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[990],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:934 */
  {
    "*extendsfdf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvtds%?\t%P0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[994],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:943 */
  {
    "*truncdfsf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvtsd%?\t%0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[996],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:952 */
  {
    "extendhfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtb%?.f32.f16\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendhfsf2,
    &operand_data[998],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:961 */
  {
    "truncsfhf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtb%?.f16.f32\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_truncsfhf2,
    &operand_data[1000],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:970 */
  {
    "*truncsisf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ftosizs%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1002],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:979 */
  {
    "*truncsidf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ftosizd%?\t%0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1004],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:989 */
  {
    "fixuns_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ftouizs%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncsfsi2,
    &operand_data[1002],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:998 */
  {
    "fixuns_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ftouizd%?\t%0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncdfsi2,
    &operand_data[1006],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:1008 */
  {
    "*floatsisf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsitos%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1008],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:1017 */
  {
    "*floatsidf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsitod%?\t%P0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1010],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:1027 */
  {
    "floatunssisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fuitos%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatunssisf2,
    &operand_data[1008],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:1036 */
  {
    "floatunssidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fuitod%?\t%P0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatunssidf2,
    &operand_data[1010],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:1048 */
  {
    "*sqrtsf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrts%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[966],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:1057 */
  {
    "*sqrtdf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrtd%?\t%P0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[968],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:1069 */
  {
    "*movcc_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmstat%?",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:1078 */
  {
    "*cmpsf_split_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1012],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:1093 */
  {
    "*cmpsf_trap_split_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1012],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:1108 */
  {
    "*cmpdf_split_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1014],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:1123 */
  {
    "*cmpdf_trap_split_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1014],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:1141 */
  {
    "*cmpsf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_646 },
#else
    { 0, output_646, 0 },
#endif
    0,
    &operand_data[1016],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:1153 */
  {
    "*cmpsf_trap_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_647 },
#else
    { 0, output_647, 0 },
#endif
    0,
    &operand_data[1016],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:1165 */
  {
    "*cmpdf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_648 },
#else
    { 0, output_648, 0 },
#endif
    0,
    &operand_data[1018],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:1177 */
  {
    "*cmpdf_trap_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_649 },
#else
    { 0, output_649, 0 },
#endif
    0,
    &operand_data[1018],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/vfp.md:1192 */
  {
    "*push_multi_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_650 },
#else
    { 0, 0, output_650 },
#endif
    0,
    &operand_data[1020],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:27 */
  {
    "*thumb2_incscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_651 },
#else
    { 0, output_651, 0 },
#endif
    0,
    &operand_data[33],
    4,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:40 */
  {
    "*thumb2_decscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_652 },
#else
    { 0, output_652, 0 },
#endif
    0,
    &operand_data[55],
    4,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:54 */
  {
    "*thumb_andsi_not_shiftsi_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %2%S4",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1023],
    5,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:67 */
  {
    "*thumb2_smaxsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_654 },
#else
    { 0, output_654, 0 },
#endif
    0,
    &operand_data[188],
    3,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:81 */
  {
    "*thumb2_sminsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_655 },
#else
    { 0, output_655, 0 },
#endif
    0,
    &operand_data[188],
    3,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:95 */
  {
    "*thumb32_umaxsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_656 },
#else
    { 0, output_656, 0 },
#endif
    0,
    &operand_data[188],
    3,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:109 */
  {
    "*thumb2_uminsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_657 },
#else
    { 0, output_657, 0 },
#endif
    0,
    &operand_data[188],
    3,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:123 */
  {
    "*thumb2_notsi_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1028],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:135 */
  {
    "*thumb2_notsi_shiftsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1028],
    4,
    3,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:150 */
  {
    "*thumb2_not_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1032],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:165 */
  {
    "*thumb2_negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "negs\t%Q0, %Q1\n\tsbc\t%R0, %R1, %R1, lsl #1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1036],
    2,
    0,
    2,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:175 */
  {
    "*thumb2_abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_662 },
#else
    { 0, output_662, 0 },
#endif
    0,
    &operand_data[229],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:189 */
  {
    "*thumb2_neg_abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_663 },
#else
    { 0, output_663, 0 },
#endif
    0,
    &operand_data[229],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:203 */
  {
    "*thumb2_movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_664 },
#else
    { 0, 0, output_664 },
#endif
    0,
    &operand_data[256],
    2,
    0,
    5,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:231 */
  {
    "*thumb2_movsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_665 },
#else
    { 0, output_665, 0 },
#endif
    0,
    &operand_data[1038],
    2,
    0,
    8,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:253 */
  {
    "tls_load_dot_plus_four",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_666 },
#else
    { 0, 0, output_666 },
#endif
    (insn_gen_fn) gen_tls_load_dot_plus_four,
    &operand_data[1040],
    4,
    0,
    4,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:271 */
  {
    "*thumb2_movhi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_667 },
#else
    { 0, output_667, 0 },
#endif
    0,
    &operand_data[1044],
    2,
    0,
    4,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:286 */
  {
    "*thumb2_movsf_soft_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_668 },
#else
    { 0, output_668, 0 },
#endif
    0,
    &operand_data[293],
    2,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:303 */
  {
    "*thumb2_movdf_soft_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_669 },
#else
    { 0, 0, output_669 },
#endif
    0,
    &operand_data[297],
    2,
    0,
    5,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:326 */
  {
    "*thumb2_cmpsi_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1024],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:339 */
  {
    "*thumb2_cmpsi_shiftsi_swp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1024],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:352 */
  {
    "*thumb2_cmpsi_neg_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmn%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1024],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:365 */
  {
    "*thumb2_mov_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ite\t%D1\n\tmov%D1\t%0, #0\n\tmov%d1\t%0, #1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[442],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:375 */
  {
    "*thumb2_mov_negscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ite\t%D1\n\tmov%D1\t%0, #0\n\tmvn%d1\t%0, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[442],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:385 */
  {
    "*thumb2_mov_notscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ite\t%D1\n\tmov%D1\t%0, #0\n\tmvn%d1\t%0, #1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[442],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:395 */
  {
    "*thumb2_movsicc_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_676 },
#else
    { 0, output_676, 0 },
#endif
    0,
    &operand_data[459],
    5,
    0,
    8,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:416 */
  {
    "*thumb2_movsfcc_soft_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_677 },
#else
    { 0, output_677, 0 },
#endif
    0,
    &operand_data[464],
    5,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:430 */
  {
    "*call_reg_thumb2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[469],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:440 */
  {
    "*call_value_reg_thumb2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[474],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:451 */
  {
    "*thumb2_indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bx\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[475],
    1,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:464 */
  {
    "*thumb2_arith_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%?\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1046],
    6,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:497 */
  {
    "*thumb2_arith_shiftsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%.\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1052],
    6,
    5,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:515 */
  {
    "*thumb2_arith_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%.\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1058],
    6,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:531 */
  {
    "*thumb2_sub_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1064],
    5,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:544 */
  {
    "*thumb2_sub_shiftsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%.\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1064],
    5,
    4,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:562 */
  {
    "*thumb2_sub_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%.\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1069],
    5,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:578 */
  {
    "*thumb2_and_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ite\t%D1\n\tmov%D1\t%0, #0\n\tand%d1\t%0, %2, #1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[522],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:589 */
  {
    "*thumb2_ior_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_688 },
#else
    { 0, output_688, 0 },
#endif
    0,
    &operand_data[55],
    4,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:602 */
  {
    "*thumb2_cond_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_689 },
#else
    { 0, 0, output_689 },
#endif
    0,
    &operand_data[530],
    6,
    0,
    3,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:644 */
  {
    "*thumb2_cond_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_690 },
#else
    { 0, 0, output_690 },
#endif
    0,
    &operand_data[536],
    6,
    0,
    2,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:681 */
  {
    "*thumb2_cond_sub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_691 },
#else
    { 0, 0, output_691 },
#endif
    0,
    &operand_data[536],
    5,
    0,
    2,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:704 */
  {
    "*thumb2_negscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_692 },
#else
    { 0, 0, output_692 },
#endif
    0,
    &operand_data[571],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:727 */
  {
    "*thumb2_movcond",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_693 },
#else
    { 0, 0, output_693 },
#endif
    0,
    &operand_data[575],
    6,
    0,
    3,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:806 */
  {
    "*thumb2_zero_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?\t%Q0, %1\n\tmov%?\t%R0, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:827 */
  {
    "*thumb2_zero_extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_695 },
#else
    { 0, output_695, 0 },
#endif
    0,
    &operand_data[1074],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:852 */
  {
    "*thumb2_zero_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_696 },
#else
    { 0, output_696, 0 },
#endif
    0,
    &operand_data[234],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:877 */
  {
    "*thumb2_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?\t%Q0, %1\n\tasr?\t%R0, %1, #31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:897 */
  {
    "*thumb2_extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_698 },
#else
    { 0, output_698, 0 },
#endif
    0,
    &operand_data[1074],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:921 */
  {
    "*thumb2_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_699 },
#else
    { 0, output_699, 0 },
#endif
    0,
    &operand_data[234],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:947 */
  {
    "*thumb2_extendqisi_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_700 },
#else
    { 0, output_700, 0 },
#endif
    0,
    &operand_data[242],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:960 */
  {
    "*thumb2_zero_extendhisi2_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_701 },
#else
    { 0, output_701, 0 },
#endif
    0,
    &operand_data[238],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:973 */
  {
    "*thumb2_zero_extendqisi2_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_702 },
#else
    { 0, output_702, 0 },
#endif
    0,
    &operand_data[242],
    2,
    0,
    2,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:986 */
  {
    "thumb2_casesi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_703 },
#else
    { 0, 0, output_703 },
#endif
    (insn_gen_fn) gen_thumb2_casesi_internal,
    &operand_data[1076],
    5,
    2,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1003 */
  {
    "thumb2_casesi_internal_pic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_704 },
#else
    { 0, 0, output_704 },
#endif
    (insn_gen_fn) gen_thumb2_casesi_internal_pic,
    &operand_data[1076],
    6,
    2,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1023 */
  {
    "*thumb2_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_705 },
#else
    { 0, 0, output_705 },
#endif
    0,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1034 */
  {
    "thumb2_eh_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_thumb2_eh_return,
    &operand_data[718],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1049 */
  {
    "*thumb2_alusi3_short",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%I3%!\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1082],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1083 */
  {
    "*thumb2_shiftsi3_short",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_708 },
#else
    { 0, 0, output_708 },
#endif
    0,
    &operand_data[1086],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1115 */
  {
    "*thumb2_movqi_shortim",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%!\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1090],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1115 */
  {
    "*thumb2_movhi_shortim",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%!\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1092],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1115 */
  {
    "*thumb2_movsi_shortim",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%!\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1094],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1143 */
  {
    "*thumb2_addsi_short",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_712 },
#else
    { 0, 0, output_712 },
#endif
    0,
    &operand_data[1096],
    3,
    0,
    2,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1167 */
  {
    "divsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdiv%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divsi3,
    &operand_data[62],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1177 */
  {
    "udivsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "udiv%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivsi3,
    &operand_data[62],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1187 */
  {
    "*thumb2_subsi_short",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%!\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1099],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1198 */
  {
    "*thumb2_addsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_716 },
#else
    { 0, 0, output_716 },
#endif
    0,
    &operand_data[1102],
    3,
    2,
    3,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1224 */
  {
    "*thumb2_addsi3_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_717 },
#else
    { 0, 0, output_717 },
#endif
    0,
    &operand_data[1105],
    2,
    0,
    2,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1277 */
  {
    "*thumb2_mulsi_short",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%!\t%0, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1107],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1288 */
  {
    "*thumb2_mulsi_short_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muls\t%0, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[135],
    3,
    2,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1301 */
  {
    "*thumb2_mulsi_short_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muls\t%0, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1110],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1313 */
  {
    "*thumb2_cbz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_721 },
#else
    { 0, 0, output_721 },
#endif
    0,
    &operand_data[1113],
    2,
    0,
    2,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1336 */
  {
    "*thumb2_cbnz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_722 },
#else
    { 0, 0, output_722 },
#endif
    0,
    &operand_data[1113],
    2,
    0,
    2,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1372 */
  {
    "*thumb2_one_cmplsi2_short",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%!\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1086],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1395 */
  {
    "*thumb2_negsi2_short",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg%!\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1086],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1405 */
  {
    "orsi_notsi_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orn%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_orsi_notsi_si,
    &operand_data[62],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1414 */
  {
    "*thumb_orsi_not_shiftsi_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orn%?\t%0, %1, %2%S4",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1115],
    5,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/thumb2.md:1427 */
  {
    "*thumb2_iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_727 },
#else
    { 0, output_727, 0 },
#endif
    0,
    &operand_data[132],
    3,
    0,
    3,
    2
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:427 */
  {
    "*neon_movv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_728 },
#else
    { 0, 0, output_728 },
#endif
    0,
    &operand_data[1120],
    2,
    0,
    9,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:427 */
  {
    "*neon_movv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_729 },
#else
    { 0, 0, output_729 },
#endif
    0,
    &operand_data[1122],
    2,
    0,
    9,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:427 */
  {
    "*neon_movv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_730 },
#else
    { 0, 0, output_730 },
#endif
    0,
    &operand_data[1124],
    2,
    0,
    9,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:427 */
  {
    "*neon_movv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_731 },
#else
    { 0, 0, output_731 },
#endif
    0,
    &operand_data[1126],
    2,
    0,
    9,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:507 */
  {
    "*neon_movv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_732 },
#else
    { 0, 0, output_732 },
#endif
    0,
    &operand_data[1128],
    2,
    0,
    9,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:507 */
  {
    "*neon_movv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_733 },
#else
    { 0, 0, output_733 },
#endif
    0,
    &operand_data[1130],
    2,
    0,
    9,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:507 */
  {
    "*neon_movv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_734 },
#else
    { 0, 0, output_734 },
#endif
    0,
    &operand_data[1132],
    2,
    0,
    9,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:507 */
  {
    "*neon_movv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_735 },
#else
    { 0, 0, output_735 },
#endif
    0,
    &operand_data[1134],
    2,
    0,
    9,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:507 */
  {
    "*neon_movv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_736 },
#else
    { 0, 0, output_736 },
#endif
    0,
    &operand_data[1136],
    2,
    0,
    9,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:507 */
  {
    "*neon_movti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_737 },
#else
    { 0, 0, output_737 },
#endif
    0,
    &operand_data[1138],
    2,
    0,
    9,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:576 */
  {
    "*neon_movei",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_738 },
#else
    { 0, 0, output_738 },
#endif
    0,
    &operand_data[1140],
    2,
    0,
    3,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:576 */
  {
    "*neon_movoi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_739 },
#else
    { 0, 0, output_739 },
#endif
    0,
    &operand_data[1142],
    2,
    0,
    3,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:576 */
  {
    "*neon_movci",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_740 },
#else
    { 0, 0, output_740 },
#endif
    0,
    &operand_data[1144],
    2,
    0,
    3,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:576 */
  {
    "*neon_movxi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_741 },
#else
    { 0, 0, output_741 },
#endif
    0,
    &operand_data[1146],
    2,
    0,
    3,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:692 */
  {
    "*movmisalignv8qi_neon_store",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vst1.8\t{%P1}, %A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1148],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:692 */
  {
    "*movmisalignv4hi_neon_store",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vst1.16\t{%P1}, %A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1150],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:692 */
  {
    "*movmisalignv2si_neon_store",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vst1.32\t{%P1}, %A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1152],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:692 */
  {
    "*movmisalignv2sf_neon_store",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vst1.32\t{%P1}, %A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1154],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:692 */
  {
    "*movmisaligndi_neon_store",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vst1.64\t{%P1}, %A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1156],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:700 */
  {
    "*movmisalignv8qi_neon_load",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vld1.8\t{%P0}, %A1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1158],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:700 */
  {
    "*movmisalignv4hi_neon_load",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vld1.16\t{%P0}, %A1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1160],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:700 */
  {
    "*movmisalignv2si_neon_load",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vld1.32\t{%P0}, %A1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1162],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:700 */
  {
    "*movmisalignv2sf_neon_load",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vld1.32\t{%P0}, %A1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1164],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:700 */
  {
    "*movmisaligndi_neon_load",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vld1.64\t{%P0}, %A1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1166],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:708 */
  {
    "*movmisalignv16qi_neon_store",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vst1.8\t{%q1}, %A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1168],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:708 */
  {
    "*movmisalignv8hi_neon_store",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vst1.16\t{%q1}, %A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1170],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:708 */
  {
    "*movmisalignv4si_neon_store",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vst1.32\t{%q1}, %A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1172],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:708 */
  {
    "*movmisalignv4sf_neon_store",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vst1.32\t{%q1}, %A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1174],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:708 */
  {
    "*movmisalignv2di_neon_store",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vst1.64\t{%q1}, %A0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1176],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:716 */
  {
    "*movmisalignv16qi_neon_load",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vld1.8\t{%q0}, %A1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1178],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:716 */
  {
    "*movmisalignv8hi_neon_load",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vld1.16\t{%q0}, %A1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1180],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:716 */
  {
    "*movmisalignv4si_neon_load",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vld1.32\t{%q0}, %A1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1182],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:716 */
  {
    "*movmisalignv4sf_neon_load",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vld1.32\t{%q0}, %A1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1184],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:716 */
  {
    "*movmisalignv2di_neon_load",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vld1.64\t{%q0}, %A1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1186],
    2,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:724 */
  {
    "vec_setv8qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_762 },
#else
    { 0, 0, output_762 },
#endif
    (insn_gen_fn) gen_vec_setv8qi_internal,
    &operand_data[1188],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:724 */
  {
    "vec_setv4hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_763 },
#else
    { 0, 0, output_763 },
#endif
    (insn_gen_fn) gen_vec_setv4hi_internal,
    &operand_data[1192],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:724 */
  {
    "vec_setv2si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_764 },
#else
    { 0, 0, output_764 },
#endif
    (insn_gen_fn) gen_vec_setv2si_internal,
    &operand_data[1196],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:724 */
  {
    "vec_setv2sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_765 },
#else
    { 0, 0, output_765 },
#endif
    (insn_gen_fn) gen_vec_setv2sf_internal,
    &operand_data[1200],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:743 */
  {
    "vec_setv16qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_766 },
#else
    { 0, 0, output_766 },
#endif
    (insn_gen_fn) gen_vec_setv16qi_internal,
    &operand_data[1204],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:743 */
  {
    "vec_setv8hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_767 },
#else
    { 0, 0, output_767 },
#endif
    (insn_gen_fn) gen_vec_setv8hi_internal,
    &operand_data[1208],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:743 */
  {
    "vec_setv4si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_768 },
#else
    { 0, 0, output_768 },
#endif
    (insn_gen_fn) gen_vec_setv4si_internal,
    &operand_data[1212],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:743 */
  {
    "vec_setv4sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_769 },
#else
    { 0, 0, output_769 },
#endif
    (insn_gen_fn) gen_vec_setv4sf_internal,
    &operand_data[1216],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:770 */
  {
    "vec_setv2di_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_770 },
#else
    { 0, 0, output_770 },
#endif
    (insn_gen_fn) gen_vec_setv2di_internal,
    &operand_data[1220],
    4,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:802 */
  {
    "vec_extractv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_771 },
#else
    { 0, 0, output_771 },
#endif
    (insn_gen_fn) gen_vec_extractv8qi,
    &operand_data[1224],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:802 */
  {
    "vec_extractv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_772 },
#else
    { 0, 0, output_772 },
#endif
    (insn_gen_fn) gen_vec_extractv4hi,
    &operand_data[1227],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:802 */
  {
    "vec_extractv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_773 },
#else
    { 0, 0, output_773 },
#endif
    (insn_gen_fn) gen_vec_extractv2si,
    &operand_data[1230],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:802 */
  {
    "vec_extractv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_774 },
#else
    { 0, 0, output_774 },
#endif
    (insn_gen_fn) gen_vec_extractv2sf,
    &operand_data[1233],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:821 */
  {
    "vec_extractv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_775 },
#else
    { 0, 0, output_775 },
#endif
    (insn_gen_fn) gen_vec_extractv16qi,
    &operand_data[1236],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:821 */
  {
    "vec_extractv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_776 },
#else
    { 0, 0, output_776 },
#endif
    (insn_gen_fn) gen_vec_extractv8hi,
    &operand_data[1239],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:821 */
  {
    "vec_extractv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_777 },
#else
    { 0, 0, output_777 },
#endif
    (insn_gen_fn) gen_vec_extractv4si,
    &operand_data[1242],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:821 */
  {
    "vec_extractv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_778 },
#else
    { 0, 0, output_778 },
#endif
    (insn_gen_fn) gen_vec_extractv4sf,
    &operand_data[1245],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:845 */
  {
    "vec_extractv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_779 },
#else
    { 0, 0, output_779 },
#endif
    (insn_gen_fn) gen_vec_extractv2di,
    &operand_data[1248],
    3,
    0,
    1,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:876 */
  {
    "*addv8qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1251],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:876 */
  {
    "*addv16qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i8\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1254],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:876 */
  {
    "*addv4hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1257],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:876 */
  {
    "*addv8hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i16\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1260],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:876 */
  {
    "*addv2si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1263],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:876 */
  {
    "*addv4si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1266],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:876 */
  {
    "*addv2sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.f32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1269],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:876 */
  {
    "*addv4sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.f32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1272],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:876 */
  {
    "*addv2di3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i64\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1275],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:890 */
  {
    "adddi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_789 },
#else
    { 0, 0, output_789 },
#endif
    (insn_gen_fn) gen_adddi3_neon,
    &operand_data[1278],
    3,
    0,
    4,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:912 */
  {
    "*subv8qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.i8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1251],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:912 */
  {
    "*subv16qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.i8\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1254],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:912 */
  {
    "*subv4hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.i16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1257],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:912 */
  {
    "*subv8hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.i16\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1260],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:912 */
  {
    "*subv2si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.i32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1263],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:912 */
  {
    "*subv4si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.i32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1266],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:912 */
  {
    "*subv2sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.f32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1269],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:912 */
  {
    "*subv4sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.f32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1272],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:912 */
  {
    "*subv2di3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.i64\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1275],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:926 */
  {
    "subdi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_799 },
#else
    { 0, 0, output_799 },
#endif
    (insn_gen_fn) gen_subdi3_neon,
    &operand_data[1281],
    3,
    0,
    5,
    3
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:949 */
  {
    "*mulv8qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.i8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1251],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:949 */
  {
    "*mulv16qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.i8\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1254],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:949 */
  {
    "*mulv4hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.i16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1257],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:949 */
  {
    "*mulv8hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.i16\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1260],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:949 */
  {
    "*mulv2si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.i32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1263],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:949 */
  {
    "*mulv4si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.i32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1266],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:949 */
  {
    "*mulv2sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.f32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1269],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:949 */
  {
    "*mulv4sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.f32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1272],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:949 */
  {
    "*mulv2di3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.i64\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1275],
    3,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:970 */
  {
    "mulv8qi3addv8qi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.i8\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv8qi3addv8qi_neon,
    &operand_data[1284],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:970 */
  {
    "mulv16qi3addv16qi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.i8\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv16qi3addv16qi_neon,
    &operand_data[1288],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:970 */
  {
    "mulv4hi3addv4hi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.i16\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv4hi3addv4hi_neon,
    &operand_data[1292],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:970 */
  {
    "mulv8hi3addv8hi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.i16\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv8hi3addv8hi_neon,
    &operand_data[1296],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:970 */
  {
    "mulv2si3addv2si_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.i32\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv2si3addv2si_neon,
    &operand_data[1300],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:970 */
  {
    "mulv4si3addv4si_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.i32\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv4si3addv4si_neon,
    &operand_data[1304],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:970 */
  {
    "mulv2sf3addv2sf_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.f32\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv2sf3addv2sf_neon,
    &operand_data[1308],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:970 */
  {
    "mulv4sf3addv4sf_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.f32\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv4sf3addv4sf_neon,
    &operand_data[1312],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:970 */
  {
    "mulv2di3addv2di_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.i64\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv2di3addv2di_neon,
    &operand_data[1316],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:992 */
  {
    "mulv8qi3negv8qiaddv8qi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmls.i8\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv8qi3negv8qiaddv8qi_neon,
    &operand_data[1284],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:992 */
  {
    "mulv16qi3negv16qiaddv16qi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmls.i8\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv16qi3negv16qiaddv16qi_neon,
    &operand_data[1288],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:992 */
  {
    "mulv4hi3negv4hiaddv4hi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmls.i16\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv4hi3negv4hiaddv4hi_neon,
    &operand_data[1292],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:992 */
  {
    "mulv8hi3negv8hiaddv8hi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmls.i16\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv8hi3negv8hiaddv8hi_neon,
    &operand_data[1296],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:992 */
  {
    "mulv2si3negv2siaddv2si_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmls.i32\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv2si3negv2siaddv2si_neon,
    &operand_data[1300],
    4,
    0,
    1,
    1
  },
  /* /home/fdkit/GPL-AirCam-v1.2/openwrt/build_dir/toolchain-arm_v5te_gcc-linaro_uClibc-0.9.32_eabi/gcc-linaro-4.5-2011.02-0/gcc/config/arm/neon.md:992 */
  {
    "mulv4si3negv4siaddv4si_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmls.i32\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv4si3negv4siaddv4si_neon,
    &operand_data[1304],
    4,
    0,
    1,
    1
  },
  {
    "mulv2sf3negv2sfaddv2sf_neon",
#if HAVE_DESIGNATED_INITIALIZERS
#else
};