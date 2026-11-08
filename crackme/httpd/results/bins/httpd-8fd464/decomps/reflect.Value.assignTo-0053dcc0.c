
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.assignTo(reflect.Value v, string context,
   reflect.rtype * dst, void * target, reflect.Value ~r3) */

reflect_Value reflect_Value_assignTo(reflect_Value v,string context,reflect_rtype *dst,void *target)

{
  byte bVar1;
  reflect_rtype *V;
  runtime_tmpBuf *buf;
  int iVar2;
  reflect_rtype *T;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint8 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *unaff_RBP;
  reflect_flag rVar10;
  runtime_iface *dst_00;
  uint8 *in_R10;
  int in_R11;
  long in_FS_OFFSET;
  interface___ iVar11;
  string sVar12;
  string val;
  string a1;
  reflect_Value v_00;
  reflect_Value rVar13;
  reflect_Value v_01;
  reflect_Value rVar14;
  reflect_Value rVar15;
  runtime_eface e;
  string a0;
  string a2;
  string a3;
  reflect_Value v_spill;
  string context_spill;
  reflect_rtype *dst_spill;
  void *target_spill;
  
  rVar10 = context.len;
  dst_00 = (runtime_iface *)context.str;
  do {
    puVar9 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x28)) {
      puVar9 = (undefined1 *)((long)register0x00000020 + -0xa8);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      puVar7 = *(uint8 **)((long)register0x00000020 + 0x18);
      if (((uint)puVar7 >> 9 & 1) == 0) {
                    /* Unresolved local var: reflect.flag fl@[???] */
        T = *(reflect_rtype **)((long)register0x00000020 + 8);
        uVar4 = *(undefined8 *)((long)register0x00000020 + 0x10);
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -0xa8) =
             *(undefined8 *)((long)register0x00000020 + 0x20);
        *(undefined8 *)((long)register0x00000020 + -0xa0) =
             *(undefined8 *)((long)register0x00000020 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x98) =
             *(undefined8 *)((long)register0x00000020 + 8);
        *(int *)((long)register0x00000020 + -0x90) = *(int *)((long)register0x00000020 + 0x10);
        *(uint8 **)((long)register0x00000020 + -0x88) = puVar7;
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53dd4f;
        sVar12.len = *(int *)((long)register0x00000020 + 0x10);
        sVar12.str = puVar7;
        v_00.ptr = dst_00;
        v_00.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 0x20);
        v_00.flag = rVar10;
        reflect_makeMethodValue(sVar12,v_00);
        T = *(reflect_rtype **)((long)register0x00000020 + -0x80);
        uVar4 = *(undefined8 *)((long)register0x00000020 + -0x78);
        puVar7 = *(uint8 **)((long)register0x00000020 + -0x70);
      }
      *(uint8 **)((long)register0x00000020 + -0x40) = puVar7;
      *(undefined8 *)((long)register0x00000020 + -0x20) = uVar4;
      *(reflect_rtype **)((long)register0x00000020 + -0x28) = T;
      V = *(reflect_rtype **)((long)register0x00000020 + 0x30);
      *(reflect_rtype **)((long)register0x00000020 + -0xa8) = V;
      *(reflect_rtype **)((long)register0x00000020 + -0xa0) = T;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53dd89;
      reflect_directlyAssignable(T,V);
      if (*(char *)((long)register0x00000020 + -0x98) != '\0') {
        bVar1 = *(byte *)(*(long *)((long)register0x00000020 + 0x30) + 0x17);
        *(long *)((long)register0x00000020 + 0x40) = *(long *)((long)register0x00000020 + 0x30);
        *(undefined8 *)((long)register0x00000020 + 0x48) =
             *(undefined8 *)((long)register0x00000020 + -0x20);
        uVar8 = 0;
        if ((*(ulong *)((long)register0x00000020 + -0x40) & 0x60) != 0) {
          uVar8 = 0x20;
        }
        rVar15.typ = *(ulong *)((long)register0x00000020 + -0x40) & 0x180;
        rVar15.flag = (ulong)(bVar1 & 0x1f) | uVar8 | rVar15.typ;
        *(ulong *)((long)register0x00000020 + 0x50) = rVar15.flag;
        rVar15.ptr = (void *)0x20;
        return rVar15;
      }
                    /* Unresolved local var: interface_{} x@[???] */
      *(reflect_rtype **)((long)register0x00000020 + -0xa8) =
           *(reflect_rtype **)((long)register0x00000020 + 0x30);
      *(undefined8 *)((long)register0x00000020 + -0xa0) =
           *(undefined8 *)((long)register0x00000020 + -0x28);
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53ddb2;
      reflect_implements(*(reflect_rtype **)((long)register0x00000020 + 0x30),V);
      if (*(char *)((long)register0x00000020 + -0x98) != '\0') {
        lVar3 = *(long *)((long)register0x00000020 + 0x38);
        if (lVar3 == 0) {
          *(runtime__type **)((long)register0x00000020 + -0xa8) =
               *(runtime__type **)((long)register0x00000020 + 0x30);
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53dddb;
          reflect_unsafe_New(*(runtime__type **)((long)register0x00000020 + 0x30));
          lVar3 = *(long *)((long)register0x00000020 + -0xa0);
        }
        *(long *)((long)register0x00000020 + -0x10) = lVar3;
        if ((*(ulong *)((long)register0x00000020 + -0x40) & 0x1f) == 0x14) {
          plVar5 = *(long **)((long)register0x00000020 + -0x20);
          if (*plVar5 == 0) {
            *(undefined8 *)((long)register0x00000020 + 0x40) =
                 *(undefined8 *)((long)register0x00000020 + 0x30);
            *(undefined8 *)((long)register0x00000020 + 0x48) = 0;
            *(undefined8 *)((long)register0x00000020 + 0x50) = 0x14;
            rVar13.ptr = V;
            rVar13.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 0x30);
            rVar13.flag = (reflect_flag)plVar5;
            return rVar13;
          }
        }
        else {
          plVar5 = *(long **)((long)register0x00000020 + -0x20);
        }
        *(undefined8 *)((long)register0x00000020 + -0xa8) =
             *(undefined8 *)((long)register0x00000020 + -0x28);
        *(long **)((long)register0x00000020 + -0xa0) = plVar5;
        *(ulong *)((long)register0x00000020 + -0x98) = *(ulong *)((long)register0x00000020 + -0x40);
        *(undefined1 *)((long)register0x00000020 + -0x90) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53de69;
        v_01.ptr = V;
        v_01.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + -0x28);
        v_01.flag = (reflect_flag)plVar5;
        iVar11 = reflect_valueInterface(v_01,SUB81(dst_00,0));
        e._type = iVar11.data;
        *(reflect_rtype **)((long)register0x00000020 + -0x30) =
             *(reflect_rtype **)((long)register0x00000020 + -0x80);
        *(undefined8 *)((long)register0x00000020 + -0x18) =
             *(undefined8 *)((long)register0x00000020 + -0x88);
        *(undefined8 *)((long)register0x00000020 + -0xa8) =
             *(undefined8 *)((long)register0x00000020 + 0x30);
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53de91;
        reflect___rtype__NumMethod(*(reflect_rtype **)((long)register0x00000020 + -0x80));
        if (*(long *)((long)register0x00000020 + -0xa0) == 0) {
          puVar6 = *(undefined8 **)((long)register0x00000020 + -0x10);
          *puVar6 = *(undefined8 *)((long)register0x00000020 + -0x18);
          if (runtime_writeBarrier._0_4_ == 0) {
            puVar6[1] = *(undefined8 *)((long)register0x00000020 + -0x30);
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53ded0;
            runtime_gcWriteBarrier();
          }
        }
        else {
          *(runtime_interfacetype **)((long)register0x00000020 + -0xa8) =
               *(runtime_interfacetype **)((long)register0x00000020 + 0x30);
          *(undefined8 *)((long)register0x00000020 + -0xa0) =
               *(undefined8 *)((long)register0x00000020 + -0x18);
          *(undefined8 *)((long)register0x00000020 + -0x98) =
               *(undefined8 *)((long)register0x00000020 + -0x30);
          *(void **)((long)register0x00000020 + -0x90) =
               *(void **)((long)register0x00000020 + -0x10);
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53df07;
          e.data = *(void **)((long)register0x00000020 + -0x10);
          reflect_ifaceE2I(*(runtime_interfacetype **)((long)register0x00000020 + 0x30),e,dst_00);
          puVar6 = *(undefined8 **)((long)register0x00000020 + -0x10);
        }
        *(undefined8 *)((long)register0x00000020 + 0x40) =
             *(undefined8 *)((long)register0x00000020 + 0x30);
        *(undefined8 **)((long)register0x00000020 + 0x48) = puVar6;
        *(undefined8 *)((long)register0x00000020 + 0x50) = 0x94;
        rVar14.ptr = e._type;
        rVar14.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 0x30);
        rVar14.flag = (reflect_flag)puVar6;
        return rVar14;
      }
      *(reflect_rtype **)((long)register0x00000020 + -0xa8) =
           *(reflect_rtype **)((long)register0x00000020 + -0x28);
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53dfb8;
      reflect___rtype__String(*(reflect_rtype **)((long)register0x00000020 + -0x28));
      *(reflect_rtype **)((long)register0x00000020 + -0x18) =
           *(reflect_rtype **)((long)register0x00000020 + -0xa0);
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x98);
      *(undefined8 *)((long)register0x00000020 + -0xa8) =
           *(undefined8 *)((long)register0x00000020 + 0x30);
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53dfe5;
      sVar12 = reflect___rtype__String(*(reflect_rtype **)((long)register0x00000020 + -0xa0));
      a0.str = (uint8 *)sVar12.len;
      buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0xa0);
      iVar2 = *(int *)((long)register0x00000020 + -0x98);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xa0) =
           *(undefined8 *)((long)register0x00000020 + 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x98) =
           *(undefined8 *)((long)register0x00000020 + 0x28);
      *(undefined **)((long)register0x00000020 + -0x90) = &DAT_002992d5;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x10;
      *(undefined8 *)((long)register0x00000020 + -0x80) =
           *(undefined8 *)((long)register0x00000020 + -0x18);
      *(undefined8 *)((long)register0x00000020 + -0x78) =
           *(undefined8 *)((long)register0x00000020 + -0x38);
      *(undefined **)((long)register0x00000020 + -0x70) = &DAT_0029f7cb;
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x1b;
      *(runtime_tmpBuf **)((long)register0x00000020 + -0x60) = buf;
      *(int *)((long)register0x00000020 + -0x58) = iVar2;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53e065;
      a1.len = rVar10;
      a1.str = (uint8 *)dst_00;
      a0.len = iVar2;
      a2.len = (int)target;
      a2.str = (uint8 *)dst;
      a3.len = in_R11;
      a3.str = in_R10;
      sVar12 = runtime_concatstring5(buf,a0,a1,a2,a3,*(string *)((long)register0x00000020 + -0xa8));
      val.len = (void *)sVar12.len;
      *(uint8 **)((long)register0x00000020 + -0xa8) = *(uint8 **)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0xa0) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53e07d;
      val.str = *(uint8 **)((long)register0x00000020 + -0x50);
      runtime_convTstring(val);
      *(undefined **)((long)register0x00000020 + -0xa8) = &DAT_00225520;
      *(runtime__type **)((long)register0x00000020 + -0xa0) =
           *(runtime__type **)((long)register0x00000020 + -0x98);
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x53e097;
      iVar11.data = val.len;
      iVar11._type = *(runtime__type **)((long)register0x00000020 + -0x98);
      runtime_gopanic(iVar11);
    }
    *(undefined8 *)(puVar9 + -8) = 0x53e09d;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar9;
  } while( true );
}

