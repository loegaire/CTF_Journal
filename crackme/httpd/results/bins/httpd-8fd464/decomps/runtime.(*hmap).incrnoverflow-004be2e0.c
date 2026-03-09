
/* WARNING: Unknown calling convention */

void runtime___hmap__incrnoverflow(runtime_hmap *h)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  long in_FS_OFFSET;
  runtime_hmap *h_spill;
  
                    /* Unresolved local var: uint32 mask@[???] */
  bVar3 = h_spill->B;
  if (0xf < bVar3) {
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
    lVar2 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    uVar4 = *(uint *)(lVar2 + 0x128);
    uVar1 = *(uint *)(lVar2 + 300);
    *(uint *)(lVar2 + 0x128) = uVar1;
    uVar4 = uVar4 ^ uVar4 << 0x11;
    uVar4 = uVar1 >> 0x10 ^ uVar4 >> 7 ^ uVar1 ^ uVar4;
    *(uint *)(lVar2 + 300) = uVar4;
    bVar3 = bVar3 - 0xf;
    if (((1 << (bVar3 & 0x1f) & -(uint)(bVar3 < 0x20)) - 1 & uVar4 + uVar1) == 0) {
      h_spill->noverflow = h_spill->noverflow + 1;
    }
    return;
  }
  h_spill->noverflow = h_spill->noverflow + 1;
  return;
}

