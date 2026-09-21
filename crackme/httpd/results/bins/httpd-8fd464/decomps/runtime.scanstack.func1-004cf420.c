
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.scanstack.func1(runtime.stkframe * frame, void * unused,
   bool ~r2) */

bool runtime_scanstack_func1(runtime_stkframe *frame,void *unused)

{
  undefined1 extraout_AL;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  runtime_stkframe *frame_spill;
  void *unused_spill;
  
                    /* Unresolved local var: runtime.stackScanState * &state@[???]
                       Unresolved local var: runtime.gcWork * gcw@[DW_OP_reg0(RAX)] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  runtime_scanframeworker
            (*(runtime_stkframe **)(in_RDX + 0x10),unused,*(runtime_gcWork **)(in_RDX + 8));
  return (bool)extraout_AL;
}

