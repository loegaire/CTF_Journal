
/* WARNING: Unknown calling convention */

void runtime_futexsleep(uint32 *addr,uint32 val,int64 ns)

{
  uint32 *addr_spill;
  uint32 val_spill;
  int64 ns_spill;
  
  runtime_systemstack();
  return;
}

