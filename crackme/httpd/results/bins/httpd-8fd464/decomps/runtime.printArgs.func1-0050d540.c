
/* WARNING: Unknown calling convention */

void runtime_printArgs_func1(uint8 off,uint8 sz)

{
  ulong uVar1;
  uint64 v;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  uint8 off_spill;
  uint8 sz_spill;
  
                    /* Unresolved local var: uint64 x@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
                    /* Unresolved local var: uint8[8] * q@[???] */
  v = *(uint64 *)((ulong)off_spill + *(long *)(in_RDX + 8));
  if (sz_spill < 8) {
                    /* Unresolved local var: uint8 shift@[???] */
    uVar1 = -(ulong)((byte)-(sz_spill * '\b' + -0x40) < 0x40);
    v = (v << (sz_spill * -8 & 0x3f) & uVar1) >> (sz_spill * -8 & 0x3f) & uVar1;
  }
  runtime_printlock();
  runtime_printhex(v);
  runtime_printunlock();
  return;
}

