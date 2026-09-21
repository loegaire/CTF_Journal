
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.convTstring(string val, void * x) */

void * runtime_convTstring(string val)

{
  uint8 *extraout_RAX;
  undefined1 in_CL;
  long in_FS_OFFSET;
  string val_spill;
  undefined8 *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (val_spill.len == 0) {
    val_spill.str = (uint8 *)0x0;
  }
  else {
    runtime_mallocgc((uintptr)runtime_stringType,(runtime__type *)val.len,(bool)in_CL);
    local_10[1] = val_spill.len;
    if (runtime_writeBarrier._0_4_ == 0) {
      *local_10 = val_spill.str;
    }
    else {
      runtime_gcWriteBarrier();
      val_spill.str = extraout_RAX;
    }
  }
  return val_spill.str;
}

