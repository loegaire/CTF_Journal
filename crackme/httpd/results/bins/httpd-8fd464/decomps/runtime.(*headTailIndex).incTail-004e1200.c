
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*headTailIndex).incTail(runtime.headTailIndex * h,
   runtime.headTailIndex ~r0) */

runtime_headTailIndex runtime___headTailIndex__incTail(runtime_headTailIndex *h)

{
  runtime_headTailIndex rVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  runtime_headTailIndex *h_spill;
  
                    /* Unresolved local var: runtime.headTailIndex ht@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  LOCK();
  rVar1 = *h_spill;
  *h_spill = *h_spill + 1;
  UNLOCK();
  rVar1 = rVar1 + 1;
  if ((int)rVar1 != 0) {
    return rVar1;
  }
  runtime_printlock();
  s.len = unaff_RBX;
  s.str = &DAT_00299ae5;
  runtime_printstring(s);
  runtime_printuint(rVar1 >> 0x20);
  s_00.len = unaff_RBX;
  s_00.str = &DAT_0028d29e;
  runtime_printstring(s_00);
  runtime_printuint(rVar1 & 0xffffffff);
  runtime_printnl();
  runtime_printunlock();
  s_01.len = unaff_RBX;
  s_01.str = &DAT_0029d219;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_01);
}

