
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*bucket).bp(runtime.bucket * b, runtime.blockRecord *
   ~r0) */

runtime_blockRecord * runtime___bucket__bp(runtime_bucket *b)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  runtime_bucket *b_spill;
  
                    /* Unresolved local var: void * data@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((b_spill->typ != 2) && (b_spill->typ != 3)) {
    s.len = unaff_RBX;
    s.str = &DAT_0029bea6;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  return (runtime_blockRecord *)(&b_spill[1].next + b_spill->nstk);
}

