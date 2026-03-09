
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140004ed8(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140006cf0; puVar1 < &DAT_140006cf0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}

