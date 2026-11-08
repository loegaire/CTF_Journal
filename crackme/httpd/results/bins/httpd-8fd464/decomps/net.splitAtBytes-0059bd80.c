
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.splitAtBytes(string s, string t, []string ~r2) */

__string net_splitAtBytes(string s,string t)

{
  runtime__type *et;
  long extraout_RAX;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  runtime__type *prVar4;
  int iVar5;
  long in_FS_OFFSET;
  string s_00;
  __string _Var6;
  string t_00;
  string s_spill;
  string t_spill;
  long local_38;
  
  iVar5 = t.len;
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: int last@[???]
                       Unresolved local var: []string a@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  s_00.len = t_spill.len;
  s_00.str = s_spill.str;
  t_00.len = iVar5;
  t_00.str = (uint8 *)s_spill.len;
  net_countAnyByte(s_00,t_00);
  et = (runtime__type *)(local_38 + 1);
  runtime_makeslice(et,t_spill.len,0x225520);
  uVar2 = 0;
  uVar3 = 0;
  prVar4 = (runtime__type *)0x0;
  lVar1 = t_spill.len;
                    /* Unresolved local var: int i@[???] */
  do {
    if (s_spill.len <= (long)uVar2) {
      if ((long)uVar3 < s_spill.len) {
        if ((ulong)s_spill.len < uVar3) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        if (et <= prVar4) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        *(ulong *)(lVar1 + 8 + (long)prVar4 * 0x10) = s_spill.len - uVar3;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(uint8 **)(lVar1 + (long)prVar4 * 0x10) =
               s_spill.str + (uVar3 & (long)-(s_spill.len - uVar3) >> 0x3f);
        }
        else {
          runtime_gcWriteBarrierSI();
          lVar1 = extraout_RAX;
        }
        prVar4 = (runtime__type *)((long)&prVar4->size + 1);
      }
      if (et < prVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      _Var6.len = (int)prVar4;
      _Var6.array = (string *)lVar1;
      _Var6.cap = (int)et;
      return _Var6;
    }
    internal_bytealg_IndexByteString();
    lVar1 = t_spill.len;
    if (-1 < t_spill.len) {
      if ((long)uVar3 < (long)uVar2) {
        if (uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        if (et <= prVar4) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        *(ulong *)(t_spill.len + 8 + (long)prVar4 * 0x10) = uVar2 - uVar3;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(uint8 **)(t_spill.len + (long)prVar4 * 0x10) =
               s_spill.str + (uVar3 & (long)-(uVar2 - uVar3) >> 0x3f);
        }
        else {
          runtime_gcWriteBarrierR9();
        }
        prVar4 = (runtime__type *)((long)&prVar4->size + 1);
      }
      uVar3 = uVar2 + 1;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}

