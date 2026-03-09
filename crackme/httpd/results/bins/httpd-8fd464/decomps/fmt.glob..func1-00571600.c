
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.glob..func1(interface_{} ~r0) */

interface___ fmt_glob__func1(void)

{
  void *unaff_RBX;
  long in_FS_OFFSET;
  interface___ iVar1;
  runtime__type *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_002767e0);
  iVar1.data = unaff_RBX;
  iVar1._type = local_10;
  return iVar1;
}

