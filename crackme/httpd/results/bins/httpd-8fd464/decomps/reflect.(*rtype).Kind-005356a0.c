
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*rtype).Kind(reflect.rtype * t, reflect.Kind ~r0) */

reflect_Kind reflect___rtype__Kind(reflect_rtype *t)

{
  reflect_rtype *t_spill;
  
  return (ulong)(t_spill->kind & 0x1f);
}

