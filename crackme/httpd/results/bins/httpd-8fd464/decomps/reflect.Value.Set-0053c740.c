
/* WARNING: Unknown calling convention */

void reflect_Value_Set(reflect_Value v,reflect_Value x)

{
  void *pvVar1;
  void *pvVar2;
  reflect_rtype *prVar3;
  reflect_rtype *dst;
  void *in_R9;
  long in_FS_OFFSET;
  string context;
  reflect_Value rVar4;
  reflect_flag in_stack_00000008;
  void *target;
  ulong in_stack_00000018;
  reflect_Value x_spill;
  uint8 *local_18;
  uint local_10;
  
  dst = (reflect_rtype *)x.flag;
  pvVar2 = x.ptr;
  prVar3 = x.typ;
  rVar4.ptr = v.ptr;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((in_stack_00000018 & 0x60) != 0) || (((uint)in_stack_00000018 >> 8 & 1) == 0)) {
    reflect_flag_mustBeAssignableSlow(in_stack_00000018);
  }
  if ((x_spill.flag == 0) || ((x_spill.flag & 0x60) != 0)) {
    reflect_flag_mustBeExportedSlow(in_stack_00000018);
  }
  pvVar1 = (void *)0x0;
  if ((in_stack_00000018 & 0x1f) == 0x14) {
    pvVar1 = target;
  }
  context.len = (int)pvVar2;
  context.str = (uint8 *)prVar3;
  rVar4.typ = pvVar1;
  rVar4.flag = in_stack_00000008;
  rVar4 = reflect_Value_assignTo(rVar4,context,dst,in_R9);
  if ((local_10 >> 7 & 1) == 0) {
    if (runtime_writeBarrier._0_4_ == 0) {
      *(uint8 **)target = local_18;
    }
    else {
      runtime_gcWriteBarrierCX();
    }
  }
  else if (local_18 == runtime_zeroVal) {
    reflect_typedmemclr(target,rVar4.ptr);
  }
  else {
    reflect_typedmemmove(target,rVar4.ptr,local_18);
  }
  return;
}

