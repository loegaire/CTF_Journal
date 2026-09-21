
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.(*fmt).truncateString(fmt.fmt * f, string s, string ~r1) */

string fmt___fmt__truncateString(fmt_fmt *f,string s)

{
  ulong k;
  uint8 *puVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  string sVar3;
  string s_00;
  string sVar4;
  fmt_fmt *f_spill;
  string s_spill;
  ulong local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  puVar1 = s.str;
  if ((f_spill->fmtFlags).precPresent != false) {
                    /* Unresolved local var: int n@[???] */
    sVar4.str = (uint8 *)f_spill->prec;
                    /* Unresolved local var: int i@[???] */
    uVar2 = 0;
    while (k = uVar2, puVar1 = s_spill.str, (long)k < s_spill.len) {
      if (s_spill.str[k] < 0x80) {
        uVar2 = k + 1;
      }
      else {
        s_00.len = (int)s_spill.str;
        s_00.str = sVar4.str;
        runtime_decoderune(s_00,k);
        uVar2 = local_20;
      }
      sVar4.str = sVar4.str + -1;
      if ((long)sVar4.str < 0) {
        if ((ulong)s_spill.len < k) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAlen();
        }
        sVar4.len = (int)s_spill.str;
        return sVar4;
      }
    }
  }
  sVar3.len = (int)puVar1;
  sVar3.str = (uint8 *)s_spill.len;
  return sVar3;
}

