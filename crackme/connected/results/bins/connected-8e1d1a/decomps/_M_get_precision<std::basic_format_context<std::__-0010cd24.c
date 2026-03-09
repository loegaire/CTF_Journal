
/* unsigned long
   std::__format::_Spec<char>::_M_get_precision<std::basic_format_context<std::__format::_Sink_iter<char>,
   char> >(std::basic_format_context<std::__format::_Sink_iter<char>, char>&) const */

ulong __thiscall
std::__format::_Spec<char>::
_M_get_precision<std::basic_format_context<std::__format::_Sink_iter<char>,char>>
          (_Spec<char> *this,basic_format_context *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (((byte)this[1] & 6) == 2) {
    return (ulong)*(ushort *)(this + 6);
  }
  if (((byte)this[1] & 6) != 4) {
    return 0xffffffffffffffff;
  }
  uVar2 = (ulong)*(ushort *)(this + 6);
  if (uVar2 < ((byte)*param_1 & 0xf)) {
    uVar1 = (uint)((*(ulong *)param_1 >> 4) >> ((char)*(ushort *)(this + 6) * '\x05' & 0x3fU)) &
            0x1f;
  }
  else {
    if ((((byte)*param_1 & 0xf) != 0) || (*(ulong *)param_1 >> 4 <= uVar2)) {
      __invalid_arg_id_in_format_string();
                    /* WARNING: Subroutine does not return */
      __throw_format_error
                ("format error: argument used for width or precision must be a non-negative integer"
                );
    }
    uVar1 = (uint)*(byte *)(uVar2 * 0x20 + *(long *)(param_1 + 8) + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x0010cd95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&DAT_00117780 + *(int *)(&DAT_00117780 + (ulong)uVar1 * 4)))();
  return uVar2;
}

