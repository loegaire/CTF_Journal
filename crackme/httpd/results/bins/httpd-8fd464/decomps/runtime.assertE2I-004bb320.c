
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.assertE2I(runtime.interfacetype * inter, runtime._type *
   t, runtime.itab * ~r2) */

runtime_itab * runtime_assertE2I(runtime_interfacetype *inter,runtime__type *t)

{
  long in_FS_OFFSET;
  interface___ e;
  runtime_interfacetype *inter_spill;
  runtime__type *t_spill;
  long local_20;
  runtime_itab *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (t_spill != (runtime__type *)0x0) {
    runtime_getitab((runtime_interfacetype *)t_spill,t,SUB81(inter_spill,0));
    return local_10;
  }
  runtime_newobject((runtime__type *)&DAT_00263d60);
  if (runtime_writeBarrier._0_4_ != 0) goto LAB_004bb3c7;
  *(runtime_interfacetype **)(local_20 + 0x10) = inter_spill;
  do {
    *(undefined8 *)(local_20 + 0x20) = 0;
    *(undefined8 *)(local_20 + 0x18) = 0;
    e.data = t;
    e._type = (runtime__type *)&DAT_0023b000;
    runtime_gopanic(e);
LAB_004bb3c7:
    runtime_gcWriteBarrier();
  } while( true );
}

