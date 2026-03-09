
void FUN_140003a00(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x18) = (param_2 ^ 1) * 2 + -1;
  return;
}

