
/* WARNING: Unknown calling convention */

void runtime_forEachGRace(func__runtime_g_ **fn)

{
  uintptr uVar1;
  ulong uVar2;
  runtime_g *in_RDI;
  long in_FS_OFFSET;
  func__runtime_g_ **fn_spill;
  
                    /* Unresolved local var: runtime.g * * ptr@[???]
                       Unresolved local var: uintptr length@[???] */
  while (uVar1 = runtime_allglen,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: uintptr length@[???]
                       Unresolved local var: runtime.g * * ptr@[???] */
                    /* Unresolved local var: uintptr i@[???] */
  for (uVar2 = 0; uVar2 < uVar1; uVar2 = uVar2 + 1) {
                    /* Unresolved local var: runtime.g * gp@[???] */
    (**fn_spill)(in_RDI);
  }
  return;
}

