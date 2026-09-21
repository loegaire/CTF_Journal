
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.Caller(int skip, uintptr pc, string file, int line, bool
   ok) */

multireturn_uintptr_string_int_bool_ runtime_Caller(int skip)

{
  runtime_Frames *ci;
  int in_RCX;
  int unaff_RBX;
  undefined1 uVar1;
  undefined8 in_RSI;
  int in_RDI;
  int *piVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  multireturn_uintptr_string_int_bool_ mVar4;
  multireturn_uintptr_string_int_bool_ mVar5;
  __uintptr pcbuf;
  int skip_spill;
  int *local_108;
  undefined8 local_100;
  int *local_f8;
  long local_f0;
  int local_b0;
  undefined8 local_a8 [3];
  undefined1 local_90 [8];
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined1 local_58 [80];
  
                    /* Unresolved local var: []uintptr rpc@[???]
                       Unresolved local var: runtime.Frame frame@[???] */
  while (uVar1 = (undefined1)in_RSI,
        local_90 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_108 = (int *)0x1;
  local_100 = 1;
  runtime_makeslice((runtime__type *)&DAT_00225760,unaff_RBX,in_RCX);
  piVar2 = local_f8;
  local_b0 = (int)local_f8;
  pcbuf.len = skip_spill + 1;
  local_108 = local_f8;
  local_100 = 1;
  local_f8 = (int *)0x1;
  pcbuf.array = (uintptr *)unaff_RBX;
  pcbuf.cap = in_RDI;
  mVar5.pc = runtime_callers((int)piVar2,pcbuf);
  if (0 < local_f0) {
                    /* Unresolved local var: runtime.Frames * f@[???] */
    runtime_newobject((runtime__type *)&DAT_002584e0);
    local_108[1] = 1;
    local_108[2] = 1;
    piVar2 = local_108;
    if (runtime_writeBarrier._0_4_ == 0) {
      *local_108 = local_b0;
    }
    else {
      runtime_gcWriteBarrier();
    }
    piVar2[4] = 0;
    piVar2[5] = 2;
    if (runtime_writeBarrier._0_4_ == 0) {
      piVar2[3] = (int)(piVar2 + 6);
    }
    else {
      runtime_gcWriteBarrier();
    }
    ci = (runtime_Frames *)FUN_0051a190(local_88);
    runtime___Frames__Next(ci);
    FUN_0051a4fa(local_58,&local_108);
    puVar3 = local_a8;
    uVar1 = SUB81(local_58,0);
    FUN_0051a4fa();
    mVar4.file.str = (uint8 *)local_78;
    mVar4.pc = local_a8[0];
    mVar4.file.len = local_88[0];
    mVar4.ok = (bool)uVar1;
    mVar4.line = (int)puVar3;
    return mVar4;
  }
  mVar5.file.str = (uint8 *)unaff_RBX;
  mVar5.file.len = pcbuf.len;
  mVar5.ok = (bool)uVar1;
  mVar5.line = in_RDI;
  return mVar5;
}

