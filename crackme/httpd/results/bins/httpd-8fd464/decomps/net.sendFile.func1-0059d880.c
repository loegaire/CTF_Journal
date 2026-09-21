
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.sendFile.func1(uintptr fd, bool ~r1) */

bool net_sendFile_func1(uintptr fd)

{
  undefined8 *pos;
  undefined8 *puVar1;
  undefined8 extraout_RAX;
  long in_RDX;
  long extraout_RDX;
  int64 in_RDI;
  long in_FS_OFFSET;
  uintptr fd_spill;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
                    /* Unresolved local var: net.netFD * c@[DW_OP_reg0(RAX)]
                       Unresolved local var: int64 pos@[???]
                       Unresolved local var: int64 remain@[???]
                       Unresolved local var: int64 * &written@[???]
                       Unresolved local var: error * &werr@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  pos = *(undefined8 **)(in_RDX + 0x28);
  puVar1 = *(undefined8 **)(in_RDX + 0x20);
  internal_poll_SendFile((internal_poll_FD *)fd_spill,*(int *)(in_RDX + 0x10),(int64)pos,in_RDI);
  *puVar1 = local_30;
  *pos = local_28;
  if (runtime_writeBarrier._0_4_ == 0) {
    pos[1] = local_20;
  }
  else {
    runtime_gcWriteBarrier();
    local_20 = extraout_RAX;
  }
  return SUB81(local_20,0);
}

