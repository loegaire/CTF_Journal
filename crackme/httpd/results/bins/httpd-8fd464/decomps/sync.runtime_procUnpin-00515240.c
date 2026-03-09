
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sync_runtime_procUnpin(void)

{
  int *piVar1;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * _g_@[???] */
  piVar1 = (int *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0x110);
  *piVar1 = *piVar1 + -1;
  return;
}

