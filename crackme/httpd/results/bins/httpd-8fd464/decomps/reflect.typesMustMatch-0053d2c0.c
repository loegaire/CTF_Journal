
/* WARNING: Unknown calling convention */

void reflect_typesMustMatch(string what,reflect_Type t1,reflect_Type t2)

{
  void *y;
  code *pcVar1;
  uint8 *puVar2;
  runtime_tmpBuf *buf;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *unaff_RBP;
  runtime_itab *prVar5;
  uint8 *puVar6;
  uint8 *puVar7;
  int in_R9;
  uint8 *in_R10;
  int in_R11;
  long in_FS_OFFSET;
  string sVar8;
  interface___ e;
  string a1;
  string a0;
  string a2;
  string a3;
  string what_spill;
  reflect_Type t1_spill;
  reflect_Type t2_spill;
  
  puVar7 = t2.data;
  prVar5 = t2.tab;
  puVar6 = t1.data;
  sVar8.len = (void *)what.len;
  do {
    puVar4 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar4 = (undefined1 *)((long)register0x00000020 + -0x80);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      y = *(void **)((long)register0x00000020 + 0x18);
      if (*(void **)((long)register0x00000020 + 0x28) == y) {
        *(void **)((long)register0x00000020 + -0x80) = y;
        *(undefined8 *)((long)register0x00000020 + -0x78) =
             *(undefined8 *)((long)register0x00000020 + 0x20);
        *(runtime_itab **)((long)register0x00000020 + -0x70) =
             *(runtime_itab **)((long)register0x00000020 + 0x30);
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x53d319;
        runtime_ifaceeq(*(runtime_itab **)((long)register0x00000020 + 0x30),sVar8.len,y);
        if (*(char *)((long)register0x00000020 + -0x68) != '\0') {
          return;
        }
      }
      pcVar1 = *(code **)(*(long *)((long)register0x00000020 + 0x18) + 0xf8);
      *(undefined8 *)((long)register0x00000020 + -0x80) =
           *(undefined8 *)((long)register0x00000020 + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x53d349;
      (*pcVar1)();
      *(undefined8 *)((long)register0x00000020 + -0x10) =
           *(undefined8 *)((long)register0x00000020 + -0x78);
      *(undefined8 *)((long)register0x00000020 + -0x18) =
           *(undefined8 *)((long)register0x00000020 + -0x70);
      pcVar1 = *(code **)(*(long *)((long)register0x00000020 + 0x28) + 0xf8);
      puVar2 = *(uint8 **)((long)register0x00000020 + 0x30);
      *(uint8 **)((long)register0x00000020 + -0x80) = puVar2;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x53d37a;
      (*pcVar1)();
      buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0x78);
      iVar3 = *(int *)((long)register0x00000020 + -0x70);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x78) =
           *(undefined8 *)((long)register0x00000020 + 8);
      *(undefined8 *)((long)register0x00000020 + -0x70) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      *(undefined **)((long)register0x00000020 + -0x68) = &DAT_002877a3;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 2;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x10);
      *(undefined8 *)((long)register0x00000020 + -0x50) =
           *(undefined8 *)((long)register0x00000020 + -0x18);
      *(undefined **)((long)register0x00000020 + -0x48) = &DAT_00287d95;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 4;
      *(runtime_tmpBuf **)((long)register0x00000020 + -0x38) = buf;
      *(int *)((long)register0x00000020 + -0x30) = iVar3;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x53d3f3;
      a1.len = (int)prVar5;
      a1.str = puVar6;
      a0.len = iVar3;
      a0.str = puVar2;
      a2.len = in_R9;
      a2.str = puVar7;
      a3.len = in_R11;
      a3.str = in_R10;
      sVar8 = runtime_concatstring5(buf,a0,a1,a2,a3,*(string *)((long)register0x00000020 + -0x80));
      *(uint8 **)((long)register0x00000020 + -0x80) = *(uint8 **)((long)register0x00000020 + -0x28);
      *(undefined8 *)((long)register0x00000020 + -0x78) =
           *(undefined8 *)((long)register0x00000020 + -0x20);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x53d40b;
      sVar8.str = *(uint8 **)((long)register0x00000020 + -0x28);
      runtime_convTstring(sVar8);
      *(undefined **)((long)register0x00000020 + -0x80) = &DAT_00225520;
      *(runtime__type **)((long)register0x00000020 + -0x78) =
           *(runtime__type **)((long)register0x00000020 + -0x70);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x53d425;
      e.data = sVar8.len;
      e._type = *(runtime__type **)((long)register0x00000020 + -0x70);
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar4 + -8) = 0x53d42b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar4;
  } while( true );
}

