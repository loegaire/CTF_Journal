
/* WARNING: Unknown calling convention */

void fmt___fmt__fmtQc(fmt_fmt *f,uint64 c)

{
  ulong uVar1;
  uint8 in_SIL;
  int in_RDI;
  undefined1 in_R8B;
  undefined1 in_R9B;
  long in_FS_OFFSET;
  __uint8 buf;
  __uint8 buf_00;
  __uint8 b;
  __uint8 b_00;
  fmt_fmt *f_spill;
  uint64 c_spill;
  fmt_fmt *local_20;
  undefined8 local_18;
  
                    /* Unresolved local var: int32 r@[???]
                       Unresolved local var: []uint8 buf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar1 = c_spill & 0xffffffff;
  if (0x10ffff < c_spill) {
    uVar1 = 0xfffd;
  }
  if ((f_spill->fmtFlags).plus == false) {
    buf_00.len = c;
    buf_00.array = (uint8 *)uVar1;
    buf_00.cap = (int)f_spill;
    strconv_appendQuotedRuneWith(buf_00,(int32)in_RDI,in_SIL,(bool)in_R8B,(bool)in_R9B);
    b_00.len = local_18;
    b_00.array = (uint8 *)f_spill;
    b_00.cap = in_RDI;
    fmt___fmt__pad(local_20,b_00);
  }
  else {
    buf.len = c;
    buf.array = (uint8 *)uVar1;
    buf.cap = (int)f_spill;
    strconv_appendQuotedRuneWith(buf,(int32)in_RDI,in_SIL,(bool)in_R8B,(bool)in_R9B);
    b.len = local_18;
    b.array = (uint8 *)f_spill;
    b.cap = in_RDI;
    fmt___fmt__pad(local_20,b);
  }
  return;
}

