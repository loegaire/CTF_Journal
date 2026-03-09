
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.makeAddrRange(uintptr base, uintptr limit,
   runtime.addrRange ~r2) */

runtime_addrRange runtime_makeAddrRange(uintptr base,uintptr limit)

{
  runtime_addrRange rVar1;
  long in_FS_OFFSET;
  string s;
  uintptr base_spill;
  uintptr limit_spill;
  
                    /* Unresolved local var: runtime.addrRange r@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rVar1.limit.a = limit_spill;
  rVar1.base.a = base_spill;
  if (limit_spill <= limit_spill + 0x800000000000 == base_spill <= base_spill + 0x800000000000) {
    return rVar1;
  }
  s.len = limit_spill;
  s.str = &DAT_002ab16c;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

