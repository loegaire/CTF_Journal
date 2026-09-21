
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void crypto_init(void)

{
  int in_RCX;
  int unaff_RBX;
  long in_FS_OFFSET;
  func___hash_Hash ***local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_makeslice((runtime__type *)&DAT_00223960,unaff_RBX,in_RCX);
  crypto_hashes.len = 0x14;
  crypto_hashes.cap = 0x14;
  if (runtime_writeBarrier._0_4_ == 0) {
    crypto_hashes.array = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

