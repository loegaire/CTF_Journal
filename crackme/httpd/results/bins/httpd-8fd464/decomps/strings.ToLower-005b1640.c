
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.ToLower(string s, string ~r1) */

string strings_ToLower(string s)

{
  byte bVar1;
  long lVar2;
  runtime__type *et;
  long lVar3;
  long lVar4;
  uint8 *puVar5;
  void *pvVar6;
  undefined1 *puVar7;
  undefined1 *unaff_RBP;
  ulong cap;
  long in_FS_OFFSET;
  string s_00;
  string sVar8;
  string sVar9;
  string sVar10;
  interface___ e;
  runtime_slice old;
  string s_spill;
  
code_r0x005b1640:
                    /* Unresolved local var: bool isASCII@[???]
                       Unresolved local var: bool hasUpper@[???] */
  puVar7 = (undefined1 *)register0x00000020;
  if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
      (undefined1 *)((long)register0x00000020 + -0x10)) {
    puVar7 = (undefined1 *)((long)register0x00000020 + -0x90);
    *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
    unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
                    /* Unresolved local var: int i@[???] */
    et = *(runtime__type **)((long)register0x00000020 + 0x10);
    lVar3 = *(long *)((long)register0x00000020 + 8);
    puVar5 = (uint8 *)0x0;
    for (lVar4 = 0; lVar4 < (long)et; lVar4 = lVar4 + 1) {
                    /* Unresolved local var: uint8 c@[???] */
      bVar1 = *(byte *)(lVar3 + lVar4);
      if (0x7f < bVar1) {
        *(undefined ***)((long)register0x00000020 + -0x90) = &PTR_unicode_ToLower_002b3b70;
        *(long *)((long)register0x00000020 + -0x88) = lVar3;
        *(runtime__type **)((long)register0x00000020 + -0x80) = et;
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x5b16cf;
        s_00.len = lVar3;
        s_00.str = puVar5;
        sVar8 = strings_Map((func_int32__int32 **)et,s_00);
        sVar9.len = sVar8.len;
        *(uint8 **)((long)register0x00000020 + 0x18) = *(uint8 **)((long)register0x00000020 + -0x78)
        ;
        *(undefined8 *)((long)register0x00000020 + 0x20) =
             *(undefined8 *)((long)register0x00000020 + -0x70);
        sVar9.str = *(uint8 **)((long)register0x00000020 + -0x78);
        return sVar9;
      }
                    /* Unresolved local var: strings.Builder b@[???] */
      if ((char)puVar5 == '\0') {
        if (bVar1 < 0x41) {
          puVar5 = (uint8 *)0x0;
        }
        else {
          puVar5 = (uint8 *)(ulong)(bVar1 < 0x5b);
        }
      }
      else {
        puVar5 = (uint8 *)0x1;
      }
    }
    if ((char)puVar5 == '\0') {
      *(long *)((long)register0x00000020 + 0x18) = lVar3;
      *(runtime__type **)((long)register0x00000020 + 0x20) = et;
      sVar8.len = (int)puVar5;
      sVar8.str = (uint8 *)et;
      return sVar8;
    }
    *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x18) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
    *(undefined1 **)((long)register0x00000020 + -0x28) =
         (undefined1 *)((long)register0x00000020 + -0x28);
    lVar4 = *(long *)((long)register0x00000020 + -0x18);
    if (*(long *)((long)register0x00000020 + -0x10) - lVar4 < (long)et) {
      *(long *)((long)register0x00000020 + -0x40) = lVar4;
                    /* Unresolved local var: []uint8 buf@[???] */
      *(undefined **)((long)register0x00000020 + -0x90) = &DAT_00225720;
      *(long *)((long)register0x00000020 + -0x88) = lVar4;
      lVar3 = (long)&et->size + *(long *)((long)register0x00000020 + -0x10) * 2;
      *(long *)((long)register0x00000020 + -0x38) = lVar3;
      *(long *)((long)register0x00000020 + -0x80) = lVar3;
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x5b1772;
      runtime_makeslice(et,lVar4,0x225720);
      lVar3 = *(long *)((long)register0x00000020 + -0x40);
      lVar4 = lVar3;
      if (*(long *)((long)register0x00000020 + -0x18) < lVar3) {
        lVar4 = *(long *)((long)register0x00000020 + -0x18);
      }
      lVar2 = *(long *)((long)register0x00000020 + -0x78);
      if (*(long *)((long)register0x00000020 + -0x20) != lVar2) {
        *(long *)((long)register0x00000020 + -0x30) = lVar2;
        *(long *)((long)register0x00000020 + -0x90) = lVar2;
        *(long *)((long)register0x00000020 + -0x88) = *(long *)((long)register0x00000020 + -0x20);
        *(long *)((long)register0x00000020 + -0x80) = lVar4;
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x5b17ad;
        runtime_memmove();
        lVar2 = *(long *)((long)register0x00000020 + -0x30);
        lVar3 = *(long *)((long)register0x00000020 + -0x40);
      }
      *(long *)((long)register0x00000020 + -0x18) = lVar3;
      *(undefined8 *)((long)register0x00000020 + -0x10) =
           *(undefined8 *)((long)register0x00000020 + -0x38);
      *(long *)((long)register0x00000020 + -0x20) = lVar2;
                    /* Unresolved local var: int i@[???] */
      et = *(runtime__type **)((long)register0x00000020 + 0x10);
                    /* Unresolved local var: uint8 c@[???] */
      lVar3 = *(long *)((long)register0x00000020 + 8);
    }
    pvVar6 = (void *)0x0;
    do {
      if ((long)et <= (long)pvVar6) {
        *(uint8 **)((long)register0x00000020 + 0x18) = *(uint8 **)((long)register0x00000020 + -0x20)
        ;
        *(undefined8 *)((long)register0x00000020 + 0x20) =
             *(undefined8 *)((long)register0x00000020 + -0x18);
        sVar10.len = (int)pvVar6;
        sVar10.str = *(uint8 **)((long)register0x00000020 + -0x20);
        return sVar10;
      }
      bVar1 = *(byte *)(lVar3 + (long)pvVar6);
      cap = (ulong)bVar1;
      if ((byte)(bVar1 + 0xbf) < 0x1a) {
        cap = (ulong)(bVar1 + 0x20);
      }
      if (*(undefined1 **)((long)register0x00000020 + -0x28) == (undefined1 *)0x0) {
        *(undefined1 **)((long)register0x00000020 + -0x28) =
             (undefined1 *)((long)register0x00000020 + -0x28);
      }
      else if (*(undefined1 **)((long)register0x00000020 + -0x28) !=
               (undefined1 *)((long)register0x00000020 + -0x28)) goto LAB_005b1907;
      lVar4 = *(long *)((long)register0x00000020 + -0x18);
      lVar2 = *(long *)((long)register0x00000020 + -0x20);
      if (*(ulong *)((long)register0x00000020 + -0x10) < lVar4 + 1U) {
        *(void **)((long)register0x00000020 + -0x48) = pvVar6;
        *(char *)((long)register0x00000020 + -0x49) = (char)cap;
        *(undefined **)((long)register0x00000020 + -0x90) = &DAT_00225720;
        *(long *)((long)register0x00000020 + -0x88) = lVar2;
        *(long *)((long)register0x00000020 + -0x80) = lVar4;
        *(ulong *)((long)register0x00000020 + -0x78) = *(ulong *)((long)register0x00000020 + -0x10);
        *(ulong *)((long)register0x00000020 + -0x70) = lVar4 + 1U;
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x5b189d;
        old.len = lVar3;
        old.array = pvVar6;
        old.cap = lVar4;
        runtime_growslice((runtime__type *)&DAT_00225720,old,cap);
        lVar2 = *(long *)((long)register0x00000020 + -0x68);
        lVar4 = *(long *)((long)register0x00000020 + -0x60);
        *(undefined8 *)((long)register0x00000020 + -0x10) =
             *(undefined8 *)((long)register0x00000020 + -0x58);
        *(long *)((long)register0x00000020 + -0x20) = lVar2;
        et = *(runtime__type **)((long)register0x00000020 + 0x10);
        lVar3 = *(long *)((long)register0x00000020 + 8);
        pvVar6 = *(void **)((long)register0x00000020 + -0x48);
        cap = (ulong)*(byte *)((long)register0x00000020 + -0x49);
      }
      *(long *)((long)register0x00000020 + -0x18) = lVar4 + 1;
      *(char *)(lVar2 + lVar4) = (char)cap;
      pvVar6 = (void *)((long)pvVar6 + 1);
    } while( true );
  }
  goto LAB_005b1926;
LAB_005b1907:
  *(undefined **)((long)register0x00000020 + -0x90) = &DAT_00225520;
  *(undefined8 **)((long)register0x00000020 + -0x88) = &net_http__stmp_78;
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x5b1925;
  e.data = pvVar6;
  e._type = (runtime__type *)&net_http__stmp_78;
  runtime_gopanic(e);
LAB_005b1926:
  *(undefined8 *)(puVar7 + -8) = 0x5b192b;
  runtime_morestack_noctxt();
  register0x00000020 = (BADSPACEBASE *)puVar7;
  goto code_r0x005b1640;
}

