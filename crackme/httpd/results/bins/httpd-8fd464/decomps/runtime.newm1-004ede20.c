
/* WARNING: Unknown calling convention */

void runtime_newm1(runtime_m *mp)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  runtime_m *mp_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_iscgo != false) {
                    /* Unresolved local var: runtime.cgothreadstart ts@[???] */
    if (_cgo_thread_start != (void *)0x0) {
      runtime___rwmutex__rlock(&runtime_execLock);
      runtime_asmcgocall();
      runtime___rwmutex__runlock(&runtime_execLock);
      return;
    }
    s.len = unaff_RBX;
    s.str = &DAT_0029eb64;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  runtime___rwmutex__rlock(&runtime_execLock);
  runtime_newosproc(mp_spill);
  runtime___rwmutex__runlock(&runtime_execLock);
  return;
}

