
/* WARNING: Type propagation algorithm not settling */
/* std::__format::_Sink_iter<char> std::__format::__write_padded_as_spec<char,
   std::__format::_Sink_iter<char> >(std::basic_string_view<std::type_identity<char>::type,
   std::char_traits<std::type_identity<char>::type> >, unsigned long,
   std::basic_format_context<std::__format::_Sink_iter<char>, char>&, std::__format::_Spec<char>
   const&, std::__format::_Align) */

undefined8 * __thiscall
std::__format::__write_padded_as_spec<char,std::__format::_Sink_iter<char>>
          (__format *this,__format *param_2,ulong param_3,ulong *param_4,ushort *param_5,
          uint param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  __format *__n;
  __format *p_Var3;
  void *__dest;
  ulong uVar4;
  
  if ((*param_5 & 0x180) == 0x80) {
    if (param_3 < param_5[2]) {
      if ((*param_5 & 3) != 0) {
        param_6 = (byte)*param_5 & 3;
      }
      puVar1 = (undefined8 *)
               __write_padded<std::__format::_Sink_iter<char>,char>
                         ((__format *)param_4[2],this,param_2,param_6,param_5[2] - param_3,
                          *(undefined4 *)(param_5 + 4));
      return puVar1;
    }
  }
  else if ((*param_5 & 0x180) == 0x100) {
    uVar4 = (ulong)param_5[2];
    if (uVar4 < ((byte)*param_4 & 0xf)) {
      uVar2 = (uint)((*param_4 >> 4) >> ((char)param_5[2] * '\x05' & 0x3fU)) & 0x1f;
    }
    else {
      if (((*param_4 & 0xf) != 0) || (*param_4 >> 4 <= uVar4)) {
        __invalid_arg_id_in_format_string();
                    /* WARNING: Subroutine does not return */
        __throw_format_error
                  (
                  "format error: argument used for width or precision must be a non-negative integer"
                  );
      }
      uVar2 = (uint)*(byte *)(uVar4 * 0x20 + param_4[1] + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x0010dbae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined8 *)(*(code *)(&DAT_00117828 + *(int *)(&DAT_00117828 + (ulong)uVar2 * 4)))()
    ;
    return puVar1;
  }
  puVar1 = (undefined8 *)param_4[2];
  if (this != (__format *)0x0) {
    __dest = (void *)puVar1[3];
    p_Var3 = (__format *)(puVar1[2] - ((long)__dest - puVar1[1]));
    if (p_Var3 <= this) {
      do {
        __n = p_Var3;
        if (this <= p_Var3) {
          __n = this;
        }
        if (__n != (__format *)0x0) {
          memcpy(__dest,param_2,(size_t)__n);
        }
        puVar1[3] = p_Var3 + puVar1[3];
        param_2 = param_2 + (long)p_Var3;
        this = this + -(long)p_Var3;
        (**(code **)*puVar1)(puVar1);
        __dest = (void *)puVar1[3];
        p_Var3 = (__format *)(puVar1[2] - ((long)__dest - puVar1[1]));
      } while (p_Var3 <= this);
      if (this == (__format *)0x0) {
        return puVar1;
      }
    }
    memcpy(__dest,param_2,(size_t)this);
    puVar1[3] = this + puVar1[3];
  }
  return puVar1;
}

