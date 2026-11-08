
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_debugCallPanicked(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

