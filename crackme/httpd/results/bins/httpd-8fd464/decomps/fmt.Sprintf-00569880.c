
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.Sprintf(string format, []interface_{} a, string ~r2) */

string fmt_Sprintf(string format,__interface___ a)

{
  int iVar1;
  int iVar2;
  int in_R8;
  long in_FS_OFFSET;
  string sVar3;
  string sVar4;
  __interface___ a_00;
  string format_spill;
  __interface___ a_spill;
  fmt_pp *local_50;
  
  iVar1 = a.cap;
  iVar2 = a.len;
  sVar3.str = (uint8 *)format.len;
                    /* Unresolved local var: fmt.pp * p@[???]
                       Unresolved local var: string s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  fmt_newPrinter();
  sVar3.len = a_spill.cap;
  a_00.len = iVar1;
  a_00.array = (interface___ *)iVar2;
  a_00.cap = in_R8;
  fmt___pp__doPrintf(local_50,sVar3,a_00);
  sVar3 = runtime_slicebytetostring((runtime_tmpBuf *)local_50,sVar3.str,(int)(local_50->buf).array)
  ;
  sVar4.len = sVar3.len;
  fmt___pp__free((fmt_pp *)a_spill.array);
  sVar4.str = (uint8 *)a_spill.len;
  return sVar4;
}

