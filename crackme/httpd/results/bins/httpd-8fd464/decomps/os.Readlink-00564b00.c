
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.Readlink(string name, string ~r1, error ~r2) */

multireturn_string_error_ os_Readlink(string name)

{
  runtime__type *et;
  uint8 *extraout_RAX;
  uint8 *extraout_RAX_00;
  runtime__type *prVar1;
  uint8 *puVar2;
  uint8 *in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string sVar3;
  __uint8 buf;
  multireturn_string_error_ mVar4;
  multireturn_string_error_ mVar5;
  string name_spill;
  runtime__type *local_50;
  runtime__type *local_40;
  uint8 *local_38;
  uint8 *local_30;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int len@[???]
                       Unresolved local var: int n@[???]
                       Unresolved local var: []uint8 b@[???]
                       Unresolved local var: error e@[???] */
  prVar1 = (runtime__type *)0x80;
  puVar2 = (uint8 *)name.len;
  while( true ) {
    et = prVar1;
    runtime_makeslice(et,(int)puVar2,0x225720);
    do {
      sVar3.len = (int)et;
      sVar3.str = (uint8 *)local_50;
      buf.len = (int)in_RDI;
      buf.array = name_spill.str;
      buf.cap = (int)in_RSI;
      syscall_Readlink(sVar3,buf);
      prVar1 = local_40;
      if ((long)local_40 < 0) {
        prVar1 = (runtime__type *)0x0;
      }
      in_RSI = local_30;
      in_RDI = local_38;
    } while (((local_38 != (uint8 *)0x0) && (*(undefined **)(local_38 + 8) == &DAT_002463a0)) &&
            (*(long *)local_30 == 4));
    if (local_38 != (uint8 *)0x0) break;
    if ((long)prVar1 < (long)et) {
      if (et < prVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      sVar3 = runtime_slicebytetostring((runtime_tmpBuf *)local_50,local_30,(int)prVar1);
      mVar4.~r1.len = sVar3.len;
      mVar4.~r1.str = (uint8 *)et;
      mVar4.~r2.data = local_38;
      mVar4.~r2.tab = (runtime_itab *)et;
      return mVar4;
    }
    prVar1 = (runtime__type *)((long)et << 1);
    puVar2 = local_30;
    local_50 = et;
  }
  puVar2 = local_38;
  runtime_newobject((runtime__type *)&DAT_00257220);
  *(undefined8 *)(name_spill.len + 8) = 8;
  *(undefined **)name_spill.len = &DAT_0028cc02;
  *(int *)(name_spill.len + 0x18) = name_spill.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(uint8 **)(name_spill.len + 0x10) = name_spill.str;
  }
  else {
    puVar2 = (uint8 *)(name_spill.len + 0x10);
    runtime_gcWriteBarrierCX();
    name_spill.len = (int)extraout_RAX;
  }
  *(uint8 **)(name_spill.len + 0x20) = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(uint8 **)(name_spill.len + 0x28) = local_30;
  }
  else {
    puVar2 = (uint8 *)(name_spill.len + 0x28);
    runtime_gcWriteBarrierCX();
    name_spill.len = (int)extraout_RAX_00;
  }
  mVar5.~r1.len = (int)local_30;
  mVar5.~r1.str = (uint8 *)name_spill.len;
  mVar5.~r2.data = puVar2;
  mVar5.~r2.tab = (runtime_itab *)go_itab__io_fs_PathError_error;
  return mVar5;
}

