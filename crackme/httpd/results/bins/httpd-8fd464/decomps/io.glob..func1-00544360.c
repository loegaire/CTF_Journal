
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void io.glob..func1(interface_{} ~r0) */

interface___ io_glob__func1(void)

{
  void *unaff_RBX;
  long in_FS_OFFSET;
  interface___ iVar1;
  runtime__type *local_28;
  uintptr local_18;
  
                    /* Unresolved local var: []uint8 * &b@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_002221a0);
  runtime_makeslice(local_28,(int)unaff_RBX,0x225720);
  local_28->ptrdata = 0x2000;
  local_28->hash = 0x2000;
  local_28->tflag = 0;
  local_28->align = 0;
  local_28->fieldAlign = 0;
  local_28->kind = 0;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_28->size = local_18;
  }
  else {
    runtime_gcWriteBarrier();
  }
  iVar1.data = unaff_RBX;
  iVar1._type = (runtime__type *)&DAT_00219520;
  return iVar1;
}

