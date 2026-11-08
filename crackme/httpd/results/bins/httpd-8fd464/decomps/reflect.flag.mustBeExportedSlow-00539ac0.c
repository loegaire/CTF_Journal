
/* WARNING: Unknown calling convention */

void reflect_flag_mustBeExportedSlow(reflect_flag f)

{
  int in_RSI;
  uint8 *in_RDI;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  string sVar1;
  interface___ e;
  interface___ e_00;
  string a0;
  string a1;
  string a2;
  reflect_flag f_spill;
  runtime__type *local_60;
  undefined8 *local_58;
  uint8 *local_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (f_spill != 0) {
    if ((f_spill & 0x60) == 0) {
      return;
    }
    sVar1 = reflect_methodNameSkip();
    a0.str = (uint8 *)sVar1.len;
    a0.len = (int)local_58;
    a1.len = in_RSI;
    a1.str = in_RDI;
    a2.len = in_R9;
    a2.str = in_R8;
    sVar1 = runtime_concatstring3((runtime_tmpBuf *)&DAT_002a79ac,a0,a1,a2);
    sVar1.str = local_28;
    runtime_convTstring(sVar1);
    local_60 = (runtime__type *)&DAT_00225520;
    local_58 = (undefined8 *)&DAT_00000009;
    e.data = sVar1.len;
    e._type = (runtime__type *)&DAT_00000009;
    runtime_gopanic(e);
  }
  sVar1 = reflect_methodNameSkip();
  e_00.data = (void *)sVar1.len;
  runtime_newobject(local_60);
  local_58[1] = local_58;
  if (runtime_writeBarrier._0_4_ != 0) goto LAB_00539be9;
  *local_58 = local_60;
  do {
    local_58[2] = 0;
    e_00._type = (runtime__type *)&DAT_00233920;
    runtime_gopanic(e_00);
LAB_00539be9:
    runtime_gcWriteBarrier();
  } while( true );
}

