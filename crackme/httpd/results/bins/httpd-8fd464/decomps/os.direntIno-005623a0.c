
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.direntIno([]uint8 buf, uint64 ~r1, bool ~r2) */

multireturn_uint64_bool__conflict1 os_direntIno(__uint8 buf)

{
  uintptr in_RDI;
  long in_FS_OFFSET;
  multireturn_uint64_bool__conflict1 mVar1;
  __uint8 b;
  __uint8 buf_spill;
  undefined8 local_10;
  
  b.len = buf.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (buf_spill.len < 8) {
    local_10 = 0;
  }
  else {
    b.array = (uint8 *)buf_spill.len;
    b.cap = buf_spill.cap;
    os_readIntLE(b,in_RDI);
  }
  mVar1.~r2 = buf.len._0_1_;
  mVar1.~r1 = local_10;
  return mVar1;
}

