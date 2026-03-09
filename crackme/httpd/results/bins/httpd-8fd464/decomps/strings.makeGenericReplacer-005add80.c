
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.makeGenericReplacer([]string oldnew,
   strings.genericReplacer * ~r1) */

strings_genericReplacer * strings_makeGenericReplacer(__string oldnew)

{
  undefined1 *puVar1;
  uint8 *puVar2;
  long lVar3;
  strings_genericReplacer *psVar4;
  runtime__type *prVar5;
  ulong uVar6;
  int len;
  char cVar7;
  long lVar8;
  long in_FS_OFFSET;
  string val;
  string key;
  __string oldnew_spill;
  long local_150;
  uintptr local_140;
  byte local_118 [256];
  runtime__type *local_18;
  long local_10;
  
                    /* Unresolved local var: strings.genericReplacer * r@[???]
                       Unresolved local var: uint8 index@[???] */
  while (local_118 + 0x40 <= *(byte **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_00258f60);
                    /* Unresolved local var: int i@[???] */
  uVar6 = 0;
  while( true ) {
    if (oldnew_spill.len <= (long)uVar6) {
      local_10 = local_150 + 0x50;
      lVar3 = FUN_0051a460(local_118);
      for (lVar8 = 0; lVar8 < 0x100; lVar8 = lVar8 + 1) {
        *(long *)(lVar3 + 0x48) = *(long *)(lVar3 + 0x48) + (ulong)local_118[lVar8];
      }
                    /* Unresolved local var: int i@[???] */
      local_18 = (runtime__type *)FUN_0051a460(local_118);
      cVar7 = '\0';
      for (len = 0; len < 0x100; len = len + 1) {
        if (local_118[len] == 0) {
          *(char *)((long)&local_18[1].gcdata + len) = (char)local_18[1].equal;
        }
        else {
          *(char *)((long)&local_18[1].gcdata + len) = cVar7;
          cVar7 = cVar7 + '\x01';
        }
      }
      runtime_makeslice(local_18,len,(int)local_18[1].equal);
      local_18[1].ptrdata = (uintptr)local_18[1].equal;
      *(func_unsafe_Pointer__unsafe_Pointer__bool ***)&local_18[1].hash = local_18[1].equal;
      prVar5 = local_18;
      if (runtime_writeBarrier._0_4_ == 0) {
        local_18[1].size = local_140;
      }
      else {
        runtime_gcWriteBarrier();
      }
                    /* Unresolved local var: int i@[???] */
      psVar4 = (strings_genericReplacer *)0x0;
      while( true ) {
        if (oldnew_spill.len <= (long)psVar4) {
          return psVar4;
        }
        if ((ulong)oldnew_spill.len <= psVar4) break;
        puVar1 = (undefined1 *)((long)&(psVar4->root).value.str + 1);
        if ((ulong)oldnew_spill.len <= puVar1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        key.str = (uint8 *)(oldnew_spill.len - (long)psVar4);
        val.len = (int)psVar4;
        val.str = oldnew_spill.array[(long)psVar4].str;
        key.len = (int)prVar5;
        strings___trieNode__add
                  ((strings_trieNode *)oldnew_spill.array[(long)puVar1].len,key,val,
                   oldnew_spill.array[(long)psVar4].len,
                   (strings_genericReplacer *)oldnew_spill.array[(long)puVar1].str);
        psVar4 = (strings_genericReplacer *)((long)&(psVar4->root).value.str + 2);
        prVar5 = local_18;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
                    /* Unresolved local var: string key@[???] */
    if ((ulong)oldnew_spill.len <= uVar6) break;
    puVar2 = oldnew_spill.array[uVar6].str;
    lVar3 = oldnew_spill.array[uVar6].len;
                    /* Unresolved local var: int j@[???] */
    for (lVar8 = 0; lVar8 < lVar3; lVar8 = lVar8 + 1) {
      *(undefined1 *)(local_150 + 0x50 + (ulong)puVar2[lVar8]) = 1;
    }
    uVar6 = uVar6 + 2;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

