
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void mime.consumeToken(string v, string token, string rest) */

multireturn_string_string_ mime_consumeToken(string v)

{
  undefined1 auVar1 [16];
  ulong in_RDI;
  long in_FS_OFFSET;
  string s;
  multireturn_string_string_ mVar2;
  multireturn_string_string_ mVar3;
  multireturn_string_string_ mVar4;
  string v_spill;
  ulong local_10;
  
  s.len = v.len;
                    /* Unresolved local var: int notPos@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  s.str = v_spill.str;
  strings_indexFunc(s,(func_int32__bool **)v_spill.len,SUB81(in_RDI,0));
  if (local_10 == 0xffffffffffffffff) {
    mVar4.token.len = s.len;
    mVar4.token.str = (uint8 *)v_spill.len;
    mVar4.rest.len = in_RDI;
    mVar4.rest.str = (uint8 *)0xffffffffffffffff;
    return mVar4;
  }
  if (local_10 == 0) {
    mVar3.token.len = s.len;
    mVar3.token.str = (uint8 *)v_spill.len;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = in_RDI;
    mVar3.rest = (string)(auVar1 << 0x40);
    return mVar3;
  }
  if (local_10 <= (ulong)v_spill.len) {
    mVar2.rest.str = (uint8 *)(local_10 & (long)-(v_spill.len - local_10) >> 0x3f);
    mVar2.token.str = v_spill.str + (long)mVar2.rest.str;
    mVar2.token.len = v_spill.len - local_10;
    mVar2.rest.len = in_RDI;
    return mVar2;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAlen();
}

