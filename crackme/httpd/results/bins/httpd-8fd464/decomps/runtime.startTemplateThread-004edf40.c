
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_startTemplateThread(void)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.m * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar3 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(lVar3 + 0x30) + 0x110);
  *piVar1 = *piVar1 + 1;
  lVar3 = *(long *)(lVar3 + 0x30);
  LOCK();
  bVar5 = runtime_newmHandoff.haveTemplateThread == 0;
  if (bVar5) {
    runtime_newmHandoff.haveTemplateThread = 1;
  }
  UNLOCK();
  if (bVar5) {
    runtime_newm((func__ **)&PTR_runtime_templateThread_002b3a58,(runtime_p *)0x1,lVar3);
                    /* Unresolved local var: runtime.g * _g_@[???] */
    lVar4 = *(long *)(in_FS_OFFSET + -8);
    iVar2 = *(int *)(lVar3 + 0x110);
    *(int *)(lVar3 + 0x110) = iVar2 + -1;
    if ((iVar2 == 1) && (*(char *)(lVar4 + 0xb1) != '\0')) {
      *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffade;
    }
    return;
  }
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar4 = *(long *)(in_FS_OFFSET + -8);
  iVar2 = *(int *)(lVar3 + 0x110);
  *(int *)(lVar3 + 0x110) = iVar2 + -1;
  if ((iVar2 == 1) && (*(char *)(lVar4 + 0xb1) != '\0')) {
    *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffade;
  }
  return;
}

