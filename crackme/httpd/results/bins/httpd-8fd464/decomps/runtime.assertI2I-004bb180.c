
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.assertI2I(runtime.interfacetype * inter, runtime.itab *
   tab, runtime.itab * ~r2) */

runtime_itab * runtime_assertI2I(runtime_interfacetype *inter,runtime_itab *tab)

{
  long in_FS_OFFSET;
  interface___ e;
  runtime_interfacetype *inter_spill;
  runtime_itab *tab_spill;
  long local_20;
  runtime_itab *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (tab_spill != (runtime_itab *)0x0) {
    if (tab_spill->inter == inter_spill) {
      return tab_spill;
    }
    runtime_getitab((runtime_interfacetype *)tab_spill->_type,(runtime__type *)tab,
                    SUB81(inter_spill,0));
    return local_10;
  }
  runtime_newobject((runtime__type *)&DAT_00263d60);
  if (runtime_writeBarrier._0_4_ != 0) goto LAB_004bb23d;
  *(runtime_interfacetype **)(local_20 + 0x10) = inter_spill;
  do {
    *(undefined8 *)(local_20 + 0x20) = 0;
    *(undefined8 *)(local_20 + 0x18) = 0;
    e.data = tab;
    e._type = (runtime__type *)&DAT_0023b000;
    runtime_gopanic(e);
LAB_004bb23d:
    runtime_gcWriteBarrier();
  } while( true );
}

