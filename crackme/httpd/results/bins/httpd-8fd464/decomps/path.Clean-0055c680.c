
/* WARNING: Removing unreachable block (ram,0x0055cc03) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void path.Clean(string path, string ~r1) */

string path_Clean(string path)

{
  ulong uVar1;
  uint8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint8 uVar5;
  long in_FS_OFFSET;
  string sVar6;
  string sVar7;
  string sVar8;
  string path_spill;
  runtime_tmpBuf *local_78;
  runtime_tmpBuf *local_28;
  ulong uStack_20;
  ulong local_18;
  ulong uStack_10;
  
  sVar6.len = path.len;
                    /* Unresolved local var: int r@[???]
                       Unresolved local var: int dotdot@[???]
                       Unresolved local var: path.lazybuf out@[???] */
  while (&uStack_10 <= *(ulong **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (path_spill.len == 0) {
    sVar6.str = (uint8 *)((long)&go_string__ + 4);
    return sVar6;
  }
  uVar2 = *path_spill.str;
  local_28 = (runtime_tmpBuf *)0x0;
  local_18 = 0;
  uStack_10 = 0;
  if (uVar2 == 0x2f) {
    if (*path_spill.str == 0x2f) {
      uStack_10 = 1;
    }
    else {
      runtime_makeslice((runtime__type *)&DAT_00225720,(int)path_spill.str,path_spill.len);
      if ((ulong)path_spill.len < uStack_10) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      if ((runtime_tmpBuf *)path_spill.str != local_78) {
        runtime_memmove();
      }
      local_18 = path_spill.len;
      local_28 = local_78;
      if ((ulong)path_spill.len <= uStack_10) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      (*local_78)[uStack_10] = 0x2f;
      uStack_10 = uStack_10 + 1;
    }
    uVar3 = 1;
    uVar1 = uVar3;
    uStack_20 = local_18;
  }
  else {
    uVar3 = 0;
    uVar1 = uVar3;
    uStack_20 = local_18;
  }
LAB_0055c832:
  while( true ) {
    uVar4 = uVar1;
    if (path_spill.len <= (long)uVar4) {
      if (uStack_10 == 0) {
        sVar8.len = (int)path_spill.str;
        sVar8.str = (uint8 *)((long)&go_string__ + 4);
        return sVar8;
      }
      if (local_28 == (runtime_tmpBuf *)0x0) {
        local_78 = (runtime_tmpBuf *)path_spill.str;
        if ((ulong)path_spill.len < uStack_10) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAlen();
        }
      }
      else {
        if (local_18 < uStack_10) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceAcap();
        }
        sVar6 = runtime_slicebytetostring(local_28,path_spill.str,uStack_10);
        path_spill.str = (uint8 *)sVar6.len;
      }
      sVar7.len = (int)path_spill.str;
      sVar7.str = *local_78;
      return sVar7;
    }
    if ((ulong)path_spill.len <= uVar4) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (path_spill.str[uVar4] != 0x2f) break;
    uVar1 = uVar4 + 1;
  }
  if (path_spill.str[uVar4] == 0x2e) goto code_r0x0055c86a;
  goto LAB_0055cc0d;
code_r0x0055c86a:
  uVar1 = uVar4 + 1;
  if (path_spill.len == uVar1) goto LAB_0055c832;
  if ((ulong)path_spill.len <= uVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (path_spill.str[uVar4 + 1] == 0x2f) goto LAB_0055c832;
  if ((ulong)path_spill.len <= uVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (path_spill.str[uVar4 + 1] != 0x2e) {
LAB_0055cc0d:
    if (uVar2 == 0x2f) {
      if (uStack_10 == 1) goto LAB_0055ce00;
    }
    else if (uStack_10 == 0) goto LAB_0055ce00;
    if (local_28 == (runtime_tmpBuf *)0x0) {
      if ((long)uStack_10 < path_spill.len) {
        if ((ulong)path_spill.len <= uStack_10) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        if (path_spill.str[uStack_10] == 0x2f) {
          uStack_10 = uStack_10 + 1;
          goto LAB_0055ce00;
        }
      }
      runtime_makeslice((runtime__type *)&DAT_00225720,(int)path_spill.str,path_spill.len);
      uStack_20 = path_spill.len;
      local_18 = path_spill.len;
      local_28 = local_78;
      if ((ulong)path_spill.len < uStack_10) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      if ((runtime_tmpBuf *)path_spill.str != local_78) {
        runtime_memmove();
      }
    }
    if (uStack_20 <= uStack_10) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    (*local_28)[uStack_10] = 0x2f;
    uStack_10 = uStack_10 + 1;
LAB_0055ce00:
    for (; (uVar1 = uVar4, (long)uVar4 < path_spill.len &&
           (uVar5 = path_spill.str[uVar4], uVar5 != 0x2f)); uVar4 = uVar4 + 1) {
      if (local_28 == (runtime_tmpBuf *)0x0) {
        if (path_spill.len <= (long)uStack_10) {
LAB_0055ce65:
          runtime_makeslice((runtime__type *)&DAT_00225720,(int)path_spill.str,path_spill.len);
          uStack_20 = path_spill.len;
          local_18 = path_spill.len;
          local_28 = local_78;
          if ((ulong)path_spill.len < uStack_10) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceAlen();
          }
          if ((runtime_tmpBuf *)path_spill.str != local_78) {
            runtime_memmove();
          }
          goto LAB_0055cefc;
        }
        if ((ulong)path_spill.len <= uStack_10) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        if (path_spill.str[uStack_10] != uVar5) goto LAB_0055ce65;
      }
      else {
LAB_0055cefc:
        if (uStack_20 <= uStack_10) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        (*local_28)[uStack_10] = uVar5;
      }
      uStack_10 = uStack_10 + 1;
    }
    goto LAB_0055c832;
  }
  uVar1 = uVar4 + 2;
  if (path_spill.len != uVar1) {
    if ((ulong)path_spill.len <= uVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (path_spill.str[uVar4 + 2] != 0x2f) goto LAB_0055cc0d;
  }
  uVar4 = uStack_10;
  if ((long)uVar3 < (long)uStack_10) {
    do {
      uStack_10 = uVar4 - 1;
      if ((long)uStack_10 <= (long)uVar3) break;
      if (local_28 == (runtime_tmpBuf *)0x0) {
        if ((ulong)path_spill.len <= uStack_10) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        uVar5 = path_spill.str[uStack_10];
      }
      else {
        if (uStack_20 <= uStack_10) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        uVar5 = local_28[-1][uVar4 + 0x1f];
      }
      uVar4 = uStack_10;
    } while (uVar5 != 0x2f);
    goto LAB_0055c832;
  }
  if (uVar2 == 0x2f) goto LAB_0055c832;
  if (0 < (long)uStack_10) {
    if (local_28 == (runtime_tmpBuf *)0x0) {
      if (((long)uStack_10 < path_spill.len) && (path_spill.str[uStack_10] == 0x2f)) {
        uStack_10 = uStack_10 + 1;
        goto LAB_0055c9ea;
      }
      runtime_makeslice((runtime__type *)&DAT_00225720,(int)path_spill.str,path_spill.len);
      uStack_20 = path_spill.len;
      local_18 = path_spill.len;
      local_28 = local_78;
      if ((ulong)path_spill.len < uStack_10) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      if ((runtime_tmpBuf *)path_spill.str != local_78) {
        runtime_memmove();
      }
    }
    if (uStack_20 <= uStack_10) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    (*local_28)[uStack_10] = 0x2f;
    uStack_10 = uStack_10 + 1;
  }
LAB_0055c9ea:
  if (local_28 == (runtime_tmpBuf *)0x0) {
    if ((long)uStack_10 < path_spill.len) {
      if ((ulong)path_spill.len <= uStack_10) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      uVar3 = uStack_10;
      if (path_spill.str[uStack_10] == 0x2e) goto LAB_0055caea;
    }
    runtime_makeslice((runtime__type *)&DAT_00225720,(int)path_spill.str,path_spill.len);
    uStack_20 = path_spill.len;
    local_18 = path_spill.len;
    local_28 = local_78;
    if ((ulong)path_spill.len < uStack_10) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    if ((runtime_tmpBuf *)path_spill.str != local_78) {
      runtime_memmove();
    }
  }
  if (uStack_20 <= uStack_10) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  (*local_28)[uStack_10] = 0x2e;
  uVar3 = uStack_10;
LAB_0055caea:
  uStack_10 = uVar3 + 1;
  if (local_28 == (runtime_tmpBuf *)0x0) {
    if ((long)uStack_10 < path_spill.len) {
      if ((ulong)path_spill.len <= uStack_10) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (path_spill.str[uStack_10] == 0x2e) {
        uVar3 = uVar3 + 2;
        uStack_10 = uVar3;
        goto LAB_0055c832;
      }
    }
    runtime_makeslice((runtime__type *)&DAT_00225720,(int)path_spill.str,path_spill.len);
    uStack_20 = path_spill.len;
    local_18 = path_spill.len;
    local_28 = local_78;
    if ((ulong)path_spill.len < uStack_10) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    if ((runtime_tmpBuf *)path_spill.str != local_78) {
      runtime_memmove();
    }
  }
  if (uStack_20 <= uStack_10) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  (*local_28)[uStack_10] = 0x2e;
  uVar3 = uStack_10 + 1;
  uStack_10 = uVar3;
  goto LAB_0055c832;
}

