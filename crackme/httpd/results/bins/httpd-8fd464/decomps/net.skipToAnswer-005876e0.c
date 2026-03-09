
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.skipToAnswer(vendor/golang.org/x/net/dns/dnsmessage.Parser *
   p, vendor/golang.org/x/net/dns/dnsmessage.Type qtype, error ~r2) */

error net_skipToAnswer(vendor_golang_org_x_net_dns_dnsmessage_Parser *p,
                      vendor_golang_org_x_net_dns_dnsmessage_Type qtype)

{
  void *y;
  long lVar1;
  long in_FS_OFFSET;
  error eVar2;
  error eVar3;
  error eVar4;
  error eVar5;
  undefined1 auVar6 [16];
  vendor_golang_org_x_net_dns_dnsmessage_Parser *p_spill;
  vendor_golang_org_x_net_dns_dnsmessage_Type qtype_spill;
  undefined8 local_458;
  undefined4 uStack_450;
  undefined4 auStack_44c [25];
  undefined1 local_3e8 [160];
  undefined8 local_348;
  void *local_340;
  long local_338;
  undefined4 local_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 auStack_320 [61];
  vendor_golang_org_x_net_dns_dnsmessage_Type local_22c;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 auStack_108 [64];
  
  eVar2.data = (void *)(ulong)qtype;
  while (local_3e8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  do {
    local_220 = 0;
    uStack_218 = 0;
    FUN_0051a154((long)&uStack_218 + 4);
    vendor_golang_org_x_net_dns_dnsmessage___Parser__resourceHeader
              (p_spill,(vendor_golang_org_x_net_dns_dnsmessage_section)eVar2.data);
                    /* Unresolved local var: error err@[???]
                       Unresolved local var: vendor/golang.org/x/net/dns/dnsmessage.ResourceHeader
                       h@[???] */
    local_114 = (undefined4)local_458;
    uStack_110 = local_458._4_4_;
    uStack_10c = uStack_450;
    auStack_108[0] = auStack_44c[0];
    y = local_340;
    FUN_0051a460(auStack_108,auStack_44c,local_348);
    local_220._0_4_ = local_114;
    local_220._4_4_ = uStack_110;
    uStack_218._0_4_ = uStack_10c;
    uStack_218._4_4_ = auStack_108[0];
    FUN_0051a460((long)&uStack_218 + 4,auStack_108);
    local_32c = (undefined4)local_220;
    uStack_328 = local_220._4_4_;
    uStack_324 = (undefined4)uStack_218;
    auStack_320[0] = uStack_218._4_4_;
    auVar6 = FUN_0051a460(auStack_320,(long)&uStack_218 + 4);
    eVar2.data = vendor_golang_org_x_net_dns_dnsmessage_ErrSectionDone.data;
    lVar1 = auVar6._8_8_;
    if (vendor_golang_org_x_net_dns_dnsmessage_ErrSectionDone.tab == auVar6._0_8_) {
      local_458 = vendor_golang_org_x_net_dns_dnsmessage_ErrSectionDone.data;
      local_338 = lVar1;
      runtime_ifaceeq(auVar6._0_8_,vendor_golang_org_x_net_dns_dnsmessage_ErrSectionDone.data,y);
      lVar1 = local_338;
      if ((char)uStack_450 != '\0') {
        eVar5.data = eVar2.data;
        eVar5.tab = net_errNoSuchHost.tab;
        return eVar5;
      }
    }
    if (lVar1 != 0) {
      eVar4.data = eVar2.data;
      eVar4.tab = net_errCannotUnmarshalDNSMessage.tab;
      return eVar4;
    }
    eVar3.tab = (runtime_itab *)(ulong)qtype_spill;
    if (local_22c == qtype_spill) {
      eVar3.data = eVar2.data;
      return eVar3;
    }
    eVar2 = vendor_golang_org_x_net_dns_dnsmessage___Parser__skipResource
                      (p_spill,(vendor_golang_org_x_net_dns_dnsmessage_section)eVar2.data);
  } while (local_458 == (void *)0x0);
  eVar2.tab = net_errCannotUnmarshalDNSMessage.tab;
  return eVar2;
}

