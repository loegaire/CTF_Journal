
/* WARNING: Unknown calling convention */

void runtime_printhex(uint64 v)

{
  long lVar1;
  ulong unaff_RBX;
  long in_FS_OFFSET;
  __uint8 b;
  uint64 v_spill;
  uint8 *local_88;
  long local_80;
  long local_78;
  uint8 auStack_6e [2];
  uint8 buf [100];
  
                    /* Unresolved local var: int i@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  buf[0] = 0;
  buf[1] = 0;
  buf[2] = 0;
  buf[3] = 0;
  buf[4] = 0;
  buf[5] = 0;
  buf[6] = 0;
  buf[7] = 0;
  FUN_0051a18b(&local_88);
  for (lVar1 = 99;
      (0 < lVar1 &&
      ((buf[lVar1] = (&DAT_002992b5)[v_spill & 0xf], 0xf < v_spill ||
       (unaff_RBX = v_spill, -(lVar1 + -100) < runtime_minhexdigits)))); lVar1 = lVar1 + -1) {
    v_spill = v_spill >> 4;
    unaff_RBX = v_spill;
  }
  if (lVar1 - 1U < 100) {
    auStack_6e[lVar1 + 1] = 0x78;
    if (lVar1 - 2U < 100) {
      auStack_6e[lVar1] = 0x30;
      local_88 = buf + (lVar1 - 2U & lVar1 + -0x66 >> 0x3f);
      b.cap = -(lVar1 + -0x66);
      b.len = unaff_RBX;
      b.array = local_88;
      local_80 = b.cap;
      local_78 = b.cap;
      runtime_gwrite(b);
      return;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

