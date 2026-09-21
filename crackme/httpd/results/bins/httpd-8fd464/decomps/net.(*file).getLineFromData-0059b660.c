
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*file).getLineFromData(net.file * f, string s, bool ok) */

multireturn_string_bool__conflict4 net___file__getLineFromData(net_file *f)

{
  long lVar1;
  uint8 *puVar2;
  uint8 *extraout_RAX;
  uint8 *puVar3;
  uint8 *ptr;
  long lVar4;
  long in_FS_OFFSET;
  string sVar5;
  multireturn_string_bool__conflict4 mVar6;
  multireturn_string_bool__conflict4 mVar7;
  net_file *f_spill;
  undefined1 local_48;
  
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: []uint8 data@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  puVar3 = (f_spill->data).array;
  lVar1 = (f_spill->data).len;
  ptr = (uint8 *)(f_spill->data).cap;
  lVar4 = 0;
  while( true ) {
    if (lVar1 <= lVar4) {
      if ((f_spill->atEOF == false) || (lVar1 < 1)) {
        local_48 = false;
        puVar3 = (uint8 *)0x0;
      }
      else {
        sVar5 = runtime_slicebytetostring((runtime_tmpBuf *)f_spill,ptr,(int)puVar3);
        ptr = (uint8 *)sVar5.len;
        (f_spill->data).len = 0;
        puVar3 = (uint8 *)0x1;
      }
      mVar7.s.len = (int)ptr;
      mVar7.s.str = puVar3;
      mVar7.ok = (bool)local_48;
      return mVar7;
    }
    if (puVar3[lVar4] == 10) break;
    lVar4 = lVar4 + 1;
  }
                    /* Unresolved local var: int n@[???] */
  runtime_slicebytetostring((runtime_tmpBuf *)f_spill,ptr,(int)puVar3);
  puVar2 = (uint8 *)((lVar1 - lVar4) + -1);
  mVar6.s.len = lVar4 + 1U & -(long)(ptr + (-1 - lVar4)) >> 0x3f;
  if (mVar6.s.len != 0) {
    runtime_memmove();
  }
  if (puVar2 <= ptr) {
    (f_spill->data).len = (int)puVar2;
    (f_spill->data).cap = (int)ptr;
    if (runtime_writeBarrier._0_4_ == 0) {
      (f_spill->data).array = puVar3;
    }
    else {
      runtime_gcWriteBarrierCX();
      puVar2 = extraout_RAX;
    }
    mVar6.s.str = puVar2;
    mVar6.ok = SUB81(puVar3,0);
    return mVar6;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAcap();
}

