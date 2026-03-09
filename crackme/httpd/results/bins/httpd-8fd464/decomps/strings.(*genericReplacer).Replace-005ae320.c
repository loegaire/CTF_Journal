
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.(*genericReplacer).Replace(strings.genericReplacer * r,
   string s, string ~r1) */

string strings___genericReplacer__Replace(strings_genericReplacer *r,string s)

{
  int in_RSI;
  runtime__type *prVar1;
  long in_FS_OFFSET;
  io_Writer w;
  string sVar2;
  multireturn_int_error_ mVar3;
  string s_00;
  strings_genericReplacer *r_spill;
  string s_spill;
  runtime__type *local_48;
  uintptr local_38;
  
  w.tab = (runtime_itab *)s.str;
                    /* Unresolved local var: strings.appendSliceWriter * &buf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_0022b600);
  runtime_makeslice(local_48,(int)w.tab,s_spill.len);
  local_48->ptrdata = 0;
  local_48->hash = (undefined4)s_spill.len;
  local_48->tflag = s_spill.len._4_1_;
  local_48->align = s_spill.len._5_1_;
  local_48->fieldAlign = s_spill.len._6_1_;
  local_48->kind = s_spill.len._7_1_;
  prVar1 = local_48;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_48->size = local_38;
  }
  else {
    runtime_gcWriteBarrier();
  }
  w.data = (void *)s_spill.len;
  s_00.len = in_RSI;
  s_00.str = (uint8 *)prVar1;
  mVar3 = strings___genericReplacer__WriteString((strings_genericReplacer *)s_spill.str,w,s_00);
  sVar2 = runtime_slicebytetostring
                    ((runtime_tmpBuf *)local_48->ptrdata,(uint8 *)mVar3.err.tab,local_48->size);
  sVar2.str = s_spill.str;
  return sVar2;
}

