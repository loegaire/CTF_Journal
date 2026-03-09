
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.byMaskLength.Less(net.byMaskLength s, int i, int j, bool ~r2)
    */

bool net_byMaskLength_Less(net_byMaskLength s,int i,int j)

{
  long in_FS_OFFSET;
  net_IPMask mask;
  net_IPMask mask_00;
  net_byMaskLength s_spill;
  int i_spill;
  int j_spill;
  long local_18;
  
                    /* Unresolved local var: int isize@[???]
                       Unresolved local var: int jsize@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((ulong)i_spill < (ulong)s_spill.len) {
    mask.len = ((s_spill.array[i_spill].Prefix)->Mask).len;
    mask.array = (uint8 *)((s_spill.array[i_spill].Prefix)->Mask).cap;
    mask.cap = (int)s_spill.array;
    net_simpleMaskLength(mask);
    if ((ulong)j_spill < (ulong)s_spill.len) {
      mask_00.len = j_spill * 0x10;
      mask_00.array = (uint8 *)((s_spill.array[j_spill].Prefix)->Mask).cap;
      mask_00.cap = (int)((s_spill.array[j_spill].Prefix)->Mask).array;
      net_simpleMaskLength(mask_00);
      if (local_18 == -1) {
        local_18 = 0;
      }
      return SUB81(local_18,0);
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

