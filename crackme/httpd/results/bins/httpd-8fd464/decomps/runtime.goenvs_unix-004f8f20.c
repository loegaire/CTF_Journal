
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_goenvs_unix(void)

{
  int iVar1;
  string *psVar2;
  int iVar3;
  runtime__type *et;
  uint8 *p;
  uint8 *cap;
  int extraout_EDX;
  int unaff_RBX;
  ulong uVar4;
  long in_FS_OFFSET;
  string *local_20;
  
                    /* Unresolved local var: int32 n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  et = (runtime__type *)0x0;
  while (iVar1 = (int)et, runtime_argv[iVar1 + runtime_argc + 1] != (uint8 *)0x0) {
    et = (runtime__type *)(ulong)(iVar1 + 1);
  }
  cap = (uint8 *)(long)iVar1;
  runtime_makeslice(et,unaff_RBX,(int)cap);
  runtime_envs.len = (int)cap;
  runtime_envs.cap = (int)cap;
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_envs.array = local_20;
  }
  else {
    runtime_gcWriteBarrier();
  }
  p = (uint8 *)0x0;
                    /* Unresolved local var: int32 i@[???] */
  while( true ) {
    iVar3 = (int)p;
    if (iVar1 <= iVar3) {
      return;
    }
    runtime_gostring(p);
    psVar2 = runtime_envs.array;
    uVar4 = (ulong)iVar3;
    if ((ulong)runtime_envs.len <= uVar4) break;
    runtime_envs.array[uVar4].len = (int)cap;
    if (runtime_writeBarrier._0_4_ == 0) {
      psVar2[uVar4].str = cap;
    }
    else {
      runtime_gcWriteBarrierSI();
      iVar3 = extraout_EDX;
    }
    p = (uint8 *)(ulong)(iVar3 + 1);
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

