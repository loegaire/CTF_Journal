
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void bytes.Index([]uint8 s, []uint8 sep, int ~r2) */

int bytes_Index(__uint8 s,__uint8 sep)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  uint8 *puVar5;
  int extraout_RAX;
  ulong uVar6;
  uint8 *extraout_RAX_00;
  long lVar7;
  long in_FS_OFFSET;
  __uint8 sep_00;
  __uint8 s_00;
  __uint8 s_spill;
  byte *in_stack_00000020;
  int n;
  int in_stack_00000030;
  byte local_78;
  long local_70;
  long local_60;
  long local_10;
  
  puVar5 = s.array;
                    /* Unresolved local var: uint8 c0@[???]
                       Unresolved local var: uint8 c1@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: int fails@[???]
                       Unresolved local var: int t@[???] */
  while (&local_10 <= *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    puVar5 = extraout_RAX_00;
  }
  if (n == 0) {
    return (int)puVar5;
  }
  if (n == 1) {
    internal_bytealg_IndexByte();
    return local_70;
  }
  if (s_spill.len != n) {
    if (s_spill.len < n) {
      return (int)puVar5;
    }
                    /* Unresolved local var: uint8 c0@[???]
                       Unresolved local var: uint8 c1@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: int t@[???]
                       Unresolved local var: int fails@[???] */
    if (n <= internal_bytealg_MaxLen) {
      if (s_spill.len < 0x41) {
        internal_bytealg_Index();
        return local_60;
      }
      bVar3 = *in_stack_00000020;
      bVar4 = in_stack_00000020[1];
      local_10 = s_spill.len - n;
      uVar1 = local_10 + 1;
      lVar7 = 0;
      uVar2 = 0;
      do {
        uVar6 = uVar2;
        if ((long)uVar1 <= (long)uVar6) {
          return uVar6;
        }
        if ((ulong)s_spill.len <= uVar6) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        if (s_spill.array[uVar6] != bVar3) {
                    /* Unresolved local var: int o@[???] */
          if ((ulong)s_spill.cap < uVar1) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceAcap();
          }
          if (uVar1 < uVar6 + 1) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceB();
          }
          internal_bytealg_IndexByte();
          if (local_70 < 0) {
            return local_70;
          }
          uVar6 = local_70 + uVar6 + 1;
          local_78 = bVar3;
        }
        if ((ulong)s_spill.len <= uVar6 + 1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        if (s_spill.array[uVar6 + 1] == bVar4) {
          if ((ulong)s_spill.cap < uVar6 + n) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceAcap();
          }
          if (uVar6 + n < uVar6) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceB();
          }
          runtime_memequal();
          if (local_78 != 0) {
            return uVar6;
          }
        }
        lVar7 = lVar7 + 1;
        uVar2 = uVar6 + 1;
        if ((long)(((ulong)((long)(uVar6 + 0x11) >> 0x3f) >> 0x3d) + uVar6 + 0x11) >> 3 < lVar7) {
          internal_bytealg_Index();
          if (local_60 < 0) {
            return local_60;
          }
          return uVar6 + local_60 + 1;
        }
      } while( true );
    }
    bVar3 = *in_stack_00000020;
    bVar4 = in_stack_00000020[1];
    local_10 = s_spill.len - n;
    uVar1 = local_10 + 1;
    lVar7 = 0;
    uVar2 = 0;
    do {
      uVar6 = uVar2;
      if ((long)uVar1 <= (long)uVar6) {
        return uVar6;
      }
      if ((ulong)s_spill.len <= uVar6) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (s_spill.array[uVar6] != bVar3) {
                    /* Unresolved local var: int o@[???] */
        if ((ulong)s_spill.cap < uVar1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAcap();
        }
        if (uVar1 < uVar6 + 1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        internal_bytealg_IndexByte();
        if (local_70 < 0) {
          return local_70;
        }
        uVar6 = local_70 + uVar6 + 1;
        local_78 = bVar3;
      }
      uVar2 = uVar6 + 1;
      if ((ulong)s_spill.len <= uVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (s_spill.array[uVar6 + 1] == bVar4) {
        if ((ulong)s_spill.cap < uVar6 + n) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAcap();
        }
        if (uVar6 + n < uVar6) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        runtime_memequal();
        if (local_78 != 0) {
          return uVar6;
        }
      }
      sep_00.array = (ulong)bVar3;
      lVar7 = lVar7 + 1;
      if ((((long)uVar2 >> 4) + 4 <= lVar7) && ((long)uVar2 < (long)uVar1)) {
        sep_00.len = (int)in_stack_00000020;
        sep_00.cap._0_1_ = bVar4;
        sep_00.cap._1_7_ = 0;
        s_00.len = n;
        s_00.array = (uint8 *)uVar6;
        s_00.cap = in_stack_00000030;
        internal_bytealg_IndexRabinKarpBytes(s_00,sep_00);
        if (-1 < local_60) {
          return uVar6 + local_60 + 1;
        }
        return local_60;
      }
    } while( true );
  }
  runtime_memequal();
  if (local_78 == 0) {
    return extraout_RAX;
  }
  return extraout_RAX;
}

