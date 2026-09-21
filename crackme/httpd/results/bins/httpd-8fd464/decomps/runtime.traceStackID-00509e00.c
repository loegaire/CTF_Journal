
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.traceStackID(runtime.m * mp, []uintptr buf, int skip,
   uint64 ~r3) */

uint64 runtime_traceStackID(runtime_m *mp,__uintptr buf,int skip)

{
  runtime_g *skip_00;
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  __uintptr pcbuf;
  __uintptr pcbuf_00;
  __uintptr pcs;
  runtime_m *mp_spill;
  __uintptr buf_spill;
  int skip_spill;
  runtime_traceStackTable *local_20;
  runtime_traceStackTable *local_18;
  
  iVar2 = buf.cap;
  iVar1 = buf.len;
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: int nstk@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  skip_00 = mp_spill->curg;
  if (*(runtime_g **)(in_FS_OFFSET + -8) == skip_00) {
    pcbuf_00.len = iVar1;
    pcbuf_00.array = (uintptr *)skip_00;
    pcbuf_00.cap = iVar2;
    runtime_callers(buf_spill.cap,pcbuf_00);
    local_18 = local_20;
  }
  else if (skip_00 == (runtime_g *)0x0) {
    local_18 = (runtime_traceStackTable *)0x0;
  }
  else {
    local_20 = (runtime_traceStackTable *)buf_spill.cap;
    pcbuf.len = iVar2;
    pcbuf.array = (uintptr *)iVar1;
    pcbuf.cap = skip;
    runtime_gcallers((runtime_g *)buf_spill.cap,(int)skip_00,pcbuf);
  }
  if (0 < (long)local_18) {
    local_18 = (runtime_traceStackTable *)((long)local_18[-1].tab + 0xffff);
  }
  if ((0 < (long)local_18) && (skip_00->goid == 1)) {
    local_18 = (runtime_traceStackTable *)((long)local_18[-1].tab + 0xffff);
  }
  if (local_18 <= (ulong)buf_spill.cap) {
    pcs.len = (int)buf_spill.array;
    pcs.array = (uintptr *)skip_00;
    pcs.cap = iVar2;
    runtime___traceStackTable__put(local_18,pcs);
    return (ulong)local_20 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAcap();
}

