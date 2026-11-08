
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.Errorf(string format, []interface_{} a, error ~r2) */

error fmt_Errorf(string format,__interface___ a)

{
  void *pvVar1;
  fmt_pp *extraout_RAX;
  int iVar3;
  int iVar4;
  runtime_itab *n;
  int in_R8;
  long in_FS_OFFSET;
  __interface___ a_00;
  string sVar5;
  error eVar6;
  string format_spill;
  __interface___ a_spill;
  fmt_pp *local_60;
  runtime_itab *prVar2;
  
  iVar3 = a.cap;
  iVar4 = a.len;
  sVar5.str = (uint8 *)format.len;
                    /* Unresolved local var: fmt.pp * p@[???]
                       Unresolved local var: string s@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  fmt_newPrinter();
  local_60->wrapErrs = true;
  a_00.len = iVar3;
  a_00.array = (interface___ *)iVar4;
  a_00.cap = in_R8;
  sVar5.len = a_spill.cap;
  fmt___pp__doPrintf(local_60,sVar5,a_00);
  n = (runtime_itab *)(local_60->buf).array;
  sVar5 = runtime_slicebytetostring((runtime_tmpBuf *)local_60,sVar5.str,(int)n);
  prVar2 = (runtime_itab *)sVar5.len;
  if ((local_60->wrappedErr).tab == (runtime_itab *)0x0) {
    runtime_newobject((runtime__type *)&DAT_00241ea0);
    n->_type = (runtime__type *)a_spill.len;
    if (runtime_writeBarrier._0_4_ == 0) {
      n->inter = (runtime_interfacetype *)a_spill.array;
    }
    else {
      runtime_gcWriteBarrier();
    }
  }
  else {
    runtime_newobject((runtime__type *)&DAT_0024aa20);
    n->_type = (runtime__type *)a_spill.len;
    if (runtime_writeBarrier._0_4_ == 0) {
      n->inter = (runtime_interfacetype *)a_spill.array;
    }
    else {
      runtime_gcWriteBarrier();
    }
    pvVar1 = (local_60->wrappedErr).data;
    *(runtime_itab **)&n->hash = (local_60->wrappedErr).tab;
    if (runtime_writeBarrier._0_4_ == 0) {
      n->fun[0] = (uintptr)pvVar1;
    }
    else {
      runtime_gcWriteBarrierCX();
      local_60 = extraout_RAX;
      prVar2 = n;
    }
  }
  fmt___pp__free(local_60);
  eVar6.data = prVar2;
  eVar6.tab = n;
  return eVar6;
}

