
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net._Cfunc_gai_strerror(net._Ctype_int p0, net._Ctype_char * r1)
    */

net__Ctype_char * net__Cfunc_gai_strerror(net__Ctype_int p0)

{
  int32 iVar1;
  undefined4 extraout_var;
  net__Ctype_char *extraout_RAX;
  void *unaff_RBX;
  long in_FS_OFFSET;
  net__Ctype_int p0_spill;
  undefined8 uStack0000000000000010;
  net__Ctype_char *pnVar2;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uStack0000000000000010 = 0;
  iVar1 = runtime_cgocall(&p0_spill,unaff_RBX);
  pnVar2 = (net__Ctype_char *)CONCAT44(extraout_var,iVar1);
  if (runtime_cgoAlwaysFalse != false) {
    runtime_convT32(p0_spill);
    runtime_cgoUse();
    pnVar2 = extraout_RAX;
  }
  return pnVar2;
}

