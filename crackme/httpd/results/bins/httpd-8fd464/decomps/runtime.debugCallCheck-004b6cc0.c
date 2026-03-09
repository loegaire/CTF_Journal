
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.debugCallCheck(uintptr pc, string ~r1) */

string runtime_debugCallCheck(uintptr pc)

{
  ulong *puVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string sVar2;
  string sVar3;
  string sVar4;
  uintptr pc_spill;
  uint8 *local_30;
  undefined8 uStack_28;
  code *local_20;
  uintptr *puStack_18;
  uint8 **local_10;
  
                    /* Unresolved local var: string ret@[???] */
  puVar1 = *(ulong **)(in_FS_OFFSET + -8);
  if (*(ulong **)(puVar1[6] + 200) != puVar1) {
    sVar4.len = unaff_RBX;
    sVar4.str = (uint8 *)0x2a0cee;
    return sVar4;
  }
                    /* Unresolved local var: uintptr sp@[???] */
  if (((uintptr *)*puVar1 < &pc_spill) && (&pc_spill <= (uintptr *)puVar1[1])) {
    local_30 = (uint8 *)0x0;
    uStack_28 = 0;
    local_20 = runtime_debugCallCheck_func1;
    puStack_18 = &pc_spill;
    local_10 = &local_30;
    runtime_systemstack();
    sVar2.len = unaff_RBX;
    sVar2.str = local_30;
    return sVar2;
  }
  sVar3.len = unaff_RBX;
  sVar3.str = (uint8 *)0x2a0cee;
  return sVar3;
}

