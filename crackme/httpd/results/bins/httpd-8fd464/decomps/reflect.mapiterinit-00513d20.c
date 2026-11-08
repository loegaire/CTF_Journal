
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.mapiterinit(runtime.maptype * t, runtime.hmap * h,
   runtime.hiter * ~r2) */

runtime_hiter * reflect_mapiterinit(runtime_maptype *t,runtime_hmap *h)

{
  long in_FS_OFFSET;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  runtime_hiter *local_20;
  
                    /* Unresolved local var: runtime.hiter * it@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_0027bb60);
  runtime_mapiterinit((runtime_maptype *)local_20,h,(runtime_hiter *)h_spill);
  return local_20;
}

