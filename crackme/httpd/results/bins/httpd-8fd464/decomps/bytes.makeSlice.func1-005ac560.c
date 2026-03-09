
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void bytes_makeSlice_func1(void)

{
  runtime__type *prVar1;
  undefined1 *puVar2;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ iVar3;
  
  do {
    puVar2 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar2 = (undefined1 *)((long)register0x00000020 + -0x20);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      *(undefined1 **)((long)register0x00000020 + -0x20) =
           (undefined1 *)((long)register0x00000020 + 8);
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x5ac58b;
      iVar3 = runtime_gorecover((uintptr)((long)register0x00000020 + 8));
      if (*(long *)((long)register0x00000020 + -0x18) == 0) {
        return;
      }
      prVar1 = (runtime__type *)0x0;
      if (bytes_ErrTooLarge.tab != (runtime_itab *)0x0) {
        prVar1 = (bytes_ErrTooLarge.tab)->_type;
      }
      *(runtime__type **)((long)register0x00000020 + -0x20) = prVar1;
      *(void **)((long)register0x00000020 + -0x18) = bytes_ErrTooLarge.data;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x5ac5c5;
      iVar3._type = prVar1;
      runtime_gopanic(iVar3);
    }
    *(undefined8 *)(puVar2 + -8) = 0x5ac5cb;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar2;
  } while( true );
}

