
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_needm(void)

{
  long *plVar1;
  bool exiting;
  bool nilokay;
  uint32 newval;
  uint32 unaff_EBX;
  long in_FS_OFFSET;
  undefined1 local_7ff8 [928];
  undefined1 auStack_7c58 [31760];
  undefined *puStack_48;
  ulong local_40;
  uint8 *local_38;
  undefined8 *local_30;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 *local_10;
  undefined1 *puVar2;
  
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: runtime.sigset sigmask@[???] */
  if ((runtime_iscgo) && (!runtime_cgoHasExtraM)) {
    if (runtime_earlycgocallback.len == 0) {
                    /* WARNING: Subroutine does not return */
      puStack_48 = &UNK_004ed89c;
      runtime_panicIndex();
    }
    local_40 = 2;
    local_38 = runtime_earlycgocallback.array;
    local_30 = (undefined8 *)CONCAT44(local_30._4_4_,(int)runtime_earlycgocallback.len);
    puStack_48 = (undefined *)0x4ed78f;
    runtime_write1();
    local_40 = CONCAT44(local_40._4_4_,1);
    puStack_48 = (undefined *)0x4ed79b;
    runtime_exit();
  }
  local_30 = &local_20;
  local_20 = 0;
  uStack_18 = 0;
  local_40 = CONCAT44(local_40._4_4_,3);
  local_38 = (uint8 *)0x0;
  puStack_48 = (undefined *)0x4ed7c5;
  runtime_sigprocmask();
  local_40 = local_40 & 0xffffffffffffff00;
  puStack_48 = (undefined *)0x4ed7ce;
  runtime_sigblock(exiting);
  local_40 = local_40 & 0xffffffffffffff00;
  puStack_48 = (undefined *)0x4ed7d7;
  runtime_lockextra(nilokay);
  local_10 = (undefined8 *)local_38;
  *(bool *)((long)local_38 + 0x130) = *(long *)((long)local_38 + 0x168) == 0;
  runtime_extraMCount = runtime_extraMCount - 1;
  runtime_extram = *(uintptr *)((long)local_38 + 0x168);
  LOCK();
  UNLOCK();
  *(undefined8 *)((long)local_38 + 0x80) = local_20;
  *(undefined8 *)((long)local_38 + 0x88) = uStack_18;
  local_40 = *(ulong *)local_38;
  puStack_48 = (undefined *)0x4ed81f;
  runtime_setg();
  plVar1 = *(long **)(in_FS_OFFSET + -8);
  plVar1[1] = (long)&stack0x00000408;
  *plVar1 = (long)local_7ff8;
  puVar2 = auStack_7c58;
  plVar1[2] = (long)puVar2;
  puStack_48 = (undefined *)0x4ed852;
  runtime_asminit();
  newval = (uint32)puVar2;
  puStack_48 = (undefined *)0x4ed857;
  runtime_minit();
  local_40 = local_10[0x19];
  local_38 = (uint8 *)0x300000006;
  puStack_48 = (undefined *)0x4ed87b;
  runtime_casgstatus((runtime_g *)0x300000006,unaff_EBX,newval);
  LOCK();
  runtime_sched.ngsys = runtime_sched.ngsys - 1;
  UNLOCK();
  return;
}

