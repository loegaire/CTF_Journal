
/* WARNING: Unknown calling convention */

void runtime_newproc(int32 siz,runtime_funcval *fn)

{
  int32 siz_spill;
  runtime_funcval *fn_spill;
  
                    /* Unresolved local var: void * argp@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: uintptr pc@[???] */
  runtime_systemstack();
  return;
}

