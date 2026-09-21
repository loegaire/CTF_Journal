
/* WARNING: Unknown calling convention */

void runtime_stackcacherelease(runtime_mcache *c,uint8 order)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  runtime_mcache *c_spill;
  uint8 order_spill;
  
                    /* Unresolved local var: runtime.gclinkptr x@[???]
                       Unresolved local var: uintptr size@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  uVar2 = (ulong)order_spill;
  if (uVar2 < 4) {
    puVar1 = (undefined8 *)c_spill->stackcache[uVar2].list;
    uVar4 = c_spill->stackcache[uVar2].size;
    runtime_lock2((runtime_mutex *)(uVar2 * 0x10));
    puVar3 = puVar1;
    for (; 0x4000 < uVar4; uVar4 = uVar4 - (0x800L << (order_spill & 0x3f))) {
                    /* Unresolved local var: runtime.gclinkptr y@[???] */
      puVar3 = (undefined8 *)*puVar3;
      runtime_stackpoolfree((ulong)order_spill,(uint8)puVar1);
    }
    runtime_unlock2((runtime_mutex *)(runtime_stackpool + order_spill));
    c_spill->stackcache[uVar2].list = (runtime_gclinkptr)puVar3;
    c_spill->stackcache[uVar2].size = uVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

