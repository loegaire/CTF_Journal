
/* WARNING: Unknown calling convention */

void runtime_stackcacherefill(runtime_mcache *c,uint8 order)

{
  undefined8 *puVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  runtime_mcache *c_spill;
  uint8 order_spill;
  undefined8 *local_28;
  
                    /* Unresolved local var: runtime.gclinkptr list@[???]
                       Unresolved local var: uintptr size@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  if ((ulong)order_spill < 4) {
    runtime_lock2((runtime_mutex *)(runtime_stackpool + order_spill));
    uVar2 = 0;
    puVar1 = (undefined8 *)0x0;
    while( true ) {
      if (0x3fff < uVar2) break;
                    /* Unresolved local var: runtime.gclinkptr x@[???] */
      runtime_stackpoolalloc(order_spill);
      *local_28 = puVar1;
      uVar2 = (0x800L << (order_spill & 0x3f)) + uVar2;
      puVar1 = local_28;
    }
    runtime_unlock2((runtime_mutex *)(runtime_stackpool + order_spill));
    c_spill->stackcache[order_spill].list = (runtime_gclinkptr)puVar1;
    c_spill->stackcache[order_spill].size = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

