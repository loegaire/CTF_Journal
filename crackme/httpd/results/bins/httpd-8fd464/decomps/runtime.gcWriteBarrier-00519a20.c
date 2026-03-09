
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcWriteBarrier(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uintptr *in_RAX;
  uintptr unaff_RBX;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  puVar2 = *(undefined8 **)(lVar1 + 0x16c0);
  *(undefined8 **)(lVar1 + 0x16c0) = puVar2 + 2;
  puVar3 = *(undefined8 **)(lVar1 + 0x16c8);
  *puVar2 = in_RAX;
  puVar2[1] = *in_RDI;
  if (puVar2 + 2 == puVar3) {
    runtime_wbBufFlush(in_RAX,unaff_RBX);
  }
  *in_RDI = in_RAX;
  return;
}

