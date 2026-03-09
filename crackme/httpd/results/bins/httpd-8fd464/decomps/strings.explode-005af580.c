
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.explode(string s, int n, []string ~r2) */

__string strings_explode(string s,int n)

{
  undefined1 *puVar1;
  uint8 *puVar2;
  int iVar3;
  int extraout_EAX;
  uint8 *puVar4;
  uint8 *extraout_RAX;
  runtime__type *prVar5;
  uint8 *puVar6;
  long lVar7;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  __string _Var8;
  string s_spill;
  int n_spill;
  runtime__type *local_40;
  uint8 *local_38;
  
  s_00.len = s.len;
                    /* Unresolved local var: int l@[???]
                       Unresolved local var: []string a@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  s_00.str = s_spill.str;
  unicode_utf8_RuneCountInString(s_00);
  if ((-1 < n_spill) && (n_spill <= (long)local_40)) {
    local_40 = (runtime__type *)n_spill;
  }
  runtime_makeslice(local_40,s_00.len,0x225520);
  prVar5 = (runtime__type *)0x0;
  puVar4 = local_38;
                    /* Unresolved local var: int i@[???] */
  while( true ) {
    puVar1 = (undefined1 *)((long)&local_40[-1].ptrToThis + 3);
    if ((long)puVar1 <= (long)prVar5) {
      if (0 < (long)local_40) {
        lVar7 = (long)puVar1 * 0x10;
        *(int *)(puVar4 + lVar7 + 8) = s_spill.len;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(uint8 **)(puVar4 + lVar7) = s_spill.str;
        }
        else {
          runtime_gcWriteBarrierDX();
          puVar4 = extraout_RAX;
        }
      }
      _Var8.len = s_spill.len;
      _Var8.array = (string *)puVar4;
      _Var8.cap = (int)prVar5;
      return _Var8;
    }
    s_01.len = s_spill.len;
    s_01.str = puVar4;
                    /* Unresolved local var: int size@[???] */
    unicode_utf8_DecodeRuneInString(s_01);
    if ((ulong)s_spill.len < local_38) break;
    if (local_40 <= prVar5) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    lVar7 = (long)prVar5 * 0x10;
    *(uint8 **)(local_38 + lVar7 + 8) = local_38;
    s_spill.len = s_spill.len + -(long)local_38;
    puVar6 = s_spill.str + ((ulong)local_38 & -s_spill.len >> 0x3f);
    if (runtime_writeBarrier._0_4_ == 0) {
      *(uint8 **)(local_38 + lVar7) = s_spill.str;
      puVar4 = local_38;
      iVar3 = (int)local_40;
    }
    else {
      puVar4 = local_38;
      runtime_gcWriteBarrierDX();
      iVar3 = extraout_EAX;
    }
    if (iVar3 == 0xfffd) {
      puVar2 = puVar4 + lVar7 + 8;
      puVar2[0] = 3;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(undefined **)(puVar4 + lVar7) = &DAT_00287d92;
      }
      else {
        runtime_gcWriteBarrier();
      }
    }
    prVar5 = (runtime__type *)((long)&prVar5->size + 1);
    s_spill.str = puVar6;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAlen();
}

