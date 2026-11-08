
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.anyToSockaddr(syscall.RawSockaddrAny * rsa,
   syscall.Sockaddr ~r1, error ~r2) */

multireturn_syscall_Sockaddr_error_ syscall_anyToSockaddr(syscall_RawSockaddrAny *rsa)

{
  byte bVar1;
  uint8 uVar2;
  uint uVar3;
  uint8 *puVar4;
  long lVar5;
  void *unaff_RBX;
  uint8 *puVar6;
  uint8 *ptr;
  void *in_RDI;
  long in_FS_OFFSET;
  string sVar7;
  multireturn_syscall_Sockaddr_error_ mVar8;
  multireturn_syscall_Sockaddr_error_ mVar9;
  multireturn_syscall_Sockaddr_error_ mVar10;
  multireturn_syscall_Sockaddr_error_ mVar11;
  multireturn_syscall_Sockaddr_error_ mVar12;
  multireturn_syscall_Sockaddr_error_ mVar13;
  syscall_RawSockaddrDatalink *pp;
  runtime_itab *local_30;
  runtime_interfacetype *local_20;
  runtime__type *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  bVar1 = pp->Family;
  mVar9.~r2.tab = (runtime_itab *)(ulong)bVar1;
  if (bVar1 < 3) {
                    /* Unresolved local var: syscall.SockaddrUnix * sa@[???]
                       Unresolved local var: int n@[???]
                       Unresolved local var: []uint8 bytes@[???] */
    if (bVar1 == 1) {
      uVar3 = pp->Len - 2;
      mVar8.~r2.tab = (runtime_itab *)(ulong)uVar3;
      if (0x68 < (byte)uVar3) {
        mVar8.~r1.data = unaff_RBX;
        mVar8.~r1.tab = (runtime_itab *)&DAT_002b2e10;
        mVar8.~r2.data = in_RDI;
        return mVar8;
      }
      runtime_newobject((runtime__type *)&DAT_0024ea80);
      puVar4 = (uint8 *)((ulong)pp->Len - 2);
                    /* Unresolved local var: int i@[???] */
      for (puVar6 = (uint8 *)0x0; ptr = puVar4, (long)puVar6 < (long)puVar4; puVar6 = puVar6 + 1) {
        if ((uint8 *)0x67 < puVar6) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        ptr = puVar6;
        if (*(uint8 *)((long)&pp->Index + (long)puVar6) == 0) break;
      }
      if (&DAT_00000069 <= ptr) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      sVar7 = runtime_slicebytetostring((runtime_tmpBuf *)&pp->Index,ptr,(int)pp);
      mVar13.~r1.data = (void *)sVar7.len;
      local_30->_type = local_18;
      if (runtime_writeBarrier._0_4_ == 0) {
        local_30->inter = local_20;
      }
      else {
        runtime_gcWriteBarrier();
      }
      mVar13.~r1.tab = (runtime_itab *)go_itab__syscall_SockaddrUnix_syscall_Sockaddr;
      mVar13.~r2.data = local_30;
      mVar13.~r2.tab = (runtime_itab *)local_18;
      return mVar13;
    }
                    /* Unresolved local var: syscall.SockaddrInet4 * sa@[???] */
    if (bVar1 == 2) {
      runtime_newobject((runtime__type *)&DAT_00259260);
      uVar2 = *(uint8 *)((long)&pp->Index + 1);
      local_30->inter = (runtime_interfacetype *)(ulong)CONCAT11((char)pp->Index,uVar2);
                    /* Unresolved local var: int i@[???] */
      for (lVar5 = 0; lVar5 < 4; lVar5 = lVar5 + 1) {
        uVar2 = pp->Data[lVar5 + -4];
        local_30->_[lVar5 + -0xc] = uVar2;
      }
      mVar12.~r1.data._0_1_ = uVar2;
      mVar12.~r1.tab = local_30;
      mVar12.~r1.data._1_7_ = 0;
      mVar12.~r2.data = in_RDI;
      mVar12.~r2.tab = (runtime_itab *)go_itab__syscall_SockaddrInet4_syscall_Sockaddr;
      return mVar12;
    }
  }
  else {
                    /* Unresolved local var: syscall.SockaddrDatalink * sa@[???] */
    if (bVar1 == 0x12) {
      runtime_newobject((runtime__type *)&DAT_00275640);
      *(uint8 *)&local_30->inter = pp->Len;
      *(uint8 *)((long)&local_30->inter + 1) = pp->Family;
      *(uint16 *)((long)&local_30->inter + 2) = pp->Index;
      *(uint8 *)((long)&local_30->inter + 4) = pp->Type;
      *(uint8 *)((long)&local_30->inter + 5) = pp->Nlen;
      *(uint8 *)((long)&local_30->inter + 6) = pp->Alen;
      *(uint8 *)((long)&local_30->inter + 7) = pp->Slen;
                    /* Unresolved local var: int i@[???] */
      for (lVar5 = 0; lVar5 < 0x2e; lVar5 = lVar5 + 1) {
        unaff_RBX = (void *)(ulong)(byte)pp->Data[lVar5];
        local_30->_[lVar5 + -0xc] = pp->Data[lVar5];
      }
      mVar10.~r1.data = unaff_RBX;
      mVar10.~r1.tab = local_30;
      mVar10.~r2.data = in_RDI;
      mVar10.~r2.tab = (runtime_itab *)go_itab__syscall_SockaddrDatalink_syscall_Sockaddr;
      return mVar10;
    }
                    /* Unresolved local var: syscall.SockaddrInet6 * sa@[???] */
    if (bVar1 == 0x1c) {
      runtime_newobject((runtime__type *)&DAT_00264120);
      uVar2 = *(uint8 *)((long)&pp->Index + 1);
      local_30->inter = (runtime_interfacetype *)(ulong)CONCAT11((char)pp->Index,uVar2);
      *(undefined4 *)&local_30->_type = *(undefined4 *)(pp->Data + 0x10);
                    /* Unresolved local var: int i@[???] */
      for (lVar5 = 0; lVar5 < 0x10; lVar5 = lVar5 + 1) {
        uVar2 = pp->Data[lVar5];
        local_30->_[lVar5 + -8] = uVar2;
      }
      mVar11.~r1.data._0_1_ = uVar2;
      mVar11.~r1.tab = local_30;
      mVar11.~r1.data._1_7_ = 0;
      mVar11.~r2.data = in_RDI;
      mVar11.~r2.tab = (runtime_itab *)go_itab__syscall_SockaddrInet6_syscall_Sockaddr;
      return mVar11;
    }
  }
  mVar9.~r1.data = unaff_RBX;
  mVar9.~r1.tab = (runtime_itab *)&net__stmp_87;
  mVar9.~r2.data = in_RDI;
  return mVar9;
}

