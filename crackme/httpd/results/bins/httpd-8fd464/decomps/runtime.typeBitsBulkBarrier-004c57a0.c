
/* WARNING: Unknown calling convention */

void runtime_typeBitsBulkBarrier(runtime__type *typ,uintptr dst,uintptr src,uintptr size)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint64 v;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long in_FS_OFFSET;
  string sVar8;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  runtime__type *typ_spill;
  uintptr dst_spill;
  uintptr src_spill;
  uintptr size_spill;
  uint8 *local_48;
  
                    /* Unresolved local var: uint8 * ptrmask@[???]
                       Unresolved local var: uint32 bits@[???] */
  if (typ_spill == (runtime__type *)0x0) {
    sVar8.len = dst;
    sVar8.str = &DAT_002a6df2;
                    /* WARNING: Subroutine does not return */
    runtime_throw(sVar8);
  }
  if (typ_spill->size != size_spill) {
    sVar8 = runtime____type__string(typ_spill);
    s_03.len = sVar8.len;
    v = typ_spill->size;
    runtime_printlock();
    s_03.str = &DAT_002a673f;
    runtime_printstring(s_03);
    s_04.len = s_03.len;
    s_04.str = local_48;
    runtime_printstring(s_04);
    s_05.len = s_03.len;
    s_05.str = &DAT_002908da;
    runtime_printstring(s_05);
    runtime_printuint(v);
    s_06.len = s_03.len;
    s_06.str = &DAT_0029a47c;
    runtime_printstring(s_06);
    runtime_printuint(size_spill);
    runtime_printnl();
    runtime_printunlock();
    s_07.len = s_03.len;
    s_07.str = &DAT_002a4dc5;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_07);
  }
  if ((typ_spill->kind & 0x40) != 0) {
    sVar8 = runtime____type__string(typ_spill);
    s.len = sVar8.len;
    runtime_printlock();
    s.str = &DAT_002a673f;
    runtime_printstring(s);
    s_00.len = s.len;
    s_00.str = local_48;
    runtime_printstring(s_00);
    s_01.len = s.len;
    s_01.str = &DAT_00298533;
    runtime_printstring(s_01);
    runtime_printunlock();
    s_02.len = s.len;
    s_02.str = &DAT_002a4dc5;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_02);
  }
  if (runtime_writeBarrier.needed) {
    lVar1 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
    pbVar4 = typ_spill->gcdata;
    uVar6 = 0;
                    /* Unresolved local var: uintptr i@[???] */
    for (uVar5 = 0; uVar5 < typ_spill->ptrdata; uVar5 = uVar5 + 8) {
      if ((uVar5 & 0x3f) == 0) {
        uVar6 = (uint)*pbVar4;
        pbVar4 = pbVar4 + 1;
      }
      else {
        uVar6 = uVar6 >> 1;
      }
      if ((uVar6 & 1) != 0) {
                    /* Unresolved local var: uintptr * dstx@[???]
                       Unresolved local var: uintptr * srcx@[???] */
                    /* Unresolved local var: uintptr[2] * p@[???] */
        puVar2 = *(undefined8 **)(lVar1 + 0x16c0);
        uVar3 = *(undefined8 *)(uVar5 + src_spill);
        *puVar2 = *(undefined8 *)(uVar5 + dst_spill);
        puVar2[1] = uVar3;
        lVar7 = *(long *)(lVar1 + 0x16c0) + 0x10;
        *(long *)(lVar1 + 0x16c0) = lVar7;
        if (*(long *)(lVar1 + 0x16c8) == lVar7) {
          runtime_wbBufFlush(&typ_spill->size,src_spill);
        }
      }
    }
    return;
  }
  return;
}

