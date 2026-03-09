
/* WARNING: Unknown calling convention */

void sort_StringSlice_Swap(sort_StringSlice x,int i,int j)

{
  uint8 *puVar1;
  uint8 *puVar2;
  string *extraout_RDX;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  sort_StringSlice x_spill;
  int i_spill;
  int j_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((ulong)i_spill < (ulong)x_spill.len) {
    puVar1 = x_spill.array[i_spill].str;
    iVar3 = x_spill.array[i_spill].len;
    if ((ulong)j_spill < (ulong)x_spill.len) {
      lVar4 = j_spill * 0x10;
      puVar2 = x_spill.array[j_spill].str;
      x_spill.array[i_spill].len = x_spill.array[j_spill].len;
      if (runtime_writeBarrier._0_4_ == 0) {
        x_spill.array[i_spill].str = puVar2;
      }
      else {
        runtime_gcWriteBarrierCX();
        x_spill.array = extraout_RDX;
      }
      *(int *)((long)&(x_spill.array)->len + lVar4) = iVar3;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(uint8 **)((long)&(x_spill.array)->str + lVar4) = puVar1;
      }
      else {
        runtime_gcWriteBarrierBX();
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

