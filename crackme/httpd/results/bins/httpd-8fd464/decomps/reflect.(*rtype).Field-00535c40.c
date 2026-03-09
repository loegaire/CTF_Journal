
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*rtype).Field(reflect.rtype * t, int i,
   reflect.StructField ~r1) */

reflect_StructField reflect___rtype__Field(reflect_rtype *t,int i)

{
  reflect_rtype *t_00;
  runtime_tmpBuf *buf;
  int iVar1;
  uint8 *puVar2;
  undefined8 unaff_RBP;
  int in_RSI;
  uint8 *puVar3;
  long in_FS_OFFSET;
  string sVar4;
  interface___ e;
  string a1;
  string a0;
  reflect_structType *tt;
  reflect_rtype *t_spill;
  int i_spill;
  
  sVar4.len = (void *)i;
  do {
    puVar2 = (uint8 *)register0x00000020;
    if (*(uint8 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (uint8 *)((long)register0x00000020 + -0x68)) {
      puVar2 = (uint8 *)((long)register0x00000020 + -0xe8);
      *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
      *(uint8 *)((long)register0x00000020 + 0x18) = 0;
      *(uint8 *)((long)register0x00000020 + 0x19) = 0;
      *(uint8 *)((long)register0x00000020 + 0x1a) = 0;
      *(uint8 *)((long)register0x00000020 + 0x1b) = 0;
      *(uint8 *)((long)register0x00000020 + 0x1c) = 0;
      *(uint8 *)((long)register0x00000020 + 0x1d) = 0;
      *(uint8 *)((long)register0x00000020 + 0x1e) = 0;
      *(uint8 *)((long)register0x00000020 + 0x1f) = 0;
      *(uint8 **)((long)register0x00000020 + -0xf8) = (uint8 *)((long)register0x00000020 + -8);
      *(uint8 *)((long)register0x00000020 + -0xf0) = 0x9a;
      *(uint8 *)((long)register0x00000020 + -0xef) = 0x5c;
      *(uint8 *)((long)register0x00000020 + -0xee) = 0x53;
      *(uint8 *)((long)register0x00000020 + -0xed) = 0;
      *(uint8 *)((long)register0x00000020 + -0xec) = 0;
      *(uint8 *)((long)register0x00000020 + -0xeb) = 0;
      *(uint8 *)((long)register0x00000020 + -0xea) = 0;
      *(uint8 *)((long)register0x00000020 + -0xe9) = 0;
      puVar3 = (uint8 *)register0x00000020;
      FUN_0051a18b();
      unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0xf8);
      t_00 = *(reflect_rtype **)((long)register0x00000020 + 8);
      if ((t_00->kind & 0x1f) == 0x19) {
        *(reflect_rtype **)((long)register0x00000020 + -0xe8) = t_00;
        *(reflect_structType **)((long)register0x00000020 + -0xe0) =
             *(reflect_structType **)((long)register0x00000020 + 0x10);
        *(uint8 *)((long)register0x00000020 + -0xf0) = 0xcd;
        *(uint8 *)((long)register0x00000020 + -0xef) = 0x5c;
        *(uint8 *)((long)register0x00000020 + -0xee) = 0x53;
        *(uint8 *)((long)register0x00000020 + -0xed) = 0;
        *(uint8 *)((long)register0x00000020 + -0xec) = 0;
        *(uint8 *)((long)register0x00000020 + -0xeb) = 0;
        *(uint8 *)((long)register0x00000020 + -0xea) = 0;
        *(uint8 *)((long)register0x00000020 + -0xe9) = 0;
        reflect___structType__Field
                  (*(reflect_structType **)((long)register0x00000020 + 0x10),(int)sVar4.len);
        *(undefined8 *)((long)register0x00000020 + -0x70) =
             *(undefined8 *)((long)register0x00000020 + -0xd8);
        *(undefined8 *)((long)register0x00000020 + -0xf8) = unaff_RBP;
        *(uint8 *)((long)register0x00000020 + -0xf0) = 0xf3;
        *(uint8 *)((long)register0x00000020 + -0xef) = 0x5c;
        *(uint8 *)((long)register0x00000020 + -0xee) = 0x53;
        *(uint8 *)((long)register0x00000020 + -0xed) = 0;
        *(uint8 *)((long)register0x00000020 + -0xec) = 0;
        *(uint8 *)((long)register0x00000020 + -0xeb) = 0;
        *(uint8 *)((long)register0x00000020 + -0xea) = 0;
        *(uint8 *)((long)register0x00000020 + -0xe9) = 0;
        FUN_0051a4ec((uint8 *)((long)register0x00000020 + -0x68),
                     (uint8 *)((long)register0x00000020 + -0xd0));
        *(undefined8 *)((long)register0x00000020 + 0x18) =
             *(undefined8 *)((long)register0x00000020 + -0x70);
        *(undefined8 *)((long)register0x00000020 + -0xf8) =
             *(undefined8 *)((long)register0x00000020 + -0xf8);
        *(uint8 *)((long)register0x00000020 + -0xf0) = 0x2f;
        *(uint8 *)((long)register0x00000020 + -0xef) = 0x5d;
        *(uint8 *)((long)register0x00000020 + -0xee) = 0x53;
        *(uint8 *)((long)register0x00000020 + -0xed) = 0;
        *(uint8 *)((long)register0x00000020 + -0xec) = 0;
        *(uint8 *)((long)register0x00000020 + -0xeb) = 0;
        *(uint8 *)((long)register0x00000020 + -0xea) = 0;
        *(uint8 *)((long)register0x00000020 + -0xe9) = 0;
        FUN_0051a4ec((uint8 *)((long)register0x00000020 + 0x20),
                     (uint8 *)((long)register0x00000020 + -0x68));
        return (reflect_StructField)_tt;
      }
      *(reflect_rtype **)((long)register0x00000020 + -0xe8) = t_00;
      *(uint8 *)((long)register0x00000020 + -0xf0) = 0x4c;
      *(uint8 *)((long)register0x00000020 + -0xef) = 0x5d;
      *(uint8 *)((long)register0x00000020 + -0xee) = 0x53;
      *(uint8 *)((long)register0x00000020 + -0xed) = 0;
      *(uint8 *)((long)register0x00000020 + -0xec) = 0;
      *(uint8 *)((long)register0x00000020 + -0xeb) = 0;
      *(uint8 *)((long)register0x00000020 + -0xea) = 0;
      *(uint8 *)((long)register0x00000020 + -0xe9) = 0;
      sVar4 = reflect___rtype__String(t_00);
      a0.str = (uint8 *)sVar4.len;
      buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0xe0);
      iVar1 = *(int *)((long)register0x00000020 + -0xd8);
      *(uint8 *)((long)register0x00000020 + -0xe8) = 0;
      *(uint8 *)((long)register0x00000020 + -0xe7) = 0;
      *(uint8 *)((long)register0x00000020 + -0xe6) = 0;
      *(uint8 *)((long)register0x00000020 + -0xe5) = 0;
      *(uint8 *)((long)register0x00000020 + -0xe4) = 0;
      *(uint8 *)((long)register0x00000020 + -0xe3) = 0;
      *(uint8 *)((long)register0x00000020 + -0xe2) = 0;
      *(uint8 *)((long)register0x00000020 + -0xe1) = 0;
      *(undefined **)((long)register0x00000020 + -0xe0) = &DAT_002a3daa;
      *(uint8 *)((long)register0x00000020 + -0xd8) = 0x22;
      *(uint8 *)((long)register0x00000020 + -0xd7) = 0;
      *(uint8 *)((long)register0x00000020 + -0xd6) = 0;
      *(uint8 *)((long)register0x00000020 + -0xd5) = 0;
      *(uint8 *)((long)register0x00000020 + -0xd4) = 0;
      *(uint8 *)((long)register0x00000020 + -0xd3) = 0;
      *(uint8 *)((long)register0x00000020 + -0xd2) = 0;
      *(uint8 *)((long)register0x00000020 + -0xd1) = 0;
      *(runtime_tmpBuf **)((long)register0x00000020 + -0xd0) = buf;
      *(int *)((long)register0x00000020 + -200) = iVar1;
      *(uint8 *)((long)register0x00000020 + -0xf0) = 0x85;
      *(uint8 *)((long)register0x00000020 + -0xef) = 0x5d;
      *(uint8 *)((long)register0x00000020 + -0xee) = 0x53;
      *(uint8 *)((long)register0x00000020 + -0xed) = 0;
      *(uint8 *)((long)register0x00000020 + -0xec) = 0;
      *(uint8 *)((long)register0x00000020 + -0xeb) = 0;
      *(uint8 *)((long)register0x00000020 + -0xea) = 0;
      *(uint8 *)((long)register0x00000020 + -0xe9) = 0;
      a1.len = in_RSI;
      a1.str = puVar3;
      a0.len = iVar1;
      sVar4 = runtime_concatstring2(buf,a0,a1);
      *(uint8 **)((long)register0x00000020 + -0xe8) = *(uint8 **)((long)register0x00000020 + -0xc0);
      *(undefined8 *)((long)register0x00000020 + -0xe0) =
           *(undefined8 *)((long)register0x00000020 + -0xb8);
      *(uint8 *)((long)register0x00000020 + -0xf0) = 0x9d;
      *(uint8 *)((long)register0x00000020 + -0xef) = 0x5d;
      *(uint8 *)((long)register0x00000020 + -0xee) = 0x53;
      *(uint8 *)((long)register0x00000020 + -0xed) = 0;
      *(uint8 *)((long)register0x00000020 + -0xec) = 0;
      *(uint8 *)((long)register0x00000020 + -0xeb) = 0;
      *(uint8 *)((long)register0x00000020 + -0xea) = 0;
      *(uint8 *)((long)register0x00000020 + -0xe9) = 0;
      sVar4.str = *(uint8 **)((long)register0x00000020 + -0xc0);
      runtime_convTstring(sVar4);
      *(undefined **)((long)register0x00000020 + -0xe8) = &DAT_00225520;
      *(runtime__type **)((long)register0x00000020 + -0xe0) =
           *(runtime__type **)((long)register0x00000020 + -0xd8);
      *(uint8 *)((long)register0x00000020 + -0xf0) = 0xb7;
      *(uint8 *)((long)register0x00000020 + -0xef) = 0x5d;
      *(uint8 *)((long)register0x00000020 + -0xee) = 0x53;
      *(uint8 *)((long)register0x00000020 + -0xed) = 0;
      *(uint8 *)((long)register0x00000020 + -0xec) = 0;
      *(uint8 *)((long)register0x00000020 + -0xeb) = 0;
      *(uint8 *)((long)register0x00000020 + -0xea) = 0;
      *(uint8 *)((long)register0x00000020 + -0xe9) = 0;
      e.data = sVar4.len;
      e._type = *(runtime__type **)((long)register0x00000020 + -0xd8);
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar2 + -8) = 0x535dbd;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar2;
  } while( true );
}

