
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1400053c4(void)

{
  undefined8 *_Memory;
  undefined8 *puVar1;
  
  while (_Memory = DAT_140009940, DAT_140009940 != (undefined8 *)0x0) {
    puVar1 = DAT_140009940 + 1;
    DAT_140009940 = (undefined8 *)*DAT_140009940;
    puVar1 = (undefined8 *)(**(code **)(*(longlong *)*puVar1 + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    free(_Memory);
  }
  return;
}

