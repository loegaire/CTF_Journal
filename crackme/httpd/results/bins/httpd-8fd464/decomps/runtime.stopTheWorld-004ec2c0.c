
/* WARNING: Unknown calling convention */

void runtime_stopTheWorld(string reason)

{
  long lVar1;
  runtime_semaProfileFlags in_RCX;
  int in_RDI;
  long in_FS_OFFSET;
  string reason_spill;
  
                    /* Unresolved local var: runtime.g * gp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_semacquire1(&runtime_worldsema,reason.len._0_1_,in_RCX,in_RDI);
  lVar1 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  *(int *)(lVar1 + 0x108) = reason_spill.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(uint8 **)(lVar1 + 0x100) = reason_spill.str;
  }
  else {
    runtime_gcWriteBarrierCX();
  }
  runtime_systemstack();
  return;
}

