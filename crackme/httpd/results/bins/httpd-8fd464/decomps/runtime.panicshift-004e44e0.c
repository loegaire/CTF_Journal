
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_panicshift(void)

{
  runtime__type *prVar1;
  void *in_RCX;
  uint8 *unaff_RBX;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  string msg;
  
  do {
    puVar2 = (undefined8 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar2 = (undefined8 *)((long)register0x00000020 + -0x20);
      *(undefined8 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined8 *)((long)register0x00000020 + -8);
      *(undefined8 *)((long)register0x00000020 + -0x20) = *(undefined8 *)register0x00000020;
      *(undefined **)((long)register0x00000020 + -0x18) = &DAT_0029c99d;
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0x15;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x4e4525;
      msg.len = (int)in_RCX;
      msg.str = unaff_RBX;
      runtime_panicCheck1(0x29c99d,msg);
      prVar1 = (runtime__type *)0x0;
      if (runtime_shiftError.tab != (runtime_itab *)0x0) {
        prVar1 = (runtime_shiftError.tab)->_type;
      }
      *(runtime__type **)((long)register0x00000020 + -0x20) = prVar1;
      *(void **)((long)register0x00000020 + -0x18) = runtime_shiftError.data;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x4e454a;
      e.data = unaff_RBX;
      e._type = prVar1;
      in_RCX = runtime_shiftError.data;
      runtime_gopanic(e);
    }
    *(undefined8 *)((long)puVar2 + -8) = 0x4e4550;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar2;
  } while( true );
}

