
/* WARNING: Unknown calling convention */

void runtime_unwindm(bool *restore)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool *restore_spill;
  
  if (*restore_spill != false) {
                    /* Unresolved local var: runtime.g * _g_@[???] */
    lVar2 = *(long *)(in_FS_OFFSET + -8);
                    /* Unresolved local var: runtime.m * mp@[???] */
    piVar1 = (int *)(*(long *)(lVar2 + 0x30) + 0x110);
    *piVar1 = *piVar1 + 1;
    plVar3 = *(long **)(lVar2 + 0x30);
    *(undefined8 *)(*plVar3 + 0x38) = **(undefined8 **)(*plVar3 + 0x38);
    if (0 < (int)plVar3[0x28]) {
      *(undefined1 *)(plVar3 + 0x24) = 0;
      *(int *)(plVar3 + 0x28) = (int)plVar3[0x28] + -1;
    }
                    /* Unresolved local var: runtime.g * _g_@[???] */
    lVar2 = *(long *)(in_FS_OFFSET + -8);
    lVar4 = plVar3[0x22];
    *(int *)(plVar3 + 0x22) = (int)lVar4 + -1;
    if (((int)lVar4 == 1) && (*(char *)(lVar2 + 0xb1) != '\0')) {
      *(undefined8 *)(lVar2 + 0x10) = 0xfffffffffffffade;
    }
  }
  return;
}

