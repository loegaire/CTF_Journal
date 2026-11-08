
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.funcMaxSPDelta(runtime.funcInfo f, int32 ~r1) */

int32 runtime_funcMaxSPDelta(runtime_funcInfo f)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uintptr *pc;
  ulong in_R8;
  ulong uVar4;
  long in_FS_OFFSET;
  __uint8 p;
  int32 *in_stack_00000008;
  runtime_moduledata *datap;
  long local_30;
  uintptr *local_28;
  char local_20;
  uint local_18;
  uint local_14;
  undefined8 local_10;
  
                    /* Unresolved local var: int32 max@[???]
                       Unresolved local var: []uint8 p@[???]
                       Unresolved local var: uintptr pc@[???]
                       Unresolved local var: int32 val@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar1 = (datap->pctab).len;
  uVar2 = (ulong)(uint)in_stack_00000008[5];
  if (uVar2 <= uVar1) {
    local_10 = *(undefined8 *)in_stack_00000008;
    local_18 = 0xffffffff;
    uVar4 = 0;
    lVar3 = uVar1 - uVar2;
    pc = (uintptr *)((datap->pctab).cap - uVar2);
    while( true ) {
      local_14 = (uint)uVar4;
      p.len = local_10;
      p.array = (uint8 *)&local_18;
      p.cap = lVar3;
      runtime_step(p,pc,in_stack_00000008,SUB81(in_R8,0));
      if (local_20 == '\0') break;
      if ((int)local_14 < (int)local_18) {
        local_14 = local_18;
      }
      uVar4 = (ulong)local_14;
      lVar3 = local_30;
      pc = local_28;
      in_R8 = uVar4;
    }
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

