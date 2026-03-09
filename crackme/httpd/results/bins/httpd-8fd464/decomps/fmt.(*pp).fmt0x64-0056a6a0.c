
/* WARNING: Unknown calling convention */

void fmt___pp__fmt0x64(fmt_pp *p,uint64 v,bool leading0x)

{
  bool bVar1;
  int32 in_ESI;
  undefined1 in_DIL;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  string digits;
  fmt_pp *p_spill;
  uint64 v_spill;
  bool leading0x_spill;
  
                    /* Unresolved local var: bool sharp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  bVar1 = (p_spill->fmt).fmtFlags.sharp;
  (p_spill->fmt).fmtFlags.sharp = leading0x_spill;
  digits.len = in_R9;
  digits.str = in_R8;
  fmt___fmt__fmtInteger((fmt_fmt *)p_spill,v,(ulong)bVar1,(bool)in_DIL,in_ESI,digits);
  (p_spill->fmt).fmtFlags.sharp = bVar1;
  return;
}

