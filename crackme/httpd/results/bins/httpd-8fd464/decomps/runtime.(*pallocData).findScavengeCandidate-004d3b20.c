
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pallocData).findScavengeCandidate(runtime.pallocData *
   m, uint searchIdx, uintptr min, uintptr max, uint ~r3, uint ~r4) */

multireturn_uint_uint_
runtime___pallocData__findScavengeCandidate
          (runtime_pallocData *m,uint searchIdx,uintptr min,uintptr max)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint m_00;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  multireturn_uint_uint_ mVar9;
  multireturn_uint_uint_ mVar10;
  string s;
  string s_00;
  string s_01;
  string s_02;
  runtime_pallocData *m_spill;
  uint searchIdx_spill;
  uintptr min_spill;
  uintptr max_spill;
  ulong local_40;
  
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint64 x@[???]
                       Unresolved local var: uint z1@[???]
                       Unresolved local var: uint run@[???]
                       Unresolved local var: uint end@[???]
                       Unresolved local var: uint size@[???]
                       Unresolved local var: uint start@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar7 = min_spill - 1;
  if (((min_spill & uVar7) != 0) || (min_spill == 0)) {
    runtime_printlock();
    s_01.len = uVar7;
    s_01.str = &DAT_0029900a;
    runtime_printstring(s_01);
    runtime_printuint(min_spill);
    runtime_printnl();
    runtime_printunlock();
    s_02.len = uVar7;
    s_02.str = (uint8 *)0x2a3178;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_02);
  }
  if (0x40 < min_spill) {
    runtime_printlock();
    s.len = uVar7;
    s.str = &DAT_0029900a;
    runtime_printstring(s);
    runtime_printuint(min_spill);
    runtime_printnl();
    runtime_printunlock();
    s_00.len = uVar7;
    s_00.str = &DAT_002957c0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  uVar7 = min_spill;
  if (max_spill != 0) {
    uVar7 = -min_spill & (max_spill + min_spill) - 1;
  }
  for (m_00 = searchIdx_spill >> 6; -1 < (long)m_00; m_00 = m_00 - 1) {
    if (7 < m_00) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    runtime_fillAligned(min_spill,m_00);
    if (local_40 != 0xffffffffffffffff) break;
  }
  if ((long)m_00 < 0) {
    mVar9.~r4 = m_00;
    mVar9.~r3 = min_spill;
    return mVar9;
  }
  if (7 < m_00) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  runtime_fillAligned(min_spill,m_00);
  uVar2 = ~local_40;
  lVar3 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  if (uVar2 == 0) {
    lVar3 = -1;
  }
  uVar2 = -(ulong)((ulong)-(lVar3 + -0x3f) < 0x40);
  lVar1 = lVar3 + m_00 * 0x40 + 1;
  uVar8 = local_40 << (-((char)lVar3 + '\x01') & 0x3fU) & uVar2;
  if (uVar8 == 0) {
    uVar8 = lVar3 + 1;
                    /* Unresolved local var: int j@[???] */
    uVar5 = m_00 - 1;
    while (-1 < (long)uVar5) {
      runtime_fillAligned((uint64)m_spill,uVar2);
      lVar4 = 0x3f;
      if (local_40 != 0) {
        for (; local_40 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      if (local_40 == 0) {
        lVar4 = -1;
      }
      uVar8 = (uVar8 - (lVar4 + 1)) + 0x40;
      if (local_40 != 0) break;
      uVar5 = uVar5 - 1;
                    /* Unresolved local var: uint hugePageAbove@[???] */
                    /* Unresolved local var: uint64 x@[???] */
      uVar2 = uVar5;
    }
  }
  else {
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    if (uVar8 == 0) {
      lVar4 = -1;
    }
    uVar8 = -(lVar4 + -0x3f);
  }
  uVar2 = uVar8;
  if (uVar7 < uVar8) {
    uVar2 = uVar7;
  }
  uVar7 = lVar1 - uVar2;
  if ((((0x2000 < runtime_physHugePageSize) && (runtime_physPageSize < runtime_physHugePageSize)) &&
      (uVar6 = -(runtime_physHugePageSize >> 0xd),
      ((uVar7 + (runtime_physHugePageSize >> 0xd)) - 1 & uVar6) <= lVar3 + m_00 * 0x40 + 1)) &&
     (uVar6 = uVar6 & uVar7, lVar1 - uVar8 <= uVar6)) {
    uVar2 = uVar2 + (uVar7 - uVar6);
    uVar7 = uVar6;
  }
  mVar10.~r4 = uVar7;
  mVar10.~r3 = uVar2;
  return mVar10;
}

