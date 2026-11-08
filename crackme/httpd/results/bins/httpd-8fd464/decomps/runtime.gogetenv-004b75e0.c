
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.gogetenv(string key, string ~r1) */

string runtime_gogetenv(string key)

{
  ulong uVar1;
  uint8 *puVar2;
  int iVar3;
  uint8 *puVar4;
  uint8 *extraout_RAX;
  string *psVar5;
  char cVar6;
  long in_FS_OFFSET;
  string sVar7;
  string sVar8;
  string s;
  string key_spill;
  char local_38;
  
  puVar4 = key.str;
                    /* Unresolved local var: []string env@[DW_OP_reg1(RDX); DW_OP_piece: 8;
                       DW_OP_piece: 8]
                       Unresolved local var: int ~R0.len@[???] */
  while (iVar3 = runtime_envs.len,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    puVar4 = extraout_RAX;
  }
  if (runtime_envs.array == (string *)0x0) {
    s.len = runtime_envs.len;
    s.str = &DAT_0029d1ed;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
                    /* Unresolved local var: string s@[???] */
  if (0 < runtime_envs.len) {
    puVar4 = (uint8 *)0x0;
    psVar5 = runtime_envs.array;
    while( true ) {
      uVar1 = psVar5->len;
      puVar2 = psVar5->str;
      if (key_spill.len < (long)uVar1) {
        if (puVar2[key_spill.len] == 0x3d) {
          runtime_memequal();
          cVar6 = local_38;
        }
        else {
          cVar6 = '\0';
        }
      }
      else {
        cVar6 = '\0';
      }
      if (cVar6 != '\0') {
        if (uVar1 < key_spill.len + 1U) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        sVar8.str = puVar2 + (key_spill.len + 1U & (long)-((uVar1 - key_spill.len) + -1) >> 0x3f);
        sVar8.len = iVar3;
        return sVar8;
      }
      if (iVar3 <= (long)(puVar4 + 1)) break;
      psVar5 = psVar5 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  sVar7.len = iVar3;
  sVar7.str = puVar4;
  return sVar7;
}

