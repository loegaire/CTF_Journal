
/* WARNING: Removing unreachable block (ram,0x00538159) */
/* WARNING: Removing unreachable block (ram,0x00537b3f) */
/* WARNING: Removing unreachable block (ram,0x00537c07) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.haveIdenticalUnderlyingType(reflect.rtype * T,
   reflect.rtype * V, bool cmpTags, bool ~r3) */

bool reflect_haveIdenticalUnderlyingType(reflect_rtype *T,reflect_rtype *V,bool cmpTags)

{
  uintptr uVar1;
  runtime_itab *prVar2;
  void *pvVar3;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  reflect_rtype *prVar7;
  reflect_rtype *prVar8;
  reflect_funcType *t_00;
  undefined1 cmpTags_00;
  undefined8 in_RSI;
  void *in_RDI;
  long in_FS_OFFSET;
  reflect_Type T_00;
  reflect_Type T_01;
  reflect_Type T_02;
  reflect_Type T_03;
  reflect_Type T_04;
  reflect_Type rVar9;
  reflect_Type T_05;
  reflect_Type T_06;
  reflect_Type V_00;
  reflect_Type V_01;
  reflect_Type V_02;
  reflect_Type V_03;
  reflect_Type V_04;
  reflect_Type V_05;
  reflect_Type V_06;
  reflect_Type V_07;
  reflect_funcType *t;
  reflect_funcType *v;
  bool cmpTags_spill;
  reflect_rtype *local_88;
  reflect_name local_80;
  reflect_rtype *local_78;
  char local_68;
  reflect_rtype *local_10;
  
                    /* Unresolved local var: reflect.Kind kind@[???] */
  while (cmpTags_00 = (undefined1)in_RSI,
        &local_10 <= *(reflect_rtype ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  bVar5 = SUB81(v,0);
  if (v == t) {
    return bVar5;
  }
  uVar6 = (ulong)((t->rtype).kind & 0x1f);
  if (((v->rtype).kind & 0x1f) != uVar6) {
    return bVar5;
  }
  if (((uVar6 - 1 < 0x10) || (uVar6 == 0x18)) || (uVar6 == 0x1a)) {
    return bVar5;
  }
  if (uVar6 < 0x14) {
    if (uVar6 == 0x11) {
      reflect___rtype__Len(&v->rtype);
      reflect___rtype__Len(local_88);
      reflect___rtype__Elem(&t->rtype);
      rVar9 = reflect___rtype__Elem(local_88);
      T_01.data = rVar9.data;
      T_01.tab = (runtime_itab *)(ulong)cmpTags_spill;
      V_01.data = in_RDI;
      V_01.tab = (runtime_itab *)local_80.bytes;
      reflect_haveIdenticalType(T_01,V_01,(bool)cmpTags_00);
      return (bool)local_68;
    }
    if (uVar6 == 0x12) {
      reflect___rtype__ChanDir(&v->rtype);
      reflect___rtype__ChanDir(local_88);
      reflect___rtype__Elem(&t->rtype);
      rVar9 = reflect___rtype__Elem(local_88);
      T_00.data = rVar9.data;
      T_00.tab = (runtime_itab *)(ulong)cmpTags_spill;
      V_00.data = in_RDI;
      V_00.tab = (runtime_itab *)local_80.bytes;
      reflect_haveIdenticalType(T_00,V_00,(bool)cmpTags_00);
      return (bool)local_68;
    }
    if (uVar6 == 0x13) {
      if ((v->outCount == t->outCount) && (v->inCount == t->inCount)) {
        T_06.data = &DAT_00000012;
        t_00 = (reflect_funcType *)0x0;
        while( true ) {
          reflect___rtype__NumIn(&v->rtype);
          if ((long)local_88 <= (long)t_00) {
            prVar7 = (reflect_rtype *)0x0;
            while( true ) {
              reflect___rtype__NumOut(prVar7);
              if ((long)local_88 <= (long)prVar7) {
                return SUB81(prVar7,0);
              }
              reflect___rtype__Out(prVar7,(int)T_06.data);
              prVar8 = local_78;
              rVar9 = reflect___rtype__Out((reflect_rtype *)local_80.bytes,(int)prVar7);
              T_06.data = rVar9.data;
              local_88 = local_78;
              T_06.tab = (runtime_itab *)(ulong)cmpTags_spill;
              V_07.data = in_RDI;
              V_07.tab = (runtime_itab *)prVar8;
              bVar5 = reflect_haveIdenticalType(T_06,V_07,SUB81(in_RSI,0));
              if (local_68 == '\0') break;
                    /* Unresolved local var: int i@[???] */
              prVar7 = (reflect_rtype *)((long)&prVar7->size + 1);
            }
            return bVar5;
          }
          reflect___rtype__In(&t_00->rtype,(int)T_06.data);
          prVar7 = local_78;
          rVar9 = reflect___rtype__In((reflect_rtype *)local_80.bytes,(int)t_00);
          T_05.data = rVar9.data;
          local_88 = local_78;
          T_05.tab = (runtime_itab *)(ulong)cmpTags_spill;
          V_06.data = in_RDI;
          V_06.tab = (runtime_itab *)prVar7;
          bVar5 = reflect_haveIdenticalType(T_05,V_06,SUB81(in_RSI,0));
          if (local_68 == '\0') break;
                    /* Unresolved local var: int i@[???] */
          v = t_00;
          t_00 = (reflect_funcType *)((long)&(t_00->rtype).size + 1);
          T_06.data = T_05.data;
        }
        return bVar5;
      }
      return bVar5;
    }
  }
  else {
    if (uVar6 < 0x16) {
      if (uVar6 != 0x14) {
        reflect___rtype__Key(&v->rtype);
        rVar9 = reflect___rtype__Key(local_88);
        rVar9.tab = (runtime_itab *)(ulong)cmpTags_spill;
        V_02.data = in_RDI;
        V_02.tab = (runtime_itab *)local_80.bytes;
        reflect_haveIdenticalType(rVar9,V_02,(bool)cmpTags_00);
        if (local_68 == '\0') {
          local_68 = '\0';
        }
        else {
          reflect___rtype__Elem(&t->rtype);
          rVar9 = reflect___rtype__Elem((reflect_rtype *)local_80.bytes);
          T_02.data = rVar9.data;
          T_02.tab = (runtime_itab *)(ulong)cmpTags_spill;
          V_03.data = in_RDI;
          V_03.tab = (runtime_itab *)local_88;
          reflect_haveIdenticalType(T_02,V_03,(bool)cmpTags_00);
        }
        return (bool)local_68;
      }
      if ((t[1].rtype.ptrdata == 0) && (v[1].rtype.ptrdata == 0)) {
        return bVar5;
      }
      return bVar5;
    }
    if (uVar6 < 0x18) {
      reflect___rtype__Elem(&v->rtype);
      rVar9 = reflect___rtype__Elem(local_88);
      T_03.data = rVar9.data;
      T_03.tab = (runtime_itab *)(ulong)cmpTags_spill;
      V_04.data = in_RDI;
      V_04.tab = (runtime_itab *)local_80.bytes;
      reflect_haveIdenticalType(T_03,V_04,(bool)cmpTags_00);
      return (bool)local_68;
    }
    if (uVar6 == 0x19) {
      if (t[1].rtype.ptrdata != v[1].rtype.ptrdata) {
        return bVar5;
      }
      reflect_name_name((reflect_name)*(uint8 **)&t->inCount);
      local_10 = local_88;
      reflect_name_name(local_80);
      runtime_memequal();
      if ((char)local_78 == '\0') {
        return (bool)extraout_AL;
      }
                    /* Unresolved local var: int i@[???] */
      uVar1 = t[1].rtype.ptrdata;
      uVar6 = 0;
      while( true ) {
        if ((long)uVar1 <= (long)uVar6) {
          return SUB81(uVar6,0);
        }
        prVar2 = (runtime_itab *)t[1].rtype.size;
        if (t[1].rtype.ptrdata <= uVar6) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        pvVar3 = (void *)v[1].rtype.size;
        if (v[1].rtype.ptrdata <= uVar6) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
                    /* WARNING: Load size is inaccurate */
        reflect_name_name((reflect_name)prVar2->_[uVar6 * 0x18 + -0x14]);
        local_10 = local_88;
        reflect_name_name(local_80);
        runtime_memequal();
        if ((char)local_78 == '\0') break;
        local_88 = *(reflect_rtype **)(prVar2->_ + uVar6 * 0x18 + -0xc);
        local_78 = *(reflect_rtype **)((long)pvVar3 + uVar6 * 0x18 + 8);
        T_04.data = pvVar3;
        T_04.tab = (runtime_itab *)(uVar6 * 3);
        V_05.data = go_itab__reflect_rtype_reflect_Type;
        V_05.tab = prVar2;
        bVar5 = reflect_haveIdenticalType(T_04,V_05,SUB81(local_78,0));
        if (local_68 == '\0') {
          return bVar5;
        }
        if (cmpTags_spill) {
          reflect_name_tag((uint8 *)(uVar6 * 3));
          local_10 = local_88;
          reflect_name_tag((reflect_name)0x306350);
          runtime_memequal();
          bVar4 = SUB81(local_78,0) ^ 1;
          if (bVar4 != 0) {
            return (bool)bVar4;
          }
          bVar5 = false;
        }
        local_80.bytes = go_itab__reflect_rtype_reflect_Type;
        if (*(long *)((long)pvVar3 + uVar6 * 0x18 + 0x10) !=
            *(long *)(prVar2->_ + uVar6 * 0x18 + -4)) {
          return bVar5;
        }
        uVar6 = uVar6 + 1;
      }
      return (bool)extraout_AL_00;
    }
  }
  return bVar5;
}

