
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_unminitSignals(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  if (*(char *)(lVar1 + 0x11e) == '\0') {
                    /* Unresolved local var: runtime.g * gp@[???] */
    puVar2 = *(undefined8 **)(lVar1 + 0x50);
    uVar3 = *(undefined8 *)(lVar1 + 0x60);
    *puVar2 = *(undefined8 *)(lVar1 + 0x58);
    puVar2[1] = uVar3;
    puVar2[2] = *(undefined8 *)(lVar1 + 0x68);
    puVar2[3] = *(undefined8 *)(lVar1 + 0x70);
    puVar2[0x10] = *(undefined8 *)(lVar1 + 0x78);
  }
  else {
                    /* Unresolved local var: runtime.stackt st@[???] */
    runtime_sigaltstack();
  }
  return;
}

