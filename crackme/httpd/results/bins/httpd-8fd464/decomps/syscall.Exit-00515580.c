
/* WARNING: Unknown calling convention */

void syscall_Exit(int code)

{
  int code_spill;
  
  runtime_exit();
  return;
}

