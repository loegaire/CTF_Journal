
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*MapIter).Key(reflect.MapIter * it, reflect.Value ~r0) */

reflect_Value reflect___MapIter__Key(reflect_MapIter *it)

{
  byte bVar1;
  runtime_hmap *prVar2;
  long *plVar3;
  long lVar4;
  runtime_hiter *it_00;
  reflect_rtype *typ;
  ulong uVar5;
  void *unaff_RBX;
  undefined1 *puVar6;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  interface___ e_00;
  reflect_Value rVar7;
  reflect_MapIter *it_spill;
  
  do {
                    /* Unresolved local var: reflect.mapType * t@[???]
                       Unresolved local var: reflect.rtype * ktype@[???] */
    puVar6 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar6 = (undefined1 *)((long)register0x00000020 + -0x50);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      prVar2 = (*(runtime_hiter **)((long)register0x00000020 + 8))->h;
      if (prVar2 != (runtime_hmap *)0x0) {
        *(runtime_hmap **)((long)register0x00000020 + -0x50) = prVar2;
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x53be5c;
        reflect_mapiterkey(*(runtime_hiter **)((long)register0x00000020 + 8));
        if (*(long *)((long)register0x00000020 + -0x48) != 0) {
          plVar3 = *(long **)((long)register0x00000020 + 8);
          lVar4 = *(long *)(*plVar3 + 0x30);
          *(long *)((long)register0x00000020 + -0x10) = lVar4;
          *(long *)((long)register0x00000020 + -0x18) = plVar3[2];
          it_00 = (runtime_hiter *)plVar3[3];
          bVar1 = *(byte *)(lVar4 + 0x17);
          *(byte *)((long)register0x00000020 + -0x19) = bVar1;
          *(runtime_hiter **)((long)register0x00000020 + -0x50) = it_00;
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x53be97;
          reflect_mapiterkey(it_00);
          typ = *(reflect_rtype **)((long)register0x00000020 + -0x48);
          *(undefined8 *)((long)register0x00000020 + -0x50) =
               *(undefined8 *)((long)register0x00000020 + -0x10);
          uVar5 = 0;
          if ((*(ulong *)((long)register0x00000020 + -0x18) & 0x60) != 0) {
            uVar5 = 0x20;
          }
          *(void **)((long)register0x00000020 + -0x48) =
               (void *)(uVar5 | *(byte *)((long)register0x00000020 + -0x19) & 0x1f);
          *(reflect_rtype **)((long)register0x00000020 + -0x40) = typ;
          *(undefined8 *)((long)register0x00000020 + -0x58) = 0x53bed9;
          rVar7 = reflect_copyVal(typ,(ulong)bVar1,
                                  (void *)(uVar5 | *(byte *)((long)register0x00000020 + -0x19) &
                                                   0x1f));
          *(undefined8 *)((long)register0x00000020 + 0x10) =
               *(undefined8 *)((long)register0x00000020 + -0x38);
          *(reflect_flag *)((long)register0x00000020 + 0x18) =
               *(reflect_flag *)((long)register0x00000020 + -0x30);
          *(undefined8 *)((long)register0x00000020 + 0x20) =
               *(undefined8 *)((long)register0x00000020 + -0x28);
          rVar7.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + -0x38);
          rVar7.flag = *(reflect_flag *)((long)register0x00000020 + -0x30);
          return rVar7;
        }
        *(undefined **)((long)register0x00000020 + -0x50) = &DAT_00225520;
        *(undefined ***)((long)register0x00000020 + -0x48) = &reflect__stmp_89;
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x53bf1d;
        e.data = unaff_RBX;
        e._type = (runtime__type *)&reflect__stmp_89;
        runtime_gopanic(e);
      }
      *(undefined **)((long)register0x00000020 + -0x50) = &DAT_00225520;
      *(undefined ***)((long)register0x00000020 + -0x48) = &reflect__stmp_88;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x53bf39;
      e_00.data = unaff_RBX;
      e_00._type = (runtime__type *)&reflect__stmp_88;
      runtime_gopanic(e_00);
    }
    *(undefined8 *)(puVar6 + -8) = 0x53bf3f;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar6;
  } while( true );
}

