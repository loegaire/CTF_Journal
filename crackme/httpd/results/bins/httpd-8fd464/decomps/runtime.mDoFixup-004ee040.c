
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.mDoFixup(bool ~r0) */

bool runtime_mDoFixup(void)

{
  runtime_mutex *l;
  undefined8 *puVar1;
  bool exiting;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: func(bool)_bool * * fn@[???]
                       Unresolved local var: runtime.sigset sigmask@[???] */
  l = *(runtime_mutex **)(in_FS_OFFSET + -8);
                    /* Unresolved local var: uint32 used@[???] */
  if (*(int *)(l[6].key + 0x2c0) == 0) {
    return SUB81(l,0);
  }
  runtime_sigprocmask();
  runtime_sigblock(exiting);
  runtime_lock2(l);
  puVar1 = *(undefined8 **)(l[6].key + 0x2c8);
  if (puVar1 != (undefined8 *)0x0) {
    if (runtime_gcphase != 0) {
      s.len = unaff_RBX;
      s.str = &DAT_002a98ce;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    (*(code *)*puVar1)();
    *(undefined8 *)(l[6].key + 0x2c8) = 0;
    LOCK();
    *(undefined4 *)(l[6].key + 0x2c0) = 0;
    UNLOCK();
  }
  runtime_unlock2((runtime_mutex *)(l[6].key + 0x2b8));
  runtime_sigprocmask();
  return SUB81(puVar1,0);
}

