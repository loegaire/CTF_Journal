
/* WARNING: Unknown calling convention */

void runtime_forEachG(func__runtime_g_ **fn)

{
  int iVar1;
  long lVar2;
  runtime_g *in_RDI;
  long in_FS_OFFSET;
  func__runtime_g_ **fn_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_allglock);
  iVar1 = runtime_allgs.len;
                    /* Unresolved local var: runtime.g * gp@[???] */
  for (lVar2 = 0; lVar2 < iVar1; lVar2 = lVar2 + 1) {
    (**fn_spill)(in_RDI);
  }
  runtime_unlock2(&runtime_allglock);
  return;
}

