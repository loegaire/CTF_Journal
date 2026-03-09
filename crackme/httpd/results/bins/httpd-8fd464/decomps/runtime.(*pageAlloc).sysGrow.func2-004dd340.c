
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pageAlloc).sysGrow.func2(int level, int sumIdxBase, int
   sumIdxLimit, runtime.addrRange ~r3) */

runtime_addrRange runtime___pageAlloc__sysGrow_func2(int level,int sumIdxBase,int sumIdxLimit)

{
  long in_RDX;
  runtime_addrRange rVar1;
  int level_spill;
  int sumIdxBase_spill;
  int sumIdxLimit_spill;
  
                    /* Unresolved local var: uintptr baseOffset@[???]
                       Unresolved local var: uintptr limitOffset@[???]
                       Unresolved local var: void * base@[???]
                       Unresolved local var: runtime.pageAlloc * p@[DW_OP_reg1(RDX)] */
  if (4 < (ulong)level_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (*(long *)(*(long *)(in_RDX + 8) + 8 + level_spill * 0x18) != 0) {
    rVar1.limit.a = level_spill * 3;
    rVar1.base.a = *(long *)(*(long *)(in_RDX + 8) + level_spill * 0x18) +
                   (sumIdxBase_spill << 3 & -runtime_physPageSize);
    return rVar1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

