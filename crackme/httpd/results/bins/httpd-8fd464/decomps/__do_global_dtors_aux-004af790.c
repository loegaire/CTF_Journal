
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __do_global_dtors_aux(void)

{
  crt_func *pp_Var1;
  
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: crt_func fn@[???]
                       Unresolved local var: uintptr_t dtors_end@[???] */
  for (pp_Var1 = __DTOR_END__; (code *)0x1 < *pp_Var1 + 1; pp_Var1 = pp_Var1 + 1) {
    (**pp_Var1)();
  }
  return;
}

