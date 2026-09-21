
/* WARNING: Removing unreachable block (ram,0x005ae790) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.(*genericReplacer).WriteString(strings.genericReplacer *
   r, io.Writer w, string s, int n, error err) */

multireturn_int_error_
strings___genericReplacer__WriteString(strings_genericReplacer *r,io_Writer w,string s)

{
  strings_genericReplacer *psVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  runtime_iface rVar9;
  multireturn_int_error_ mVar10;
  multireturn_int_error_ mVar11;
  string s_00;
  strings_genericReplacer *r_spill;
  io_Writer w_spill;
  string s_spill;
  undefined1 local_98;
  undefined7 uStack_97;
  strings_genericReplacer *local_90;
  undefined8 local_88;
  long local_80;
  char local_78;
  undefined1 local_30 [8];
  strings_genericReplacer *local_28;
  undefined8 local_20;
  
  rVar9.tab = w.tab;
                    /* Unresolved local var: int last@[???]
                       Unresolved local var: int wn@[???]
                       Unresolved local var: bool prevMatchEmpty@[???]
                       Unresolved local var: io.StringWriter sw@[???] */
  while (local_30 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rVar9.data = w_spill.data;
                    /* Unresolved local var: io.StringWriter sw@[???] */
  rVar9 = runtime_assertI2I2((runtime_interfacetype *)w_spill.tab,rVar9);
  local_28 = local_90;
  pvVar3 = (void *)CONCAT71(uStack_97,local_98);
  if ((void *)CONCAT71(uStack_97,local_98) == (void *)0x0) {
    runtime_convT2I((runtime_itab *)&stack0xffffffffffffffe8,rVar9.data);
    local_28 = (strings_genericReplacer *)CONCAT71(uStack_97,local_98);
    pvVar3 = w_spill.data;
  }
                    /* Unresolved local var: int i@[???] */
  uVar4 = 0;
  pvVar2 = (void *)0x0;
  psVar1 = local_28;
  uVar6 = 0;
  uVar7 = 0;
  bVar5 = false;
  do {
    while( true ) {
      if (s_spill.len < (long)uVar4) {
        if (s_spill.len != uVar6) {
          if ((ulong)s_spill.len < uVar6) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceB();
          }
          s_spill.len = (long)-(s_spill.len - uVar6) >> 0x3f;
          (**(code **)((long)pvVar3 + 0x18))();
          psVar1 = (strings_genericReplacer *)CONCAT71(uStack_97,local_98);
          pvVar3 = pvVar2;
        }
        mVar11.err.tab = (runtime_itab *)s_spill.len;
        mVar11.n = (int)psVar1;
        mVar11.err.data = pvVar3;
        return mVar11;
      }
                    /* Unresolved local var: int keylen@[???]
                       Unresolved local var: bool match@[???]
                       Unresolved local var: string val@[???] */
      if ((s_spill.len != uVar4) && ((r_spill->root).priority == 0)) break;
LAB_005ae5a5:
      if ((ulong)s_spill.len < uVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      s_00.str = s_spill.str + ((long)-(s_spill.len - uVar4) >> 0x3f & uVar4);
      s_00.len = s_spill.len - uVar4;
      local_20 = uVar7;
      strings___genericReplacer__lookup(psVar1,s_00,SUB81(uVar4,0));
      psVar1 = local_28;
      local_98 = bVar5;
      if (local_78 == '\0') {
        uVar4 = uVar4 + 1;
        uVar7 = local_20;
        bVar5 = false;
      }
      else {
        if (uVar4 < uVar6) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        (**(code **)((long)pvVar3 + 0x18))();
        mVar10.n = CONCAT71(uStack_97,bVar5) + (long)pvVar2;
        if (local_90 != (strings_genericReplacer *)0x0) {
          mVar10.err.tab = (runtime_itab *)psVar1;
          mVar10.err.data = local_90;
          return mVar10;
        }
        (**(code **)((long)pvVar3 + 0x18))();
        pvVar2 = (void *)(CONCAT71(uStack_97,bVar5) + mVar10.n);
        uVar4 = local_80 + uVar4;
        psVar1 = local_28;
        uVar6 = uVar4;
        uVar7 = local_88;
        bVar5 = local_80 == 0;
      }
    }
    if ((ulong)s_spill.len <= uVar4) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    uVar8 = (ulong)r_spill->mapping[s_spill.str[uVar4]];
    if (r_spill->tableSize != uVar8) {
      if ((ulong)(r_spill->root).table.len <= uVar8) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if ((r_spill->root).table.array[uVar8] != (strings_trieNode *)0x0) goto LAB_005ae5a5;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

