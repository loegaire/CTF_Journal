
undefined8 * FUN_140002c20(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  param_1[1] = param_2;
  *param_1 = BaseDialog::vftable;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  return param_1;
}

