
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.specialChannelAssignability(reflect.rtype * T,
   reflect.rtype * V, bool ~r2) */

bool reflect_specialChannelAssignability(reflect_rtype *T,reflect_rtype *V)

{
  undefined1 auVar1 [16];
  undefined1 in_SIL;
  ulong in_RDI;
  long in_FS_OFFSET;
  reflect_Type rVar2;
  reflect_rtype *T_spill;
  reflect_rtype *V_spill;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  reflect___rtype__ChanDir(V_spill);
  if (local_40 == 3) {
    reflect___rtype__Name(T_spill);
    if (local_38 == 0) {
      reflect___rtype__Elem(T_spill);
      rVar2 = reflect___rtype__Elem((reflect_rtype *)0x3);
      rVar2.tab = (runtime_itab *)0x3;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = in_RDI;
      reflect_haveIdenticalType(rVar2,(reflect_Type)(auVar1 << 0x40),(bool)in_SIL);
    }
    else {
      reflect___rtype__Name(V_spill);
      local_20 = 0;
    }
  }
  else {
    local_20 = 0;
  }
  return (bool)local_20;
}

