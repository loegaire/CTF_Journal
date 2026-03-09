
/* WARNING: Removing unreachable block (ram,0x00588abc) */
/* WARNING: Unknown calling convention */

void net___resolverConfig__tryUpdate(net_resolverConfig *conf,string name)

{
  net_dnsConfig *pnVar1;
  int iVar2;
  time_Location *ptVar3;
  time_Duration in_RDI;
  long in_FS_OFFSET;
  string name_00;
  string filename;
  time_Time t;
  time_Time t_00;
  time_Time t_01;
  time_Time u;
  time_Time u_00;
  multireturn_io_fs_FileInfo_error_ mVar4;
  net_resolverConfig *conf_spill;
  string name_spill;
  code **local_88;
  time_Location *local_80;
  net_dnsConfig *local_70;
  long local_68;
  char local_60;
  undefined7 uStack_5f;
  code *local_28 [2];
  net_resolverConfig *local_18;
  undefined **ppuStack_10;
  
                    /* Unresolved local var: net.dnsConfig * dnsConf@[???]
                       Unresolved local var: time.Time mtime@[???] */
  while (&ppuStack_10 <= *(undefined ****)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18 = (net_resolverConfig *)0x0;
  ppuStack_10 = (undefined **)0x0;
  local_28[0] = net___resolverConfig__init_fm;
  if ((conf_spill->initOnce).done == 0) {
    local_88 = local_28;
    sync___Once__doSlow(&conf_spill->initOnce,(func__ **)name.str);
  }
  net___resolverConfig__tryAcquireSema(conf_spill);
  if ((char)local_88 != '\0') {
    ppuStack_10 = &PTR_net___resolverConfig__releaseSema_002b3490;
    local_18 = conf_spill;
    time_Now();
    t.ext = 0xfffffffed5fa0e00;
    t.wall = (uint64)local_80;
    t.loc = (time_Location *)conf_spill;
    time_Time_Add(t,in_RDI);
    ptVar3 = (conf_spill->lastChecked).loc;
    u.loc._1_7_ = uStack_5f;
    u.loc._0_1_ = local_60;
    t_00.ext = (int64)ptVar3;
    t_00.wall = (uint64)conf_spill;
    t_00.loc = (time_Location *)(conf_spill->lastChecked).wall;
    u.ext = (int64)local_70;
    u.wall = local_68;
    time_Time_After(t_00,u);
    if (local_60 == '\0') {
      (conf_spill->lastChecked).wall = (uint64)conf_spill;
      (conf_spill->lastChecked).ext = (int64)local_88;
      if (runtime_writeBarrier._0_4_ == 0) {
        (conf_spill->lastChecked).loc = local_80;
      }
      else {
        runtime_gcWriteBarrier();
      }
                    /* Unresolved local var: io/fs.FileInfo fi@[???] */
      name_00.len = (int)ptVar3;
      name_00.str = name_spill.str;
      mVar4 = os_Stat(name_00);
      if (local_68 == 0) {
        (*(code *)(ptVar3->zone).cap)(mVar4.~r2.data);
        iVar2 = name_spill.len;
      }
      else {
        ptVar3 = (time_Location *)0x0;
        local_70 = (net_dnsConfig *)0x0;
        iVar2 = 0;
      }
      pnVar1 = conf_spill->dnsConfig;
      t_01.ext = (int64)conf_spill;
      t_01.wall = iVar2;
      t_01.loc = ptVar3;
      u_00.ext = (int64)(pnVar1->mtime).loc;
      u_00.wall = (pnVar1->mtime).wall;
      u_00.loc = (time_Location *)(pnVar1->mtime).ext;
      time_Time_Equal(t_01,u_00);
      filename.len = (int)conf_spill;
      filename.str = (uint8 *)name_spill.len;
      net_dnsReadConfig(filename);
      sync___RWMutex__Lock((sync_RWMutex *)local_70);
      if (runtime_writeBarrier._0_4_ == 0) {
        conf_spill->dnsConfig = local_70;
      }
      else {
        runtime_gcWriteBarrier();
      }
      sync___RWMutex__Unlock(&conf_spill->mu);
      net___resolverConfig__releaseSema(local_18);
      return;
    }
    net___resolverConfig__releaseSema(local_18);
    return;
  }
  return;
}

