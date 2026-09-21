
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00110fc4) overlaps instruction at (ram,0x00110fc2)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::basic_format_context<std::__format::_Sink_iter<char>, char>::iterator
   std::__format::__formatter_fp<char>::format<long double, std::__format::_Sink_iter<char> >(long
   double, std::basic_format_context<std::__format::_Sink_iter<char>, char>&) const */

undefined8 *
std::__format::__formatter_fp<char>::format<long_double,std::__format::_Sink_iter<char>>
          (longdouble param_1,basic_format_context *param_2)

{
  basic_format_context bVar1;
  _Spec<char> _Var2;
  __format *p_Var3;
  undefined1 auVar4 [16];
  bool bVar5;
  uint7 uVar6;
  int iVar7;
  byte *pbVar9;
  void *pvVar10;
  basic_format_context *pbVar11;
  undefined8 uVar12;
  uint uVar8;
  basic_format_context *pbVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  byte bVar17;
  byte *in_RCX;
  uint *puVar18;
  basic_format_context *pbVar19;
  size_t sVar20;
  basic_format_context *unaff_RBX;
  char cVar21;
  uint uVar22;
  basic_format_context *unaff_RBP;
  basic_format_context *pbVar23;
  basic_format_context *in_RSI;
  ulong uVar24;
  undefined4 uVar25;
  basic_format_context *unaff_R12;
  char cVar26;
  basic_format_context *unaff_R14;
  basic_format_context *pbVar27;
  basic_format_context *unaff_R15;
  bool bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  undefined6 uStack_158;
  char local_152;
  undefined1 local_151;
  undefined4 local_150;
  undefined4 uStack_14c;
  basic_format_context *local_148;
  undefined8 local_140;
  basic_format_context *local_138;
  basic_format_context *local_130;
  basic_format_context *local_128;
  undefined8 local_120;
  basic_format_context *local_118;
  ulong uStack_110;
  basic_format_context *local_108;
  basic_format_context *local_100;
  basic_format_context *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  basic_format_context *pbStack_d8;
  basic_format_context *pbStack_d0;
  ulong auStack_c8 [2];
  basic_format_context abStack_b7 [79];
  basic_format_context *local_68;
  basic_format_context *local_60;
  basic_format_context local_58;
  undefined7 uStack_57;
  locale local_40 [8];
  basic_format_context *pbStack_38;
  _Spec<char> *this;
  
  local_68 = &local_58;
  local_60 = (basic_format_context *)0x0;
  local_58 = (basic_format_context)0x0;
  uVar22 = (byte)param_2[1] & 6;
  this = (_Spec<char> *)(ulong)uVar22;
  cVar21 = (char)uVar22;
  if (((byte)param_2[1] & 6) == 0) {
    switch((byte)param_2[1] >> 3 & 0xf) {
    case 0:
      local_150 = 6;
      uStack_14c = 0;
LAB_00110269:
      auVar31 = std::to_chars((char *)((long)&local_e8 + 1),(char *)&local_68,param_1);
      iVar7 = 0;
      local_152 = 'e';
      cVar26 = '\0';
      break;
    case 1:
      local_150 = 6;
      uStack_14c = 0;
      goto switchD_0010ff4b_caseD_1;
    case 2:
      local_150 = 6;
      uStack_14c = 0;
      local_152 = 'P';
      unaff_R14 = (basic_format_context *)0x1;
      goto LAB_0011000c;
    case 3:
      local_150 = 6;
      uStack_14c = 0;
      goto switchD_0010ff4b_caseD_3;
    case 4:
      local_150 = 6;
      uStack_14c = 0;
      local_152 = 'E';
      cVar26 = '\x01';
      goto LAB_0010ffa1;
    case 5:
      local_150 = 6;
      uStack_14c = 0;
      goto switchD_0010ff4b_caseD_5;
    case 6:
      local_150 = 6;
      uStack_14c = 0;
      cVar26 = '\x01';
      goto LAB_0010ff7c;
    case 7:
      local_150 = 6;
      uStack_14c = 0;
      goto switchD_0010ff4b_caseD_7;
    case 8:
      local_150 = 6;
      uStack_14c = 0;
      local_152 = 'E';
      cVar26 = '\x01';
      goto LAB_0010ff61;
    default:
      goto switchD_0010ff27_default;
    }
    goto LAB_00110060;
  }
                    /* try { // try from 0010ff29 to 001104f1 has its CatchHandler @ 00110741 */
  uVar24 = _Spec<char>::
           _M_get_precision<std::basic_format_context<std::__format::_Sink_iter<char>,char>>
                     ((_Spec<char> *)param_2,in_RSI);
  local_150 = (undefined4)uVar24;
  uStack_14c = (undefined4)(uVar24 >> 0x20);
  uVar22 = (byte)param_2[1] >> 3 & 0xf;
  puVar18 = &switchD_0010ff4b::switchdataD_00117930;
  pbVar9 = (byte *)((long)&switchD_0010ff4b::switchdataD_00117930 +
                   (long)(int)(&switchD_0010ff4b::switchdataD_00117930)[uVar22]);
  switch(uVar22) {
  case 0:
    if (cVar21 == '\0') goto LAB_00110269;
    iVar7 = 3;
    local_152 = 'e';
    bVar28 = false;
    cVar26 = '\0';
    goto LAB_0010ffab;
  case 1:
switchD_0010ff4b_caseD_1:
    local_152 = 'e';
    unaff_R14 = (basic_format_context *)0x0;
    goto LAB_0011000c;
  case 2:
    local_152 = 'P';
    unaff_R14 = (basic_format_context *)0x1;
LAB_0011000c:
    cVar26 = (char)unaff_R14;
    if (((byte)param_2[1] & 0x78) != 0x10) {
      local_152 = 'p';
    }
    if (cVar21 == '\0') {
      auVar31 = std::to_chars((long)&local_e8 + 1,&local_68,4);
      iVar7 = 4;
LAB_00110060:
      pbVar13 = auVar31._0_8_;
      if (auVar31._8_4_ == 0x4b) {
        uVar24 = CONCAT44(uStack_14c,local_150) + 8;
        bVar28 = false;
        bVar5 = false;
        goto LAB_00110cbb;
      }
      bVar28 = false;
      local_140 = (basic_format_context *)&local_68;
      pbVar23 = (basic_format_context *)((long)&local_e8 + 1);
    }
    else {
switchD_0010ff27_default:
      cVar26 = (char)unaff_R14;
      iVar7 = 4;
      bVar28 = false;
LAB_0010ffab:
      auVar31 = std::to_chars((long)&local_e8 + 1,&local_68,iVar7,local_150);
      pbVar13 = auVar31._0_8_;
      if (auVar31._8_4_ == 0x4b) {
        uVar24 = CONCAT44(uStack_14c,local_150) + 8;
        bVar5 = true;
        if (iVar7 == 2) {
          local_128 = (basic_format_context *)((ulong)local_128 & 0xffffffff00000000);
          frexpl(&local_128);
          if (0 < (int)local_128) {
            uVar24 = uVar24 + ((uint)((int)local_128 * 0xfa4) / 0x33f5 + 1);
          }
          bVar5 = true;
        }
LAB_00110cbb:
        if (uVar24 < 0x81) {
          uVar24 = 0x100;
        }
                    /* try { // try from 00110cd6 to 00110cda has its CatchHandler @ 00110741 */
        __cxx11::string::reserve((string *)&local_68,uVar24);
        do {
          if (local_68 == &local_58) {
            lVar14 = 0xf;
          }
          else {
            lVar14 = CONCAT71(uStack_57,local_58);
          }
          __cxx11::string::reserve((string *)&local_68,lVar14 * 2);
          pbVar27 = local_68;
          pbVar23 = local_68 + (lVar14 * 2 - 1);
          pbVar13 = local_68 + 1;
          if (bVar5) {
            auVar31 = std::to_chars(pbVar13,pbVar23,iVar7,local_150);
          }
          else if (iVar7 == 0) {
            auVar31 = std::to_chars((char *)pbVar13,(char *)pbVar23,param_1);
          }
          else {
            auVar31 = std::to_chars(pbVar13,pbVar23,iVar7);
          }
          pbVar13 = auVar31._0_8_;
          if (auVar31._8_4_ == 0) {
            local_60 = pbVar13 + -(long)pbVar27;
            local_68[(long)local_60] = (basic_format_context)0x0;
            pbVar23 = local_68 + 1;
            local_140 = local_68 + (long)local_60;
            goto LAB_00110080;
          }
          local_60 = (basic_format_context *)0x0;
          *local_68 = (basic_format_context)0x0;
        } while (auVar31._8_4_ == 0x4b);
        pbVar23 = local_68 + 1;
        local_140 = local_68;
      }
      else {
        local_140 = (basic_format_context *)&local_68;
        pbVar23 = (basic_format_context *)((long)&local_e8 + 1);
      }
    }
LAB_00110080:
    sVar20 = CONCAT44(uStack_14c,local_150);
    pbVar27 = pbVar23;
    if (cVar26 != '\0') {
      for (; pbVar27 != pbVar13; pbVar27 = pbVar27 + 1) {
        iVar7 = toupper((int)(char)*pbVar27);
        *pbVar27 = SUB41(iVar7,0);
      }
    }
    local_148 = (basic_format_context *)0x1;
    if ((longdouble)0 <= param_1) {
      if (((byte)*param_2 & 0xc) == 4) {
        pbVar23[-1] = (basic_format_context)0x2b;
        pbVar23 = pbVar23 + -1;
      }
      else {
        local_148 = (basic_format_context *)0x0;
        if (((byte)*param_2 & 0xc) == 0xc) {
          pbVar23[-1] = (basic_format_context)0x20;
          pbVar23 = pbVar23 + -1;
          local_148 = (basic_format_context *)0x1;
        }
      }
    }
    pbVar27 = pbVar13 + -(long)pbVar23;
    if (((byte)*param_2 & 0x10) == 0) {
      local_108 = (basic_format_context *)&local_f8;
      local_100 = (basic_format_context *)0x0;
      local_f8 = (basic_format_context *)((ulong)local_f8._1_7_ << 8);
      local_148 = pbVar23;
      if ((((byte)*param_2 & 0x20) == 0) || (_DAT_0011a370 < ABS(param_1))) goto LAB_001108f5;
    }
    else {
      if (_DAT_0011a370 < ABS(param_1)) {
        local_108 = (basic_format_context *)&local_f8;
        local_100 = (basic_format_context *)0x0;
        local_f8 = (basic_format_context *)((ulong)local_f8._1_7_ << 8);
        local_148 = pbVar23;
        goto LAB_001108f5;
      }
      local_128 = pbVar27;
      local_120 = pbVar23;
      if (((pbVar27 == (basic_format_context *)0x0) ||
          (pvVar10 = memchr(pbVar23,0x2e,(size_t)pbVar27), pvVar10 == (void *)0x0)) ||
         (local_130 = (basic_format_context *)((long)pvVar10 - (long)pbVar23),
         local_130 == (basic_format_context *)0xffffffffffffffff)) {
        pbVar11 = (basic_format_context *)
                  basic_string_view<char,std::char_traits<char>>::find
                            ((basic_string_view<char,std::char_traits<char>> *)&local_128,local_152,
                             0);
        if (pbVar11 == (basic_format_context *)0xffffffffffffffff) {
          pbVar11 = pbVar27;
        }
        if (bVar28) {
          local_138 = (basic_format_context *)0x1;
          bVar28 = true;
          if (CONCAT44(uStack_14c,local_150) != 0) {
            pbVar19 = pbVar11 + -(long)local_148;
            local_130 = pbVar11;
            goto LAB_0011018e;
          }
        }
        else {
          local_138 = (basic_format_context *)0x1;
          sVar20 = 0;
          bVar28 = true;
        }
LAB_001104bb:
        if ((local_60 == (basic_format_context *)0x0) &&
           (local_138 <= (ulong)((long)local_140 - (long)pbVar13))) {
          pbVar13 = pbVar23 + (long)pbVar11;
          memmove(pbVar11 + (long)local_138 + (long)pbVar23,pbVar13,(long)pbVar27 - (long)pbVar11);
          if (bVar28) {
            pbVar11 = pbVar11 + 1;
            *pbVar13 = (basic_format_context)0x2e;
          }
          memset(pbVar23 + (long)pbVar11,0x30,sVar20);
          local_148 = local_120;
          pbVar27 = local_128 + (long)local_138;
        }
        else {
          __cxx11::string::reserve((string *)&local_68,(ulong)(pbVar27 + (long)local_138));
          auVar29._8_8_ = local_60;
          auVar29._0_8_ = local_68;
          if (local_60 == (basic_format_context *)0x0) {
            pbVar13 = local_128;
            if (pbVar11 <= local_128) {
              pbVar13 = pbVar11;
            }
                    /* try { // try from 00110646 to 0011087c has its CatchHandler @ 00110741 */
            __cxx11::string::_M_replace((string *)&local_68,0,0,(char *)local_120,(ulong)pbVar13);
            if (bVar28) {
              __cxx11::string::push_back((string *)&local_68,'.');
            }
            if (sVar20 != 0) {
              __cxx11::string::_M_replace_aux((string *)&local_68,(ulong)local_60,0,sVar20,'0');
            }
            if (local_128 < pbVar11) {
              uVar12 = std::__throw_out_of_range_fmt
                                 ("%s: __pos (which is %zu) > __size (which is %zu)",
                                  "basic_string_view::substr",pbVar11,local_128);
              __cxx11::string::_M_dispose((string *)&local_68);
                    /* WARNING: Subroutine does not return */
              _Unwind_Resume(uVar12);
                    /* catch() { ... } // from try @ 0010ff29 with catch @ 00110741
                       catch() { ... } // from try @ 00110646 with catch @ 00110741
                       catch() { ... } // from try @ 00110cd6 with catch @ 00110741 */
            }
            uVar24 = (long)local_128 - (long)pbVar11;
            pbVar11 = pbVar11 + (long)local_120;
            pbVar13 = local_60;
            if (0x7fffffffffffffffU - (long)local_60 < uVar24) {
              pbVar27 = (basic_format_context *)std::__throw_length_error("basic_string::append");
LAB_00110755:
              pbVar19 = (basic_format_context *)0xf;
            }
            else {
              pbVar23 = local_60 + uVar24;
              pbVar27 = local_68;
              if (local_68 == &local_58) goto LAB_00110755;
              pbVar19 = (basic_format_context *)CONCAT71(uStack_57,local_58);
            }
            if (pbVar19 < pbVar23) {
              __cxx11::string::_M_mutate
                        ((string *)&local_68,(ulong)pbVar13,0,(char *)pbVar11,uVar24);
            }
            else if (uVar24 != 0) {
              if (uVar24 == 1) {
                pbVar27[(long)pbVar13] = *pbVar11;
              }
              else {
                memcpy(pbVar27 + (long)pbVar13,pbVar11,uVar24);
              }
            }
            local_60 = pbVar23;
            local_68[(long)pbVar23] = (basic_format_context)0x0;
          }
          else {
            if (local_60 < pbVar11) {
              std::__throw_out_of_range_fmt
                        ("%s: __pos (which is %zu) > this->size() (which is %zu)",
                         "basic_string::insert",pbVar11,local_60);
LAB_0011082a:
              auVar29 = std::__throw_length_error("basic_string::_M_replace_aux");
LAB_00110836:
              pbVar13 = (basic_format_context *)0xf;
            }
            else {
              if (0x7fffffffffffffffU - (long)local_60 < local_138) goto LAB_0011082a;
              pbVar23 = local_60 + (long)local_138;
              if (local_68 == &local_58) goto LAB_00110836;
              pbVar13 = (basic_format_context *)CONCAT71(uStack_57,local_58);
            }
            if (pbVar13 < pbVar23) {
              __cxx11::string::_M_mutate
                        ((string *)&local_68,(ulong)pbVar11,0,(char *)0x0,(ulong)local_138);
            }
            else {
              sVar20 = auVar29._8_8_ - (long)pbVar11;
              if (sVar20 != 0) {
                pbVar13 = pbVar11 + auVar29._0_8_;
                if (sVar20 == 1) {
                  pbVar13[(long)local_138] = *pbVar13;
                }
                else {
                  memmove(pbVar13 + (long)local_138,pbVar13,sVar20);
                }
              }
            }
            if (local_138 == (basic_format_context *)0x1) {
              pbVar11[(long)local_68] = (basic_format_context)0x30;
            }
            else {
              memset(pbVar11 + (long)local_68,0x30,(size_t)local_138);
            }
            local_60 = pbVar23;
            local_68[(long)pbVar23] = (basic_format_context)0x0;
            if (bVar28) {
              local_68[(long)pbVar11] = (basic_format_context)0x2e;
            }
          }
          local_148 = local_68;
          pbVar27 = local_60;
        }
      }
      else {
        local_138 = local_130 + 1;
        pbVar11 = (basic_format_context *)
                  basic_string_view<char,std::char_traits<char>>::find
                            ((basic_string_view<char,std::char_traits<char>> *)&local_128,local_152,
                             (ulong)local_138);
        if (pbVar11 == (basic_format_context *)0xffffffffffffffff) {
          pbVar11 = pbVar27;
        }
        if (bVar28) {
          lVar14 = -1 - (long)local_148;
          if (pbVar23[(long)local_148] == (basic_format_context)0x30) {
            if (local_138 < pbVar27) {
              do {
                if (pbVar23[(long)local_138] != (basic_format_context)0x30) goto LAB_00110463;
                local_138 = local_138 + 1;
              } while (local_138 < pbVar27);
              local_138 = (basic_format_context *)0xffffffffffffffff;
            }
            else {
              local_138 = (basic_format_context *)0xffffffffffffffff;
            }
LAB_00110463:
            lVar14 = -(long)local_138;
          }
          pbVar19 = pbVar11 + lVar14;
          if (CONCAT44(uStack_14c,local_150) != 0) {
LAB_0011018e:
            sVar20 = CONCAT44(uStack_14c,local_150) - (long)pbVar19;
          }
        }
        else {
          sVar20 = 0;
        }
        bVar28 = local_130 == pbVar11;
        local_138 = (basic_format_context *)(bVar28 + sVar20);
        local_148 = pbVar23;
        if (local_138 != (basic_format_context *)0x0) goto LAB_001104bb;
      }
      local_108 = (basic_format_context *)&local_f8;
      local_100 = (basic_format_context *)0x0;
      local_f8 = (basic_format_context *)((ulong)local_f8 & 0xffffffffffffff00);
      pbVar23 = local_148;
      if (((byte)*param_2 & 0x20) == 0) goto LAB_001108f5;
    }
    local_108 = (basic_format_context *)&local_f8;
    local_100 = (basic_format_context *)0x0;
    if (in_RSI[0x20] == (basic_format_context)0x0) {
      std::locale::locale((locale *)(in_RSI + 0x18));
      in_RSI[0x20] = (basic_format_context)0x1;
    }
    std::locale::locale(local_40,(locale *)(in_RSI + 0x18));
                    /* try { // try from 001105af to 001105b3 has its CatchHandler @ 00110bee */
    _M_localize_abi_cxx11_(&local_128,param_2,pbVar27,local_148,(int)local_152,local_40);
    pbVar23 = local_f8;
    pbVar13 = local_108;
    if (local_108 == (basic_format_context *)&local_f8) {
      if (local_128 == (basic_format_context *)&local_118) goto LAB_00110c27;
LAB_001109db:
      local_f8 = local_118;
      local_108 = local_128;
      local_128 = (basic_format_context *)&local_118;
    }
    else if (local_128 == (basic_format_context *)&local_118) {
LAB_00110c27:
      if (local_120 != (basic_format_context *)0x0) {
        if (local_120 == (basic_format_context *)0x1) {
          *local_108 = local_118._0_1_;
        }
        else {
          uVar22 = (uint)local_120;
          uVar24 = (ulong)local_120 & 0xffffffff;
          if (uVar22 < 8) {
            if (((ulong)local_120 & 4) == 0) {
              if ((uVar22 != 0) && (*local_108 = local_118._0_1_, ((ulong)local_120 & 2) != 0)) {
                *(undefined2 *)(local_108 + (uVar24 - 2)) =
                     *(undefined2 *)((long)&local_120 + uVar24 + 6);
              }
            }
            else {
              *(undefined4 *)local_108 = local_118._0_4_;
              *(undefined4 *)(local_108 + (uVar24 - 4)) =
                   *(undefined4 *)((long)&local_120 + uVar24 + 4);
            }
          }
          else {
            *(basic_format_context **)local_108 = local_118;
            *(undefined8 *)(local_108 + (((ulong)local_120 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)&local_120 + ((ulong)local_120 & 0xffffffff));
            lVar14 = (long)local_108 - ((ulong)(local_108 + 8) & 0xfffffffffffffff8);
            uVar22 = (int)lVar14 + uVar22 & 0xfffffff8;
            if (7 < uVar22) {
              uVar8 = 0;
              do {
                *(undefined8 *)(((ulong)(local_108 + 8) & 0xfffffffffffffff8) + (ulong)uVar8) =
                     *(undefined8 *)((long)&local_118 + ((ulong)uVar8 - lVar14));
                uVar8 = uVar8 + 8;
              } while (uVar8 < uVar22);
            }
          }
        }
      }
      local_108[(long)local_120] = (basic_format_context)0x0;
    }
    else {
      local_108 = local_128;
      local_f8 = local_118;
      if (pbVar13 == (basic_format_context *)0x0) goto LAB_001109db;
      local_128 = pbVar13;
      local_118 = pbVar23;
    }
    local_100 = local_120;
    local_120 = (basic_format_context *)0x0;
    *local_128 = (basic_format_context)0x0;
    __cxx11::string::_M_dispose((string *)&local_128);
    std::locale::~locale(local_40);
    pbVar23 = local_148;
    if (local_100 != (basic_format_context *)0x0) {
      pbVar23 = local_108;
      pbVar27 = local_100;
    }
LAB_001108f5:
                    /* try { // try from 001108fb to 00110b83 has its CatchHandler @ 00110c1d */
    pbVar13 = (basic_format_context *)
              _Spec<char>::
              _M_get_width<std::basic_format_context<std::__format::_Sink_iter<char>,char>>
                        ((_Spec<char> *)param_2,in_RSI);
    if (pbVar27 < pbVar13) {
      uVar25 = *(undefined4 *)(param_2 + 8);
      bVar1 = *param_2;
      lVar14 = (long)pbVar13 - (long)pbVar27;
      p_Var3 = *(__format **)(in_RSI + 0x10);
      bVar17 = (byte)bVar1 & 3;
      if (((byte)bVar1 & 3) == 0) {
        if (((byte)bVar1 & 0x40) == 0) {
          bVar17 = 2;
          uVar25 = 0x20;
        }
        else if (_DAT_0011a370 < ABS(param_1)) {
          bVar17 = 2;
          uVar25 = 0x20;
        }
        else {
          bVar17 = 2;
          uVar25 = 0x30;
          if (0xf < (byte)__detail::__from_chars_alnum_to_val_table<false>::value[(byte)*local_148])
          {
            bVar1 = *pbVar23;
            pbVar13 = *(basic_format_context **)(p_Var3 + 0x18);
            *(basic_format_context **)(p_Var3 + 0x18) = pbVar13 + 1;
            *pbVar13 = bVar1;
            if (*(long *)(p_Var3 + 0x18) - *(long *)(p_Var3 + 8) == *(long *)(p_Var3 + 0x10)) {
              (*(code *)**(undefined8 **)p_Var3)(p_Var3);
            }
            pbVar23 = pbVar23 + 1;
            pbVar27 = pbVar27 + -1;
            bVar17 = 2;
            uVar25 = 0x30;
          }
        }
      }
      puVar15 = (undefined8 *)
                __write_padded<std::__format::_Sink_iter<char>,char>
                          (p_Var3,pbVar27,pbVar23,bVar17,lVar14,uVar25);
    }
    else {
      puVar15 = (undefined8 *)
                __write<std::__format::_Sink_iter<char>,char>
                          (*(__format **)(in_RSI + 0x10),pbVar27,pbVar23);
    }
    if (local_108 != (basic_format_context *)&local_f8) {
      operator_delete(local_108,(ulong)(local_f8 + 1));
    }
    if (local_68 != &local_58) {
      operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
    }
    return puVar15;
  case 3:
switchD_0010ff4b_caseD_3:
    local_152 = 'e';
    cVar26 = '\0';
    goto LAB_0010ffa1;
  case 4:
    local_152 = 'E';
    cVar26 = '\x01';
LAB_0010ffa1:
    iVar7 = 1;
    bVar28 = false;
    goto LAB_0010ffab;
  case 5:
switchD_0010ff4b_caseD_5:
    cVar26 = '\0';
    goto LAB_0010ff7c;
  case 6:
    cVar26 = '\x01';
LAB_0010ff7c:
    iVar7 = 2;
    local_152 = 'e';
    bVar28 = false;
    goto LAB_0010ffab;
  case 7:
switchD_0010ff4b_caseD_7:
    local_152 = 'e';
    cVar26 = '\0';
    goto LAB_0010ff61;
  case 8:
    local_152 = 'E';
    cVar26 = '\x01';
LAB_0010ff61:
    iVar7 = 3;
    bVar28 = true;
    goto LAB_0010ffab;
  case 9:
    local_140._7_1_ = 'e';
    local_138._0_1_ = '\0';
    unaff_R12 = (basic_format_context *)0x0;
    break;
  case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
    if ((long)(int)(&switchD_0010ff4b::switchdataD_00117930)[uVar22] < -0x117930) {
      halt_baddata();
    }
    *pbVar9 = *pbVar9 ^ (byte)pbVar9;
    goto LAB_00110fc2;
  case 0xc:
    *in_RCX = *in_RCX & (byte)pbVar9;
    break;
  case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe:
    switch(uVar22) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  case 0xf:
    local_128 = (basic_format_context *)0x6;
    local_140._7_1_ = 'E';
    unaff_R12 = (basic_format_context *)0x1;
    param_2 = (basic_format_context *)0x1;
    local_138._0_1_ = '\0';
  }
  auVar31 = std::to_chars(CONCAT17(local_151,CONCAT16(local_152,uStack_158)),abStack_b7,&pbStack_38,
                          (ulong)param_2 & 0xffffffff,(ulong)local_128 & 0xffffffff);
  in_RSI = auVar31._0_8_;
  if (auVar31._8_4_ == 0x4b) {
    if ((int)param_2 == 2) {
      pbVar13 = local_128 + 0x134c;
    }
    else {
      pbVar13 = local_128 + 8;
    }
    local_120 = (basic_format_context *)CONCAT71(local_120._1_7_,1);
    if (pbVar13 < (basic_format_context *)0x81) {
      pbVar13 = (basic_format_context *)0x100;
    }
    __cxx11::string::reserve((string *)&pbStack_38,(ulong)pbVar13);
    local_118 = (basic_format_context *)&stack0xffffffffffffffd8;
    do {
      pbVar13 = unaff_RBP;
      if (pbStack_38 == local_118) {
        pbVar13 = (basic_format_context *)0xf;
      }
      __cxx11::string::reserve((string *)&pbStack_38,(long)pbVar13 * 2);
      pbVar23 = pbStack_38;
      if ((char)local_120 == '\0') {
        if ((int)param_2 == 0) {
          auVar31 = std::to_chars(CONCAT17(local_151,CONCAT16(local_152,uStack_158)));
        }
        else {
          auVar31 = std::to_chars(CONCAT17(local_151,CONCAT16(local_152,uStack_158)),pbStack_38 + 1,
                                  pbStack_38 + ((long)pbVar13 * 2 - 1),(ulong)param_2 & 0xffffffff);
        }
      }
      else {
        auVar31 = std::to_chars(CONCAT17(local_151,CONCAT16(local_152,uStack_158)),pbStack_38 + 1,
                                pbStack_38 + ((long)pbVar13 * 2 - 1),(ulong)param_2 & 0xffffffff,
                                (ulong)local_128 & 0xffffffff);
      }
      in_RSI = auVar31._0_8_;
      if (auVar31._8_4_ == 0) {
        unaff_RBX = in_RSI + -(long)pbVar23;
        pbStack_38[(long)unaff_RBX] = (basic_format_context)0x0;
        param_2 = pbStack_38 + 1;
        local_108 = pbStack_38 + (long)unaff_RBX;
        goto LAB_00110e95;
      }
      unaff_RBX = (basic_format_context *)0x0;
      *pbStack_38 = (basic_format_context)0x0;
    } while (auVar31._8_4_ == 0x4b);
    param_2 = pbStack_38 + 1;
    local_108 = pbStack_38;
  }
  else {
    local_108 = (basic_format_context *)&pbStack_38;
    param_2 = abStack_b7;
  }
LAB_00110e95:
  iVar7 = (int)local_108;
  pbVar13 = param_2;
  if ((char)unaff_R12 != '\0') {
    for (; pbVar13 != in_RSI; pbVar13 = pbVar13 + 1) {
      iVar7 = toupper((int)(char)*pbVar13);
      *pbVar13 = SUB41(iVar7,0);
    }
  }
  auVar4[6] = local_152;
  auVar4._0_6_ = uStack_158;
  auVar4[7] = local_151;
  auVar4._8_4_ = local_150;
  auVar4._12_4_ = uStack_14c;
  uVar22 = movmskps(iVar7,auVar4);
  uVar6 = local_120._1_7_;
  local_120 = (basic_format_context *)CONCAT71(local_120._1_7_,1);
  if ((uVar22 & 8) == 0) {
    if (((byte)*this & 0xc) == 4) {
      param_2[-1] = (basic_format_context)0x2b;
      param_2 = param_2 + -1;
    }
    else {
      local_120 = (basic_format_context *)((ulong)local_120._1_7_ << 8);
      if (((byte)*this & 0xc) == 0xc) {
        param_2[-1] = (basic_format_context)0x20;
        param_2 = param_2 + -1;
        local_120 = (basic_format_context *)CONCAT71(uVar6,1);
      }
    }
  }
  unaff_R12 = in_RSI + -(long)param_2;
  if (((byte)*this & 0x10) == 0) {
    pbStack_d8 = (basic_format_context *)auStack_c8;
    pbStack_d0 = (basic_format_context *)0x0;
    auStack_c8[0] = auStack_c8[0] & 0xffffffffffffff00;
    pbVar13 = param_2;
    if (((byte)*this & 0x20) != 0) {
      uVar12 = CONCAT17(local_151,CONCAT16(local_152,uStack_158));
      lVar14 = __unordtf2(uVar12,0xffffffffffffffff);
      pbVar13 = param_2;
      if ((lVar14 == 0) &&
         (lVar14 = __gttf2(uVar12,0xffffffffffffffff), local_120 = param_2, pbVar13 = param_2,
         lVar14 < 1)) goto LAB_00111360;
    }
  }
  else {
    local_118 = (basic_format_context *)CONCAT17(local_151,CONCAT16(local_152,uStack_158));
    uStack_110 = uVar24 & 0x7fffffffffffffff;
    lVar14 = __unordtf2(local_118,0xffffffffffffffff);
    if ((lVar14 != 0) || (lVar14 = __gttf2(local_118,0xffffffffffffffff), 0 < lVar14)) {
      pbStack_d8 = (basic_format_context *)auStack_c8;
      pbStack_d0 = (basic_format_context *)0x0;
      auStack_c8[0] = auStack_c8[0] & 0xffffffffffffff00;
      pbVar13 = param_2;
      goto LAB_00111713;
    }
    local_f8 = unaff_R12;
    local_f0 = param_2;
    if (((unaff_R12 == (basic_format_context *)0x0) ||
        (pvVar10 = memchr(param_2,0x2e,(size_t)unaff_R12), pvVar10 == (void *)0x0)) ||
       (local_100 = (basic_format_context *)((long)pvVar10 - (long)param_2),
       local_100 == (basic_format_context *)0xffffffffffffffff)) {
      unaff_R15 = (basic_format_context *)
                  basic_string_view<char,std::char_traits<char>>::find
                            ((basic_string_view<char,std::char_traits<char>> *)&local_f8,
                             local_140._7_1_,0);
      if (unaff_R15 == (basic_format_context *)0xffffffffffffffff) {
        unaff_R15 = unaff_R12;
      }
      if ((char)local_138 == '\0') {
        local_118 = (basic_format_context *)0x1;
        local_128 = (basic_format_context *)0x0;
        local_138._0_1_ = '\x01';
      }
      else {
        local_118 = (basic_format_context *)0x1;
        if (local_128 != (basic_format_context *)0x0) {
          puVar18 = (uint *)(unaff_R15 + -((ulong)local_120 & 0xff));
          local_100 = unaff_R15;
          goto LAB_00110fce;
        }
      }
LAB_0011129a:
      if ((unaff_RBX == (basic_format_context *)0x0) && (local_118 <= local_108 + -(long)in_RSI)) {
        pbVar13 = param_2 + (long)unaff_R15;
        memmove(local_118 + (long)unaff_R15 + (long)param_2,pbVar13,
                (long)unaff_R12 - (long)unaff_R15);
        if ((char)local_138 != '\0') {
          unaff_R15 = unaff_R15 + 1;
          *pbVar13 = (basic_format_context)0x2e;
        }
        memset(param_2 + (long)unaff_R15,0x30,(size_t)local_128);
        local_120 = local_f0;
        unaff_R12 = local_118 + (long)local_f8;
      }
      else {
        __cxx11::string::reserve((string *)&pbStack_38,(ulong)(unaff_R12 + (long)local_118));
        auVar30._8_8_ = unaff_RBX;
        auVar30._0_8_ = pbStack_38;
        if (unaff_RBX == (basic_format_context *)0x0) {
          pbVar13 = local_f8;
          if (unaff_R15 <= local_f8) {
            pbVar13 = unaff_R15;
          }
          __cxx11::string::_M_replace((string *)&pbStack_38,0,0,(char *)local_f0,(ulong)pbVar13);
          if ((char)local_138 != '\0') {
            __cxx11::string::push_back((string *)&pbStack_38,'.');
          }
          if (local_128 != (basic_format_context *)0x0) {
            __cxx11::string::_M_replace_aux((string *)&pbStack_38,0,0,(ulong)local_128,'0');
          }
          if (local_f8 < unaff_R15) {
            uVar12 = std::__throw_out_of_range_fmt
                               ("%s: __pos (which is %zu) > __size (which is %zu)",
                                "basic_string_view::substr",unaff_R15,local_f8);
            __cxx11::string::_M_dispose((string *)&pbStack_38);
                    /* WARNING: Subroutine does not return */
            _Unwind_Resume(uVar12);
          }
          unaff_R12 = local_f8 + -(long)unaff_R15;
          pbVar13 = unaff_R15 + (long)local_f0;
          if (unaff_R12 < (basic_format_context *)0x8000000000000000) {
            pbVar23 = pbStack_38;
            pbVar11 = unaff_RBP;
            param_2 = unaff_R12;
            pbVar27 = unaff_R12;
            if (pbStack_38 == (basic_format_context *)&stack0xffffffffffffffd8) goto LAB_0011153f;
          }
          else {
            pbVar23 = (basic_format_context *)std::__throw_length_error("basic_string::append");
            pbVar27 = unaff_R12;
LAB_0011153f:
            pbVar11 = (basic_format_context *)0xf;
            unaff_R12 = param_2;
          }
          if (pbVar11 < unaff_R12) {
            __cxx11::string::_M_mutate
                      ((string *)&pbStack_38,(ulong)unaff_RBX,0,(char *)pbVar13,(ulong)pbVar27);
          }
          else if (pbVar27 != (basic_format_context *)0x0) {
            if (pbVar27 == (basic_format_context *)0x1) {
              pbVar23[(long)unaff_RBX] = *pbVar13;
            }
            else {
              memcpy(pbVar23 + (long)unaff_RBX,pbVar13,(size_t)pbVar27);
            }
          }
          pbStack_38[(long)unaff_R12] = (basic_format_context)0x0;
        }
        else {
          if (unaff_RBX < unaff_R15) {
            std::__throw_out_of_range_fmt
                      ("%s: __pos (which is %zu) > this->size() (which is %zu)",
                       "basic_string::insert",unaff_R15,unaff_RBX);
LAB_00111614:
            auVar30 = std::__throw_length_error("basic_string::_M_replace_aux");
LAB_00111620:
            pbVar13 = (basic_format_context *)0xf;
          }
          else {
            if ((basic_format_context *)(0x7fffffffffffffff - (long)unaff_RBX) < local_118)
            goto LAB_00111614;
            param_2 = unaff_RBX + (long)local_118;
            pbVar13 = unaff_RBP;
            if (pbStack_38 == (basic_format_context *)&stack0xffffffffffffffd8) goto LAB_00111620;
          }
          if (pbVar13 < param_2) {
            __cxx11::string::_M_mutate
                      ((string *)&pbStack_38,(ulong)unaff_R15,0,(char *)0x0,(ulong)local_118);
          }
          else {
            sVar20 = auVar30._8_8_ - (long)unaff_R15;
            if (sVar20 != 0) {
              pbVar13 = unaff_R15 + auVar30._0_8_;
              if (sVar20 == 1) {
                pbVar13[(long)local_118] = *pbVar13;
              }
              else {
                memmove(pbVar13 + (long)local_118,pbVar13,sVar20);
              }
            }
          }
          if (local_118 == (basic_format_context *)0x1) {
            unaff_R15[(long)pbStack_38] = (basic_format_context)0x30;
          }
          else {
            memset(unaff_R15 + (long)pbStack_38,0x30,(size_t)local_118);
          }
          pbStack_38[(long)param_2] = (basic_format_context)0x0;
          unaff_R12 = param_2;
          if ((char)local_138 != '\0') {
            pbStack_38[(long)unaff_R15] = (basic_format_context)0x2e;
          }
        }
        local_120 = pbStack_38;
      }
    }
    else {
      local_118 = local_100 + 1;
      unaff_R15 = (basic_format_context *)
                  basic_string_view<char,std::char_traits<char>>::find
                            ((basic_string_view<char,std::char_traits<char>> *)&local_f8,
                             local_140._7_1_,(ulong)local_118);
      if (unaff_R15 == (basic_format_context *)0xffffffffffffffff) {
        unaff_R15 = unaff_R12;
      }
      if ((char)local_138 == '\0') {
        local_128 = (basic_format_context *)0x0;
      }
      else {
        puVar18 = (uint *)(unaff_R15 + (-1 - ((ulong)local_120 & 0xff)));
        if (param_2[(ulong)local_120 & 0xff] == (basic_format_context)0x30) {
          if (local_118 < unaff_R12) {
            do {
              if (param_2[(long)local_118] != (basic_format_context)0x30) goto LAB_00111242;
              local_118 = local_118 + 1;
            } while (local_118 < unaff_R12);
            local_118 = (basic_format_context *)0xffffffffffffffff;
          }
          else {
            local_118 = (basic_format_context *)0xffffffffffffffff;
          }
LAB_00111242:
          puVar18 = (uint *)(unaff_R15 + -(long)local_118);
        }
LAB_00110fc2:
        if (local_128 != (basic_format_context *)0x0) {
LAB_00110fce:
          local_128 = local_128 + -(long)puVar18;
        }
      }
      local_138._0_1_ = local_100 == unaff_R15;
      local_118 = local_128 + (byte)(char)local_138;
      local_120 = param_2;
      if (local_118 != (basic_format_context *)0x0) goto LAB_0011129a;
    }
    pbStack_d8 = (basic_format_context *)auStack_c8;
    pbStack_d0 = (basic_format_context *)0x0;
    auStack_c8[0] = auStack_c8[0] & 0xffffffffffffff00;
    param_2 = local_120;
    pbVar13 = local_120;
    if (((byte)*this & 0x20) != 0) {
LAB_00111360:
      if (unaff_R14[0x20] == (basic_format_context)0x0) {
        std::locale::locale((locale *)(unaff_R14 + 0x18));
        unaff_R14[0x20] = (basic_format_context)0x1;
      }
      std::locale::locale((locale *)&stack0xfffffffffffffff0,(locale *)(unaff_R14 + 0x18));
      _M_localize_abi_cxx11_
                (&local_f8,this,unaff_R12,local_120,(int)local_140._7_1_,
                 (locale *)&stack0xfffffffffffffff0);
      uVar24 = auStack_c8[0];
      pbVar13 = pbStack_d8;
      if (pbStack_d8 == (basic_format_context *)auStack_c8) {
        if (local_f8 == (basic_format_context *)&local_e8) goto LAB_00111b2a;
LAB_00111828:
        auStack_c8[0] = local_e8;
        pbStack_d8 = local_f8;
        local_f8 = (basic_format_context *)&local_e8;
      }
      else if (local_f8 == (basic_format_context *)&local_e8) {
LAB_00111b2a:
        if (local_f0 != (basic_format_context *)0x0) {
          if (local_f0 == (basic_format_context *)0x1) {
            *pbStack_d8 = local_e8._0_1_;
          }
          else {
            uVar22 = (uint)local_f0;
            uVar24 = (ulong)local_f0 & 0xffffffff;
            if (uVar22 < 8) {
              if (((ulong)local_f0 & 4) == 0) {
                if ((uVar22 != 0) && (*pbStack_d8 = local_e8._0_1_, ((ulong)local_f0 & 2) != 0)) {
                  *(undefined2 *)(pbStack_d8 + (uVar24 - 2)) =
                       *(undefined2 *)((long)&local_f0 + uVar24 + 6);
                }
              }
              else {
                *(undefined4 *)pbStack_d8 = (undefined4)local_e8;
                *(undefined4 *)(pbStack_d8 + (uVar24 - 4)) =
                     *(undefined4 *)((long)&local_f0 + uVar24 + 4);
              }
            }
            else {
              *(ulong *)pbStack_d8 = local_e8;
              *(undefined8 *)(pbStack_d8 + (((ulong)local_f0 & 0xffffffff) - 8)) =
                   *(undefined8 *)((long)&local_f0 + ((ulong)local_f0 & 0xffffffff));
              lVar14 = (long)pbStack_d8 - ((ulong)(pbStack_d8 + 8) & 0xfffffffffffffff8);
              uVar22 = (int)lVar14 + uVar22 & 0xfffffff8;
              if (7 < uVar22) {
                uVar8 = 0;
                do {
                  *(undefined8 *)(((ulong)(pbStack_d8 + 8) & 0xfffffffffffffff8) + (ulong)uVar8) =
                       *(undefined8 *)((long)&local_e8 + ((ulong)uVar8 - lVar14));
                  uVar8 = uVar8 + 8;
                } while (uVar8 < uVar22);
              }
            }
          }
        }
        pbStack_d8[(long)local_f0] = (basic_format_context)0x0;
      }
      else {
        pbStack_d8 = local_f8;
        auStack_c8[0] = local_e8;
        if (pbVar13 == (basic_format_context *)0x0) goto LAB_00111828;
        local_f8 = pbVar13;
        local_e8 = uVar24;
      }
      pbStack_d0 = local_f0;
      local_f0 = (basic_format_context *)0x0;
      *local_f8 = (basic_format_context)0x0;
      __cxx11::string::_M_dispose((string *)&local_f8);
      std::locale::~locale((locale *)&stack0xfffffffffffffff0);
      param_2 = local_120;
      pbVar13 = local_120;
      if (pbStack_d0 != (basic_format_context *)0x0) {
        param_2 = pbStack_d8;
        unaff_R12 = pbStack_d0;
      }
    }
  }
LAB_00111713:
  local_120 = pbVar13;
  pbVar13 = (basic_format_context *)
            _Spec<char>::
            _M_get_width<std::basic_format_context<std::__format::_Sink_iter<char>,char>>
                      (this,unaff_R14);
  if (unaff_R12 < pbVar13) {
    uVar25 = *(undefined4 *)(this + 8);
    _Var2 = *this;
    lVar14 = (long)pbVar13 - (long)unaff_R12;
    p_Var3 = *(__format **)(unaff_R14 + 0x10);
    bVar17 = (byte)_Var2 & 3;
    if (((byte)_Var2 & 3) == 0) {
      if (((byte)_Var2 & 0x40) == 0) {
        bVar17 = 2;
        uVar25 = 0x20;
      }
      else {
        lVar16 = __unordtf2(CONCAT17(local_151,CONCAT16(local_152,uStack_158)),0xffffffffffffffff);
        if ((lVar16 == 0) &&
           (lVar16 = __gttf2(CONCAT17(local_151,CONCAT16(local_152,uStack_158)),0xffffffffffffffff),
           lVar16 < 1)) {
          bVar17 = 2;
          uVar25 = 0x30;
          if (0xf < (byte)__detail::__from_chars_alnum_to_val_table<false>::value[(byte)*local_120])
          {
            bVar1 = *param_2;
            pbVar13 = *(basic_format_context **)(p_Var3 + 0x18);
            *(basic_format_context **)(p_Var3 + 0x18) = pbVar13 + 1;
            *pbVar13 = bVar1;
            if (*(long *)(p_Var3 + 0x18) - *(long *)(p_Var3 + 8) == *(long *)(p_Var3 + 0x10)) {
              (*(code *)**(undefined8 **)p_Var3)(p_Var3);
            }
            param_2 = param_2 + 1;
            unaff_R12 = unaff_R12 + -1;
            bVar17 = 2;
            uVar25 = 0x30;
          }
        }
        else {
          bVar17 = 2;
          uVar25 = 0x20;
        }
      }
    }
    puVar15 = (undefined8 *)
              __write_padded<std::__format::_Sink_iter<char>,char>
                        (p_Var3,unaff_R12,param_2,bVar17,lVar14,uVar25);
  }
  else {
    puVar15 = *(undefined8 **)(unaff_R14 + 0x10);
    if (unaff_R12 != (basic_format_context *)0x0) {
      pvVar10 = (void *)puVar15[3];
      pbVar13 = (basic_format_context *)(puVar15[2] - ((long)pvVar10 - puVar15[1]));
      if (pbVar13 <= unaff_R12) {
        do {
          pbVar23 = pbVar13;
          if (unaff_R12 <= pbVar13) {
            pbVar23 = unaff_R12;
          }
          if (pbVar23 != (basic_format_context *)0x0) {
            memcpy(pvVar10,param_2,(size_t)pbVar23);
          }
          puVar15[3] = pbVar13 + puVar15[3];
          param_2 = param_2 + (long)pbVar13;
          unaff_R12 = unaff_R12 + -(long)pbVar13;
          (**(code **)*puVar15)(puVar15);
          pvVar10 = (void *)puVar15[3];
          pbVar13 = (basic_format_context *)(puVar15[2] - ((long)pvVar10 - puVar15[1]));
        } while (pbVar13 <= unaff_R12);
        if (unaff_R12 == (basic_format_context *)0x0) goto LAB_00111a8d;
      }
      memcpy(pvVar10,param_2,(size_t)unaff_R12);
      puVar15[3] = unaff_R12 + puVar15[3];
    }
  }
LAB_00111a8d:
  if (pbStack_d8 != (basic_format_context *)auStack_c8) {
    operator_delete(pbStack_d8,auStack_c8[0] + 1);
  }
  if (pbStack_38 != (basic_format_context *)&stack0xffffffffffffffd8) {
    operator_delete(pbStack_38,(ulong)(unaff_RBP + 1));
  }
  return puVar15;
}

