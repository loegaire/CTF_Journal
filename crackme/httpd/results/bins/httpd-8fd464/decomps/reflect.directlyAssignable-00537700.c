
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.directlyAssignable(reflect.rtype * T, reflect.rtype * V,
   bool ~r2) */

bool reflect_directlyAssignable(reflect_rtype *T,reflect_rtype *V)

{
  bool bVar1;
  reflect_rtype *prVar2;
  reflect_rtype *V_00;
  long in_FS_OFFSET;
  reflect_rtype *T_spill;
  reflect_rtype *V_spill;
  char local_18;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (V_spill == T_spill) {
    return SUB81(V_spill,0);
  }
  if (((T_spill->tflag & 4) == 0) || ((V_spill->tflag & 4) == 0)) {
    prVar2 = (reflect_rtype *)(ulong)(T_spill->kind & 0x1f);
    V_00 = (reflect_rtype *)(ulong)(V_spill->kind & 0x1f);
    if (V_00 == prVar2) {
      if ((prVar2 == (reflect_rtype *)&DAT_00000012) &&
         (bVar1 = reflect_specialChannelAssignability(V_spill,V_00), local_18 != '\0')) {
        return bVar1;
      }
      reflect_haveIdenticalUnderlyingType(V_spill,V_00,SUB81(T_spill,0));
      return (bool)local_10;
    }
  }
  return SUB81(V_spill,0);
}

