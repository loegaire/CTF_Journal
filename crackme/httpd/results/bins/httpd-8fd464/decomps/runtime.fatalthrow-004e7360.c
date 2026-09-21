
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_fatalthrow(void)

{
                    /* Unresolved local var: uintptr pc@[???]
                       Unresolved local var: uintptr sp@[???]
                       Unresolved local var: runtime.g * gp@[???] */
  runtime_systemstack();
  _DAT_00000000 = 0;
  return;
}

