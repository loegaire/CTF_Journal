
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void net_initConfVal(void)

{
  long lVar1;
  runtime_itab *prVar2;
  net_dnsConfig **in_RDI;
  long in_FS_OFFSET;
  bool bVar3;
  string sVar4;
  string key_00;
  string file;
  string filename;
  error err;
  error err_00;
  string name;
  multireturn_string_bool__conflict3 mVar5;
  error target;
  error target_00;
  short *local_50;
  long local_48;
  net_dnsConfig *local_40;
  long local_38;
  byte local_30;
  int7 iStack_2f;
  string key;
  
                    /* Unresolved local var: int debugLevel@[???]
                       Unresolved local var: string dnsMode@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  net_goDebugNetDNS();
  net_confVal->dnsDebugLevel = (int)local_40;
  if (net_netGo == false) {
    if (local_48 == 2) {
      bVar3 = *local_50 == 0x6f67;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = true;
  }
  net_confVal->netGo = bVar3;
  if (net_netCgo == false) {
    if ((local_48 == 3) && (*local_50 == 0x6763)) {
      bVar3 = (char)local_50[1] == 'o';
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = true;
  }
  net_confVal->netCgo = bVar3;
  lVar1 = net_confVal->dnsDebugLevel;
  sVar4.len = local_48;
  sVar4.str = &DAT_00290bfd;
  mVar5 = syscall_Getenv(sVar4);
  key.len = mVar5.value.len;
  key.str = (uint8 *)(ulong)local_30;
  sVar4 = os_Getenv(key);
  key_00.len = (void *)sVar4.len;
  if (local_38 == 0) {
    key_00.str = &DAT_00290b9a;
    sVar4 = os_Getenv(key_00);
    key_00.len = (void *)sVar4.len;
  }
  if (((local_38 == 0) && (net_confVal->netCgo == false)) && (local_30 == 0)) {
    file.len = (int)key_00.len;
    file.str = &DAT_0029a4e8;
    net_parseNSSConfFile(file);
    if (runtime_writeBarrier._0_4_ == 0) {
      net_confVal->nss = (net_nssConf *)local_40;
    }
    else {
      in_RDI = (net_dnsConfig **)&net_confVal->nss;
      runtime_gcWriteBarrierCX();
    }
    filename.len = (int)key_00.len;
    filename.str = &DAT_00299295;
    net_dnsReadConfig(filename);
    if (runtime_writeBarrier._0_4_ == 0) {
      net_confVal->resolv = local_40;
    }
    else {
      in_RDI = &net_confVal->resolv;
      runtime_gcWriteBarrierCX();
    }
    prVar2 = (net_confVal->resolv->err).tab;
    if (prVar2 != (runtime_itab *)0x0) {
      err.data = os_ErrNotExist.data;
      err.tab = (net_confVal->resolv->err).data;
      target.data = in_RDI;
      target.tab = prVar2;
      os_underlyingErrorIs(err,target);
      key_00.len = os_ErrPermission.data;
      err_00.data = os_ErrPermission.data;
      err_00.tab = (net_confVal->resolv->err).data;
      target_00.data = in_RDI;
      target_00.tab = (net_confVal->resolv->err).tab;
      os_underlyingErrorIs(err_00,target_00);
      net_confVal->forceCgoLookupHost = true;
    }
    name.len = (int)key_00.len;
    name.str = &DAT_0029856f;
    os_Stat(name);
    if (iStack_2f == 0) {
      net_confVal->hasMDNSAllow = true;
    }
    if (0 < lVar1) {
      net_initConfVal_func1();
    }
    return;
  }
  net_confVal->forceCgoLookupHost = true;
  if (0 < lVar1) {
    net_initConfVal_func1();
  }
  return;
}

