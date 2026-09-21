
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.sysReserveAligned(void * v, uintptr size, uintptr align,
   void * ~r3, uintptr ~r4) */

multireturn_void___uintptr__conflict runtime_sysReserveAligned(void *v,uintptr size,uintptr align)

{
  ulong n;
  runtime_sysMemStat *sysStat;
  undefined1 auVar1 [16];
  runtime_sysMemStat *sysStat_00;
  long in_FS_OFFSET;
  multireturn_void___uintptr__conflict mVar2;
  multireturn_void___uintptr__conflict mVar3;
  void *v_spill;
  uintptr size_spill;
  uintptr align_spill;
  void *local_28;
  
                    /* Unresolved local var: uintptr p@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_sysReserve((void *)size_spill,size);
  if (local_28 != (void *)0x0) {
    n = align_spill - 1;
    if (((ulong)local_28 & n) != 0) {
                    /* Unresolved local var: uintptr pAligned@[???]
                       Unresolved local var: uintptr end@[???]
                       Unresolved local var: uintptr endLen@[???]
                       Unresolved local var: uintptr ~R0@[???] */
      sysStat = (runtime_sysMemStat *)((long)local_28 + (align_spill - 1));
      sysStat_00 = (runtime_sysMemStat *)(-align_spill & (ulong)sysStat);
      runtime_sysFree(local_28,n,sysStat);
      mVar2.~r4 = (long)local_28 + (align_spill - (long)sysStat_00);
      if (mVar2.~r4 != 0) {
        runtime_sysFree((void *)size_spill,mVar2.~r4,sysStat_00);
      }
      mVar2.~r3 = (void *)size_spill;
      return mVar2;
    }
    mVar3.~r4 = n;
    mVar3.~r3 = (void *)(align_spill + size_spill);
    return mVar3;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = size;
  return (multireturn_void___uintptr__conflict)(auVar1 << 0x40);
}

