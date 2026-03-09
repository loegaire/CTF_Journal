
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.(*SockaddrUnix).sockaddr(syscall.SockaddrUnix * sa, void *
   ~r0, syscall._Socklen ~r1, error ~r2) */

multireturn_void___syscall__Socklen_error_
syscall___SockaddrUnix__sockaddr(syscall_SockaddrUnix *sa)

{
  runtime_itab *prVar1;
  uint8 *puVar2;
  undefined4 unaff_EBX;
  long lVar3;
  void *in_RDI;
  multireturn_void___syscall__Socklen_error_ mVar4;
  multireturn_void___syscall__Socklen_error_ mVar5;
  syscall_SockaddrUnix *sa_spill;
  
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: string name@[???] */
  prVar1 = (runtime_itab *)(sa_spill->Name).len;
  puVar2 = (sa_spill->Name).str;
  if (((long)prVar1 < 0x68) && (prVar1 != (runtime_itab *)0x0)) {
    (sa_spill->raw).Len = (char)prVar1 + 3;
    (sa_spill->raw).Family = 1;
                    /* Unresolved local var: int i@[???] */
    for (lVar3 = 0; lVar3 < (long)prVar1; lVar3 = lVar3 + 1) {
      (sa_spill->raw).Path[lVar3] = puVar2[lVar3];
    }
    mVar5.~r2.tab = (runtime_itab *)(ulong)(sa_spill->raw).Len;
    mVar5.~r0 = &sa_spill->raw;
    mVar5.~r1 = (undefined4)lVar3;
    mVar5.~r2.data = in_RDI;
    return mVar5;
  }
  mVar4.~r1 = unaff_EBX;
  mVar4.~r0 = &DAT_002b2e10;
  mVar4.~r2.data = in_RDI;
  mVar4.~r2.tab = prVar1;
  return mVar4;
}

