
/* WARNING: Unknown calling convention */

void runtime_greyobject(uintptr obj,uintptr base,uintptr off,runtime_mspan *span,runtime_gcWork *gcw
                       ,uintptr objIndex)

{
  int *piVar1;
  runtime_workbuf *prVar2;
  ulong uVar3;
  runtime_gcWork *w;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  uintptr obj_00;
  byte *off_00;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string label;
  string label_00;
  string s_03;
  string s_04;
  uintptr obj_spill;
  uintptr base_spill;
  uintptr off_spill;
  runtime_mspan *span_spill;
  runtime_gcWork *gcw_spill;
  runtime_markBits mbits;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((obj_spill & 7) != 0) {
    s_04.len = base;
    s_04.str = &DAT_002a437c;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_04);
  }
                    /* Unresolved local var: uint8 * bytep@[???] */
  uVar4 = (ulong)mbits.bytep >> 3;
  obj_00 = (ulong)mbits.bytep & 7;
  off_00 = span_spill->gcmarkBits + uVar4;
  bVar6 = (byte)(1 << (sbyte)obj_00);
  if (runtime_useCheckmark == false) {
                    /* Unresolved local var: runtime.heapArena * arena@[???]
                       Unresolved local var: uintptr pageIdx@[???] */
    if (((0 < runtime_debug.gccheckmark) && ((uint8 *)span_spill->freeindex <= mbits.bytep)) &&
       ((span_spill->allocBits[uVar4] & bVar6) == 0)) {
      runtime_printlock();
      s.len = (int)span_spill;
      s.str = (uint8 *)0x2a0f6c;
      runtime_printstring(s);
      runtime_printhex(obj_spill);
      s_00.len = (int)span_spill;
      s_00.str = &DAT_00292776;
      runtime_printstring(s_00);
      runtime_printhex(base_spill);
      s_01.len = (int)span_spill;
      s_01.str = (uint8 *)&net__stmp_20;
      runtime_printstring(s_01);
      runtime_printhex(off_spill);
      s_02.len = (int)span_spill;
      s_02.str = &DAT_00287783;
      runtime_printstring(s_02);
      runtime_printunlock();
      label.len = (int)span_spill;
      label.str = (uint8 *)off_spill;
      runtime_gcDumpObject(label,obj_00,(uintptr)off_00);
      label_00.len = (int)span_spill;
      label_00.str = (uint8 *)obj_spill;
      runtime_gcDumpObject(label_00,obj_00,(uintptr)off_00);
      *(undefined1 *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0x131) = 2;
      s_03.len = (int)span_spill;
      s_03.str = &DAT_0029b5e9;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_03);
    }
    if ((span_spill->gcmarkBits[uVar4] & bVar6) != 0) {
      return;
    }
    LOCK();
    *off_00 = *off_00 | bVar6;
    UNLOCK();
    uVar4 = span_spill->startAddr;
    uVar3 = uVar4 + 0x800000000000 >> 0x1a;
    if (0x3fffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    uVar5 = uVar4 >> 0x10 & 0x3ff;
    bVar6 = (byte)(1 << ((byte)(uVar4 >> 0xd) & 7));
    if (((&DAT_00210400)[(long)((*runtime_mheap_.arenas[0])[uVar3]->bitmap + uVar5)] & bVar6) == 0)
    {
      LOCK();
      (&DAT_00210400)[(long)((*runtime_mheap_.arenas[0])[uVar3]->bitmap + uVar5)] =
           (&DAT_00210400)[(long)((*runtime_mheap_.arenas[0])[uVar3]->bitmap + uVar5)] | bVar6;
      UNLOCK();
    }
    if ((span_spill->spanclass & 1) != 0) {
      gcw_spill->bytesMarked = gcw_spill->bytesMarked + span_spill->elemsize;
      return;
    }
  }
  else {
    runtime_setCheckmark();
    if (local_10 != '\0') {
      return;
    }
  }
  prVar2 = gcw_spill->wbuf1;
  if (prVar2 == (runtime_workbuf *)0x0) {
    w = (runtime_gcWork *)0x0;
  }
  else {
    uVar4 = (prVar2->workbufhdr).nobj;
    if (uVar4 == 0xfd) {
      w = (runtime_gcWork *)0x0;
    }
    else {
      if (0xfc < uVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      prVar2->obj[uVar4] = obj_spill;
      piVar1 = &(prVar2->workbufhdr).nobj;
      *piVar1 = *piVar1 + 1;
      w = (runtime_gcWork *)0x1;
    }
  }
  if ((char)w == '\0') {
    runtime___gcWork__put(w,(uintptr)gcw_spill);
  }
  return;
}

