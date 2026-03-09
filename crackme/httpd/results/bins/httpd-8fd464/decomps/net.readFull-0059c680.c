
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.readFull(io.Reader r, []uint8 all, error err) */

multireturn___uint8_error__conflict5 net_readFull(io_Reader r)

{
  ulong uVar1;
  int in_RCX;
  ulong uVar2;
  runtime_itab *prVar3;
  ulong uVar4;
  runtime_itab *prVar5;
  runtime_itab *prVar6;
  long in_FS_OFFSET;
  runtime_slice old;
  multireturn___uint8_error__conflict5 mVar8;
  multireturn___uint8_error__conflict5 mVar9;
  io_Reader r_spill;
  ulong local_90;
  ulong local_88;
  runtime_itab *local_80;
  runtime_itab *local_78;
  ulong local_70;
  runtime_itab *local_28 [2];
  runtime_itab *local_18;
  runtime_itab *prVar7;
  
                    /* Unresolved local var: []uint8 buf@[???] */
  while (local_28 <= *(runtime_itab ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_makeslice((runtime__type *)&DAT_00225720,(int)r.data,in_RCX);
  uVar2 = 0;
  uVar4 = 0;
  prVar5 = (runtime_itab *)0x0;
  do {
    local_90 = 0;
    local_18 = prVar5;
    (*(code *)(r_spill.tab)->fun[0])();
    if (0x400 < local_88) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    local_28[0] = local_80;
    uVar4 = uVar4 + local_88;
    prVar6 = local_78;
    prVar7 = local_80;
    uVar1 = uVar2;
    prVar5 = local_18;
    if (uVar2 < uVar4) {
      old.len = (int)local_18;
      old.array = local_80;
      old.cap = (int)local_80;
      runtime_growslice((runtime__type *)&DAT_00225720,old,(int)local_78);
      uVar1 = local_70;
      prVar5 = local_80;
      local_90 = uVar2;
      local_88 = uVar4;
    }
    uVar2 = uVar1;
    runtime_memmove();
    if (io_EOF.tab == local_28[0]) {
      prVar3 = local_78;
      runtime_ifaceeq(io_EOF.data,local_80,local_78);
      local_28[0] = prVar3;
      if ((char)local_90 != '\0') {
        mVar9.all.len = (int)local_80;
        mVar9.all.array = (uint8 *)uVar2;
        mVar9.all.cap = (int)prVar3;
        mVar9.err.data = prVar6;
        mVar9.err.tab = prVar7;
        return mVar9;
      }
    }
  } while (local_80 == (runtime_itab *)0x0);
  mVar8.all.len = (int)local_80;
  mVar8.all.array = (uint8 *)local_78;
  mVar8.all.cap = (int)local_28[0];
  mVar8.err.data = prVar6;
  mVar8.err.tab = prVar7;
  return mVar8;
}

