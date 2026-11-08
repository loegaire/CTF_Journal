
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.pollWork(bool ~r0) */

bool runtime_pollWork(void)

{
  long lVar1;
  undefined1 extraout_AL;
  uint uVar2;
  undefined8 in_RAX;
  ulong delay;
  undefined8 extraout_RAX;
  long in_FS_OFFSET;
  long local_18;
  runtime_gList local_10;
  
                    /* Unresolved local var: runtime.p * p@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    in_RAX = extraout_RAX;
  }
  if (runtime_sched.runqsize != 0) {
    return SUB81(in_RAX,0);
  }
  lVar1 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
                    /* Unresolved local var: uint32 head@[???]
                       Unresolved local var: uint32 tail@[???]
                       Unresolved local var: uintptr runnext@[???] */
  do {
  } while (*(int *)(lVar1 + 0x5f4) != *(int *)(lVar1 + 0x5f4));
  if ((*(int *)(lVar1 + 0x5f4) == *(int *)(lVar1 + 0x5f0)) && (*(long *)(lVar1 + 0xdf8) == 0)) {
    if (runtime_netpollInited == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT31((int3)(runtime_netpollWaiters >> 8),runtime_netpollWaiters != 0);
    }
    delay = (ulong)uVar2;
    if (((char)uVar2 != '\0') && (runtime_sched.lastpoll != 0)) {
                    /* Unresolved local var: runtime.gList list@[???] */
      runtime_netpoll(delay);
      delay = 0;
      if (local_18 != 0) {
        runtime_injectglist(&local_10);
        return (bool)extraout_AL;
      }
    }
    return SUB81(delay,0);
  }
  return SUB81(lVar1,0);
}

