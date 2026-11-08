
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.gostring(uint8 * p, string ~r1) */

string runtime_gostring(uint8 *p)

{
  undefined1 auVar1 [16];
  ulong unaff_RBX;
  long in_FS_OFFSET;
  string sVar2;
  uint8 *p_spill;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_30;
  
                    /* Unresolved local var: int l@[???]
                       Unresolved local var: string s@[???]
                       Unresolved local var: []uint8 b@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_findnull(p_spill);
  if (local_48 != 0) {
    runtime_rawstring(local_48);
    if (local_30 != 0) {
      runtime_memmove();
      sVar2.len = (int)local_40;
      sVar2.str = local_40;
      return sVar2;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = unaff_RBX;
  return (string)(auVar1 << 0x40);
}

