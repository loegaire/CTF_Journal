
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.(*fmt).truncate(fmt.fmt * f, []uint8 b, []uint8 ~r1) */

__uint8 fmt___fmt__truncate(fmt_fmt *f,__uint8 b)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  __uint8 _Var4;
  __uint8 p;
  __uint8 _Var5;
  fmt_fmt *f_spill;
  __uint8 b_spill;
  long local_20;
  
  iVar2 = b.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((f_spill->fmtFlags).precPresent != false) {
                    /* Unresolved local var: int n@[???] */
    p.len = (fmt_fmt *)f_spill->prec;
                    /* Unresolved local var: int i@[???] */
    for (uVar1 = 0; iVar2 = b_spill.len, f_spill = p.len, (long)uVar1 < b_spill.len;
        uVar1 = uVar1 + lVar3) {
      p.len = (fmt_fmt *)&p.len[-1].field_0x6f;
      if ((long)p.len < 0) {
        if (uVar1 <= (ulong)b_spill.cap) {
          _Var5.len = (int)p.len;
          _Var5.array = (uint8 *)uVar1;
          _Var5.cap = b_spill.len;
          return _Var5;
        }
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      if ((ulong)b_spill.len <= uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (b_spill.array[uVar1] < 0x80) {
        lVar3 = 1;
      }
      else {
        p.cap = b_spill.len - uVar1;
        p.array = (uint8 *)uVar1;
        unicode_utf8_DecodeRune(p);
        lVar3 = local_20;
      }
                    /* Unresolved local var: int wid@[???] */
    }
  }
  _Var4.len = (int)f_spill;
  _Var4.array = (uint8 *)b_spill.cap;
  _Var4.cap = iVar2;
  return _Var4;
}

