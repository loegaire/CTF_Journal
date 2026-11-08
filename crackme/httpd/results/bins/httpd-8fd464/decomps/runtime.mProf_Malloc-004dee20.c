
/* WARNING: Unknown calling convention */

void runtime_mProf_Malloc(void *p,uintptr size)

{
  long *plVar1;
  uint32 uVar2;
  undefined8 in_RCX;
  long lVar3;
  int in_RSI;
  uintptr *puVar4;
  undefined1 in_R8B;
  long in_FS_OFFSET;
  __uintptr pcbuf;
  __uintptr stk_00;
  void *p_spill;
  uintptr size_spill;
  runtime_mutex *local_150;
  runtime_bucket *local_140;
  uintptr stk [32];
  
                    /* Unresolved local var: int nstk@[???]
                       Unresolved local var: runtime.bucket * b@[???]
                       Unresolved local var: uint32 c@[???]
                       Unresolved local var: runtime.memRecord * mp@[???] */
  while (stk + 6 <= *(uintptr **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  puVar4 = stk;
  FUN_0051a154();
  pcbuf.len = in_RCX;
  pcbuf.array = (uintptr *)size;
  pcbuf.cap = (int)puVar4;
  runtime_callers((int)stk,pcbuf);
  runtime_lock2(local_150);
  if (local_150 < (runtime_mutex *)&DAT_00000021) {
    stk_00.len = (int)puVar4;
    stk_00.array = &local_150->key;
    stk_00.cap = in_RSI;
    runtime_stkbucket(size_spill,size,stk_00,(bool)in_R8B);
    uVar2 = runtime_mProf.cycle;
    runtime___bucket__mp(local_140);
    lVar3 = (ulong)(uVar2 + ((uVar2 + 2) / 3) * -3 + 2) * 0x20;
    plVar1 = (long *)(size_spill + 0x20 + lVar3);
    *plVar1 = *plVar1 + 1;
    plVar1 = (long *)(size_spill + 0x30 + lVar3);
    *plVar1 = *plVar1 + size_spill;
    runtime_unlock2(&runtime_proflock);
    runtime_systemstack();
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAlen();
}

