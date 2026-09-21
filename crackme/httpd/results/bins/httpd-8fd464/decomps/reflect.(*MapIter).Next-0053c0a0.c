
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*MapIter).Next(reflect.MapIter * it, bool ~r0) */

bool reflect___MapIter__Next(reflect_MapIter *it)

{
  runtime_hiter *prVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  runtime_maptype *unaff_RBX;
  undefined1 *puVar6;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  interface___ e_00;
  reflect_MapIter *it_spill;
  
  do {
    puVar6 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar6 = (undefined1 *)((long)register0x00000020 + -0x20);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      prVar1 = *(runtime_hiter **)((long)register0x00000020 + 8);
      if (prVar1->h == (runtime_hmap *)0x0) {
        plVar2 = prVar1->key;
        puVar5 = prVar1->elem;
        unaff_RBX = prVar1->t;
        if ((*plVar2 == 8) && (plVar2[1] != 0)) {
          if (((uint)unaff_RBX >> 7 & 1) != 0) {
            puVar5 = (undefined8 *)*puVar5;
          }
          *(long **)((long)register0x00000020 + -0x20) = plVar2;
          *(undefined8 **)((long)register0x00000020 + -0x18) = puVar5;
          *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53c108;
          reflect_mapiterinit((runtime_maptype *)prVar1,(runtime_hmap *)unaff_RBX);
          if (runtime_writeBarrier._0_4_ == 0) {
            lVar4 = *(long *)((long)register0x00000020 + 8);
            *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)((long)register0x00000020 + -0x10);
          }
          else {
            lVar4 = *(long *)((long)register0x00000020 + 8);
            *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53c130;
            runtime_gcWriteBarrier();
          }
LAB_0053c15a:
          prVar1 = *(runtime_hiter **)(lVar4 + 0x18);
          *(runtime_hiter **)((long)register0x00000020 + -0x20) = prVar1;
          *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53c167;
          pvVar3 = reflect_mapiterkey(prVar1);
          *(bool *)((long)register0x00000020 + 0x10) =
               *(long *)((long)register0x00000020 + -0x18) != 0;
          return SUB81(pvVar3,0);
        }
      }
      else {
        *(runtime_hmap **)((long)register0x00000020 + -0x20) = prVar1->h;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53c13b;
        reflect_mapiterkey(prVar1);
        if (*(long *)((long)register0x00000020 + -0x18) != 0) {
          *(runtime_hmap **)((long)register0x00000020 + -0x20) =
               (*(runtime_hiter **)((long)register0x00000020 + 8))->h;
          *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53c155;
          reflect_mapiternext(*(runtime_hiter **)((long)register0x00000020 + 8));
          lVar4 = *(long *)((long)register0x00000020 + 8);
          goto LAB_0053c15a;
        }
        *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00225520;
        *(undefined1 **)((long)register0x00000020 + -0x18) = reflect__stmp_93;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53c198;
        e.data = unaff_RBX;
        e._type = (runtime__type *)reflect__stmp_93;
        runtime_gopanic(e);
      }
      *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00225520;
      *(undefined ***)((long)register0x00000020 + -0x18) = &reflect__stmp_10;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53c1b4;
      e_00.data = unaff_RBX;
      e_00._type = (runtime__type *)&reflect__stmp_10;
      runtime_gopanic(e_00);
    }
    *(undefined8 *)(puVar6 + -8) = 0x53c1ba;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar6;
  } while( true );
}

