
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void mime.checkMediaTypeDisposition(string s, error ~r1) */

error mime_checkMediaTypeDisposition(string s)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long in_FS_OFFSET;
  string v;
  string v_00;
  error eVar3;
  error eVar4;
  error eVar5;
  error eVar6;
  multireturn_string_string_ mVar7;
  string s_spill;
  long local_20;
  char *local_18;
  long local_10;
  
  v.len = s.len;
                    /* Unresolved local var: string rest@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  v.str = (uint8 *)s_spill.len;
  mVar7 = mime_consumeToken(v);
  v_00.len = mVar7.token.len;
  if (local_20 == 0) {
    runtime_newobject((runtime__type *)&DAT_00241ea0);
    *(undefined8 *)(s_spill.len + 8) = 0x13;
    *(undefined **)s_spill.len = &DAT_0029b60f;
    eVar6.data = v_00.len;
    eVar6.tab = (runtime_itab *)s_spill.len;
    return eVar6;
  }
  if (local_10 == 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = v_00.len;
    return (error)(auVar2 << 0x40);
  }
  if (*local_18 == '/') {
    eVar3.tab = (runtime_itab *)(local_10 + -1);
    v_00.str = (uint8 *)(local_18 + (-(long)eVar3.tab >> 0x3f & 1));
    mVar7 = mime_consumeToken(v_00);
    eVar3.data = mVar7.token.len;
    if (local_20 == 0) {
      runtime_newobject((runtime__type *)&DAT_00241ea0);
      *(undefined8 *)(local_10 + 7) = 0x20;
      (eVar3.tab)->inter = (runtime_interfacetype *)0x2a2810;
      eVar4.data = eVar3.data;
      eVar4.tab = eVar3.tab;
      return eVar4;
    }
    if (local_10 != 0) {
      runtime_newobject((runtime__type *)&DAT_00241ea0);
      *(undefined8 *)(local_10 + 7) = 0x2c;
      (eVar3.tab)->inter = (runtime_interfacetype *)&DAT_002a7be8;
      return eVar3;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = eVar3.data;
    return (error)(auVar1 << 0x40);
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  *(undefined8 *)(s_spill.len + 8) = 0x26;
  *(undefined **)s_spill.len = &DAT_002a5a63;
  eVar5.data = v_00.len;
  eVar5.tab = (runtime_itab *)s_spill.len;
  return eVar5;
}

