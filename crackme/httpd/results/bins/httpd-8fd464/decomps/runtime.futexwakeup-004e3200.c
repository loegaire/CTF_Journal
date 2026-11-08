
/* WARNING: Unknown calling convention */

void runtime_futexwakeup(uint32 *addr,uint32 cnt)

{
  uint32 *addr_spill;
  uint32 cnt_spill;
  undefined4 local_28;
  
                    /* Unresolved local var: int32 ret@[???] */
  runtime_sys_umtx_op();
  if (-1 < local_28) {
    return;
  }
  runtime_systemstack();
  return;
}

