
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.Kind(reflect.Value v, reflect.Kind ~r0) */

reflect_Kind reflect_Value_Kind(reflect_Value v)

{
  reflect_Value v_spill;
  
  return v_spill.flag & 0x1f;
}

