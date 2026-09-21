
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.String(reflect.Value v, string ~r0) */

string reflect_Value_String(reflect_Value v)

{
  int in_RSI;
  uint8 *in_RDI;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  reflect_Type rVar1;
  string sVar2;
  string sVar3;
  string sVar4;
  string a0;
  string a1;
  reflect_Value v_00;
  string a2;
  reflect_Value v_spill;
  long local_38;
  uint8 *local_18;
  
  sVar2.len = v.ptr;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: reflect.Kind k@[???] */
  if ((v_spill.flag & 0x1f) != 0) {
    if ((v_spill.flag & 0x1f) == 0x18) {
      sVar2.str = *(uint8 **)((long)v_spill.ptr + 8);
      return sVar2;
    }
    v_00.ptr = sVar2.len;
    v_00.typ = v_spill.ptr;
    v_00.flag = v_spill.flag;
    rVar1 = reflect_Value_Type(v_00);
    a0.str = rVar1.data;
    (**(code **)(local_38 + 0xf8))();
    a0.len = v_spill.flag;
    a1.len = in_RSI;
    a1.str = in_RDI;
    a2.len = in_R9;
    a2.str = in_R8;
    sVar2 = runtime_concatstring3((runtime_tmpBuf *)&DAT_0028a3c1,a0,a1,a2);
    sVar3.len = sVar2.len;
    sVar3.str = local_18;
    return sVar3;
  }
  sVar4.len = (int)sVar2.len;
  sVar4.str = &DAT_002985c9;
  return sVar4;
}

