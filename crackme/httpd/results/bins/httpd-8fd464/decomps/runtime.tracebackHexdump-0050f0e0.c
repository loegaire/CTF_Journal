
/* WARNING: Unknown calling convention */

void runtime_tracebackHexdump(runtime_stack stk,runtime_stkframe *frame,uintptr bad)

{
  ulong v;
  ulong v_00;
  ulong end;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  runtime_stack stk_spill;
  runtime_stkframe *frame_spill;
  uintptr bad_spill;
  code *local_20 [3];
  
                    /* Unresolved local var: uintptr lo@[???]
                       Unresolved local var: uintptr hi@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  v = frame_spill->sp;
  v_00 = frame_spill->fp;
  end = v;
  if ((v_00 != 0) && (v < v_00)) {
    end = v_00;
  }
  runtime_printlock();
  s.len = end;
  s.str = &DAT_0029a3c1;
  runtime_printstring(s);
  runtime_printhex(v);
  s_00.len = end;
  s_00.str = &DAT_00288962;
  runtime_printstring(s_00);
  runtime_printhex(v_00);
  s_01.len = end;
  s_01.str = &DAT_0028ebc1;
  runtime_printstring(s_01);
  runtime_printhex(stk_spill.lo);
  s_02.len = end;
  s_02.str = (uint8 *)&DAT_002f3a2f;
  runtime_printstring(s_02);
  runtime_printhex(stk_spill.hi);
  s_03.len = end;
  s_03.str = &DAT_00287783;
  runtime_printstring(s_03);
  runtime_printunlock();
  local_20[0] = runtime_tracebackHexdump_func1;
  runtime_hexdumpWords((uintptr)local_20,end,(func_uintptr__uint8 **)stk_spill.hi);
  return;
}

