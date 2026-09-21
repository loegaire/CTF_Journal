
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*_type).string(runtime._type * t, string ~r0) */

string runtime____type__string(runtime__type *t)

{
  runtime_nameOff rVar1;
  runtime_nameOff unaff_EBX;
  long in_FS_OFFSET;
  string sVar2;
  string sVar3;
  runtime__type *t_spill;
  undefined4 uStack_14;
  runtime_name local_10;
  
                    /* Unresolved local var: string s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rVar1 = t_spill->str;
  runtime_resolveNameOff(t_spill,unaff_EBX);
  sVar2 = runtime_name_name(local_10);
  sVar3.str = (uint8 *)(ulong)t_spill->tflag;
  if ((t_spill->tflag & 2) != 0) {
    if (local_10.bytes != (uint8 *)0x0) {
      sVar2.str = (uint8 *)((-(long)(local_10.bytes + -1) >> 0x3f & 1U) + CONCAT44(uStack_14,rVar1))
      ;
      return sVar2;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  sVar3.len = sVar2.len;
  return sVar3;
}

