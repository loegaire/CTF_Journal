
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.makeCutsetFunc.func3(int32 r, bool ~r1) */

bool bytes_makeCutsetFunc_func3(int32 r)

{
  byte *pbVar1;
  uint8 *puVar2;
  int k;
  long in_RDX;
  long extraout_RDX;
  long lVar3;
  uint uVar4;
  long in_FS_OFFSET;
  string s;
  int32 r_spill;
  uint local_28;
  long local_20;
  
                    /* Unresolved local var: string cutset@[DW_OP_reg0(RAX); DW_OP_piece: 8;
                       DW_OP_piece: 8] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  puVar2 = *(uint8 **)(in_RDX + 8);
  k = *(int *)(in_RDX + 0x10);
                    /* Unresolved local var: int32 c@[???] */
  lVar3 = 0;
  do {
    if (k <= lVar3) {
      return SUB81(puVar2,0);
    }
    pbVar1 = puVar2 + lVar3;
    if (*pbVar1 < 0x80) {
      lVar3 = lVar3 + 1;
      uVar4 = (uint)*pbVar1;
    }
    else {
      s.len = lVar3;
      s.str = puVar2;
      runtime_decoderune(s,k);
      lVar3 = local_20;
      uVar4 = local_28;
    }
  } while (r_spill != uVar4);
  return SUB81(puVar2,0);
}

