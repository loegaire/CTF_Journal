
void runtime_goexit(void)

{
  code *pcVar1;
  
  runtime_goexit1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

