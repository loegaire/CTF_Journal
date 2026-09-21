
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pallocData).hasScavengeCandidate(runtime.pallocData * m,
   uintptr min, bool ~r1) */

bool runtime___pallocData__hasScavengeCandidate(runtime_pallocData *m,uintptr min)

{
  uint64 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  runtime_pallocData *m_spill;
  uintptr min_spill;
  long local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((min_spill & min_spill - 1) == 0) && (min_spill != 0)) {
    if (0x40 < min_spill) {
      runtime_printlock();
      s.len = min;
      s.str = &DAT_0029900a;
      runtime_printstring(s);
      runtime_printuint(min_spill);
      runtime_printnl();
      runtime_printunlock();
      s_00.len = min;
      s_00.str = &DAT_002957c0;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_00);
    }
    lVar2 = 7;
    while( true ) {
      if (lVar2 < 0) {
        return SUB81(min_spill,0);
      }
      uVar1 = runtime_fillAligned(min_spill,m_spill->scavenged[lVar2] | m_spill->pallocBits[lVar2]);
      if (local_18 != -1) break;
                    /* Unresolved local var: int i@[???] */
      lVar2 = lVar2 + -1;
    }
    return SUB81(uVar1,0);
  }
  runtime_printlock();
  s_01.len = min;
  s_01.str = &DAT_0029900a;
  runtime_printstring(s_01);
  runtime_printuint(min_spill);
  runtime_printnl();
  runtime_printunlock();
  s_02.len = min;
  s_02.str = (uint8 *)0x2a3178;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_02);
}

