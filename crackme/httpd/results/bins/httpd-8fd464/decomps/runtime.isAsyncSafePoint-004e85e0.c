
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.isAsyncSafePoint(runtime.g * gp, uintptr pc, uintptr sp,
   uintptr lr, bool ~r4, uintptr ~r5) */

multireturn_bool_uintptr_ runtime_isAsyncSafePoint(runtime_g *gp,uintptr pc,uintptr sp,uintptr lr)

{
  runtime_moduledata *prVar1;
  uint uVar2;
  runtime_m *prVar3;
  ulong uVar4;
  runtime__func *prVar5;
  char cVar6;
  undefined8 *puVar7;
  uint32 table;
  long lVar8;
  uintptr uVar9;
  char cVar10;
  long in_FS_OFFSET;
  runtime_funcInfo rVar12;
  string sVar13;
  string s;
  runtime_funcInfo f_00;
  runtime_funcInfo f_01;
  multireturn_bool_uintptr_ mVar14;
  multireturn_bool_uintptr_ mVar15;
  multireturn_bool_uintptr_ mVar16;
  multireturn_bool_uintptr_ mVar17;
  multireturn_bool_uintptr_ mVar18;
  multireturn_bool_uintptr_ mVar19;
  multireturn_bool_uintptr_ mVar20;
  multireturn_bool_uintptr_ mVar21;
  multireturn_int32_uintptr__conflict mVar22;
  runtime_g *gp_spill;
  uintptr pc_spill;
  uintptr sp_spill;
  uintptr lr_spill;
  runtime_pcvalueCache *local_70;
  runtime__func *local_68;
  bool local_60;
  int local_58;
  int local_50;
  runtime_funcInfo f;
  runtime_moduledata *prVar11;
  
  prVar5 = local_68;
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: string name@[???]
                       Unresolved local var: void * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar3 = gp_spill->m;
  mVar20.~r4 = SUB81(gp_spill,0);
  if (prVar3->curg != gp_spill) {
    mVar21.~r5 = pc;
    mVar21.~r4 = mVar20.~r4;
    return mVar21;
  }
  if ((((prVar3->p == 0) || (prVar3->locks != 0)) || (prVar3->mallocing != 0)) ||
     (((prVar3->preemptoff).len != 0 || (*(int *)(prVar3->p + 4) != 1)))) {
    mVar20.~r5 = pc;
    return mVar20;
  }
  uVar4 = (gp_spill->stack).lo;
  if ((sp_spill < uVar4) || (sp_spill - uVar4 < runtime_asyncPreemptStack)) {
    mVar14.~r4 = SUB81(uVar4,0);
    mVar14.~r5 = pc;
    return mVar14;
  }
  rVar12 = runtime_findfunc(pc_spill);
                    /* Unresolved local var: void * inldata@[???]
                       Unresolved local var: void * ~R0@[???]
                       Unresolved local var: runtime.inlinedCall[1048576] * inltree@[???]
                       Unresolved local var: int32 ix@[???] */
  if (local_70 == (runtime_pcvalueCache *)0x0) {
    mVar19.~r4 = SUB81(local_68,0);
    mVar19.~r5 = (uintptr)rVar12.datap;
    return mVar19;
  }
  local_68 = (runtime__func *)0x0;
  rVar12._func = prVar5;
  table = (uint32)local_70;
  mVar22 = runtime_pcdatavalue2(rVar12,table,lr);
  mVar18.~r5 = mVar22.~r4;
  if (local_58 != -1) {
    mVar18.~r4 = mVar22.~r3._0_1_;
    return mVar18;
  }
                    /* Unresolved local var: void * p@[???] */
  prVar1 = (runtime_moduledata *)((long)&local_70->entries[0][2].off + 3);
  if (*(byte *)((long)&local_70->entries[0][2].off + 3) < 2) {
                    /* Unresolved local var: void * p@[???] */
    puVar7 = (undefined8 *)0x0;
                    /* Unresolved local var: void * fd@[???] */
  }
  else {
    uVar2 = (uint)local_70->entries[0][2].targetpc;
    lVar8 = (long)&prVar1->pcHeader + (ulong)uVar2 * 4 + 1;
    if (((uint)lVar8 >> 2 & 1) != 0) {
      if ((table >> 2 & 1) != 0) {
        runtime_printlock();
        sVar13.len = (int)prVar1;
        sVar13.str = &DAT_0029ee6b;
        runtime_printstring(sVar13);
        runtime_printpointer(local_70);
        runtime_printnl();
        runtime_printunlock();
      }
      lVar8 = (long)&prVar1->pcHeader + (ulong)uVar2 * 4 + 5;
    }
    puVar7 = *(undefined8 **)(lVar8 + 8);
  }
  if ((puVar7 != (undefined8 *)0x0) && (puVar7 != &runtime_no_pointers_stackmap)) {
    f.datap = prVar1;
    f._func = prVar5;
    sVar13 = runtime_funcname(f);
    prVar11 = (runtime_moduledata *)sVar13.len;
    if (*(byte *)((long)&local_70->entries[0][2].off + 3) < 4) {
      lVar8 = 0;
    }
    else {
      uVar2 = (uint)local_70->entries[0][2].targetpc;
      prVar11 = (runtime_moduledata *)((long)&prVar1->pcHeader + (ulong)uVar2 * 4 + 1);
      if (((uint)prVar11 >> 2 & 1) != 0) {
        if ((table >> 2 & 1) != 0) {
          runtime_printlock();
          s.len = (int)prVar11;
          s.str = &DAT_0029ee6b;
          runtime_printstring(s);
          runtime_printpointer(local_70);
          runtime_printnl();
          runtime_printunlock();
        }
        prVar11 = (runtime_moduledata *)((long)&prVar1->pcHeader + (ulong)uVar2 * 4 + 5);
      }
      lVar8 = (prVar11->funcnametab).cap;
    }
    uVar9 = pc_spill;
    if ((lVar8 != 0) &&
       (f_00.datap = prVar11, f_00._func = prVar5,
       runtime_pcdatavalue(f_00,(uint32)pc_spill,lr,local_70), -1 < local_50)) {
      if (0xfffff < (ulong)(long)local_50) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      f_01._func = (runtime__func *)(ulong)*(uint *)(lVar8 + 0xc + (long)local_50 * 0x14);
      f_01.datap = prVar11;
      sVar13 = runtime_funcnameFromNameoff(f_01,(int32)prVar5);
      prVar11 = (runtime_moduledata *)sVar13.len;
      local_68 = (runtime__func *)pc_spill;
      uVar9 = 0;
    }
    cVar6 = (char)local_68;
    local_60 = SUB81(pc_spill,0);
    if ((long)uVar9 < 8) {
      cVar10 = '\0';
    }
    else {
      runtime_memequal();
      cVar10 = local_60;
    }
    if (cVar10 == '\0') {
      if ((long)uVar9 < 0x11) {
        cVar10 = '\0';
      }
      else {
        runtime_memequal();
        cVar10 = local_60;
      }
    }
    else {
      cVar10 = '\x01';
    }
    if (cVar10 == '\0') {
      if ((long)uVar9 < 8) {
        cVar6 = '\0';
      }
      else {
        runtime_memequal();
        cVar6 = local_60;
      }
      if (cVar6 == '\0') {
        mVar16.~r5 = (uintptr)prVar11;
        mVar16.~r4 = local_60;
        return mVar16;
      }
    }
    mVar15.~r5 = (uintptr)prVar11;
    mVar15.~r4 = (bool)cVar6;
    return mVar15;
  }
  mVar17.~r4 = SUB81(puVar7,0);
  mVar17.~r5 = (uintptr)prVar1;
  return mVar17;
}

