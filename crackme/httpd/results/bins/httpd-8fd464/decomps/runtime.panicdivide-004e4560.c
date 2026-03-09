
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_panicdivide(void)

{
  runtime__type *prVar1;
  void *unaff_RBX;
  undefined1 *puVar2;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  string err;
  interface___ e;
  
  do {
    puVar2 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar2 = (undefined1 *)((long)register0x00000020 + -0x18);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      *(undefined **)((long)register0x00000020 + -0x18) = &DAT_0029d29d;
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0x16;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4e4596;
      err.len = (int)unaff_RBX;
      err.str = &DAT_0029d29d;
      runtime_panicCheck2(err);
      prVar1 = (runtime__type *)0x0;
      if (runtime_divideError.tab != (runtime_itab *)0x0) {
        prVar1 = (runtime_divideError.tab)->_type;
      }
      *(runtime__type **)((long)register0x00000020 + -0x18) = prVar1;
      *(void **)((long)register0x00000020 + -0x10) = runtime_divideError.data;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4e45bb;
      e.data = unaff_RBX;
      e._type = prVar1;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar2 + -8) = 0x4e45c5;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar2;
  } while( true );
}

