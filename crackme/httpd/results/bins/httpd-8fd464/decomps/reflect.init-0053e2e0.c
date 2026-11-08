
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void reflect_init(void)

{
  reflect_rtype *prVar1;
  undefined1 *iface;
  runtime__type *unaff_RBX;
  undefined1 *puVar2;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  
  do {
    puVar2 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar2 = (undefined1 *)((long)register0x00000020 + -0x30);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      *(undefined **)((long)register0x00000020 + -0x18) = &DAT_00225720;
      *(uint64 **)((long)register0x00000020 + -0x10) = runtime_staticuint64s;
      prVar1 = *(reflect_rtype **)((long)register0x00000020 + -0x18);
      if (prVar1 == (reflect_rtype *)0x0) {
        iface = (undefined1 *)0x0;
        prVar1 = (reflect_rtype *)0x0;
      }
      else {
        iface = go_itab__reflect_rtype_reflect_Type;
      }
      if (iface == go_itab__reflect_rtype_reflect_Type) {
        if (runtime_writeBarrier._0_4_ != 0) {
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x53e35c;
          runtime_gcWriteBarrier();
          prVar1 = reflect_uint8Type;
        }
        reflect_uint8Type = prVar1;
        return;
      }
      *(undefined1 **)((long)register0x00000020 + -0x30) = iface;
      *(undefined **)((long)register0x00000020 + -0x28) = &DAT_00281a20;
      *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00277b20;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x53e387;
      runtime_panicdottypeI((runtime_itab *)&DAT_00277b20,unaff_RBX,(runtime__type *)iface);
    }
    *(undefined8 *)(puVar2 + -8) = 0x53e38d;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar2;
  } while( true );
}

