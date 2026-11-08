
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void net_readHosts(void)

{
  uint8 *puVar1;
  time_Location *ptVar2;
  int iVar3;
  uint64 uVar4;
  int64 iVar5;
  time_Location *ptVar6;
  time_Location *ptVar7;
  char cVar8;
  time_Location *extraout_RAX;
  time_Location *ptVar9;
  time_Location *extraout_RAX_00;
  time_Location *extraout_RAX_01;
  time_Location *ptVar10;
  long lVar11;
  time_Location *ptVar12;
  long lVar13;
  time_Location *ptVar14;
  int iVar15;
  time_Location *ptVar16;
  undefined1 *puVar17;
  string *psVar18;
  long in_FS_OFFSET;
  string name;
  string name_00;
  string s;
  string addr;
  string s_00;
  string s_01;
  time_Time t;
  time_Time t_00;
  time_Time t_01;
  __string _Var19;
  time_Time t_02;
  __uint8 _Var20;
  __uint8 x;
  __uint8 b;
  runtime_slice old;
  runtime_slice old_00;
  time_Time u;
  time_Time u_00;
  string t_03;
  string s_02;
  string s_03;
  multireturn_time_Time_int64_error_ mVar21;
  multireturn_string_bool__conflict4 mVar22;
  time_Location *local_160;
  time_Location *local_158;
  time_Location *local_150;
  time_Location *local_148;
  time_Location *local_140;
  time_Location *local_138;
  char local_130;
  undefined7 uStack_12f;
  time_zone *local_128;
  time_Location *local_e0;
  long local_d8;
  time_Location *local_d0;
  time_Location *local_c8;
  undefined1 local_b0 [64];
  time_Location *local_70;
  time_Location *local_68;
  time_Location *local_60;
  time_Location *local_58;
  time_Location *local_50;
  time_Location *local_48;
  time_Location *local_40;
  time_Location *local_38;
  time_Location *local_30;
  time_Location *local_28;
  time_Location *local_20;
  time_Location *local_18;
  
                    /* Unresolved local var: int64 size@[???]
                       Unresolved local var: map[string][]string hs@[???]
                       Unresolved local var: map[string][]string is@[???]
                       Unresolved local var: net.file * file@[???]
                       Unresolved local var: string hp@[???] */
  while (&local_e0 <= *(time_Location ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  time_Now();
  ptVar7 = net_hosts.expire.loc;
  iVar5 = net_hosts.expire.ext;
  uVar4 = net_hosts.expire.wall;
  iVar3 = net_testHookHostsPath.len;
  local_48 = (time_Location *)net_testHookHostsPath.str;
  local_148 = (time_Location *)net_hosts.expire.wall;
  ptVar6 = local_148;
  local_140 = (time_Location *)net_hosts.expire.ext;
  local_138 = net_hosts.expire.loc;
  t.ext = net_hosts.expire.ext;
  t.wall = (uint64)net_testHookHostsPath.str;
  t.loc = (time_Location *)net_testHookHostsPath.len;
  u.ext = (int64)net_hosts.expire.loc;
  u.wall = (uint64)local_160;
  u.loc = local_158;
  time_Time_Before(t,u);
  local_148._0_1_ = (char)uVar4;
  if (local_130 == '\0') {
    cVar8 = '\0';
  }
  else if (net_hosts.path.len == iVar3) {
    local_150 = (time_Location *)net_hosts.path.len;
    runtime_memequal();
    cVar8 = (char)local_148;
  }
  else {
    cVar8 = '\0';
  }
  if (cVar8 != '\0') {
    if (net_hosts.byName == (map_string___string)0x0) {
      iVar15 = 0;
    }
    else {
      iVar15 = (net_hosts.byName)->count;
    }
    if (0 < iVar15) {
      return;
    }
  }
  local_160 = local_48;
  name.len = iVar5;
  name.str = (uint8 *)local_48;
  mVar21 = net_stat(name);
  ptVar16 = (time_Location *)mVar21.size;
  local_18 = (time_Location *)iVar5;
  local_c8 = local_150;
  local_d0 = (time_Location *)uVar4;
  local_148 = ptVar6;
  if (CONCAT71(uStack_12f,local_130) == 0) {
    ptVar16 = (time_Location *)net_hosts.path.str;
    if (net_hosts.path.len == iVar3) {
      local_160 = (time_Location *)net_hosts.path.str;
      local_150 = (time_Location *)net_hosts.path.len;
      runtime_memequal();
    }
    else {
      local_148._0_1_ = '\0';
    }
    ptVar9 = local_18;
    ptVar2 = local_c8;
    ptVar6 = local_d0;
    if ((char)local_148 == '\0') {
      cVar8 = '\0';
    }
    else {
      local_160 = (time_Location *)net_hosts.mtime.wall;
      local_150 = net_hosts.mtime.loc;
      t_00.ext = (int64)local_d0;
      t_00.wall = net_hosts.mtime.wall;
      t_00.loc = local_18;
      u_00.ext = net_hosts.mtime.ext;
      u_00.wall = (uint64)net_hosts.mtime.loc;
      u_00.loc = (time_Location *)iVar3;
      ptVar16 = net_hosts.mtime.loc;
      time_Time_Equal(t_00,u_00);
      cVar8 = local_130;
      local_148 = ptVar2;
      local_140 = ptVar6;
      local_138 = ptVar9;
    }
  }
  else {
    cVar8 = '\0';
  }
  ptVar6 = local_d0;
  if ((cVar8 != '\0') && ((time_Location *)net_hosts.size == ptVar7)) {
    t_01.ext = (int64)local_d0;
    t_01.wall = 5000000000;
    t_01.loc = local_18;
    time_Time_Add(t_01,(time_Duration)ptVar16);
    net_hosts.expire.wall = (uint64)local_140;
    net_hosts.expire.ext = (int64)local_138;
    ptVar7 = (time_Location *)CONCAT71(uStack_12f,local_130);
    if (runtime_writeBarrier._0_4_ != 0) {
      runtime_gcWriteBarrier();
      ptVar7 = net_hosts.expire.loc;
    }
    net_hosts.expire.loc = ptVar7;
    return;
  }
  runtime_makemap_small();
  local_50 = local_160;
  runtime_makemap_small();
  local_58 = local_160;
  name_00.len = (int)ptVar6;
  name_00.str = (uint8 *)local_160;
  net_open(name_00);
  if (local_150 == (time_Location *)0x0) {
    return;
  }
  local_38 = local_150;
                    /* Unresolved local var: bool ok@[???]
                       Unresolved local var: string line@[???] */
  mVar22 = net___file__readLine((net_file *)local_150);
  iVar15 = mVar22.s.len;
  local_158 = (time_Location *)iVar3;
                    /* Unresolved local var: []string f@[???]
                       Unresolved local var: string addr@[???]
                       Unresolved local var: string * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???]
                       Unresolved local var: int i@[???] */
  while( true ) {
    if ((char)local_148 == '\0') {
      t_02.ext = iVar15;
      t_02.wall = 5000000000;
      t_02.loc = local_158;
      time_Time_Add(t_02,(time_Duration)ptVar16);
      net_hosts.expire.wall = (uint64)local_140;
      net_hosts.expire.ext = (int64)local_138;
      ptVar6 = (time_Location *)CONCAT71(uStack_12f,local_130);
      if (runtime_writeBarrier._0_4_ != 0) {
        runtime_gcWriteBarrier();
        ptVar6 = net_hosts.expire.loc;
      }
      net_hosts.expire.loc = ptVar6;
      net_hosts.path.len = iVar3;
      if (runtime_writeBarrier._0_4_ == 0) {
        net_hosts.path.str = (uint8 *)local_48;
        net_hosts.byName = (map_string___string)local_50;
        net_hosts.byAddr = (map_string___string)local_58;
      }
      else {
        runtime_gcWriteBarrier();
        runtime_gcWriteBarrier();
        runtime_gcWriteBarrier();
      }
      net_hosts.mtime.wall = (uint64)local_c8;
      net_hosts.mtime.ext = (int64)local_d0;
      if (runtime_writeBarrier._0_4_ == 0) {
        net_hosts.mtime.loc = local_18;
      }
      else {
        runtime_gcWriteBarrier();
      }
      net_hosts.size = (int64)ptVar7;
      puVar1 = (local_38->name).str;
      if (puVar1 != (uint8 *)0x0) {
        os___file__close(*(os_file **)puVar1);
      }
      return;
    }
    local_60 = local_158;
    internal_bytealg_IndexByteString();
    local_158 = local_150;
    if ((-1 < (long)local_148) && (local_158 = local_148, local_150 < local_148)) break;
    local_150 = (time_Location *)&DAT_00287d9d;
    local_148 = (time_Location *)&DAT_00000004;
    s.len = iVar15;
    s.str = &DAT_00287d9d;
    t_03.len = (int)ptVar16;
    t_03.str = (uint8 *)local_158;
    _Var19 = net_splitAtBytes(s,t_03);
    addr.len = _Var19.len;
    if (1 < (long)local_138) {
      local_70 = local_140;
      local_158 = (time_Location *)(local_140->name).len;
      addr.str = (local_140->name).str;
      net_parseLiteralIP(addr);
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: string key@[???]
                       Unresolved local var: string name@[???]
                       Unresolved local var: []uint8 h@[???] */
      local_30 = (time_Location *)&DAT_00287d9d;
      local_e0 = (time_Location *)&DAT_00000004;
      for (lVar13 = 1; ptVar6 = local_140, lVar13 < (long)local_138; lVar13 = lVar13 + 1) {
        local_d8 = lVar13 * 0x10;
        s_00.len = (int)local_70;
        s_00.str = (uint8 *)(&local_70->name)[lVar13].len;
        _Var20 = runtime_stringtoslicebyte((runtime_tmpBuf *)local_e0,s_00);
        _Var20.array = (uint8 *)local_148;
        _Var20.cap = (int)local_140;
        net_absDomainName(_Var20);
        local_68 = local_148;
        puVar17 = local_b0;
        s_01.len = (int)local_70;
        s_01.str = (uint8 *)local_148;
        _Var20 = runtime_stringtoslicebyte
                           (*(runtime_tmpBuf **)((long)&(local_70->name).len + local_d8),s_01);
        x.len = _Var20.len;
        local_40 = local_148;
        x.array = (uint8 *)local_148;
        x.cap = (int)local_140;
        ptVar16 = local_140;
        net_lowerASCIIBytes(x);
        b.len = x.len;
        b.array = (uint8 *)local_138;
        b.cap = (int)ptVar16;
        net_absDomainName(b);
        s_02.len = (int)puVar17;
        s_02.str = (uint8 *)local_140;
        runtime_mapassign_faststr((runtime_maptype *)local_148,(runtime_hmap *)local_50,s_02);
        lVar11 = (local_140->name).len;
        ptVar2 = (time_Location *)(local_140->zone).array;
        ptVar16 = (time_Location *)(lVar11 + 1);
        ptVar9 = local_140;
        ptVar14 = (time_Location *)(local_140->name).str;
        if (ptVar2 < ptVar16) {
          local_20 = local_140;
          old.len = lVar11;
          old.array = ptVar2;
          old.cap = (int)puVar17;
          runtime_growslice((runtime__type *)&DAT_00225520,old,(int)ptVar16);
          lVar11 = CONCAT71(uStack_12f,local_130);
          (local_20->zone).array = local_128;
          ptVar9 = local_20;
          local_140 = ptVar16;
          if (runtime_writeBarrier._0_4_ == 0) {
            (local_20->name).str = (uint8 *)local_138;
            ptVar14 = local_138;
          }
          else {
            runtime_gcWriteBarrier();
            ptVar14 = extraout_RAX;
          }
        }
        (ptVar9->name).len = lVar11 + 1;
        (&ptVar14->name)[lVar11].len = (int)local_e0;
        psVar18 = &ptVar14->name + lVar11;
        local_150 = local_30;
        if (runtime_writeBarrier._0_4_ == 0) {
          (&ptVar14->name)[lVar11].str = (uint8 *)local_30;
          local_148 = local_e0;
        }
        else {
          runtime_gcWriteBarrierCX();
          local_148 = extraout_RAX_00;
        }
        local_158 = local_58;
        s_03.len = (int)psVar18;
        s_03.str = &DAT_002361a0;
        runtime_mapassign_faststr((runtime_maptype *)local_148,(runtime_hmap *)local_150,s_03);
        ptVar2 = (time_Location *)(local_140->name).len;
        ptVar9 = (time_Location *)(local_140->name).str;
        ptVar14 = (time_Location *)(local_140->zone).array;
        ptVar16 = (time_Location *)((long)&(ptVar2->name).str + 1);
        ptVar10 = local_140;
        ptVar12 = ptVar2;
        if (ptVar14 < ptVar16) {
          local_28 = local_140;
          old_00.len = (int)ptVar2;
          old_00.array = ptVar14;
          old_00.cap = (int)psVar18;
          runtime_growslice((runtime__type *)&DAT_00225520,old_00,(int)ptVar16);
          ptVar12 = (time_Location *)CONCAT71(uStack_12f,local_130);
          (local_28->zone).array = local_128;
          ptVar10 = local_28;
          local_148 = ptVar14;
          local_150 = ptVar2;
          local_158 = ptVar9;
          local_140 = ptVar16;
          if (runtime_writeBarrier._0_4_ == 0) {
            (local_28->name).str = (uint8 *)local_138;
            ptVar9 = local_138;
          }
          else {
            runtime_gcWriteBarrier();
            ptVar9 = extraout_RAX_01;
          }
        }
        (ptVar10->name).len = (int)((long)&(ptVar12->name).str + 1);
        (&ptVar9->name)[(long)ptVar12].len = (int)ptVar6;
        ptVar16 = (time_Location *)(&ptVar9->name + (long)ptVar12);
        if (runtime_writeBarrier._0_4_ == 0) {
          (&ptVar9->name)[(long)ptVar12].str = (uint8 *)local_68;
        }
        else {
          runtime_gcWriteBarrier();
        }
      }
    }
    mVar22 = net___file__readLine((net_file *)local_38);
    iVar15 = mVar22.s.len;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAlen();
}

