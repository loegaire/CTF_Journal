
/* WARNING: Unknown calling convention */

void runtime_stackcache_clear(runtime_mcache *c)

{
  runtime_gclinkptr *x;
  runtime_mutex *l;
  ulong uVar1;
  runtime_gclinkptr *prVar2;
  long in_FS_OFFSET;
  runtime_mcache *c_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
                    /* Unresolved local var: uint8 order@[???] */
  for (l = (runtime_mutex *)0x0; (byte)l < 4; l = (runtime_mutex *)(ulong)((byte)l + 1)) {
    uVar1 = (ulong)l & 0xff;
    runtime_lock2(l);
    prVar2 = (runtime_gclinkptr *)c_spill->stackcache[uVar1].list;
    while (prVar2 != (runtime_gclinkptr *)0x0) {
                    /* Unresolved local var: runtime.gclinkptr y@[???] */
      x = (runtime_gclinkptr *)*prVar2;
      runtime_stackpoolfree((runtime_gclinkptr)x,(uint8)prVar2);
      prVar2 = x;
    }
                    /* Unresolved local var: runtime.gclinkptr x@[???] */
    c_spill->stackcache[uVar1].list = 0;
    c_spill->stackcache[uVar1].size = 0;
    runtime_unlock2((runtime_mutex *)c_spill);
  }
  return;
}

