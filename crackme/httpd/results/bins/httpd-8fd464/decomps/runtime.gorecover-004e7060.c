
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.gorecover(uintptr argp, interface_{} ~r1) */

interface___ runtime_gorecover(uintptr argp)

{
  runtime__type *prVar1;
  void *unaff_RBX;
  long in_FS_OFFSET;
  interface___ iVar2;
  interface___ iVar3;
  uintptr argp_spill;
  
                    /* Unresolved local var: runtime.g * gp@[DW_OP_reg0(RAX)]
                       Unresolved local var: runtime._panic * p@[???] */
  prVar1 = *(runtime__type **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if ((((prVar1 != (runtime__type *)0x0) && (*(char *)((long)&prVar1[1].size + 2) == '\0')) &&
      ((char)prVar1[1].size == '\0')) && (argp_spill == prVar1->size)) {
    *(undefined1 *)&prVar1[1].size = 1;
    iVar2.data = unaff_RBX;
    iVar2._type = *(runtime__type **)&prVar1->hash;
    return iVar2;
  }
  iVar3.data = unaff_RBX;
  iVar3._type = prVar1;
  return iVar3;
}

