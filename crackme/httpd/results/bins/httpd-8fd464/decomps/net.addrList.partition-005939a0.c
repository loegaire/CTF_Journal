
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.addrList.partition(net.addrList addrs, func(net.Addr)_bool * *
   strategy, net.addrList primaries, net.addrList fallbacks) */

multireturn_net_addrList_net_addrList_
net_addrList_partition(net_addrList addrs,func_net_Addr__bool **strategy)

{
  void *pvVar1;
  runtime_itab *prVar2;
  byte bVar3;
  uint extraout_EAX;
  uint uVar4;
  runtime__type *prVar5;
  runtime__type *prVar6;
  long lVar7;
  long lVar8;
  long extraout_RDX;
  runtime__type *prVar9;
  runtime__type *prVar10;
  runtime__type *cap;
  runtime__type *in_R8;
  runtime__type *et;
  long in_FS_OFFSET;
  runtime_slice old;
  runtime_slice old_00;
  net_Addr nVar12;
  multireturn_net_addrList_net_addrList_ mVar13;
  net_addrList addrs_spill;
  func_net_Addr__bool **strategy_spill;
  runtime__type *local_90;
  long local_78;
  long local_70;
  runtime__type *local_68;
  long local_20;
  long local_18;
  net_Addr *local_10;
  runtime__type *prVar11;
  
                    /* Unresolved local var: bool primaryLabel@[???] */
  while (&local_20 <= *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: net.Addr addr@[???] */
  if (addrs_spill.len < 1) {
    prVar5 = (runtime__type *)0x0;
    prVar6 = (runtime__type *)0x0;
    prVar9 = (runtime__type *)0x0;
    local_18 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = 0;
    uVar4 = 0;
    prVar10 = (runtime__type *)0x0;
    prVar9 = (runtime__type *)0x0;
    local_18 = 0;
    prVar6 = (runtime__type *)0x0;
    lVar8 = 0;
    et = (runtime__type *)0x0;
    while( true ) {
      pvVar1 = (addrs_spill.array)->data;
      prVar2 = (addrs_spill.array)->tab;
      nVar12.data = prVar10;
      nVar12.tab = (runtime_itab *)prVar9;
      prVar11 = prVar9;
      local_20 = lVar8;
      local_10 = addrs_spill.array;
      (**strategy_spill)(nVar12,(bool *)strategy_spill);
      bVar3 = (byte)local_90;
      if ((lVar7 == 0) || (old_00.array = (ulong)(byte)uVar4, (byte)uVar4 == (byte)local_90)) {
        cap = (runtime__type *)((long)&prVar10->size + 1);
        lVar8 = local_18;
        if (prVar9 < cap) {
          old.len = local_18;
          old.array = prVar10;
          old.cap = (int)prVar11;
          runtime_growslice((runtime__type *)&DAT_0023e7c0,old,(int)cap);
          cap = (runtime__type *)(local_70 + 1);
          lVar8 = local_78;
          prVar9 = local_68;
          local_90 = prVar10;
        }
        uVar4 = (uint)bVar3;
        *(runtime_itab **)(lVar8 + (long)prVar10 * 0x10) = prVar2;
        prVar5 = et;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(void **)(lVar8 + 8 + (long)prVar10 * 0x10) = pvVar1;
          local_18 = lVar8;
          prVar10 = cap;
          lVar8 = local_20;
        }
        else {
          runtime_gcWriteBarrierBX();
          local_18 = extraout_RDX;
          prVar10 = cap;
          lVar8 = local_20;
          uVar4 = extraout_EAX;
        }
      }
      else {
        prVar5 = (runtime__type *)((long)&et->size + 1);
        lVar8 = local_20;
        if (prVar6 < prVar5) {
          old_00.len = (int)&DAT_0023e7c0;
          old_00.cap = (int)prVar11;
          runtime_growslice(et,old_00,(int)prVar5);
          prVar5 = (runtime__type *)(local_70 + 1);
          prVar6 = local_68;
          lVar8 = local_78;
          local_90 = et;
        }
        uVar4 = uVar4 & 0xff;
        *(runtime_itab **)(lVar8 + (long)et * 0x10) = prVar2;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(void **)(lVar8 + 8 + (long)et * 0x10) = pvVar1;
        }
        else {
          runtime_gcWriteBarrier();
        }
      }
      lVar7 = lVar7 + 1;
      in_R8 = prVar9;
      if (addrs_spill.len <= lVar7) break;
      addrs_spill.array = local_10 + 1;
                    /* Unresolved local var: bool label@[???] */
      et = prVar5;
    }
  }
  mVar13.primaries.len = (int)prVar9;
  mVar13.primaries.array = (net_Addr *)prVar5;
  mVar13.fallbacks.len = local_18;
  mVar13.fallbacks.array = (net_Addr *)lVar8;
  mVar13.primaries.cap = (int)prVar6;
  mVar13.fallbacks.cap = (int)in_R8;
  return mVar13;
}

