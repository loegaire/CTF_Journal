
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*conn).SetWriteDeadline(net.conn * c, time.Time t, error ~r1)
    */

error net___conn__SetWriteDeadline(net_conn *c,time_Time t)

{
  uint8 *puVar1;
  void *pvVar2;
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime_itab *extraout_RAX_01;
  int in_RSI;
  time_Location *ptVar3;
  long in_FS_OFFSET;
  error eVar4;
  error eVar5;
  error eVar6;
  time_Time t_00;
  net_conn *c_spill;
  time_Time t_spill;
  runtime_interfacetype *local_28;
  runtime__type *local_20;
  
  ptVar3 = t.loc;
  t_00.wall = (void *)t.wall;
                    /* Unresolved local var: uint8 * ~R0.data@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((c_spill != (net_conn *)0x0) && (c_spill->fd != (net_netFD *)0x0)) {
    t_00.ext = (int64)c_spill->fd;
    t_00.loc = ptVar3;
    eVar4 = internal_poll_setDeadlineImpl((internal_poll_FD *)t_spill.loc,t_00,in_RSI);
    eVar6.data = eVar4.data;
                    /* Unresolved local var: error err@[???] */
    if (local_28 != (runtime_interfacetype *)0x0) {
      runtime_newobject((runtime__type *)&DAT_0026a420);
      *(undefined8 *)(t_spill.wall + 8) = 3;
      *(undefined **)t_spill.wall = &DAT_00287cde;
      puVar1 = (c_spill->fd->net).str;
      *(int *)(t_spill.wall + 0x18) = (c_spill->fd->net).len;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(uint8 **)(t_spill.wall + 0x10) = puVar1;
      }
      else {
        runtime_gcWriteBarrierBX();
        t_spill.wall = (uint64)extraout_RAX;
      }
      ((runtime_itab *)(t_spill.wall + 0x20))->inter = (runtime_interfacetype *)0x0;
      ((runtime_itab *)(t_spill.wall + 0x20))->_type = (runtime__type *)0x0;
      pvVar2 = (c_spill->fd->laddr).data;
      *(runtime_itab **)&((runtime_itab *)(t_spill.wall + 0x20))->hash = (c_spill->fd->laddr).tab;
      if (runtime_writeBarrier._0_4_ == 0) {
        ((runtime_itab *)(t_spill.wall + 0x20))->fun[0] = (uintptr)pvVar2;
      }
      else {
        runtime_gcWriteBarrierDX();
        t_spill.wall = (uint64)extraout_RAX_00;
      }
      ((runtime_itab *)(t_spill.wall + 0x40))->inter = local_28;
      if (runtime_writeBarrier._0_4_ == 0) {
        ((runtime_itab *)(t_spill.wall + 0x40))->_type = local_20;
      }
      else {
        runtime_gcWriteBarrierCX();
        t_spill.wall = (uint64)extraout_RAX_01;
      }
      eVar5.data = puVar1;
      eVar5.tab = (runtime_itab *)t_spill.wall;
      return eVar5;
    }
    eVar6.tab = (runtime_itab *)local_20;
    return eVar6;
  }
  eVar4.data = t_00.wall;
  eVar4.tab = (runtime_itab *)&DAT_002b2e10;
  return eVar4;
}

