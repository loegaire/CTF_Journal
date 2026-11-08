
/* WARNING: Unknown calling convention */

void runtime_freeSpecial(runtime_special *s,void *p,uintptr size)

{
  uint8 uVar1;
  long in_FS_OFFSET;
  string s_00;
  runtime_specialfinalizer *sf;
  void *p_spill;
  uintptr size_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar1 = (sf->special).kind;
  if (uVar1 == 1) {
    runtime_queuefinalizer(sf,(runtime_funcval *)sf->fint,(uintptr)sf->fn,p_spill,sf->ot);
    runtime_lock2(&runtime_mheap_.speciallock);
    runtime_mheap_.specialfinalizeralloc.inuse =
         runtime_mheap_.specialfinalizeralloc.inuse - runtime_mheap_.specialfinalizeralloc.size;
    (sf->special).next = (runtime_special *)runtime_mheap_.specialfinalizeralloc.list;
    runtime_mheap_.specialfinalizeralloc.list = (runtime_mlink *)sf;
    runtime_unlock2(&runtime_mheap_.speciallock);
  }
  else if (uVar1 == 2) {
    runtime_mProf_Free((runtime_bucket *)sf,(uintptr)p);
    runtime_lock2(&runtime_mheap_.speciallock);
    runtime_mheap_.specialprofilealloc.inuse =
         runtime_mheap_.specialprofilealloc.inuse - runtime_mheap_.specialprofilealloc.size;
    (sf->special).next = (runtime_special *)runtime_mheap_.specialprofilealloc.list;
    runtime_mheap_.specialprofilealloc.list = (runtime_mlink *)sf;
    runtime_unlock2(&runtime_mheap_.speciallock);
  }
  else {
    if (uVar1 != 3) {
      s_00.len = (int)p;
      s_00.str = &DAT_00299855;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_00);
    }
    *(undefined1 *)&sf->fn = 1;
  }
  return;
}

