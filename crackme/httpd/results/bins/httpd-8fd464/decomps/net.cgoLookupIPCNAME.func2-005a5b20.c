
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.cgoLookupIPCNAME.func2(net._Ctype_struct_addrinfo * * &res,
   func() * * ~r0) */

func__ ** net_cgoLookupIPCNAME_func2(net__Ctype_struct_addrinfo **_res)

{
  runtime__type *typ;
  func__ **extraout_RAX;
  long in_FS_OFFSET;
  net__Ctype_struct_addrinfo **_res_spill;
  func__ **local_18;
  
                    /* Unresolved local var: net._Ctype_struct_addrinfo * _cgo0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  typ = (runtime__type *)*_res_spill;
  runtime_newobject(typ);
  *local_18 = net_cgoLookupIPCNAME_func2_1;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_18[1] = (func__ *)typ;
  }
  else {
    runtime_gcWriteBarrierCX();
    local_18 = extraout_RAX;
  }
  return local_18;
}

