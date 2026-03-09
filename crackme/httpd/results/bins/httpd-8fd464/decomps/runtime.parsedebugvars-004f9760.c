
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_parsedebugvars(void)

{
  int32 *piVar1;
  uint8 *puVar2;
  int iVar3;
  uint8 *puVar4;
  uint8 *puVar5;
  uint8 *puVar6;
  uint8 *puVar7;
  uint8 *puVar8;
  int unaff_RBX;
  runtime_dbgVar *prVar9;
  long lVar10;
  long in_FS_OFFSET;
  string sVar11;
  string s;
  string key;
  string level;
  string s_00;
  multireturn_int_bool__conflict mVar12;
  uint8 *local_70;
  char local_68;
  int7 iStack_67;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_debug.cgocheck = 1;
  runtime_debug.invalidptr = 1;
  sVar11.len = unaff_RBX;
  sVar11.str = &DAT_0028a549;
                    /* Unresolved local var: string p@[???] */
  sVar11 = runtime_gogetenv(sVar11);
  puVar7 = (uint8 *)CONCAT71(iStack_67,local_68);
  puVar5 = local_70;
  puVar8 = (uint8 *)sVar11.len;
  while( true ) {
    do {
      puVar4 = puVar5;
      if (puVar7 == (uint8 *)0x0) {
        runtime_debug.malloc =
             (runtime_debug.allocfreetrace != 0 || runtime_debug.inittrace != 0) ||
             runtime_debug.sbrk != 0;
        key.len = (int)puVar8;
        key.str = &DAT_00290b84;
        sVar11 = runtime_gogetenv(key);
        level.len = sVar11.len;
        level.str = local_70;
        runtime_debug_SetTraceback(level);
        runtime_traceback_env = runtime_traceback_cache;
        return;
      }
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: string field@[???]
                       Unresolved local var: string key@[???]
                       Unresolved local var: string value@[???] */
      internal_bytealg_IndexByteString();
      puVar6 = (uint8 *)CONCAT71(iStack_67,local_68);
      if (iStack_67 < 0) {
        puVar5 = (uint8 *)0x0;
        puVar6 = puVar7;
        puVar7 = (uint8 *)0x0;
      }
      else {
        if (puVar7 < puVar6) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAlen();
        }
        if (puVar7 < puVar6 + 1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        puVar7 = puVar7 + (-1 - (long)puVar6);
        puVar5 = puVar4 + ((ulong)(puVar6 + 1) & -(long)puVar7 >> 0x3f);
      }
      local_70 = (uint8 *)CONCAT71(local_70._1_7_,0x3d);
      internal_bytealg_IndexByteString();
      iVar3 = runtime_dbgvars.len;
      puVar2 = (uint8 *)CONCAT71(iStack_67,local_68);
      puVar8 = puVar7;
    } while (iStack_67 < 0);
    if (puVar6 < puVar2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    if (puVar6 < puVar2 + 1) break;
    puVar8 = puVar6 + (-1 - (long)puVar2);
    s.str = puVar4 + ((ulong)(puVar2 + 1) & -(long)puVar8 >> 0x3f);
    if ((((puVar2 == &DAT_0000000e) && (*(long *)puVar4 == 0x69666f72706d656d)) &&
        (*(int *)(puVar4 + 8) == 0x6172656c)) && (*(short *)(puVar4 + 0xc) == 0x6574)) {
      s.len = (int)puVar8;
                    /* Unresolved local var: int n@[???] */
      mVar12 = runtime_atoi(s);
      puVar8 = (uint8 *)CONCAT71((int7)((ulong)puVar8 >> 8),mVar12.~r2);
      if (local_68 != '\0') {
        runtime_MemProfileRate = (int)local_70;
      }
    }
    else if (0 < runtime_dbgvars.len) {
      lVar10 = 0;
      prVar9 = runtime_dbgvars.array;
      while( true ) {
        puVar4 = (uint8 *)(prVar9->name).len;
        piVar1 = prVar9->value;
        if ((puVar4 == puVar2) && (runtime_memequal(), local_70 = puVar4, local_68 != '\0')) {
          s_00.len = (int)puVar8;
          s_00.str = s.str;
          runtime_atoi(s_00);
          if ((puVar4 == (uint8 *)(long)(int)puVar4) && (local_68 != '\0')) {
            *piVar1 = (int)puVar4;
          }
        }
        lVar10 = lVar10 + 1;
        if (iVar3 <= lVar10) break;
        prVar9 = prVar9 + 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

