
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.funcLayout.func1(interface_{} ~r0) */

interface___ reflect_funcLayout_func1(void)

{
  long in_RDX;
  long extraout_RDX;
  void *unaff_RBX;
  long in_FS_OFFSET;
  interface___ iVar1;
  undefined8 local_10;
  
                    /* Unresolved local var: reflect.rtype * x@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  reflect_unsafe_New(*(runtime__type **)(in_RDX + 8));
  iVar1.data = unaff_RBX;
  iVar1._type = local_10;
  return iVar1;
}

