
/* WARNING: Unknown calling convention */

void runtime_lock2(runtime_mutex *l)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong ns;
  int unaff_RBX;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  string s;
  runtime_mutex *l_spill;
  
                    /* Unresolved local var: runtime.g * gp@[DW_OP_reg2(RCX)]
                       Unresolved local var: uint32 v@[???]
                       Unresolved local var: uint32 wait@[???]
                       Unresolved local var: int spin@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar4 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  iVar2 = *(int *)(lVar4 + 0x110);
  if (iVar2 < 0) {
    s.len = unaff_RBX;
    s.str = &DAT_0029ee9d;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  *(int *)(lVar4 + 0x110) = iVar2 + 1;
  LOCK();
  uVar1 = (uint)l_spill->key;
  *(undefined4 *)&l_spill->key = 1;
  ns = (ulong)uVar1;
  UNLOCK();
  if (uVar1 == 0) {
    return;
  }
                    /* Unresolved local var: int i@[???] */
  lVar4 = 0;
  if (1 < runtime_ncpu) {
    lVar4 = 4;
  }
  do {
                    /* Unresolved local var: int i@[???] */
    for (lVar3 = 0; lVar3 < lVar4; lVar3 = lVar3 + 1) {
      while (l_spill->key == 0) {
        LOCK();
        bVar5 = (int)l_spill->key == 0;
        if (bVar5) {
          *(int *)&l_spill->key = (int)ns;
        }
        UNLOCK();
        if (bVar5) {
          return;
        }
      }
      runtime_procyield();
    }
    for (lVar3 = 0; lVar3 < 1; lVar3 = lVar3 + 1) {
      while (l_spill->key == 0) {
        LOCK();
        bVar5 = (int)l_spill->key == 0;
        if (bVar5) {
          *(int *)&l_spill->key = (int)ns;
        }
        UNLOCK();
        if (bVar5) {
          return;
        }
      }
      runtime_osyield();
    }
    LOCK();
    uVar1 = (uint)l_spill->key;
    *(undefined4 *)&l_spill->key = 2;
    UNLOCK();
    if (uVar1 == 0) {
      return;
    }
    runtime_futexsleep((uint32 *)(ulong)uVar1,(uint32)lVar4,ns);
    ns = 2;
  } while( true );
}

