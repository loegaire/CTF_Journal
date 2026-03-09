
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_asyncPreempt2(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * gp@[???] */
  lVar1 = *(long *)(in_FS_OFFSET + -8);
  *(undefined1 *)(lVar1 + 0xb4) = 1;
  if (*(char *)(lVar1 + 0xb2) == '\0') {
    runtime_mcall();
  }
  else {
    runtime_mcall();
  }
  *(undefined1 *)(lVar1 + 0xb4) = 0;
  return;
}

