
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*rtype).Name(reflect.rtype * t, string ~r0) */

string reflect___rtype__Name(reflect_rtype *t)

{
  ulong uVar1;
  ulong uVar2;
  int unaff_RBX;
  long in_FS_OFFSET;
  string sVar3;
  string sVar4;
  reflect_rtype *t_spill;
  long local_18;
  ulong local_10;
  
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: string s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((t_spill->tflag & 4) == 0) {
    sVar3.len = unaff_RBX;
    sVar3.str = (uint8 *)t_spill;
    return sVar3;
  }
  reflect___rtype__String(t_spill);
  uVar2 = local_10;
  do {
    uVar1 = uVar2;
    uVar2 = uVar1 - 1;
    if ((long)uVar2 < 0) break;
  } while (*(char *)(local_18 + uVar2) != '.');
  if (local_10 < uVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  sVar4.len = uVar1 & (long)-((local_10 - uVar2) + -1) >> 0x3f;
  sVar4.str = (uint8 *)(local_18 + sVar4.len);
  return sVar4;
}

