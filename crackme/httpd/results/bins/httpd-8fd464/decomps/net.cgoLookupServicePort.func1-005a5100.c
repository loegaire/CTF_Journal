
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.cgoLookupServicePort.func1([]uint8 cservice,
   net._Ctype_struct_addrinfo * hints, net._Ctype_struct_addrinfo * * &res, net._Ctype_int ~r0,
   error ~r1) */

multireturn_net__Ctype_int_error__conflict
net_cgoLookupServicePort_func1
          (__uint8 cservice,net__Ctype_struct_addrinfo *hints,net__Ctype_struct_addrinfo **_res)

{
  net__Ctype_struct_addrinfo *p2;
  long in_FS_OFFSET;
  interface___ ptr;
  interface___ ptr_00;
  interface___ arg;
  interface___ arg_00;
  multireturn_net__Ctype_int_error_ mVar1;
  multireturn_net__Ctype_int_error__conflict mVar2;
  __uint8 cservice_spill;
  net__Ctype_struct_addrinfo *_cgo2;
  net__Ctype_struct_addrinfo **_cgoBase3;
  undefined4 local_20;
  void *local_18;
  
  ptr.data = (net__Ctype_char *)cservice.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (cservice_spill.len != 0) {
    ptr._type = (runtime__type *)_cgo2;
    arg.data = hints;
    arg._type = (runtime__type *)cservice_spill.len;
    runtime_cgoCheckPointer(ptr,arg);
    ptr_00.data = ptr.data;
    ptr_00._type = (runtime__type *)_cgoBase3;
    arg_00.data = hints;
    arg_00._type = (runtime__type *)(runtime_staticuint64s + 1);
    p2 = (net__Ctype_struct_addrinfo *)(runtime_staticuint64s + 1);
    runtime_cgoCheckPointer(ptr_00,arg_00);
    mVar1 = net__C2func_getaddrinfo
                      ((net__Ctype_char *)_cgoBase3,ptr.data,p2,(net__Ctype_struct_addrinfo **)hints
                      );
    mVar2.~r1.tab = mVar1.r2.tab;
    mVar2.~r0 = local_20;
    mVar2.~r1.data = local_18;
    return mVar2;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

