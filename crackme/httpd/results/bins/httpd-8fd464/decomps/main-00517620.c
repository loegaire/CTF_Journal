
/* WARNING: Removing unreachable block (ram,0x005176af) */
/* WARNING: Removing unreachable block (ram,0x0051767b) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void main(void)

{
  int *piVar1;
  uint32 *puVar2;
  uint uVar3;
  undefined8 in_RSI;
  undefined4 in_EDI;
  long in_FS_OFFSET;
  undefined1 auStack_ffc8 [65408];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_38;
  undefined4 auStack_30 [2];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  runtime_g0.stack.hi = (uintptr)auStack_30;
  runtime_g0.stack.lo = (uintptr)auStack_ffc8;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar3 = piVar1[1];
  if (*piVar1 != 0) {
    if (((uVar3 == 0x756e6547) && (piVar1[2] == 0x49656e69)) && (piVar1[3] == 0x6c65746e)) {
      runtime_isIntel = true;
      runtime_lfenceBeforeRdtsc = true;
    }
    puVar2 = (uint32 *)cpuid_Version_info(1);
    runtime_processorVersionInfo = *puVar2;
    uVar3 = puVar2[1];
  }
  runtime_g0.stackguard0 = runtime_g0.stack.lo;
  runtime_g0.stackguard1 = runtime_g0.stack.lo;
  uStack_18 = in_RSI;
  uStack_20 = in_EDI;
  if (_cgo_init == (void *)0x0) {
    ppuStack_38 = (undefined **)0x517700;
    runtime_settls();
    *(undefined8 *)(in_FS_OFFSET + -8) = 0x123;
    if (runtime_m0.tls[0] != 0x123) {
      ppuStack_38 = (undefined **)0x517721;
      runtime_abort();
    }
  }
  else {
    ppuStack_38 = (undefined **)0x5176da;
    runtime_g0.stack.hi = (uintptr)auStack_30;
    (*_cgo_init)(&runtime_g0,setg_gcc,0,0);
    runtime_g0.stackguard0 = runtime_g0.stack.lo + 0x3a0;
    runtime_g0.stackguard1 = runtime_g0.stackguard0;
  }
  *(runtime_g **)(in_FS_OFFSET + -8) = &runtime_g0;
  runtime_m0.g0 = &runtime_g0;
  runtime_g0.m = &runtime_m0;
  ppuStack_38 = (undefined **)0x517745;
  runtime_check();
  auStack_30[0] = uStack_20;
  uStack_28 = uStack_18;
  ppuStack_38 = (undefined **)0x51775b;
  runtime_args((int32)uStack_18,(uint8 **)(ulong)uVar3);
  ppuStack_38 = (undefined **)0x517760;
  runtime_osinit();
  ppuStack_38 = (undefined **)0x517765;
  runtime_schedinit();
  ppuStack_38 = &runtime_mainPC;
  uStack_40 = 0;
  uStack_48 = 0x517774;
  runtime_newproc(0x2f5788,(runtime_funcval *)(ulong)uVar3);
  ppuStack_38 = (undefined **)0x51777b;
  runtime_mstart();
  ppuStack_38 = (undefined **)0x517780;
  runtime_abort();
  return;
}

