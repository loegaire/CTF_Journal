
/* WARNING: Unknown calling convention */

void runtime_bulkBarrierBitmap(uintptr dst,uintptr src,uintptr size,uintptr maskOffset,uint8 *bits)

{
  uintptr *dst_00;
  undefined8 *puVar1;
  uintptr uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong src_00;
  long in_FS_OFFSET;
  uintptr dst_spill;
  uintptr src_spill;
  uintptr size_spill;
  uintptr maskOffset_spill;
  uint8 *bits_spill;
  
                    /* Unresolved local var: uint8 mask@[???] */
  dst_00 = *(uintptr **)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  src_00 = (ulong)(uint)(1 << ((byte)(maskOffset_spill >> 3) & 7));
  pbVar5 = bits_spill + (maskOffset_spill >> 6);
                    /* Unresolved local var: uintptr i@[???] */
  uVar4 = 0;
  do {
    if (size_spill <= uVar4) {
      return;
    }
    if ((char)src_00 == '\0') {
      if (pbVar5[1] != 0) {
        src_00 = 1;
        pbVar5 = pbVar5 + 1;
        goto LAB_004c568d;
      }
      uVar4 = uVar4 + 0x38;
      pbVar5 = pbVar5 + 1;
    }
    else {
LAB_004c568d:
      if ((*pbVar5 & (byte)src_00) != 0) {
                    /* Unresolved local var: uintptr * dstx@[???] */
        if (src_spill == 0) {
                    /* Unresolved local var: uintptr[2] * p@[???] */
          puVar1 = (undefined8 *)dst_00[0x2d8];
          *puVar1 = *(undefined8 *)(uVar4 + dst_spill);
          puVar1[1] = 0;
          uVar2 = dst_00[0x2d8];
          dst_00[0x2d8] = uVar2 + 0x10;
          if (dst_00[0x2d9] == uVar2 + 0x10) {
            runtime_wbBufFlush(dst_00,src_00);
            src_00 = src_00 & 0xff;
          }
        }
        else {
                    /* Unresolved local var: uintptr * srcx@[???] */
                    /* Unresolved local var: uintptr[2] * p@[???] */
          puVar1 = (undefined8 *)dst_00[0x2d8];
          uVar3 = *(undefined8 *)(uVar4 + src_spill);
          *puVar1 = *(undefined8 *)(uVar4 + dst_spill);
          puVar1[1] = uVar3;
          uVar2 = dst_00[0x2d8];
          dst_00[0x2d8] = uVar2 + 0x10;
          if (dst_00[0x2d9] == uVar2 + 0x10) {
            runtime_wbBufFlush(dst_00,src_00);
            src_00 = src_00 & 0xff;
          }
        }
      }
      src_00 = (ulong)(uint)((int)src_00 << 1);
    }
    uVar4 = uVar4 + 8;
  } while( true );
}

