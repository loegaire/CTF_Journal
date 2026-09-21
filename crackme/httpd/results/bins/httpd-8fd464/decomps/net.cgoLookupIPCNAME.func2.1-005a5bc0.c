
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void net_cgoLookupIPCNAME_func2_1(void)

{
  runtime__type *p0;
  long in_RDX;
  long extraout_RDX;
  void *unaff_RBX;
  void *in_RDI;
  long in_FS_OFFSET;
  interface___ ptr;
  interface___ arg;
  
                    /* Unresolved local var: net._Ctype_struct_addrinfo * _cgo0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  p0 = *(runtime__type **)(in_RDX + 8);
  ptr.data = unaff_RBX;
  ptr._type = p0;
  arg.data = in_RDI;
  arg._type = (runtime__type *)&DAT_0021d120;
  runtime_cgoCheckPointer(ptr,arg);
  net__Cfunc_freeaddrinfo((net__Ctype_struct_addrinfo *)p0);
  return;
}

