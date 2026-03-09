
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*waitReason).String(string ~r0) */

string runtime___waitReason__String(void)

{
  long *plVar1;
  uint8 *puVar2;
  int unaff_RBX;
  long in_FS_OFFSET;
  string sVar3;
  byte *in_stack_00000008;
  
                    /* Unresolved local var: runtime.waitReason w@[???] */
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x20);
  if (plVar1 != (long *)0x0) goto LAB_0051c58a;
  while (in_stack_00000008 == (byte *)0x0) {
    runtime_panicwrap();
LAB_0051c58a:
    if ((byte **)*plVar1 == &stack0x00000008) {
      *plVar1 = (long)&stack0xfffffffffffffff8;
    }
  }
  if (*in_stack_00000008 < 0x1b) {
    puVar2 = (uint8 *)runtime_waitReasonStrings[*in_stack_00000008].len;
  }
  else {
    puVar2 = (uint8 *)0x13;
  }
  sVar3.len = unaff_RBX;
  sVar3.str = puVar2;
  return sVar3;
}

