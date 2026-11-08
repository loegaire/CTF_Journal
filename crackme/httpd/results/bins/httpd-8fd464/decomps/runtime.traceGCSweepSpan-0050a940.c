
/* WARNING: Unknown calling convention */

void runtime_traceGCSweepSpan(uintptr bytesSwept)

{
  long lVar1;
  undefined8 in_RCX;
  int unaff_RBX;
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  __uint64 args;
  uintptr bytesSwept_spill;
  
                    /* Unresolved local var: runtime.p * _p_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  if (*(char *)(lVar1 + 0x1638) != '\0') {
    if (*(long *)(lVar1 + 0x1640) == 0) {
      args.len = in_RDI;
      args.array = (uint64 *)in_RCX;
      args.cap = in_RSI;
      runtime_traceEvent((uint8)lVar1,unaff_RBX,args);
    }
    *(long *)(lVar1 + 0x1640) = *(long *)(lVar1 + 0x1640) + bytesSwept_spill;
  }
  return;
}

