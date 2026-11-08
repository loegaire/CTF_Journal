
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.lockRank.String(runtime.lockRank rank, string ~r0) */

string runtime_lockRank_String(runtime_lockRank rank)

{
  int unaff_RBX;
  string sVar1;
  string sVar2;
  string sVar3;
  runtime_lockRank rank_spill;
  
  if (rank_spill == 0) {
    sVar3.len = unaff_RBX;
    sVar3.str = &DAT_0028a748;
    return sVar3;
  }
  if (rank_spill != 1000) {
    if ((ulong)rank_spill < (ulong)runtime_lockNames.len) {
      sVar1.len = unaff_RBX;
      sVar1.str = (uint8 *)runtime_lockNames.array[rank_spill].len;
      return sVar1;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  sVar2.len = unaff_RBX;
  sVar2.str = &DAT_00287f01;
  return sVar2;
}

