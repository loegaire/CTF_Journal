
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime___rwmutex__rlock_func1(void)

{
  int iVar1;
  runtime_mutex *l;
  runtime_note *n;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.rwmutex * rw@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  l = *(runtime_mutex **)(in_RDX + 8);
  runtime_lock2(l);
  iVar1 = (int)l[2].key;
  if (iVar1 == 0) {
                    /* Unresolved local var: runtime.m * m@[???] */
    n = *(runtime_note **)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    n[0x2d].key = l[1].key;
    l[1].key = (uintptr)n;
    runtime_unlock2(l);
    runtime_notesleep(n);
    n[0x2b].key = 0;
  }
  else {
    *(int *)&l[2].key = iVar1 + -1;
    runtime_unlock2(l);
  }
  return;
}

