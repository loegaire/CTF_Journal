
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*rtype).NumMethod(reflect.rtype * t, int ~r0) */

int reflect___rtype__NumMethod(reflect_rtype *t)

{
  long in_FS_OFFSET;
  reflect_interfaceType *tt;
  int local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((tt->rtype).kind & 0x1f) == 0x14) {
    return (tt->methods).len;
  }
  reflect___rtype__exportedMethods(&tt->rtype);
  return local_18;
}

