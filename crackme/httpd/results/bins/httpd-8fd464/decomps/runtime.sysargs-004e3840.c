
/* WARNING: Unknown calling convention */

void runtime_sysargs(int32 argc,uint8 **argv)

{
  uint8 *puVar1;
  int iVar2;
  runtime_vdsoTimekeep *prVar3;
  runtime_vdsoTimekeep *prVar4;
  ulong uVar5;
  ulong extraout_RAX;
  uint8 **ppuVar6;
  uint8 **extraout_RDX;
  long in_FS_OFFSET;
  int32 argc_spill;
  uint8 **argv_spill;
  
                    /* Unresolved local var: int32 n@[???]
                       Unresolved local var: uintptr[268435456] * auxv@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  do {
    iVar2 = argc_spill;
    argc_spill = iVar2 + 1;
  } while (argv_spill[argc_spill] != (uint8 *)0x0);
  ppuVar6 = argv_spill + (iVar2 + 2);
  uVar5 = 0;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uintptr val@[???] */
  while( true ) {
    if (0xfffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    puVar1 = ppuVar6[uVar5];
    if (puVar1 == (uint8 *)0x0) break;
    if (0xfffffff < uVar5 + 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    prVar3 = runtime_timekeepSharedPage;
    prVar4 = (runtime_vdsoTimekeep *)ppuVar6[uVar5 + 1];
    if (((puVar1 != &DAT_00000006) &&
        (prVar4 = (runtime_vdsoTimekeep *)runtime_physPageSize, puVar1 == &DAT_00000016)) &&
       (prVar3 = (runtime_vdsoTimekeep *)ppuVar6[uVar5 + 1], runtime_writeBarrier._0_4_ != 0)) {
      runtime_gcWriteBarrierSI();
      uVar5 = extraout_RAX;
      ppuVar6 = extraout_RDX;
      prVar3 = runtime_timekeepSharedPage;
      prVar4 = (runtime_vdsoTimekeep *)runtime_physPageSize;
    }
    runtime_physPageSize = (uintptr)prVar4;
    runtime_timekeepSharedPage = prVar3;
    uVar5 = uVar5 + 2;
  }
  return;
}

