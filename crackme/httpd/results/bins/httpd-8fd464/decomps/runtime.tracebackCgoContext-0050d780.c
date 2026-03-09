
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.tracebackCgoContext(uintptr * pcbuf, bool printing,
   uintptr ctxt, int n, int max, int ~r5) */

int runtime_tracebackCgoContext(uintptr *pcbuf,bool printing,uintptr ctxt,int n,int max)

{
  uint64 v;
  bool bVar1;
  void *pvVar2;
  ulong uVar3;
  ulong extraout_RAX;
  undefined7 unaff_00000019;
  long lVar4;
  uintptr *puVar5;
  long in_FS_OFFSET;
  string s;
  __uintptr buf;
  uintptr *pcbuf_spill;
  bool printing_spill;
  uintptr ctxt_spill;
  int n_spill;
  int max_spill;
  uintptr cgoPCs [32];
  uint64 local_140 [32];
  runtime_cgoSymbolizerArg local_40;
  
  buf.array._1_7_ = unaff_00000019;
  buf.array._0_1_ = printing;
                    /* Unresolved local var: bool anySymbolized@[???]
                       Unresolved local var: runtime.cgoSymbolizerArg arg@[???] */
  while (cgoPCs + 7 <= *(uintptr **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  puVar5 = cgoPCs;
  FUN_0051a154();
  buf.len = ctxt;
  buf.cap = (int)puVar5;
  runtime_cgoContextPCs((uintptr)cgoPCs,buf);
  local_40.pc = 0;
  local_40.file = (uint8 *)0x0;
  local_40.lineno = 0;
  local_40.funcName = (uint8 *)0x0;
  local_40.entry = 0;
  local_40.more = 0;
  local_40.data = 0;
                    /* Unresolved local var: uintptr pc@[???] */
  FUN_0051a460();
  lVar4 = 0;
  bVar1 = false;
  for (; ((uVar3 = (ulong)printing_spill, lVar4 < 0x20 && (v = local_140[lVar4], v != 0)) &&
         (n_spill < max_spill)); n_spill = n_spill + 1) {
    if (pcbuf_spill != (uintptr *)0x0) {
      if (0xfffff < (ulong)n_spill) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      pcbuf_spill[n_spill] = v;
    }
    pvVar2 = runtime_cgoSymbolizer;
    if (printing_spill) {
      if (runtime_cgoSymbolizer == (void *)0x0) {
        runtime_printlock();
        s.len = n_spill;
        s.str = &DAT_0029d38f;
        runtime_printstring(s);
        runtime_printhex(v);
        runtime_printnl();
        runtime_printunlock();
      }
      else {
                    /* Unresolved local var: int c@[???] */
        runtime_printOneCgoTraceback(1,n_spill,&local_40);
        n_spill = n_spill + 0x1f;
      }
      bVar1 = (bool)(pvVar2 != (void *)0x0 | bVar1);
    }
    lVar4 = lVar4 + 1;
  }
  if (bVar1) {
    local_40.pc = 0;
    runtime_callCgoSymbolizer(&local_40);
    uVar3 = extraout_RAX;
  }
  return uVar3;
}

