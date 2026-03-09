
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_init(void)

{
  uint8 *puVar1;
  runtime__type *extraout_RAX;
  runtime__type *prVar2;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_inf = INFINITY;
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_uint16Type = runtime_uint16Eface._type;
  }
  else {
    runtime_gcWriteBarrier();
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_uint32Type = runtime_uint32Eface._type;
  }
  else {
    runtime_gcWriteBarrier();
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_uint64Type = runtime_uint64Eface._type;
  }
  else {
    runtime_gcWriteBarrier();
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_stringType = runtime_stringEface._type;
  }
  else {
    runtime_gcWriteBarrier();
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_sliceType = runtime_sliceEface._type;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_MemProfileRate = 0x80000;
  if (runtime_disableMemoryProfiling != false) {
    runtime_MemProfileRate = 0;
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_pdType = runtime_pdEface._type;
  }
  else {
    runtime_gcWriteBarrier();
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_abiRegArgsType = runtime_abiRegArgsEface._type;
    prVar2 = runtime_abiRegArgsEface._type;
  }
  else {
    runtime_gcWriteBarrier();
    prVar2 = extraout_RAX;
  }
  runtime__stmp_67._0_4_ = -((int)prVar2->size + 7U & 0xfffffff8);
  runtime__stmp_67._4_4_ = (undefined4)runtime_abiRegArgsType->size;
  runtime__stmp_67._8_4_ = (undefined4)runtime_abiRegArgsType->ptrdata;
  puVar1 = runtime_abiRegArgsType->gcdata;
  if (runtime_writeBarrier._0_4_ != 0) {
    runtime_gcWriteBarrier();
    puVar1 = (uint8 *)runtime__stmp_67._16_8_;
  }
  runtime__stmp_67._16_8_ = puVar1;
  runtime_chansendpc = (uintptr)runtime_chansend;
  runtime_chanrecvpc = (uintptr)runtime_chanrecv;
  return;
}

