
/* WARNING: Unknown calling convention */

void runtime___mSpanList__remove(runtime_mSpanList *list,runtime_mspan *span)

{
  runtime_mSpanList *p;
  uint64 v;
  runtime_mspan *p_00;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  runtime_mSpanList *list_spill;
  runtime_mspan *span_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  p = span_spill->list;
  if (list_spill == p) {
    if (list_spill->first == span_spill) {
      list_spill->first = span_spill->next;
    }
    else {
      span_spill->prev->next = span_spill->next;
    }
    if (list_spill->last == span_spill) {
      list_spill->last = span_spill->prev;
    }
    else {
      span_spill->next->prev = span_spill->prev;
    }
    span_spill->next = (runtime_mspan *)0x0;
    span_spill->prev = (runtime_mspan *)0x0;
    span_spill->list = (runtime_mSpanList *)0x0;
    return;
  }
  v = span_spill->npages;
  p_00 = span_spill->prev;
  runtime_printlock();
  s.len = (int)span;
  s.str = &DAT_002a7f8e;
  runtime_printstring(s);
  runtime_printuint(v);
  s_00.len = (int)span;
  s_00.str = &DAT_00289402;
  runtime_printstring(s_00);
  runtime_printuintptr((uintptr)span_spill);
  s_01.len = (int)span;
  s_01.str = &DAT_002893fc;
  runtime_printstring(s_01);
  runtime_printuintptr((uintptr)p_00);
  s_02.len = (int)span;
  s_02.str = &DAT_00290974;
  runtime_printstring(s_02);
  runtime_printuintptr((uintptr)p);
  s_03.len = (int)span;
  s_03.str = &DAT_002893e4;
  runtime_printstring(s_03);
  runtime_printuintptr((uintptr)list_spill);
  runtime_printnl();
  runtime_printunlock();
  s_04.len = (int)span;
  s_04.str = &DAT_00299985;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_04);
}

