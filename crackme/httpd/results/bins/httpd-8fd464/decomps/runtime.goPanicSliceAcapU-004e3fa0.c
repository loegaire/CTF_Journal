
/* WARNING: Unknown calling convention */

void runtime_goPanicSliceAcapU(uint x,int y)

{
  int in_RCX;
  undefined8 *unaff_RBP;
  long in_FS_OFFSET;
  runtime_eface rVar1;
  interface___ e;
  string msg;
  uint x_spill;
  int y_spill;
  
  e.data = (uint8 *)y;
  do {
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      *(undefined8 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined8 *)((long)register0x00000020 + -8);
      *(undefined8 *)((long)register0x00000020 + -0x40) = *(undefined8 *)register0x00000020;
      *(undefined **)((long)register0x00000020 + -0x38) = &DAT_0029eeb6;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x19;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4e3fe5;
      msg.len = in_RCX;
      msg.str = e.data;
      runtime_panicCheck1(0x29eeb6,msg);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
      *(undefined2 *)((long)register0x00000020 + -0x10) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x20) =
           *(undefined8 *)((long)register0x00000020 + 8);
      *(undefined1 *)((long)register0x00000020 + -0x10) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x18) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      *(undefined1 *)((long)register0x00000020 + -0xf) = 2;
      *(undefined **)((long)register0x00000020 + -0x40) = &DAT_0026bbc0;
      *(runtime__type **)((long)register0x00000020 + -0x38) =
           (runtime__type *)((long)register0x00000020 + -0x20);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4e402e;
      rVar1 = runtime_convT2Enoptr((runtime__type *)((long)register0x00000020 + -0x20),e.data);
      e.data = rVar1.data;
      in_RCX = *(int *)((long)register0x00000020 + -0x28);
      *(runtime__type **)((long)register0x00000020 + -0x40) =
           *(runtime__type **)((long)register0x00000020 + -0x30);
      *(int *)((long)register0x00000020 + -0x38) = in_RCX;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4e4046;
      e._type = *(runtime__type **)((long)register0x00000020 + -0x30);
      runtime_gopanic(e);
      register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x40);
    }
    *(undefined8 *)((long)register0x00000020 + -8) = 0x4e404c;
    runtime_morestack_noctxt();
  } while( true );
}

