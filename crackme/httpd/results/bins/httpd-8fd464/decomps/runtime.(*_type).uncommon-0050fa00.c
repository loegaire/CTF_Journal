
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*_type).uncommon(runtime._type * t, runtime.uncommontype
   * ~r0) */

runtime_uncommontype * runtime____type__uncommon(runtime__type *t)

{
  byte bVar1;
  runtime__type *t_spill;
  
  if ((t_spill->tflag & 1) == 0) {
    return (runtime_uncommontype *)t_spill;
  }
  bVar1 = t_spill->kind & 0x1f;
  if (bVar1 < 0x15) {
    if (0x12 < bVar1) {
      if (bVar1 == 0x13) {
        return (runtime_uncommontype *)&t_spill[1].ptrdata;
      }
      return (runtime_uncommontype *)&t_spill[1].gcdata;
    }
    if (bVar1 == 0x11) {
      return (runtime_uncommontype *)&t_spill[1].equal;
    }
    if (bVar1 == 0x12) {
      return (runtime_uncommontype *)&t_spill[1].hash;
    }
  }
  else {
    if (bVar1 < 0x17) {
      if (bVar1 == 0x15) {
        return (runtime_uncommontype *)&t_spill[1].str;
      }
      return (runtime_uncommontype *)&t_spill[1].ptrdata;
    }
    if (bVar1 == 0x17) {
      return (runtime_uncommontype *)&t_spill[1].ptrdata;
    }
    if (bVar1 == 0x19) {
      return (runtime_uncommontype *)&t_spill[1].gcdata;
    }
  }
  return (runtime_uncommontype *)(t_spill + 1);
}

