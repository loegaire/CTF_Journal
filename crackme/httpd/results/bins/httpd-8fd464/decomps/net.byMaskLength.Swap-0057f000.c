
/* WARNING: Unknown calling convention */

void net_byMaskLength_Swap(net_byMaskLength s,int i,int j)

{
  uint8 uVar1;
  net_IPNet *pnVar2;
  net_IPNet *pnVar3;
  net_policyTableEntry *extraout_RDX;
  uint8 uVar4;
  uint8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  net_byMaskLength s_spill;
  int i_spill;
  int j_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((ulong)i_spill < (ulong)s_spill.len) {
    pnVar2 = s_spill.array[i_spill].Prefix;
    uVar4 = s_spill.array[i_spill].Precedence;
    uVar5 = s_spill.array[i_spill].Label;
    if ((ulong)j_spill < (ulong)s_spill.len) {
      lVar6 = j_spill * 0x10;
      pnVar3 = s_spill.array[j_spill].Prefix;
      uVar1 = s_spill.array[j_spill].Label;
      s_spill.array[i_spill].Precedence = s_spill.array[j_spill].Precedence;
      s_spill.array[i_spill].Label = uVar1;
      if (runtime_writeBarrier._0_4_ == 0) {
        s_spill.array[i_spill].Prefix = pnVar3;
      }
      else {
        runtime_gcWriteBarrierCX();
        s_spill.array = extraout_RDX;
      }
      (&(s_spill.array)->Precedence)[lVar6] = uVar4;
      (&(s_spill.array)->Label)[lVar6] = uVar5;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(net_IPNet **)((long)&(s_spill.array)->Prefix + lVar6) = pnVar2;
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

