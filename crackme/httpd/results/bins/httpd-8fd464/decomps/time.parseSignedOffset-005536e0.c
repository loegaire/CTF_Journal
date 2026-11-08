
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.parseSignedOffset(string value, int ~r1) */

int time_parseSignedOffset(string value)

{
  uint8 uVar1;
  uint8 *puVar2;
  long lVar3;
  ulong uVar4;
  uint8 *extraout_RAX;
  ulong uVar5;
  runtime_itab *prVar6;
  long in_FS_OFFSET;
  string value_spill;
  char local_28;
  
  puVar2 = value.str;
                    /* Unresolved local var: uint8 sign@[???]
                       Unresolved local var: int64 x@[???]
                       Unresolved local var: string rem@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    puVar2 = extraout_RAX;
  }
  if (value_spill.len == 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  uVar1 = *value_spill.str;
  if ((uVar1 != 0x2d) && (uVar1 != 0x2b)) {
    return (int)puVar2;
  }
  uVar4 = value_spill.len - 1;
  lVar3 = 0;
  uVar5 = 0;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8 c@[???] */
  while (((long)uVar5 < (long)uVar4 &&
         ((byte)(value_spill.str[uVar5 + ((long)-uVar4 >> 0x3f & 1U)] - 0x30) < 10))) {
    prVar6 = time_errLeadingInt.tab;
    if (0xccccccccccccccc < lVar3) {
      lVar3 = 0;
      uVar5 = 0;
      goto LAB_005537d9;
    }
    lVar3 = (ulong)value_spill.str[uVar5 + ((long)-uVar4 >> 0x3f & 1U)] + lVar3 * 10 + -0x30;
    if (lVar3 < 0) {
      lVar3 = 0;
      uVar5 = 0;
      goto LAB_005537d9;
    }
    uVar5 = uVar5 + 1;
  }
  if (uVar4 < uVar5) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  uVar5 = (value_spill.len - uVar5) - 1;
  prVar6 = (runtime_itab *)0x0;
LAB_005537d9:
  if (prVar6 == (runtime_itab *)0x0) {
    if (uVar5 == uVar4) {
      runtime_memequal();
    }
    else {
      local_28 = '\0';
    }
    if (local_28 == '\0') {
      if (uVar1 == 0x2d) {
        lVar3 = -lVar3;
      }
      uVar4 = lVar3 + 0x17U;
      if (lVar3 + 0x17U < 0x2f) {
        return uVar4;
      }
      return uVar4;
    }
  }
  return lVar3;
}

