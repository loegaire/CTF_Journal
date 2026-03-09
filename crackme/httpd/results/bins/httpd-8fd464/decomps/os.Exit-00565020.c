
/* WARNING: Unknown calling convention */

void os_Exit(int code)

{
  long code_00;
  void *unaff_RBX;
  undefined1 *puVar1;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  int code_spill;
  
  do {
    puVar1 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar1 = (undefined1 *)((long)register0x00000020 + -0x18);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      code_00 = *(long *)((long)register0x00000020 + 8);
      if (code_00 != 0) goto LAB_0056505c;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x56504c;
      internal_testlog_PanicOnExit0();
      if (*(char *)((long)register0x00000020 + -0x18) == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x565057;
        os_runtime_beforeExit();
        code_00 = *(int *)((long)register0x00000020 + 8);
LAB_0056505c:
        *(long *)((long)register0x00000020 + -0x18) = code_00;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x565065;
        syscall_Exit(code_00);
        return;
      }
      *(undefined **)((long)register0x00000020 + -0x18) = &DAT_00225520;
      *(undefined ***)((long)register0x00000020 + -0x10) = &os__stmp_9;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x56508b;
      e.data = unaff_RBX;
      e._type = (runtime__type *)&os__stmp_9;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar1 + -8) = 0x565091;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar1;
  } while( true );
}

