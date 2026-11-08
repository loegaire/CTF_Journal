
/* std::__format::_Sink_iter<char>
   std::__format::__formatter_str<char>::format<std::__format::_Sink_iter<char>
   >(std::basic_string_view<char, std::char_traits<char> >,
   std::basic_format_context<std::__format::_Sink_iter<char>, char>&) const */

undefined8 *
std::__format::__formatter_str<char>::format<std::__format::_Sink_iter<char>>
          (_Spec<char> *param_1,__format *param_2,__format *param_3,basic_format_context *param_4)

{
  uint3 uVar1;
  __format *p_Var2;
  int iVar3;
  __format *p_Var4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  __format *p_Var8;
  long lVar9;
  __format *p_Var10;
  uint unaff_EBP;
  __format *p_Var11;
  undefined1 *puVar12;
  void *__dest;
  uint local_138;
  uint local_128;
  uint local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  __format *local_110;
  __format *local_108;
  undefined1 local_100;
  undefined1 uStack_ff;
  undefined1 uStack_fe;
  undefined5 uStack_fd;
  __format *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  __format *local_e0;
  __format *local_d8;
  byte local_d0;
  byte bStack_cf;
  byte bStack_ce;
  undefined5 uStack_cd;
  __format *local_c8;
  uint local_b8;
  uint uStack_b4;
  undefined1 local_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  uint5 uStack_ad;
  undefined8 local_a8;
  __format *p_Stack_a0;
  __format *local_98;
  undefined8 uStack_90;
  __format *local_88;
  undefined8 local_78;
  __format *local_70;
  __format *local_68;
  __format *p_Stack_60;
  __format *local_58;
  undefined8 uStack_50;
  __format *local_48;
  
  if ((*(ushort *)param_1 & 0x780) == 0) {
    puVar6 = *(undefined8 **)(param_4 + 0x10);
    if (param_2 != (__format *)0x0) {
      __dest = (void *)puVar6[3];
      p_Var11 = (__format *)(puVar6[2] - ((long)__dest - puVar6[1]));
      if (p_Var11 <= param_2) {
        do {
          p_Var8 = p_Var11;
          if (param_2 <= p_Var11) {
            p_Var8 = param_2;
          }
          if (p_Var8 != (__format *)0x0) {
            memcpy(__dest,param_3,(size_t)p_Var8);
          }
          puVar6[3] = p_Var11 + puVar6[3];
          param_3 = param_3 + (long)p_Var11;
          param_2 = param_2 + -(long)p_Var11;
          (**(code **)*puVar6)(puVar6);
          __dest = (void *)puVar6[3];
          p_Var11 = (__format *)(puVar6[2] - ((long)__dest - puVar6[1]));
        } while (p_Var11 <= param_2);
        if (param_2 == (__format *)0x0) {
          return puVar6;
        }
      }
      memcpy(__dest,param_3,(size_t)param_2);
      puVar6[3] = param_2 + puVar6[3];
    }
  }
  else {
    bVar7 = (byte)param_1[1] & 6;
    p_Var11 = param_2;
    p_Var8 = param_3;
    if (((byte)param_1[1] & 6) == 0) {
      if (param_2 != (__format *)0x0) {
        p_Var4 = param_2 + (long)param_3;
        local_d8 = param_3;
        if (p_Var4 == param_3) {
          local_e8 = 0;
          bStack_ce = bVar7;
          local_d0 = bVar7;
        }
        else {
          local_d0 = 0;
          bStack_cf = 0;
          bStack_ce = 0;
          local_e0 = param_3;
          local_c8 = p_Var4;
          __unicode::_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>::
          _M_read_utf8((_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl> *
                       )&local_e8);
          bVar7 = bStack_cf;
        }
        local_a8 = CONCAT44(uStack_e4,local_e8);
        local_78 = local_a8;
        local_70 = param_3;
        uVar1 = CONCAT12(bStack_ce,CONCAT11(bVar7,local_d0));
        uStack_90 = CONCAT53(uStack_cd,uVar1);
        local_68 = local_d8;
        p_Stack_60 = (__format *)uStack_90;
        local_58 = p_Var4;
        uStack_b4 = local_138;
        if (local_d8 != p_Var4) {
          local_11c = *(uint *)((long)&local_78 + ((ulong)uVar1 & 0xff) * 4);
          puVar12 = __unicode::__v15_1_0::__gcb_edges;
          lVar9 = 0x6a4;
          while (lVar5 = lVar9, 0 < lVar5) {
            lVar9 = lVar5 >> 1;
            if (*(uint *)((long)puVar12 + lVar9 * 4) < (local_11c << 4 | 0xf)) {
              puVar12 = (undefined1 *)((uint *)((long)puVar12 + lVar9 * 4) + 1);
              lVar9 = (lVar5 - lVar9) + -1;
            }
          }
          uStack_b4 = *(uint *)((long)puVar12 + -4) & 0xf;
        }
        local_b8 = local_11c;
        local_b0 = 0;
        uStack_af = 0;
        uStack_ae = 0;
        local_78 = CONCAT44(uStack_b4,local_11c);
        local_70 = (__format *)((ulong)uStack_ad << 0x18);
        iVar3 = 1;
        puVar12 = __unicode::__v15_1_0::__width_edges;
        lVar9 = 200;
        if (0x10ff < local_11c) {
          while (lVar5 = lVar9, 0 < lVar5) {
            lVar9 = lVar5 >> 1;
            if (*(uint *)((long)puVar12 + lVar9 * 4) <= local_11c) {
              puVar12 = (undefined1 *)((uint *)((long)puVar12 + lVar9 * 4) + 1);
              lVar9 = (lVar5 - lVar9) + -1;
            }
          }
          iVar3 = (int)((long)((long)puVar12 + -0x11a020) >> 0x3f);
          iVar3 = ((int)((long)puVar12 + -0x11a020 >> 2) - iVar3 & 1U) + iVar3 + 1;
        }
        p_Var11 = (__format *)(long)iVar3;
        local_e0 = param_3;
        bStack_cf = bVar7;
        local_c8 = p_Var4;
        p_Stack_a0 = param_3;
        local_98 = local_d8;
        local_88 = p_Var4;
        local_68 = (__format *)local_a8;
        p_Stack_60 = param_3;
        local_58 = local_d8;
        uStack_50 = uStack_90;
        local_48 = p_Var4;
        while (lVar9 = __unicode::__v15_1_0::
                       _Grapheme_cluster_view<std::basic_string_view<char,std::char_traits<char>>>::
                       _Iterator::operator++((_Iterator *)&local_78),
              *(__format **)(lVar9 + 0x20) != p_Var4) {
          iVar3 = 1;
          if (0x10ff < (uint)local_78) {
            puVar12 = __unicode::__v15_1_0::__width_edges;
            lVar9 = 200;
            while (lVar5 = lVar9, 0 < lVar5) {
              lVar9 = lVar5 >> 1;
              if (*(uint *)((long)puVar12 + lVar9 * 4) <= (uint)local_78) {
                puVar12 = (undefined1 *)((uint *)((long)puVar12 + lVar9 * 4) + 1);
                lVar9 = (lVar5 - lVar9) + -1;
              }
            }
            iVar3 = (int)((long)((long)puVar12 + -0x11a020) >> 0x3f);
            iVar3 = ((int)((long)puVar12 + -0x11a020 >> 2) - iVar3 & 1U) + iVar3 + 1;
          }
          p_Var11 = p_Var11 + iVar3;
        }
      }
    }
    else {
      p_Var4 = (__format *)
               _Spec<char>::
               _M_get_precision<std::basic_format_context<std::__format::_Sink_iter<char>,char>>
                         (param_1,param_4);
      if (param_2 != (__format *)0x0) {
        p_Var10 = param_2 + (long)param_3;
        local_108 = param_3;
        if (p_Var10 == param_3) {
          local_118 = 0;
          uStack_fe = 0;
          uStack_ff = 0;
          local_100 = 0;
        }
        else {
          local_100 = 0;
          uStack_ff = 0;
          uStack_fe = 0;
          local_110 = param_3;
          local_f8 = p_Var10;
          __unicode::_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>::
          _M_read_utf8((_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl> *
                       )&local_118);
        }
        local_a8 = CONCAT44(uStack_114,local_118);
        local_78 = local_a8;
        local_70 = param_3;
        uVar1 = CONCAT12(uStack_fe,CONCAT11(uStack_ff,local_100));
        uStack_90 = CONCAT53(uStack_fd,uVar1);
        local_68 = local_108;
        p_Stack_60 = (__format *)uStack_90;
        local_58 = p_Var10;
        local_b8 = unaff_EBP;
        uStack_b4 = local_128;
        if (local_108 != p_Var10) {
          local_b8 = *(uint *)((long)&local_78 + ((ulong)uVar1 & 0xff) * 4);
          puVar12 = __unicode::__v15_1_0::__gcb_edges;
          lVar9 = 0x6a4;
          while (lVar5 = lVar9, 0 < lVar5) {
            lVar9 = lVar5 >> 1;
            if (*(uint *)((long)puVar12 + lVar9 * 4) < (local_b8 << 4 | 0xf)) {
              puVar12 = (undefined1 *)((uint *)((long)puVar12 + lVar9 * 4) + 1);
              lVar9 = (lVar5 - lVar9) + -1;
            }
          }
          uStack_b4 = *(uint *)((long)puVar12 + -4) & 0xf;
        }
        local_b0 = 0;
        uStack_af = 0;
        uStack_ae = 0;
        local_78 = CONCAT44(uStack_b4,local_b8);
        local_70 = (__format *)((ulong)uStack_ad << 0x18);
        iVar3 = 1;
        puVar12 = __unicode::__v15_1_0::__width_edges;
        lVar9 = 200;
        if (0x10ff < local_b8) {
          while (lVar5 = lVar9, 0 < lVar5) {
            lVar9 = lVar5 >> 1;
            if (*(uint *)((long)puVar12 + lVar9 * 4) <= local_b8) {
              puVar12 = (undefined1 *)((uint *)((long)puVar12 + lVar9 * 4) + 1);
              lVar9 = (lVar5 - lVar9) + -1;
            }
          }
          iVar3 = (int)((long)((long)puVar12 + -0x11a020) >> 0x3f);
          iVar3 = ((int)((long)puVar12 + -0x11a020 >> 2) - iVar3 & 1U) + iVar3 + 1;
        }
        local_98 = local_108;
        local_88 = p_Var10;
        local_68 = (__format *)local_a8;
        local_58 = local_108;
        uStack_50 = uStack_90;
        local_48 = p_Var10;
        if (p_Var4 < (__format *)(long)iVar3) {
          param_2 = (__format *)0x0;
          p_Var11 = (__format *)0x0;
          p_Var8 = (__format *)0x0;
          local_110 = param_3;
          local_f8 = p_Var10;
          p_Stack_a0 = param_3;
          p_Stack_60 = param_3;
        }
        else {
          p_Var2 = (__format *)(long)iVar3;
          local_110 = param_3;
          local_f8 = p_Var10;
          p_Stack_a0 = param_3;
          p_Stack_60 = param_3;
          do {
            p_Var11 = p_Var2;
            lVar9 = __unicode::__v15_1_0::
                    _Grapheme_cluster_view<std::basic_string_view<char,std::char_traits<char>>>::
                    _Iterator::operator++((_Iterator *)&local_78);
            if (p_Var10 == *(__format **)(lVar9 + 0x20)) goto LAB_001160ea;
            iVar3 = 1;
            if (0x10ff < (uint)local_78) {
              puVar12 = __unicode::__v15_1_0::__width_edges;
              lVar9 = 200;
              while (lVar5 = lVar9, 0 < lVar5) {
                lVar9 = lVar5 >> 1;
                if (*(uint *)((long)puVar12 + lVar9 * 4) <= (uint)local_78) {
                  puVar12 = (undefined1 *)((uint *)((long)puVar12 + lVar9 * 4) + 1);
                  lVar9 = (lVar5 - lVar9) + -1;
                }
              }
              iVar3 = (int)((long)((long)puVar12 + -0x11a020) >> 0x3f);
              iVar3 = ((int)((long)puVar12 + -0x11a020 >> 2) - iVar3 & 1U) + iVar3 + 1;
            }
            p_Var2 = p_Var11 + iVar3;
          } while (p_Var11 + iVar3 <= p_Var4);
          param_2 = local_58 + -(long)param_3;
        }
      }
    }
LAB_001160ea:
    puVar6 = (undefined8 *)
             __write_padded_as_spec<char,std::__format::_Sink_iter<char>>
                       (param_2,p_Var8,p_Var11,param_4,param_1,1);
  }
  return puVar6;
}

