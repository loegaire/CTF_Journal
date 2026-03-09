
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.addrRange.removeGreaterEqual(runtime.addrRange a, uintptr
   addr, runtime.addrRange ~r1) */

runtime_addrRange runtime_addrRange_removeGreaterEqual(runtime_addrRange a,uintptr addr)

{
  long in_FS_OFFSET;
  runtime_addrRange rVar1;
  runtime_addrRange rVar2;
  runtime_addrRange rVar3;
  runtime_addrRange a_spill;
  uintptr addr_spill;
  undefined8 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (a_spill.base.a + 0x800000000000 < addr_spill + 0x800000000000) {
    if (a_spill.limit.a + 0x800000000000 <= addr_spill + 0x800000000000) {
      rVar1.limit.a = a_spill.base.a;
      rVar1.base.a = addr_spill;
      return rVar1;
    }
    rVar2 = runtime_makeAddrRange(addr_spill,a_spill.base.a);
    rVar3.limit = rVar2.limit.a;
    rVar3.base.a = local_18;
    return rVar3;
  }
  rVar2.limit.a = a_spill.base.a;
  rVar2.base.a = addr_spill;
  return rVar2;
}

