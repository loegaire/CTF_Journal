
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.tracebackHexdump.func1(uintptr p, uint8 ~r1) */

uint8 runtime_tracebackHexdump_func1(uintptr p)

{
  long lVar1;
  uint8 uVar2;
  long in_RDX;
  uintptr p_spill;
  
                    /* Unresolved local var: runtime.stkframe * frame@[DW_OP_reg0(RAX)]
                       Unresolved local var: uintptr bad@[???] */
  lVar1 = *(long *)(in_RDX + 8);
  uVar2 = (uint8)lVar1;
  if (*(uintptr *)(lVar1 + 0x30) == p_spill) {
    return uVar2;
  }
  if (*(uintptr *)(lVar1 + 0x28) != p_spill) {
    if (p_spill == *(uintptr *)(in_RDX + 0x10)) {
      return uVar2;
    }
    return uVar2;
  }
  return uVar2;
}

