
/* WARNING: Unknown calling convention */

void context_removeChild(context_Context parent,context_canceler child)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  sync_Mutex *m;
  long in_FS_OFFSET;
  context_Context parent_00;
  context_Context parent_spill;
  context_canceler child_spill;
  void *local_38;
  char local_30;
  
  parent_00.data = parent.data;
                    /* Unresolved local var: context.cancelCtx * p@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  parent_00.tab = parent_spill.data;
  context_parentCancelCtx(parent_00);
  if (local_30 != '\0') {
    m = (sync_Mutex *)0x0;
    LOCK();
    uVar2 = *(uint *)((long)local_38 + 0x10);
    if (uVar2 == 0) {
      *(uint *)((long)local_38 + 0x10) = 1;
    }
    else {
      m = (sync_Mutex *)(ulong)uVar2;
    }
    UNLOCK();
    if (uVar2 != 0) {
      sync___Mutex__lockSlow(m);
                    /* Unresolved local var: int32 new@[???] */
    }
    if (*(long *)((long)local_38 + 0x28) != 0) {
      runtime_mapdelete((runtime_maptype *)&stack0xffffffffffffffe8,
                        (runtime_hmap *)((long)local_38 + 0x10),local_38);
    }
    LOCK();
    piVar1 = (int *)((long)local_38 + 0x10);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 - 1U != 0) {
      sync___Mutex__unlockSlow
                ((sync_Mutex *)(ulong)(iVar3 - 1U),(int32)(runtime_hmap *)((long)local_38 + 0x10));
    }
    return;
  }
  return;
}

