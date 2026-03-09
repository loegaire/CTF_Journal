
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_traceGCSweepDone(void)

{
  int unaff_RBX;
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  string s;
  __uint64 args;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_10;
  
                    /* Unresolved local var: runtime.p * _p_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_10 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  if (*(char *)(local_10 + 0x1638) != '\0') {
    if (*(long *)(local_10 + 0x1640) != 0) {
      local_20 = *(undefined8 *)(local_10 + 0x1640);
      uStack_18 = *(undefined8 *)(local_10 + 0x1648);
      args.len = in_RDI;
      args.array = &local_20;
      args.cap = in_RSI;
      runtime_traceEvent((uint8)local_10,unaff_RBX,args);
    }
    *(undefined1 *)(local_10 + 0x1638) = 0;
    return;
  }
  s.len = unaff_RBX;
  s.str = &DAT_0029ed26;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

