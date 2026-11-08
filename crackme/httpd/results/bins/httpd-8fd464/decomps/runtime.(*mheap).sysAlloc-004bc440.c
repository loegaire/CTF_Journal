
/* WARNING: Removing unreachable block (ram,0x004bc7a5) */
/* WARNING: Removing unreachable block (ram,0x004bc78b) */
/* WARNING: Removing unreachable block (ram,0x004bcad9) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*mheap).sysAlloc(runtime.mheap * h, uintptr n, void * v,
   uintptr size) */

multireturn_void___uintptr_ runtime___mheap__sysAlloc(runtime_mheap *h,uintptr n)

{
  undefined1 *v;
  long lVar1;
  runtime_arenaIdx *prVar2;
  ulong uVar3;
  runtime_sysMemStat *v_00;
  runtime_sysMemStat *prVar4;
  runtime_arenaHint *sysStat;
  runtime_arenaHint *prVar5;
  uintptr align;
  runtime_arenaHint *prVar6;
  ulong uVar7;
  runtime_sysMemStat *in_RDI;
  runtime_mlink *prVar8;
  runtime_mlink *prVar9;
  uint8 *puVar10;
  long in_FS_OFFSET;
  multireturn_void___uintptr_ mVar11;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  runtime_mheap *h_spill;
  uintptr n_spill;
  runtime_sysMemStat *local_88;
  runtime_sysMemStat *local_80;
  runtime_sysMemStat *local_78;
  runtime_sysMemStat *local_18;
  runtime_sysMemStat *local_10;
  
                    /* Unresolved local var: uintptr ~R0@[???] */
  while (&local_18 <= *(runtime_sysMemStat ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sysStat = (runtime_arenaHint *)(n_spill + 0x3ffffff & 0xfffffffffc000000);
  local_88 = (runtime_sysMemStat *)0x4000000;
  local_80 = &runtime_memstats.heap_sys;
  prVar5 = sysStat;
  runtime___linearAlloc__alloc((runtime_linearAlloc *)h_spill,n,(uintptr)sysStat,in_RDI);
  v_00 = local_78;
  if (local_78 == (runtime_sysMemStat *)0x0) {
    while (prVar6 = h_spill->arenaHints, prVar6 != (runtime_arenaHint *)0x0) {
      prVar9 = (runtime_mlink *)prVar6->addr;
      if (prVar6->down != false) {
        prVar9 = (runtime_mlink *)((long)prVar6->addr - (long)sysStat);
      }
      prVar8 = (runtime_mlink *)((long)&prVar9->next + (long)&sysStat->addr);
      if (prVar8 < prVar9) {
        v_00 = (runtime_sysMemStat *)0x0;
      }
      else if ((ulong)((long)&prVar8[0xfffffffffff].next + 7U) >> 0x1a < 0x400000) {
        runtime_sysReserve(v_00,(uintptr)sysStat);
        v_00 = local_88;
      }
      else {
        v_00 = (runtime_sysMemStat *)0x0;
      }
      if ((runtime_mlink *)v_00 == prVar9) {
        if (prVar6->down != false) {
          prVar8 = prVar9;
        }
        prVar6->addr = (uintptr)prVar8;
        prVar6 = sysStat;
        goto LAB_004bc960;
      }
      if (v_00 != (runtime_sysMemStat *)0x0) {
        local_88 = (runtime_sysMemStat *)0x0;
        local_10 = v_00;
        runtime_sysFree(v_00,(uintptr)sysStat,&prVar5->addr);
        v_00 = local_10;
      }
                    /* Unresolved local var: uintptr p@[???] */
      h_spill->arenaHints = prVar6->next;
      (h_spill->arenaHintAlloc).inuse =
           (h_spill->arenaHintAlloc).inuse - (h_spill->arenaHintAlloc).size;
      prVar6->addr = (uintptr)(h_spill->arenaHintAlloc).list;
      (h_spill->arenaHintAlloc).list = (runtime_mlink *)prVar6;
                    /* Unresolved local var: uintptr p@[???]
                       Unresolved local var: string bad@[???] */
    }
                    /* Unresolved local var: runtime.arenaHint * hint@[???] */
    prVar6 = (runtime_arenaHint *)0x0;
LAB_004bc960:
    if (prVar6 == (runtime_arenaHint *)0x0) {
      runtime_sysReserveAligned(sysStat,0,(uintptr)prVar5);
      local_10 = &runtime_memstats.heap_sys;
      runtime___fixalloc__alloc((runtime_fixalloc *)h_spill);
      sysStat->addr = (uintptr)local_10;
      sysStat->down = true;
      sysStat->next = runtime_mheap_.arenaHints;
      runtime_mheap_.arenaHints = sysStat;
      runtime___fixalloc__alloc(&h_spill->arenaHintAlloc);
      sysStat->addr = (uintptr)local_10;
      sysStat->next = runtime_mheap_.arenaHints;
      prVar6 = (runtime_arenaHint *)0x0;
      v_00 = local_10;
      runtime_mheap_.arenaHints = sysStat;
    }
    sysStat = prVar6;
    v = (undefined1 *)((long)v_00 + (long)&sysStat->addr);
    if (v < v_00) {
      puVar10 = &DAT_0000001c;
    }
    else if ((ulong)(v_00 + 0x100000000000) >> 0x1a < 0x400000) {
      puVar10 = (uint8 *)0x0;
      if (0x3fffff < (ulong)(v + 0x7fffffffffff) >> 0x1a) {
        puVar10 = &DAT_00000020;
      }
    }
    else {
      puVar10 = &DAT_00000021;
    }
    if (puVar10 != (uint8 *)0x0) {
      runtime_printlock();
      s_02.len = (int)sysStat;
      s_02.str = (uint8 *)0x2a3346;
      runtime_printstring(s_02);
      runtime_printhex((uint64)v_00);
      s_03.len = (int)sysStat;
      s_03.str = &DAT_00287787;
      runtime_printstring(s_03);
      runtime_printhex((uint64)v);
      s_04.len = (int)sysStat;
      s_04.str = (uint8 *)0x2a1b68;
      runtime_printstring(s_04);
      s_05.len = (int)sysStat;
      s_05.str = puVar10;
      runtime_printstring(s_05);
      runtime_printnl();
      runtime_printunlock();
      s_06.len = (int)sysStat;
      s_06.str = &DAT_002a8516;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_06);
    }
    if (((ulong)v_00 & 0x3ffffff) != 0) {
      s_01.len = (int)sysStat;
      s_01.str = (uint8 *)0x2a3199;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_01);
    }
  }
  align = (ulong)(v_00 + 0x100000000000) >> 0x1a;
  local_10 = v_00;
  while( true ) {
    if ((ulong)((long)&sysStat[0x55555555555].addr + (long)((long)local_10 + 7U)) >> 0x1a < align) {
      mVar11.size = align;
      mVar11.v = v_00;
      return mVar11;
    }
    prVar4 = (runtime_sysMemStat *)h_spill->arenas[0];
    if (h_spill->arenas[0] == (runtime_heapArena *(*) [4194304])0x0) {
      runtime_persistentalloc((uintptr)v_00,align,&sysStat->addr);
      if (local_80 == (runtime_sysMemStat *)0x0) {
        s_00.len = align;
        s_00.str = &DAT_002a5ff5;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_00);
      }
      LOCK();
      h_spill->arenas[0] = (runtime_heapArena *(*) [4194304])local_80;
      UNLOCK();
      prVar4 = local_80;
    }
    if (0x3fffff < align) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    if (prVar4[align] != 0) {
      s.len = align;
      s.str = &DAT_0029eb96;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    local_80 = &runtime_memstats.gcMiscSys;
    prVar5 = sysStat;
    local_18 = prVar4 + align;
    runtime___linearAlloc__alloc
              ((runtime_linearAlloc *)&runtime_memstats.gcMiscSys,align,(uintptr)sysStat,local_10);
    prVar4 = local_78;
    if (local_78 == (runtime_sysMemStat *)0x0) {
      runtime_persistentalloc(0xd025b8,align,&prVar5->addr);
      prVar4 = &runtime_memstats.gcMiscSys;
    }
    lVar1 = (h_spill->allArenas).cap;
    if ((h_spill->allArenas).len == lVar1) {
                    /* Unresolved local var: uintptr size@[???]
                       Unresolved local var: runtime.notInHeap * newArray@[???] */
      uVar7 = lVar1 << 4;
      if (uVar7 == 0) {
        uVar7 = runtime_physPageSize;
      }
      runtime_persistentalloc(0xd025b8,(uintptr)h_spill,&prVar5->addr);
      prVar2 = (h_spill->allArenas).array;
      (h_spill->allArenas).array = (runtime_arenaIdx *)0xd025b8;
      (h_spill->allArenas).cap = uVar7 >> 3;
      if ((h_spill->allArenas).array != prVar2) {
        runtime_memmove();
      }
    }
    uVar3 = (h_spill->allArenas).len;
    uVar7 = uVar3 + 1;
    if ((ulong)(h_spill->allArenas).cap < uVar7) break;
    (h_spill->allArenas).len = uVar7;
    if (uVar7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
                    /* Unresolved local var: runtime.heapArena *[4194304] * l2@[???]
                       Unresolved local var: runtime.heapArena * r@[???] */
    (h_spill->allArenas).array[uVar3] = align;
    LOCK();
    v_00 = (runtime_sysMemStat *)*local_18;
    *local_18 = (runtime_sysMemStat)prVar4;
    UNLOCK();
    align = align + 1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAcap();
}

