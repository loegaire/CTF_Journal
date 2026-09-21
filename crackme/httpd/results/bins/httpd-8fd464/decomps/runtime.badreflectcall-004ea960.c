
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_badreflectcall(void)

{
  void *unaff_RBX;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  
  do {
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      *(undefined **)((long)register0x00000020 + -0x18) = &DAT_00237ca0;
      *(undefined1 **)((long)register0x00000020 + -0x10) = runtime__stmp_104;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4ea999;
      e.data = unaff_RBX;
      e._type = (runtime__type *)runtime__stmp_104;
      runtime_gopanic(e);
      register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    }
    *(undefined8 *)((long)register0x00000020 + -8) = 0x4ea99f;
    runtime_morestack_noctxt();
  } while( true );
}

