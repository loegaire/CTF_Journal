
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_traceGoSched(void)

{
  long lVar1;
  undefined8 uVar2;
  int unaff_RBX;
  int in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  __uint64 args;
  
                    /* Unresolved local var: runtime.g * _g_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar1 = *(long *)(in_FS_OFFSET + -8);
  uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x30) + 0xd8);
  *(undefined8 *)(lVar1 + 0xe0) = uVar2;
  args.len = in_RDI;
  args.array = (uint64 *)uVar2;
  args.cap = in_RSI;
  runtime_traceEvent((uint8)lVar1,unaff_RBX,args);
  return;
}

