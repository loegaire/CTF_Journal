
/* WARNING: Removing unreachable block (ram,0x0050648d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.pcvalue(runtime.funcInfo f, uint32 off, uintptr targetpc,
   runtime.pcvalueCache * cache, bool strict, int32 ~r5, uintptr ~r6) */

multireturn_int32_uintptr_
runtime_pcvalue(runtime_funcInfo f,uint32 off,uintptr targetpc,runtime_pcvalueCache *cache,
               bool strict)

{
  uint uVar1;
  uint32 uVar2;
  int32 iVar3;
  undefined1 auVar4 [12];
  ulong *puVar5;
  uint uVar6;
  runtime_moduledata *val;
  ulong uVar7;
  uintptr *pc;
  undefined1 first;
  long lVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  runtime_funcInfo f_00;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  __uint8 p;
  __uint8 s_04;
  __uint8 p_00;
  multireturn_int32_uintptr_ mVar11;
  multireturn_int32_uintptr_ mVar12;
  multireturn_int32_uintptr_ mVar13;
  multireturn___uint8_bool_ mVar14;
  ulong *in_stack_00000008;
  runtime_moduledata *datap;
  uint32 off_spill;
  uintptr targetpc_spill;
  runtime_pcvalueCache *cache_spill;
  bool strict_spill;
  uintptr *local_70;
  long local_60;
  char local_58;
  int32 local_4c;
  ulong local_48;
  ulong local_40 [2];
  long local_30;
  ulong *local_28;
  uint64 local_20 [2];
  long local_10;
  string sVar10;
  
                    /* Unresolved local var: uintptr prevpc@[???]
                       Unresolved local var: []uint8 p@[???]
                       Unresolved local var: uintptr pc@[???]
                       Unresolved local var: int32 val@[???] */
  while (local_20 <= *(uint64 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar9 = (ulong)off_spill;
  if (off_spill == 0) {
    auVar4._8_4_ = 0;
    auVar4._0_8_ = f.datap;
    return (multireturn_int32_uintptr_)(auVar4 << 0x20);
  }
  if (cache_spill != (runtime_pcvalueCache *)0x0) {
                    /* Unresolved local var: int i@[???] */
    for (lVar8 = 0; lVar8 < 8; lVar8 = lVar8 + 1) {
      mVar13.~r6 = cache_spill->entries + (targetpc_spill >> 3 & 1);
      if (((*mVar13.~r6)[lVar8].off == off_spill) &&
         ((*mVar13.~r6)[lVar8].targetpc == targetpc_spill)) {
        mVar13.~r5 = (*mVar13.~r6)[lVar8].val;
        return mVar13;
      }
    }
  }
  if (in_stack_00000008 != (ulong *)0x0) {
    if ((ulong)(datap->pctab).len < uVar9) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    local_40[0] = *in_stack_00000008;
    local_4c = -1;
    lVar8 = (datap->pctab).cap - uVar9;
    uVar9 = -lVar8 >> 0x3f & uVar9;
    val = datap;
    pc = (uintptr *)((datap->pctab).array + uVar9);
    while( true ) {
      puVar5 = local_40;
      p.len = (int)in_stack_00000008;
      p.array = (uint8 *)puVar5;
      p.cap = (int)&local_4c;
      local_48 = local_40[0];
      mVar14 = runtime_step(p,pc,(int32 *)val,SUB81(uVar9,0));
      first = (undefined1)uVar9;
      uVar7 = mVar14.newp.len;
      if (local_58 == '\0') break;
      val = (runtime_moduledata *)targetpc_spill;
      pc = local_70;
      lVar8 = local_60;
      if (targetpc_spill < local_40[0]) {
        if (cache_spill != (runtime_pcvalueCache *)0x0) {
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
          lVar8 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
                    /* Unresolved local var: uintptr x@[???]
                       Unresolved local var: runtime.pcvalueCacheEnt[8] * e@[???]
                       Unresolved local var: uint32 ci@[???] */
          uVar6 = *(uint *)(lVar8 + 0x128);
          uVar1 = *(uint *)(lVar8 + 300);
          *(uint *)(lVar8 + 0x128) = uVar1;
          uVar6 = uVar6 << 0x11 ^ uVar6;
          uVar6 = uVar1 >> 0x10 ^ uVar6 >> 7 ^ uVar1 ^ uVar6;
          *(uint *)(lVar8 + 300) = uVar6;
          uVar7 = targetpc_spill >> 3 & 1;
          uVar9 = (ulong)(uVar1 + uVar6 & 7);
          local_40[0] = uVar9 * 0x10;
          uVar2 = cache_spill->entries[uVar7][0].off;
          iVar3 = cache_spill->entries[uVar7][0].val;
          cache_spill->entries[uVar7][uVar9].targetpc = cache_spill->entries[uVar7][0].targetpc;
          cache_spill->entries[uVar7][uVar9].off = uVar2;
          cache_spill->entries[uVar7][uVar9].val = iVar3;
          cache_spill->entries[uVar7][0].targetpc = targetpc_spill;
          cache_spill->entries[uVar7][0].off = off_spill;
          cache_spill->entries[uVar7][0].val = local_4c;
        }
        mVar11.~r5 = (int32)local_48;
        mVar11.~r6 = local_40[0];
        return mVar11;
      }
    }
    if ((runtime_panicking == 0) && (uVar7 = (ulong)strict_spill, strict_spill)) {
      local_30 = local_60;
      f_00.datap._0_1_ = 1;
      f_00._func = (runtime__func *)in_stack_00000008;
      f_00.datap._1_7_ = 0;
      sVar10 = runtime_funcname(f_00);
      local_20[0] = local_40[0];
      local_28 = puVar5;
      local_10 = lVar8;
      runtime_printlock();
      sVar10.str = &DAT_002a4da1;
      runtime_printstring(sVar10);
      s.len = sVar10.len;
      s.str = (uint8 *)local_28;
      runtime_printstring(s);
      s_00.len = sVar10.len;
      s_00.str = &DAT_00287dc1;
      runtime_printstring(s_00);
      runtime_printhex(local_20[0]);
      s_01.len = sVar10.len;
      s_01.str = &DAT_0028ec4c;
      runtime_printstring(s_01);
      runtime_printhex(targetpc_spill);
      s_02.len = sVar10.len;
      s_02.str = &DAT_00288912;
      runtime_printstring(s_02);
      s_04.len = sVar10.len;
      s_04.array = (uint8 *)local_30;
      s_04.cap = (int)puVar5;
      runtime_printslice(s_04);
      runtime_printnl();
      runtime_printunlock();
      if ((ulong)off_spill <= (ulong)(datap->pctab).len) {
        local_40[0] = *in_stack_00000008;
        local_4c = -1;
        p_00.len._0_4_ = off_spill;
        p_00.array = (uint8 *)local_40;
        p_00.len._4_4_ = 0;
        p_00.cap = (int)&local_4c;
        mVar14 = runtime_step(p_00,(uintptr *)((datap->pctab).cap - (ulong)off_spill),
                              (int32 *)in_stack_00000008,(bool)first);
        s_03.len = mVar14.newp.len;
        s_03.str = (uint8 *)0x2a05e8;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_03);
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    mVar12.~r5 = (int32)local_70;
    mVar12.~r6 = uVar7;
    return mVar12;
  }
  if ((strict_spill) && (runtime_panicking == 0)) {
    local_20[0] = _DAT_00000000;
    runtime_printlock();
    runtime_printstring((string)ZEXT816(0x2a07e0));
    runtime_printhex(local_20[0]);
    runtime_printnl();
    runtime_printunlock();
                    /* WARNING: Subroutine does not return */
    runtime_throw((string)ZEXT816(0x297a27));
  }
  return (multireturn_int32_uintptr_)ZEXT112(strict_spill);
}

