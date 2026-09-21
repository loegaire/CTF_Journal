
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.persistentalloc1(uintptr size, uintptr align,
   runtime.sysMemStat * sysStat, runtime.notInHeap * ~r3) */

runtime_notInHeap * runtime_persistentalloc1(uintptr size,uintptr align,runtime_sysMemStat *sysStat)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  runtime_notInHeap *prVar5;
  runtime_notInHeap *extraout_RAX;
  runtime_persistentAlloc *sysStat_00;
  ulong uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  string s;
  string s_00;
  string s_01;
  string s_02;
  uintptr size_spill;
  uintptr align_spill;
  runtime_sysMemStat *sysStat_spill;
  runtime_notInHeap *local_38;
  
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.persistentAlloc * persistent@[???]
                       Unresolved local var: runtime.notInHeap * p@[???]
                       Unresolved local var: runtime.m * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  if (size_spill == 0) {
    s_02.len = align;
    s_02.str = &DAT_0029f62b;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_02);
  }
  if (align_spill == 0) {
    align_spill = 8;
  }
  else {
    if ((align_spill & align_spill - 1) != 0) {
      s_01.len = align;
      s_01.str = &DAT_002a73a7;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_01);
    }
    if (0x2000 < align_spill) {
      s_00.len = align;
      s_00.str = &DAT_002a44fd;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_00);
    }
  }
  if (0xffff < size_spill) {
    runtime_sysAlloc((uintptr)sysStat_spill,(runtime_sysMemStat *)align);
    return local_38;
  }
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar3 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(lVar3 + 0x30) + 0x110);
  *piVar1 = *piVar1 + 1;
  lVar3 = *(long *)(lVar3 + 0x30);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0xd8) == 0)) {
    runtime_lock2(&runtime_globalAlloc.mutex);
                    /* Unresolved local var: runtime.g * _g_@[???] */
    sysStat_00 = &runtime_globalAlloc.persistentAlloc;
  }
  else {
    sysStat_00 = (runtime_persistentAlloc *)(*(long *)(lVar3 + 0xd8) + 0x1650);
  }
  uVar6 = (align_spill + sysStat_00->off) - 1 & -align_spill;
  sysStat_00->off = uVar6;
  if ((0x40000 < uVar6 + size_spill) || (sysStat_00->base == (runtime_notInHeap *)0x0)) {
    runtime_sysAlloc(0xd025c0,(runtime_sysMemStat *)sysStat_00);
    sysStat_00->base = local_38;
    if (sysStat_00->base == (runtime_notInHeap *)0x0) {
      if (sysStat_00 == &runtime_globalAlloc.persistentAlloc) {
        runtime_unlock2(&runtime_globalAlloc.mutex);
      }
      s.len = (int)sysStat_00;
      s.str = (uint8 *)0x2a209d;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    do {
      prVar5 = runtime_persistentChunks;
                    /* Unresolved local var: uintptr chunks@[???] */
      *(runtime_notInHeap **)sysStat_00->base = runtime_persistentChunks;
      LOCK();
      bVar7 = prVar5 != runtime_persistentChunks;
      prVar5 = sysStat_00->base;
      if (bVar7) {
        prVar5 = runtime_persistentChunks;
      }
      runtime_persistentChunks = prVar5;
      UNLOCK();
    } while (bVar7);
    sysStat_00->off = align_spill + 7 & -align_spill;
  }
  sysStat_00->off = size_spill + sysStat_00->off;
  lVar4 = *(long *)(in_FS_OFFSET + -8);
  iVar2 = *(int *)(lVar3 + 0x110);
  *(int *)(lVar3 + 0x110) = iVar2 + -1;
  if ((iVar2 == 1) && (*(char *)(lVar4 + 0xb1) != '\0')) {
    *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffade;
  }
  if (sysStat_00 == &runtime_globalAlloc.persistentAlloc) {
    runtime_unlock2(&runtime_globalAlloc.mutex);
  }
  if (sysStat_spill != &runtime_memstats.other_sys) {
    runtime___sysMemStat__add((runtime_sysMemStat *)size_spill,0xd025c0);
    runtime___sysMemStat__add((runtime_sysMemStat *)-size_spill,0xd025c0);
    size_spill = (uintptr)extraout_RAX;
  }
  return (runtime_notInHeap *)size_spill;
}

