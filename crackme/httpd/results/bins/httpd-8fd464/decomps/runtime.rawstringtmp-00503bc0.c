
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.rawstringtmp(runtime.tmpBuf * buf, int l, string s,
   []uint8 b) */

multireturn_string___uint8_ runtime_rawstringtmp(runtime_tmpBuf *buf,int l)

{
  runtime_tmpBuf *extraout_RAX;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  multireturn_string___uint8_ mVar1;
  runtime_tmpBuf *buf_spill;
  int l_spill;
  undefined8 local_30;
  int local_28;
  runtime_tmpBuf *local_20;
  int local_18;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    buf = extraout_RAX;
  }
  if ((buf_spill == (runtime_tmpBuf *)0x0) || (0x20 < l_spill)) {
    runtime_rawstring((int)buf);
    l_spill = local_18;
    buf_spill = local_20;
  }
  else {
    if (0x20 < (ulong)l_spill) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    if (l_spill == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    local_10 = 0x20;
    local_28 = l_spill;
    local_30 = in_RDI;
  }
  mVar1.s.len = (int)buf_spill;
  mVar1.s.str = (uint8 *)l_spill;
  mVar1.b.array = (uint8 *)local_28;
  mVar1.b.cap = local_10;
  mVar1.b.len = local_30;
  return mVar1;
}

