
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_minitSignalStack(void)

{
  runtime_stack *s;
  uintptr uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: runtime.stackt st@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  s = *(runtime_stack **)(in_FS_OFFSET + -8);
  runtime_sigaltstack();
  if (runtime_iscgo == false) {
    runtime_signalstack(s);
    *(undefined1 *)(s[3].lo + 0x11e) = 1;
  }
  else {
    uVar1 = s[3].lo;
                    /* Unresolved local var: runtime.g * g@[???] */
    lVar2 = *(long *)(in_FS_OFFSET + -8);
    puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x50);
    uVar4 = puVar3[1];
    *(undefined8 *)(uVar1 + 0x58) = *puVar3;
    *(undefined8 *)(uVar1 + 0x60) = uVar4;
    *(undefined8 *)(uVar1 + 0x68) =
         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x30) + 0x50) + 0x10);
    *(undefined8 *)(uVar1 + 0x70) =
         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x30) + 0x50) + 0x18);
    *(undefined8 *)(uVar1 + 0x78) =
         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x30) + 0x50) + 0x80);
    **(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x50) = 0;
    *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x30) + 0x50) + 8) = 0;
    *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x30) + 0x50) + 0x10) = 0x3a0;
    *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x30) + 0x50) + 0x18) = 0x3a0;
    *(undefined1 *)(s[3].lo + 0x11e) = 0;
  }
  return;
}

