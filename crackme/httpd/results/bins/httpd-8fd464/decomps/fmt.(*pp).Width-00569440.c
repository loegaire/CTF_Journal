
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.(*pp).Width(fmt.pp * p, int wid, bool ok) */

multireturn_int_bool__conflict5 fmt___pp__Width(fmt_pp *p)

{
  bool unaff_BL;
  multireturn_int_bool__conflict5 mVar1;
  fmt_pp *p_spill;
  
  mVar1.wid = (ulong)(p_spill->fmt).fmtFlags.widPresent;
  mVar1.ok = unaff_BL;
  return mVar1;
}

