
/* WARNING: Unknown calling convention */

void runtime_markrootSpans(runtime_gcWork *gcw,int shard)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  runtime_heapArena *prVar4;
  runtime_mspan *prVar5;
  runtime_gcWork *gcw_00;
  uint32 uVar6;
  ulong uVar7;
  long lVar8;
  uintptr b0;
  ulong uVar9;
  runtime_special *ptrmask;
  runtime_stackScanState *stk;
  runtime_gcWork *prVar10;
  runtime_gcWork *gcw_01;
  ulong uVar11;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  runtime_gcWork *gcw_spill;
  int shard_spill;
  
                    /* Unresolved local var: uint32 sg@[DW_OP_reg3(RBX)]
                       Unresolved local var: runtime.arenaIdx ai@[???]
                       Unresolved local var: runtime.heapArena * ha@[???]
                       Unresolved local var: uint arenaPage@[???]
                       Unresolved local var: []uint8 specialsbits@[???] */
  while (uVar6 = runtime_mheap_.sweepgen,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar7 = (long)(((ulong)(shard_spill >> 0x3f) >> 0x3c) + shard_spill) >> 4;
  if ((ulong)runtime_mheap_.markArenas.len <= uVar7) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (runtime_mheap_.markArenas.array[uVar7] < 0x400000) {
    prVar4 = (*runtime_mheap_.arenas[0])[runtime_mheap_.markArenas.array[uVar7]];
    prVar10 = (runtime_gcWork *)((shard_spill & 0xfU) * 0x200);
    uVar7 = (ulong)prVar10 >> 3;
    if (uVar7 < 0x401) {
      if (-(uVar7 - 0x400) < 0x40) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      lVar8 = 0;
                    /* Unresolved local var: int i@[???] */
      do {
        if (0x3f < lVar8) {
          return;
        }
                    /* Unresolved local var: uint8 specials@[???] */
        bVar1 = "*asn1.stringEncoder"
                [(long)(prVar4->bitmap + lVar8 + (uVar7 & (long)(uVar7 - 0x400) >> 0x3f) + 8)];
        if (bVar1 != 0) {
          for (uVar9 = 0; uVar9 < 8; uVar9 = uVar9 + 1) {
                    /* Unresolved local var: runtime.mspan * s@[???] */
            if ((bVar1 & (byte)(1 << ((byte)uVar9 & 0x1f))) != 0) {
              uVar11 = (long)&prVar10->wbuf1 + uVar9 + lVar8 * 8;
              if (0x1fff < uVar11) {
                    /* WARNING: Subroutine does not return */
                runtime_panicIndexU();
              }
              prVar5 = prVar4->spans[uVar11];
                    /* Unresolved local var: runtime.mSpanState state@[???] */
              bVar2 = (prVar5->state).s;
              if (bVar2 != 1) {
                runtime_printlock();
                s_01.len._0_4_ = uVar6;
                s_01.str = &DAT_002902d6;
                s_01.len._4_4_ = 0;
                runtime_printstring(s_01);
                runtime_printuint((ulong)bVar2);
                runtime_printnl();
                runtime_printunlock();
                s_02.len._0_4_ = uVar6;
                s_02.str = &DAT_002a7752;
                s_02.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
                runtime_throw(s_02);
              }
              if (((runtime_useCheckmark == false) && (uVar3 = prVar5->sweepgen, uVar3 != uVar6)) &&
                 (uVar3 != uVar6 + 3)) {
                runtime_printlock();
                s.len._0_4_ = uVar6;
                s.str = &DAT_0028a146;
                s.len._4_4_ = 0;
                runtime_printstring(s);
                runtime_printuint((ulong)uVar3);
                runtime_printsp();
                runtime_printuint((ulong)uVar6);
                runtime_printnl();
                runtime_printunlock();
                s_00.len._0_4_ = uVar6;
                s_00.str = &DAT_002998e5;
                s_00.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
                runtime_throw(s_00);
              }
              gcw_01 = prVar10;
              runtime_lock2(&prVar5->speciallock);
                    /* Unresolved local var: runtime.special * sp@[???] */
              for (ptrmask = prVar5->specials; ptrmask != (runtime_special *)0x0;
                  ptrmask = ptrmask->next) {
                    /* Unresolved local var: uintptr p@[???]
                       Unresolved local var: runtime.specialfinalizer * spf@[???] */
                if (ptrmask->kind == 1) {
                  gcw_00 = (runtime_gcWork *)prVar5->elemsize;
                  stk = (runtime_stackScanState *)prVar5->startAddr;
                  if (gcw_00 == (runtime_gcWork *)0x0) {
                    /* WARNING: Subroutine does not return */
                    runtime_panicdivide();
                  }
                  runtime_scanobject(((ulong)ptrmask->offset / (ulong)gcw_00) * (long)gcw_00,gcw_00)
                  ;
                  runtime_scanblock(b0,(uintptr)gcw_00,(uint8 *)ptrmask,gcw_01,stk);
                }
              }
              runtime_unlock2(&prVar5->speciallock);
            }
                    /* Unresolved local var: uint j@[???] */
          }
        }
        lVar8 = lVar8 + 1;
      } while( true );
    }
    runtime_panicSliceBU();
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndexU();
}

