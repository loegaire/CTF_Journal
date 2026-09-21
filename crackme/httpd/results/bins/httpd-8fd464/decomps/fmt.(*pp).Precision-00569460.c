
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.(*pp).Precision(fmt.pp * p, int prec, bool ok) */

multireturn_int_bool__conflict6 fmt___pp__Precision(fmt_pp *p)

{
  bool unaff_BL;
  multireturn_int_bool__conflict6 mVar1;
  fmt_pp *p_spill;
  
  mVar1.prec = (ulong)(p_spill->fmt).fmtFlags.precPresent;
  mVar1.ok = unaff_BL;
  return mVar1;
}

