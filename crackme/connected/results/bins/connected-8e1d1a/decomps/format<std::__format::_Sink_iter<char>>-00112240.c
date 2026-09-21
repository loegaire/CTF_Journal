
/* std::basic_format_context<std::__format::_Sink_iter<char>, char>::iterator
   std::__format::__formatter_int<char>::format<std::__format::_Sink_iter<char> >(bool,
   std::basic_format_context<std::__format::_Sink_iter<char>, char>&) const */

undefined8 __thiscall
std::__format::__formatter_int<char>::format<std::__format::_Sink_iter<char>>
          (__formatter_int<char> *this,bool param_1,basic_format_context *param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  __format *p_Var5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  char *__s;
  ulong *local_78;
  undefined8 local_70;
  ulong local_68 [2];
  ulong *local_58;
  __format *local_50;
  ulong local_48 [3];
  long local_30 [2];
  
  if (((byte)this[1] & 0x78) == 0x38) {
    local_78 = (ulong *)CONCAT71(local_78._1_7_,param_1);
    uVar7 = __write_padded_as_spec<char,std::__format::_Sink_iter<char>>
                      ((__format *)0x1,&local_78,1,param_2,this,1);
    return uVar7;
  }
  if (((byte)this[1] & 0x78) != 0) {
    uVar7 = format<unsigned_char,std::__format::_Sink_iter<char>>(this,param_1,param_2);
    return uVar7;
  }
  local_58 = local_48;
  local_50 = (__format *)0x0;
  local_48[0] = local_48[0] & 0xffffffffffffff00;
  if (((byte)*this & 0x20) == 0) {
    __s = "false";
    if (param_1) {
      __s = (char *)&DAT_001170de;
    }
    p_Var5 = (__format *)strlen(__s);
    if ((ulong *)__s == local_48) {
      std::__cxx11::string::_M_replace_cold
                ((char *)&local_58,(ulong)local_48,(char *)0x0,(ulong)__s,(ulong)p_Var5);
    }
    else {
      lVar6 = 0;
      if (((ulong)p_Var5 & 4) != 0) {
        local_48[0] = CONCAT44(local_48[0]._4_4_,(int)*(ulong *)__s);
        lVar6 = 4;
      }
      if (((ulong)p_Var5 & 2) != 0) {
        *(undefined2 *)((long)local_48 + lVar6) = *(undefined2 *)((long)__s + lVar6);
        lVar6 = lVar6 + 2;
      }
      if (((ulong)p_Var5 & 1) != 0) {
        *(undefined1 *)((long)local_48 + lVar6) = *(undefined1 *)((long)__s + lVar6);
      }
    }
    *(__format *)((long)local_58 + (long)p_Var5) = (__format)0x0;
    local_50 = p_Var5;
    goto LAB_00112308;
  }
  if (param_2[0x20] == (basic_format_context)0x0) {
    std::locale::locale((locale *)(param_2 + 0x18));
    param_2[0x20] = (basic_format_context)0x1;
  }
  std::locale::locale((locale *)local_30,(locale *)(param_2 + 0x18));
  lVar6 = std::locale::id::_M_id();
  plVar1 = *(long **)(*(long *)(local_30[0] + 8) + lVar6 * 8);
  if (plVar1 == (long *)0x0) {
                    /* try { // try from 001123d4 to 001123d8 has its CatchHandler @ 001123d9 */
    uVar7 = std::__throw_bad_cast();
                    /* catch() { ... } // from try @ 001123d4 with catch @ 001123d9 */
    std::locale::~locale((locale *)local_30);
    __cxx11::string::_M_dispose((string *)&local_58);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar7);
  }
  std::locale::~locale((locale *)local_30);
  if (param_1) {
                    /* try { // try from 00112402 to 0011257f has its CatchHandler @ 001125b3 */
    (**(code **)(*plVar1 + 0x28))(&local_78,plVar1);
  }
  else {
                    /* try { // try from 001123be to 001123c0 has its CatchHandler @ 001125b3 */
    (**(code **)(*plVar1 + 0x30))(&local_78,plVar1);
  }
  uVar3 = local_48[0];
  puVar2 = local_58;
  if (local_58 == local_48) {
    if (local_78 == local_68) goto LAB_001124a6;
LAB_0011249b:
    local_48[0] = local_68[0];
    local_58 = local_78;
    local_78 = local_68;
  }
  else if (local_78 == local_68) {
LAB_001124a6:
    if (local_70 != (__format *)0x0) {
      if (local_70 == (__format *)0x1) {
        *(undefined1 *)local_58 = (undefined1)local_68[0];
      }
      else {
        uVar8 = (uint)local_70;
        if (uVar8 < 8) {
          if (((ulong)local_70 & 4) == 0) {
            if ((uVar8 != 0) &&
               (*(undefined1 *)local_58 = (undefined1)local_68[0], ((ulong)local_70 & 2) != 0)) {
              *(undefined2 *)((long)local_58 + (((ulong)local_70 & 0xffffffff) - 2)) =
                   *(undefined2 *)((long)local_68 + (((ulong)local_70 & 0xffffffff) - 2));
            }
          }
          else {
            *(undefined4 *)local_58 = (undefined4)local_68[0];
            *(undefined4 *)((long)local_58 + (((ulong)local_70 & 0xffffffff) - 4)) =
                 *(undefined4 *)((long)local_68 + (((ulong)local_70 & 0xffffffff) - 4));
          }
        }
        else {
          *local_58 = local_68[0];
          *(undefined8 *)((long)local_58 + (((ulong)local_70 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)local_68 + (((ulong)local_70 & 0xffffffff) - 8));
          lVar6 = (long)local_58 - ((ulong)(local_58 + 1) & 0xfffffffffffffff8);
          uVar8 = uVar8 + (int)lVar6 & 0xfffffff8;
          if (7 < uVar8) {
            uVar4 = 0;
            do {
              *(undefined8 *)(((ulong)(local_58 + 1) & 0xfffffffffffffff8) + (ulong)uVar4) =
                   *(undefined8 *)((long)local_68 + ((ulong)uVar4 - lVar6));
              uVar4 = uVar4 + 8;
            } while (uVar4 < uVar8);
          }
        }
      }
    }
    *(__format *)((long)local_58 + (long)local_70) = (__format)0x0;
  }
  else {
    local_58 = local_78;
    local_48[0] = local_68[0];
    if (puVar2 == (ulong *)0x0) goto LAB_0011249b;
    local_78 = puVar2;
    local_68[0] = uVar3;
  }
  local_50 = local_70;
  local_70 = (__format *)0x0;
  *(undefined1 *)local_78 = 0;
  __cxx11::string::_M_dispose((string *)&local_78);
LAB_00112308:
                    /* try { // try from 00112327 to 0011232b has its CatchHandler @ 001125b3 */
  uVar7 = __write_padded_as_spec<char,std::__format::_Sink_iter<char>>
                    (local_50,local_58,local_50,param_2,this,1);
  if (local_58 != local_48) {
    operator_delete(local_58,local_48[0] + 1);
  }
  return uVar7;
}

