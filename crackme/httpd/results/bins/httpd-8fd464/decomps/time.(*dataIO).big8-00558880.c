
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.(*dataIO).big8(time.dataIO * d, uint64 n, bool ok) */

multireturn_uint64_bool__conflict time___dataIO__big8(time_dataIO *d)

{
  long in_FS_OFFSET;
  multireturn_uint64_bool__conflict mVar1;
  multireturn_uint64_bool__conflict mVar2;
  multireturn_uint32_bool__conflict1 mVar3;
  time_dataIO *d_spill;
  uint local_20;
  char local_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  time___dataIO__big4(d_spill);
  mVar3 = time___dataIO__big4((time_dataIO *)(ulong)local_20);
  mVar1.ok = mVar3.ok;
  mVar1.n = (ulong)local_20;
  if ((local_1c != '\0') && (local_1c != '\0')) {
    return mVar1;
  }
  d_spill->error = true;
  mVar2.ok = mVar1.ok;
  mVar2.n = (uint64)d_spill;
  return mVar2;
}

