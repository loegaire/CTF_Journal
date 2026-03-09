
/* WARNING: Unknown calling convention */

void runtime_panicdottypeI(runtime_itab *have,runtime__type *want,runtime__type *iface)

{
  runtime__type *typ;
  long in_FS_OFFSET;
  interface___ e;
  runtime_itab *have_spill;
  runtime__type *want_spill;
  runtime__type *iface_spill;
  undefined8 *local_18;
  
                    /* Unresolved local var: runtime._type * t@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (have_spill == (runtime_itab *)0x0) {
    typ = (runtime__type *)0x0;
  }
  else {
    typ = have_spill->_type;
  }
  runtime_newobject(typ);
  if (runtime_writeBarrier._0_4_ != 0) goto LAB_004bab35;
  *local_18 = iface_spill;
  local_18[1] = typ;
  local_18[2] = want_spill;
  do {
    local_18[4] = 0;
    local_18[3] = 0;
    e.data = want;
    e._type = (runtime__type *)&DAT_0023b000;
    runtime_gopanic(e);
LAB_004bab35:
    runtime_gcWriteBarrier();
    runtime_gcWriteBarrierDX();
    runtime_gcWriteBarrier();
  } while( true );
}

