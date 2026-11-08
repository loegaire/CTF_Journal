
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void runtime_saveblockevent(int64 cycles,int64 rate,int skip,runtime_bucketType which)

{
  uintptr lr0;
  uintptr uVar1;
  int in_RSI;
  runtime_g *gp;
  undefined1 in_R8B;
  undefined7 in_register_00000081;
  int in_R9;
  func__runtime_stkframe__unsafe_Pointer__bool **in_R10;
  void *in_R11;
  long in_FS_OFFSET;
  __uintptr stk;
  __uintptr pcbuf;
  int64 cycles_spill;
  int64 rate_spill;
  int skip_spill;
  runtime_bucketType which_spill;
  runtime_mutex *local_150;
  runtime_bucket *local_140;
  runtime_mutex *local_120;
  
                    /* Unresolved local var: runtime.g * gp@[DW_OP_reg0(RAX)]
                       Unresolved local var: int nstk@[???]
                       Unresolved local var: runtime.bucket * b@[???]
                       Unresolved local var: uintptr[32] stk@[???] */
  while (&stack0xffffffffffffff10 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  gp = (runtime_g *)&stack0xfffffffffffffef8;
  uVar1 = FUN_0051a154();
  lr0 = *(uintptr *)(*(long *)(uVar1 + 0x30) + 200);
  if ((lr0 == 0) || (uVar1 == lr0)) {
    pcbuf.len = lr0;
    pcbuf.array = (uintptr *)rate;
    pcbuf.cap = (int)gp;
    runtime_callers((int)&stack0xfffffffffffffef8,pcbuf);
    local_120 = local_150;
  }
  else {
    local_140 = (runtime_bucket *)&DAT_00000020;
    runtime_gentraceback
              ((uintptr)&stack0xfffffffffffffef8,rate,lr0,gp,in_RSI,
               (uintptr *)CONCAT71(in_register_00000081,in_R8B),in_R9,in_R10,in_R11,
               0xffffffffffffffff);
  }
  runtime_lock2(local_120);
  if (local_120 < (runtime_mutex *)&DAT_00000021) {
    stk.len = (int)gp;
    stk.array = &local_120->key;
    stk.cap = in_RSI;
    runtime_stkbucket(which_spill,rate,stk,(bool)in_R8B);
    if ((which_spill == 2) && (cycles_spill < rate_spill)) {
      runtime___bucket__bp(local_140);
      _DAT_00000000 = (double)rate_spill / (double)cycles_spill + _DAT_00000000;
      runtime___bucket__bp(local_140);
      _DAT_00000008 = _DAT_00000008 + rate_spill;
    }
    else {
      runtime___bucket__bp(local_140);
      _DAT_00000000 = _DAT_00000000 + 1.0;
      runtime___bucket__bp(local_140);
      _DAT_00000008 = _DAT_00000008 + cycles_spill;
    }
    runtime_unlock2(&runtime_proflock);
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAlen();
}

