
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.(*Reader).Len(bytes.Reader * r, int ~r0) */

int bytes___Reader__Len(bytes_Reader *r)

{
  long lVar1;
  bytes_Reader *r_spill;
  
  lVar1 = (r_spill->s).len;
  if (lVar1 <= r_spill->i) {
    return lVar1;
  }
  return lVar1 - r_spill->i;
}

