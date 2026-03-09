
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pageAlloc).find(runtime.pageAlloc * p, uintptr npages,
   uintptr ~r1, runtime.offAddr ~r2) */

multireturn_uintptr_runtime_offAddr_ runtime___pageAlloc__find(runtime_pageAlloc *p,uintptr npages)

{
  ulong uVar1;
  int64 v;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  uint64 v_00;
  ulong uVar5;
  ulong uVar6;
  uint64 uVar7;
  uint64 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  bool bVar14;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  string s_09;
  string s_10;
  string s_11;
  string s_12;
  string s_13;
  string s_14;
  string s_15;
  string s_16;
  string s_17;
  string s_18;
  multireturn_uintptr_runtime_offAddr_ mVar15;
  multireturn_uintptr_runtime_offAddr_ mVar16;
  string s_19;
  string s_20;
  string s_21;
  string s_22;
  string s_23;
  string s_24;
  string s_25;
  runtime_pageAlloc *p_spill;
  uintptr npages_spill;
  uintptr local_118;
  long local_110;
  long local_108;
  uint64 local_e0;
  ulong local_a8;
  ulong local_a0;
  long local_98;
  ulong local_90;
  ulong local_80;
  long local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  uint local_58;
  runtime_pageAlloc *local_50;
  ulong local_48;
  uintptr local_40;
  ulong local_38;
  runtime_pageAlloc *local_30;
  uintptr uStack_28;
  long local_20;
  code *local_18;
  runtime_pageAlloc **pprStack_10;
  
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: func(runtime.offAddr,_uintptr) * * foundFree@[???]
                       Unresolved local var: runtime.pallocSum lastSum@[???]
                       Unresolved local var: int lastSumIdx@[???]
                       Unresolved local var: runtime.chunkIdx ci@[???]
                       Unresolved local var: uint j@[???]
                       Unresolved local var: uint searchIdx@[???]
                       Unresolved local var: uintptr addr@[???]
                       Unresolved local var: uintptr searchAddr@[???]
                       Unresolved local var:
                       struct_{_runtime.base_runtime.offAddr;_runtime.bound_runtime.offAddr_}
                       firstFree@[???] */
  while (&local_a8 <= *(ulong **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_30 = (runtime_pageAlloc *)runtime_minOffAddr.a;
  uStack_28 = runtime_maxOffAddr.a;
  local_18 = runtime___pageAlloc__find_func1;
  pprStack_10 = &local_30;
  lVar3 = 0;
  uVar10 = 0;
  uVar13 = 0xffffffffffffffff;
  uVar6 = 0;
LAB_004db68c:
  if (4 < lVar3) {
    if (0x1fff < uVar10 >> 0xd) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    local_68 = uVar10;
    runtime___pallocBits__find
              ((runtime_pallocBits *)npages_spill,(uintptr)p_spill,(uVar10 & 0x1fff) * 0x80);
    if (local_110 != -1) {
      local_40 = local_68 * 0x400000;
      lVar3 = local_108 * 0x2000 + local_40;
      lVar9 = local_68 + 1;
      (*local_18)(lVar3 + -0x800000000000,0xffff800000000000,&local_18);
      runtime___pageAlloc__findMappedAddr(local_30,(runtime_offAddr)(lVar9 * 0x400000 - lVar3));
      return (multireturn_uintptr_runtime_offAddr_)(ZEXT816(0xffff800000000000) << 0x40);
    }
                    /* Unresolved local var: runtime.pallocSum sum@[???]
                       Unresolved local var: uint ~R0@[???] */
    if (local_68 < (ulong)p_spill->summary[4].len) {
      uVar10 = p_spill->summary[4].array[local_68];
      uVar7 = uVar10 & 0x1fffff;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar7 = 0x200000;
      }
      if ((long)uVar10 < 0) {
        uVar8 = 0x200000;
        v_00 = 0x200000;
      }
      else {
        uVar8 = uVar10 >> 0x15 & 0x1fffff;
        v_00 = uVar10 >> 0x2a & 0x1fffff;
      }
      runtime_printlock();
      s.len = uVar8;
      s.str = &DAT_0029a34a;
      runtime_printstring(s);
      runtime_printint(v);
      s_00.len = uVar8;
      s_00.str = &DAT_00287839;
      runtime_printstring(s_00);
      runtime_printint(local_68);
      s_01.len = uVar8;
      s_01.str = &DAT_00288b38;
      runtime_printstring(s_01);
      runtime_printuint(uVar7);
      s_02.len = uVar8;
      s_02.str = &DAT_00287787;
      runtime_printstring(s_02);
      runtime_printuint(uVar8);
      s_03.len = uVar8;
      s_03.str = &DAT_00287787;
      runtime_printstring(s_03);
      runtime_printuint(v_00);
      s_04.len = uVar8;
      s_04.str = &DAT_00287783;
      runtime_printstring(s_04);
      runtime_printunlock();
      runtime_printlock();
      s_05.len = uVar8;
      s_05.str = &DAT_0029acec;
      runtime_printstring(s_05);
      runtime_printuint(npages_spill);
      runtime_printnl();
      runtime_printunlock();
      s_06.len = uVar8;
      s_06.str = &DAT_00299865;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_06);
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  uVar11 = -(ulong)(runtime_levelBits[lVar3] < 0x40);
  bVar4 = (byte)runtime_levelBits[lVar3];
  uVar12 = 1L << (bVar4 & 0x3f) & uVar11;
  uVar1 = runtime_levelLogPages[lVar3];
  uVar11 = uVar10 << (bVar4 & 0x3f) & uVar11;
  uVar10 = p_spill->summary[lVar3].cap;
  if (uVar10 < uVar11 + uVar12) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAcap();
  }
  if (uVar11 + uVar12 < uVar11) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  lVar9 = (long)p_spill->summary[lVar3].array + (uVar11 << 3 & (long)(uVar11 - uVar10) >> 0x3f);
                    /* Unresolved local var: int searchIdx@[???] */
  uVar10 = (p_spill->searchAddr).a + 0x800000000000 >> ((byte)runtime_levelShift[lVar3] & 0x3f) &
           -(ulong)(runtime_levelShift[lVar3] < 0x40);
  if ((-uVar12 & uVar10) == uVar11) {
    uVar10 = uVar12 - 1 & uVar10;
  }
  else {
    uVar10 = 0;
  }
                    /* Unresolved local var: int j@[???] */
  uVar5 = 0;
  local_60 = 0;
  local_a8 = uVar13;
  local_a0 = uVar6;
  local_98 = lVar3;
  local_90 = uVar10;
  local_68 = uVar11;
  local_38 = uVar12;
  local_20 = lVar9;
  do {
    uVar2 = local_60;
    uVar13 = uVar5;
    if ((long)uVar12 <= (long)uVar10) {
LAB_004dbda2:
      if (npages_spill <= uVar13) {
        local_50 = (runtime_pageAlloc *)runtime_levelShift[lVar3];
        local_60 = uVar2;
        runtime___pageAlloc__findMappedAddr(local_50,(runtime_offAddr)p_spill);
        mVar16.~r2.a = local_60 * 0x2000;
        mVar16.~r1 = local_118;
        return mVar16;
      }
      if (lVar3 != 0) {
        uVar7 = uVar6 & 0x1fffff;
        if ((uVar6 & 0x8000000000000000) != 0) {
          uVar7 = 0x200000;
        }
        bVar14 = (long)uVar6 < 0;
        if (bVar14) {
          local_e0 = 0x200000;
        }
        else {
          local_e0 = uVar6 >> 0x15 & 0x1fffff;
          bVar14 = (long)local_a0 < 0;
          uVar6 = local_a0;
        }
        if (bVar14) {
          uVar8 = 0x200000;
        }
        else {
          uVar8 = uVar6 >> 0x2a & 0x1fffff;
        }
        runtime_printlock();
        s_07.len = (int)p_spill;
        s_07.str = &DAT_0029a34a;
        runtime_printstring(s_07);
        runtime_printint(local_98);
        s_08.len = (int)p_spill;
        s_08.str = &DAT_00287839;
        runtime_printstring(s_08);
        runtime_printint(local_a8);
        s_09.len = (int)p_spill;
        s_09.str = &DAT_00287fb5;
        runtime_printstring(s_09);
        runtime_printuint(uVar7);
        s_10.len = (int)p_spill;
        s_10.str = &DAT_00287787;
        runtime_printstring(s_10);
        runtime_printuint(local_e0);
        s_11.len = (int)p_spill;
        s_11.str = &DAT_00287787;
        runtime_printstring(s_11);
        runtime_printuint(uVar8);
        runtime_printnl();
        runtime_printunlock();
        runtime_printlock();
        s_12.len = (int)p_spill;
        s_12.str = &DAT_0029a317;
        runtime_printstring(s_12);
        runtime_printint(local_98);
        s_13.len = (int)p_spill;
        s_13.str = &DAT_00290995;
        runtime_printstring(s_13);
        runtime_printuint(npages_spill);
        s_14.len = (int)p_spill;
        s_14.str = &DAT_0028a415;
        runtime_printstring(s_14);
        runtime_printint(local_90);
        runtime_printnl();
        runtime_printunlock();
        local_40 = (p_spill->searchAddr).a;
        runtime_printlock();
        s_15.len = (int)p_spill;
        s_15.str = &DAT_0029e7b7;
        runtime_printstring(s_15);
        runtime_printhex(local_40);
        s_16.len = (int)p_spill;
        s_16.str = &DAT_0028943e;
        runtime_printstring(s_16);
        runtime_printint(local_68);
        runtime_printnl();
        runtime_printunlock();
        local_50 = (runtime_pageAlloc *)runtime_levelShift[local_98];
        local_58 = runtime_levelBits[local_98];
        runtime_printlock();
        s_17.len = (int)p_spill;
        s_17.str = (uint8 *)0x2a0f4f;
        runtime_printstring(s_17);
        runtime_printuint((uint64)local_50);
        s_18.len = (int)p_spill;
        s_18.str = &DAT_0029c2b9;
        runtime_printstring(s_18);
        runtime_printuint(local_58);
        runtime_printnl();
        runtime_printunlock();
        lVar3 = 0;
        while (lVar3 < (long)local_38) {
          uVar10 = *(ulong *)(local_20 + lVar3 * 8);
          p_spill = (runtime_pageAlloc *)(uVar10 & 0x1fffff);
          if ((uVar10 & 0x8000000000000000) != 0) {
            p_spill = (runtime_pageAlloc *)&Elf64_Ehdr_00200000;
          }
          if ((long)uVar10 < 0) {
            uVar7 = 0x200000;
            uVar8 = 0x200000;
          }
          else {
            uVar7 = uVar10 >> 0x15 & 0x1fffff;
            uVar8 = uVar10 >> 0x2a & 0x1fffff;
          }
          local_78 = lVar3;
          runtime_printlock();
          s_19.len = (int)p_spill;
          s_19.str = &DAT_0029a34a;
          runtime_printstring(s_19);
          runtime_printint(local_98);
          s_20.len = (int)p_spill;
          s_20.str = &DAT_00287839;
          runtime_printstring(s_20);
          runtime_printint(local_68);
          s_21.len = (int)p_spill;
          s_21.str = &DAT_00288b38;
          runtime_printstring(s_21);
          runtime_printuint((uint64)p_spill);
          s_22.len = (int)p_spill;
          s_22.str = &DAT_00287787;
          runtime_printstring(s_22);
          runtime_printuint(uVar7);
          s_23.len = (int)p_spill;
          s_23.str = &DAT_00287787;
          runtime_printstring(s_23);
          runtime_printuint(uVar8);
          s_24.len = (int)p_spill;
          s_24.str = &DAT_00287783;
          runtime_printstring(s_24);
          runtime_printunlock();
          lVar3 = local_78 + 1;
        }
        s_25.len = (int)p_spill;
        s_25.str = &DAT_00299865;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_25);
      }
      mVar15.~r2.a = (uintptr)p_spill;
      mVar15.~r1 = runtime_maxSearchAddr.a;
      return mVar15;
    }
    if (uVar12 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    uVar13 = *(ulong *)(lVar9 + uVar10 * 8);
    if (uVar13 == 0) {
      uVar5 = 0;
    }
    else {
      local_70 = uVar10 + uVar11;
      bVar4 = (byte)uVar1;
      local_80 = uVar10;
      local_48 = uVar13;
      (*local_18)(-(ulong)(uVar1 < 0x40),local_18,&local_18);
      uVar2 = local_48 & 0x1fffff;
      if ((local_48 & 0x8000000000000000) != 0) {
        uVar2 = 0x200000;
      }
      uVar13 = uVar5 + uVar2;
      lVar3 = local_98;
      uVar6 = local_a0;
      if (npages_spill <= uVar13) {
        uVar2 = local_60;
        if (uVar5 == 0) {
          uVar2 = local_80 << (bVar4 & 0x3f) & -(ulong)(uVar1 < 0x40);
        }
        goto LAB_004dbda2;
      }
      if ((long)local_48 < 0) {
        uVar10 = 0x200000;
      }
      else {
        uVar10 = local_48 >> 0x15 & 0x1fffff;
      }
      if (npages_spill <= uVar10) break;
      lVar9 = local_20;
      uVar12 = local_38;
      uVar10 = local_80;
      uVar11 = local_68;
      if ((uVar5 == 0) || (uVar13 = 1L << (bVar4 & 0x3f) & -(ulong)(uVar1 < 0x40), uVar2 < uVar13))
      {
        if ((long)local_48 < 0) {
          uVar5 = 0x200000;
        }
        else {
          uVar5 = local_48 >> 0x2a & 0x1fffff;
        }
        local_60 = (local_80 + 1 << (bVar4 & 0x3f) & -(ulong)(uVar1 < 0x40)) - uVar5;
      }
      else {
        uVar5 = uVar5 + uVar13;
      }
    }
    uVar10 = uVar10 + 1;
                    /* Unresolved local var: runtime.pallocSum sum@[???]
                       Unresolved local var: uint s@[???] */
  } while( true );
                    /* Unresolved local var: int l@[???] */
  lVar3 = local_98 + 1;
                    /* Unresolved local var: int entriesPerBlock@[???]
                       Unresolved local var: uint logMaxPages@[???]
                       Unresolved local var: int j0@[???]
                       Unresolved local var: uint base@[???]
                       Unresolved local var: uint size@[???]
                       Unresolved local var: []runtime.pallocSum entries@[???]
                       Unresolved local var: uint ~R0@[???] */
  uVar10 = local_70;
  uVar13 = local_70;
  uVar6 = local_48;
  goto LAB_004db68c;
}

