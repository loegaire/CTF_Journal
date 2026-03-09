
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.addrinfoErrno.Error(net.addrinfoErrno eai, string ~r0) */

string net_addrinfoErrno_Error(net_addrinfoErrno eai)

{
  long in_FS_OFFSET;
  string sVar1;
  net_addrinfoErrno eai_spill;
  undefined8 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  net__Cfunc_gai_strerror((net__Ctype_int)eai_spill);
  sVar1 = runtime_gostring(local_18);
  sVar1.str = local_18;
  return sVar1;
}

