
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.direntNamlen([]uint8 buf, uint64 ~r1, bool ~r2) */

multireturn_uint64_bool__conflict1 os_direntNamlen(__uint8 buf)

{
  uintptr in_RDI;
  long in_FS_OFFSET;
  __uint8 b;
  multireturn_uint64_bool__conflict1 mVar1;
  __uint8 buf_spill;
  undefined8 local_10;
  
  b.len = buf.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (buf_spill.len < 0x16) {
    local_10 = 0;
  }
  else {
    b.cap = buf_spill.cap + -0x14;
    b.array = (uint8 *)buf_spill.len;
    os_readIntLE(b,in_RDI);
  }
  mVar1.~r2 = buf.len._0_1_;
  mVar1.~r1 = local_10;
  return mVar1;
}

