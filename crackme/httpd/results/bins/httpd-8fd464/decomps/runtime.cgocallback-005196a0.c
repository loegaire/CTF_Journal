
void runtime_cgocallback(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long in_FS_OFFSET;
  void *in_stack_00000008;
  uintptr in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 local_20 [2];
  long *local_10;
  
  if (*(long *)(in_FS_OFFSET + -8) == 0) {
    runtime_needm();
    local_10 = (long *)0x0;
    plVar4 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    *(undefined8 **)(*plVar4 + 0x38) = local_20;
  }
  else {
    plVar4 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    local_10 = plVar4;
  }
  local_20[0] = *(undefined8 *)(*plVar4 + 0x38);
  *(undefined8 **)(*plVar4 + 0x38) = local_20;
  lVar1 = plVar4[0x19];
  *(long *)(in_FS_OFFSET + -8) = lVar1;
  lVar2 = *(long *)(lVar1 + 0x38);
  *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(lVar1 + 0x40);
  *(void **)(lVar2 + -0x28) = in_stack_00000008;
  *(uintptr *)(lVar2 + -0x20) = in_stack_00000010;
  *(undefined8 *)(lVar2 + -0x18) = in_stack_00000018;
  *(undefined8 *)(lVar2 + -0x30) = 0x519754;
  runtime_cgocallbackg(runtime_cgocallbackg,in_stack_00000008,in_stack_00000010);
  lVar1 = *(long *)(in_FS_OFFSET + -8);
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(lVar2 + -8);
  *(long *)(lVar1 + 0x38) = lVar2;
  lVar1 = **(long **)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  *(long *)(in_FS_OFFSET + -8) = lVar1;
  puVar3 = *(undefined8 **)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x38) = *puVar3;
  if (puVar3[2] == 0) {
    puVar3[-1] = 0x5197b0;
    runtime_dropm();
  }
  return;
}

