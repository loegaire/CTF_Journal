
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_stackinit(void)

{
  long lVar1;
  
                    /* Unresolved local var: int i@[???] */
  for (lVar1 = 0; lVar1 < 4; lVar1 = lVar1 + 1) {
    runtime_stackpool[lVar1].item.span.first = (runtime_mspan *)0x0;
    runtime_stackpool[lVar1].item.span.last = (runtime_mspan *)0x0;
  }
  for (lVar1 = 0; lVar1 < 0x23; lVar1 = lVar1 + 1) {
                    /* Unresolved local var: int i@[???] */
    runtime_stackLarge.free[lVar1].first = (runtime_mspan *)0x0;
    runtime_stackLarge.free[lVar1].last = (runtime_mspan *)0x0;
  }
  return;
}

