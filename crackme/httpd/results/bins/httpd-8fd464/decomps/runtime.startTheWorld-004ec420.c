
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_startTheWorld(void)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  bool unaff_BL;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.m * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_systemstack();
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar3 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(lVar3 + 0x30) + 0x110);
  *piVar1 = *piVar1 + 1;
  lVar3 = *(long *)(lVar3 + 0x30);
  *(undefined8 *)(lVar3 + 0x108) = 0;
  lVar4 = lVar3;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(undefined8 *)(lVar3 + 0x100) = 0;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_semrelease1(&runtime_worldsema,unaff_BL,lVar4);
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar4 = *(long *)(in_FS_OFFSET + -8);
  iVar2 = *(int *)(lVar3 + 0x110);
  *(int *)(lVar3 + 0x110) = iVar2 + -1;
  if ((iVar2 == 1) && (*(char *)(lVar4 + 0xb1) != '\0')) {
    *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffade;
  }
  return;
}

