
void _cgo_release_context(uintptr_t ctxt)

{
  _func_void_context_arg_ptr *p_Var1;
  context_arg arg;
  
                    /* Unresolved local var: _func_void_context_arg_ptr * pfn@[???] */
  p_Var1 = _cgo_get_context_function();
  if ((ctxt != 0) && (p_Var1 != (_func_void_context_arg_ptr *)0x0)) {
    arg.Context = ctxt;
    (*p_Var1)(&arg);
  }
  return;
}

