
/* WARNING: Unknown calling convention */

void runtime___cpuProfile__addExtra(runtime_cpuProfile *p)

{
  undefined1 *puVar1;
  runtime_profBuf *b;
  uintptr in_RSI;
  long in_RDI;
  int in_R8;
  undefined8 in_R9;
  undefined8 in_R10;
  int in_R11;
  long in_FS_OFFSET;
  __uint64 hdr_00;
  __uint64 hdr_01;
  __uint64 hdr_02;
  __uintptr stk;
  __uintptr stk_00;
  __uintptr stk_01;
  runtime_cpuProfile *p_spill;
  undefined1 local_40 [16];
  uint64 hdr [1];
  uint64 *puStack_10;
  
  hdr_00.array = in_RDI;
  while (&puStack_10 <= *(uint64 ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  hdr[0] = 1;
                    /* Unresolved local var: int i@[???] */
  b = (runtime_profBuf *)0x0;
  while( true ) {
    if (p_spill->numExtra <= (long)b) {
      p_spill->numExtra = 0;
      if (p_spill->lostExtra != 0) {
                    /* Unresolved local var: uint64[1] hdr@[???]
                       Unresolved local var: uintptr[2] lostStk@[???] */
        local_40._8_8_ = p_spill->lostExtra;
        puStack_10 = (uint64 *)0x4f40c1;
        hdr_01.len = in_RSI;
        hdr_01.array = (uint64 *)hdr_00.array;
        hdr_01.cap = in_R8;
        stk_00.len = in_R10;
        stk_00.array = (uintptr *)in_R9;
        stk_00.cap = in_R11;
        runtime___profBuf__write
                  ((runtime_profBuf *)(local_40 + 8),(void **)p_spill,(int64)runtime__ExternalCode,
                   hdr_01,stk_00);
        p_spill->lostExtra = 0;
      }
      if (p_spill->lostAtomic != 0) {
                    /* Unresolved local var: uint64[1] hdr@[???]
                       Unresolved local var: uintptr[2] lostStk@[???] */
        local_40._0_8_ = p_spill->lostAtomic;
        hdr_02.len = in_RSI;
        hdr_02.array = (uint64 *)hdr_00.array;
        hdr_02.cap = in_R8;
        stk_01.len = in_R10;
        stk_01.array = (uintptr *)in_R9;
        stk_01.cap = in_R11;
        runtime___profBuf__write
                  ((runtime_profBuf *)local_40,(void **)p_spill,(int64)runtime__System,hdr_02,stk_01
                  );
        p_spill->lostAtomic = 0;
      }
      return;
    }
    if ((runtime_profBuf *)0x3e7 < b) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    in_RSI = p_spill->extra[(long)b];
    puVar1 = (undefined1 *)((long)&b->r + in_RSI);
    if ((undefined1 *)0x3e8 < puVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    if (puVar1 < (undefined1 *)((long)&b->r + 1U)) break;
    hdr_00.array = -(long)((long)&b[-8].tags.cap + 1);
    hdr_00.len = in_RSI;
    hdr_00.cap = in_R8;
    stk.len = in_R10;
    stk.array = (uintptr *)in_R9;
    stk.cap = in_R11;
    runtime___profBuf__write(b,(void **)p_spill,in_RSI - 1,hdr_00,stk);
    b = (runtime_profBuf *)((long)&b->r + p_spill->extra[(long)b]);
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

