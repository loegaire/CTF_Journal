
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.goLookupIPFiles(string name, []net.IPAddr addrs) */

__net_IPAddr net_goLookupIPFiles(string name)

{
  runtime__type *cap;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  runtime__type *prVar4;
  runtime__type *prVar5;
  long lVar6;
  runtime__type *prVar7;
  runtime__type *src;
  long lVar9;
  runtime__type *prVar10;
  uint8 *puVar11;
  func_unsafe_Pointer__unsafe_Pointer__bool **ppfVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  string host;
  string s;
  __string _Var14;
  __net_IPAddr addrs;
  __net_IPAddr _Var15;
  runtime_slice old;
  string name_spill;
  runtime__type *local_b8;
  runtime__type *local_b0;
  runtime__type *local_a8;
  long local_a0;
  long local_98;
  runtime__type *local_90;
  long local_48;
  runtime__type *local_40;
  long local_38;
  runtime__type *local_30;
  runtime__type *local_28;
  runtime__type *prStack_20;
  func_unsafe_Pointer__unsafe_Pointer__bool **local_18;
  uint8 *puStack_10;
  runtime__type *prVar8;
  
  prVar8 = local_b0;
  host.len = name.len;
  while (&local_48 <= *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  host.str = (uint8 *)name_spill.len;
                    /* Unresolved local var: string haddr@[???] */
  _Var14 = net_lookupStaticHost(host);
  lVar9 = _Var14.len;
  if ((long)local_b0 < 1) {
    prVar5 = (runtime__type *)0x0;
    prVar7 = (runtime__type *)0x0;
    local_38 = 0;
LAB_00589294:
    addrs.len = lVar9;
    addrs.array = (net_IPAddr *)prVar5;
    addrs.cap = (int)prVar7;
    prVar8 = prVar7;
    net_sortByRFC6724(addrs);
    _Var15.len = lVar9;
    _Var15.array = (net_IPAddr *)prVar7;
    _Var15.cap = (int)prVar8;
    return _Var15;
  }
  lVar9 = 0;
  prVar5 = (runtime__type *)0x0;
  prVar7 = (runtime__type *)0x0;
  local_38 = 0;
  local_40 = local_b8;
  do {
    uVar2 = local_40->ptrdata;
    uVar13 = uVar2;
                    /* Unresolved local var: int i@[???] */
    do {
      uVar3 = uVar13;
      uVar13 = uVar3 - 1;
      if ((long)uVar13 < 0) goto LAB_00589374;
    } while (*(char *)(local_40->size + uVar13) != '%');
    if ((long)uVar13 < 1) {
LAB_00589374:
      puVar11 = (uint8 *)0x0;
      ppfVar12 = (func_unsafe_Pointer__unsafe_Pointer__bool **)0x0;
    }
    else {
      if (uVar2 < uVar13) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      if (uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      puVar11 = (uint8 *)((uVar2 - uVar13) + -1);
      ppfVar12 = (func_unsafe_Pointer__unsafe_Pointer__bool **)
                 (local_40->size + (uVar3 & -(long)puVar11 >> 0x3f));
    }
    s.len = (int)prVar5;
    s.str = (uint8 *)prVar8;
    net_ParseIP(s);
    if (local_b8 != (runtime__type *)0x0) {
      local_30 = local_b8;
      local_28 = local_b0;
      prStack_20 = local_a8;
      cap = (runtime__type *)((long)&prVar5->size + 1);
      lVar6 = local_38;
      src = local_b0;
      prVar10 = cap;
      prVar4 = prVar7;
      local_18 = ppfVar12;
      puStack_10 = puVar11;
      if (prVar7 < cap) {
        old.len = local_38;
        old.array = prVar5;
        old.cap = (int)prVar7;
        runtime_growslice((runtime__type *)&DAT_0024c960,old,(int)cap);
        lVar6 = local_a0;
        src = (runtime__type *)(local_98 + 1U);
        prVar10 = (runtime__type *)(local_98 + 1U);
        prVar4 = local_90;
        local_b8 = prVar5;
        local_b0 = prVar7;
        local_a8 = cap;
      }
      prVar7 = prVar4;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(runtime__type **)(lVar6 + (long)prVar5 * 0x28) = local_30;
        lVar1 = lVar6 + (long)prVar5 * 0x28;
        *(runtime__type **)(lVar1 + 8) = local_28;
        *(runtime__type **)(lVar1 + 0x10) = prStack_20;
        *(func_unsafe_Pointer__unsafe_Pointer__bool ***)(lVar1 + 0x18) = local_18;
        *(uint8 **)(lVar1 + 0x20) = puStack_10;
        local_38 = lVar6;
        prVar5 = prVar10;
      }
      else {
        local_b8 = (runtime__type *)&local_30;
        local_48 = lVar6;
        runtime_typedmemmove(local_b8,(void *)((long)prVar5 * 5),src);
        local_38 = local_48;
        prVar5 = prVar10;
      }
    }
    lVar9 = lVar9 + 1;
    if ((long)prVar8 <= lVar9) goto LAB_00589294;
    local_40 = (runtime__type *)&local_40->hash;
                    /* Unresolved local var: string haddr@[???]
                       Unresolved local var: string zone@[???]
                       Unresolved local var: net.IP ip@[???]
                       Unresolved local var: net.IPAddr addr@[???] */
  } while( true );
}

