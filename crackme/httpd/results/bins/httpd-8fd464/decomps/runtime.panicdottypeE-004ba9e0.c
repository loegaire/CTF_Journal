
/* WARNING: Unknown calling convention */

void runtime_panicdottypeE(runtime__type *have,runtime__type *want,runtime__type *iface)

{
  long in_FS_OFFSET;
  interface___ e;
  runtime__type *have_spill;
  runtime__type *want_spill;
  runtime__type *iface_spill;
  undefined8 *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_00263d60);
  if (runtime_writeBarrier._0_4_ != 0) goto LAB_004baa5e;
  *local_10 = iface_spill;
  local_10[1] = have_spill;
  local_10[2] = want_spill;
  do {
    local_10[4] = 0;
    local_10[3] = 0;
    e.data = want;
    e._type = (runtime__type *)&DAT_0023b000;
    runtime_gopanic(e);
LAB_004baa5e:
    runtime_gcWriteBarrier();
    runtime_gcWriteBarrierDX();
    runtime_gcWriteBarrier();
  } while( true );
}

