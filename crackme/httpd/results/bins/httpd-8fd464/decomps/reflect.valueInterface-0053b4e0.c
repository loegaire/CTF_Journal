
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.valueInterface(reflect.Value v, bool safe, interface_{}
   ~r2) */

interface___ reflect_valueInterface(reflect_Value v,bool safe)

{
  long lVar1;
  runtime__type *prVar2;
  undefined8 uVar3;
  reflect_flag rVar4;
  uint8 *puVar5;
  undefined1 *puVar6;
  undefined1 *unaff_RBP;
  reflect_flag in_RSI;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  reflect_Value v_00;
  reflect_Value v_01;
  reflect_Value v_02;
  string op;
  interface___ iVar7;
  interface___ iVar8;
  interface___ iVar9;
  interface___ iVar10;
  interface___ e;
  reflect_Value v_spill;
  bool safe_spill;
  
  uVar3 = CONCAT71(in_register_00000039,safe);
  op.len = v.ptr;
  do {
    puVar6 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar6 = (undefined1 *)((long)register0x00000020 + -0x50);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      puVar5 = *(uint8 **)((long)register0x00000020 + 0x18);
      if (puVar5 != (uint8 *)0x0) {
        if ((*(char *)((long)register0x00000020 + 0x20) == '\0') || (((ulong)puVar5 & 0x60) == 0)) {
          if (((uint)puVar5 >> 9 & 1) == 0) {
            rVar4 = *(reflect_flag *)((long)register0x00000020 + 0x10);
            uVar3 = *(undefined8 *)((long)register0x00000020 + 8);
          }
          else {
            *(undefined **)((long)register0x00000020 + -0x50) = &DAT_0028d469;
            *(undefined8 *)((long)register0x00000020 + -0x48) = 9;
            *(undefined8 *)((long)register0x00000020 + -0x40) =
                 *(undefined8 *)((long)register0x00000020 + 8);
            *(undefined8 *)((long)register0x00000020 + -0x38) =
                 *(undefined8 *)((long)register0x00000020 + 0x10);
            *(uint8 **)((long)register0x00000020 + -0x30) = puVar5;
            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x53b574;
            v_02.ptr = (void *)uVar3;
            v_02.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 0x10);
            v_02.flag = in_RSI;
            op.str = puVar5;
            reflect_makeMethodValue(op,v_02);
            uVar3 = *(undefined8 *)((long)register0x00000020 + -0x28);
            rVar4 = *(reflect_flag *)((long)register0x00000020 + -0x20);
            puVar5 = *(uint8 **)((long)register0x00000020 + -0x18);
          }
          if (((ulong)puVar5 & 0x1f) == 0x14) {
            *(reflect_flag *)((long)register0x00000020 + -0x10) = rVar4;
            *(undefined8 *)((long)register0x00000020 + -0x50) = uVar3;
            *(reflect_flag *)((long)register0x00000020 + -0x48) = rVar4;
            *(uint8 **)((long)register0x00000020 + -0x40) = puVar5;
            *(undefined8 *)((long)register0x00000020 + -0x58) = 0x53b5a8;
            v_00.ptr = puVar5;
            v_00.typ = (reflect_rtype *)uVar3;
            v_00.flag = rVar4;
            reflect_Value_NumMethod(v_00);
            if (*(long *)((long)register0x00000020 + -0x38) != 0) {
              lVar1 = **(long **)((long)register0x00000020 + -0x10);
              prVar2 = (runtime__type *)(*(long **)((long)register0x00000020 + -0x10))[1];
              uVar3 = 0;
              if (lVar1 != 0) {
                uVar3 = *(undefined8 *)(lVar1 + 8);
              }
              *(undefined8 *)((long)register0x00000020 + 0x28) = uVar3;
              *(runtime__type **)((long)register0x00000020 + 0x30) = prVar2;
              iVar7.data = puVar5;
              iVar7._type = prVar2;
              return iVar7;
            }
            prVar2 = (runtime__type *)(*(undefined8 **)((long)register0x00000020 + -0x10))[1];
            *(undefined8 *)((long)register0x00000020 + 0x28) =
                 **(undefined8 **)((long)register0x00000020 + -0x10);
            *(runtime__type **)((long)register0x00000020 + 0x30) = prVar2;
            iVar8.data = puVar5;
            iVar8._type = prVar2;
            return iVar8;
          }
          *(undefined8 *)((long)register0x00000020 + -0x50) = uVar3;
          *(reflect_flag *)((long)register0x00000020 + -0x48) = rVar4;
          *(uint8 **)((long)register0x00000020 + -0x40) = puVar5;
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x53b617;
          v_01.ptr = puVar5;
          v_01.typ = (reflect_rtype *)uVar3;
          v_01.flag = rVar4;
          iVar9 = reflect_packEface(v_01);
          iVar10.data = iVar9.data;
          *(runtime__type **)((long)register0x00000020 + 0x28) =
               *(runtime__type **)((long)register0x00000020 + -0x38);
          *(undefined8 *)((long)register0x00000020 + 0x30) =
               *(undefined8 *)((long)register0x00000020 + -0x30);
          iVar10._type = *(runtime__type **)((long)register0x00000020 + -0x38);
          return iVar10;
        }
        *(undefined **)((long)register0x00000020 + -0x50) = &DAT_00225520;
        *(undefined ***)((long)register0x00000020 + -0x48) = &reflect__stmp_83;
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x53b654;
        iVar9.data = op.len;
        iVar9._type = (runtime__type *)&reflect__stmp_83;
        runtime_gopanic(iVar9);
      }
      *(undefined **)((long)register0x00000020 + -0x50) = &DAT_0024d5e0;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x53b665;
      runtime_newobject((runtime__type *)&DAT_0024d5e0);
      prVar2 = *(runtime__type **)((long)register0x00000020 + -0x48);
      prVar2->ptrdata = 0x17;
      prVar2->size = (uintptr)&DAT_0029def1;
      prVar2->hash = 0;
      prVar2->tflag = 0;
      prVar2->align = 0;
      prVar2->fieldAlign = 0;
      prVar2->kind = 0;
      *(undefined **)((long)register0x00000020 + -0x50) = &DAT_00233920;
      *(runtime__type **)((long)register0x00000020 + -0x48) = prVar2;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x53b699;
      e.data = op.len;
      e._type = prVar2;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar6 + -8) = 0x53b69f;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar6;
  } while( true );
}

