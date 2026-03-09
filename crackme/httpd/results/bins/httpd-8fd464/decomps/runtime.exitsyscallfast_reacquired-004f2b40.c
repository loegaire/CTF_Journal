
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_exitsyscallfast_reacquired(void)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar2 = *(long *)(in_FS_OFFSET + -8);
  lVar3 = *(long *)(lVar2 + 0x30);
  if (*(int *)(*(long *)(lVar3 + 0xd8) + 0x14) != *(int *)(lVar3 + 0x2ac)) {
    if (runtime_trace.enabled) {
      runtime_systemstack();
    }
    piVar1 = (int *)(*(long *)(*(long *)(lVar2 + 0x30) + 0xd8) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  return;
}

