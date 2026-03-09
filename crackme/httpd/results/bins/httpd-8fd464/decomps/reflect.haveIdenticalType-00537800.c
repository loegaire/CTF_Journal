
/* WARNING: Removing unreachable block (ram,0x005378bb) */
/* WARNING: Removing unreachable block (ram,0x0053797a) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.haveIdenticalType(reflect.Type T, reflect.Type V, bool
   cmpTags, bool ~r3) */

bool reflect_haveIdenticalType(reflect_Type T,reflect_Type V,bool cmpTags)

{
  reflect_rtype *V_00;
  byte bVar1;
  runtime_interfacetype *prVar2;
  long in_FS_OFFSET;
  reflect_Type T_spill;
  reflect_Type V_spill;
  bool cmpTags_spill;
  reflect_rtype *local_40;
  byte local_30;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (cmpTags_spill) {
    if (V_spill.tab == T_spill.tab) {
      runtime_ifaceeq(V_spill.data,T.data,T_spill.tab);
    }
    else {
      local_30 = 0;
    }
    return (bool)local_30;
  }
  (*(code *)T_spill.tab[5].fun[0])();
  (*(code *)V_spill.tab[5].fun[0])();
  runtime_memequal();
  if (local_30 != 0) {
    (*(code *)T_spill.tab[4].fun[0])();
    (*(code *)V_spill.tab[4].fun[0])();
  }
  bVar1 = local_30 == 0;
  if (!(bool)bVar1) {
    (*(code *)T_spill.tab[7]._type)();
    V_00 = (reflect_rtype *)V_spill.tab[7]._type;
    (*(code *)V_00)();
    runtime_memequal();
    bVar1 = local_30 ^ 1;
    if (bVar1 == 0) {
      (*(code *)T_spill.tab[8].inter)();
      prVar2 = V_spill.tab[8].inter;
      (*(code *)prVar2)();
      reflect_haveIdenticalUnderlyingType(local_40,V_00,SUB81(prVar2,0));
      return (bool)local_30;
    }
  }
  return (bool)bVar1;
}

