
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*fixalloc).alloc(runtime.fixalloc * f, void * ~r0) */

void * runtime___fixalloc__alloc(runtime_fixalloc *f)

{
  runtime_fixalloc *extraout_RAX;
  int unaff_RBX;
  void *in_RDI;
  long in_FS_OFFSET;
  string s;
  string s_00;
  runtime_fixalloc *f_spill;
  uintptr local_20;
  
                    /* Unresolved local var: void * v@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (f_spill->size != 0) {
    if (f_spill->list != (runtime_mlink *)0x0) {
      f_spill->list = f_spill->list->next;
      f_spill->inuse = f_spill->inuse + f_spill->size;
      if (f_spill->zero != false) {
        runtime_memclrNoHeapPointers();
        f_spill = extraout_RAX;
      }
      return f_spill;
    }
    if ((ulong)f_spill->nchunk < f_spill->size) {
      runtime_persistentalloc((uintptr)f_spill,(ulong)f_spill->nchunk,f_spill->stat);
      f_spill->chunk = local_20;
      f_spill->nchunk = 0x4000;
    }
    if (f_spill->first != (func_unsafe_Pointer__unsafe_Pointer_ **)0x0) {
      (**f_spill->first)(in_RDI,f_spill->arg);
    }
    f_spill->chunk = f_spill->chunk + f_spill->size;
    f_spill->nchunk = f_spill->nchunk - (int)f_spill->size;
    f_spill->inuse = f_spill->inuse + f_spill->size;
    return f_spill;
  }
  runtime_printlock();
  s.len = unaff_RBX;
  s.str = &DAT_002a9c9f;
  runtime_printstring(s);
  runtime_printunlock();
  s_00.len = unaff_RBX;
  s_00.str = &DAT_0029df36;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_00);
}

