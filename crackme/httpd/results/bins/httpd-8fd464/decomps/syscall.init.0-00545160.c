
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syscall_init_0(void)

{
  char cVar1;
  uint8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int unaff_RBX;
  long in_FS_OFFSET;
  string name;
  long local_28;
  long local_20;
  
                    /* Unresolved local var: string conf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  name.len = unaff_RBX;
  name.str = &DAT_002938da;
  syscall_Sysctl(name);
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???] */
                    /* Unresolved local var: string s@[???] */
  uVar3 = 0;
  uVar5 = 0;
  do {
    if (local_20 <= (long)uVar3) {
      return;
    }
    if (*(char *)(local_28 + uVar3) == '\n') {
      if (uVar3 < uVar5) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      lVar4 = uVar3 - uVar5;
      uVar5 = -lVar4 >> 0x3f & uVar5;
      if ((((7 < lVar4) && (*(int *)(local_28 + uVar5) == 0x6863616d)) &&
          (*(short *)(local_28 + 4 + uVar5) == 0x6e69)) && (*(char *)(local_28 + 6 + uVar5) == 'e'))
      {
        puVar2 = (uint8 *)(local_28 + uVar5 + 7);
        syscall_freebsdConfArch.len = lVar4 + -7;
                    /* Unresolved local var: int k@[???] */
        if ((0 < syscall_freebsdConfArch.len) &&
           ((cVar1 = *(char *)(local_28 + 7 + uVar5), cVar1 == ' ' || (cVar1 == '\t')))) {
          syscall_freebsdConfArch.len = lVar4 + -8;
          puVar2 = puVar2 + (-syscall_freebsdConfArch.len >> 0x3f & 1);
        }
        if (runtime_writeBarrier._0_4_ == 0) {
          syscall_freebsdConfArch.str = puVar2;
          return;
        }
        runtime_gcWriteBarrier();
        return;
      }
      uVar5 = uVar3 + 1;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}

