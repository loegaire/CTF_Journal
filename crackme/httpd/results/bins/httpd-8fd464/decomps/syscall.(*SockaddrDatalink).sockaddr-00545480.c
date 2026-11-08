
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.(*SockaddrDatalink).sockaddr(syscall.SockaddrDatalink *
   sa, void * ~r0, syscall._Socklen ~r1, error ~r2) */

multireturn_void___syscall__Socklen_error_
syscall___SockaddrDatalink__sockaddr(syscall_SockaddrDatalink *sa)

{
  runtime_itab *in_RCX;
  runtime_itab *prVar1;
  undefined4 unaff_EBX;
  void *in_RDI;
  multireturn_void___syscall__Socklen_error_ mVar2;
  multireturn_void___syscall__Socklen_error_ mVar3;
  syscall_SockaddrDatalink *sa_spill;
  
  if (sa_spill->Index != 0) {
    (sa_spill->raw).Len = sa_spill->Len;
    (sa_spill->raw).Family = 0x12;
    (sa_spill->raw).Index = sa_spill->Index;
    (sa_spill->raw).Type = sa_spill->Type;
    (sa_spill->raw).Nlen = sa_spill->Nlen;
    (sa_spill->raw).Alen = sa_spill->Alen;
    (sa_spill->raw).Slen = sa_spill->Slen;
                    /* Unresolved local var: int i@[???] */
    for (prVar1 = (runtime_itab *)0x0; (long)prVar1 < 0x2e;
        prVar1 = (runtime_itab *)((long)&prVar1->inter + 1)) {
      (sa_spill->raw).Data[(long)prVar1] = sa_spill->Data[(long)prVar1];
    }
    mVar3.~r0 = &sa_spill->raw;
    mVar3.~r1 = unaff_EBX;
    mVar3.~r2.data = in_RDI;
    mVar3.~r2.tab = prVar1;
    return mVar3;
  }
  mVar2.~r1 = unaff_EBX;
  mVar2.~r0 = &DAT_002b2e10;
  mVar2.~r2.data = in_RDI;
  mVar2.~r2.tab = in_RCX;
  return mVar2;
}

