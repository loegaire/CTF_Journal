
void _start(int *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  __libc_start1(*param_1,param_1 + 2,param_1 + (long)*param_1 * 2 + 4,param_2,main);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

