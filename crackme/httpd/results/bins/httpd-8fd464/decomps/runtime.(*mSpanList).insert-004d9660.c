
/* WARNING: Unknown calling convention */

void runtime___mSpanList__insert(runtime_mSpanList *list,runtime_mspan *span)

{
  runtime_mspan *p;
  runtime_mspan *p_00;
  runtime_mSpanList *p_01;
  long in_FS_OFFSET;
  string s;
  string s_00;
  runtime_mSpanList *list_spill;
  runtime_mspan *span_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  p = span_spill->next;
  if (((p == (runtime_mspan *)0x0) && (span_spill->prev == (runtime_mspan *)0x0)) &&
     (span_spill->list == (runtime_mSpanList *)0x0)) {
    span_spill->next = list_spill->first;
    if (list_spill->first == (runtime_mspan *)0x0) {
      list_spill->last = span_spill;
    }
    else {
      list_spill->first->prev = span_spill;
    }
    list_spill->first = span_spill;
    span_spill->list = list_spill;
    return;
  }
  p_00 = span_spill->prev;
  p_01 = span_spill->list;
  runtime_printlock();
  s.len = (int)span;
  s.str = (uint8 *)0x2a3304;
  runtime_printstring(s);
  runtime_printuintptr((uintptr)span_spill);
  runtime_printsp();
  runtime_printuintptr((uintptr)p);
  runtime_printsp();
  runtime_printuintptr((uintptr)p_00);
  runtime_printsp();
  runtime_printuintptr((uintptr)p_01);
  runtime_printnl();
  runtime_printunlock();
  s_00.len = (int)span;
  s_00.str = &DAT_00299975;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_00);
}

