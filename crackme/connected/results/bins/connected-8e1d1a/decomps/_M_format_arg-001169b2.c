
/* std::__format::_Formatting_scanner<std::__format::_Sink_iter<char>, char>::_M_format_arg(unsigned
   long) */

void __thiscall
std::__format::_Formatting_scanner<std::__format::_Sink_iter<char>,char>::_M_format_arg
          (_Formatting_scanner<std::__format::_Sink_iter<char>,char> *this,ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined7 uStack_47;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined7 uStack_27;
  _Formatting_scanner<std::__format::_Sink_iter<char>,char> *local_10 [2];
  
  puVar1 = *(ulong **)(this + 0x30);
  if (param_1 < ((byte)*puVar1 & 0xf)) {
    uVar2 = (uint)((*puVar1 >> 4) >> ((char)param_1 * '\x05' & 0x3fU)) & 0x1f;
    puVar3 = (undefined8 *)(param_1 * 0x10 + puVar1[1]);
    local_58 = *puVar3;
    uStack_50 = puVar3[1];
  }
  else {
    uVar2 = (byte)*puVar1 & 0xf;
    if (((byte)*puVar1 & 0xf) == 0) {
      if (param_1 < *puVar1 >> 4) {
        puVar3 = (undefined8 *)(param_1 * 0x20 + puVar1[1]);
        local_58 = *puVar3;
        uStack_50 = puVar3[1];
        uVar2 = (uint)*(byte *)(puVar3 + 2);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  local_38 = local_58;
  uStack_30 = uStack_50;
  _local_28 = CONCAT71(uStack_47,(char)uVar2);
  local_10[0] = this;
  basic_format_arg<std::basic_format_context<std::__format::_Sink_iter<char>,char>>::
  _M_visit<std::__format::_Formatting_scanner<std::__format::_Sink_iter<char>,char>::_M_format_arg(unsigned_long)::_lambda(auto:1&)_1_>
            ((basic_format_arg<std::basic_format_context<std::__format::_Sink_iter<char>,char>> *)
             &local_38,local_10,uVar2);
  return;
}

