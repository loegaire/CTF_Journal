
/* WARNING: Unknown calling convention */

void runtime_hexdumpWords(uintptr p,uintptr end,func_uintptr__uint8 **mark)

{
  uint64 *puVar1;
  ulong uVar2;
  uintptr uVar3;
  uintptr in_RDI;
  long in_FS_OFFSET;
  runtime_funcInfo rVar4;
  string sVar5;
  string s;
  string s_00;
  string s_01;
  string s_02;
  __uint8 b;
  uintptr p_spill;
  uintptr end_spill;
  func_uintptr__uint8 **mark_spill;
  char local_58;
  uint8 *local_48;
  char local_39;
  uint64 local_38;
  ulong local_30;
  uint8 *local_28;
  uint64 *local_20;
  undefined8 local_18;
  long *local_10;
  
                    /* Unresolved local var: uint8[1] markbuf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_printlock();
  local_39 = ' ';
  runtime_minhexdigits = 0x10;
  uVar2 = 0;
                    /* Unresolved local var: uintptr i@[???] */
  while (puVar1 = (uint64 *)(uVar2 + p_spill), puVar1 < end_spill) {
                    /* Unresolved local var: uintptr val@[???] */
    local_30 = uVar2;
    local_20 = puVar1;
    if ((uVar2 & 0xf) == 0) {
      if (uVar2 != 0) {
        runtime_printlock();
        runtime_printnl();
        runtime_printunlock();
      }
      runtime_printlock();
      runtime_printhex((uint64)local_20);
      local_58 = '\x02';
      sVar5.len = (int)puVar1;
      sVar5.str = &DAT_002877a3;
      runtime_printstring(sVar5);
      runtime_printunlock();
    }
    puVar1 = local_20;
    uVar3 = p_spill;
    if (mark_spill != (func_uintptr__uint8 **)0x0) {
      (**mark_spill)(in_RDI,(uint8 *)end_spill);
      local_39 = local_58;
      if (local_58 == '\0') {
        local_39 = ' ';
      }
    }
    b.len = (int)puVar1;
    b.array = (uint8 *)&local_39;
    b.cap = uVar3;
    runtime_gwrite(b);
    local_38 = *local_20;
    runtime_printlock();
    runtime_printhex(local_38);
    runtime_printunlock();
    runtime_printlock();
    runtime_printsp();
    runtime_printunlock();
    rVar4 = runtime_findfunc(local_38);
    local_10 = (long *)0x1;
    rVar4._func = (runtime__func *)0x1;
    sVar5 = runtime_funcname(rVar4);
    s.len = sVar5.len;
    local_18 = 1;
    local_28 = local_48;
    local_20 = (uint64 *)*local_10;
    runtime_printlock();
    s.str = &DAT_0028774a;
    runtime_printstring(s);
    s_00.len = s.len;
    s_00.str = local_28;
    runtime_printstring(s_00);
    s_01.len = s.len;
    s_01.str = (uint8 *)&net__stmp_20;
    runtime_printstring(s_01);
    runtime_printhex(local_38 - (long)local_20);
    s_02.len = s.len;
    s_02.str = &DAT_002877a9;
    runtime_printstring(s_02);
    runtime_printunlock();
    local_58 = '\x02';
    uVar2 = local_30 + 8;
  }
  runtime_minhexdigits = 0;
  runtime_printlock();
  runtime_printnl();
  runtime_printunlock();
  runtime_printunlock();
  return;
}

