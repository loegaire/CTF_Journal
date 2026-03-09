
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_printunlock(void)

{
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.m * mp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar2 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  cVar1 = *(char *)(lVar2 + 0x11f);
  *(char *)(lVar2 + 0x11f) = cVar1 + -1;
  if (cVar1 == '\x01') {
    runtime_unlock2(&runtime_debuglock);
  }
  return;
}

