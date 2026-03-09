
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

void runtime_heapBitsSetTypeGCProg
               (runtime_heapBits h,uintptr progSize,uintptr elemSize,uintptr dataSize,
               uintptr allocSize,uint8 *prog)

{
  ulong uVar1;
  ulong uVar2;
  uint8 *puVar3;
  ulong uVar4;
  uint8 *size;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  runtime_heapBits h_spill;
  uintptr progSize_spill;
  uintptr elemSize_spill;
  uintptr dataSize_spill;
  uintptr allocSize_spill;
  uint8 *prog_spill;
  uint64 local_40;
  uint8 local_30;
  byte bStack_2f;
  uint8 uStack_2e;
  byte abStack_2d [37];
  
  size = h.last;
  puVar3 = (uint8 *)CONCAT44((int)((ulong)h._12_8_ >> 0x20),h.arena);
  s_02.len._4_4_ = (undefined4)((ulong)h._8_8_ >> 0x20);
  s_02.len._0_4_ = h.shift;
                    /* Unresolved local var: uintptr totalBits@[???]
                       Unresolved local var: void * endProg@[???]
                       Unresolved local var: void * endAlloc@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((allocSize_spill & 0x1f) != 0) {
    s_02.str = &DAT_002a5f0b;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_02);
  }
  if (dataSize_spill == elemSize_spill) {
    runtime_runGCProg(h_spill.bitp,(uint8 *)elemSize_spill,puVar3,(int)size);
    if (progSize_spill != local_40 << 3) {
      runtime_printlock();
      s.len = elemSize_spill;
      s.str = &DAT_002a7829;
      runtime_printstring(s);
      runtime_printuint(local_40);
      s_00.len = elemSize_spill;
      s_00.str = &DAT_0029647f;
      runtime_printstring(s_00);
      runtime_printuint(progSize_spill);
      runtime_printnl();
      runtime_printunlock();
      s_01.len = elemSize_spill;
      s_01.str = &DAT_002a76a6;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_01);
    }
  }
  else {
                    /* Unresolved local var: uintptr count@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: uintptr n@[???]
                       Unresolved local var: uint8[40] trailer@[???] */
    if (elemSize_spill == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicdivide();
    }
    _local_30 = 0;
    abStack_2d[5] = 0;
    abStack_2d[6] = 0;
    abStack_2d[7] = 0;
    abStack_2d[8] = 0;
    abStack_2d[9] = 0;
    abStack_2d[10] = 0;
    abStack_2d[0xb] = 0;
    abStack_2d[0xc] = 0;
    abStack_2d[0xd] = 0;
    abStack_2d[0xe] = 0;
    abStack_2d[0xf] = 0;
    abStack_2d[0x10] = 0;
    abStack_2d[0x11] = 0;
    abStack_2d[0x12] = 0;
    abStack_2d[0x13] = 0;
    abStack_2d[0x14] = 0;
    abStack_2d[0x15] = 0;
    abStack_2d[0x16] = 0;
    abStack_2d[0x17] = 0;
    abStack_2d[0x18] = 0;
    abStack_2d[0x19] = 0;
    abStack_2d[0x1a] = 0;
    abStack_2d[0x1b] = 0;
    abStack_2d[0x1c] = 0;
    abStack_2d[0x1d] = 0;
    abStack_2d[0x1e] = 0;
    abStack_2d[0x1f] = 0;
    abStack_2d[0x20] = 0;
    abStack_2d[0x21] = 0;
    abStack_2d[0x22] = 0;
    abStack_2d[0x23] = 0;
    abStack_2d[0x24] = 0;
                    /* Unresolved local var: uintptr n@[???] */
    uVar1 = elemSize_spill >> 3;
    uVar2 = uVar1 - (progSize_spill >> 3);
    if (uVar2 == 0) {
      uVar4 = 0;
    }
    else {
      _local_30 = 1;
      if (uVar2 < 2) {
        uVar4 = 2;
      }
      else {
        _local_30 = 0x810001;
        uVar4 = 3;
        for (uVar2 = uVar2 - 1; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
          if (0x27 < uVar4) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          (&local_30)[uVar4] = (byte)uVar2 | 0x80;
          uVar4 = uVar4 + 1;
        }
        if (0x27 < uVar4) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        (&local_30)[uVar4] = (byte)uVar2;
        uVar4 = uVar4 + 1;
      }
    }
    if (0x27 < uVar4) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    (&local_30)[uVar4] = 0x80;
    for (; uVar2 = uVar4 + 1, 0x7f < uVar1; uVar1 = uVar1 >> 7) {
      if (0x27 < uVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      (&bStack_2f)[uVar4] = (byte)uVar1 | 0x80;
      uVar4 = uVar2;
    }
    if (0x27 < uVar2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    (&bStack_2f)[uVar4] = (byte)uVar1;
    puVar3 = (uint8 *)(uVar4 + 2);
    for (uVar1 = dataSize_spill / elemSize_spill - 1; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
      if (&DAT_00000027 < puVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      (&local_30)[(long)puVar3] = (byte)uVar1 | 0x80;
      puVar3 = puVar3 + 1;
    }
    if (&DAT_00000027 < puVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    (&local_30)[(long)puVar3] = (byte)uVar1;
    if (&DAT_00000027 < puVar3 + 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    puVar3[(long)&bStack_2f] = 0;
    runtime_runGCProg(h_spill.bitp,puVar3,(uint8 *)allocSize_spill,progSize_spill);
  }
  runtime_memclrNoHeapPointers();
  return;
}

