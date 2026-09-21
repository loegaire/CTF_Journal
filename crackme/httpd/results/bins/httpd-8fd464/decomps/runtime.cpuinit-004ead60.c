
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_cpuinit(void)

{
  int iVar1;
  uint8 *puVar2;
  int iVar3;
  int unaff_RBX;
  long in_FS_OFFSET;
  string sVar4;
  undefined *local_40;
  ulong local_38;
  byte local_30;
  
                    /* Unresolved local var: string env@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int32 n@[???] */
  internal_cpu_DebugOptions = true;
  iVar1 = 0;
  while (runtime_argv[iVar1 + runtime_argc + 1] != (uint8 *)0x0) {
    iVar1 = iVar1 + 1;
  }
  iVar3 = 0;
  do {
    if (iVar1 <= iVar3) {
      puVar2 = (uint8 *)0x0;
LAB_004eae90:
      sVar4.len = unaff_RBX;
      sVar4.str = puVar2;
      internal_cpu_Initialize(sVar4);
      runtime_x86HasPOPCNT = internal_cpu_X86.HasPOPCNT;
      runtime_x86HasSSE41 = internal_cpu_X86.HasSSE41;
      runtime_x86HasFMA = internal_cpu_X86.HasFMA;
      runtime_armHasVFPv4 = internal_cpu_ARM.HasVFPv4;
      runtime_arm64HasATOMICS = internal_cpu_ARM64.HasATOMICS;
      return;
    }
                    /* Unresolved local var: uint8 * p@[???]
                       Unresolved local var: string s@[???]
                       Unresolved local var: uint8 * ~R0@[???] */
    runtime_findnull(runtime_argv[runtime_argc + iVar3 + 1]);
    if ((long)local_40 < 8) {
      puVar2 = (uint8 *)0x0;
    }
    else {
      local_40 = &DAT_0028ba4a;
      local_38 = 8;
      runtime_memequal();
      puVar2 = (uint8 *)(ulong)local_30;
    }
    if ((char)puVar2 != '\0') {
      sVar4 = runtime_gostring(puVar2);
      unaff_RBX = sVar4.len;
      if (local_38 < 8) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      puVar2 = local_40 + ((long)-(local_38 - 8) >> 0x3f & 8);
      goto LAB_004eae90;
    }
                    /* Unresolved local var: int32 i@[???] */
    iVar3 = iVar3 + 1;
  } while( true );
}

