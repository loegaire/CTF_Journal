
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.convI2I(runtime.interfacetype * inter, runtime.iface i,
   runtime.iface r) */

runtime_iface runtime_convI2I(runtime_interfacetype *inter,runtime_iface i)

{
  undefined1 auVar1 [16];
  long in_FS_OFFSET;
  runtime_iface rVar2;
  runtime_iface rVar3;
  runtime_interfacetype *inter_spill;
  runtime_itab *tab;
  runtime_itab *in_stack_00000018;
  
  rVar2.data = (runtime__type *)i.tab;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (tab != (runtime_itab *)0x0) {
    if (tab->inter == inter_spill) {
      rVar2.tab = in_stack_00000018;
      return rVar2;
    }
    runtime_getitab((runtime_interfacetype *)tab->_type,rVar2.data,SUB81(inter_spill,0));
    rVar3.data = rVar2.data;
    rVar3.tab = in_stack_00000018;
    return rVar3;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = rVar2.data;
  return (runtime_iface)(auVar1 << 0x40);
}

