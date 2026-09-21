
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.maplen(runtime.hmap * h, int ~r1) */

int reflect_maplen(runtime_hmap *h)

{
  runtime_hmap *h_spill;
  
  if (h_spill != (runtime_hmap *)0x0) {
    return h_spill->count;
  }
  return 0;
}

