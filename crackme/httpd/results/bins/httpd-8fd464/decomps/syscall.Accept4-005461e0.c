
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Accept4(int fd, int flags, int nfd, syscall.Sockaddr sa,
   error err) */

multireturn_int_syscall_Sockaddr_error_ syscall_Accept4(int fd,int flags)

{
  int fd_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 unaff_RBP;
  void *in_RSI;
  void *pvVar6;
  runtime_itab *prVar7;
  long in_FS_OFFSET;
  interface___ e;
  multireturn_int_error__conflict7 mVar8;
  multireturn_int_syscall_Sockaddr_error_ mVar9;
  multireturn_int_syscall_Sockaddr_error_ mVar10;
  multireturn_syscall_Sockaddr_error_ mVar11;
  int fd_spill;
  int flags_spill;
  syscall_RawSockaddrAny rsa;
  
  mVar10.sa.tab = (syscall_RawSockaddrAny *)flags;
  do {
                    /* Unresolved local var: syscall._Socklen len@[???] */
    puVar5 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x60)) {
      puVar5 = (undefined1 *)((long)register0x00000020 + -0xe0);
      *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
      *(undefined8 *)((long)register0x00000020 + -0x94) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x8c) = 0;
      prVar7 = (runtime_itab *)((long)register0x00000020 + -0xa8);
      *(undefined1 **)((long)register0x00000020 + -0xf0) =
           (undefined1 *)((long)register0x00000020 + -8);
      *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x546238;
      fd_00 = FUN_0051a18b();
      unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0xf0);
      *(undefined4 *)((long)register0x00000020 + -0xa4) = 0x6c;
      *(undefined8 *)((long)register0x00000020 + -0xe0) =
           *(undefined8 *)((long)register0x00000020 + 8);
      *(int *)((long)register0x00000020 + -0xd8) = fd_00;
      *(undefined1 **)((long)register0x00000020 + -0xd0) =
           (undefined1 *)((long)register0x00000020 + -0xa4);
      *(syscall__Socklen **)((long)register0x00000020 + -200) =
           *(syscall__Socklen **)((long)register0x00000020 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x546271;
      mVar8 = syscall_accept4(fd_00,mVar10.sa.tab,
                              *(syscall__Socklen **)((long)register0x00000020 + 0x10),(int)prVar7);
      mVar10.sa.tab = mVar8.err.tab;
      uVar1 = *(undefined8 *)((long)register0x00000020 + -0xc0);
      if (*(long *)((long)register0x00000020 + -0xb8) != 0) {
        *(undefined8 *)((long)register0x00000020 + 0x18) = uVar1;
        *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x30) =
             *(undefined8 *)((long)register0x00000020 + -0xb8);
        *(undefined8 *)((long)register0x00000020 + 0x38) =
             *(undefined8 *)((long)register0x00000020 + -0xb0);
        mVar10.nfd = uVar1;
        mVar10.sa.data = (void *)*(undefined8 *)((long)register0x00000020 + -0xb8);
        mVar10.err.data = in_RSI;
        mVar10.err.tab = prVar7;
        return mVar10;
      }
      if (*(uint *)((long)register0x00000020 + -0xa4) < 0x6d) {
        *(undefined8 *)((long)register0x00000020 + -0xa0) = uVar1;
        *(syscall_RawSockaddrAny **)((long)register0x00000020 + -0xe0) =
             (syscall_RawSockaddrAny *)((long)register0x00000020 + -0x94);
        *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x5462aa;
        mVar11 = syscall_anyToSockaddr((syscall_RawSockaddrAny *)((long)register0x00000020 + -0x94))
        ;
        prVar7 = mVar11.~r2.data;
        uVar1 = *(undefined8 *)((long)register0x00000020 + -0xd8);
        uVar2 = *(undefined8 *)((long)register0x00000020 + -200);
        uVar3 = *(undefined8 *)((long)register0x00000020 + -0xd0);
        uVar4 = *(undefined8 *)((long)register0x00000020 + -0xc0);
        if (*(long *)((long)register0x00000020 + -200) == 0) {
          pvVar6 = *(void **)((long)register0x00000020 + -0xa0);
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x10) = uVar1;
          *(undefined8 *)((long)register0x00000020 + -0x18) = uVar3;
          *(undefined8 *)((long)register0x00000020 + -0x20) = uVar2;
          *(undefined8 *)((long)register0x00000020 + -0x28) = uVar4;
          *(int *)((long)register0x00000020 + -0xe0) = *(int *)((long)register0x00000020 + -0xa0);
          *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x5462fb;
          syscall_Close(*(int *)((long)register0x00000020 + -0xa0));
          uVar1 = *(undefined8 *)((long)register0x00000020 + -0x10);
          uVar2 = *(undefined8 *)((long)register0x00000020 + -0x20);
          uVar3 = *(undefined8 *)((long)register0x00000020 + -0x18);
          uVar4 = *(undefined8 *)((long)register0x00000020 + -0x28);
          pvVar6 = (void *)0x0;
        }
        *(void **)((long)register0x00000020 + 0x18) = pvVar6;
        *(undefined8 *)((long)register0x00000020 + 0x20) = uVar1;
        *(undefined8 *)((long)register0x00000020 + 0x28) = uVar3;
        *(undefined8 *)((long)register0x00000020 + 0x30) = uVar2;
        *(undefined8 *)((long)register0x00000020 + 0x38) = uVar4;
        mVar9.sa.tab = (runtime_itab *)uVar4;
        mVar9.nfd = uVar1;
        mVar9.sa.data = (void *)uVar2;
        mVar9.err.data = pvVar6;
        mVar9.err.tab = prVar7;
        return mVar9;
      }
      *(undefined **)((long)register0x00000020 + -0xe0) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0xd8) = syscall__stmp_50;
      *(undefined8 *)((long)register0x00000020 + -0xe8) = 0x5463a6;
      e.data = mVar10.sa.tab;
      e._type = (runtime__type *)syscall__stmp_50;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar5 + -8) = 0x5463ac;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar5;
  } while( true );
}

