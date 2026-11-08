
/* WARNING: Unknown calling convention */

void net___resolverConfig__init(net_resolverConfig *conf)

{
  net_dnsConfig *pnVar1;
  func__ **unaff_RBX;
  long in_FS_OFFSET;
  string filename;
  net_resolverConfig *conf_spill;
  sync_Once *local_28;
  undefined **local_20;
  net_dnsConfig *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (net_confOnce.done == 0) {
    local_28 = &net_confOnce;
    local_20 = &PTR_net_initConfVal_002b34d8;
    sync___Once__doSlow((sync_Once *)&PTR_net_initConfVal_002b34d8,unaff_RBX);
  }
  pnVar1 = net_confVal->resolv;
  if (runtime_writeBarrier._0_4_ == 0) {
    conf_spill->dnsConfig = pnVar1;
  }
  else {
    runtime_gcWriteBarrierCX();
  }
  if (pnVar1 == (net_dnsConfig *)0x0) {
    local_28 = (sync_Once *)&DAT_00299295;
    local_20 = (undefined **)0x10;
    filename.len = (int)unaff_RBX;
    filename.str = &DAT_00299295;
    net_dnsReadConfig(filename);
    if (runtime_writeBarrier._0_4_ == 0) {
      conf_spill->dnsConfig = local_18;
    }
    else {
      runtime_gcWriteBarrier();
    }
  }
  time_Now();
  (conf_spill->lastChecked).wall = (uint64)local_28;
  (conf_spill->lastChecked).ext = (int64)local_20;
  if (runtime_writeBarrier._0_4_ == 0) {
    (conf_spill->lastChecked).loc = (time_Location *)local_18;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_makechan((runtime_chantype *)&DAT_00222ea0,(int)conf_spill);
  if (runtime_writeBarrier._0_4_ == 0) {
    conf_spill->ch = (chan_struct___)local_18;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

