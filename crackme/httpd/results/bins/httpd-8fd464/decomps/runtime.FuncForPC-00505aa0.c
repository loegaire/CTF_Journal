
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.FuncForPC(uintptr pc, runtime.Func * ~r1) */

runtime_Func * runtime_FuncForPC(uintptr pc)

{
  uint uVar1;
  runtime__func *prVar2;
  runtime__func *extraout_RAX;
  runtime__func *extraout_RAX_00;
  long lVar3;
  runtime_pcvalueCache *in_RSI;
  undefined1 strict;
  uintptr in_RDI;
  undefined1 in_R8B;
  long in_FS_OFFSET;
  string s;
  runtime_funcInfo f;
  runtime_funcInfo f_00;
  runtime_funcInfo f_01;
  uintptr pc_spill;
  runtime_moduledata *local_80;
  runtime__func *local_78;
  uint7 uStack_5f;
  uint local_58;
  
                    /* Unresolved local var: void * ~R0@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_findfunc(pc_spill);
                    /* Unresolved local var: void * inldata@[???]
                       Unresolved local var: void * ~R0@[???]
                       Unresolved local var: int32 ix@[???] */
                    /* Unresolved local var: runtime.inlinedCall[1048576] * inltree@[???]
                       Unresolved local var: runtime.funcinl * fi@[???]
                       Unresolved local var: string name@[???]
                       Unresolved local var: string file@[???] */
  if (local_80 == (runtime_moduledata *)0x0) {
    return (runtime_Func *)local_78;
  }
                    /* Unresolved local var: void * p@[???] */
  if (*(byte *)((long)&(local_80->cutab).len + 3) < 4) {
    lVar3 = 0;
  }
  else {
    uVar1 = *(uint *)&(local_80->cutab).array;
    lVar3 = (long)&(local_80->cutab).len + (ulong)uVar1 * 4 + 4;
    if (((uint)lVar3 >> 2 & 1) != 0) {
      if (((uint)local_80 >> 2 & 1) != 0) {
        runtime_printlock();
        s.len = (int)local_80;
        s.str = &DAT_0029ee6b;
        runtime_printstring(s);
        runtime_printpointer(local_80);
        runtime_printnl();
        runtime_printunlock();
      }
      lVar3 = (long)&(local_80->cutab).cap + (ulong)uVar1 * 4;
    }
    lVar3 = *(long *)(lVar3 + 0x18);
  }
  prVar2 = local_78;
  if (lVar3 != 0) {
    f.datap = local_80;
    f._func = local_78;
    runtime_pcdatavalue1(f,(uint32)pc_spill,in_RDI,in_RSI,(bool)in_R8B);
    strict = (undefined1)in_RDI;
    prVar2 = (runtime__func *)(ulong)local_58;
    if (-1 < (int)local_58) {
      if (0xfffff < (ulong)(long)(int)local_58) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      f_00._func = (runtime__func *)(ulong)*(uint *)(lVar3 + 0xc + (long)(int)local_58 * 0x14);
      f_00.datap = local_80;
      runtime_funcnameFromNameoff(f_00,(uint)local_80);
      f_01.datap = (runtime_moduledata *)pc_spill;
      f_01._func = (runtime__func *)pc_spill;
      runtime_funcline1(f_01,0,(bool)strict);
      lVar3 = (ulong)uStack_5f << 8;
      runtime_newobject((runtime__type *)0x0);
      *(runtime_pcHeader **)&local_78->nameoff = local_80->pcHeader;
      local_78->pcfile = 0;
      local_78->pcln = 0;
      if (runtime_writeBarrier._0_4_ == 0) {
        local_78->deferreturn = (undefined4)pc_spill;
        local_78->pcsp = pc_spill._4_4_;
      }
      else {
        runtime_gcWriteBarrierCX();
        local_78 = extraout_RAX;
      }
      local_78->funcID = (char)lVar3;
      local_78->flag = (char)((ulong)lVar3 >> 8);
      local_78->_[0] = (char)((ulong)lVar3 >> 0x10);
      local_78->nfuncdata = (char)((ulong)lVar3 >> 0x18);
      *(int *)&local_78->field_0x2c = (int)((ulong)lVar3 >> 0x20);
      if (runtime_writeBarrier._0_4_ == 0) {
        local_78->npcdata = 0;
        local_78->cuOffset = 0;
      }
      else {
        runtime_gcWriteBarrierCX();
        local_78 = extraout_RAX_00;
      }
      local_78[1].entry = (long)(int)local_58;
      return (runtime_Func *)local_78;
    }
  }
  return (runtime_Func *)prVar2;
}

