
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_init_0(void)

{
  uint uVar1;
  bool bVar2;
  
                    /* Unresolved local var: uint32 processor@[???]
                       Unresolved local var: bool isIntelBridgeFamily@[???] */
  uVar1 = runtime_processorVersionInfo & 0xfff3ff0;
  if ((((runtime_isIntel) && (uVar1 == 0x206a0)) || (uVar1 == 0x206d0)) || (uVar1 == 0x306a0)) {
    bVar2 = true;
  }
  else {
    bVar2 = uVar1 == 0x306e0;
  }
  if (internal_cpu_X86.HasAVX) {
    runtime_useAVXmemmove = (bool)(bVar2 ^ 1);
  }
  else {
    runtime_useAVXmemmove = false;
  }
  return;
}

