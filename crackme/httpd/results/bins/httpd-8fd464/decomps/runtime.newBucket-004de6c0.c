
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.newBucket(runtime.bucketType typ, int nstk, runtime.bucket
   * ~r2) */

runtime_bucket * runtime_newBucket(runtime_bucketType typ,int nstk)

{
  uintptr size;
  long in_FS_OFFSET;
  string s;
  runtime_bucketType typ_spill;
  int nstk_spill;
  runtime_bucket *local_18;
  
                    /* Unresolved local var: uintptr size@[???]
                       Unresolved local var: runtime.bucket * b@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (typ_spill == 1) {
    size = nstk_spill * 8 + 0xb0;
  }
  else {
    nstk = typ_spill - 2;
    if (1 < (ulong)nstk) {
      s.len = nstk;
      s.str = &DAT_0029fd7d;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    size = nstk_spill * 8 + 0x40;
  }
  runtime_persistentalloc(size,nstk,&runtime_memstats.buckhash_sys);
  runtime_bucketmem = runtime_bucketmem + size;
  local_18->typ = typ_spill;
  local_18->nstk = nstk_spill;
  return local_18;
}

