
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_SetFinalizer_func2(void)

{
  runtime_funcval *f;
  long in_RDX;
  long extraout_RDX;
  runtime__type *in_RDI;
  long in_FS_OFFSET;
  string s;
  char local_10;
  
                    /* Unresolved local var: runtime.eface * e@[???]
                       Unresolved local var: runtime.eface * f@[???]
                       Unresolved local var: uintptr nret@[???]
                       Unresolved local var: runtime._type * fint@[???]
                       Unresolved local var: runtime.ptrtype * ot@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  f = *(runtime_funcval **)(in_RDX + 0x18);
  runtime_addfinalizer
            (*(void **)(*(long *)(in_RDX + 8) + 8),f,*(uintptr *)(*(long *)(in_RDX + 0x10) + 8),
             in_RDI,*(runtime_ptrtype **)(in_RDX + 0x20));
  if (local_10 != '\0') {
    return;
  }
  s.len = (int)f;
  s.str = &DAT_002a77a8;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

