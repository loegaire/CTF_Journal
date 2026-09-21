
/* WARNING: Unknown calling convention */

void runtime___pageAlloc__sysGrow(runtime_pageAlloc *p,uintptr base,uintptr limit)

{
  runtime_pallocSum *prVar1;
  void *pvVar2;
  runtime_offAddr rVar3;
  runtime_offAddr rVar4;
  runtime_offAddr rVar5;
  runtime_offAddr rVar6;
  runtime_addrRanges *addr;
  runtime_offAddr rVar7;
  long in_FS_OFFSET;
  runtime_addrRange a;
  runtime_addrRange a_00;
  string s;
  string s_00;
  string s_01;
  runtime_addrRange r;
  runtime_addrRange b;
  runtime_addrRange b_00;
  runtime_pageAlloc *p_spill;
  uintptr base_spill;
  uintptr limit_spill;
  runtime_offAddr local_80;
  runtime_offAddr local_78;
  runtime_offAddr local_70;
  uintptr local_68;
  code *local_30 [2];
  code *local_20;
  undefined **ppuStack_18;
  code **local_10;
  
  rVar3.a = local_80.a;
                    /* Unresolved local var: func(int,_runtime.addrRange)_(int,_int) * *
                       addrRangeToSummaryRange@[???]
                       Unresolved local var: func(int,_int,_int)_runtime.addrRange * *
                       summaryRangeToSumAddrRange@[???]
                       Unresolved local var: func(int,_runtime.addrRange)_runtime.addrRange * *
                       addrRangeToSumAddrRange@[???]
                       Unresolved local var: int inUseIndex@[???] */
  while (&local_10 <= *(code ****)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((base_spill & 0x3fffff) == 0) && ((limit_spill & 0x3fffff) == 0)) {
    local_30[0] = runtime___pageAlloc__sysGrow_func2;
    local_20 = runtime___pageAlloc__sysGrow_func3;
    ppuStack_18 = &PTR_runtime___pageAlloc__sysGrow_func1_002b3718;
    local_10 = local_30;
    addr = &p_spill->inUse;
    runtime___addrRanges__findSucc((runtime_addrRanges *)base_spill,(uintptr)addr);
    rVar6.a = 0;
                    /* Unresolved local var: int l@[???] */
    while( true ) {
      rVar4.a = local_78.a;
      if (4 < (long)rVar6.a) {
        return;
      }
                    /* Unresolved local var: int needIdxBase@[???]
                       Unresolved local var: int needIdxLimit@[???]
                       Unresolved local var: runtime.addrRange need@[???]
                       Unresolved local var: uintptr ~R0basea@[???]
                       Unresolved local var: uintptr ~R0limita@[???] */
      runtime_makeAddrRange(base_spill,(uintptr)addr);
      r.limit.a = local_80.a;
      r.base.a = rVar6.a;
      runtime___pageAlloc__sysGrow_func1((int)runtime___pageAlloc__sysGrow_func1,r);
      if (p_spill->summary[rVar6.a].len < (long)local_70.a) {
        if ((void *)p_spill->summary[rVar6.a].cap < local_70.a) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAcap();
        }
        p_spill->summary[rVar6.a].len = local_70.a;
      }
                    /* Unresolved local var: uintptr baseOffset@[???]
                       Unresolved local var: uintptr limitOffset@[???] */
      prVar1 = p_spill->summary[rVar6.a].array;
      if (p_spill->summary[rVar6.a].len == 0) break;
      rVar7.a = (local_78.a << 3 & -runtime_physPageSize) + (long)prVar1;
      a.limit.a = (long)prVar1 +
                  ((runtime_physPageSize + local_70.a * 8) - 1 & -runtime_physPageSize);
      if (0 < (long)rVar3.a) {
        if ((ulong)(p_spill->inUse).ranges.len <= rVar3.a - 1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        (*local_20)(rVar7.a,p_spill,&local_20);
        local_78.a = local_70.a;
        a.base.a = rVar4.a;
        b.limit.a = rVar7.a;
        b.base.a = local_70.a;
        runtime_addrRange_subtract(a,b);
        a.limit.a = local_68;
        rVar7.a = local_70.a;
      }
      rVar5.a = local_78.a;
      local_80.a = rVar4.a;
      pvVar2 = (void *)(p_spill->inUse).ranges.len;
      if ((long)rVar3.a < (long)pvVar2) {
        if (pvVar2 <= rVar3.a) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        (*local_20)(rVar7.a,(p_spill->inUse).ranges.array[rVar3.a].base.a,&local_20);
        local_80.a = local_78.a;
        local_78.a = local_70.a;
        a_00.limit.a = a.limit.a;
        a_00.base.a = rVar5.a;
        b_00.limit.a = rVar7.a;
        b_00.base.a = local_70.a;
        runtime_addrRange_subtract(a_00,b_00);
        a.limit.a = local_68;
        rVar7.a = local_70.a;
      }
      if (rVar7.a + 0x800000000000 < a.limit.a + 0x800000000000) {
        addr = (runtime_addrRanges *)(a.limit.a - rVar7.a);
      }
      else {
        addr = (runtime_addrRanges *)0x0;
      }
      if (addr != (runtime_addrRanges *)0x0) {
        local_80.a = (uintptr)p_spill->sysStat;
        runtime_sysMap((void *)local_80.a,(uintptr)addr,(runtime_sysMemStat *)0x800000000000);
      }
      rVar6.a = rVar6.a + 1;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  runtime_printlock();
  s.len = base;
  s.str = &DAT_00299ac5;
  runtime_printstring(s);
  runtime_printhex(base_spill);
  s_00.len = base;
  s_00.str = &DAT_0028ec92;
  runtime_printstring(s_00);
  runtime_printhex(limit_spill);
  runtime_printnl();
  runtime_printunlock();
  s_01.len = base;
  s_01.str = &DAT_002a8710;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_01);
}

