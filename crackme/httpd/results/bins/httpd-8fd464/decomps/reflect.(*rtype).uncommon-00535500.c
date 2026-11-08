
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*rtype).uncommon(reflect.rtype * t, reflect.uncommonType
   * ~r0) */

reflect_uncommonType * reflect___rtype__uncommon(reflect_rtype *t)

{
  byte bVar1;
  reflect_rtype *t_spill;
  
  if ((t_spill->tflag & 1) == 0) {
    return (reflect_uncommonType *)t_spill;
  }
  bVar1 = t_spill->kind & 0x1f;
  if (bVar1 < 0x15) {
    if (0x12 < bVar1) {
      if (bVar1 == 0x13) {
        return (reflect_uncommonType *)&t_spill[1].ptrdata;
      }
      return (reflect_uncommonType *)&t_spill[1].gcdata;
    }
    if (bVar1 == 0x11) {
      return (reflect_uncommonType *)&t_spill[1].equal;
    }
    if (bVar1 == 0x12) {
      return (reflect_uncommonType *)&t_spill[1].hash;
    }
  }
  else {
    if (bVar1 < 0x17) {
      if (bVar1 == 0x15) {
        return (reflect_uncommonType *)&t_spill[1].str;
      }
      return (reflect_uncommonType *)&t_spill[1].ptrdata;
    }
    if (bVar1 == 0x17) {
      return (reflect_uncommonType *)&t_spill[1].ptrdata;
    }
    if (bVar1 == 0x19) {
      return (reflect_uncommonType *)&t_spill[1].gcdata;
    }
  }
  return (reflect_uncommonType *)(t_spill + 1);
}

