
/* WARNING: Unknown calling convention */

void fmt___fmt__fmtC(fmt_fmt *f,uint64 c)

{
  int in_RDI;
  long in_FS_OFFSET;
  __uint8 p;
  __uint8 b;
  fmt_fmt *f_spill;
  uint64 c_spill;
  ulong local_18;
  
                    /* Unresolved local var: int32 r@[???]
                       Unresolved local var: int w@[???]
                       Unresolved local var: []uint8 buf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  p.len = 0xfffd;
  p.array = (uint8 *)f_spill;
  p.cap = (int)f_spill->intbuf;
  unicode_utf8_EncodeRune(p,(int32)in_RDI);
  if (local_18 < 0x45) {
    b.len = local_18;
    b.array = (uint8 *)0xfffd;
    b.cap = in_RDI;
    fmt___fmt__pad((fmt_fmt *)f_spill->intbuf,b);
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAcap();
}

