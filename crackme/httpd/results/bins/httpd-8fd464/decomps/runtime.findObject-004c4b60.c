
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.findObject(uintptr p, uintptr refBase, uintptr refOff,
   uintptr base, runtime.mspan * s, uintptr objIndex) */

multireturn_uintptr_runtime_mspan___uintptr_
runtime_findObject(uintptr p,uintptr refBase,uintptr refOff)

{
  runtime_mSpanState rVar1;
  uintptr extraout_RAX;
  uintptr extraout_RAX_00;
  ulong uVar2;
  runtime_mspan *refBase_00;
  uintptr in_RDI;
  multireturn_uintptr_runtime_mspan___uintptr_ mVar3;
  multireturn_uintptr_runtime_mspan___uintptr_ mVar4;
  multireturn_uintptr_runtime_mspan___uintptr_ mVar5;
  multireturn_uintptr_runtime_mspan___uintptr_ mVar6;
  uintptr p_spill;
  uintptr refBase_spill;
  uintptr refOff_spill;
  
                    /* Unresolved local var: runtime.mspan * ~R0@[???] */
                    /* Unresolved local var: runtime.heapArena * ha@[???] */
  uVar2 = p_spill + 0x800000000000 >> 0x1a;
  if (uVar2 < 0x400000) {
    if ((*runtime_mheap_.arenas[0])[uVar2] == (runtime_heapArena *)0x0) {
      refBase_00 = (runtime_mspan *)0x0;
    }
    else {
      refBase_00 = (*runtime_mheap_.arenas[0])[uVar2]->spans[p_spill >> 0xd & 0x1fff];
    }
  }
  else {
    refBase_00 = (runtime_mspan *)0x0;
  }
  if (refBase_00 != (runtime_mspan *)0x0) {
    rVar1 = (refBase_00->state).s;
                    /* Unresolved local var: runtime.mSpanState state@[???] */
    if (((rVar1 == 1) && (refBase = refBase_00->startAddr, refBase <= p_spill)) &&
       (p_spill < refBase_00->limit)) {
      mVar5.base = (p_spill - refBase) * (ulong)refBase_00->divMul >> 0x20;
      mVar5.s = (runtime_mspan *)refBase;
      mVar5.objIndex = (uintptr)refBase_00;
      return mVar5;
    }
    if (rVar1 != 2) {
      if (runtime_debug.invalidptr != 0) {
        runtime_badPointer((runtime_mspan *)refOff_spill,refBase,(uintptr)refBase_00,in_RDI);
        p_spill = extraout_RAX;
      }
      mVar3.s = (runtime_mspan *)refBase;
      mVar3.base = p_spill;
      mVar3.objIndex = (uintptr)refBase_00;
      return mVar3;
    }
    mVar4.s = (runtime_mspan *)refBase;
    mVar4.base = p_spill;
    mVar4.objIndex = (uintptr)refBase_00;
    return mVar4;
  }
  if ((p_spill == 0xdeaddeaddeaddead) && (runtime_debug.invalidptr != 0)) {
    runtime_badPointer((runtime_mspan *)refOff_spill,refBase,0,in_RDI);
    p_spill = extraout_RAX_00;
  }
  mVar6.s = (runtime_mspan *)refBase;
  mVar6.base = p_spill;
  mVar6.objIndex = 0;
  return mVar6;
}

