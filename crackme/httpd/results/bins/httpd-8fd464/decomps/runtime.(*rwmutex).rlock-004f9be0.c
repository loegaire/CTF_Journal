
/* WARNING: Unknown calling convention */

void runtime___rwmutex__rlock(runtime_rwmutex *rw)

{
  uint32 *puVar1;
  int *piVar2;
  uint32 uVar3;
  long in_FS_OFFSET;
  runtime_rwmutex *rw_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)] */
  piVar2 = (int *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0x110);
  *piVar2 = *piVar2 + 1;
  LOCK();
  puVar1 = &rw_spill->readerCount;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if ((int)(uVar3 + 1) < 0) {
    runtime_systemstack();
  }
  return;
}

