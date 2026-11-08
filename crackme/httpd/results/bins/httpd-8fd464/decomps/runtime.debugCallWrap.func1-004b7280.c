
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_debugCallWrap_func1(void)

{
  undefined8 uVar1;
  undefined1 *argp;
  undefined4 *callerpc;
  long lVar2;
  undefined8 extraout_RAX;
  undefined8 uVar3;
  long lVar4;
  long in_RDX;
  runtime__type *extraout_RDX;
  long extraout_RDX_00;
  long in_FS_OFFSET;
  string s;
  runtime__type *local_38;
  
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: uintptr callerpc@[???]
                       Unresolved local var: uintptr dispatch@[???]
                       Unresolved local var: bool * &lockedm@[???]
                       Unresolved local var: uint32 * &lockedExt@[???]
                       Unresolved local var: runtime.g * newg@[???]
                       Unresolved local var: runtime.debugCallWrapArgs * args@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX_00;
  }
  uVar1 = *(undefined8 *)(in_RDX + 0x18);
  argp = *(undefined1 **)(in_RDX + 0x20);
  callerpc = *(undefined4 **)(in_RDX + 0x28);
  lVar4 = *(long *)(in_RDX + 8);
  runtime_newproc1(*(runtime_funcval **)(in_RDX + 0x10),argp,(int32)uVar1,
                   (runtime_g *)&PTR_runtime_debugCallWrap1_002b37e0,(uintptr)callerpc);
  runtime_newobject(local_38);
  uVar3 = 0;
  _DAT_00000000 = uVar1;
  lVar2 = lVar4;
  if (runtime_writeBarrier._0_4_ != 0) {
    runtime_gcWriteBarrierCX();
    uVar3 = extraout_RAX;
    lVar2 = _DAT_00000008;
  }
  _DAT_00000008 = lVar2;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_38[2].str = (int)uVar3;
    local_38[2].ptrToThis = (int)((ulong)uVar3 >> 0x20);
  }
  else {
    runtime_gcWriteBarrier();
    local_38 = extraout_RDX;
  }
  if (*(long *)(lVar4 + 0xe8) != 0) {
                    /* Unresolved local var: runtime.m * mp@[???] */
    lVar2 = *(long *)(lVar4 + 0x30);
    if (*(long *)(lVar4 + 0xe8) != lVar2) {
      s.len = lVar2;
      s.str = &DAT_0029bfe6;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    *argp = 1;
    *callerpc = *(undefined4 *)(lVar2 + 0x278);
    *(int *)(lVar2 + 0x27c) = *(int *)(lVar2 + 0x27c) + 1;
    *(undefined4 *)(lVar2 + 0x278) = 0;
    *(runtime__type **)(lVar2 + 0x170) = local_38;
    local_38[4].str = (int)lVar2;
    local_38[4].ptrToThis = (int)((ulong)lVar2 >> 0x20);
    *(undefined8 *)(lVar4 + 0xe8) = 0;
  }
  *(undefined1 *)(lVar4 + 0xb4) = 1;
  *(runtime__type **)(lVar4 + 0xa0) = local_38;
  return;
}

