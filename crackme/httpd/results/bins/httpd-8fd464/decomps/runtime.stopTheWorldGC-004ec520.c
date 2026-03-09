
/* WARNING: Unknown calling convention */

void runtime_stopTheWorldGC(string reason)

{
  runtime_semaProfileFlags in_RCX;
  int in_RDI;
  long in_FS_OFFSET;
  string reason_00;
  string reason_spill;
  
  reason_00.len = reason.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_semacquire1(&runtime_gcsema,reason.len._0_1_,in_RCX,in_RDI);
  reason_00.str = (uint8 *)reason_spill.len;
  runtime_stopTheWorld(reason_00);
  return;
}

