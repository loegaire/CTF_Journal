
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.concatstrings(runtime.tmpBuf * buf, []string a, string
   ~r2) */

string runtime_concatstrings(runtime_tmpBuf *buf,__string a)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  uint8 *buf_00;
  string *psVar4;
  ulong uVar5;
  uint8 *puVar6;
  long lVar7;
  long in_FS_OFFSET;
  string sVar8;
  string sVar9;
  string s;
  runtime_tmpBuf *buf_spill;
  __string a_spill;
  int local_80;
  uint8 *local_70;
  ulong local_68;
  long local_60;
  int local_10;
  
                    /* Unresolved local var: int idx@[???]
                       Unresolved local var: int l@[???]
                       Unresolved local var: int count@[???]
                       Unresolved local var: string s@[???]
                       Unresolved local var: []uint8 b@[???] */
  while (&local_10 <= *(int **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: string x@[???] */
  if (a_spill.len < 1) {
    lVar7 = 0;
    buf_00 = (uint8 *)0x0;
    uVar5 = 0;
  }
  else {
    puVar6 = (uint8 *)0x0;
    lVar7 = 0;
    buf_00 = (uint8 *)0x0;
    uVar5 = 0;
    psVar4 = a_spill.array;
    while( true ) {
      if (psVar4->len != 0) {
        uVar1 = uVar5 + psVar4->len;
        if ((long)uVar1 < (long)uVar5) {
          s.len = (int)puVar6;
          s.str = (uint8 *)0x2a1071;
                    /* WARNING: Subroutine does not return */
          runtime_throw(s);
        }
        lVar7 = lVar7 + 1;
        buf_00 = puVar6;
        uVar5 = uVar1;
      }
      puVar6 = puVar6 + 1;
      if (a_spill.len <= (long)puVar6) break;
      psVar4 = psVar4 + 1;
    }
  }
  if (lVar7 == 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5;
    return (string)(auVar2 << 0x40);
  }
  if (lVar7 == 1) {
    if (buf_spill == (runtime_tmpBuf *)0x0) {
      if ((ulong)a_spill.len <= buf_00) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_10 = a_spill.array[(long)buf_00].len;
                    /* Unresolved local var: uintptr ptr@[???] */
      bVar3 = a_spill.array[(long)buf_00].str < (uint8 *)**(ulong **)(in_FS_OFFSET + -8) ||
              (uint8 *)(*(ulong **)(in_FS_OFFSET + -8))[1] <= a_spill.array[(long)buf_00].str;
    }
    else {
      bVar3 = true;
    }
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    runtime_rawstringtmp((runtime_tmpBuf *)buf_00,uVar5);
                    /* Unresolved local var: string x@[???] */
    if (0 < a_spill.len) {
      lVar7 = 0;
      while( true ) {
        uVar5 = (a_spill.array)->len;
        if (local_70 != (a_spill.array)->str) {
          runtime_memmove();
        }
        if (local_68 < uVar5) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        lVar7 = lVar7 + 1;
        local_60 = local_60 - uVar5;
        local_68 = local_68 - uVar5;
        if (a_spill.len <= lVar7) break;
        a_spill.array = a_spill.array + 1;
        local_70 = local_70 + (uVar5 & -local_60 >> 0x3f);
      }
    }
    sVar9.len = local_80;
    sVar9.str = local_70;
    return sVar9;
  }
  if (buf_00 < (ulong)a_spill.len) {
    sVar8.len = uVar5;
    sVar8.str = (uint8 *)a_spill.array[(long)buf_00].len;
    return sVar8;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

