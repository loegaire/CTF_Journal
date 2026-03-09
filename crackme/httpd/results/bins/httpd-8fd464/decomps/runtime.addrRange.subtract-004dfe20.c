
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.addrRange.subtract(runtime.addrRange a, runtime.addrRange
   b, runtime.addrRange ~r1) */

runtime_addrRange runtime_addrRange_subtract(runtime_addrRange a,runtime_addrRange b)

{
  ulong uVar1;
  long in_FS_OFFSET;
  runtime_addrRange rVar2;
  runtime_addrRange rVar3;
  string s;
  runtime_addrRange a_spill;
  runtime_addrRange b_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar1 = a_spill.base.a + 0x800000000000;
  if ((b_spill.base.a + 0x800000000000 <= uVar1) &&
     (a_spill.limit.a + 0x800000000000 <= b_spill.limit.a + 0x800000000000)) {
    rVar2.limit.a = a_spill.base.a;
    rVar2.base.a = b_spill.base.a;
    return rVar2;
  }
  if ((uVar1 < b_spill.base.a + 0x800000000000) &&
     (b_spill.limit.a + 0x800000000000 < a_spill.limit.a + 0x800000000000)) {
    s.len = a_spill.base.a;
    s.str = &DAT_0028d7ae;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  if ((a_spill.limit.a + 0x800000000000 <= b_spill.limit.a + 0x800000000000) ||
     (b_spill.limit.a + 0x800000000000 <= uVar1)) {
    b_spill.limit.a = a_spill.base.a;
  }
  rVar3.limit.a = b_spill.limit.a;
  rVar3.base.a = b_spill.base.a;
  return rVar3;
}

