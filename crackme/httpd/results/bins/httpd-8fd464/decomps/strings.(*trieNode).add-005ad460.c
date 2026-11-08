
/* WARNING: Unknown calling convention */

void strings___trieNode__add
               (strings_trieNode *t,string key,string val,int priority,strings_genericReplacer *r)

{
  strings_trieNode **ppsVar1;
  undefined1 auVar2 [16];
  uint8 *puVar3;
  strings_trieNode *extraout_RAX;
  uint8 *puVar4;
  strings_trieNode *extraout_RAX_00;
  strings_trieNode *extraout_RAX_01;
  strings_trieNode *typ;
  ulong uVar5;
  strings_trieNode *extraout_RAX_02;
  strings_trieNode *extraout_RAX_03;
  strings_trieNode *extraout_RAX_04;
  ulong extraout_RDX;
  uint8 *extraout_RDX_00;
  uint8 *extraout_RDX_01;
  uint8 *extraout_RDX_02;
  strings_genericReplacer *r_00;
  uint8 *puVar6;
  string *psVar7;
  strings_trieNode **ppsVar8;
  uint8 *priority_00;
  long in_FS_OFFSET;
  string val_00;
  string val_01;
  string val_02;
  string val_03;
  string val_04;
  string key_00;
  string key_01;
  string key_02;
  string key_03;
  strings_trieNode *t_spill;
  string key_spill;
  string val_spill;
  int priority_spill;
  strings_genericReplacer *r_spill;
  strings_trieNode *local_68;
  strings_trieNode **local_58;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (key_spill.len == 0) {
    if (t_spill->priority == 0) {
      (t_spill->value).len = val_spill.len;
      if (runtime_writeBarrier._0_4_ == 0) {
        (t_spill->value).str = val_spill.str;
      }
      else {
        runtime_gcWriteBarrier();
      }
      t_spill->priority = priority_spill;
    }
    return;
  }
  puVar6 = (uint8 *)(t_spill->prefix).len;
  puVar3 = (t_spill->prefix).str;
  psVar7 = &t_spill->prefix;
  if (puVar6 == (uint8 *)0x0) {
    ppsVar1 = (t_spill->table).array;
    puVar6 = (uint8 *)(t_spill->table).len;
    if (ppsVar1 == (strings_trieNode **)0x0) {
      (t_spill->prefix).len = key_spill.len;
      if (runtime_writeBarrier._0_4_ == 0) {
        (t_spill->prefix).str = key_spill.str;
      }
      else {
        runtime_gcWriteBarrier();
      }
      runtime_newobject((runtime__type *)&DAT_0026af80);
      if (runtime_writeBarrier._0_4_ == 0) {
        t_spill->next = local_68;
      }
      else {
        psVar7 = (string *)&t_spill->next;
        runtime_gcWriteBarrier();
      }
      val_01.len = (int)puVar6;
      val_01.str = (uint8 *)psVar7;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = t_spill;
      strings___trieNode__add(&r_spill->root,(string)(auVar2 << 0x40),val_01,priority,r);
    }
    else {
      puVar3 = (uint8 *)(ulong)r_spill->mapping[*key_spill.str];
      if (puVar6 <= puVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (ppsVar1[(long)puVar3] == (strings_trieNode *)0x0) {
        runtime_newobject((runtime__type *)&DAT_0026af80);
        if ((uint8 *)(t_spill->table).len <= puVar3) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        if (runtime_writeBarrier._0_4_ == 0) {
          (t_spill->table).array[(long)puVar3] = local_68;
        }
        else {
          runtime_gcWriteBarrierBX();
          t_spill = extraout_RAX;
        }
      }
      puVar6 = (uint8 *)(t_spill->table).len;
      val_00.len = key_spill.str + (-(long)(key_spill.len + -1) >> 0x3f & 1);
      if (puVar6 <= puVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      val_00.str = (uint8 *)r_spill;
      key_00.len = key_spill.len;
      key_00.str = puVar6;
      strings___trieNode__add
                ((strings_trieNode *)priority_spill,key_00,val_00,(int)key_spill.str,
                 (strings_genericReplacer *)(key_spill.len + -1));
    }
  }
  else {
    for (puVar4 = (uint8 *)0x0;
        (((long)puVar4 < (long)puVar6 && ((long)puVar4 < key_spill.len)) &&
        (r = (strings_genericReplacer *)(ulong)puVar4[(long)puVar3],
        key_spill.str[(long)puVar4] == puVar4[(long)puVar3])); puVar4 = puVar4 + 1) {
                    /* Unresolved local var: int n@[???] */
    }
    if (puVar4 == puVar6) {
      if ((ulong)key_spill.len < puVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      key_01.len = -(key_spill.len - (long)puVar4) >> 0x3f;
      val_02.len = (int)puVar3;
      val_02.str = (uint8 *)psVar7;
      key_01.str = puVar6;
      strings___trieNode__add(&r_spill->root,key_01,val_02,(int)key_spill.str,r);
    }
    else if (puVar4 == (uint8 *)0x0) {
                    /* Unresolved local var: strings.trieNode * prefixNode@[???]
                       Unresolved local var: strings.trieNode * keyNode@[???] */
      if (puVar6 == (uint8 *)0x1) {
        typ = t_spill->next;
      }
      else {
        runtime_newobject((runtime__type *)&DAT_0026af80);
        (local_68->prefix).len = (int)(puVar6 + -1);
        if (runtime_writeBarrier._0_4_ == 0) {
          (local_68->prefix).str = puVar3 + 1;
          typ = local_68;
        }
        else {
          runtime_gcWriteBarrierCX();
          typ = extraout_RAX_00;
        }
        if (runtime_writeBarrier._0_4_ == 0) {
          typ->next = t_spill->next;
        }
        else {
          runtime_gcWriteBarrierDX();
          typ = extraout_RAX_01;
        }
      }
      runtime_newobject((runtime__type *)typ);
      runtime_makeslice((runtime__type *)local_68,0x233e00,(int)r_spill);
      uVar5 = r_spill->tableSize;
      (t_spill->table).len = uVar5;
      (t_spill->table).cap = uVar5;
      if (runtime_writeBarrier._0_4_ == 0) {
        (t_spill->table).array = local_58;
      }
      else {
        runtime_gcWriteBarrier();
        uVar5 = extraout_RDX;
      }
      if ((t_spill->prefix).len == 0) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (uVar5 <= r_spill->mapping[*(t_spill->prefix).str]) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (runtime_writeBarrier._0_4_ == 0) {
        (t_spill->table).array[r_spill->mapping[*(t_spill->prefix).str]] = typ;
      }
      else {
        runtime_gcWriteBarrierDX();
      }
      ppsVar1 = (t_spill->table).array;
      uVar5 = (ulong)r_spill->mapping[*key_spill.str];
      if ((ulong)(t_spill->table).len <= uVar5) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      ppsVar8 = ppsVar1 + uVar5;
      r_00 = (strings_genericReplacer *)(key_spill.len + -1);
      puVar6 = key_spill.str + (-(long)r_00 >> 0x3f & 1);
      if (runtime_writeBarrier._0_4_ == 0) {
        ppsVar1[uVar5] = local_68;
      }
      else {
        runtime_gcWriteBarrier();
        local_68 = extraout_RAX_02;
      }
      (t_spill->prefix).len = 0;
      if (runtime_writeBarrier._0_4_ == 0) {
        (t_spill->prefix).str = (uint8 *)0x0;
        t_spill->next = (strings_trieNode *)0x0;
      }
      else {
        runtime_gcWriteBarrier();
        ppsVar8 = &t_spill->next;
        runtime_gcWriteBarrier();
      }
      val_03.len = (int)puVar6;
      val_03.str = (uint8 *)ppsVar8;
      key_02.len = (int)r_spill;
      key_02.str = (uint8 *)t_spill;
      strings___trieNode__add((strings_trieNode *)priority_spill,key_02,val_03,(int)local_68,r_00);
    }
    else {
                    /* Unresolved local var: strings.trieNode * next@[???] */
      if (puVar6 < puVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      priority_00 = key_spill.str;
      runtime_newobject((runtime__type *)&DAT_0026af80);
      (local_68->prefix).len = (long)puVar6 - (long)puVar4;
      if (runtime_writeBarrier._0_4_ == 0) {
        (local_68->prefix).str = puVar3 + (-((long)puVar6 - (long)puVar4) >> 0x3f & (ulong)puVar4);
      }
      else {
        psVar7 = &local_68->prefix;
        runtime_gcWriteBarrierCX();
        local_68 = extraout_RAX_03;
        puVar4 = extraout_RDX_00;
      }
      if (runtime_writeBarrier._0_4_ == 0) {
        local_68->next = t_spill->next;
      }
      else {
        psVar7 = (string *)&local_68->next;
        runtime_gcWriteBarrierSI();
        local_68 = extraout_RAX_04;
        puVar4 = extraout_RDX_01;
      }
      puVar6 = (uint8 *)(t_spill->prefix).len;
      if (puVar6 < puVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      (t_spill->prefix).len = (int)puVar4;
      if (runtime_writeBarrier._0_4_ == 0) {
        t_spill->next = local_68;
      }
      else {
        psVar7 = (string *)&t_spill->next;
        runtime_gcWriteBarrier();
        puVar4 = extraout_RDX_02;
      }
      if ((ulong)key_spill.len < puVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      key_03.len = key_spill.str + ((ulong)puVar4 & -(key_spill.len - (long)puVar4) >> 0x3f);
      val_04.len = (int)puVar6;
      val_04.str = (uint8 *)psVar7;
      key_03.str = (uint8 *)t_spill;
      strings___trieNode__add(&r_spill->root,key_03,val_04,(int)priority_00,r);
    }
  }
  return;
}

