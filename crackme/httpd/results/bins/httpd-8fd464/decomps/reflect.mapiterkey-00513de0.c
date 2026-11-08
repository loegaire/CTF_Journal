
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.mapiterkey(runtime.hiter * it, void * ~r1) */

void * reflect_mapiterkey(runtime_hiter *it)

{
  runtime_hiter *it_spill;
  
  return it_spill->key;
}

