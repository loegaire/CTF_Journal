
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void math.frexp(float64 f, float64 frac, int exp) */

multireturn_float64_int_ math_frexp(float64 f)

{
  int in_RAX;
  long lVar1;
  multireturn_float64_int_ mVar2;
  multireturn_float64_int_ mVar3;
  multireturn_float64_int_ mVar4;
  float64 f_spill;
  
                    /* Unresolved local var: uint64 x@[???] */
  if (((double)f_spill == 0.0) && (!NAN((double)f_spill))) {
    mVar4.exp = in_RAX;
    mVar4.frac = f_spill;
    return mVar4;
  }
  if ((((double)f_spill <= 1.79769313486232e+308) && (-1.79769313486232e+308 <= (double)f_spill)) &&
     (!NAN((double)f_spill))) {
    if (2.2250738585072014e-308 <= ABS((double)f_spill)) {
      lVar1 = 0;
    }
    else {
      f_spill = (float64)((double)f_spill * 4503599627370496.0);
      lVar1 = -0x34;
    }
    mVar3.exp = lVar1 + ((ulong)f_spill >> 0x34 & 0x7ff) + -0x3fe;
    mVar3.frac = f_spill;
    return mVar3;
  }
  mVar2.exp = in_RAX;
  mVar2.frac = f_spill;
  return mVar2;
}

