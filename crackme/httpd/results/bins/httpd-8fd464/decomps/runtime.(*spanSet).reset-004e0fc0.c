
/* WARNING: Unknown calling convention */

void runtime___spanSet__reset(runtime_spanSet *b)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  runtime_spanSet *b_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar3 = b_spill->index;
  uVar2 = (uint)(uVar3 >> 0x20);
  if (uVar2 < (uint)uVar3) {
    runtime_printlock();
    s_01.len = unaff_RBX;
    s_01.str = &DAT_0028ad76;
    runtime_printstring(s_01);
    runtime_printuint(uVar3 >> 0x20);
    s_02.len = unaff_RBX;
    s_02.str = &DAT_0028d29e;
    runtime_printstring(s_02);
    runtime_printuint(uVar3 & 0xffffffff);
    runtime_printnl();
    runtime_printunlock();
    s_03.len = unaff_RBX;
    s_03.str = &DAT_002a4264;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_03);
  }
  uVar3 = (ulong)(uVar2 >> 9);
  if (uVar3 < b_spill->spineLen) {
                    /* Unresolved local var: runtime.spanSetBlock * * blockp@[???]
                       Unresolved local var: runtime.spanSetBlock * block@[???] */
    plVar4 = (long *)(uVar3 * 8 + (long)b_spill->spine);
    lVar1 = *plVar4;
    if (lVar1 != 0) {
      uVar2 = *(uint *)(lVar1 + 0x10);
      if (uVar2 == 0) {
        s_00.len._4_4_ = 0;
        s_00._0_12_ = ZEXT812(0x2a9cd3);
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_00);
      }
      if (uVar2 == 0x200) {
        s.len._0_4_ = 0x200;
        s.str = &DAT_002a91a2;
        s.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s);
      }
      LOCK();
      *plVar4 = 0;
      UNLOCK();
      LOCK();
      *(undefined4 *)(lVar1 + 0x10) = 0;
      UNLOCK();
      runtime___lfstack__push(&runtime_spanSetBlockPool.stack,(runtime_lfnode *)(ulong)uVar2);
    }
  }
  LOCK();
  b_spill->index = 0;
  UNLOCK();
  LOCK();
  b_spill->spineLen = 0;
  UNLOCK();
  return;
}

