
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net._Cfunc_freeaddrinfo(net._Ctype_struct_addrinfo * p0, uint8 *
   r1) */

uint8 * net__Cfunc_freeaddrinfo(net__Ctype_struct_addrinfo *p0)

{
  void *unaff_RBX;
  long in_FS_OFFSET;
  net__Ctype_struct_addrinfo *p0_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_cgocall(&p0_spill,unaff_RBX);
  if (runtime_cgoAlwaysFalse != false) {
    runtime_cgoUse();
  }
  return (uint8 *)(double)(unkfloat1)runtime_zerobase;
}

