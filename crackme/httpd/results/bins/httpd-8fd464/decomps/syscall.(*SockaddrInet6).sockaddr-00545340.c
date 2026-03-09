
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.(*SockaddrInet6).sockaddr(syscall.SockaddrInet6 * sa, void
   * ~r0, syscall._Socklen ~r1, error ~r2) */

multireturn_void___syscall__Socklen_error_
syscall___SockaddrInet6__sockaddr(syscall_SockaddrInet6 *sa)

{
  runtime_itab *in_RCX;
  long lVar1;
  undefined4 unaff_EBX;
  void *in_RDI;
  multireturn_void___syscall__Socklen_error_ mVar2;
  multireturn_void___syscall__Socklen_error_ mVar3;
  syscall_SockaddrInet6 *sa_spill;
  
  if ((ulong)sa_spill->Port < 0x10000) {
    (sa_spill->raw).Len = 0x1c;
    (sa_spill->raw).Family = 0x1c;
    *(char *)&(sa_spill->raw).Port = (char)((ulong)sa_spill->Port >> 8);
    *(char *)((long)&(sa_spill->raw).Port + 1) = (char)sa_spill->Port;
    (sa_spill->raw).Scope_id = sa_spill->ZoneId;
                    /* Unresolved local var: int i@[???] */
    for (lVar1 = 0; lVar1 < 0x10; lVar1 = lVar1 + 1) {
      (sa_spill->raw).Addr[lVar1] = sa_spill->Addr[lVar1];
    }
    mVar3.~r2.tab = (runtime_itab *)(ulong)(sa_spill->raw).Len;
    mVar3.~r0 = &sa_spill->raw;
    mVar3.~r1 = unaff_EBX;
    mVar3.~r2.data = in_RDI;
    return mVar3;
  }
  mVar2.~r1 = unaff_EBX;
  mVar2.~r0 = &DAT_002b2e10;
  mVar2.~r2.data = in_RDI;
  mVar2.~r2.tab = in_RCX;
  return mVar2;
}

