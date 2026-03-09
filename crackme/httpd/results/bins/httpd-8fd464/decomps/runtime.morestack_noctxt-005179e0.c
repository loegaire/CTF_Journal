
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_morestack_noctxt(void)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
  runtime_morestack(in_RDI,in_RSI,0);
  return;
}

