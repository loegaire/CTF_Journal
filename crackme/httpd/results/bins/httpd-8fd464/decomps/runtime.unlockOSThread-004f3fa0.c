
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_unlockOSThread(void)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar2 = *(long *)(in_FS_OFFSET + -8);
  if (*(int *)(*(long *)(lVar2 + 0x30) + 0x27c) == 0) {
    runtime_systemstack();
  }
  piVar1 = (int *)(*(long *)(lVar2 + 0x30) + 0x27c);
  *piVar1 = *piVar1 + -1;
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar2 = *(long *)(in_FS_OFFSET + -8);
  lVar3 = *(long *)(lVar2 + 0x30);
  if ((*(int *)(lVar3 + 0x27c) == 0) && (*(int *)(lVar3 + 0x278) == 0)) {
    *(undefined8 *)(lVar3 + 0x170) = 0;
    *(undefined8 *)(lVar2 + 0xe8) = 0;
  }
  return;
}

