
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_alginit(void)

{
  int in_RCX;
  undefined8 unaff_RBX;
  long in_FS_OFFSET;
  __uint8 r;
  __uint8 r_00;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((internal_cpu_X86.HasAES != false) && (internal_cpu_X86.HasSSSE3 != false)) &&
     (internal_cpu_X86.HasSSE41 != false)) {
    runtime_useAeshash = true;
    r.len = unaff_RBX;
    r.array = runtime_aeskeysched;
    r.cap = in_RCX;
    runtime_getRandomData(r);
    return;
  }
  r_00.len = unaff_RBX;
  r_00.array = (uint8 *)runtime_hashkey;
  r_00.cap = in_RCX;
  runtime_getRandomData(r_00);
  runtime_hashkey[0] = runtime_hashkey[0] | 1;
  runtime_hashkey[1] = runtime_hashkey[1] | 1;
  runtime_hashkey[2] = runtime_hashkey[2] | 1;
  runtime_hashkey[3] = runtime_hashkey[3] | 1;
  return;
}

