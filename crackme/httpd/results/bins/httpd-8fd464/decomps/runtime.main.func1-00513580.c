
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_main_func1(void)

{
  int64 in_RCX;
  runtime_p *unaff_RBX;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newm((func__ **)&PTR_runtime_sysmon_002b3a50,unaff_RBX,in_RCX);
  return;
}

