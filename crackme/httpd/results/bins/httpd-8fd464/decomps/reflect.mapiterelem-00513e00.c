
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.mapiterelem(runtime.hiter * it, void * ~r1) */

void * reflect_mapiterelem(runtime_hiter *it)

{
  runtime_hiter *it_spill;
  
  return it_spill->elem;
}

