
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.mapaccess(runtime.maptype * t, runtime.hmap * h, void *
   key, void * ~r3) */

void * reflect_mapaccess(runtime_maptype *t,runtime_hmap *h,void *key)

{
  void *pvVar1;
  long in_FS_OFFSET;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  void *key_spill;
  undefined8 local_18;
  undefined1 local_10;
  
                    /* Unresolved local var: void * elem@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_mapaccess2(key_spill,h,key);
  pvVar1 = (void *)0x0;
  if (local_10 != '\0') {
    pvVar1 = local_18;
  }
  return pvVar1;
}

