
/* WARNING: Unknown calling convention */

void runtime_gwrite(__uint8 b)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  __uint8 b_00;
  __uint8 b_spill;
  
  b_00.len = b.len;
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: int n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (b_spill.len == 0) {
    return;
  }
  b_00.array = (uint8 *)b_spill.len;
  b_00.cap = (int)b_spill.array;
  runtime_recordForPanic(b_00);
  lVar2 = *(long *)(in_FS_OFFSET + -8);
  if (lVar2 != 0) {
    if ((*(long *)(lVar2 + 0xf8) != 0) && (*(int *)(*(long *)(lVar2 + 0x30) + 0x114) < 1)) {
      lVar3 = *(long *)(lVar2 + 0x108) - *(ulong *)(lVar2 + 0x100);
      lVar4 = lVar3;
      if (b_spill.len < lVar3) {
        lVar4 = b_spill.len;
      }
      if (b_spill.array !=
          (uint8 *)(*(long *)(lVar2 + 0xf8) + (*(ulong *)(lVar2 + 0x100) & -lVar3 >> 0x3f))) {
        runtime_memmove();
      }
      uVar1 = *(long *)(lVar2 + 0x100) + lVar4;
      if (uVar1 <= *(ulong *)(lVar2 + 0x108)) {
        *(ulong *)(lVar2 + 0x100) = uVar1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
  }
  runtime_write1();
  return;
}

