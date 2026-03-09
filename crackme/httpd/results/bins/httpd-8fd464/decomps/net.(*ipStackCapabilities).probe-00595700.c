
/* WARNING: Removing unreachable block (ram,0x005959e9) */
/* WARNING: Removing unreachable block (ram,0x00595a1f) */
/* WARNING: Removing unreachable block (ram,0x00595a3a) */
/* WARNING: Removing unreachable block (ram,0x00595a29) */
/* WARNING: Removing unreachable block (ram,0x00595a0d) */
/* WARNING: Unknown calling convention */

void net___ipStackCapabilities__probe(net_ipStackCapabilities *p)

{
  int extraout_EAX;
  int family;
  net_ipStackCapabilities *extraout_RAX;
  int in_RCX;
  sync_Mutex proto;
  int unaff_RBX;
  runtime_itab *fn;
  error *in_RSI;
  uint8 *vallen;
  undefined *in_RDI;
  undefined1 *val;
  long in_FS_OFFSET;
  string s;
  error eVar1;
  multireturn_int_error__conflict10 mVar2;
  multireturn_syscall_Sockaddr_error_ mVar3;
  undefined1 auVar4 [16];
  net_ipStackCapabilities *p_spill;
  sync_Mutex local_d8;
  long local_d0;
  long *local_c8;
  uint32 local_b4;
  sync_Mutex local_b0;
  long local_a8;
  sync_Mutex local_a0;
  long local_98;
  undefined1 local_90 [32];
  undefined1 local_70 [8];
  undefined8 local_68;
  runtime_itab *local_48 [8];
  
                    /* Unresolved local var: int s@[???]
                       Unresolved local var: error err@[???] */
  while (local_70 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    p = extraout_RAX;
  }
  net_sysSocket((int)p,unaff_RBX,in_RCX);
  if (local_d0 != 0) {
    in_RSI = *(error **)(local_d0 + 8);
    in_RDI = &DAT_002463a0;
    if (((in_RSI == (error *)&DAT_002463a0) && (*local_c8 == 0x2f)) ||
       ((local_d0 != 0 && ((in_RSI == (error *)&DAT_002463a0 && (*local_c8 == 0x2b))))))
    goto LAB_005957c8;
  }
  if (local_d0 == 0) {
    (**internal_poll_CloseFunc)((int)in_RDI,in_RSI);
    p_spill->ipv4Enabled = true;
  }
LAB_005957c8:
  s.len = local_d0;
  s.str = &DAT_002878c7;
  net_ParseIP(s);
                    /* Unresolved local var: net.IP p@[???] */
  local_90._0_8_ = (runtime_interfacetype *)0x0;
  local_90._8_8_ = (runtime__type *)0x0;
  proto = local_d8;
  vallen = net_v4InV6Prefix.array;
  if (net_v4InV6Prefix.array != local_90) {
    local_98 = local_d0;
    local_a0 = local_d8;
    local_90._16_4_ = 6;
    local_90[0x14] = 0;
    local_90[0x15] = 0;
    local_90[0x16] = 0;
    local_90[0x17] = 0;
    runtime_memmove();
    proto = local_a0;
  }
  fn = (runtime_itab *)local_90;
  local_90._12_4_ = 0x100007f;
  val = local_90 + 8;
  auVar4 = FUN_0051a186();
  local_48[0] = (runtime_itab *)0x1;
  local_48[2] = (runtime_itab *)0x10;
  local_48[3] = (runtime_itab *)0x10;
  family = 0;
  local_48[1] = fn;
                    /* Unresolved local var: int i@[???] */
  do {
    local_68 = auVar4._8_8_;
    local_90._24_8_ = auVar4._0_8_;
    if (1 < family) {
      runtime_deferreturn();
      return;
    }
    local_a8 = family;
                    /* Unresolved local var: int s@[???]
                       Unresolved local var: syscall.Sockaddr sa@[???] */
    mVar2 = net_sysSocket(family,(int)fn,(int)proto);
    fn = mVar2.~r4.tab;
    if (local_d0 == 0) {
      local_b0 = local_d8;
      runtime_deferproc(local_d8.state,(runtime_funcval *)fn);
      if (extraout_EAX != 0) {
        runtime_deferreturn();
        return;
      }
      local_98 = local_a8 * 0x38;
                    /* Unresolved local var: int32 n@[???] */
      local_b4 = (uint32)local_48[local_a8 * 7];
      local_d8 = (sync_Mutex)&local_b4;
      local_d0 = 4;
      eVar1 = syscall_setsockopt(local_a8,(int)local_d8,local_98,val,(uintptr)vallen);
      mVar3 = net___TCPAddr__sockaddr((net_TCPAddr *)(local_70 + local_98 + -8),(int)eVar1.data);
      val = mVar3.~r2.data;
      fn = mVar3.~r1.data;
    }
    auVar4._8_8_ = local_68;
    auVar4._0_8_ = local_90._24_8_;
    family = local_a8 + 1;
    proto = (sync_Mutex)p_spill;
  } while( true );
}

