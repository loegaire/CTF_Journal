
/* WARNING: Unknown calling convention */

void runtime___consistentHeapStats__release(runtime_consistentHeapStats *m)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  runtime_consistentHeapStats *m_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.p * pp@[???] */
  lVar3 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  if (lVar3 == 0) {
    runtime_unlock2(&m_spill->noPLock);
  }
  else {
                    /* Unresolved local var: uint32 seq@[???] */
    LOCK();
    piVar1 = (int *)(lVar3 + 0x26d4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((iVar2 + 1U & 1) != 0) {
      runtime_printlock();
      s.len = unaff_RBX;
      s.str = &DAT_00295e81;
      runtime_printstring(s);
      runtime_printuint((ulong)(iVar2 + 1U));
      runtime_printnl();
      runtime_printunlock();
      s_00.len = unaff_RBX;
      s_00.str = &DAT_0029b421;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_00);
    }
  }
  return;
}

