
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_itabsinit(void)

{
  runtime_itab **pprVar1;
  long lVar2;
  int iVar3;
  runtime_moduledata **pprVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_itabLock);
                    /* Unresolved local var: []*runtime.moduledata * p@[???] */
  if (runtime_modulesSlice == (___runtime_moduledata *)0x0) {
    iVar3 = 0;
    pprVar4 = (runtime_moduledata **)0x0;
  }
  else {
    pprVar4 = runtime_modulesSlice->array;
    iVar3 = runtime_modulesSlice->len;
                    /* Unresolved local var: runtime.moduledata * md@[???]
                       Unresolved local var: runtime.moduledata * * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
  }
  for (lVar5 = 0; lVar5 < iVar3; lVar5 = lVar5 + 1) {
                    /* Unresolved local var: runtime.itab * i@[???] */
    pprVar1 = (pprVar4[lVar5]->itablinks).array;
    lVar2 = (pprVar4[lVar5]->itablinks).len;
    for (lVar6 = 0; lVar6 < lVar2; lVar6 = lVar6 + 1) {
      runtime_itabAdd(pprVar1[lVar6]);
    }
  }
  runtime_unlock2(&runtime_itabLock);
  return;
}

