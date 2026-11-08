
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.convertFromDirents11([]uint8 buf, []uint8 old, int ~r2) */

int syscall_convertFromDirents11(__uint8 buf,__uint8 old)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint8 *puVar5;
  int iVar6;
  long lVar7;
  long in_FS_OFFSET;
  __uint8 buf_spill;
  __uint8 old_spill;
  undefined8 local_228;
  undefined1 local_220 [72];
  undefined1 local_1d8 [144];
  undefined1 local_148 [40];
  ulong local_120 [2];
  ushort local_110;
  undefined1 local_10e;
  undefined1 local_10d;
  ushort local_10c;
  undefined2 local_10a;
  
                    /* Unresolved local var: int dstPos@[???]
                       Unresolved local var: int srcPos@[???] */
  while (local_1d8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar7 = 0;
  uVar3 = 0;
  while( true ) {
    if ((buf_spill.len <= lVar7 + 0x18) || (old_spill.len <= (long)(uVar3 + 8))) {
      return lVar7;
    }
    local_120[0] = 0;
    iVar4 = buf_spill.len;
    puVar5 = old_spill.array;
    iVar6 = old_spill.cap;
    FUN_0051a14b(local_148);
    local_228 = 0;
    uVar2 = FUN_0051a154(local_220);
    if ((ulong)old_spill.len < uVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    if ((uint8 *)&local_228 != puVar5 + ((long)(uVar3 - iVar6) >> 0x3f & uVar3)) {
      runtime_memmove();
      iVar4 = buf_spill.len;
    }
    lVar7 = (long)((ulong)local_228._7_1_ + 0x20) >> 3;
    uVar1 = uVar2 + lVar7 * 8;
    if (iVar4 < (long)uVar1) break;
    local_120[0] = local_228 & 0xffffffff;
    local_120[1] = 0;
    local_110 = (ushort)(lVar7 << 3);
    local_10e = local_228._6_1_;
    local_10d = 0;
    local_10c = (ushort)local_228._7_1_;
    local_10a = 0;
    if (0x100 < (ulong)local_228._7_1_) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    runtime_memmove();
    if ((ulong)buf_spill.len < uVar2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    if (local_120 != (ulong *)(buf_spill.array + ((long)(uVar2 - buf_spill.cap) >> 0x3f & uVar2))) {
      runtime_memmove();
    }
    if ((ulong)buf_spill.cap < uVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    if (uVar1 < local_10c + uVar2 + 0x18) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    if (uVar1 - (local_10c + uVar2) != 0x18) {
      runtime_memclrNoHeapPointers();
    }
                    /* Unresolved local var: []uint8 padding@[???]
                       Unresolved local var: syscall.Dirent dstDirent@[???]
                       Unresolved local var: syscall.dirent_freebsd11 srcDirent@[???] */
    lVar7 = local_110 + uVar2;
    uVar3 = (local_228 >> 0x20 & 0xffff) + uVar3;
  }
  return uVar2;
}

