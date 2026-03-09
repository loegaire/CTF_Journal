
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*conn).Write(net.conn * c, []uint8 b, int ~r1, error ~r2) */

multireturn_int_error__conflict net___conn__Write(net_conn *c,__uint8 b)

{
  uint8 *extraout_RAX;
  uint8 *extraout_RAX_00;
  uint8 *extraout_RAX_01;
  uint8 *extraout_RAX_02;
  void *pvVar1;
  uint8 *puVar2;
  int iVar3;
  long in_FS_OFFSET;
  multireturn_int_error__conflict mVar4;
  multireturn_int_error__conflict mVar5;
  __uint8 p;
  net_conn *c_spill;
  __uint8 b_spill;
  undefined8 local_38;
  long local_30;
  uint8 *local_28;
  
  iVar3 = b.cap;
  pvVar1 = (void *)b.len;
  p.array = b.array;
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (c_spill != (net_conn *)0x0) {
    pvVar1 = (void *)0x0;
    if (c_spill->fd != (net_netFD *)0x0) {
      p.len = (int)c_spill->fd;
      p.cap = iVar3;
      net___netFD__Write((net_netFD *)b_spill.cap,p);
      puVar2 = (uint8 *)0x0;
      if (local_30 != 0) {
        runtime_newobject((runtime__type *)&DAT_0026a420);
        b_spill.array[8] = 5;
        b_spill.array[9] = 0;
        b_spill.array[10] = 0;
        b_spill.array[0xb] = 0;
        b_spill.array[0xc] = 0;
        b_spill.array[0xd] = 0;
        b_spill.array[0xe] = 0;
        b_spill.array[0xf] = 0;
        *(undefined **)b_spill.array = &DAT_00289353;
        puVar2 = (c_spill->fd->net).str;
        *(int *)(b_spill.array + 0x18) = (c_spill->fd->net).len;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(uint8 **)(b_spill.array + 0x10) = puVar2;
        }
        else {
          runtime_gcWriteBarrierBX();
          b_spill.array = extraout_RAX;
        }
        pvVar1 = (c_spill->fd->laddr).data;
        *(runtime_itab **)(b_spill.array + 0x20) = (c_spill->fd->laddr).tab;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(void **)(b_spill.array + 0x28) = pvVar1;
        }
        else {
          runtime_gcWriteBarrierBX();
          b_spill.array = extraout_RAX_00;
        }
        pvVar1 = (c_spill->fd->raddr).data;
        *(runtime_itab **)(b_spill.array + 0x30) = (c_spill->fd->raddr).tab;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(void **)(b_spill.array + 0x38) = pvVar1;
        }
        else {
          runtime_gcWriteBarrierDX();
          b_spill.array = extraout_RAX_01;
        }
        *(long *)(b_spill.array + 0x40) = local_30;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(uint8 **)(b_spill.array + 0x48) = local_28;
          puVar2 = local_28;
          local_28 = b_spill.array;
        }
        else {
          runtime_gcWriteBarrierCX();
          puVar2 = local_28;
          local_28 = extraout_RAX_02;
        }
      }
      mVar4.~r2.tab = (runtime_itab *)local_28;
      mVar4.~r1 = local_38;
      mVar4.~r2.data = puVar2;
      return mVar4;
    }
  }
  mVar5.~r2.tab = (runtime_itab *)p.array;
  mVar5.~r1 = (int)&DAT_002b2e10;
  mVar5.~r2.data = pvVar1;
  return mVar5;
}

