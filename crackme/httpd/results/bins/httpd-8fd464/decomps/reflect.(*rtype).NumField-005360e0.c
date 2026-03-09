
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*rtype).NumField(reflect.rtype * t, int ~r0) */

int reflect___rtype__NumField(reflect_rtype *t)

{
  reflect_rtype *t_00;
  runtime_tmpBuf *buf;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *unaff_RBP;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string sVar3;
  interface___ e;
  string a1;
  string a0;
  reflect_structType *tt;
  
  do {
    puVar2 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar2 = (undefined1 *)((long)register0x00000020 + -0x40);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      t_00 = *(reflect_rtype **)((long)register0x00000020 + 8);
      if ((t_00->kind & 0x1f) == 0x19) {
        iVar1._0_4_ = t_00[1].hash;
        iVar1._4_1_ = t_00[1].tflag;
        iVar1._5_1_ = t_00[1].align;
        iVar1._6_1_ = t_00[1].fieldAlign;
        iVar1._7_1_ = t_00[1].kind;
        *(int *)((long)register0x00000020 + 0x10) = iVar1;
        return iVar1;
      }
      *(reflect_rtype **)((long)register0x00000020 + -0x40) = t_00;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x53612f;
      sVar3 = reflect___rtype__String(t_00);
      a0.str = (uint8 *)sVar3.len;
      buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0x38);
      iVar1 = *(int *)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      *(undefined **)((long)register0x00000020 + -0x38) = &DAT_002a5435;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x25;
      *(runtime_tmpBuf **)((long)register0x00000020 + -0x28) = buf;
      *(int *)((long)register0x00000020 + -0x20) = iVar1;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x536165;
      a1.len = in_RSI;
      a1.str = in_RDI;
      a0.len = iVar1;
      sVar3 = runtime_concatstring2(buf,a0,a1);
      *(uint8 **)((long)register0x00000020 + -0x40) = *(uint8 **)((long)register0x00000020 + -0x18);
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x10);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x53617d;
      sVar3.str = *(uint8 **)((long)register0x00000020 + -0x18);
      runtime_convTstring(sVar3);
      *(undefined **)((long)register0x00000020 + -0x40) = &DAT_00225520;
      *(runtime__type **)((long)register0x00000020 + -0x38) =
           *(runtime__type **)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x536197;
      e.data = sVar3.len;
      e._type = *(runtime__type **)((long)register0x00000020 + -0x30);
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar2 + -8) = 0x53619d;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar2;
  } while( true );
}

