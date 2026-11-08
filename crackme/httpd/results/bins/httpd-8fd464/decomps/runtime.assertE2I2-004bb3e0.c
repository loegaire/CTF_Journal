
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.assertE2I2(runtime.interfacetype * inter, runtime.eface e,
   runtime.iface r) */

runtime_iface runtime_assertE2I2(runtime_interfacetype *inter,runtime_eface e)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long in_FS_OFFSET;
  runtime_iface rVar3;
  runtime_interfacetype *inter_spill;
  runtime__type *t;
  runtime_itab *in_stack_00000018;
  undefined8 local_10;
  
  rVar3.data = e._type;
                    /* Unresolved local var: runtime.itab * tab@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (t != (runtime__type *)0x0) {
    runtime_getitab((runtime_interfacetype *)t,rVar3.data,SUB81(inter_spill,0));
    if (local_10 != 0) {
      rVar3.tab = in_stack_00000018;
      return rVar3;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = rVar3.data;
    return (runtime_iface)(auVar1 << 0x40);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = rVar3.data;
  return (runtime_iface)(auVar2 << 0x40);
}

