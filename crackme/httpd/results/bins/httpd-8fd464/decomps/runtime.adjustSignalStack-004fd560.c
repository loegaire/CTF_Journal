
/* WARNING: Removing unreachable block (ram,0x004fd6a9) */
/* WARNING: Removing unreachable block (ram,0x004fd5fb) */
/* WARNING: Removing unreachable block (ram,0x004fd60e) */
/* WARNING: Removing unreachable block (ram,0x004fd657) */
/* WARNING: Removing unreachable block (ram,0x004fd7c5) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.adjustSignalStack(uint32 sig, runtime.m * mp,
   runtime.gsignalStack * gsigStack, bool ~r3) */

bool runtime_adjustSignalStack(uint32 sig,runtime_m *mp,runtime_gsignalStack *gsigStack)

{
  uintptr uVar1;
  uintptr uVar2;
  uintptr uVar3;
  long lVar4;
  uintptr *puVar5;
  uintptr uVar6;
  undefined1 extraout_AL;
  long in_FS_OFFSET;
  uint32 sig_spill;
  runtime_m *mp_spill;
  runtime_gsignalStack *gsigStack_spill;
  
                    /* Unresolved local var: uintptr sp@[???]
                       Unresolved local var: runtime.stackt st@[???] */
  if (((uint32 *)(mp_spill->gsignal->stack).lo <= &sig_spill) &&
     (&sig_spill < (uint32 *)(mp_spill->gsignal->stack).hi)) {
    return SUB81(mp_spill,0);
  }
  runtime_sigaltstack();
  if (((uint32 *)(mp_spill->g0->stack).lo <= &sig_spill) &&
     (&sig_spill < (uint32 *)(mp_spill->g0->stack).hi)) {
                    /* Unresolved local var: runtime.stackt st@[???] */
    uVar1 = (mp_spill->g0->stack).hi;
    uVar2 = (mp_spill->g0->stack).lo;
    uVar3 = (mp_spill->g0->stack).lo;
                    /* Unresolved local var: runtime.g * g@[???] */
    lVar4 = *(long *)(in_FS_OFFSET + -8);
    if (gsigStack_spill != (runtime_gsignalStack *)0x0) {
      puVar5 = *(uintptr **)(*(long *)(lVar4 + 0x30) + 0x50);
      uVar6 = puVar5[1];
      (gsigStack_spill->stack).lo = *puVar5;
      (gsigStack_spill->stack).hi = uVar6;
      gsigStack_spill->stackguard0 = *(uintptr *)(*(long *)(*(long *)(lVar4 + 0x30) + 0x50) + 0x10);
      gsigStack_spill->stackguard1 = *(uintptr *)(*(long *)(*(long *)(lVar4 + 0x30) + 0x50) + 0x18);
      gsigStack_spill->stktopsp = *(uintptr *)(*(long *)(*(long *)(lVar4 + 0x30) + 0x50) + 0x80);
    }
    **(uintptr **)(*(long *)(lVar4 + 0x30) + 0x50) = uVar3;
    *(uintptr *)(*(long *)(*(long *)(lVar4 + 0x30) + 0x50) + 8) = (uVar1 - uVar2) + uVar3;
    *(uintptr *)(*(long *)(*(long *)(lVar4 + 0x30) + 0x50) + 0x10) = uVar3 + 0x3a0;
    lVar4 = *(long *)(*(long *)(lVar4 + 0x30) + 0x50);
    *(uintptr *)(lVar4 + 0x18) = uVar3 + 0x3a0;
    return SUB81(lVar4,0);
  }
  runtime_setg();
  runtime_needm();
  runtime_sigNotOnStack(sig_spill);
  runtime_dropm();
  return (bool)extraout_AL;
}

