
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.SplitHostPort(string hostport, string host, string port, error
   err) */

multireturn_string_string_error__conflict1 net_SplitHostPort(string hostport)

{
  undefined8 *extraout_RAX;
  undefined8 *extraout_RAX_00;
  undefined8 *puVar1;
  undefined8 *extraout_RAX_01;
  int extraout_RAX_02;
  int extraout_RAX_03;
  int extraout_RAX_04;
  int extraout_RAX_05;
  undefined8 *extraout_RAX_06;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 *in_RDI;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 in_R8;
  char *pcVar8;
  long in_FS_OFFSET;
  multireturn_string_string_error__conflict1 mVar9;
  multireturn_string_string_error__conflict1 mVar10;
  multireturn_string_string_error__conflict1 mVar11;
  multireturn_string_string_error__conflict1 mVar12;
  multireturn_string_string_error__conflict1 mVar13;
  multireturn_string_string_error__conflict1 mVar14;
  multireturn_string_string_error__conflict1 mVar15;
  multireturn_string_string_error__conflict1 mVar16;
  multireturn_string_string_error__conflict1 mVar17;
  char *in_stack_00000008;
  int i;
  undefined8 *local_40;
  ulong local_30;
  
                    /* Unresolved local var: int j@[???]
                       Unresolved local var: int k@[???]
                       Unresolved local var: int i@[???] */
  while (puVar3 = (undefined8 *)i,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  do {
    puVar1 = puVar3;
    mVar9.host.len = (undefined8 *)((long)puVar1 + -1);
    if ((long)mVar9.host.len < 0) goto LAB_005946bc;
    in_RDI = (undefined8 *)(ulong)(byte)in_stack_00000008[(long)mVar9.host.len];
    puVar3 = mVar9.host.len;
  } while (in_stack_00000008[(long)mVar9.host.len] != 0x3a);
  if (-1 < (long)mVar9.host.len) {
    if (i == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (*in_stack_00000008 == '[') {
      pcVar5 = in_stack_00000008;
                    /* Unresolved local var: int end@[???] */
      internal_bytealg_IndexByteString();
      if ((long)local_30 < 0) {
        runtime_newobject((runtime__type *)&DAT_0024c8c0);
        *(undefined8 *)(i + 8) = 0x16;
        *(undefined **)i = &DAT_0029d363;
        *(int *)(i + 0x18) = i;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(char **)(i + 0x10) = in_stack_00000008;
        }
        else {
          in_RDI = (undefined8 *)(i + 0x10);
          runtime_gcWriteBarrierCX();
          i = extraout_RAX_05;
        }
        mVar16.host.len = (int)mVar9.host.len;
        mVar16.host.str = (uint8 *)i;
        mVar16.err.tab = (runtime_itab *)pcVar5;
        mVar16.port.len = (int)in_RDI;
        mVar16.port.str = go_itab__net_AddrError_error;
        mVar16.err.data = (void *)in_R8;
        return mVar16;
      }
      puVar3 = (undefined8 *)(local_30 + 1);
      if ((undefined8 *)i == puVar3) {
        runtime_newobject((runtime__type *)&DAT_0024c8c0);
        *(undefined8 *)(i + 8) = 0x17;
        *(undefined **)i = &DAT_0029ddaf;
        *(int *)(i + 0x18) = i;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(char **)(i + 0x10) = in_stack_00000008;
        }
        else {
          in_RDI = (undefined8 *)(i + 0x10);
          runtime_gcWriteBarrierCX();
          i = extraout_RAX_04;
        }
        mVar15.host.len = (int)mVar9.host.len;
        mVar15.host.str = (uint8 *)i;
        mVar15.err.tab = (runtime_itab *)pcVar5;
        mVar15.port.len = (int)in_RDI;
        mVar15.port.str = go_itab__net_AddrError_error;
        mVar15.err.data = (void *)in_R8;
        return mVar15;
      }
      if (mVar9.host.len != puVar3) {
        if ((ulong)i <= puVar3) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        if (in_stack_00000008[local_30 + 1] != ':') {
          runtime_newobject((runtime__type *)&DAT_0024c8c0);
          *(undefined8 *)(i + 8) = 0x17;
          *(undefined **)i = &DAT_0029ddaf;
          *(int *)(i + 0x18) = i;
          if (runtime_writeBarrier._0_4_ == 0) {
            *(char **)(i + 0x10) = in_stack_00000008;
          }
          else {
            in_RDI = (undefined8 *)(i + 0x10);
            runtime_gcWriteBarrierCX();
            i = extraout_RAX_03;
          }
          mVar14.host.len = (int)mVar9.host.len;
          mVar14.host.str = (uint8 *)i;
          mVar14.err.tab = (runtime_itab *)pcVar5;
          mVar14.port.len = (int)in_RDI;
          mVar14.port.str = go_itab__net_AddrError_error;
          mVar14.err.data = (void *)in_R8;
          return mVar14;
        }
        runtime_newobject((runtime__type *)&DAT_0024c8c0);
        *(undefined8 *)(i + 8) = 0x1a;
        *(undefined **)i = &DAT_0029f715;
        *(int *)(i + 0x18) = i;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(char **)(i + 0x10) = in_stack_00000008;
        }
        else {
          in_RDI = (undefined8 *)(i + 0x10);
          runtime_gcWriteBarrierCX();
          i = extraout_RAX_02;
        }
        mVar13.host.len = (int)mVar9.host.len;
        mVar13.host.str = (uint8 *)i;
        mVar13.err.tab = (runtime_itab *)pcVar5;
        mVar13.port.len = (int)in_RDI;
        mVar13.port.str = go_itab__net_AddrError_error;
        mVar13.err.data = (void *)in_R8;
        return mVar13;
      }
      if ((ulong)i < local_30) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      puVar6 = (undefined8 *)(local_30 - 1);
      pcVar5 = in_stack_00000008 + (-(long)puVar6 >> 0x3f & 1);
      uVar2 = 1;
    }
    else {
      if ((ulong)i < mVar9.host.len) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      pcVar5 = in_stack_00000008;
      internal_bytealg_IndexByteString();
      if (-1 < (long)local_30) {
        runtime_newobject((runtime__type *)&DAT_0024c8c0);
        *(undefined8 *)((long)puVar1 + 7) = 0x1a;
        *mVar9.host.len = &DAT_0029f715;
        *(int *)((long)puVar1 + 0x17) = i;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(char **)((long)puVar1 + 0xf) = in_stack_00000008;
          puVar3 = mVar9.host.len;
        }
        else {
          in_RDI = (undefined8 *)((long)puVar1 + 0xf);
          runtime_gcWriteBarrierCX();
          puVar3 = extraout_RAX;
        }
        mVar9.host.str = (uint8 *)puVar3;
        mVar9.err.tab = (runtime_itab *)pcVar5;
        mVar9.port.len = (int)in_RDI;
        mVar9.port.str = go_itab__net_AddrError_error;
        mVar9.err.data = (void *)in_R8;
        return mVar9;
      }
      uVar2 = 0;
      puVar3 = (undefined8 *)0x0;
      pcVar5 = in_stack_00000008;
      puVar6 = mVar9.host.len;
    }
    if ((ulong)i < uVar2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    puVar4 = (undefined8 *)(i - uVar2);
    puVar7 = puVar6;
    pcVar8 = in_stack_00000008;
    internal_bytealg_IndexByteString();
    if (-1 < (long)local_30) {
      runtime_newobject((runtime__type *)&DAT_0024c8c0);
      puVar4[1] = 0x19;
      *puVar4 = &DAT_0029ef65;
      puVar4[3] = i;
      if (runtime_writeBarrier._0_4_ == 0) {
        puVar4[2] = in_stack_00000008;
        puVar3 = puVar4;
      }
      else {
        puVar7 = puVar4 + 2;
        runtime_gcWriteBarrierCX();
        puVar3 = extraout_RAX_01;
      }
      mVar12.host.len = (int)puVar4;
      mVar12.host.str = (uint8 *)puVar3;
      mVar12.err.tab = (runtime_itab *)pcVar5;
      mVar12.port.len = (int)puVar7;
      mVar12.port.str = go_itab__net_AddrError_error;
      mVar12.err.data = pcVar8;
      return mVar12;
    }
    if ((ulong)i < puVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    puVar3 = (undefined8 *)(i - (long)puVar3);
    internal_bytealg_IndexByteString();
    if (-1 < (long)local_30) {
      runtime_newobject((runtime__type *)&DAT_0024c8c0);
      puVar3[1] = 0x19;
      *puVar3 = &DAT_0029ef7e;
      puVar3[3] = i;
      if (runtime_writeBarrier._0_4_ == 0) {
        puVar3[2] = in_stack_00000008;
        puVar1 = puVar3;
      }
      else {
        puVar7 = puVar3 + 2;
        runtime_gcWriteBarrierCX();
        puVar1 = extraout_RAX_00;
      }
      mVar11.host.len = (int)puVar3;
      mVar11.host.str = (uint8 *)puVar1;
      mVar11.err.tab = (runtime_itab *)pcVar5;
      mVar11.port.len = (int)puVar7;
      mVar11.port.str = go_itab__net_AddrError_error;
      mVar11.err.data = pcVar8;
      return mVar11;
    }
    if ((ulong)i < puVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    mVar10.port.str = -((i - (long)mVar9.host.len) + -1) >> 0x3f & (ulong)puVar1;
    mVar10.host.str = in_stack_00000008 + mVar10.port.str;
    mVar10.host.len = (int)puVar6;
    mVar10.err.tab = (runtime_itab *)pcVar5;
    mVar10.port.len = (int)puVar7;
    mVar10.err.data = pcVar8;
    return mVar10;
  }
LAB_005946bc:
  pcVar5 = in_stack_00000008;
  runtime_newobject((runtime__type *)&DAT_0024c8c0);
  local_40[1] = 0x17;
  *local_40 = &DAT_0029ddaf;
  local_40[3] = i;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_40[2] = in_stack_00000008;
  }
  else {
    in_RDI = local_40 + 2;
    runtime_gcWriteBarrierCX();
    local_40 = extraout_RAX_06;
  }
  mVar17.host.len = (int)mVar9.host.len;
  mVar17.host.str = (uint8 *)local_40;
  mVar17.err.tab = (runtime_itab *)pcVar5;
  mVar17.port.len = (int)in_RDI;
  mVar17.port.str = go_itab__net_AddrError_error;
  mVar17.err.data = (void *)in_R8;
  return mVar17;
}

