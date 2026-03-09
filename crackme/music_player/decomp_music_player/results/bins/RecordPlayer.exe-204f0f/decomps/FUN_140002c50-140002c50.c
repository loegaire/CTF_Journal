
undefined8 * FUN_140002c50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = BaseDialog::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

