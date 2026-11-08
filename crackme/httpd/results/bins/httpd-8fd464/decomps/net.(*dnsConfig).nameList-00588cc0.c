
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*dnsConfig).nameList(net.dnsConfig * conf, string name,
   []string ~r1) */

__string net___dnsConfig__nameList(net_dnsConfig *conf,string name)

{
  long lVar1;
  uint8 *extraout_RAX;
  runtime__type *extraout_RAX_00;
  runtime__type *extraout_RAX_01;
  runtime__type *et;
  int iVar2;
  uint8 *puVar3;
  runtime__type *prVar4;
  uint8 *puVar5;
  long lVar6;
  runtime__type *extraout_RDX;
  runtime__type *extraout_RDX_00;
  runtime__type *prVar7;
  runtime__type *prVar8;
  undefined *cap;
  uint8 *cap_00;
  runtime__type *in_RDI;
  uintptr uVar9;
  runtime__type *prVar10;
  string *psVar11;
  long in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  string a1;
  string a1_00;
  string name_00;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  string a0;
  string a0_00;
  __string _Var14;
  __string _Var15;
  __string _Var16;
  __string _Var17;
  net_dnsConfig *conf_spill;
  uint8 *in_stack_00000010;
  int l;
  char local_a8;
  runtime__type *local_90;
  uintptr local_88;
  uint8 *local_80;
  uintptr local_38;
  runtime__type *local_30;
  runtime__type *local_28;
  runtime__type *local_20;
  string *local_18;
  runtime__type *local_10;
  undefined7 extraout_var;
  
  name_00.len = name.str;
                    /* Unresolved local var: bool rooted@[???]
                       Unresolved local var: []string names@[???] */
  while (&local_38 <= *(uintptr **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  name_00.str = in_stack_00000010;
  iVar2 = l;
  _Var16.array._0_1_ = net_avoidDNS(name_00);
  _Var16.array._1_7_ = extraout_var;
  if (local_a8 != '\0') {
    _Var16.len = (int)name_00.len;
    _Var16.cap = iVar2;
    return _Var16;
  }
  if (l < 1) {
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: int i@[???] */
    bVar12 = false;
  }
  else {
    bVar12 = in_stack_00000010[l + -1] == 0x2e;
  }
  if (0xfe < l) {
LAB_00588ddc:
    _Var15.len = (int)name_00.len;
    _Var15.array = (string *)l;
    _Var15.cap = (int)in_stack_00000010;
    return _Var15;
  }
  if (l == 0xfe) {
    if (bVar12) goto LAB_00588ddc;
  }
  else if (bVar12) {
    puVar3 = in_stack_00000010;
    runtime_newobject((runtime__type *)&DAT_00226740);
    *(int *)(l + 8) = l;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(uint8 **)l = in_stack_00000010;
    }
    else {
      runtime_gcWriteBarrier();
      in_stack_00000010 = extraout_RAX;
    }
    _Var14.len = (int)name_00.len;
    _Var14.array = (string *)in_stack_00000010;
    _Var14.cap = (int)puVar3;
    return _Var14;
  }
  prVar8 = (runtime__type *)0x0;
  for (lVar6 = 0; lVar6 < l; lVar6 = lVar6 + 1) {
    in_RDI = (runtime__type *)((long)&prVar8->size + 1);
    if (in_stack_00000010[lVar6] == 0x2e) {
      prVar8 = in_RDI;
    }
  }
  local_30 = (runtime__type *)conf_spill->ndots;
  a1.len = (int)local_30;
  a1.str = (uint8 *)in_RDI;
  a0.len = 0x287744;
  a0.str = (uint8 *)prVar8;
  runtime_concatstring2((runtime_tmpBuf *)l,a0,a1);
                    /* Unresolved local var: string suffix@[???] */
  local_10 = local_90;
  local_38 = local_88;
  cap = &DAT_00225520;
  puVar3 = (uint8 *)((conf_spill->search).len + 1);
  runtime_makeslice((runtime__type *)conf_spill,local_88,(int)puVar3);
  et = (runtime__type *)((long)&go_string__ + 4);
  prVar7 = prVar8;
  if ((long)prVar8 < (long)local_30) {
    cap_00 = (uint8 *)0x0;
    prVar4 = local_30;
    uVar9 = local_38;
    prVar10 = local_10;
  }
  else {
    if (puVar3 == (uint8 *)0x0) {
      old.cap = (int)in_RDI;
      old.array = (void *)SUB168(ZEXT816(0x225520) << 0x40,0);
      old.len = SUB168(ZEXT816(0x225520) << 0x40,8);
      runtime_growslice((runtime__type *)((long)&go_string__ + 4),old,(int)cap);
      cap_00 = (uint8 *)(local_88 + 1);
      et = local_90;
      puVar3 = local_80;
    }
    else {
      cap_00 = (uint8 *)0x1;
    }
    et->ptrdata = local_38;
    prVar4 = local_30;
    uVar9 = local_38;
    prVar10 = local_10;
    if (runtime_writeBarrier._0_4_ == 0) {
      et->size = (uintptr)local_10;
    }
    else {
      in_RDI = et;
      runtime_gcWriteBarrierR9();
      et = extraout_RAX_00;
      prVar7 = extraout_RDX;
    }
  }
  lVar6 = (conf_spill->search).len;
  psVar11 = (conf_spill->search).array;
  if (lVar6 < 1) {
    bVar13 = SBORROW8((long)prVar4,(long)prVar7);
    lVar6 = (long)prVar4 - (long)prVar7;
    bVar12 = prVar4 == prVar7;
  }
  else {
    puVar5 = cap_00;
    in_RDI = (runtime__type *)0x0;
    while( true ) {
      lVar1 = l + psVar11->len + 1;
      cap_00 = puVar5;
      if (lVar1 < 0xff) {
        a1_00.len = (int)puVar5;
        a1_00.str = (uint8 *)in_RDI;
        a0_00.len = lVar1;
        a0_00.str = puVar3;
        prVar7 = in_RDI;
        local_28 = et;
        local_18 = psVar11;
        runtime_concatstring2((runtime_tmpBuf *)et,a0_00,a1_00);
        cap_00 = puVar5 + 1;
        local_20 = local_90;
        et = local_28;
        if (puVar3 < cap_00) {
          old_01.len = (int)local_28;
          old_01.array = cap_00;
          old_01.cap = (int)prVar7;
          runtime_growslice((runtime__type *)&DAT_00225520,old_01,(int)puVar3);
          cap_00 = (uint8 *)(local_88 + 1);
          puVar3 = local_80;
          et = local_90;
        }
        (&et->ptrdata)[(long)puVar5 * 2] = local_88;
        if (runtime_writeBarrier._0_4_ == 0) {
          (&et->size)[(long)puVar5 * 2] = (uintptr)local_20;
          prVar7 = prVar8;
          uVar9 = local_38;
          prVar10 = local_10;
          psVar11 = local_18;
        }
        else {
          runtime_gcWriteBarrier();
          et = extraout_RDX_00;
          prVar7 = prVar8;
          uVar9 = local_38;
          prVar10 = local_10;
          psVar11 = local_18;
        }
      }
      prVar4 = (runtime__type *)((long)&in_RDI->size + 1);
      if (lVar6 <= (long)prVar4) break;
      psVar11 = psVar11 + 1;
      puVar5 = cap_00;
      in_RDI = prVar4;
    }
    bVar13 = SBORROW8((long)local_30,(long)prVar7);
    lVar6 = (long)local_30 - (long)prVar7;
    bVar12 = lVar6 == 0;
  }
  if (!bVar12 && bVar13 == lVar6 < 0) {
    puVar5 = cap_00 + 1;
    if (puVar3 < puVar5) {
      old_00.len = (int)puVar5;
      old_00.array = puVar3;
      old_00.cap = (int)in_RDI;
      runtime_growslice(et,old_00,(int)cap_00);
      puVar5 = (uint8 *)(local_88 + 1);
      et = local_90;
      puVar3 = local_80;
      uVar9 = local_38;
      prVar10 = local_10;
    }
    (&et->ptrdata)[(long)cap_00 * 2] = uVar9;
    if (runtime_writeBarrier._0_4_ == 0) {
      (&et->size)[(long)cap_00 * 2] = (uintptr)prVar10;
      cap_00 = puVar5;
    }
    else {
      runtime_gcWriteBarrierR9();
      et = extraout_RAX_01;
      cap_00 = puVar5;
    }
  }
  _Var17.len = (int)puVar3;
  _Var17.array = (string *)et;
  _Var17.cap = (int)cap_00;
  return _Var17;
}

