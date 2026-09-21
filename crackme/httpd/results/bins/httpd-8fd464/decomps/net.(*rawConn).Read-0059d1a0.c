
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*rawConn).Read(net.rawConn * c, func(uintptr)_bool * * f,
   error ~r1) */

error net___rawConn__Read(net_rawConn *c,func_uintptr__bool **f)

{
  func_uintptr__bool *pfVar1;
  runtime__type *prVar2;
  void *pvVar3;
  runtime_itab *prVar4;
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime_itab *extraout_RAX_01;
  runtime_itab *extraout_RAX_02;
  net_rawConn *pnVar5;
  undefined **ppuVar6;
  long in_FS_OFFSET;
  error eVar7;
  error eVar8;
  net_rawConn *c_spill;
  func_uintptr__bool **f_spill;
  runtime_interfacetype *local_30;
  runtime__type *local_28;
  
                    /* Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((c_spill != (net_rawConn *)0x0) && (c_spill->fd != (net_netFD *)0x0)) {
    internal_poll___FD__RawRead((internal_poll_FD *)f_spill,f);
    ppuVar6 = (undefined **)0x0;
    if (local_30 != (runtime_interfacetype *)0x0) {
      runtime_newobject((runtime__type *)&DAT_0026a420);
      f_spill[1] = (func_uintptr__bool *)&DAT_00000008;
      *f_spill = (func_uintptr__bool *)&DAT_0028cbc2;
      pfVar1 = (func_uintptr__bool *)(c_spill->fd->net).str;
      f_spill[3] = (func_uintptr__bool *)(c_spill->fd->net).len;
      if (runtime_writeBarrier._0_4_ == 0) {
        f_spill[2] = pfVar1;
        prVar4 = (runtime_itab *)f_spill;
        pnVar5 = c_spill;
      }
      else {
        runtime_gcWriteBarrierBX();
        prVar4 = extraout_RAX;
        pnVar5 = c_spill;
      }
      c_spill = (net_rawConn *)prVar4;
      prVar2 = (pnVar5->fd->laddr).data;
      ((runtime_itab *)((long)c_spill + 0x20))->inter =
           (runtime_interfacetype *)(pnVar5->fd->laddr).tab;
      if (runtime_writeBarrier._0_4_ == 0) {
        ((runtime_itab *)((long)c_spill + 0x20))->_type = prVar2;
      }
      else {
        runtime_gcWriteBarrierBX();
        c_spill = (net_rawConn *)extraout_RAX_00;
      }
      pvVar3 = (pnVar5->fd->raddr).data;
      *(runtime_itab **)&((runtime_itab *)((long)c_spill + 0x20))->hash = (pnVar5->fd->raddr).tab;
      if (runtime_writeBarrier._0_4_ == 0) {
        ((runtime_itab *)((long)c_spill + 0x20))->fun[0] = (uintptr)pvVar3;
      }
      else {
        runtime_gcWriteBarrierDX();
        c_spill = (net_rawConn *)extraout_RAX_01;
      }
      ((runtime_itab *)((long)c_spill + 0x40))->inter = local_30;
      if (runtime_writeBarrier._0_4_ == 0) {
        ((runtime_itab *)((long)c_spill + 0x40))->_type = local_28;
      }
      else {
        runtime_gcWriteBarrierCX();
        c_spill = (net_rawConn *)extraout_RAX_02;
      }
      ppuVar6 = &go_itab__net_OpError_error;
    }
    eVar7.data = ppuVar6;
    eVar7.tab = (runtime_itab *)c_spill;
    return eVar7;
  }
  eVar8.data = f;
  eVar8.tab = (runtime_itab *)&DAT_002b2e10;
  return eVar8;
}

