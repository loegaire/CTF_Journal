
/* WARNING: Unknown calling convention */

void runtime_extendRandom(__uint8 r,int n)

{
  ulong uVar1;
  long lVar2;
  long in_FS_OFFSET;
  __uint8 r_spill;
  int n_spill;
  ulong local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (n_spill < 0) {
    n_spill = 0;
  }
  while( true ) {
    if (r_spill.len <= n_spill) {
      return;
    }
    runtime_nanotime1();
                    /* Unresolved local var: int w@[???]
                       Unresolved local var: uintptr h@[???] */
    uVar1 = n_spill;
    if (0x10 < n_spill) {
      uVar1 = 0x10;
    }
    if ((ulong)r_spill.len <= n_spill - uVar1) break;
    runtime_memhash();
                    /* Unresolved local var: int i@[???] */
    lVar2 = 0;
    uVar1 = local_18;
    for (; (lVar2 < 8 && (n_spill < r_spill.len)); n_spill = n_spill + 1) {
      if ((ulong)r_spill.len <= (ulong)n_spill) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      r_spill.array[n_spill] = (uint8)uVar1;
      lVar2 = lVar2 + 1;
      uVar1 = uVar1 >> 8;
    }
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

