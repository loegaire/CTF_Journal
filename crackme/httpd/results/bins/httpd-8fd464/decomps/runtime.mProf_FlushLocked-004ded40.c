
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_mProf_FlushLocked(void)

{
  uint32 uVar1;
  runtime_bucket *prVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  long *local_20;
  
                    /* Unresolved local var: uint32 c@[???] */
  while (uVar1 = runtime_mProf.cycle, prVar2 = runtime_mbuckets,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  for (; prVar2 != (runtime_bucket *)0x0; prVar2 = prVar2->allnext) {
                    /* Unresolved local var: runtime.memRecord * mp@[???] */
    runtime___bucket__mp((runtime_bucket *)(ulong)uVar1);
    uVar3 = (ulong)(uVar1 % 3);
    *local_20 = *local_20 + local_20[uVar3 * 4 + 4];
    local_20[1] = local_20[1] + local_20[uVar3 * 4 + 5];
    local_20[2] = local_20[2] + local_20[uVar3 * 4 + 6];
    local_20[3] = local_20[3] + local_20[uVar3 * 4 + 7];
    local_20[uVar3 * 4 + 4] = 0;
    local_20[uVar3 * 4 + 5] = 0;
    local_20[uVar3 * 4 + 6] = 0;
    local_20[uVar3 * 4 + 7] = 0;
  }
  return;
}

