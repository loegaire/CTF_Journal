
/* std::__format::__formatter_fp<char>::_M_localize[abi:cxx11](std::basic_string_view<char,
   std::char_traits<char> >, char, std::locale const&) const */

string * std::__format::__formatter_fp<char>::_M_localize_abi_cxx11_
                   (string *param_1,undefined8 param_2,ulong param_3,char *param_4,char param_5,
                   locale *param_6)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  char cVar4;
  char cVar5;
  locale *plVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  char *__dest;
  undefined8 uVar10;
  size_t __n;
  ulong uVar11;
  ulong local_80;
  long *local_58;
  ulong local_50;
  long local_48 [3];
  
  *(string **)param_1 = param_1 + 0x10;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0x10] = (string)0x0;
                    /* try { // try from 0010e018 to 0010e081 has its CatchHandler @ 0010e082 */
  plVar6 = (locale *)std::locale::classic();
  cVar4 = std::locale::operator==(param_6,plVar6);
  if (cVar4 != '\0') {
    return param_1;
  }
  lVar7 = std::locale::id::_M_id();
  plVar1 = *(long **)(*(long *)(*(long *)param_6 + 8) + lVar7 * 8);
  if (plVar1 == (long *)0x0) {
    uVar10 = std::__throw_bad_cast();
                    /* catch() { ... } // from try @ 0010e018 with catch @ 0010e082 */
    goto LAB_0010e20f;
  }
  cVar4 = (**(code **)(*plVar1 + 0x10))(plVar1);
  (**(code **)(*plVar1 + 0x20))(&local_58,plVar1);
  if ((local_50 == 0) && (cVar4 == '.')) {
    if (local_58 == local_48) {
      return param_1;
    }
    goto LAB_0010e1b4;
  }
  uVar11 = param_3;
  if (param_3 == 0) {
    local_80 = 0xffffffffffffffff;
  }
  else {
    pvVar8 = memchr(param_4,0x2e,param_3);
    if (pvVar8 == (void *)0x0) {
      pvVar8 = memchr(param_4,(int)param_5,param_3);
      if (pvVar8 != (void *)0x0) {
        local_80 = 0xffffffffffffffff;
        goto LAB_0010e0de;
      }
      local_80 = 0xffffffffffffffff;
    }
    else {
      local_80 = (long)pvVar8 - (long)param_4;
      pvVar8 = memchr(param_4,(int)param_5,param_3);
      uVar11 = 0xffffffffffffffff;
      if (pvVar8 != (void *)0x0) {
LAB_0010e0de:
        uVar11 = (long)pvVar8 - (long)param_4;
      }
      if (local_80 < uVar11) {
        uVar11 = local_80;
      }
      if (uVar11 == 0xffffffffffffffff) {
        uVar11 = param_3;
      }
    }
  }
  uVar9 = param_3 - uVar11;
                    /* try { // try from 0010e107 to 0010e10b has its CatchHandler @ 0010e230 */
  __cxx11::string::reserve(param_1,uVar11 + param_3);
  plVar3 = local_58;
  pcVar2 = *(char **)param_1;
                    /* try { // try from 0010e148 to 0010e1f3 has its CatchHandler @ 0010e1f4 */
  cVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
  __dest = __add_grouping<char>(pcVar2,cVar5,(char *)plVar3,local_50,param_4,param_4 + uVar11);
  if (param_3 != uVar11) {
    if (local_80 != 0xffffffffffffffff) {
      *__dest = cVar4;
      __dest = __dest + 1;
      uVar11 = uVar11 + 1;
    }
    if (1 < uVar9) {
      if (param_3 < uVar11) {
        uVar10 = std::__throw_out_of_range_fmt
                           ("%s: __pos (which is %zu) > __size (which is %zu)",
                            "basic_string_view::copy",uVar11,param_3);
                    /* catch() { ... } // from try @ 0010e148 with catch @ 0010e1f4 */
        *(undefined8 *)(param_1 + 8) = 0;
        **(undefined1 **)param_1 = 0;
        __cxx11::string::_M_dispose((string *)&local_58);
LAB_0010e20f:
        __cxx11::string::_M_dispose(param_1);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar10);
      }
      __n = param_3 - uVar11;
      if (__n != 0) {
        memcpy(__dest,param_4 + uVar11,__n);
      }
      __dest = __dest + __n;
    }
  }
  lVar7 = (long)__dest - (long)pcVar2;
  *(long *)(param_1 + 8) = lVar7;
  *(undefined1 *)(*(long *)param_1 + lVar7) = 0;
  if (local_58 == local_48) {
    return param_1;
  }
LAB_0010e1b4:
  operator_delete(local_58,local_48[0] + 1);
  return param_1;
}

