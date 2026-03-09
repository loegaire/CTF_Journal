
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_goargs(void)

{
  uint8 *puVar1;
  string *psVar2;
  int iVar3;
  runtime__type *et;
  uint8 *s;
  ulong uVar4;
  int unaff_RBX;
  long in_FS_OFFSET;
  string *local_30;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  et = (runtime__type *)(long)runtime_argc;
  runtime_makeslice(et,unaff_RBX,0x225520);
  runtime_argslice.len = (int)runtime_argc;
  runtime_argslice.cap = runtime_argslice.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_argslice.array = local_30;
  }
  else {
    runtime_gcWriteBarrierCX();
  }
  s = (uint8 *)0x0;
                    /* Unresolved local var: int32 i@[???]
                       Unresolved local var: uint8 * ~R0@[???] */
  while( true ) {
    iVar3 = (int)s;
    if (runtime_argc <= iVar3) {
      return;
    }
    puVar1 = runtime_argv[iVar3];
                    /* Unresolved local var: runtime.stringStruct ss@[???]
                       Unresolved local var: string s@[???] */
    runtime_findnull(s);
    psVar2 = runtime_argslice.array;
    uVar4 = (ulong)iVar3;
    if ((ulong)runtime_argslice.len <= uVar4) break;
    runtime_argslice.array[uVar4].len = (int)et;
    if (runtime_writeBarrier._0_4_ == 0) {
      psVar2[uVar4].str = puVar1;
    }
    else {
      runtime_gcWriteBarrierDX();
    }
    s = (uint8 *)(ulong)(iVar3 + 1);
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

