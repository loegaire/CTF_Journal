
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.findfunc(uintptr pc, runtime.funcInfo ~r1) */

runtime_funcInfo runtime_findfunc(uintptr pc)

{
  ulong uVar1;
  runtime_moduledata *prVar2;
  uint8 *puVar3;
  undefined1 auVar4 [16];
  runtime_moduledata *prVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  ulong unaff_RBX;
  uint uVar9;
  runtime_funcInfo rVar10;
  runtime_funcInfo rVar11;
  string s;
  uintptr pc_spill;
  
                    /* Unresolved local var: runtime.moduledata * datap@[???]
                       Unresolved local var: uintptr x@[???]
                       Unresolved local var: runtime.findfuncbucket * ffb@[???]
                       Unresolved local var: uint32 idx@[???]
                       Unresolved local var: uintptr funcoff@[???] */
                    /* Unresolved local var: runtime.moduledata * datap@[???] */
  for (prVar5 = &runtime_firstmoduledata; prVar5 != (runtime_moduledata *)0x0; prVar5 = prVar5->next
      ) {
    if ((prVar5->minpc <= pc_spill) && (pc_spill < prVar5->maxpc)) goto LAB_00505e80;
  }
  prVar5 = (runtime_moduledata *)0x0;
LAB_00505e80:
  if (prVar5 == (runtime_moduledata *)0x0) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = unaff_RBX;
    return (runtime_funcInfo)(auVar4 << 0x40);
  }
  uVar7 = pc_spill - prVar5->minpc;
  piVar8 = (int *)((uVar7 >> 0xc) * 0x14 + prVar5->findfunctab);
  uVar7 = (uVar7 & 0xfff) >> 8;
  if (0xf < uVar7) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
  uVar6 = (uint)*(byte *)((long)piVar8 + uVar7 + 4) + *piVar8;
  uVar7 = (ulong)uVar6;
  uVar1 = (prVar5->ftab).len;
  prVar2 = (runtime_moduledata *)(prVar5->ftab).array;
  if ((uint)uVar1 <= uVar6) {
    uVar7 = uVar1 - 1;
  }
  if (uVar1 <= (uVar7 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (pc_spill < (&prVar2->pcHeader)[(uVar7 & 0xffffffff) * 2]) {
    while( true ) {
      uVar6 = (uint)uVar7;
      if (uVar1 <= (uVar7 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if ((&prVar2->pcHeader)[(uVar7 & 0xffffffff) * 2] <= pc_spill) break;
      if (uVar6 == 0) goto LAB_00505fba;
      uVar7 = (ulong)(uVar6 - 1);
    }
    if (uVar6 == 0) {
LAB_00505fba:
      s.len = (int)prVar2;
      s.str = &DAT_002a4336;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
  }
  else {
    do {
      uVar6 = (uint)uVar7;
      uVar9 = uVar6 + 1;
      if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      uVar7 = (ulong)uVar9;
    } while ((&prVar2->pcHeader)[(ulong)uVar9 * 2] <= pc_spill);
  }
  if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  puVar3 = (&(prVar2->funcnametab).array)[(ulong)uVar6 * 2];
  if (puVar3 == (uint8 *)0xffffffffffffffff) {
    rVar11.datap = prVar2;
    rVar11._func = (runtime__func *)prVar5;
    return rVar11;
  }
  if ((uint8 *)(prVar5->pclntable).len <= puVar3) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
  rVar10.datap = (runtime_moduledata *)(prVar5->pclntable).array;
  rVar10._func = (runtime__func *)prVar5;
  return rVar10;
}

