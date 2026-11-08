
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.(*Location).lookupFirstZone(time.Location * l, int ~r0) */

int time___Location__lookupFirstZone(time_Location *l)

{
  bool bVar1;
  undefined7 extraout_var;
  ulong uVar2;
  time_zone *ptVar3;
  long lVar4;
  long in_FS_OFFSET;
  time_Location *l_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  bVar1 = time___Location__firstZoneUsed(l_spill);
  if (local_10 == '\0') {
    return CONCAT71(extraout_var,bVar1);
  }
  if (0 < (l_spill->tx).len) {
    ptVar3 = (l_spill->zone).array;
    uVar2 = (ulong)((l_spill->tx).array)->index;
    if ((ulong)(l_spill->zone).len <= uVar2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (ptVar3[uVar2].isDST != false) {
                    /* Unresolved local var: int zi@[???] */
      while (uVar2 = uVar2 - 1, -1 < (long)uVar2) {
        if (ptVar3[uVar2].isDST == false) {
          return 0;
        }
      }
    }
  }
                    /* Unresolved local var: int zi@[???] */
  ptVar3 = (l_spill->zone).array;
  lVar4 = 0;
  while( true ) {
    if ((l_spill->zone).len <= lVar4) {
      return (int)ptVar3;
    }
    if (ptVar3[lVar4].isDST == false) break;
    lVar4 = lVar4 + 1;
  }
  return (int)ptVar3;
}

