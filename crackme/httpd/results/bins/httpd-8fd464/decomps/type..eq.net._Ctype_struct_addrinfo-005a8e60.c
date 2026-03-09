
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.net._Ctype_struct_addrinfo(net._Ctype_struct_addrinfo *
   p, net._Ctype_struct_addrinfo * q, bool r) */

bool type__eq_net__Ctype_struct_addrinfo
               (net__Ctype_struct_addrinfo *p,net__Ctype_struct_addrinfo *q)

{
  long in_FS_OFFSET;
  net__Ctype_struct_addrinfo *p_spill;
  net__Ctype_struct_addrinfo *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_memequal();
  if (local_10 == '\0') {
    local_10 = '\0';
  }
  else {
    runtime_memequal();
  }
  return (bool)local_10;
}

