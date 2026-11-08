
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.(*appendSliceWriter).WriteString(strings.appendSliceWriter
   * w, string s, int ~r1, error ~r2) */

multireturn_int_error__conflict
strings___appendSliceWriter__WriteString(strings_appendSliceWriter *w,string s)

{
  ulong uVar1;
  void *pvVar2;
  ulong cap;
  uint8 *puVar4;
  long in_FS_OFFSET;
  runtime_slice rVar5;
  multireturn_int_error__conflict mVar6;
  strings_appendSliceWriter *w_spill;
  string s_spill;
  uint8 *local_38;
  ulong local_28;
  ulong uVar3;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  pvVar2 = (void *)w_spill->len;
  uVar1 = (long)pvVar2 + s_spill.len;
  cap = w_spill->cap;
  uVar3 = uVar1;
  puVar4 = w_spill->array;
  if (cap < uVar1) {
    rVar5.len = (int)pvVar2;
    rVar5.array = (void *)uVar1;
    rVar5.cap = (int)w_spill->array;
    rVar5 = runtime_growslice((runtime__type *)&DAT_00225720,rVar5,cap);
    uVar3 = rVar5.len;
    cap = local_28;
    puVar4 = local_38;
  }
  runtime_memmove();
  w_spill->len = uVar1;
  w_spill->cap = cap;
  if (runtime_writeBarrier._0_4_ == 0) {
    w_spill->array = puVar4;
  }
  else {
    runtime_gcWriteBarrier();
  }
  mVar6.~r2.tab = (runtime_itab *)uVar3;
  mVar6.~r1 = s_spill.len;
  mVar6.~r2.data = pvVar2;
  return mVar6;
}

