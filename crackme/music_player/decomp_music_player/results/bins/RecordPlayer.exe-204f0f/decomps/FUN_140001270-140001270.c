
undefined8 * FUN_140001270(undefined8 *param_1,uint param_2)

{
  FUN_1400011f0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

