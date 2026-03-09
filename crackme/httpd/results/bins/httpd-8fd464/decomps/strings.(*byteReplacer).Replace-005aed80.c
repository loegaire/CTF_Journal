
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.(*byteReplacer).Replace(strings.byteReplacer * r, string
   s, string ~r1) */

string strings___byteReplacer__Replace(strings_byteReplacer *r,string s)

{
  byte bVar1;
  uint8 *buf;
  uint8 *n;
  runtime_tmpBuf *pauVar2;
  long in_FS_OFFSET;
  string sVar3;
  string sVar4;
  string s_00;
  strings_byteReplacer *r_spill;
  string s_spill;
  uint8 *local_30;
  runtime_tmpBuf *local_28;
  
                    /* Unresolved local var: []uint8 buf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int i@[???] */
  buf = (uint8 *)0x0;
  n = (uint8 *)0x0;
  pauVar2 = (runtime_tmpBuf *)0x0;
  do {
    if (s_spill.len <= (long)buf) {
      if (n != (uint8 *)0x0) {
        sVar3 = runtime_slicebytetostring((runtime_tmpBuf *)buf,s_spill.str,(int)n);
        sVar4.len = sVar3.len;
        sVar4.str = local_30;
        return sVar4;
      }
      sVar3.len = (int)s_spill.str;
      sVar3.str = buf;
      return sVar3;
    }
                    /* Unresolved local var: uint8 b@[???] */
    bVar1 = s_spill.str[(long)buf];
    if ((*r_spill)[bVar1] != bVar1) {
      if (n == (uint8 *)0x0) {
        s_00.len = 0;
        s_00.str = s_spill.str;
        runtime_stringtoslicebyte((runtime_tmpBuf *)buf,s_00);
        n = local_30;
        pauVar2 = local_28;
      }
      if (pauVar2 <= buf) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      n[(long)buf] = (*r_spill)[bVar1];
    }
    buf = buf + 1;
  } while( true );
}

