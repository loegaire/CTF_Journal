
/* WARNING: Unknown calling convention */

void runtime_selunlock(__runtime_scase scases,__uint16 lockorder)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  __runtime_scase scases_spill;
  __uint16 lockorder_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
LAB_004f9f40:
  lVar2 = lockorder_spill.len + -1;
  if (lVar2 < 0) {
    return;
  }
                    /* Unresolved local var: runtime.hchan * c@[???] */
  if ((ulong)scases_spill.len <= (ulong)lockorder_spill.array[lVar2]) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (0 < lVar2) goto code_r0x004f9f65;
  goto LAB_004f9f7c;
code_r0x004f9f65:
  lVar1 = lockorder_spill.len + -2;
  if ((ulong)scases_spill.len <= (ulong)lockorder_spill.array[lVar1]) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  lockorder_spill.len = lVar2;
  if (scases_spill.array[lockorder_spill.array[lVar1]].c !=
      scases_spill.array[lockorder_spill.array[lVar2]].c) {
LAB_004f9f7c:
    runtime_unlock2(&(scases_spill.array[lockorder_spill.array[lVar2]].c)->lock);
    lockorder_spill.len = lVar2;
  }
  goto LAB_004f9f40;
}

