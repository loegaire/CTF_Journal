
/* std::basic_format_context<std::__format::_Sink_iter<char>, char>::iterator
   std::__format::__formatter_int<char>::_M_format_int<std::__format::_Sink_iter<char>
   >(std::basic_string_view<char, std::char_traits<char> >, unsigned long,
   std::basic_format_context<std::__format::_Sink_iter<char>, char>&) const */

undefined8 *
std::__format::__formatter_int<char>::_M_format_int<std::__format::_Sink_iter<char>>
          (_Spec<char> *param_1,char *param_2,locale *param_3,char *param_4,
          basic_format_context *param_5)

{
  locale *plVar1;
  locale *plVar2;
  code *pcVar3;
  ulong uVar4;
  locale *plVar5;
  char cVar6;
  char *pcVar7;
  __format *p_Var8;
  undefined8 uVar9;
  undefined8 *puVar10;
  byte bVar11;
  char *pcVar12;
  long **pplVar13;
  long **pplVar14;
  void *__dest;
  undefined4 uVar15;
  long lVar16;
  undefined8 uStack_a0;
  long *local_98;
  ulong local_90;
  locale *local_88;
  locale *local_80;
  char *local_78;
  char *local_70;
  locale *local_68;
  ulong local_60;
  long local_58 [3];
  long local_40 [2];
  
  pplVar13 = &local_98;
  pplVar14 = &local_98;
  uStack_a0 = 0x111bef;
  local_80 = param_3;
  local_78 = param_2;
  local_70 = param_4;
  pcVar7 = (char *)_Spec<char>::
                   _M_get_width<std::basic_format_context<std::__format::_Sink_iter<char>,char>>
                             (param_1,param_5);
  if (((byte)*param_1 & 0x20) == 0) goto LAB_00111bf9;
  if (param_5[0x20] == (basic_format_context)0x0) {
    uStack_a0 = 0x111ca2;
    std::locale::locale((locale *)(param_5 + 0x18));
    param_5[0x20] = (basic_format_context)0x1;
  }
  local_88 = (locale *)local_40;
  uStack_a0 = 0x111c8a;
  std::locale::locale(local_88,(locale *)(param_5 + 0x18));
                    /* try { // try from 00111c92 to 00111d2f has its CatchHandler @ 00111d30 */
  uStack_a0 = 0x111c97;
  std::locale::name_abi_cxx11_();
  if (local_60 == 1) {
    local_88 = (locale *)CONCAT71(local_88._1_7_,*local_68 == (locale)0x43);
    if (local_68 != (locale *)local_58) goto LAB_00111cc1;
LAB_00111cce:
    pplVar13 = &local_98;
    if ((char)local_88 == '\0') goto LAB_00111cf8;
  }
  else {
    if (local_68 != (locale *)local_58) {
      local_88 = (locale *)((ulong)local_88._1_7_ << 8);
LAB_00111cc1:
      uStack_a0 = 0x111cce;
      operator_delete(local_68,local_58[0] + 1);
      goto LAB_00111cce;
    }
LAB_00111cf8:
    uStack_a0 = 0x111d04;
    lVar16 = std::locale::id::_M_id();
    local_98 = *(long **)(*(long *)(local_40[0] + 8) + lVar16 * 8);
    if (local_98 == (long *)0x0) {
      uStack_a0 = 0x111d30;
      uVar9 = std::__throw_bad_cast();
      uStack_a0 = 0x111ed1;
      std::locale::~locale((locale *)local_40);
                    /* WARNING: Subroutine does not return */
      uStack_a0 = 0x111ed9;
      _Unwind_Resume(uVar9);
                    /* catch() { ... } // from try @ 00111c92 with catch @ 00111d30 */
    }
    uStack_a0 = 0x111d29;
    (**(code **)(*local_98 + 0x20))(&local_68);
    pcVar12 = local_70;
    plVar1 = local_80;
    local_90 = local_60;
    if (local_60 == 0) {
      pplVar13 = &local_98;
      if (local_68 != (locale *)local_58) {
        local_88 = local_80;
        goto LAB_00111df0;
      }
    }
    else {
      lVar16 = -((0x17 - (long)local_70) + (long)local_78 * 2 & 0xfffffffffffffff0U);
      pplVar14 = (long **)((long)&local_98 + lVar16);
      param_3 = (locale *)((long)&local_90 + lVar16);
      local_88 = param_3;
      if (local_70 != (char *)0x0) {
        *(undefined8 *)((long)&uStack_a0 + lVar16) = 0x111db5;
        memcpy(param_3,plVar1,(size_t)pcVar12);
      }
      plVar1 = local_80 + (long)local_70;
      local_78 = local_78 + (long)local_80;
      local_80 = local_68;
                    /* try { // try from 00111da1 to 00111da3 has its CatchHandler @ 00111ebc */
      pcVar3 = *(code **)(*local_98 + 0x18);
      *(undefined8 *)((long)&uStack_a0 + lVar16) = 0x111da4;
      cVar6 = (*pcVar3)();
      pcVar12 = local_78;
      plVar5 = local_80;
      uVar4 = local_90;
      plVar2 = param_3 + (long)local_70;
      *(undefined8 *)((long)&uStack_a0 + lVar16) = 0x111dd9;
      param_2 = __add_grouping<char>
                          ((char *)plVar2,cVar6,(char *)plVar5,uVar4,(char *)plVar1,pcVar12);
      param_2 = param_2 + -(long)param_3;
      pplVar13 = (long **)((long)&local_98 + lVar16);
      if (local_68 != (locale *)local_58) {
LAB_00111df0:
        *(undefined8 *)((long)pplVar14 + -8) = 0x111dfd;
        operator_delete(local_68,local_58[0] + 1);
        pplVar13 = pplVar14;
        param_3 = local_88;
      }
    }
  }
  *(undefined8 *)((long)pplVar13 + -8) = 0x111cdd;
  std::locale::~locale((locale *)local_40);
LAB_00111bf9:
  pcVar12 = local_70;
  if (param_2 < pcVar7) {
    uVar15 = *(undefined4 *)(param_1 + 8);
    lVar16 = (long)pcVar7 - (long)param_2;
    p_Var8 = *(__format **)(param_5 + 0x10);
    bVar11 = (byte)*param_1 & 3;
    if (((byte)*param_1 & 3) == 0) {
      if (((byte)*param_1 & 0x40) == 0) {
        bVar11 = 2;
        uVar15 = 0x20;
      }
      else {
        bVar11 = 2;
        uVar15 = 0x30;
        if (local_70 != (char *)0x0) {
          pcVar7 = local_70;
          if (param_2 < local_70) {
            pcVar7 = param_2;
          }
          *(undefined8 *)((long)pplVar13 + -8) = 0x111c56;
          p_Var8 = (__format *)
                   __write<std::__format::_Sink_iter<char>,char>(p_Var8,pcVar7,param_3,2);
          param_3 = param_3 + (long)pcVar12;
          param_2 = param_2 + -(long)pcVar12;
          bVar11 = 2;
          uVar15 = 0x30;
        }
      }
    }
    *(undefined8 *)((long)pplVar13 + -8) = 0x111ead;
    puVar10 = (undefined8 *)
              __write_padded<std::__format::_Sink_iter<char>,char>
                        (p_Var8,param_2,param_3,bVar11,lVar16,uVar15);
  }
  else {
    puVar10 = *(undefined8 **)(param_5 + 0x10);
    if (param_2 != (char *)0x0) {
      __dest = (void *)puVar10[3];
      pcVar7 = (char *)(puVar10[2] - ((long)__dest - puVar10[1]));
      if (pcVar7 <= param_2) {
        do {
          pcVar12 = param_2;
          if (pcVar7 <= param_2) {
            pcVar12 = pcVar7;
          }
          if (pcVar12 != (char *)0x0) {
            *(undefined8 *)((long)pplVar13 + -8) = 0x111e78;
            memcpy(__dest,param_3,(size_t)pcVar12);
          }
          puVar10[3] = pcVar7 + puVar10[3];
          param_3 = param_3 + (long)pcVar7;
          param_2 = param_2 + -(long)pcVar7;
          pcVar3 = *(code **)*puVar10;
          *(undefined8 *)((long)pplVar13 + -8) = 0x111e47;
          (*pcVar3)(puVar10);
          __dest = (void *)puVar10[3];
          pcVar7 = (char *)(puVar10[2] - ((long)__dest - puVar10[1]));
        } while (pcVar7 <= param_2);
        if (param_2 == (char *)0x0) {
          return puVar10;
        }
      }
      *(undefined8 *)((long)pplVar13 + -8) = 0x111e8a;
      memcpy(__dest,param_3,(size_t)param_2);
      puVar10[3] = param_2 + puVar10[3];
    }
  }
  return puVar10;
}

