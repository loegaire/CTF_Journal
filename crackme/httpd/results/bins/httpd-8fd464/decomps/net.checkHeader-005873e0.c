
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.checkHeader(vendor/golang.org/x/net/dns/dnsmessage.Parser * p,
   vendor/golang.org/x/net/dns/dnsmessage.Header h, error ~r2) */

error net_checkHeader(vendor_golang_org_x_net_dns_dnsmessage_Parser *p,
                     vendor_golang_org_x_net_dns_dnsmessage_Header h)

{
  byte bVar1;
  runtime_itab *tab;
  long in_FS_OFFSET;
  error eVar2;
  error eVar3;
  error eVar4;
  error eVar5;
  error eVar6;
  error eVar7;
  undefined1 auVar8 [16];
  vendor_golang_org_x_net_dns_dnsmessage_Parser *p_spill;
  vendor_golang_org_x_net_dns_dnsmessage_Header h_spill;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 auStack_344 [25];
  undefined1 local_2e0 [160];
  undefined8 local_240;
  void *local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 auStack_224 [64];
  undefined8 local_124;
  undefined8 uStack_11c;
  void *local_18;
  runtime_itab *local_10;
  
  eVar2.data = (void *)CONCAT53((int5)((ulong)h._0_8_ >> 0x18),h._0_3_);
                    /* Unresolved local var: error err@[???]
                       Unresolved local var: void * ~R1.data@[???] */
  while (local_2e0 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (h_spill.RCode == 3) {
    eVar7.data = eVar2.data;
    eVar7.tab = net_errNoSuchHost.tab;
    return eVar7;
  }
  local_124 = 0;
  uStack_11c = 0;
  FUN_0051a154((long)&uStack_11c + 4);
  vendor_golang_org_x_net_dns_dnsmessage___Parser__resourceHeader
            (p_spill,(vendor_golang_org_x_net_dns_dnsmessage_section)h.ID);
  local_230 = local_350;
  uStack_22c = uStack_34c;
  uStack_228 = uStack_348;
  auStack_224[0] = auStack_344[0];
  FUN_0051a460(auStack_224,auStack_344,local_240);
  local_124 = CONCAT44(uStack_22c,local_230);
  uStack_11c = CONCAT44(auStack_224[0],uStack_228);
  auVar8 = FUN_0051a460((long)&uStack_11c + 4,auStack_224);
  tab = auVar8._0_8_;
  if (auVar8._8_8_ != 0) {
    if (vendor_golang_org_x_net_dns_dnsmessage_ErrSectionDone.tab == tab) {
      local_18 = local_238;
      local_10 = tab;
      runtime_ifaceeq(tab,eVar2.data,local_238);
      bVar1 = (byte)uStack_348 ^ 1;
      tab = local_10;
      local_238 = local_18;
    }
    else {
      bVar1 = 1;
    }
    if (bVar1 != 0) {
      eVar2.tab = net_errCannotUnmarshalDNSMessage.tab;
      return eVar2;
    }
  }
  if (((h_spill.RCode == 0) && (!h_spill.Authoritative)) && (!h_spill.RecursionAvailable)) {
    if (vendor_golang_org_x_net_dns_dnsmessage_ErrSectionDone.tab == tab) {
      runtime_ifaceeq(tab,eVar2.data,local_238);
    }
    else {
      uStack_348._0_1_ = 0;
    }
    if ((byte)uStack_348 != 0) {
      eVar3.data = eVar2.data;
      eVar3.tab = net_errLameReferral.tab;
      return eVar3;
    }
  }
  eVar6.tab = (runtime_itab *)(ulong)h_spill.RCode;
  if ((h_spill.RCode != 0) && (h_spill.RCode != 3)) {
    if (h_spill.RCode == 2) {
      eVar4.data = eVar2.data;
      eVar4.tab = net_errServerTemporarilyMisbehaving.tab;
      return eVar4;
    }
    eVar5.data = eVar2.data;
    eVar5.tab = net_errServerMisbehaving.tab;
    return eVar5;
  }
  eVar6.data = eVar2.data;
  return eVar6;
}

