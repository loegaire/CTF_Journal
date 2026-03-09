
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Duration.String(time.Duration d, string ~r0) */

string time_Duration_String(time_Duration d)

{
  bool bVar1;
  long lVar2;
  uint8 *puVar3;
  uint8 *puVar4;
  uint8 *puVar5;
  uint8 *ptr;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  string sVar8;
  string sVar9;
  uint64 u;
  uint8 *local_38;
  uint8 auStack_2a [2];
  uint8 buf [32];
  
                    /* Unresolved local var: int w@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  buf[0] = 0;
  buf[1] = 0;
  buf[2] = 0;
  buf[3] = 0;
  buf[4] = 0;
  buf[5] = 0;
  buf[6] = 0;
  buf[7] = 0;
  buf[8] = 0;
  buf[9] = 0;
  buf[10] = 0;
  buf[0xb] = 0;
  buf[0xc] = 0;
  buf[0xd] = 0;
  buf[0xe] = 0;
  buf[0xf] = 0;
  buf[0x10] = 0;
  buf[0x11] = 0;
  buf[0x12] = 0;
  buf[0x13] = 0;
  buf[0x14] = 0;
  buf[0x15] = 0;
  buf[0x16] = 0;
  buf[0x17] = 0;
  sVar8.len = -u;
  uVar6 = u;
  if ((long)u < 0) {
    uVar6 = sVar8.len;
  }
  if (uVar6 < 1000000000) {
                    /* Unresolved local var: int prec@[???] */
    if (uVar6 == 0) {
      sVar8.str = &DAT_00287795;
      return sVar8;
    }
    if (uVar6 < 1000) {
      buf[0x18] = 0;
      buf[0x19] = 0;
      buf[0x1a] = 0;
      buf[0x1b] = 0;
      buf[0x1c] = 0;
      buf[0x1d] = 0;
      buf[0x1e] = 0x6e;
      buf[0x1f] = 0x73;
      lVar2 = 0;
      puVar5 = &DAT_0000001e;
    }
    else if (uVar6 < 1000000) {
      buf[0x18] = 0;
      buf[0x19] = 0;
      buf[0x1a] = 0;
      buf[0x1b] = 0;
      buf[0x1c] = 0;
      buf[0x1d] = 0xc2;
      buf[0x1e] = 0xb5;
      buf[0x1f] = 0x73;
      lVar2 = 3;
      puVar5 = &DAT_0000001d;
    }
    else {
      buf[0x18] = 0;
      buf[0x19] = 0;
      buf[0x1a] = 0;
      buf[0x1b] = 0;
      buf[0x1c] = 0;
      buf[0x1d] = 0;
      buf[0x1e] = 0x6d;
      buf[0x1f] = 0x73;
      lVar2 = 6;
      puVar5 = &DAT_0000001e;
    }
    if (&DAT_00000020 < puVar5) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    puVar4 = puVar5;
    bVar1 = false;
                    /* Unresolved local var: int w@[???]
                       Unresolved local var: bool print@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: uint64 digit@[???] */
    for (ptr = (uint8 *)0x0; (long)ptr < lVar2; ptr = ptr + 1) {
      uVar7 = uVar6 % 10;
      if (bVar1 || uVar7 != 0) {
        if (puVar5 <= puVar4 + -1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        (auStack_2a + 1)[(long)puVar4] = (char)uVar7 + 0x30;
        puVar4 = puVar4 + -1;
      }
      uVar6 = uVar6 / 10;
      bVar1 = bVar1 || uVar7 != 0;
    }
    if (bVar1) {
      if (puVar5 <= puVar4 + -1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      (auStack_2a + 1)[(long)puVar4] = 0x2e;
      puVar4 = puVar4 + -1;
    }
    if (&DAT_00000020 < puVar4) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
                    /* Unresolved local var: int w@[???] */
    puVar5 = puVar4;
    if (uVar6 == 0) {
      puVar3 = puVar4 + -1;
      if (puVar4 <= puVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      (auStack_2a + 1)[(long)puVar4] = 0x30;
    }
    else {
      while (puVar3 = puVar5, uVar6 != 0) {
        if (puVar4 <= puVar3 + -1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        (auStack_2a + 1)[(long)puVar3] = (char)uVar6 + (char)(uVar6 / 10) * -10 + 0x30;
        puVar5 = puVar3 + -1;
        ptr = puVar3;
        uVar6 = uVar6 / 10;
      }
    }
  }
  else {
    buf[0x18] = 0;
    buf[0x19] = 0;
    buf[0x1a] = 0;
    buf[0x1b] = 0;
    buf[0x1c] = 0;
    buf[0x1d] = 0;
    buf[0x1e] = 0;
    buf[0x1f] = 0x73;
    puVar5 = &DAT_0000001f;
    bVar1 = false;
                    /* Unresolved local var: int w@[???]
                       Unresolved local var: bool print@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: uint64 digit@[???] */
    for (lVar2 = 0; lVar2 < 9; lVar2 = lVar2 + 1) {
      uVar7 = uVar6 % 10;
      if (bVar1 || uVar7 != 0) {
        if (&DAT_0000001e < puVar5 + -1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        (auStack_2a + 1)[(long)puVar5] = (char)uVar7 + 0x30;
        puVar5 = puVar5 + -1;
      }
      uVar6 = uVar6 / 10;
      bVar1 = bVar1 || uVar7 != 0;
    }
    if (bVar1) {
      if (&DAT_0000001e < puVar5 + -1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      (auStack_2a + 1)[(long)puVar5] = 0x2e;
      puVar5 = puVar5 + -1;
    }
    if (&DAT_00000020 < puVar5) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    uVar7 = uVar6 / 0x3c;
    ptr = (uint8 *)(uVar7 * 0x3c);
    uVar6 = uVar6 % 0x3c;
                    /* Unresolved local var: int w@[???] */
    puVar3 = puVar5;
    if (uVar6 == 0) {
      puVar3 = puVar5 + -1;
      if (puVar5 <= puVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      (auStack_2a + 1)[(long)puVar5] = 0x30;
    }
    else {
      while (uVar6 != 0) {
        ptr = puVar3 + -1;
        if (puVar5 <= ptr) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        (auStack_2a + 1)[(long)puVar3] = (char)uVar6 + (char)(uVar6 / 10) * -10 + 0x30;
        puVar3 = ptr;
        uVar6 = uVar6 / 10;
      }
    }
    if (uVar7 != 0) {
      puVar5 = puVar3 + -1;
      if (&DAT_0000001f < puVar5) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      (auStack_2a + 1)[(long)puVar3] = 0x6d;
      uVar6 = uVar7 % 0x3c;
                    /* Unresolved local var: int w@[???] */
      puVar4 = puVar5;
      if (uVar6 == 0) {
        if (puVar5 <= puVar3 + -2) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        auStack_2a[(long)puVar3] = 0x30;
        puVar4 = puVar3 + -2;
        ptr = puVar3;
      }
      else {
        while (ptr = puVar3, uVar6 != 0) {
          puVar3 = puVar4 + -1;
          if (puVar5 <= puVar3) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          (auStack_2a + 1)[(long)puVar4] = (char)uVar6 + (char)(uVar6 / 10) * -10 + 0x30;
          puVar4 = puVar3;
          uVar6 = uVar6 / 10;
        }
      }
      puVar3 = puVar4;
      if (uVar7 / 0x3c != 0) {
        puVar5 = puVar3 + -1;
        if (&DAT_0000001f < puVar5) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        (auStack_2a + 1)[(long)puVar3] = 0x68;
        puVar3 = puVar5;
        uVar6 = uVar7 / 0x3c;
                    /* Unresolved local var: int w@[???] */
        while (uVar6 != 0) {
          ptr = puVar3 + -1;
          if (puVar5 <= ptr) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          (auStack_2a + 1)[(long)puVar3] = (char)uVar6 + (char)(uVar6 / 10) * -10 + 0x30;
          puVar3 = ptr;
          uVar6 = uVar6 / 10;
        }
      }
    }
  }
  if ((long)u < 0) {
    if (&DAT_0000001f < puVar3 + -1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    (auStack_2a + 1)[(long)puVar3] = 0x2d;
    puVar3 = puVar3 + -1;
  }
  if (puVar3 < &DAT_00000021) {
    sVar8 = runtime_slicebytetostring
                      ((runtime_tmpBuf *)(buf + ((ulong)puVar3 & (long)(puVar3 + -0x20) >> 0x3f)),
                       ptr,-(long)(puVar3 + -0x20));
    sVar9.len = sVar8.len;
    sVar9.str = local_38;
    return sVar9;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

