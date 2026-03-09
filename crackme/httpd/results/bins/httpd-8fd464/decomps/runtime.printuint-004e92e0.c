
/* WARNING: Unknown calling convention */

void runtime_printuint(uint64 v)

{
  ulong uVar1;
  long unaff_RBX;
  long in_FS_OFFSET;
  __uint8 b;
  uint64 v_spill;
  uint8 *local_88;
  long local_80;
  long local_78;
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
  for (uVar1 = 99; 0 < (long)uVar1; uVar1 = uVar1 - 1) {
    unaff_RBX = v_spill % 10 + 0x30;
    buf[uVar1] = (uint8)unaff_RBX;
    if (v_spill < 10) break;
    v_spill = v_spill / 10;
  }
  if (100 < uVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  b.cap = uVar1 & (long)(uVar1 - 100) >> 0x3f;
  local_88 = buf + b.cap;
  local_80 = -(uVar1 - 100);
  b.len = unaff_RBX;
  b.array = local_88;
  local_78 = local_80;
  runtime_gwrite(b);
  return;
}

