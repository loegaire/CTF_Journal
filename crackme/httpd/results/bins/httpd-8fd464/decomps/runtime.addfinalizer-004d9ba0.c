
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.addfinalizer(void * p, runtime.funcval * f, uintptr nret,
   runtime._type * fint, runtime.ptrtype * ot, bool ~r5) */

bool runtime_addfinalizer
               (void *p,runtime_funcval *f,uintptr nret,runtime__type *fint,runtime_ptrtype *ot)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  uint8 *puVar4;
  runtime_gcWork *gcw;
  bool bVar5;
  undefined1 extraout_AL;
  runtime_mutex *extraout_RAX;
  long extraout_RAX_00;
  runtime_mutex *extraout_RAX_01;
  runtime_mutex *p_00;
  void *refOff;
  uint8 *ptrmask;
  runtime_gcWork *gcw_00;
  long in_FS_OFFSET;
  void *p_spill;
  runtime_funcval *f_spill;
  uintptr nret_spill;
  runtime__type *fint_spill;
  runtime_ptrtype *ot_spill;
  runtime_mutex *local_50;
  char cStack_48;
  ulong uVar6;
  
                    /* Unresolved local var: runtime.specialfinalizer * s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_mheap_.speciallock);
  runtime___fixalloc__alloc(&runtime_mheap_.specialfinalizeralloc);
  runtime_unlock2(local_50);
  *(undefined1 *)((long)&local_50[1].key + 2) = 1;
  gcw_00 = (runtime_gcWork *)(local_50 + 2);
  if (runtime_writeBarrier._0_4_ == 0) {
    local_50[2].key = (uintptr)f_spill;
    p_00 = local_50;
  }
  else {
    runtime_gcWriteBarrierCX();
    p_00 = extraout_RAX;
  }
  p_00[3].key = nret_spill;
  if (runtime_writeBarrier._0_4_ == 0) {
    p_00[4].key = (uintptr)fint_spill;
    p_00[5].key = (uintptr)ot_spill;
  }
  else {
    runtime_gcWriteBarrierBX();
    gcw_00 = (runtime_gcWork *)(extraout_RAX_00 + 0x28);
    runtime_gcWriteBarrierCX();
    p_00 = extraout_RAX_01;
    f = (runtime_funcval *)fint_spill;
  }
  refOff = p_spill;
  bVar5 = runtime_addspecial(p_00,(runtime_special *)f);
  uVar6 = (ulong)bVar5;
  if (cStack_48 != '\0') {
    if (runtime_gcphase != 0) {
                    /* Unresolved local var: uintptr base@[???]
                       Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.gcWork * gcw@[???]
                       Unresolved local var: runtime.m * ~R0@[???] */
      runtime_findObject((uintptr)p_spill,(uintptr)f,(uintptr)refOff);
                    /* Unresolved local var: runtime.g * _g_@[???] */
      lVar3 = *(long *)(in_FS_OFFSET + -8);
      piVar1 = (int *)(*(long *)(lVar3 + 0x30) + 0x110);
      *piVar1 = *piVar1 + 1;
      puVar4 = *(uint8 **)(lVar3 + 0x30);
      gcw = *(runtime_gcWork **)(puVar4 + 0xd8);
      ptrmask = puVar4;
      runtime_scanobject((uintptr)&gcw[0x90].scanWork,gcw);
      runtime_scanblock((uintptr)&gcw[0x90].scanWork,(uintptr)gcw,ptrmask,gcw_00,
                        (runtime_stackScanState *)ot);
                    /* Unresolved local var: runtime.g * _g_@[???] */
      uVar6 = *(ulong *)(in_FS_OFFSET + -8);
      iVar2 = *(int *)(puVar4 + 0x110);
      *(int *)(puVar4 + 0x110) = iVar2 + -1;
      if ((iVar2 == 1) && (*(char *)(uVar6 + 0xb1) != '\0')) {
        *(undefined8 *)(uVar6 + 0x10) = 0xfffffffffffffade;
      }
    }
    return SUB81(uVar6,0);
  }
  runtime_lock2(&runtime_mheap_.speciallock);
                    /* Unresolved local var: runtime.mlink * v@[???] */
  runtime_mheap_.specialfinalizeralloc.inuse =
       runtime_mheap_.specialfinalizeralloc.inuse - runtime_mheap_.specialfinalizeralloc.size;
  local_50->key = (uintptr)runtime_mheap_.specialfinalizeralloc.list;
  runtime_mheap_.specialfinalizeralloc.list = (runtime_mlink *)local_50;
  runtime_unlock2(&runtime_mheap_.speciallock);
  return (bool)extraout_AL;
}

