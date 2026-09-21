
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pageAlloc).sysGrow.func1(int level, runtime.addrRange r,
   int ~r2, int ~r3) */

multireturn_int_int_ runtime___pageAlloc__sysGrow_func1(int level,runtime_addrRange r)

{
  ulong uVar1;
  multireturn_int_int_ mVar2;
  int level_spill;
  runtime_addrRange r_spill;
  
                    /* Unresolved local var: int sumIdxBase@[???] */
  if ((ulong)level_spill < 5) {
                    /* Unresolved local var: uintptr e@[???] */
    uVar1 = 1L << ((byte)runtime_levelBits[level_spill] & 0x3f) &
            -(ulong)(runtime_levelBits[level_spill] < 0x40);
    mVar2.~r3 = r_spill.limit.a + 0x7fffffffffff >> ((byte)runtime_levelShift[level_spill] & 0x3f) &
                -(ulong)(runtime_levelShift[level_spill] < 0x40);
    mVar2.~r2 = uVar1 + mVar2.~r3 & -uVar1;
    return mVar2;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

