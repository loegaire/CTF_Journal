
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.Index(string s, string substr, int ~r2) */

int strings_Index(string s,string substr)

{
  ulong uVar1;
  uint8 *puVar2;
  uint8 uVar3;
  uint8 uVar4;
  ulong uVar5;
  uint8 *puVar6;
  int extraout_RAX;
  uint8 *puVar7;
  ulong uVar8;
  uint8 *extraout_RAX_00;
  long lVar9;
  long in_FS_OFFSET;
  string s_00;
  string substr_00;
  string s_spill;
  uint8 *in_stack_00000018;
  int n;
  long local_68;
  long local_60;
  
  puVar6 = s.str;
                    /* Unresolved local var: uint8 c0@[???]
                       Unresolved local var: uint8 c1@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: int t@[???]
                       Unresolved local var: int fails@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    puVar6 = extraout_RAX_00;
  }
  if (n == 0) {
    return (int)puVar6;
  }
  if (n == 1) {
    internal_bytealg_IndexByteString();
    return local_68;
  }
  if (s_spill.len == n) {
    runtime_memequal();
    if ((char)local_68 == '\0') {
      return extraout_RAX;
    }
    return extraout_RAX;
  }
  if (s_spill.len < n) {
    return (int)puVar6;
  }
                    /* Unresolved local var: uint8 c0@[???]
                       Unresolved local var: uint8 c1@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: int t@[???]
                       Unresolved local var: int fails@[???] */
  if (internal_bytealg_MaxLen < n) {
    uVar3 = *in_stack_00000018;
    uVar4 = in_stack_00000018[1];
    puVar6 = (uint8 *)((s_spill.len - n) + 1);
    lVar9 = 0;
    puVar2 = (uint8 *)0x0;
    do {
      puVar7 = puVar2;
      if ((long)puVar6 <= (long)puVar7) {
        return (int)puVar7;
      }
      if ((ulong)s_spill.len <= puVar7) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (s_spill.str[(long)puVar7] != uVar3) {
                    /* Unresolved local var: int o@[???] */
        if ((ulong)s_spill.len < puVar6) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAlen();
        }
        if (puVar6 < puVar7 + 1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        internal_bytealg_IndexByteString();
        if (local_68 < 0) {
          return local_68;
        }
        puVar7 = puVar7 + local_68 + 1;
      }
      puVar2 = puVar7 + 1;
      if ((ulong)s_spill.len <= puVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if ((puVar7 + 1)[(long)s_spill.str] == uVar4) {
        if ((ulong)s_spill.len < puVar7 + n) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAlen();
        }
        if (puVar7 + n < puVar7) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        runtime_memequal();
        if ((char)local_68 != '\0') {
          return (int)puVar7;
        }
      }
      lVar9 = lVar9 + 1;
      if ((((long)puVar2 >> 4) + 4 <= lVar9) && ((long)puVar2 < (long)puVar6)) {
        s_00.len = n;
        s_00.str = puVar7;
        substr_00.len._0_1_ = uVar3;
        substr_00.str = s_spill.str + ((ulong)puVar2 & -((s_spill.len - (long)puVar7) + -1) >> 0x3f)
        ;
        substr_00.len._1_7_ = 0;
        internal_bytealg_IndexRabinKarp(s_00,substr_00);
        if (-1 < local_60) {
          return (int)(puVar7 + local_60 + 1);
        }
        return local_60;
      }
    } while( true );
  }
  if (s_spill.len < 0x41) {
    internal_bytealg_IndexString();
    return local_60;
  }
  uVar3 = *in_stack_00000018;
  uVar4 = in_stack_00000018[1];
  uVar1 = (s_spill.len - n) + 1;
  lVar9 = 0;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    if ((long)uVar1 <= (long)uVar8) {
      return uVar8;
    }
    if ((ulong)s_spill.len <= uVar8) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (s_spill.str[uVar8] != uVar3) {
                    /* Unresolved local var: int o@[???] */
      if ((ulong)s_spill.len < uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      if (uVar1 < uVar8 + 1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      internal_bytealg_IndexByteString();
      if (local_68 < 0) {
        return local_68;
      }
      uVar8 = uVar8 + local_68 + 1;
    }
    if ((ulong)s_spill.len <= uVar8 + 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (s_spill.str[uVar8 + 1] == uVar4) {
      if ((ulong)s_spill.len < n + uVar8) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      if (n + uVar8 < uVar8) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      runtime_memequal();
      if ((char)local_68 != '\0') {
        return uVar8;
      }
    }
    lVar9 = lVar9 + 1;
    uVar5 = uVar8 + 1;
    if ((long)(((ulong)((long)(uVar8 + 0x11) >> 0x3f) >> 0x3d) + uVar8 + 0x11) >> 3 < lVar9) {
      internal_bytealg_IndexString();
      if (local_60 < 0) {
        return local_60;
      }
      return uVar8 + local_60 + 1;
    }
  } while( true );
}

