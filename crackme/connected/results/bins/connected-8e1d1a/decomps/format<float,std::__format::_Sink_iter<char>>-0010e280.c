
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0010f381) overlaps instruction at (ram,0x0010f37f)
    */
/* WARNING: Removing unreachable block (ram,0x0010f365) */
/* WARNING: Removing unreachable block (ram,0x0010f5e7) */
/* WARNING: Removing unreachable block (ram,0x0010f633) */
/* WARNING: Removing unreachable block (ram,0x0010f5ee) */
/* WARNING: Removing unreachable block (ram,0x0010f600) */
/* WARNING: Removing unreachable block (ram,0x0010f60c) */
/* WARNING: Removing unreachable block (ram,0x0010f61a) */
/* WARNING: Removing unreachable block (ram,0x0010f623) */
/* WARNING: Removing unreachable block (ram,0x0010f557) */
/* WARNING: Removing unreachable block (ram,0x0010f5bb) */
/* WARNING: Removing unreachable block (ram,0x0010f55b) */
/* WARNING: Removing unreachable block (ram,0x0010f6b7) */
/* WARNING: Removing unreachable block (ram,0x0010f6c8) */
/* std::basic_format_context<std::__format::_Sink_iter<char>, char>::iterator
   std::__format::__formatter_fp<char>::format<float, std::__format::_Sink_iter<char> >(float,
   std::basic_format_context<std::__format::_Sink_iter<char>, char>&) const */

undefined8 * __thiscall
std::__format::__formatter_fp<char>::format<float,std::__format::_Sink_iter<char>>
          (__formatter_fp<char> *this,float param_1,basic_format_context *param_2)

{
  __formatter_fp<char> _Var1;
  basic_format_context bVar2;
  _Spec<char> _Var3;
  __format *p_Var4;
  undefined1 auVar5 [16];
  bool bVar6;
  int iVar7;
  char *pcVar9;
  void *pvVar10;
  basic_format_context *pbVar11;
  undefined8 uVar12;
  uint uVar8;
  basic_format_context *pbVar13;
  undefined8 *puVar14;
  basic_format_context **ppbVar15;
  byte bVar16;
  basic_format_context *pbVar17;
  size_t sVar18;
  char cVar19;
  uint uVar20;
  basic_format_context *pbVar21;
  ulong uVar22;
  undefined4 uVar23;
  char cVar24;
  basic_format_context *unaff_R12;
  basic_format_context *pbVar25;
  basic_format_context *unaff_R13;
  long lVar26;
  basic_format_context *unaff_R14;
  bool bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  char local_152;
  double local_150;
  undefined8 local_148;
  basic_format_context *local_140;
  basic_format_context *local_138;
  basic_format_context *local_130;
  basic_format_context *local_128;
  undefined8 local_120;
  basic_format_context *local_118;
  basic_format_context *pbStack_110;
  undefined4 uStack_10c;
  basic_format_context *local_108 [2];
  basic_format_context *local_f8;
  basic_format_context *local_f0;
  undefined8 local_e8;
  basic_format_context abStack_d7 [111];
  basic_format_context *local_68;
  basic_format_context *local_60;
  basic_format_context local_58;
  undefined7 uStack_57;
  basic_format_context *pbStack_50;
  basic_format_context *pbStack_48;
  locale local_40 [16];
  _Spec<char> *this_00;
  
  local_68 = &local_58;
  local_60 = (basic_format_context *)0x0;
  local_58 = (basic_format_context)0x0;
  uVar20 = (byte)this[1] & 6;
  this_00 = (_Spec<char> *)(ulong)uVar20;
  cVar19 = (char)uVar20;
  if (((byte)this[1] & 6) == 0) {
    switch((byte)this[1] >> 3 & 0xf) {
    case 0:
      local_150 = 2.96439387504748e-323;
LAB_0010e60b:
      auVar30 = std::to_chars((char *)((long)&local_e8 + 1),(char *)&local_68,param_1);
      iVar7 = 0;
      local_152 = 'e';
      cVar24 = '\0';
      break;
    case 1:
      local_150 = 2.96439387504748e-323;
      goto switchD_0010e310_caseD_1;
    case 2:
      local_150 = 2.96439387504748e-323;
      local_152 = 'P';
      unaff_R12 = (basic_format_context *)0x1;
      goto LAB_0010e3c1;
    case 3:
      local_150 = 2.96439387504748e-323;
      goto switchD_0010e310_caseD_3;
    case 4:
      local_150 = 2.96439387504748e-323;
      local_152 = 'E';
      cVar24 = '\x01';
      goto LAB_0010e366;
    case 5:
      local_150 = 2.96439387504748e-323;
      goto switchD_0010e310_caseD_5;
    case 6:
      local_150 = 2.96439387504748e-323;
      cVar24 = '\x01';
      goto LAB_0010e341;
    case 7:
      local_150 = 2.96439387504748e-323;
      goto switchD_0010e310_caseD_7;
    case 8:
      local_150 = 2.96439387504748e-323;
      local_152 = 'E';
      cVar24 = '\x01';
      goto LAB_0010e326;
    default:
      goto switchD_0010e2ec_default;
    }
    goto LAB_0010e407;
  }
                    /* try { // try from 0010e2ee to 0010e83d has its CatchHandler @ 0010ea8c */
  local_150 = (double)_Spec<char>::
                      _M_get_precision<std::basic_format_context<std::__format::_Sink_iter<char>,char>>
                                ((_Spec<char> *)this,param_2);
  uVar20 = (byte)this[1] >> 3 & 0xf;
  uVar22 = (ulong)(int)(&switchD_0010e310::switchdataD_001178a0)[uVar20];
  pcVar9 = (char *)((long)&switchD_0010e310::switchdataD_001178a0 + uVar22);
  switch(uVar20) {
  case 0:
    if (cVar19 == '\0') goto LAB_0010e60b;
    iVar7 = 3;
    local_152 = 'e';
    bVar27 = false;
    cVar24 = '\0';
    goto LAB_0010e370;
  case 1:
switchD_0010e310_caseD_1:
    local_152 = 'e';
    unaff_R12 = (basic_format_context *)0x0;
    break;
  case 2:
    local_152 = 'P';
    unaff_R12 = (basic_format_context *)0x1;
    break;
  case 3:
switchD_0010e310_caseD_3:
    local_152 = 'e';
    cVar24 = '\0';
    goto LAB_0010e366;
  case 4:
    local_152 = 'E';
    cVar24 = '\x01';
LAB_0010e366:
    iVar7 = 1;
    bVar27 = false;
    goto LAB_0010e370;
  case 5:
switchD_0010e310_caseD_5:
    cVar24 = '\0';
    goto LAB_0010e341;
  case 6:
    cVar24 = '\x01';
LAB_0010e341:
    iVar7 = 2;
    local_152 = 'e';
    bVar27 = false;
    goto LAB_0010e370;
  case 7:
switchD_0010e310_caseD_7:
    local_152 = 'e';
    cVar24 = '\0';
    goto LAB_0010e326;
  case 8:
    local_152 = 'E';
    cVar24 = '\x01';
LAB_0010e326:
    iVar7 = 3;
    bVar27 = true;
    goto LAB_0010e370;
  case 9:
    local_148._6_1_ = 'e';
    bVar27 = false;
    goto LAB_0010f1b1;
  case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
    if ((long)uVar22 < -0x1178a0) {
      halt_baddata();
    }
    *pcVar9 = (*pcVar9 - (char)pcVar9) - (0xffffffffffee875f < uVar22);
    if (local_140 != (basic_format_context *)0x0) {
      local_140 = (basic_format_context *)((long)local_140 - 0x1178a0);
    }
    goto LAB_0010f6e6;
  case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe:
    switch(uVar20) {
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
    local_140 = (basic_format_context *)0x6;
    local_148._6_1_ = 'E';
    bVar27 = true;
    this = (__formatter_fp<char> *)0x1;
LAB_0010f1b1:
    auVar30 = std::to_chars(local_150,abStack_d7,&local_58,(ulong)this & 0xffffffff,
                            (ulong)local_140 & 0xffffffff);
    unaff_R12 = auVar30._0_8_;
    if (auVar30._8_4_ == 0x4b) {
      uVar22 = (long)local_140 + 8;
      if ((int)this == 2) {
        local_118 = (basic_format_context *)((ulong)local_118 & 0xffffffff00000000);
        frexp(local_150,(int *)&local_118);
        if (0 < (int)local_118) {
          uVar22 = uVar22 + ((uint)((int)local_118 * 0xfa4) / 0x33f5 + 1);
        }
      }
      if (uVar22 < 0x81) {
        uVar22 = 0x100;
      }
      __cxx11::string::reserve((string *)&local_58,uVar22);
      do {
        pbVar13 = pbStack_48;
        if ((basic_format_context **)CONCAT71(uStack_57,local_58) == &pbStack_48) {
          pbVar13 = (basic_format_context *)0xf;
        }
        __cxx11::string::reserve((string *)&local_58,(long)pbVar13 * 2);
        lVar26 = CONCAT71(uStack_57,local_58);
        auVar30 = std::to_chars(local_150,lVar26 + 1,lVar26 + -1 + (long)pbVar13 * 2,
                                (ulong)this & 0xffffffff,(ulong)local_140 & 0xffffffff);
        unaff_R12 = auVar30._0_8_;
        if (auVar30._8_4_ == 0) {
          pbStack_50 = unaff_R12 + -lVar26;
          pbStack_50[CONCAT71(uStack_57,local_58)] = (basic_format_context)0x0;
          this = (__formatter_fp<char> *)(CONCAT71(uStack_57,local_58) + 1);
          local_130 = pbStack_50 + CONCAT71(uStack_57,local_58);
          goto LAB_0010f27a;
        }
        pbStack_50 = (basic_format_context *)0x0;
        *(undefined1 *)CONCAT71(uStack_57,local_58) = 0;
      } while (auVar30._8_4_ == 0x4b);
      local_130 = (basic_format_context *)CONCAT71(uStack_57,local_58);
      this = (__formatter_fp<char> *)(local_130 + 1);
    }
    else {
      local_130 = &local_58;
      this = (__formatter_fp<char> *)abStack_d7;
    }
LAB_0010f27a:
    iVar7 = (int)local_130;
    pbVar13 = (basic_format_context *)this;
    if (bVar27) {
      for (; pbVar13 != unaff_R12; pbVar13 = pbVar13 + 1) {
        iVar7 = toupper((int)(char)*pbVar13);
        *pbVar13 = SUB41(iVar7,0);
      }
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_150;
    uVar20 = movmskpd(iVar7,auVar5);
    if ((uVar20 & 1) == 0) {
      if (((byte)*this_00 & 0xc) == 4) {
        ((basic_format_context *)this)[-1] = (basic_format_context)0x2b;
        this = (__formatter_fp<char> *)((basic_format_context *)this + -1);
      }
      else if (((byte)*this_00 & 0xc) == 0xc) {
        ((basic_format_context *)this)[-1] = (basic_format_context)0x20;
        this = (__formatter_fp<char> *)((basic_format_context *)this + -1);
      }
    }
    unaff_R14 = unaff_R12 + -(long)this;
    local_138 = (basic_format_context *)this;
    if (((byte)*this_00 & 0x10) == 0) {
      local_f8 = (basic_format_context *)&local_e8;
      local_f0 = (basic_format_context *)0x0;
      local_e8 = (basic_format_context *)((ulong)local_e8._1_7_ << 8);
      if ((((byte)*this_00 & 0x20) == 0) || (1.79769313486232e+308 < ABS(local_150)))
      goto LAB_0010fabc;
    }
    else {
      if (1.79769313486232e+308 < ABS(local_150)) {
        local_f8 = (basic_format_context *)&local_e8;
        local_f0 = (basic_format_context *)0x0;
        local_e8 = (basic_format_context *)((ulong)local_e8._1_7_ << 8);
        goto LAB_0010fabc;
      }
      local_118 = unaff_R14;
      pbStack_110 = (basic_format_context *)this;
      if (((unaff_R14 == (basic_format_context *)0x0) ||
          (pvVar10 = memchr(this,0x2e,(size_t)unaff_R14), pvVar10 == (void *)0x0)) ||
         (local_120 = (basic_format_context *)((long)pvVar10 - (long)this),
         local_120 == (basic_format_context *)0xffffffffffffffff)) {
        param_2 = (basic_format_context *)
                  basic_string_view<char,std::char_traits<char>>::find
                            ((basic_string_view<char,std::char_traits<char>> *)&local_118,
                             local_148._6_1_,0);
        if (param_2 == (basic_format_context *)0xffffffffffffffff) {
          param_2 = unaff_R14;
        }
        local_128 = (basic_format_context *)0x1;
        local_140 = (basic_format_context *)0x0;
        bVar27 = true;
LAB_0010f67b:
        if ((pbStack_50 == (basic_format_context *)0x0) &&
           (local_128 <= local_130 + -(long)unaff_R12)) {
          pbVar13 = (basic_format_context *)this + (long)param_2;
          memmove(local_128 + (long)param_2 + (long)this,pbVar13,(long)unaff_R14 - (long)param_2);
          if (bVar27) {
            param_2 = param_2 + 1;
            *pbVar13 = (basic_format_context)0x2e;
          }
          memset((basic_format_context *)this + (long)param_2,0x30,(size_t)local_140);
          local_138 = pbStack_110;
          unaff_R14 = local_128 + (long)local_118;
        }
        else {
          __cxx11::string::reserve((string *)&local_58,(ulong)(unaff_R14 + (long)local_128));
          if (pbStack_50 == (basic_format_context *)0x0) {
            pbVar13 = local_118;
            if (param_2 <= local_118) {
              pbVar13 = param_2;
            }
            __cxx11::string::_M_replace((string *)&local_58,0,0,(char *)pbStack_110,(ulong)pbVar13);
            if (bVar27) {
              __cxx11::string::push_back((string *)&local_58,'.');
            }
            if (local_140 != (basic_format_context *)0x0) {
              __cxx11::string::_M_replace_aux
                        ((string *)&local_58,(ulong)pbStack_50,0,(ulong)local_140,'0');
            }
            if (local_118 < param_2) {
              uVar12 = std::__throw_out_of_range_fmt
                                 ("%s: __pos (which is %zu) > __size (which is %zu)",
                                  "basic_string_view::substr",param_2,local_118);
              __cxx11::string::_M_dispose((string *)&local_58);
                    /* WARNING: Subroutine does not return */
              _Unwind_Resume(uVar12);
            }
            uVar22 = (long)local_118 - (long)param_2;
            pbVar21 = param_2 + (long)pbStack_110;
            pbVar13 = pbStack_50;
            if (0x7fffffffffffffffU - (long)pbStack_50 < uVar22) {
              ppbVar15 = (basic_format_context **)std::__throw_length_error("basic_string::append");
LAB_0010f915:
              pbVar25 = (basic_format_context *)0xf;
            }
            else {
              this = (__formatter_fp<char> *)(pbStack_50 + uVar22);
              ppbVar15 = (basic_format_context **)CONCAT71(uStack_57,local_58);
              pbVar25 = pbStack_48;
              if (ppbVar15 == &pbStack_48) goto LAB_0010f915;
            }
            if (pbVar25 < this) {
              __cxx11::string::_M_mutate
                        ((string *)&local_58,(ulong)pbVar13,0,(char *)pbVar21,uVar22);
            }
            else if (uVar22 != 0) {
              if (uVar22 == 1) {
                *(basic_format_context *)((long)ppbVar15 + (long)pbVar13) = *pbVar21;
              }
              else {
                memcpy((basic_format_context *)((long)ppbVar15 + (long)pbVar13),pbVar21,uVar22);
              }
            }
            pbStack_50 = (basic_format_context *)this;
            ((basic_format_context *)this)[CONCAT71(uStack_57,local_58)] = (basic_format_context)0x0
            ;
          }
          else {
            if (pbStack_50 < param_2) {
              std::__throw_out_of_range_fmt
                        ("%s: __pos (which is %zu) > this->size() (which is %zu)",
                         "basic_string::insert",param_2,pbStack_50);
LAB_0010f9ea:
              auVar29 = std::__throw_length_error("basic_string::_M_replace_aux");
LAB_0010f9f6:
              pbVar13 = (basic_format_context *)0xf;
            }
            else {
              if ((basic_format_context *)(0x7fffffffffffffff - (long)pbStack_50) < local_128)
              goto LAB_0010f9ea;
              this = (__formatter_fp<char> *)(pbStack_50 + (long)local_128);
              auVar29._8_8_ = pbStack_50;
              auVar29._0_8_ = (basic_format_context **)CONCAT71(uStack_57,local_58);
              pbVar13 = pbStack_48;
              if ((basic_format_context **)CONCAT71(uStack_57,local_58) == &pbStack_48)
              goto LAB_0010f9f6;
            }
            if (pbVar13 < this) {
              __cxx11::string::_M_mutate
                        ((string *)&local_58,(ulong)param_2,0,(char *)0x0,(ulong)local_128);
            }
            else {
              sVar18 = auVar29._8_8_ - (long)param_2;
              if (sVar18 != 0) {
                pbVar13 = param_2 + auVar29._0_8_;
                if (sVar18 == 1) {
                  pbVar13[(long)local_128] = *pbVar13;
                }
                else {
                  memmove(pbVar13 + (long)local_128,pbVar13,sVar18);
                }
              }
            }
            if (local_128 == (basic_format_context *)0x1) {
              param_2[CONCAT71(uStack_57,local_58)] = (basic_format_context)0x30;
            }
            else {
              memset(param_2 + CONCAT71(uStack_57,local_58),0x30,(size_t)local_128);
            }
            pbStack_50 = (basic_format_context *)this;
            ((basic_format_context *)this)[CONCAT71(uStack_57,local_58)] = (basic_format_context)0x0
            ;
            if (bVar27) {
              param_2[CONCAT71(uStack_57,local_58)] = (basic_format_context)0x2e;
            }
          }
          local_138 = (basic_format_context *)CONCAT71(uStack_57,local_58);
          unaff_R14 = pbStack_50;
        }
      }
      else {
        local_128 = local_120 + 1;
        param_2 = (basic_format_context *)
                  basic_string_view<char,std::char_traits<char>>::find
                            ((basic_string_view<char,std::char_traits<char>> *)&local_118,
                             local_148._6_1_,(ulong)local_128);
        if (param_2 == (basic_format_context *)0xffffffffffffffff) {
          param_2 = unaff_R14;
        }
        local_140 = (basic_format_context *)0x0;
LAB_0010f6e6:
        bVar27 = local_120 == param_2;
        local_128 = (basic_format_context *)((ulong)bVar27 + (long)local_140);
        local_138 = (basic_format_context *)this;
        if (local_128 != (basic_format_context *)0x0) goto LAB_0010f67b;
      }
      local_f8 = (basic_format_context *)&local_e8;
      local_f0 = (basic_format_context *)0x0;
      local_e8 = (basic_format_context *)((ulong)local_e8 & 0xffffffffffffff00);
      this = (__formatter_fp<char> *)local_138;
      if (((byte)*this_00 & 0x20) == 0) goto LAB_0010fabc;
    }
    local_f8 = (basic_format_context *)&local_e8;
    local_f0 = (basic_format_context *)0x0;
    if (unaff_R13[0x20] == (basic_format_context)0x0) {
      std::locale::locale((locale *)(unaff_R13 + 0x18));
      unaff_R13[0x20] = (basic_format_context)0x1;
    }
    std::locale::locale((locale *)&stack0xffffffffffffffd0,(locale *)(unaff_R13 + 0x18));
    _M_localize_abi_cxx11_
              (&local_118,this_00,unaff_R14,local_138,(int)local_148._6_1_,
               (locale *)&stack0xffffffffffffffd0);
    pbVar21 = local_e8;
    pbVar13 = local_f8;
    if (local_f8 == (basic_format_context *)&local_e8) {
      if (local_118 == (basic_format_context *)local_108) goto LAB_0010fdf5;
LAB_0010fba2:
      local_e8 = local_108[0];
      local_f8 = local_118;
      local_118 = (basic_format_context *)local_108;
    }
    else if (local_118 == (basic_format_context *)local_108) {
LAB_0010fdf5:
      if (pbStack_110 != (basic_format_context *)0x0) {
        if (pbStack_110 == (basic_format_context *)0x1) {
          *local_f8 = local_108[0]._0_1_;
        }
        else {
          uVar20 = (uint)pbStack_110;
          uVar22 = (ulong)pbStack_110 & 0xffffffff;
          if (uVar20 < 8) {
            if (((ulong)pbStack_110 & 4) == 0) {
              if ((uVar20 != 0) && (*local_f8 = local_108[0]._0_1_, ((ulong)pbStack_110 & 2) != 0))
              {
                *(undefined2 *)(local_f8 + (uVar22 - 2)) =
                     *(undefined2 *)((long)local_108 + (uVar22 - 2));
              }
            }
            else {
              *(undefined4 *)local_f8 = local_108[0]._0_4_;
              *(undefined4 *)(local_f8 + (uVar22 - 4)) =
                   *(undefined4 *)((long)local_108 + (uVar22 - 4));
            }
          }
          else {
            *(basic_format_context **)local_f8 = local_108[0];
            *(undefined8 *)(local_f8 + (((ulong)pbStack_110 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)&stack0xfffffffffffffef0 + ((ulong)pbStack_110 & 0xffffffff))
            ;
            lVar26 = (long)local_f8 - ((ulong)(local_f8 + 8) & 0xfffffffffffffff8);
            uVar20 = (int)lVar26 + uVar20 & 0xfffffff8;
            if (7 < uVar20) {
              uVar8 = 0;
              do {
                *(undefined8 *)(((ulong)(local_f8 + 8) & 0xfffffffffffffff8) + (ulong)uVar8) =
                     *(undefined8 *)((long)local_108 + ((ulong)uVar8 - lVar26));
                uVar8 = uVar8 + 8;
              } while (uVar8 < uVar20);
            }
          }
        }
      }
      local_f8[(long)pbStack_110] = (basic_format_context)0x0;
    }
    else {
      local_f8 = local_118;
      local_e8 = local_108[0];
      if (pbVar13 == (basic_format_context *)0x0) goto LAB_0010fba2;
      local_118 = pbVar13;
      local_108[0] = pbVar21;
    }
    local_f0 = pbStack_110;
    pbStack_110 = (basic_format_context *)0x0;
    *local_118 = (basic_format_context)0x0;
    __cxx11::string::_M_dispose((string *)&local_118);
    std::locale::~locale((locale *)&stack0xffffffffffffffd0);
    this = (__formatter_fp<char> *)local_138;
    if (local_f0 != (basic_format_context *)0x0) {
      this = (__formatter_fp<char> *)local_f8;
      unaff_R14 = local_f0;
    }
LAB_0010fabc:
    pbVar13 = (basic_format_context *)
              _Spec<char>::
              _M_get_width<std::basic_format_context<std::__format::_Sink_iter<char>,char>>
                        (this_00,unaff_R13);
    if (unaff_R14 < pbVar13) {
      uVar23 = *(undefined4 *)(this_00 + 8);
      _Var3 = *this_00;
      lVar26 = (long)pbVar13 - (long)unaff_R14;
      p_Var4 = *(__format **)(unaff_R13 + 0x10);
      bVar16 = (byte)_Var3 & 3;
      if (((byte)_Var3 & 3) == 0) {
        if (((byte)_Var3 & 0x40) == 0) {
          bVar16 = 2;
          uVar23 = 0x20;
        }
        else if (1.79769313486232e+308 < ABS(local_150)) {
          bVar16 = 2;
          uVar23 = 0x20;
        }
        else {
          bVar16 = 2;
          uVar23 = 0x30;
          if (0xf < (byte)__detail::__from_chars_alnum_to_val_table<false>::value[(byte)*local_138])
          {
            bVar2 = *(basic_format_context *)this;
            pbVar13 = *(basic_format_context **)(p_Var4 + 0x18);
            *(basic_format_context **)(p_Var4 + 0x18) = pbVar13 + 1;
            *pbVar13 = bVar2;
            if (*(long *)(p_Var4 + 0x18) - *(long *)(p_Var4 + 8) == *(long *)(p_Var4 + 0x10)) {
              (*(code *)**(undefined8 **)p_Var4)(p_Var4);
            }
            this = (__formatter_fp<char> *)((basic_format_context *)this + 1);
            unaff_R14 = unaff_R14 + -1;
            bVar16 = 2;
            uVar23 = 0x30;
          }
        }
      }
      puVar14 = (undefined8 *)
                __write_padded<std::__format::_Sink_iter<char>,char>
                          (p_Var4,unaff_R14,this,bVar16,lVar26,uVar23);
    }
    else {
      puVar14 = (undefined8 *)
                __write<std::__format::_Sink_iter<char>,char>
                          (*(__format **)(unaff_R13 + 0x10),unaff_R14,this);
    }
    if (local_f8 != (basic_format_context *)&local_e8) {
      operator_delete(local_f8,(ulong)(local_e8 + 1));
    }
    if ((basic_format_context **)CONCAT71(uStack_57,local_58) != &pbStack_48) {
      operator_delete((basic_format_context **)CONCAT71(uStack_57,local_58),(ulong)(pbStack_48 + 1))
      ;
    }
    return puVar14;
  }
LAB_0010e3c1:
  cVar24 = (char)unaff_R12;
  if (((byte)this[1] & 0x78) != 0x10) {
    local_152 = 'p';
  }
  if (cVar19 == '\0') {
    auVar30 = std::to_chars(param_1,(long)&local_e8 + 1,&local_68,4);
    iVar7 = 4;
LAB_0010e407:
    pbVar13 = auVar30._0_8_;
    if (auVar30._8_4_ == 0x4b) {
      uVar22 = (long)local_150 + 8;
      bVar6 = false;
      bVar27 = false;
      goto LAB_0010f088;
    }
    bVar27 = false;
    local_140 = (basic_format_context *)&local_68;
    pbVar21 = (basic_format_context *)((long)&local_e8 + 1);
  }
  else {
switchD_0010e2ec_default:
    cVar24 = (char)unaff_R12;
    iVar7 = 4;
    bVar27 = false;
LAB_0010e370:
    auVar30 = std::to_chars(param_1,(long)&local_e8 + 1,&local_68,iVar7,
                            (ulong)local_150 & 0xffffffff);
    pbVar13 = auVar30._0_8_;
    if (auVar30._8_4_ == 0x4b) {
      uVar22 = (long)local_150 + 8;
      bVar6 = true;
      if (iVar7 == 2) {
        local_128 = (basic_format_context *)((ulong)local_128 & 0xffffffff00000000);
        frexpf(param_1,(int *)&local_128);
        if (0 < (int)local_128) {
          uVar22 = uVar22 + ((uint)((int)local_128 * 0xfa4) / 0x33f5 + 1);
        }
        bVar6 = true;
      }
LAB_0010f088:
      if (uVar22 < 0x81) {
        uVar22 = 0x100;
      }
                    /* try { // try from 0010f0a3 to 0010f0a7 has its CatchHandler @ 0010ea8c */
      __cxx11::string::reserve((string *)&local_68,uVar22);
      do {
        if (local_68 == &local_58) {
          lVar26 = 0xf;
        }
        else {
          lVar26 = CONCAT71(uStack_57,local_58);
        }
        __cxx11::string::reserve((string *)&local_68,lVar26 * 2);
        pbVar25 = local_68;
        pbVar21 = local_68 + (lVar26 * 2 - 1);
        pbVar13 = local_68 + 1;
        if (bVar6) {
          auVar30 = std::to_chars(param_1,pbVar13,pbVar21,iVar7,(ulong)local_150 & 0xffffffff);
        }
        else if (iVar7 == 0) {
          auVar30 = std::to_chars((char *)pbVar13,(char *)pbVar21,param_1);
        }
        else {
          auVar30 = std::to_chars(param_1,pbVar13,pbVar21,iVar7);
        }
        pbVar13 = auVar30._0_8_;
        if (auVar30._8_4_ == 0) {
          local_60 = pbVar13 + -(long)pbVar25;
          local_68[(long)local_60] = (basic_format_context)0x0;
          pbVar21 = local_68 + 1;
          local_140 = local_68 + (long)local_60;
          goto LAB_0010e427;
        }
        local_60 = (basic_format_context *)0x0;
        *local_68 = (basic_format_context)0x0;
      } while (auVar30._8_4_ == 0x4b);
      pbVar21 = local_68 + 1;
      local_140 = local_68;
    }
    else {
      local_140 = (basic_format_context *)&local_68;
      pbVar21 = (basic_format_context *)((long)&local_e8 + 1);
    }
  }
LAB_0010e427:
  pbVar25 = pbVar21;
  if (cVar24 != '\0') {
    for (; pbVar25 != pbVar13; pbVar25 = pbVar25 + 1) {
      iVar7 = toupper((int)(char)*pbVar25);
      *pbVar25 = SUB41(iVar7,0);
    }
  }
  local_148 = (basic_format_context *)0x1;
  if (-1 < (int)param_1) {
    if (((byte)*this & 0xc) == 4) {
      pbVar21[-1] = (basic_format_context)0x2b;
      pbVar21 = pbVar21 + -1;
    }
    else {
      local_148 = (basic_format_context *)0x0;
      if (((byte)*this & 0xc) == 0xc) {
        pbVar21[-1] = (basic_format_context)0x20;
        pbVar21 = pbVar21 + -1;
        local_148 = (basic_format_context *)0x1;
      }
    }
  }
  pbVar25 = pbVar13 + -(long)pbVar21;
  if (((byte)*this & 0x10) == 0) {
    local_108[0] = (basic_format_context *)&local_f8;
    local_108[1] = (basic_format_context *)0x0;
    local_f8 = (basic_format_context *)((ulong)local_f8._1_7_ << 8);
    local_148 = pbVar21;
    if ((((byte)*this & 0x20) == 0) || (3.4028235e+38 < ABS(param_1))) goto LAB_0010ec45;
LAB_0010e8c1:
    local_108[0] = (basic_format_context *)&local_f8;
    local_108[1] = (basic_format_context *)0x0;
    if (param_2[0x20] == (basic_format_context)0x0) {
      std::locale::locale((locale *)(param_2 + 0x18));
      param_2[0x20] = (basic_format_context)0x1;
    }
    std::locale::locale(local_40,(locale *)(param_2 + 0x18));
                    /* try { // try from 0010e8fc to 0010e900 has its CatchHandler @ 0010efbb */
    _M_localize_abi_cxx11_(&local_128,this,pbVar25,local_148,(int)local_152,local_40);
    pbVar21 = local_f8;
    pbVar13 = local_108[0];
    if (local_108[0] == (basic_format_context *)&local_f8) {
      if (local_128 == (basic_format_context *)&local_118) goto LAB_0010eff4;
LAB_0010ed2b:
      local_f8 = local_118;
      local_108[0] = local_128;
      local_128 = (basic_format_context *)&local_118;
    }
    else if (local_128 == (basic_format_context *)&local_118) {
LAB_0010eff4:
      if (local_120 != (basic_format_context *)0x0) {
        if (local_120 == (basic_format_context *)0x1) {
          *local_108[0] = local_118._0_1_;
        }
        else {
          uVar20 = (uint)local_120;
          uVar22 = (ulong)local_120 & 0xffffffff;
          if (uVar20 < 8) {
            if (((ulong)local_120 & 4) == 0) {
              if ((uVar20 != 0) && (*local_108[0] = local_118._0_1_, ((ulong)local_120 & 2) != 0)) {
                *(undefined2 *)(local_108[0] + (uVar22 - 2)) =
                     *(undefined2 *)((long)&local_120 + uVar22 + 6);
              }
            }
            else {
              *(int *)local_108[0] = (int)local_118;
              *(undefined4 *)(local_108[0] + (uVar22 - 4)) =
                   *(undefined4 *)((long)&local_120 + uVar22 + 4);
            }
          }
          else {
            *(basic_format_context **)local_108[0] = local_118;
            *(undefined8 *)(local_108[0] + (((ulong)local_120 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)&local_120 + ((ulong)local_120 & 0xffffffff));
            lVar26 = (long)local_108[0] - ((ulong)(local_108[0] + 8) & 0xfffffffffffffff8);
            uVar20 = (int)lVar26 + uVar20 & 0xfffffff8;
            if (7 < uVar20) {
              uVar8 = 0;
              do {
                *(undefined8 *)(((ulong)(local_108[0] + 8) & 0xfffffffffffffff8) + (ulong)uVar8) =
                     *(undefined8 *)((long)&local_118 + ((ulong)uVar8 - lVar26));
                uVar8 = uVar8 + 8;
              } while (uVar8 < uVar20);
            }
          }
        }
      }
      local_108[0][(long)local_120] = (basic_format_context)0x0;
    }
    else {
      local_108[0] = local_128;
      local_f8 = local_118;
      if (pbVar13 == (basic_format_context *)0x0) goto LAB_0010ed2b;
      local_128 = pbVar13;
      local_118 = pbVar21;
    }
    local_108[1] = local_120;
    local_120 = (basic_format_context *)0x0;
    *local_128 = (basic_format_context)0x0;
    __cxx11::string::_M_dispose((string *)&local_128);
    std::locale::~locale(local_40);
    pbVar21 = local_148;
    if (local_108[1] != (basic_format_context *)0x0) {
      pbVar21 = local_108[0];
      pbVar25 = local_108[1];
    }
  }
  else if (3.4028235e+38 < ABS(param_1)) {
    local_108[0] = (basic_format_context *)&local_f8;
    local_108[1] = (basic_format_context *)0x0;
    local_f8 = (basic_format_context *)((ulong)local_f8._1_7_ << 8);
    local_148 = pbVar21;
  }
  else {
    local_128 = pbVar25;
    local_120 = pbVar21;
    if (((pbVar25 == (basic_format_context *)0x0) ||
        (pvVar10 = memchr(pbVar21,0x2e,(size_t)pbVar25), pvVar10 == (void *)0x0)) ||
       (local_138 = (basic_format_context *)((long)pvVar10 - (long)pbVar21),
       local_138 == (basic_format_context *)0xffffffffffffffff)) {
      pbVar11 = (basic_format_context *)
                basic_string_view<char,std::char_traits<char>>::find
                          ((basic_string_view<char,std::char_traits<char>> *)&local_128,local_152,0)
      ;
      if (pbVar11 == (basic_format_context *)0xffffffffffffffff) {
        pbVar11 = pbVar25;
      }
      if (bVar27) {
        local_138 = (basic_format_context *)0x1;
        bVar27 = true;
        if (local_150 != 0.0) {
          pbVar17 = pbVar11 + -(long)local_148;
          local_138 = pbVar11;
          goto LAB_0010e531;
        }
      }
      else {
        local_138 = (basic_format_context *)0x1;
        local_150 = 0.0;
        bVar27 = true;
      }
LAB_0010e807:
      if ((local_60 == (basic_format_context *)0x0) &&
         (local_138 <= (ulong)((long)local_140 - (long)pbVar13))) {
        pbVar13 = pbVar21 + (long)pbVar11;
        memmove(pbVar11 + (long)local_138 + (long)pbVar21,pbVar13,(long)pbVar25 - (long)pbVar11);
        if (bVar27) {
          pbVar11 = pbVar11 + 1;
          *pbVar13 = (basic_format_context)0x2e;
        }
        memset(pbVar21 + (long)pbVar11,0x30,(size_t)local_150);
        local_148 = local_120;
        pbVar25 = local_128 + (long)local_138;
      }
      else {
        __cxx11::string::reserve((string *)&local_68,(ulong)(pbVar25 + (long)local_138));
        auVar28._8_8_ = local_60;
        auVar28._0_8_ = local_68;
        if (local_60 == (basic_format_context *)0x0) {
          pbVar13 = local_128;
          if (pbVar11 <= local_128) {
            pbVar13 = pbVar11;
          }
                    /* try { // try from 0010e991 to 0010ebc7 has its CatchHandler @ 0010ea8c */
          __cxx11::string::_M_replace((string *)&local_68,0,0,(char *)local_120,(ulong)pbVar13);
          if (bVar27) {
            __cxx11::string::push_back((string *)&local_68,'.');
          }
          if (local_150 != 0.0) {
            __cxx11::string::_M_replace_aux
                      ((string *)&local_68,(ulong)local_60,0,(ulong)local_150,'0');
          }
          if (local_128 < pbVar11) {
            uVar12 = std::__throw_out_of_range_fmt
                               ("%s: __pos (which is %zu) > __size (which is %zu)",
                                "basic_string_view::substr",pbVar11,local_128);
            __cxx11::string::_M_dispose((string *)&local_68);
                    /* WARNING: Subroutine does not return */
            _Unwind_Resume(uVar12);
                    /* catch() { ... } // from try @ 0010e2ee with catch @ 0010ea8c
                       catch() { ... } // from try @ 0010e991 with catch @ 0010ea8c
                       catch() { ... } // from try @ 0010f0a3 with catch @ 0010ea8c */
          }
          uVar22 = (long)local_128 - (long)pbVar11;
          pbVar11 = pbVar11 + (long)local_120;
          pbVar13 = local_60;
          if (0x7fffffffffffffffU - (long)local_60 < uVar22) {
            pbVar25 = (basic_format_context *)std::__throw_length_error("basic_string::append");
LAB_0010eaa0:
            pbVar17 = (basic_format_context *)0xf;
          }
          else {
            pbVar21 = local_60 + uVar22;
            pbVar25 = local_68;
            if (local_68 == &local_58) goto LAB_0010eaa0;
            pbVar17 = (basic_format_context *)CONCAT71(uStack_57,local_58);
          }
          if (pbVar17 < pbVar21) {
            __cxx11::string::_M_mutate((string *)&local_68,(ulong)pbVar13,0,(char *)pbVar11,uVar22);
          }
          else if (uVar22 != 0) {
            if (uVar22 == 1) {
              pbVar25[(long)pbVar13] = *pbVar11;
            }
            else {
              memcpy(pbVar25 + (long)pbVar13,pbVar11,uVar22);
            }
          }
          local_60 = pbVar21;
          local_68[(long)pbVar21] = (basic_format_context)0x0;
        }
        else {
          if (local_60 < pbVar11) {
            std::__throw_out_of_range_fmt
                      ("%s: __pos (which is %zu) > this->size() (which is %zu)",
                       "basic_string::insert",pbVar11,local_60);
LAB_0010eb75:
            auVar28 = std::__throw_length_error("basic_string::_M_replace_aux");
LAB_0010eb81:
            pbVar13 = (basic_format_context *)0xf;
          }
          else {
            if (0x7fffffffffffffffU - (long)local_60 < local_138) goto LAB_0010eb75;
            pbVar21 = local_60 + (long)local_138;
            if (local_68 == &local_58) goto LAB_0010eb81;
            pbVar13 = (basic_format_context *)CONCAT71(uStack_57,local_58);
          }
          if (pbVar13 < pbVar21) {
            __cxx11::string::_M_mutate
                      ((string *)&local_68,(ulong)pbVar11,0,(char *)0x0,(ulong)local_138);
          }
          else {
            sVar18 = auVar28._8_8_ - (long)pbVar11;
            if (sVar18 != 0) {
              pbVar13 = pbVar11 + auVar28._0_8_;
              if (sVar18 == 1) {
                pbVar13[(long)local_138] = *pbVar13;
              }
              else {
                memmove(pbVar13 + (long)local_138,pbVar13,sVar18);
              }
            }
          }
          if (local_138 == (basic_format_context *)0x1) {
            pbVar11[(long)local_68] = (basic_format_context)0x30;
          }
          else {
            memset(pbVar11 + (long)local_68,0x30,(size_t)local_138);
          }
          local_60 = pbVar21;
          local_68[(long)pbVar21] = (basic_format_context)0x0;
          if (bVar27) {
            local_68[(long)pbVar11] = (basic_format_context)0x2e;
          }
        }
        local_148 = local_68;
        pbVar25 = local_60;
      }
    }
    else {
      local_130 = local_138 + 1;
      pbVar11 = (basic_format_context *)
                basic_string_view<char,std::char_traits<char>>::find
                          ((basic_string_view<char,std::char_traits<char>> *)&local_128,local_152,
                           (ulong)local_130);
      if (pbVar11 == (basic_format_context *)0xffffffffffffffff) {
        pbVar11 = pbVar25;
      }
      if (bVar27) {
        lVar26 = -1 - (long)local_148;
        if (pbVar21[(long)local_148] == (basic_format_context)0x30) {
          if (local_130 < pbVar25) {
            do {
              if (pbVar21[(long)local_130] != (basic_format_context)0x30) goto LAB_0010e7ba;
              local_130 = local_130 + 1;
            } while (local_130 < pbVar25);
            local_130 = (basic_format_context *)0xffffffffffffffff;
          }
          else {
            local_130 = (basic_format_context *)0xffffffffffffffff;
          }
LAB_0010e7ba:
          lVar26 = -(long)local_130;
        }
        pbVar17 = pbVar11 + lVar26;
        if (local_150 != 0.0) {
LAB_0010e531:
          local_150 = (double)((long)local_150 - (long)pbVar17);
        }
      }
      else {
        local_150 = 0.0;
      }
      bVar27 = local_138 == pbVar11;
      local_138 = (basic_format_context *)((ulong)bVar27 + (long)local_150);
      local_148 = pbVar21;
      if (local_138 != (basic_format_context *)0x0) goto LAB_0010e807;
    }
    local_108[0] = (basic_format_context *)&local_f8;
    local_108[1] = (basic_format_context *)0x0;
    local_f8 = (basic_format_context *)((ulong)local_f8 & 0xffffffffffffff00);
    pbVar21 = local_148;
    if (((byte)*this & 0x20) != 0) goto LAB_0010e8c1;
  }
LAB_0010ec45:
                    /* try { // try from 0010ec4b to 0010ef50 has its CatchHandler @ 0010efea */
  pbVar13 = (basic_format_context *)
            _Spec<char>::
            _M_get_width<std::basic_format_context<std::__format::_Sink_iter<char>,char>>
                      ((_Spec<char> *)this,param_2);
  if (pbVar25 < pbVar13) {
    uVar23 = *(undefined4 *)(this + 8);
    _Var1 = *this;
    lVar26 = (long)pbVar13 - (long)pbVar25;
    p_Var4 = *(__format **)(param_2 + 0x10);
    bVar16 = (byte)_Var1 & 3;
    if (((byte)_Var1 & 3) == 0) {
      if (((byte)_Var1 & 0x40) == 0) {
        bVar16 = 2;
        uVar23 = 0x20;
      }
      else if (3.4028235e+38 < ABS(param_1)) {
        bVar16 = 2;
        uVar23 = 0x20;
      }
      else {
        bVar16 = 2;
        uVar23 = 0x30;
        if (0xf < (byte)__detail::__from_chars_alnum_to_val_table<false>::value[(byte)*local_148]) {
          bVar2 = *pbVar21;
          pbVar13 = *(basic_format_context **)(p_Var4 + 0x18);
          *(basic_format_context **)(p_Var4 + 0x18) = pbVar13 + 1;
          *pbVar13 = bVar2;
          if (*(long *)(p_Var4 + 0x18) - *(long *)(p_Var4 + 8) == *(long *)(p_Var4 + 0x10)) {
            (*(code *)**(undefined8 **)p_Var4)(p_Var4);
          }
          pbVar21 = pbVar21 + 1;
          pbVar25 = pbVar25 + -1;
          bVar16 = 2;
          uVar23 = 0x30;
        }
      }
    }
    puVar14 = (undefined8 *)
              __write_padded<std::__format::_Sink_iter<char>,char>
                        (p_Var4,pbVar25,pbVar21,bVar16,lVar26,uVar23);
  }
  else {
    puVar14 = *(undefined8 **)(param_2 + 0x10);
    if (pbVar25 != (basic_format_context *)0x0) {
      pvVar10 = (void *)puVar14[3];
      pbVar13 = (basic_format_context *)(puVar14[2] - ((long)pvVar10 - puVar14[1]));
      if (pbVar13 <= pbVar25) {
        do {
          pbVar11 = pbVar13;
          if (pbVar25 <= pbVar13) {
            pbVar11 = pbVar25;
          }
          if (pbVar11 != (basic_format_context *)0x0) {
            memcpy(pvVar10,pbVar21,(size_t)pbVar11);
          }
          puVar14[3] = pbVar13 + puVar14[3];
          pbVar21 = pbVar21 + (long)pbVar13;
          pbVar25 = pbVar25 + -(long)pbVar13;
          (**(code **)*puVar14)(puVar14);
          pvVar10 = (void *)puVar14[3];
          pbVar13 = (basic_format_context *)(puVar14[2] - ((long)pvVar10 - puVar14[1]));
        } while (pbVar13 <= pbVar25);
        if (pbVar25 == (basic_format_context *)0x0) goto LAB_0010ef63;
      }
      memcpy(pvVar10,pbVar21,(size_t)pbVar25);
      puVar14[3] = pbVar25 + puVar14[3];
    }
  }
LAB_0010ef63:
  if (local_108[0] != (basic_format_context *)&local_f8) {
    operator_delete(local_108[0],(ulong)(local_f8 + 1));
  }
  if (local_68 != &local_58) {
    operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
  }
  return puVar14;
}

