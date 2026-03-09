
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*conn).Read(net.conn * c, []uint8 b, int ~r1, error ~r2) */

multireturn_int_error__conflict net___conn__Read(net_conn *c,__uint8 b)

{
  uint8 *extraout_RAX;
  uint8 *extraout_RAX_00;
  uint8 *extraout_RAX_01;
  void *pvVar1;
  uint8 *puVar2;
  int iVar3;
  long in_FS_OFFSET;
  multireturn_int_error__conflict mVar4;
  multireturn_int_error__conflict mVar5;
  __uint8 p;
  net_conn *c_spill;
  __uint8 b_spill;
  uint8 *local_58;
  byte local_48;
  runtime_itab *local_40;
  runtime_itab *local_38;
  uint8 *local_30;
  
  iVar3 = b.cap;
  pvVar1 = (void *)b.len;
  p.array = b.array;
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((c_spill != (net_conn *)0x0) && (pvVar1 = (void *)0x0, c_spill->fd != (net_netFD *)0x0)) {
    local_58 = b_spill.array;
    p.len = (int)c_spill->fd;
    p.cap = iVar3;
    net___netFD__Read((net_netFD *)b_spill.cap,p);
    puVar2 = local_30;
    if (local_38 != (runtime_itab *)0x0) {
      if (io_EOF.tab == local_38) {
        local_58 = local_30;
        runtime_ifaceeq(local_40,local_30,local_38);
        local_48 = (byte)b_spill.cap;
        local_48 = local_48 ^ 1;
      }
      else {
        local_48 = 1;
      }
      if (local_48 != 0) {
        runtime_newobject((runtime__type *)&DAT_0026a420);
        local_58[8] = 4;
        local_58[9] = 0;
        local_58[10] = 0;
        local_58[0xb] = 0;
        local_58[0xc] = 0;
        local_58[0xd] = 0;
        local_58[0xe] = 0;
        local_58[0xf] = 0;
        *(undefined **)local_58 = &DAT_00288621;
        puVar2 = (c_spill->fd->net).str;
        *(int *)(local_58 + 0x18) = (c_spill->fd->net).len;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(uint8 **)(local_58 + 0x10) = puVar2;
        }
        else {
          runtime_gcWriteBarrierBX();
          local_58 = extraout_RAX;
        }
        puVar2 = (c_spill->fd->laddr).data;
        *(runtime_itab **)(local_58 + 0x20) = (c_spill->fd->laddr).tab;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(uint8 **)(local_58 + 0x28) = puVar2;
        }
        else {
          runtime_gcWriteBarrierBX();
          local_58 = extraout_RAX_00;
        }
        pvVar1 = (c_spill->fd->raddr).data;
        *(runtime_itab **)(local_58 + 0x30) = (c_spill->fd->raddr).tab;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(void **)(local_58 + 0x38) = pvVar1;
        }
        else {
          runtime_gcWriteBarrierDX();
          local_58 = extraout_RAX_01;
        }
        *(runtime_itab **)(local_58 + 0x40) = local_38;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(uint8 **)(local_58 + 0x48) = local_30;
        }
        else {
          runtime_gcWriteBarrierCX();
        }
        local_38 = (runtime_itab *)&go_itab__net_OpError_error;
      }
    }
    mVar4.~r2.tab = (runtime_itab *)puVar2;
    mVar4.~r1 = (int)local_40;
    mVar4.~r2.data = local_38;
    return mVar4;
  }
  mVar5.~r2.tab = (runtime_itab *)p.array;
  mVar5.~r1 = (int)&DAT_002b2e10;
  mVar5.~r2.data = pvVar1;
  return mVar5;
}

