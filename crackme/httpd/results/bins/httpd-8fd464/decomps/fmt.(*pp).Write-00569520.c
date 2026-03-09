
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.(*pp).Write(fmt.pp * p, []uint8 b, int ret, error err) */

multireturn_int_error__conflict9 fmt___pp__Write(fmt_pp *p,__uint8 b)

{
  ulong uVar1;
  void *pvVar2;
  ulong cap;
  uint8 *puVar4;
  long in_FS_OFFSET;
  runtime_slice rVar5;
  multireturn_int_error__conflict9 mVar6;
  fmt_pp *p_spill;
  __uint8 b_spill;
  uint8 *local_38;
  ulong local_28;
  ulong uVar3;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  pvVar2 = (void *)(p_spill->buf).len;
  uVar1 = (long)pvVar2 + b_spill.len;
  cap = (p_spill->buf).cap;
  puVar4 = (p_spill->buf).array;
  uVar3 = uVar1;
  if (cap < uVar1) {
    rVar5.len = (int)pvVar2;
    rVar5.array = (void *)uVar1;
    rVar5.cap = (int)puVar4;
    rVar5 = runtime_growslice((runtime__type *)&DAT_00225720,rVar5,cap);
    uVar3 = rVar5.len;
    cap = local_28;
    puVar4 = local_38;
  }
  runtime_memmove();
  (p_spill->buf).len = uVar1;
  (p_spill->buf).cap = cap;
  if (runtime_writeBarrier._0_4_ == 0) {
    (p_spill->buf).array = puVar4;
  }
  else {
    runtime_gcWriteBarrier();
  }
  mVar6.err.tab = (runtime_itab *)uVar3;
  mVar6.ret = b_spill.len;
  mVar6.err.data = pvVar2;
  return mVar6;
}

