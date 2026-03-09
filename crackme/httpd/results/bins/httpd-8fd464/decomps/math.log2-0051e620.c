
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void math.log2(float64 x, float64 ~r1) */

float64 math_log2(float64 x)

{
  long in_FS_OFFSET;
  float64 x_spill;
  undefined8 local_20;
  undefined8 local_18;
  
                    /* Unresolved local var: float64 frac@[???]
                       Unresolved local var: int exp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  math_frexp(x_spill);
  if ((local_20 == 0.5) && (!NAN(local_20))) {
    return (float64)(double)(local_18 + -1);
  }
  math_archLog();
  return (float64)(local_20 * 1.4426950408889634 + (double)local_18);
}

