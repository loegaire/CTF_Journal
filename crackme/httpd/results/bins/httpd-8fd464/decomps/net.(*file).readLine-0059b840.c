
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*file).readLine(net.file * f, string s, bool ok) */

multireturn_string_bool__conflict4 net___file__readLine(net_file *f)

{
  long lVar1;
  long lVar2;
  os_File *poVar3;
  char cVar4;
  ulong uVar5;
  int in_R8;
  long in_FS_OFFSET;
  bool bVar6;
  __uint8 buf;
  io_Reader r;
  multireturn_string_bool__conflict4 mVar7;
  multireturn_string_bool__conflict4 mVar8;
  net_file *f_spill;
  bool local_60;
  ulong local_50;
  long local_38;
  runtime_itab *local_30;
  void *local_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  mVar7 = net___file__getLineFromData(f_spill);
  mVar7.s.str = (uint8 *)(local_50 & 0xff);
  if ((char)local_50 != '\0') {
    mVar7.ok = local_60;
    return mVar7;
  }
  lVar1 = (f_spill->data).len;
  lVar2 = (f_spill->data).cap;
  if (lVar1 < lVar2) {
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: error err@[???] */
    poVar3 = f_spill->file;
    uVar5 = lVar2 - lVar1;
    buf.len = (int)go_itab__os_File_io_Reader;
    buf.array = (uint8 *)lVar1;
    buf.cap = uVar5;
    r.data = (f_spill->data).array;
    r.tab = (runtime_itab *)f_spill;
    io_ReadAtLeast(r,buf,in_R8);
    if (-1 < local_38) {
      if ((ulong)(f_spill->data).cap < (ulong)(lVar1 + local_38)) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      (f_spill->data).len = lVar1 + local_38;
    }
    local_50._0_1_ = (char)uVar5;
    local_60 = SUB81(local_28,0);
    bVar6 = local_60;
    if (io_EOF.tab == local_30) {
      runtime_ifaceeq(local_30,f_spill,local_28);
      cVar4 = (char)local_50;
    }
    else {
      cVar4 = '\0';
      local_60 = (bool)(char)poVar3;
    }
    local_50 = uVar5;
    if (cVar4 == '\0') {
      if (io_ErrUnexpectedEOF.tab == local_30) {
        runtime_ifaceeq(local_30,f_spill,local_28);
        local_60 = bVar6;
      }
      else {
        local_50._0_1_ = '\0';
      }
      bVar6 = (char)local_50 == '\0';
      if (bVar6) goto LAB_0059b9ba;
    }
    f_spill->atEOF = true;
  }
LAB_0059b9ba:
  mVar7 = net___file__getLineFromData(f_spill);
  mVar8.s.len = mVar7.s.len;
  mVar8.s.str = (uint8 *)(local_50 & 0xff);
  mVar8.ok = local_60;
  return mVar8;
}

