
/* WARNING: Unknown calling convention */

void reflect_Value_SetBool(reflect_Value v,bool x)

{
  long in_FS_OFFSET;
  string sVar1;
  interface___ e;
  reflect_Value v_spill;
  bool x_spill;
  runtime__type *local_30;
  undefined8 *local_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((v_spill.flag & 0x60) != 0) || (((uint)v_spill.flag >> 8 & 1) == 0)) {
    local_30 = (runtime__type *)v_spill.flag;
    reflect_flag_mustBeAssignableSlow(v_spill.flag);
  }
  if ((v_spill.flag & 0x1f) == 1) {
    *(bool *)v_spill.ptr = x_spill;
    return;
  }
  sVar1 = reflect_methodName();
  e.data = (void *)sVar1.len;
  runtime_newobject(local_30);
  local_28[1] = local_28;
  if (runtime_writeBarrier._0_4_ != 0) goto LAB_0053c96d;
  *local_28 = local_30;
  do {
    local_28[2] = v_spill.flag & 0x1f;
    e._type = (runtime__type *)&DAT_00233920;
    runtime_gopanic(e);
LAB_0053c96d:
    runtime_gcWriteBarrier();
  } while( true );
}

