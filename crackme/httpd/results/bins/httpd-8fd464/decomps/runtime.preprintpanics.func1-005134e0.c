
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_preprintpanics_func1(void)

{
  long in_FS_OFFSET;
  interface___ iVar1;
  string s;
  long local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  iVar1 = runtime_gorecover((uintptr)&stack0x00000008);
  s.len = iVar1.data;
  if (local_18 == 0) {
    return;
  }
  s.str = (uint8 *)0x2a2890;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

