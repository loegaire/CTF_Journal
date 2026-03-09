
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.(*Errno).Error(string ~r0) */

string syscall___Errno__Error(void)

{
  long lVar1;
  long *plVar2;
  syscall_Errno e;
  undefined1 *puVar3;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  string sVar4;
  
  do {
    lVar1 = *(long *)(in_FS_OFFSET + -8);
    puVar3 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar1 + 0x10) < register0x00000020) {
      puVar3 = (undefined1 *)((long)register0x00000020 + -0x20);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      plVar2 = *(long **)(lVar1 + 0x20);
      if ((plVar2 != (long *)0x0) &&
         ((undefined1 *)*plVar2 == (undefined1 *)((long)register0x00000020 + 8))) {
        *plVar2 = (long)((long)register0x00000020 + -0x20);
      }
      if (*(syscall_Errno **)((long)register0x00000020 + 8) != (syscall_Errno *)0x0) {
        e = **(syscall_Errno **)((long)register0x00000020 + 8);
        *(syscall_Errno *)((long)register0x00000020 + -0x20) = e;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x54a1fc;
        sVar4 = syscall_Errno_Error(e);
        *(uint8 **)((long)register0x00000020 + 0x10) = *(uint8 **)((long)register0x00000020 + -0x18)
        ;
        *(undefined8 *)((long)register0x00000020 + 0x18) =
             *(undefined8 *)((long)register0x00000020 + -0x10);
        sVar4.str = *(uint8 **)((long)register0x00000020 + -0x18);
        return sVar4;
      }
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x54a21f;
      runtime_panicwrap();
    }
    *(undefined8 *)(puVar3 + -8) = 0x54a225;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar3;
  } while( true );
}

