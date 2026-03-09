
/* WARNING: Unknown calling convention */

void runtime_sellock(__runtime_scase scases,__uint16 lockorder)

{
  runtime_hchan *prVar1;
  long lVar2;
  runtime_hchan *prVar3;
  long in_FS_OFFSET;
  __runtime_scase scases_spill;
  __uint16 lockorder_spill;
  
                    /* Unresolved local var: runtime.hchan * c@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar2 = 0;
  prVar3 = (runtime_hchan *)0x0;
  while( true ) {
    if (lockorder_spill.len <= lVar2) {
      return;
    }
                    /* Unresolved local var: runtime.hchan * c0@[???] */
    if ((ulong)scases_spill.len <= (ulong)lockorder_spill.array[lVar2]) break;
    prVar1 = scases_spill.array[lockorder_spill.array[lVar2]].c;
    if (prVar3 != prVar1) {
      runtime_lock2(&prVar1->lock);
      prVar3 = prVar1;
    }
    lVar2 = lVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

