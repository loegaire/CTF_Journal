
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*consistentHeapStats).acquire(runtime.consistentHeapStats
   * m, runtime.heapStatsDelta * ~r0) */

runtime_heapStatsDelta * runtime___consistentHeapStats__acquire(runtime_consistentHeapStats *m)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  string s;
  string s_00;
  runtime_consistentHeapStats *m_spill;
  
                    /* Unresolved local var: uint32 gen@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.p * pp@[???] */
  lVar3 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  if (lVar3 == 0) {
    runtime_lock2((runtime_mutex *)m_spill);
  }
  else {
                    /* Unresolved local var: uint32 seq@[???] */
    LOCK();
    piVar1 = (int *)(lVar3 + 0x26d4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((iVar2 + 1U & 1) == 0) {
      runtime_printlock();
      s.len._0_4_ = iVar2;
      s.str = &DAT_00295e81;
      s.len._4_4_ = 0;
      runtime_printstring(s);
      runtime_printuint((ulong)(iVar2 + 1U));
      runtime_printnl();
      runtime_printunlock();
      s_00.len._0_4_ = iVar2;
      s_00.str = &DAT_0029b421;
      s_00.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_00);
    }
  }
  uVar4 = (ulong)(m_spill->gen % 3);
  if (uVar4 < 3) {
    return m_spill->stats + uVar4;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

