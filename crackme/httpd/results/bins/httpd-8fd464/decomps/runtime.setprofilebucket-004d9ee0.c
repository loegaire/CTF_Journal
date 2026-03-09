
/* WARNING: Unknown calling convention */

void runtime_setprofilebucket(void *p,runtime_bucket *b)

{
  long in_FS_OFFSET;
  string s;
  void *p_spill;
  runtime_bucket *b_spill;
  runtime_mutex *local_20;
  char local_18;
  
                    /* Unresolved local var: runtime.specialprofile * s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_mheap_.speciallock);
  runtime___fixalloc__alloc(&runtime_mheap_.specialprofilealloc);
  runtime_unlock2(local_20);
  *(undefined1 *)((long)&local_20[1].key + 2) = 2;
  local_20[2].key = (uintptr)b_spill;
  runtime_addspecial(local_20,(runtime_special *)b);
  if (local_18 != '\0') {
    return;
  }
  s.len = (int)b;
  s.str = &DAT_002a54ee;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

