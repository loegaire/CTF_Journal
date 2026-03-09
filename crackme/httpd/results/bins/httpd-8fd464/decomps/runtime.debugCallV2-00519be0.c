
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_debugCallV2(void)

{
  code *pcVar1;
  uintptr unaff_retaddr;
  undefined8 local_98;
  undefined8 local_10;
  
  runtime_debugCallCheck(unaff_retaddr);
  if (local_98 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_10 < 0x21) {
    runtime_debugCallWrap(0x517060);
  }
  else if (local_10 < 0x41) {
    runtime_debugCallWrap(0x5170c0);
  }
  else if (local_10 < 0x81) {
    runtime_debugCallWrap(0x517120);
  }
  else if (local_10 < 0x101) {
    runtime_debugCallWrap(0x5171a0);
  }
  else if (local_10 < 0x201) {
    runtime_debugCallWrap(0x517220);
  }
  else if (local_10 < 0x401) {
    runtime_debugCallWrap(0x5172a0);
  }
  else if (local_10 < 0x801) {
    runtime_debugCallWrap(0x517320);
  }
  else if (local_10 < 0x1001) {
    runtime_debugCallWrap(0x5173a0);
  }
  else if (local_10 < 0x2001) {
    runtime_debugCallWrap(0x517420);
  }
  else if (local_10 < 0x4001) {
    runtime_debugCallWrap(0x5174a0);
  }
  else if (local_10 < 0x8001) {
    runtime_debugCallWrap(0x517520);
  }
  else {
    if (0x10000 < local_10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    runtime_debugCallWrap(0x5175a0);
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

