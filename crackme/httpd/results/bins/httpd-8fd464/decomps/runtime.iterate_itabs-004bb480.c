
/* WARNING: Unknown calling convention */

void runtime_iterate_itabs(func__runtime_itab_ **fn)

{
  runtime_itabTableType *prVar1;
  ulong uVar2;
  runtime_itab *in_RDI;
  long in_FS_OFFSET;
  func__runtime_itab_ **fn_spill;
  
                    /* Unresolved local var: runtime.itabTableType * t@[DW_OP_reg0(RAX)] */
  while (prVar1 = runtime_itabTable,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: uintptr i@[???] */
  for (uVar2 = 0; uVar2 < prVar1->size; uVar2 = uVar2 + 1) {
                    /* Unresolved local var: runtime.itab * m@[???] */
    if (prVar1->entries[uVar2] != (runtime_itab *)0x0) {
      (**fn_spill)(in_RDI);
    }
  }
  return;
}

