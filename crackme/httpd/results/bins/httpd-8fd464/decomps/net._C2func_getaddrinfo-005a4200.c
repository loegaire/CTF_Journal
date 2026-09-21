
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net._C2func_getaddrinfo(net._Ctype_char * p0, net._Ctype_char *
   p1, net._Ctype_struct_addrinfo * p2, net._Ctype_struct_addrinfo * * p3, net._Ctype_int r1, error
   r2) */

multireturn_net__Ctype_int_error_
net__C2func_getaddrinfo
          (net__Ctype_char *p0,net__Ctype_char *p1,net__Ctype_struct_addrinfo *p2,
          net__Ctype_struct_addrinfo **p3)

{
  undefined4 uVar1;
  undefined4 extraout_EAX;
  undefined1 *puVar3;
  long in_FS_OFFSET;
  multireturn_net__Ctype_int_error_ mVar4;
  net__Ctype_char *p0_spill;
  net__Ctype_char *p1_spill;
  net__Ctype_struct_addrinfo *p2_spill;
  net__Ctype_struct_addrinfo **p3_spill;
  undefined4 uStack0000000000000028;
  undefined1 *puStack0000000000000030;
  net__Ctype_char **ppnStack0000000000000038;
  uint local_18;
  net__Ctype_char **ppnVar2;
  
                    /* Unresolved local var: int32 errno@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uStack0000000000000028 = 0;
  puStack0000000000000030 = (undefined1 *)0x0;
  ppnStack0000000000000038 = (net__Ctype_char **)0x0;
  puVar3 = net__cgo_5e63b4cf910a_C2func_getaddrinfo;
  runtime_cgocall(&p0_spill,p1);
  ppnVar2 = (net__Ctype_char **)(ulong)local_18;
  if (local_18 != 0) {
    runtime_convT64((long)(int)local_18);
    puVar3 = go_itab_syscall_Errno_error;
    puStack0000000000000030 = go_itab_syscall_Errno_error;
    ppnVar2 = &p0_spill;
    ppnStack0000000000000038 = &p0_spill;
  }
  uVar1 = SUB84(ppnVar2,0);
  if (runtime_cgoAlwaysFalse != false) {
    puVar3 = &DAT_0021d0a0;
    runtime_cgoUse();
    runtime_cgoUse();
    runtime_cgoUse();
    runtime_cgoUse();
    uVar1 = extraout_EAX;
  }
  mVar4.r2.tab = (runtime_itab *)p1;
  mVar4.r1 = uVar1;
  mVar4.r2.data = puVar3;
  return mVar4;
}

