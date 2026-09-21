
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.convTslice([]uint8 val, void * x) */

void * runtime_convTslice(__uint8 val)

{
  uint8 *puVar1;
  uint8 *extraout_RAX;
  uint8 *extraout_RAX_00;
  int iVar2;
  long in_FS_OFFSET;
  __uint8 val_spill;
  undefined8 *local_10;
  
  iVar2 = val.cap;
  puVar1 = val.array;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    puVar1 = extraout_RAX_00;
  }
  if (val_spill.array != (uint8 *)0x0) {
    runtime_mallocgc((uintptr)runtime_sliceType,(runtime__type *)val.len,SUB81(iVar2,0));
    local_10[1] = val_spill.len;
    local_10[2] = val_spill.cap;
    if (runtime_writeBarrier._0_4_ == 0) {
      *local_10 = val_spill.array;
      puVar1 = val_spill.array;
    }
    else {
      runtime_gcWriteBarrier();
      puVar1 = extraout_RAX;
    }
  }
  return puVar1;
}

