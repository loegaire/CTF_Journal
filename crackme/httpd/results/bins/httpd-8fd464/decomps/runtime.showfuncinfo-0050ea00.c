
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.showfuncinfo(runtime.funcInfo f, bool firstFrame,
   runtime.funcID funcID, runtime.funcID childID, bool ~r4) */

bool runtime_showfuncinfo
               (runtime_funcInfo f,bool firstFrame,runtime_funcID funcID,runtime_funcID childID)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  long in_FS_OFFSET;
  runtime_funcInfo f_00;
  runtime_funcInfo f_spill;
  bool firstFrame_spill;
  runtime_funcID funcID_spill;
  runtime_funcID childID_spill;
  long *local_28;
  char local_20;
  int7 iStack_1f;
  
  f_00.datap = f.datap;
                    /* Unresolved local var: int32 level@[???]
                       Unresolved local var: string name@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: uint32 t@[???] */
  bVar1 = *(byte *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0x131);
  uVar4 = runtime_traceback_cache >> 2;
  if (bVar1 != 0) {
    uVar4 = (uint)bVar1;
  }
  if (1 < uVar4) {
    return (bool)bVar1;
  }
  if (f_spill._func == (runtime__func *)0x0) {
    return false;
  }
  if ((((funcID_spill == 0x16) && (childID_spill != 9)) && (childID_spill != 0x13)) &&
     (childID_spill != 0xf)) {
    return SUB81(f_spill._func,0);
  }
  f_00._func = (runtime__func *)f_spill.datap;
  runtime_funcname(f_00);
  lVar2 = CONCAT71(iStack_1f,local_20);
  if ((((lVar2 == 0xf) && (*local_28 == 0x2e656d69746e7572)) &&
      (((int)local_28[1] == 0x61706f67 &&
       ((*(short *)((long)local_28 + 0xc) == 0x696e && (*(char *)((long)local_28 + 0xe) == 'c'))))))
     && (!firstFrame_spill)) {
    return SUB81(local_28,0);
  }
  internal_bytealg_IndexByteString();
  if (iStack_1f < 0) {
    bVar3 = false;
  }
  else {
    if (lVar2 < 8) {
      local_20 = '\0';
    }
    else {
      runtime_memequal();
    }
    if (local_20 == '\0') {
      bVar3 = true;
    }
    else if (((lVar2 < 9) || (*local_28 != 0x2e656d69746e7572)) || (*(byte *)(local_28 + 1) < 0x41))
    {
      bVar3 = false;
    }
    else {
      bVar3 = *(byte *)(local_28 + 1) < 0x5b;
    }
  }
  return bVar3;
}

