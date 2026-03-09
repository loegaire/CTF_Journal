
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*TCPConn).ReadFrom(net.TCPConn * c, io.Reader r, int64 ~r1,
   error ~r2) */

multireturn_int64_error_ net___TCPConn__ReadFrom(net_TCPConn *c,io_Reader r)

{
  net_netFD *pnVar1;
  uint8 *puVar2;
  byte bVar3;
  runtime__type *extraout_RAX;
  runtime__type *extraout_RAX_00;
  runtime__type *extraout_RAX_01;
  void *pvVar4;
  runtime__type *prVar5;
  long in_FS_OFFSET;
  multireturn_int64_error_ mVar6;
  multireturn_int64_error_ mVar7;
  io_Reader r_00;
  net_TCPConn *c_spill;
  io_Reader r_spill;
  runtime__type *local_50;
  byte local_40;
  undefined7 uStack_3f;
  runtime_itab *local_38;
  runtime__type *local_30;
  
  pvVar4 = r.data;
  r_00.tab = r.tab;
                    /* Unresolved local var: int64 n@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((c_spill->conn).fd != (net_netFD *)0x0) {
    local_50 = (runtime__type *)r_spill.tab;
    r_00.data = r_spill.data;
    net___TCPConn__readFrom(c_spill,r_00);
    prVar5 = local_30;
    if (local_38 != (runtime_itab *)0x0) {
      if (io_EOF.tab == local_38) {
        local_50 = local_30;
        runtime_ifaceeq((runtime_itab *)CONCAT71(uStack_3f,local_40),local_30,local_38);
        bVar3 = local_40 ^ 1;
      }
      else {
        bVar3 = 1;
      }
      if (bVar3 != 0) {
        runtime_newobject((runtime__type *)&DAT_0026a420);
        local_50->ptrdata = (uintptr)&DAT_00000008;
        local_50->size = (uintptr)&DAT_0028cbfa;
        pnVar1 = (c_spill->conn).fd;
        puVar2 = (pnVar1->net).str;
        local_50->equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)(pnVar1->net).len;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(uint8 **)&local_50->hash = puVar2;
        }
        else {
          runtime_gcWriteBarrierBX();
          local_50 = extraout_RAX;
        }
        pnVar1 = (c_spill->conn).fd;
        prVar5 = (pnVar1->laddr).data;
        ((runtime_itab *)&local_50->gcdata)->inter = (runtime_interfacetype *)(pnVar1->laddr).tab;
        if (runtime_writeBarrier._0_4_ == 0) {
          ((runtime_itab *)&local_50->str)->inter = (runtime_interfacetype *)prVar5;
        }
        else {
          runtime_gcWriteBarrierBX();
          local_50 = extraout_RAX_00;
        }
        pnVar1 = (c_spill->conn).fd;
        pvVar4 = (pnVar1->raddr).data;
        ((runtime_itab *)(local_50 + 1))->inter = (runtime_interfacetype *)(pnVar1->raddr).tab;
        if (runtime_writeBarrier._0_4_ == 0) {
          ((runtime_itab *)&local_50[1].ptrdata)->inter = pvVar4;
        }
        else {
          runtime_gcWriteBarrierDX();
          local_50 = extraout_RAX_01;
        }
        ((runtime_itab *)((long)(local_50 + 1) + 0x10))->inter = (runtime_interfacetype *)local_38;
        if (runtime_writeBarrier._0_4_ == 0) {
          ((runtime_itab *)((long)(local_50 + 1) + 0x18))->inter = (runtime_interfacetype *)local_30
          ;
        }
        else {
          runtime_gcWriteBarrierCX();
        }
        local_38 = (runtime_itab *)&go_itab__net_OpError_error;
      }
    }
    mVar6.~r2.tab = (runtime_itab *)prVar5;
    mVar6.~r1 = (int64)CONCAT71(uStack_3f,local_40);
    mVar6.~r2.data = local_38;
    return mVar6;
  }
  mVar7.~r2.tab = r_00.tab;
  mVar7.~r1 = (int64)&DAT_002b2e10;
  mVar7.~r2.data = pvVar4;
  return mVar7;
}

