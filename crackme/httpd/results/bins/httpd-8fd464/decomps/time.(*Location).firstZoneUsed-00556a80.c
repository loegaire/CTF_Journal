
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.(*Location).firstZoneUsed(time.Location * l, bool ~r0) */

bool time___Location__firstZoneUsed(time_Location *l)

{
  long lVar1;
  time_zoneTrans *ptVar2;
  long lVar3;
  time_Location *l_spill;
  
  lVar1 = (l_spill->tx).len;
  ptVar2 = (l_spill->tx).array;
  if (0 < lVar1) {
    lVar3 = 0;
    while( true ) {
      if (ptVar2->index == 0) {
        return SUB81(ptVar2,0);
      }
      lVar3 = lVar3 + 1;
      if (lVar1 <= lVar3) break;
      ptVar2 = ptVar2 + 1;
    }
  }
  return SUB81(ptVar2,0);
}

