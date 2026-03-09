
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*rtype).ChanDir(reflect.rtype * t, reflect.ChanDir ~r0)
    */

reflect_ChanDir reflect___rtype__ChanDir(reflect_rtype *t)

{
  reflect_rtype *t_00;
  uintptr uVar1;
  runtime_tmpBuf *buf;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *unaff_RBP;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string sVar4;
  string val;
  interface___ e;
  string a0;
  reflect_chanType *tt;
  
  do {
    puVar3 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar3 = (undefined1 *)((long)register0x00000020 + -0x40);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      t_00 = *(reflect_rtype **)((long)register0x00000020 + 8);
      if ((t_00->kind & 0x1f) == 0x12) {
        uVar1 = t_00[1].ptrdata;
        *(uintptr *)((long)register0x00000020 + 0x10) = uVar1;
        return uVar1;
      }
      *(reflect_rtype **)((long)register0x00000020 + -0x40) = t_00;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x5359ef;
      sVar4 = reflect___rtype__String(t_00);
      a0.str = (uint8 *)sVar4.len;
      buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0x38);
      iVar2 = *(int *)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      *(undefined **)((long)register0x00000020 + -0x38) = &DAT_002a3d66;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x22;
      *(runtime_tmpBuf **)((long)register0x00000020 + -0x28) = buf;
      *(int *)((long)register0x00000020 + -0x20) = iVar2;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x535a25;
      sVar4.len = in_RSI;
      sVar4.str = in_RDI;
      a0.len = iVar2;
      sVar4 = runtime_concatstring2(buf,a0,sVar4);
      val.len = (void *)sVar4.len;
      *(uint8 **)((long)register0x00000020 + -0x40) = *(uint8 **)((long)register0x00000020 + -0x18);
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x10);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x535a3d;
      val.str = *(uint8 **)((long)register0x00000020 + -0x18);
      runtime_convTstring(val);
      *(undefined **)((long)register0x00000020 + -0x40) = &DAT_00225520;
      *(runtime__type **)((long)register0x00000020 + -0x38) =
           *(runtime__type **)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x535a57;
      e.data = val.len;
      e._type = *(runtime__type **)((long)register0x00000020 + -0x30);
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar3 + -8) = 0x535a5d;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar3;
  } while( true );
}

