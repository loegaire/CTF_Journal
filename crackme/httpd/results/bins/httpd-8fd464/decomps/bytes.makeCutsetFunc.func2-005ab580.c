
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.makeCutsetFunc.func2(int32 r, bool ~r1) */

bool bytes_makeCutsetFunc_func2(int32 r)

{
  long in_RDX;
  bool bVar1;
  int32 r_spill;
  
                    /* Unresolved local var: bytes.asciiSet * &as@[DW_OP_reg0(RAX)] */
  if (r_spill < 0x80) {
    bVar1 = (*(uint *)(*(long *)(in_RDX + 8) + (ulong)(byte)((byte)r_spill >> 5) * 4) >>
             (r_spill & 0x1fU) & 1) != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

