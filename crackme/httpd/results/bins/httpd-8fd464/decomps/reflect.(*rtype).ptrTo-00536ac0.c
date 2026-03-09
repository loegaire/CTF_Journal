
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*rtype).ptrTo(reflect.rtype * t, reflect.rtype * ~r0) */

reflect_rtype * reflect___rtype__ptrTo(reflect_rtype *t)

{
  uint32 uVar1;
  sync_Map *m;
  runtime_tmpBuf *buf;
  int iVar2;
  uint8 *puVar3;
  uintptr uVar4;
  long extraout_RAX;
  long lVar5;
  undefined8 extraout_RAX_00;
  undefined8 uVar6;
  undefined *extraout_RAX_01;
  undefined *puVar7;
  runtime__type *prVar8;
  uintptr *src;
  void *pvVar9;
  long extraout_RDX;
  long lVar10;
  undefined *puVar11;
  undefined *extraout_RDX_00;
  runtime__type *unaff_RBX;
  undefined1 *puVar12;
  undefined1 *unaff_RBP;
  void *in_RSI;
  runtime__type *in_RDI;
  long in_FS_OFFSET;
  string sVar13;
  string n;
  interface___ key;
  string a0;
  interface___ key_00;
  interface___ key_01;
  string a1;
  interface___ value;
  interface___ value_00;
  string tag;
  __uint8 list;
  multireturn_interface____bool_ mVar14;
  multireturn_interface____bool__conflict mVar15;
  reflect_rtype *t_spill;
  runtime__type *want;
  
  do {
                    /* Unresolved local var: reflect.ptrType * prototype@[???]
                       Unresolved local var: reflect.ptrType * &pp@[???]
                       Unresolved local var: string s@[???]
                       Unresolved local var: interface_{} pi@[???]
                       Unresolved local var: interface_{} iptr@[???] */
    puVar12 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x20)) {
      puVar12 = (undefined1 *)((long)register0x00000020 + -0xa0);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      m = *(sync_Map **)((long)register0x00000020 + 8);
      uVar1 = m[1].mu.sema;
      if (uVar1 != 0) {
        *(sync_Map **)((long)register0x00000020 + -0xa0) = m;
        *(uint32 *)((long)register0x00000020 + -0x98) = uVar1;
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x536bf1;
        reflect_resolveTypeOff(m,(int32)unaff_RBX);
        *(reflect_rtype **)((long)register0x00000020 + 0x10) =
             *(reflect_rtype **)((long)register0x00000020 + -0x90);
        return *(reflect_rtype **)((long)register0x00000020 + -0x90);
      }
                    /* Unresolved local var: interface_{} pi@[???] */
      *(sync_Map **)((long)register0x00000020 + -0xa0) = &reflect_ptrMap;
      *(undefined **)((long)register0x00000020 + -0x98) = &DAT_00281a20;
      *(sync_Map **)((long)register0x00000020 + -0x90) = m;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x536b29;
      key.data = &reflect_ptrMap;
      key._type = unaff_RBX;
      mVar14 = sync___Map__Load(m,key);
      want = mVar14.value.data;
      prVar8 = *(runtime__type **)((long)register0x00000020 + -0x80);
      if (*(char *)((long)register0x00000020 + -0x78) != '\0') {
        if (*(undefined **)((long)register0x00000020 + -0x88) == &DAT_00281760) {
          *(runtime__type **)((long)register0x00000020 + 0x10) = prVar8;
          return (reflect_rtype *)&DAT_00281760;
        }
        *(undefined **)((long)register0x00000020 + -0xa0) =
             *(undefined **)((long)register0x00000020 + -0x88);
        *(undefined **)((long)register0x00000020 + -0x98) = &DAT_00281760;
        *(undefined8 **)((long)register0x00000020 + -0x90) = &DAT_0022dfe0;
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x536c28;
        runtime_panicdottypeE((runtime__type *)&DAT_0022dfe0,want,prVar8);
        lVar5 = extraout_RAX;
        lVar10 = extraout_RDX;
        goto LAB_00536c28;
      }
      *(reflect_rtype **)((long)register0x00000020 + -0xa0) =
           *(reflect_rtype **)((long)register0x00000020 + 8);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x536b4f;
      sVar13 = reflect___rtype__String(*(reflect_rtype **)((long)register0x00000020 + 8));
      a0.str = (uint8 *)sVar13.len;
      buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0x98);
      iVar2 = *(int *)((long)register0x00000020 + -0x90);
      *(undefined1 **)((long)register0x00000020 + -0xa0) =
           (undefined1 *)((long)register0x00000020 + -0x50);
      *(undefined **)((long)register0x00000020 + -0x98) = &DAT_002f3a2e;
      *(undefined8 *)((long)register0x00000020 + -0x90) = 1;
      *(runtime_tmpBuf **)((long)register0x00000020 + -0x88) = buf;
      *(int *)((long)register0x00000020 + -0x80) = iVar2;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x536b86;
      a0.len = iVar2;
      a1.len = (int)in_RSI;
      a1.str = (uint8 *)in_RDI;
      sVar13 = runtime_concatstring2(buf,a0,a1);
                    /* Unresolved local var: reflect.rtype * tt@[???] */
      puVar3 = *(uint8 **)((long)register0x00000020 + -0x78);
      *(uint8 **)((long)register0x00000020 + -0x30) = puVar3;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x70);
      *(uint8 **)((long)register0x00000020 + -0xa0) = puVar3;
      *(undefined8 *)((long)register0x00000020 + -0x98) =
           *(undefined8 *)((long)register0x00000020 + -0x70);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x536ba8;
      sVar13.str = puVar3;
      reflect_typesByString(sVar13);
      lVar5 = *(long *)((long)register0x00000020 + -0x90);
      prVar8 = *(runtime__type **)((long)register0x00000020 + -0x88);
      lVar10 = *(long *)((long)register0x00000020 + 8);
      for (want = (runtime__type *)0x0; (long)want < (long)prVar8;
          want = (runtime__type *)((long)&want->size + 1)) {
        in_RSI = *(void **)(lVar5 + (long)want * 8);
                    /* Unresolved local var: reflect.ptrType * p@[???]
                       Unresolved local var: interface_{} pi@[???] */
        if (*(long *)((long)in_RSI + 0x30) == lVar10) {
          *(sync_Map **)((long)register0x00000020 + -0xa0) = &reflect_ptrMap;
          *(undefined **)((long)register0x00000020 + -0x98) = &DAT_00281a20;
          *(long *)((long)register0x00000020 + -0x90) = lVar10;
          *(undefined **)((long)register0x00000020 + -0x88) = &DAT_00281760;
          *(void **)((long)register0x00000020 + -0x80) = in_RSI;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x536c6c;
          key_00.data = prVar8;
          key_00._type = want;
          value.data = in_RSI;
          value._type = in_RDI;
          mVar15 = sync___Map__LoadOrStore((sync_Map *)&DAT_00281760,key_00,value);
          unaff_RBX = mVar15.actual.data;
          puVar7 = *(undefined **)((long)register0x00000020 + -0x78);
          prVar8 = *(runtime__type **)((long)register0x00000020 + -0x70);
          puVar11 = &DAT_00281760;
          if (puVar7 == &DAT_00281760) {
            *(runtime__type **)((long)register0x00000020 + 0x10) = prVar8;
            return (reflect_rtype *)&DAT_00281760;
          }
          goto LAB_00536e69;
        }
LAB_00536c28:
      }
      *(undefined8 **)((long)register0x00000020 + -0x18) = &DAT_0021f320;
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0;
      *(runtime__type **)((long)register0x00000020 + -0x28) =
           *(runtime__type **)((long)register0x00000020 + -0x18);
      *(undefined **)((long)register0x00000020 + -0xa0) = &DAT_0024d7c0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x536cdb;
      runtime_newobject(*(runtime__type **)((long)register0x00000020 + -0x18));
      prVar8 = *(runtime__type **)((long)register0x00000020 + -0x28);
      src = *(uintptr **)((long)register0x00000020 + -0x98);
      *(uintptr **)((long)register0x00000020 + -0x20) = src;
      if (runtime_writeBarrier._0_4_ == 0) {
        *src = prVar8->size;
        uVar4 = *(uintptr *)&prVar8->hash;
        src[1] = prVar8->ptrdata;
        src[2] = uVar4;
        puVar3 = prVar8->gcdata;
        src[3] = (uintptr)prVar8->equal;
        src[4] = (uintptr)puVar3;
        uVar4 = prVar8[1].size;
        src[5] = *(uintptr *)&prVar8->str;
        src[6] = uVar4;
      }
      else {
        *(undefined **)((long)register0x00000020 + -0xa0) = &DAT_0024d7c0;
        *(uintptr **)((long)register0x00000020 + -0x98) = src;
        *(runtime__type **)((long)register0x00000020 + -0x90) = prVar8;
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x536d32;
        runtime_typedmemmove(prVar8,want,src);
      }
      *(undefined8 *)((long)register0x00000020 + -0xa0) =
           *(undefined8 *)((long)register0x00000020 + -0x30);
      *(uint8 **)((long)register0x00000020 + -0x98) = *(uint8 **)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
      *(undefined1 *)((long)register0x00000020 + -0x80) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x536d59;
      n.len = (int)want;
      n.str = *(uint8 **)((long)register0x00000020 + -0x58);
      tag.len = (int)in_RDI;
      tag.str = (uint8 *)src;
      reflect_newName(n,tag,SUB81(in_RSI,0));
      *(void **)((long)register0x00000020 + -0xa0) = *(void **)((long)register0x00000020 + -0x78);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x536d67;
      reflect_addReflectOff(*(void **)((long)register0x00000020 + -0x78));
      lVar5 = *(long *)((long)register0x00000020 + -0x20);
      *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)((long)register0x00000020 + -0x98);
      *(undefined4 *)(lVar5 + 0x2c) = 0;
      *(undefined1 *)((long)register0x00000020 + -0x59) = 0;
      *(undefined1 *)((long)register0x00000020 + -0x59) = 0x2a;
      *(undefined4 *)((long)register0x00000020 + -0xa0) =
           *(undefined4 *)(*(long *)((long)register0x00000020 + 8) + 0x10);
      *(undefined1 **)((long)register0x00000020 + -0x98) =
           (undefined1 *)((long)register0x00000020 + -0x59);
      *(undefined8 *)((long)register0x00000020 + -0x90) = 1;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 1;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x536db6;
      list.len = lVar5;
      list.array = (uint8 *)want;
      list.cap = (int)in_RDI;
      reflect_fnv1((uint32)*(long *)((long)register0x00000020 + 8),list);
      pvVar9 = *(void **)((long)register0x00000020 + -0x20);
      *(undefined4 *)((long)pvVar9 + 0x10) = *(undefined4 *)((long)register0x00000020 + -0x80);
      if (runtime_writeBarrier._0_4_ == 0) {
        uVar6 = *(undefined8 *)((long)register0x00000020 + 8);
        *(undefined8 *)((long)pvVar9 + 0x30) = uVar6;
      }
      else {
        in_RDI = (runtime__type *)((long)pvVar9 + 0x30);
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x536ded;
        runtime_gcWriteBarrier();
        uVar6 = extraout_RAX_00;
      }
      *(sync_Map **)((long)register0x00000020 + -0xa0) = &reflect_ptrMap;
      *(undefined **)((long)register0x00000020 + -0x98) = &DAT_00281a20;
      *(undefined8 *)((long)register0x00000020 + -0x90) = uVar6;
      *(undefined **)((long)register0x00000020 + -0x88) = &DAT_00281760;
      *(void **)((long)register0x00000020 + -0x80) = pvVar9;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x536e1f;
      key_01.data = pvVar9;
      key_01._type = want;
      value_00.data = in_RSI;
      value_00._type = in_RDI;
      mVar15 = sync___Map__LoadOrStore((sync_Map *)&DAT_00281760,key_01,value_00);
      unaff_RBX = mVar15.actual.data;
      prVar8 = *(runtime__type **)((long)register0x00000020 + -0x70);
      if (*(undefined **)((long)register0x00000020 + -0x78) == &DAT_00281760) {
        *(runtime__type **)((long)register0x00000020 + 0x10) = prVar8;
        return (reflect_rtype *)&DAT_00281760;
      }
      *(undefined **)((long)register0x00000020 + -0xa0) =
           *(undefined **)((long)register0x00000020 + -0x78);
      *(undefined **)((long)register0x00000020 + -0x98) = &DAT_00281760;
      *(undefined8 **)((long)register0x00000020 + -0x90) = &DAT_0022dfe0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x536e69;
      runtime_panicdottypeE((runtime__type *)&DAT_0022dfe0,unaff_RBX,prVar8);
      puVar7 = extraout_RAX_01;
      puVar11 = extraout_RDX_00;
LAB_00536e69:
      *(undefined **)((long)register0x00000020 + -0xa0) = puVar7;
      *(undefined **)((long)register0x00000020 + -0x98) = puVar11;
      *(undefined8 **)((long)register0x00000020 + -0x90) = &DAT_0022dfe0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x536e85;
      runtime_panicdottypeE((runtime__type *)&DAT_0022dfe0,unaff_RBX,prVar8);
    }
    *(undefined8 *)(puVar12 + -8) = 0x536e8b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar12;
  } while( true );
}

