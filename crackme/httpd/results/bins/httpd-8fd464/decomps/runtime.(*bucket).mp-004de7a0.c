
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*bucket).mp(runtime.bucket * b, runtime.memRecord * ~r0)
    */

runtime_memRecord * runtime___bucket__mp(runtime_bucket *b)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  runtime_bucket *b_spill;
  
                    /* Unresolved local var: void * data@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (b_spill->typ == 1) {
    return (runtime_memRecord *)(&b_spill[1].next + b_spill->nstk);
  }
  s.len = unaff_RBX;
  s.str = &DAT_0029beba;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

