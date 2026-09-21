
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pageAlloc).sysGrow.func3(int level, runtime.addrRange r,
   runtime.addrRange ~r2) */

runtime_addrRange runtime___pageAlloc__sysGrow_func3(int level,runtime_addrRange r)

{
  uintptr *puVar1;
  runtime_offAddr rVar2;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  runtime_addrRange rVar3;
  int level_spill;
  runtime_addrRange r_spill;
  undefined8 local_20;
  
                    /* Unresolved local var: func(int,_runtime.addrRange)_(int,_int) * *
                       addrRangeToSummaryRange@[???]
                       Unresolved local var: func(int,_int,_int)_runtime.addrRange * *
                       summaryRangeToSumAddrRange@[DW_OP_reg0(RAX)]
                       Unresolved local var: int sumIdxBase@[???]
                       Unresolved local var: int sumIdxLimit@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  puVar1 = *(uintptr **)(in_RDX + 0x10);
  (*(code *)**(undefined8 **)(in_RDX + 8))();
  rVar2.a = *puVar1;
  (*(code *)rVar2.a)();
  rVar3.limit.a = rVar2.a;
  rVar3.base.a = local_20;
  return rVar3;
}

