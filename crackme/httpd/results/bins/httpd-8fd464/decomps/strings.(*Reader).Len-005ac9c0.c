
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.(*Reader).Len(strings.Reader * r, int ~r0) */

int strings___Reader__Len(strings_Reader *r)

{
  long lVar1;
  strings_Reader *r_spill;
  
  lVar1 = (r_spill->s).len;
  if (lVar1 <= r_spill->i) {
    return lVar1;
  }
  return lVar1 - r_spill->i;
}

