
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mime_init_0(void)

{
  string *extraout_RAX;
  int iVar1;
  string *psVar2;
  int in_RDI;
  long in_FS_OFFSET;
  runtime_slice old;
  string *local_20;
  long local_18;
  int local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  iVar1 = mime_typeFiles.len;
  psVar2 = mime_typeFiles.array;
  if ((ulong)mime_typeFiles.cap < mime_typeFiles.len + 1U) {
    old.len = mime_typeFiles.len + 1U;
    old.array = (void *)mime_typeFiles.cap;
    old.cap = in_RDI;
    runtime_growslice((runtime__type *)mime_typeFiles.len,old,0x225520);
    mime_typeFiles.cap = local_10;
    iVar1 = local_18;
    if (runtime_writeBarrier._0_4_ == 0) {
      mime_typeFiles.array = local_20;
      psVar2 = local_20;
    }
    else {
      runtime_gcWriteBarrier();
      psVar2 = extraout_RAX;
    }
  }
  mime_typeFiles.len = iVar1 + 1;
  psVar2[iVar1].len = 0x19;
  if (runtime_writeBarrier._0_4_ == 0) {
    psVar2[iVar1].str = &DAT_0029e8a8;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

