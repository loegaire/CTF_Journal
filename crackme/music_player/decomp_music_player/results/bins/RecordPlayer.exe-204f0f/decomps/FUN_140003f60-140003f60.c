
undefined8 * FUN_140003f60(undefined8 *param_1,uint param_2)

{
  void *_Memory;
  
  _Memory = (void *)param_1[10];
  *param_1 = PopupDialog::vftable;
  if (_Memory != (void *)0x0) {
    FUN_140002f40((longlong)_Memory);
    free(_Memory);
  }
  DeleteObject((HGDIOBJ)param_1[8]);
  DeleteObject((HGDIOBJ)param_1[9]);
  thunk_FUN_140002b40(param_1 + 4);
  *param_1 = BaseDialog::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

