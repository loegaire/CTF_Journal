
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*Resolver).goLookupIPCNAMEOrder(net.Resolver * r,
   context.Context ctx, string network, string name, net.hostLookupOrder order, []net.IPAddr addrs,
   vendor/golang.org/x/net/dns/dnsmessage.Name cname, error err) */

multireturn___net_IPAddr_vendor_golang_org_x_net_dns_dnsmessage_Name_error__x86_64
net___Resolver__goLookupIPCNAMEOrder
          (net_Resolver *r,context_Context ctx,string network,string name,net_hostLookupOrder order)

{
  runtime_itab *prVar1;
  int iVar2;
  undefined1 auVar3 [16];
  runtime_interfacetype *prVar4;
  vendor_golang_org_x_net_dns_dnsmessage_Name vVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *extraout_RAX;
  undefined8 uVar12;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *pvVar13;
  undefined8 uVar14;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *pvVar15;
  runtime_interfacetype *prVar16;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *pvVar17;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *extraout_RAX_00;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *extraout_RAX_01;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *extraout_RAX_02;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *extraout_RAX_03;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *extraout_RAX_04;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *extraout_RAX_05;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *extraout_RAX_06;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *extraout_RAX_07;
  char cVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *extraout_RDX;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *pvVar24;
  undefined1 *puVar25;
  uint8 uVar64;
  uint8 uVar66;
  uint8 uVar68;
  uint8 uVar70;
  uint8 uVar72;
  uint8 uVar74;
  uint8 uVar76;
  undefined8 uVar26;
  int iVar27;
  uint8 uVar78;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *pvVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  vendor_golang_org_x_net_dns_dnsmessage_section sec;
  uint8 uVar79;
  uint8 uVar80;
  uint8 uVar83;
  uint8 uVar87;
  uint8 uVar91;
  uint8 uVar95;
  uint8 uVar99;
  uint8 uVar103;
  int iVar31;
  undefined8 uVar32;
  uint8 uVar84;
  uint8 uVar88;
  uint8 uVar92;
  uint8 uVar96;
  uint8 uVar100;
  uint8 uVar104;
  uint8 uVar107;
  uint8 uVar108;
  undefined8 uVar33;
  undefined8 uVar34;
  vendor_golang_org_x_net_dns_dnsmessage_Parser **ppvVar35;
  undefined8 uVar36;
  uint8 *puVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  int *piVar41;
  uint8 **ppuVar42;
  long in_FS_OFFSET;
  bool bVar43;
  string name_00;
  string name_01;
  string a0;
  string name_02;
  string s;
  string name_03;
  runtime_iface rVar44;
  __net_IPAddr _Var45;
  string a1;
  runtime_slice old;
  runtime_slice old_00;
  multireturn___net_IPAddr_vendor_golang_org_x_net_dns_dnsmessage_Name_error__x86_64 mVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [272];
  undefined1 auVar49 [272];
  undefined1 auVar50 [272];
  undefined1 auVar51 [272];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [24];
  undefined1 auVar57 [24];
  undefined1 auVar58 [24];
  undefined1 auVar59 [24];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  vendor_golang_org_x_net_dns_dnsmessage_Name cname_return_result_alias;
  net_Resolver *r_spill;
  context_Context ctx_spill;
  string network_spill;
  string name_spill;
  net_hostLookupOrder order_spill;
  char in_stack_0000015f;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_7f0;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_7e8;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_7e0;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_7d8;
  undefined1 local_790 [160];
  undefined8 local_6f0;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_6e8;
  char local_689;
  undefined2 local_688;
  undefined2 local_686;
  undefined4 local_684;
  long local_680;
  runtime_interfacetype *local_678;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_670;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_668;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_660;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_658;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_650;
  runtime_interfacetype *local_648;
  long local_640;
  runtime_interfacetype *local_638;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_630;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_628;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_620;
  long local_618;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_610;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_608;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_600;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_5f4;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *pvStack_5ec;
  undefined4 local_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 auStack_5b8 [60];
  char local_4c5;
  short local_4c4;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 auStack_4ac [64];
  undefined8 local_3ac;
  undefined8 uStack_3a4;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_2a0;
  code **local_298;
  undefined4 *local_290;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_288;
  uint8 *local_280;
  net_dnsConfig *local_278;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_270;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_268;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_260;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_258;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_250;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_248;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_240;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_238;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_230;
  undefined1 local_228 [24];
  undefined1 local_210 [16];
  int local_200;
  int iStack_1f8;
  undefined1 local_1f0 [48];
  int local_1c0;
  uint8 auStack_1b8 [8];
  uint8 local_1b0 [8];
  net_dnsConfig *pnStack_1a8;
  code *local_1a0;
  uint8 auStack_198 [8];
  uint8 local_190 [8];
  uint8 auStack_188 [8];
  net_dnsConfig *local_180;
  int iStack_178;
  vendor_golang_org_x_net_dns_dnsmessage_Parser local_170;
  uint8 *local_28;
  int local_20;
  runtime_interfacetype *local_18;
  vendor_golang_org_x_net_dns_dnsmessage_Parser *local_10;
  undefined8 uVar65;
  undefined7 uVar67;
  undefined6 uVar69;
  undefined5 uVar71;
  undefined4 uVar73;
  undefined3 uVar75;
  undefined2 uVar77;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined7 uVar85;
  undefined7 uVar86;
  undefined6 uVar89;
  undefined6 uVar90;
  undefined5 uVar93;
  undefined5 uVar94;
  undefined4 uVar97;
  undefined4 uVar98;
  undefined3 uVar101;
  undefined3 uVar102;
  undefined2 uVar105;
  undefined2 uVar106;
  
  iVar31 = network.len;
  name_02.len = ctx.tab;
                    /* Unresolved local var: net.dnsConfig * conf@[???]
                       Unresolved local var: chan_net.result.2 lane@[???]
                       Unresolved local var:
                       func(string,_vendor/golang.org/x/net/dns/dnsmessage.Type) * * queryFn@[???]
                       Unresolved local var:
                       func(string,_vendor/golang.org/x/net/dns/dnsmessage.Type)_net.result.2 * *
                       responseFn@[???]
                       Unresolved local var: []vendor/golang.org/x/net/dns/dnsmessage.Type
                       qtypes@[???]
                       Unresolved local var: error lastErr@[???] */
  while (local_790 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  FUN_0051a154(cname_return_result_alias.Data + 0x58);
  if ((cname_return_result_alias.Data._56_8_ == 1) || (cname_return_result_alias.Data._56_8_ == 3))
  {
    name_02.str = (uint8 *)cname_return_result_alias.Data._40_8_;
    _Var45 = net_goLookupIPFiles(name_02);
    iVar27 = _Var45.len;
    if ((0 < (long)uStack_7f8) ||
       (pvVar17 = uStack_7f8, local_600 = local_7f0, pvVar13 = uStack_800,
       iVar27 = cname_return_result_alias.Data._56_8_, cname_return_result_alias.Data._56_8_ == 3))
    {
      puVar37 = cname_return_result_alias.Data + 0x58;
      auVar47 = FUN_0051a154();
      vVar5 = cname_return_result_alias;
      uVar32 = auVar47._8_8_;
      uVar11 = auVar47._0_8_;
      cname_return_result_alias.Data[0x40] = (char)uVar11;
      cname_return_result_alias.Data[0x41] = (char)((ulong)uVar11 >> 8);
      cname_return_result_alias.Data[0x42] = (char)((ulong)uVar11 >> 0x10);
      cname_return_result_alias.Data[0x43] = (char)((ulong)uVar11 >> 0x18);
      cname_return_result_alias.Data[0x44] = (char)((ulong)uVar11 >> 0x20);
      cname_return_result_alias.Data[0x45] = (char)((ulong)uVar11 >> 0x28);
      cname_return_result_alias.Data[0x46] = (char)((ulong)uVar11 >> 0x30);
      cname_return_result_alias.Data[0x47] = (char)((ulong)uVar11 >> 0x38);
      cname_return_result_alias.Data._72_8_ = uStack_7f8;
      cname_return_result_alias._88_168_ = vVar5._88_168_;
      cname_return_result_alias.Data[0x50] = (char)uVar32;
      cname_return_result_alias.Data[0x51] = (char)((ulong)uVar32 >> 8);
      cname_return_result_alias.Data[0x52] = (char)((ulong)uVar32 >> 0x10);
      cname_return_result_alias.Data[0x53] = (char)((ulong)uVar32 >> 0x18);
      cname_return_result_alias.Data[0x54] = (char)((ulong)uVar32 >> 0x20);
      cname_return_result_alias.Data[0x55] = (char)((ulong)uVar32 >> 0x28);
      cname_return_result_alias.Data[0x56] = (char)((ulong)uVar32 >> 0x30);
      cname_return_result_alias.Data[0x57] = (char)((ulong)uVar32 >> 0x38);
      uVar38 = puVar37;
      uVar80 = (char)iVar31;
      register0x00000031 = (char)((ulong)iVar31 >> 8);
      register0x00000032 = (char)((ulong)iVar31 >> 0x10);
      register0x00000033 = (char)((ulong)iVar31 >> 0x18);
      register0x00000034 = (char)((ulong)iVar31 >> 0x20);
      register0x00000035 = (char)((ulong)iVar31 >> 0x28);
      register0x00000036 = (char)((ulong)iVar31 >> 0x30);
      register0x00000037 = (char)((ulong)iVar31 >> 0x38);
      auVar61 = CONCAT88(uVar38,uVar82);
      uVar64 = (char)iVar27;
      register0x00000019 = (char)((ulong)iVar27 >> 8);
      register0x0000001a = (char)((ulong)iVar27 >> 0x10);
      register0x0000001b = (char)((ulong)iVar27 >> 0x18);
      register0x0000001c = (char)((ulong)iVar27 >> 0x20);
      register0x0000001d = (char)((ulong)iVar27 >> 0x28);
      register0x0000001e = (char)((ulong)iVar27 >> 0x30);
      register0x0000001f = (char)((ulong)iVar27 >> 0x38);
      auVar53 = CONCAT88(uVar11,uVar65);
      uVar21 = uStack_7f8;
      auVar57 = CONCAT816(uVar21,auVar61);
      auVar49 = CONCAT25616(cname_return_result_alias,auVar53);
      mVar46 = (multireturn___net_IPAddr_vendor_golang_org_x_net_dns_dnsmessage_Name_error__x86_64)
               CONCAT27224(auVar49,auVar57);
      return mVar46;
    }
  }
  else {
    pvVar17 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0;
    local_600 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0;
    pvVar13 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0;
  }
  lVar19 = cname_return_result_alias.Data._48_8_;
  s.len = (int)pvVar13;
  s.str = (uint8 *)cname_return_result_alias.Data._40_8_;
  uVar32 = cname_return_result_alias.Data._48_8_;
  local_608 = pvVar17;
  local_240 = pvVar13;
  net_isDomainName(s);
  if ((char)uStack_800 == '\0') {
    (*(code *)(net_errNoSuchHost.tab)->fun[0])();
    local_248 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)lVar19;
    local_600 = uStack_800;
    runtime_newobject((runtime__type *)lVar19);
    *(vendor_golang_org_x_net_dns_dnsmessage_Parser **)(lVar19 + 8) = local_600;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(vendor_golang_org_x_net_dns_dnsmessage_Parser **)lVar19 = local_248;
    }
    else {
      runtime_gcWriteBarrier();
    }
    *(undefined8 *)(lVar19 + 0x18) = cname_return_result_alias.Data._48_8_;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)(lVar19 + 0x10) = cname_return_result_alias.Data._40_8_;
    }
    else {
      runtime_gcWriteBarrierDX();
    }
    *(undefined1 *)(lVar19 + 0x32) = 1;
    puVar37 = cname_return_result_alias.Data + 0x58;
    uVar10 = FUN_0051a154();
    cname_return_result_alias.Data._0_88_ =
         ZEXT6488((undefined1  [64])cname_return_result_alias.Data._0_64_);
    uVar36 = puVar37;
    uVar79 = (uint8)uVar32;
    register0x00000031 = SUB81(uVar32,1);
    register0x00000032 = SUB81(uVar32,2);
    register0x00000033 = SUB81(uVar32,3);
    register0x00000034 = SUB81(uVar32,4);
    register0x00000035 = SUB81(uVar32,5);
    register0x00000036 = SUB81(uVar32,6);
    register0x00000037 = SUB81(uVar32,7);
    auVar60 = CONCAT88(uVar36,uVar81);
    uVar26 = pvVar13;
    auVar52 = CONCAT88(uVar10,uVar26);
    uVar20 = go_itab__net_DNSError_error;
    auVar56 = CONCAT816(uVar20,auVar60);
    auVar48 = CONCAT25616(cname_return_result_alias,auVar52);
    mVar46 = (multireturn___net_IPAddr_vendor_golang_org_x_net_dns_dnsmessage_Name_error__x86_64)
             CONCAT27224(auVar48,auVar56);
    return mVar46;
  }
  uStack_800 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x10;
  name_00.len = (int)pvVar17;
  name_00.str = (uint8 *)pvVar13;
  net___resolverConfig__tryUpdate((net_resolverConfig *)&DAT_00299295,name_00);
  LOCK();
  iVar2 = net_resolvConf.mu.readerCount + 1;
  UNLOCK();
  iVar8 = net_resolvConf.mu.readerCount + 1;
  net_resolvConf.mu.readerCount = iVar2;
  if (iVar8 < 0) {
    uStack_800 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0;
    sync_runtime_SemacquireMutex(&net_resolvConf.mu.readerSem,SUB81(pvVar13,0),0x7a00c0);
  }
  local_278 = net_resolvConf.dnsConfig;
                    /* Unresolved local var: int32 r@[???] */
  LOCK();
  iVar8 = net_resolvConf.mu.readerCount + -1;
  UNLOCK();
  iVar2 = net_resolvConf.mu.readerCount + -1;
  net_resolvConf.mu.readerCount = iVar8;
  if (iVar2 < 0) {
    sync___RWMutex__rUnlockSlow(&net_resolvConf.mu,(int32)pvVar13);
  }
  runtime_makechan((runtime_chantype *)&DAT_00222d60,(int)pvVar13);
  vVar5 = cname_return_result_alias;
  local_684 = 0x1c0001;
                    /* Unresolved local var: uint8 n@[???] */
  if (cname_return_result_alias.Data._32_8_ == 0) {
    cVar18 = '\0';
  }
  else {
    cVar18 = *(char *)(cname_return_result_alias.Data._32_8_ + -1 +
                      cname_return_result_alias.Data._24_8_);
    if ((cVar18 != '4') && (cVar18 != '6')) {
      cVar18 = '\0';
    }
  }
  if (cVar18 == '4') {
    local_686 = 1;
    local_680 = 1;
    local_290 = (undefined4 *)&local_686;
  }
  else if (cVar18 == '6') {
    local_688 = 0x1c;
    local_680 = 1;
    local_290 = (undefined4 *)&local_688;
  }
  else {
    local_680 = 2;
    local_290 = &local_684;
  }
                    /* Unresolved local var: string fqdn@[???]
                       Unresolved local var: bool hitStrictError@[???]
                       Unresolved local var: vendor/golang.org/x/net/dns/dnsmessage.Type qtype@[???]
                        */
  if (local_278->singleRequest == false) {
    local_298 = &local_1a0;
    local_1a0 = net___Resolver__goLookupIPCNAMEOrder_func3;
    auStack_198[0] = cname_return_result_alias.Data[0];
    auStack_198[1] = cname_return_result_alias.Data[1];
    auStack_198[2] = cname_return_result_alias.Data[2];
    auStack_198[3] = cname_return_result_alias.Data[3];
    auStack_198[4] = cname_return_result_alias.Data[4];
    auStack_198[5] = cname_return_result_alias.Data[5];
    auStack_198[6] = cname_return_result_alias.Data[6];
    auStack_198[7] = cname_return_result_alias.Data[7];
    local_190[0] = cname_return_result_alias.Data[8];
    local_190[1] = cname_return_result_alias.Data[9];
    local_190[2] = cname_return_result_alias.Data[10];
    local_190[3] = cname_return_result_alias.Data[0xb];
    local_190[4] = cname_return_result_alias.Data[0xc];
    local_190[5] = cname_return_result_alias.Data[0xd];
    local_190[6] = cname_return_result_alias.Data[0xe];
    local_190[7] = cname_return_result_alias.Data[0xf];
    auStack_188[0] = cname_return_result_alias.Data[0x10];
    auStack_188[1] = cname_return_result_alias.Data[0x11];
    auStack_188[2] = cname_return_result_alias.Data[0x12];
    auStack_188[3] = cname_return_result_alias.Data[0x13];
    auStack_188[4] = cname_return_result_alias.Data[0x14];
    auStack_188[5] = cname_return_result_alias.Data[0x15];
    auStack_188[6] = cname_return_result_alias.Data[0x16];
    auStack_188[7] = cname_return_result_alias.Data[0x17];
    local_180 = local_278;
    iStack_178 = (int)uStack_800;
    local_228._0_8_ = net___Resolver__goLookupIPCNAMEOrder_func4;
    local_228._8_8_ = uStack_800;
    pvVar17 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)local_228;
  }
  else {
    local_1f0._40_8_ = net___Resolver__goLookupIPCNAMEOrder_func2;
    local_1c0._0_1_ = cname_return_result_alias.Data[0];
    local_1c0._1_1_ = cname_return_result_alias.Data[1];
    local_1c0._2_1_ = cname_return_result_alias.Data[2];
    local_1c0._3_1_ = cname_return_result_alias.Data[3];
    local_1c0._4_1_ = cname_return_result_alias.Data[4];
    local_1c0._5_1_ = cname_return_result_alias.Data[5];
    local_1c0._6_1_ = cname_return_result_alias.Data[6];
    local_1c0._7_1_ = cname_return_result_alias.Data[7];
    auStack_1b8[0] = cname_return_result_alias.Data[8];
    auStack_1b8[1] = cname_return_result_alias.Data[9];
    auStack_1b8[2] = cname_return_result_alias.Data[10];
    auStack_1b8[3] = cname_return_result_alias.Data[0xb];
    auStack_1b8[4] = cname_return_result_alias.Data[0xc];
    auStack_1b8[5] = cname_return_result_alias.Data[0xd];
    auStack_1b8[6] = cname_return_result_alias.Data[0xe];
    auStack_1b8[7] = cname_return_result_alias.Data[0xf];
    local_1b0[0] = cname_return_result_alias.Data[0x10];
    local_1b0[1] = cname_return_result_alias.Data[0x11];
    local_1b0[2] = cname_return_result_alias.Data[0x12];
    local_1b0[3] = cname_return_result_alias.Data[0x13];
    local_1b0[4] = cname_return_result_alias.Data[0x14];
    local_1b0[5] = cname_return_result_alias.Data[0x15];
    local_1b0[6] = cname_return_result_alias.Data[0x16];
    local_1b0[7] = cname_return_result_alias.Data[0x17];
    pnStack_1a8 = local_278;
    local_298 = (code **)&PTR_net___Resolver__goLookupIPCNAMEOrder_func1_002b3408;
    pvVar17 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)(local_1f0 + 0x28);
  }
                    /* Unresolved local var: vendor/golang.org/x/net/dns/dnsmessage.Type qtype@[???]
                       Unresolved local var: net.result.2 result@[???] */
  cname_return_result_alias.Data._40_8_ = vVar5.Data._40_8_;
  cname_return_result_alias.Data._48_8_ = vVar5.Data._48_8_;
  uStack_800 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)
               cname_return_result_alias.Data._48_8_;
  name_01.len._0_1_ = cname_return_result_alias.Data[0x30];
  name_01.len._1_1_ = cname_return_result_alias.Data[0x31];
  name_01.len._2_1_ = cname_return_result_alias.Data[0x32];
  name_01.len._3_1_ = cname_return_result_alias.Data[0x33];
  name_01.len._4_1_ = cname_return_result_alias.Data[0x34];
  name_01.len._5_1_ = cname_return_result_alias.Data[0x35];
  name_01.len._6_1_ = cname_return_result_alias.Data[0x36];
  name_01.len._7_1_ = cname_return_result_alias.Data[0x37];
  name_01.str = (uint8 *)local_278;
  local_2a0 = pvVar17;
  net___dnsConfig__nameList((net_dnsConfig *)cname_return_result_alias.Data._40_8_,name_01);
  cname_return_result_alias = vVar5;
  pvVar13 = local_608;
  pvVar28 = local_600;
  pvVar24 = local_240;
  if ((long)local_7f0 < 1) {
    pvVar9 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0;
    puVar25 = (undefined1 *)0x0;
LAB_00589ca8:
                    /* Unresolved local var: bool ok@[???] */
    local_678 = (runtime_interfacetype *)puVar25;
    local_288 = pvVar9;
    if (puVar25 == go_itab__net_DNSError_error) {
      *(undefined8 *)&pvVar9->header = cname_return_result_alias.Data._48_8_;
      pvVar17 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)
                cname_return_result_alias.Data._40_8_;
      if (runtime_writeBarrier._0_4_ == 0) {
        (pvVar9->msg).cap = cname_return_result_alias.Data._40_8_;
      }
      else {
        runtime_gcWriteBarrierR9();
        pvVar9 = extraout_RAX;
        pvVar13 = extraout_RDX;
      }
    }
    _Var45.len = (int)pvVar28;
    _Var45.array = (net_IPAddr *)pvVar9;
    _Var45.cap = (int)puVar25;
    local_608 = pvVar28;
    local_600 = pvVar13;
    local_240 = pvVar24;
    net_sortByRFC6724(_Var45);
    pvVar13 = local_600;
    pvVar24 = local_600;
    pvVar9 = local_608;
    pvVar15 = local_240;
    if (local_600 == (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0) {
      puVar25 = (undefined1 *)cname_return_result_alias.Data._56_8_;
      if (cname_return_result_alias.Data._56_8_ == 2) {
        name_03.len = (int)pvVar28;
        name_03.str = (uint8 *)cname_return_result_alias.Data._48_8_;
        _Var45 = net_goLookupIPFiles(name_03);
        pvVar13 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)_Var45.array;
        puVar25 = (undefined1 *)_Var45.cap;
        pvVar24 = uStack_7f8;
        pvVar9 = local_7f0;
        pvVar15 = pvVar28;
      }
      if ((pvVar24 == (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0) &&
         (pvVar13 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0,
         local_678 != (runtime_interfacetype *)0x0)) {
        puVar37 = cname_return_result_alias.Data + 0x58;
        FUN_0051a154();
        cname_return_result_alias.Data._0_88_ =
             ZEXT6488((undefined1  [64])cname_return_result_alias.Data._0_64_);
        uVar39 = puVar37;
        uVar33 = pvVar15;
        auVar62 = CONCAT88(uVar39,uVar33);
        uVar12 = local_288;
        uVar29 = pvVar9;
        auVar54 = CONCAT88(uVar12,uVar29);
        uVar22 = puVar25;
        auVar58 = CONCAT816(uVar22,auVar62);
        auVar50 = CONCAT25616(cname_return_result_alias,auVar54);
        mVar46 = (multireturn___net_IPAddr_vendor_golang_org_x_net_dns_dnsmessage_Name_error__x86_64
                 )CONCAT27224(auVar50,auVar58);
        return mVar46;
      }
    }
    vVar5 = cname_return_result_alias;
    cname_return_result_alias.Data._64_8_ = pvVar15;
    cname_return_result_alias.Data._72_8_ = pvVar24;
    cname_return_result_alias._88_168_ = vVar5._88_168_;
    cname_return_result_alias.Data._80_8_ = pvVar9;
    uVar40 = pvVar17;
    uVar34 = pvVar15;
    auVar63 = CONCAT88(uVar40,uVar34);
    uVar14 = pvVar13;
    uVar30 = pvVar9;
    auVar55 = CONCAT88(uVar14,uVar30);
    uVar23 = puVar25;
    auVar59 = CONCAT816(uVar23,auVar63);
    auVar51 = CONCAT25616(cname_return_result_alias,auVar55);
    mVar46 = (multireturn___net_IPAddr_vendor_golang_org_x_net_dns_dnsmessage_Name_error__x86_64)
             CONCAT27224(auVar51,auVar59);
    return mVar46;
  }
  local_610 = local_7f0;
  lVar19 = 0;
  puVar25 = (undefined1 *)0x0;
  pvVar9 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0;
  pvVar15 = local_7f0;
  local_250 = uStack_7f8;
  do {
                    /* Unresolved local var: net.Error nerr@[???] */
    local_670 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)(local_250->msg).len;
    local_280 = (local_250->msg).array;
    pvVar17 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0;
    local_678 = (runtime_interfacetype *)puVar25;
    local_618 = lVar19;
    local_608 = pvVar13;
    local_600 = pvVar28;
    local_288 = pvVar9;
    local_240 = pvVar24;
    while ((long)pvVar17 < local_680) {
      uStack_800 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)
                   ((ulong)uStack_800 & 0xffffffffffff0000);
      local_620 = pvVar17;
      (**local_298)();
      pvVar15 = local_610;
      pvVar17 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)((long)&(local_620->msg).array + 1)
      ;
    }
    cVar18 = '\0';
    pvVar17 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0;
    puVar25 = (undefined1 *)local_678;
    pvVar9 = local_288;
    pvVar28 = local_600;
    pvVar13 = local_608;
    pvVar24 = local_240;
    while (local_808 = local_670, (long)pvVar17 < local_680) {
      prVar1 = (runtime_itab *)(local_2a0->msg).array;
      uStack_800 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)
                   CONCAT62(uStack_800._2_6_,*(undefined2 *)((long)local_290 + (long)pvVar17 * 2));
      local_689 = cVar18;
      local_638 = (runtime_interfacetype *)puVar25;
      local_630 = pvVar13;
      local_628 = pvVar28;
      local_600 = pvVar17;
      local_258 = pvVar24;
      local_248 = pvVar9;
      (*(code *)prVar1)();
      local_170.msg.array = (uint8 *)uStack_7f8;
      piVar41 = &local_170.msg.len;
      ppvVar35 = &local_7f0;
      FUN_0051a40c();
      prVar4 = local_18;
      auVar47._8_8_ = local_628;
      auVar47._0_8_ = local_258;
      prVar16 = local_638;
      pvVar13 = local_248;
      pvVar17 = local_630;
      if (local_18 == (runtime_interfacetype *)0x0) {
LAB_0058a23e:
        do {
          local_620 = auVar47._8_8_;
          local_240 = auVar47._0_8_;
          local_3ac = 0;
          uStack_3a4 = 0;
          local_678 = prVar16;
          local_608 = pvVar17;
          local_288 = pvVar13;
          pvVar17 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)
                    FUN_0051a154((long)&uStack_3a4 + 4);
          local_808 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)CONCAT71(local_808._1_7_,3);
          vendor_golang_org_x_net_dns_dnsmessage___Parser__resourceHeader(pvVar17,auVar47[8]);
          local_4b8 = (undefined4)uStack_800;
          uStack_4b4 = uStack_800._4_4_;
          uStack_4b0 = (undefined4)uStack_7f8;
          auStack_4ac[0] = uStack_7f8._4_4_;
          pvVar17 = local_6e8;
          FUN_0051a460(auStack_4ac,(long)&uStack_7f8 + 4,local_6f0);
          local_3ac = CONCAT44(uStack_4b4,local_4b8);
          uStack_3a4 = CONCAT44(auStack_4ac[0],uStack_4b0);
          FUN_0051a460((long)&uStack_3a4 + 4,auStack_4ac);
          local_5c4 = (undefined4)local_3ac;
          uStack_5c0 = local_3ac._4_4_;
          uStack_5bc = (undefined4)uStack_3a4;
          auStack_5b8[0] = uStack_3a4._4_4_;
          ppuVar42 = (uint8 **)auStack_5b8;
          auVar47 = FUN_0051a460(ppuVar42,(long)&uStack_3a4 + 4);
          lVar19 = auVar47._8_8_;
          bVar43 = true;
          if (lVar19 == 0) {
LAB_0058a472:
            sec = cname_return_result_alias.Data[0x28];
            pvVar9 = local_288;
            puVar25 = (undefined1 *)local_678;
          }
          else {
            local_640 = lVar19;
            if (vendor_golang_org_x_net_dns_dnsmessage_ErrSectionDone.tab == auVar47._0_8_) {
              uStack_800 = vendor_golang_org_x_net_dns_dnsmessage_ErrSectionDone.data;
              runtime_ifaceeq(auVar47._0_8_,
                              vendor_golang_org_x_net_dns_dnsmessage_ErrSectionDone.data,pvVar17);
              bVar7 = (byte)uStack_7f8 ^ 1;
              local_808 = pvVar17;
            }
            else {
              bVar7 = 1;
            }
            if (bVar7 == 0) {
              bVar43 = local_640 == 0;
              goto LAB_0058a472;
            }
            runtime_newobject((runtime__type *)&DAT_0026dea0);
            vVar5 = cname_return_result_alias;
            (local_808->msg).len = 0x1a;
            (local_808->msg).array = &DAT_0029f3a1;
            *(undefined8 *)&local_808->header = cname_return_result_alias.Data._48_8_;
            if (runtime_writeBarrier._0_4_ == 0) {
              (local_808->msg).cap = cname_return_result_alias.Data._40_8_;
              pvVar9 = local_808;
            }
            else {
              ppuVar42 = (uint8 **)&(local_808->msg).cap;
              runtime_gcWriteBarrierBX();
              pvVar9 = extraout_RAX_00;
            }
            sec = vVar5.Data[0x28];
            pvVar9->off = local_20;
            if (runtime_writeBarrier._0_4_ == 0) {
              *(uint8 **)&(pvVar9->header).authorities = local_28;
            }
            else {
              ppuVar42 = (uint8 **)&(pvVar9->header).authorities;
              runtime_gcWriteBarrierSI();
              pvVar9 = extraout_RAX_01;
            }
            bVar43 = local_640 == 0;
            puVar25 = go_itab__net_DNSError_error;
          }
          pvVar13 = local_608;
          pvVar28 = local_620;
          pvVar24 = local_240;
          cVar18 = local_689;
          if (!bVar43) goto LAB_00589f7d;
                    /* Unresolved local var: vendor/golang.org/x/net/dns/dnsmessage.AResource *
                       &a@[???] */
          local_648 = (runtime_interfacetype *)puVar25;
          local_260 = pvVar9;
          if (local_4c4 == 1) {
            runtime_newobject((runtime__type *)&DAT_00244a20);
            local_230 = local_808;
            vendor_golang_org_x_net_dns_dnsmessage___Parser__AResource(local_808);
            *(undefined4 *)&(local_230->msg).array = local_808._0_4_;
            if (uStack_800 != (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0) {
              runtime_newobject((runtime__type *)&DAT_0026dea0);
              (local_808->msg).len = 0x1a;
              (local_808->msg).array = &DAT_0029f3a1;
              *(undefined8 *)&local_808->header = cname_return_result_alias.Data._48_8_;
              if (runtime_writeBarrier._0_4_ == 0) {
                (local_808->msg).cap = cname_return_result_alias.Data._40_8_;
              }
              else {
                runtime_gcWriteBarrierBX();
                local_808 = extraout_RAX_06;
              }
              local_808->off = local_20;
              if (runtime_writeBarrier._0_4_ == 0) {
                *(uint8 **)&(local_808->header).authorities = local_28;
              }
              else {
                runtime_gcWriteBarrierSI();
                local_808 = extraout_RAX_07;
              }
              puVar25 = go_itab__net_DNSError_error;
              pvVar9 = local_808;
              pvVar13 = local_608;
              pvVar28 = local_620;
              pvVar24 = local_240;
              cVar18 = local_689;
              goto LAB_00589f7d;
            }
            local_1f0._24_2_ = 0;
            local_1f0._26_2_ = 0;
            local_1f0._28_2_ = 0;
            local_1f0._30_2_ = 0;
            local_1f0[0x20] = 0;
            local_1f0[0x21] = 0;
            local_1f0[0x22] = 0;
            local_1f0[0x23] = 0;
            local_1f0[0x24] = 0;
            local_1f0[0x25] = 0;
            local_1f0[0x26] = 0;
            local_1f0[0x27] = 0;
            local_1f0._0_8_ = local_230;
            local_1f0._8_8_ = 4;
            local_1f0._16_8_ = 4;
            pvVar17 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)
                      ((long)&(local_608->msg).array + 1);
            pvVar13 = local_620;
            pvVar28 = local_240;
            if (local_620 < pvVar17) {
              local_808 = local_240;
              uStack_800 = local_608;
              uStack_7f8 = local_620;
              old_00.len = (int)pvVar17;
              old_00.array = &DAT_0024c960;
              old_00.cap = (int)ppuVar42;
              local_7f0 = pvVar17;
              runtime_growslice((runtime__type *)local_608,old_00,(int)local_240);
              pvVar17 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)
                        ((long)&(local_7e0->msg).array + 1);
              pvVar13 = local_7d8;
              pvVar28 = local_7e8;
            }
            pvVar24 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)
                      ((pvVar28->resHeader).Name.Data + (long)local_608 * 0x28 + -0x3c);
            if (runtime_writeBarrier._0_4_ == 0) {
              *(undefined8 *)((pvVar28->resHeader).Name.Data + (long)local_608 * 0x28 + -0x3c) =
                   local_1f0._0_8_;
              *(undefined8 *)((pvVar28->resHeader).Name.Data + (long)local_608 * 0x28 + -0x34) =
                   local_1f0._8_8_;
              *(undefined8 *)((pvVar28->resHeader).Name.Data + (long)local_608 * 0x28 + -0x2c) =
                   local_1f0._16_8_;
              *(undefined8 *)((pvVar28->resHeader).Name.Data + (long)local_608 * 0x28 + -0x24) =
                   local_1f0._24_8_;
              *(undefined8 *)((pvVar28->resHeader).Name.Data + (long)local_608 * 0x28 + -0x1c) =
                   local_1f0._32_8_;
            }
            else {
              uStack_800 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)local_1f0;
              local_668 = pvVar13;
              local_660 = pvVar17;
              local_270 = pvVar28;
              runtime_typedmemmove((runtime__type *)uStack_800,pvVar24,pvVar17);
              pvVar17 = local_660;
              pvVar13 = local_668;
              pvVar28 = local_270;
              local_808 = pvVar24;
            }
LAB_0058a854:
            auVar3._8_8_ = pvVar13;
            auVar3._0_8_ = pvVar28;
            auVar47._8_8_ = pvVar13;
            auVar47._0_8_ = pvVar28;
            prVar16 = local_648;
            pvVar13 = local_260;
            if ((in_stack_0000015f == '\0') && (auVar47 = auVar3, local_4c5 != '\0')) {
              auVar47 = FUN_0051a460(cname_return_result_alias.Data + 0x58,&local_5c4);
              prVar16 = local_648;
              pvVar13 = local_260;
            }
            goto LAB_0058a23e;
          }
                    /* Unresolved local var: vendor/golang.org/x/net/dns/dnsmessage.AAAAResource *
                       &aaaa@[???] */
          if (local_4c4 == 0x1c) {
            runtime_newobject((runtime__type *)&DAT_002449a0);
            local_238 = local_808;
            vendor_golang_org_x_net_dns_dnsmessage___Parser__AAAAResource(local_808);
            local_5f4 = local_808;
            pvStack_5ec = uStack_800;
            (local_238->msg).array = (uint8 *)local_808;
            (local_238->msg).len = (int)uStack_800;
            if (uStack_7f8 == (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0) {
              local_200 = 0;
              iStack_1f8 = 0;
              local_228._16_8_ = local_238;
              local_210._0_2_ = 0x10;
              local_210._2_2_ = 0;
              local_210._4_2_ = 0;
              local_210._6_2_ = 0;
              local_210._8_2_ = 0x10;
              local_210._10_2_ = 0;
              local_210[0xc] = 0;
              local_210._13_3_ = 0;
              pvVar17 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)
                        ((long)&(local_608->msg).array + 1);
              pvVar13 = local_620;
              pvVar28 = local_240;
              if (local_620 < pvVar17) {
                local_808 = local_240;
                uStack_800 = local_608;
                uStack_7f8 = local_620;
                old.len = (int)pvVar17;
                old.array = &DAT_0024c960;
                old.cap = (int)ppuVar42;
                local_7f0 = pvVar17;
                runtime_growslice((runtime__type *)local_608,old,(int)local_240);
                pvVar17 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)
                          ((long)&(local_7e0->msg).array + 1);
                pvVar13 = local_7d8;
                pvVar28 = local_7e8;
              }
              pvVar24 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)
                        ((pvVar28->resHeader).Name.Data + (long)local_608 * 0x28 + -0x3c);
              if (runtime_writeBarrier._0_4_ == 0) {
                *(undefined8 *)((pvVar28->resHeader).Name.Data + (long)local_608 * 0x28 + -0x3c) =
                     local_228._16_8_;
                *(undefined8 *)((pvVar28->resHeader).Name.Data + (long)local_608 * 0x28 + -0x34) =
                     local_210._0_8_;
                *(undefined8 *)((pvVar28->resHeader).Name.Data + (long)local_608 * 0x28 + -0x2c) =
                     local_210._8_8_;
                *(int *)((pvVar28->resHeader).Name.Data + (long)local_608 * 0x28 + -0x24) =
                     local_200;
                *(int *)((pvVar28->resHeader).Name.Data + (long)local_608 * 0x28 + -0x1c) =
                     iStack_1f8;
              }
              else {
                uStack_800 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)(local_228 + 0x10);
                local_658 = pvVar13;
                local_650 = pvVar17;
                local_268 = pvVar28;
                runtime_typedmemmove((runtime__type *)uStack_800,pvVar24,pvVar17);
                pvVar17 = local_650;
                pvVar13 = local_658;
                pvVar28 = local_268;
                local_808 = pvVar24;
              }
              goto LAB_0058a854;
            }
            runtime_newobject((runtime__type *)&DAT_0026dea0);
            (local_808->msg).len = 0x1a;
            (local_808->msg).array = &DAT_0029f3a1;
            *(undefined8 *)&local_808->header = cname_return_result_alias.Data._48_8_;
            if (runtime_writeBarrier._0_4_ == 0) {
              (local_808->msg).cap = cname_return_result_alias.Data._40_8_;
            }
            else {
              runtime_gcWriteBarrierBX();
              local_808 = extraout_RAX_02;
            }
            local_808->off = local_20;
            if (runtime_writeBarrier._0_4_ == 0) {
              *(uint8 **)&(local_808->header).authorities = local_28;
            }
            else {
              runtime_gcWriteBarrierSI();
              local_808 = extraout_RAX_03;
            }
            puVar25 = go_itab__net_DNSError_error;
            pvVar9 = local_808;
            pvVar13 = local_608;
            pvVar28 = local_620;
            pvVar24 = local_240;
            cVar18 = local_689;
            goto LAB_00589f7d;
          }
          local_808 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)CONCAT71(local_808._1_7_,3);
          vendor_golang_org_x_net_dns_dnsmessage___Parser__skipResource(&local_170,sec);
          auVar47._8_8_ = local_620;
          auVar47._0_8_ = local_240;
          prVar16 = local_648;
          pvVar13 = local_260;
          pvVar17 = local_608;
        } while (uStack_800 == (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0);
        runtime_newobject((runtime__type *)&DAT_0026dea0);
        (local_808->msg).len = 0x1a;
        (local_808->msg).array = &DAT_0029f3a1;
        *(undefined8 *)&local_808->header = cname_return_result_alias.Data._48_8_;
        if (runtime_writeBarrier._0_4_ == 0) {
          (local_808->msg).cap = cname_return_result_alias.Data._40_8_;
        }
        else {
          runtime_gcWriteBarrierBX();
          local_808 = extraout_RAX_04;
        }
        local_808->off = local_20;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(uint8 **)&(local_808->header).authorities = local_28;
        }
        else {
          runtime_gcWriteBarrierSI();
          local_808 = extraout_RAX_05;
        }
        puVar25 = go_itab__net_DNSError_error;
        pvVar9 = local_808;
        pvVar13 = local_608;
        pvVar28 = local_620;
        pvVar24 = local_240;
        cVar18 = local_689;
      }
      else {
        uStack_800 = local_10;
        rVar44.data = local_10;
        rVar44.tab = prVar1;
        rVar44 = runtime_assertI2I2(local_18,rVar44);
        a0.str = rVar44.data;
        if (uStack_7f8 == (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0) {
          local_808._0_1_ = '\0';
        }
        else {
          (**(code **)&(uStack_7f8->header).authorities)();
          local_808._0_1_ = (char)prVar4;
        }
        vVar5 = cname_return_result_alias;
        pvVar9 = local_10;
        puVar25 = (undefined1 *)local_18;
        pvVar13 = local_630;
        pvVar28 = local_628;
        pvVar24 = local_258;
        if ((((char)local_808 == '\0') || (cname_return_result_alias.Data._0_8_ == 0)) ||
           (*(char *)(cname_return_result_alias.Data._0_8_ + 1) == '\0')) {
          cVar18 = local_689;
          if (local_638 != (runtime_interfacetype *)0x0) {
            uStack_800 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)
                         cname_return_result_alias.Data._48_8_;
            uStack_7f8 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)((long)&go_string__ + 4);
            local_7f0 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x1;
            a0.len._0_1_ = cname_return_result_alias.Data[0x30];
            a0.len._1_1_ = cname_return_result_alias.Data[0x31];
            a0.len._2_1_ = cname_return_result_alias.Data[0x32];
            a0.len._3_1_ = cname_return_result_alias.Data[0x33];
            a0.len._4_1_ = cname_return_result_alias.Data[0x34];
            a0.len._5_1_ = cname_return_result_alias.Data[0x35];
            a0.len._6_1_ = cname_return_result_alias.Data[0x36];
            a0.len._7_1_ = cname_return_result_alias.Data[0x37];
            a1.len = (int)ppvVar35;
            a1.str = (uint8 *)piVar41;
            runtime_concatstring2((runtime_tmpBuf *)cname_return_result_alias.Data._40_8_,a0,a1);
            cname_return_result_alias = vVar5;
            if (local_7e0 == local_670) {
              uStack_800 = local_670;
              runtime_memequal();
              cVar6 = (byte)uStack_7f8;
            }
            else {
              cVar6 = '\0';
            }
            puVar25 = (undefined1 *)local_18;
            pvVar9 = local_10;
            pvVar13 = local_630;
            pvVar28 = local_628;
            pvVar24 = local_258;
            cVar18 = local_689;
            if (cVar6 == '\0') {
              puVar25 = (undefined1 *)local_638;
              pvVar9 = local_248;
            }
          }
        }
        else {
          cVar18 = '\x01';
        }
      }
LAB_00589f7d:
      pvVar15 = local_610;
      pvVar17 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)((long)&(local_600->msg).array + 1)
      ;
    }
    if (cVar18 != '\0') {
      pvVar28 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0;
      pvVar13 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0;
      pvVar24 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)0x0;
      pvVar17 = pvVar28;
      goto LAB_00589ca8;
    }
    pvVar17 = pvVar28;
    if ((0 < (long)pvVar13) || (lVar19 = local_618 + 1, (long)pvVar15 <= lVar19)) goto LAB_00589ca8;
    local_250 = (vendor_golang_org_x_net_dns_dnsmessage_Parser *)&(local_250->msg).cap;
  } while( true );
}

