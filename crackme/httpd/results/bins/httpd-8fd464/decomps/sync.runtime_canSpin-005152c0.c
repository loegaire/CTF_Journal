
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.runtime_canSpin(int i, bool ~r1) */

bool sync_runtime_canSpin(int i)

{
  long lVar1;
  uint uVar2;
  long in_FS_OFFSET;
  int i_spill;
  
  if (((3 < i_spill) || (runtime_ncpu < 2)) ||
     (uVar2 = runtime_sched.npidle + runtime_sched.nmspinning + 1, i_spill = (int)uVar2,
     runtime_gomaxprocs <= (int)uVar2)) {
    return SUB81(i_spill,0);
  }
                    /* Unresolved local var: runtime.p * p@[???] */
  lVar1 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
                    /* Unresolved local var: uint32 head@[???]
                       Unresolved local var: uint32 tail@[???]
                       Unresolved local var: uintptr runnext@[???] */
  do {
  } while (*(int *)(lVar1 + 0x5f4) != *(int *)(lVar1 + 0x5f4));
  if ((*(int *)(lVar1 + 0x5f4) == *(int *)(lVar1 + 0x5f0)) && (*(long *)(lVar1 + 0xdf8) == 0)) {
    return SUB81(lVar1,0);
  }
  return SUB81(lVar1,0);
}

