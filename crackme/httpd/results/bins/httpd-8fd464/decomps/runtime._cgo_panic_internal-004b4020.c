
/* WARNING: Unknown calling convention */

void runtime__cgo_panic_internal(uint8 *p)

{
  uint8 *puVar1;
  void *unaff_RBX;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  string val;
  interface___ e;
  uint8 *p_spill;
  
  do {
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
                    /* Unresolved local var: runtime.stringStruct ss@[???]
                       Unresolved local var: string s@[???] */
      *(uint8 **)((long)register0x00000020 + -0x30) = *(uint8 **)((long)register0x00000020 + 8);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4b404b;
      runtime_findnull(*(uint8 **)((long)register0x00000020 + 8));
      puVar1 = *(uint8 **)((long)register0x00000020 + -0x28);
      *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x18) =
           *(undefined8 *)((long)register0x00000020 + 8);
      *(uint8 **)((long)register0x00000020 + -0x10) = puVar1;
      *(undefined8 *)((long)register0x00000020 + -0x30) =
           *(undefined8 *)((long)register0x00000020 + -0x18);
      *(uint8 **)((long)register0x00000020 + -0x28) = puVar1;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4b407c;
      val.len = (int)unaff_RBX;
      val.str = puVar1;
      runtime_convTstring(val);
      *(undefined **)((long)register0x00000020 + -0x30) = &DAT_00225520;
      *(runtime__type **)((long)register0x00000020 + -0x28) =
           *(runtime__type **)((long)register0x00000020 + -0x20);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4b4096;
      e.data = unaff_RBX;
      e._type = *(runtime__type **)((long)register0x00000020 + -0x20);
      runtime_gopanic(e);
      register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x30);
    }
    *(undefined8 *)((long)register0x00000020 + -8) = 0x4b409c;
    runtime_morestack_noctxt();
  } while( true );
}

