
/* WARNING: Unknown calling convention */

void runtime___gcControllerState__enlistWorker(runtime_gcControllerState *c)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  int32 iVar5;
  runtime_p *_p_;
  int iVar6;
  uint uVar7;
  long in_FS_OFFSET;
  runtime_gcControllerState *c_spill;
  char local_20;
  
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: int32 myID@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (c_spill->dedicatedMarkWorkersNeeded < 1) {
    return;
  }
  if (runtime_gomaxprocs < 2) {
    return;
  }
  if (((*(long *)(in_FS_OFFSET + -8) != 0) &&
      (lVar3 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30), lVar3 != 0)) &&
     (piVar4 = *(int **)(lVar3 + 0xd8), piVar4 != (int *)0x0)) {
    iVar1 = *piVar4;
    _p_ = (runtime_p *)0x0;
                    /* Unresolved local var: int tries@[???] */
    while( true ) {
      iVar5 = runtime_gomaxprocs;
      if (4 < (long)_p_) {
        return;
      }
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
      lVar3 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
                    /* Unresolved local var: int32 id@[???]
                       Unresolved local var: runtime.p * p@[???] */
      uVar7 = *(uint *)(lVar3 + 0x128);
      uVar2 = *(uint *)(lVar3 + 300);
      *(uint *)(lVar3 + 0x128) = uVar2;
      uVar7 = uVar7 ^ uVar7 << 0x11;
      uVar7 = uVar2 >> 0x10 ^ uVar7 >> 7 ^ uVar2 ^ uVar7;
      *(uint *)(lVar3 + 300) = uVar7;
      iVar6 = (int)((ulong)(uVar2 + uVar7) * (ulong)(iVar5 - 1) >> 0x20);
      if (iVar1 <= iVar6) {
        iVar6 = iVar6 + 1;
      }
      if ((ulong)runtime_allp.len <= (ulong)(long)iVar6) break;
      if ((runtime_allp.array[iVar6]->status == 1) && (runtime_preemptone(_p_), local_20 != '\0')) {
        return;
      }
      _p_ = (runtime_p *)((long)&_p_->id + 1);
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  return;
}

