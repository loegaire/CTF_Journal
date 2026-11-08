
void FUN_140003570(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *param_1 = MainDialog::vftable;
  puVar1 = (undefined8 *)param_1[10];
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140001b30(puVar1);
    free(puVar1);
    param_1[10] = 0;
  }
  FUN_1400012b0(param_1[4]);
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  pvVar2 = (void *)param_1[7];
  if (pvVar2 != (void *)0x0) {
    FUN_140002f40((longlong)pvVar2);
    free(pvVar2);
  }
  pvVar2 = (void *)param_1[8];
  if (pvVar2 != (void *)0x0) {
    FUN_140002f40((longlong)pvVar2);
    free(pvVar2);
  }
  pvVar2 = (void *)param_1[9];
  if (pvVar2 != (void *)0x0) {
    FUN_140002f40((longlong)pvVar2);
    free(pvVar2);
  }
  DeleteObject((HGDIOBJ)param_1[5]);
  DeleteObject((HGDIOBJ)param_1[6]);
  thunk_FUN_140002b40(param_1 + 0xb);
  *param_1 = BaseDialog::vftable;
  return;
}

