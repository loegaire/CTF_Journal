
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.setDefaultSockopts(int s, int family, int sotype, bool
   ipv6only, error ~r4) */

error net_setDefaultSockopts(int s,int family,int sotype,bool ipv6only)

{
  undefined1 *puVar1;
  uintptr in_RSI;
  undefined7 in_register_00000039;
  void *val;
  long in_FS_OFFSET;
  error eVar2;
  error eVar3;
  int s_spill;
  int family_spill;
  int sotype_spill;
  bool ipv6only_spill;
  char local_58;
  long local_30;
  undefined8 local_28;
  uint local_20 [2];
  undefined8 local_18;
  long local_10;
  
  val = (void *)CONCAT71(in_register_00000039,ipv6only);
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (family_spill == 0x1c) {
    if (sotype_spill == 3) {
      local_58 = '\0';
    }
    else {
      net_supportsIPv4map();
    }
  }
  else {
    local_58 = '\0';
  }
  if (local_58 != '\0') {
                    /* Unresolved local var: int32 n@[???] */
    local_20[0] = (uint)ipv6only_spill;
    eVar2 = syscall_setsockopt(s_spill,family,(int)local_20,val,in_RSI);
    family = (int)eVar2.data;
  }
  if (((sotype_spill == 2) || (sotype_spill == 3)) && (family_spill != 1)) {
                    /* Unresolved local var: int32 n@[???] */
    local_20[1] = 1;
    eVar2 = syscall_setsockopt((int)(local_20 + 1),family,sotype_spill,val,in_RSI);
    eVar3.data = eVar2.data;
    if (local_30 == 0) {
      puVar1 = (undefined1 *)0x0;
    }
    else {
      local_10 = local_30;
      local_18 = local_28;
      runtime_newobject((runtime__type *)&DAT_0024d4a0);
      _DAT_00010007 = 10;
      _DAT_0000ffff = &DAT_00290376;
      _DAT_0001000f = local_10;
      if (runtime_writeBarrier._0_4_ == 0) {
        _DAT_00010017 = local_18;
      }
      else {
        runtime_gcWriteBarrierCX();
      }
      puVar1 = go_itab__os_SyscallError_error;
    }
    eVar3.tab = (runtime_itab *)puVar1;
    return eVar3;
  }
  eVar2.data = (void *)family;
  eVar2.tab = (runtime_itab *)family_spill;
  return eVar2;
}

