
/* WARNING: Unknown calling convention */

void runtime_mProf_Free(runtime_bucket *b,uintptr size)

{
  long *plVar1;
  uint32 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  runtime_bucket *b_spill;
  uintptr size_spill;
  long local_18;
  
                    /* Unresolved local var: uint32 c@[???]
                       Unresolved local var: runtime.memRecord * mp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_proflock);
  uVar2 = runtime_mProf.cycle;
  runtime___bucket__mp((runtime_bucket *)(ulong)runtime_mProf.cycle);
  lVar3 = (ulong)(uVar2 + ((uVar2 + 1) / 3) * -3 + 1) * 0x20;
  plVar1 = (long *)(local_18 + 0x28 + lVar3);
  *plVar1 = *plVar1 + 1;
  plVar1 = (long *)(local_18 + 0x38 + lVar3);
  *plVar1 = *plVar1 + size_spill;
  runtime_unlock2(&runtime_proflock);
  return;
}

