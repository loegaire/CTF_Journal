
void crosscall_amd64(code *param_1,code *param_2,undefined8 param_3)

{
  (*param_2)(param_3);
  (*param_1)();
  return;
}

