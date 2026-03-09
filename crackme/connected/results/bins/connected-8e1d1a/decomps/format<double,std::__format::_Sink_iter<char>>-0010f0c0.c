
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00110184) overlaps instruction at (ram,0x00110182)
    */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::basic_format_context<std::__format::_Sink_iter<char>, char>::iterator
   std::__format::__formatter_fp<char>::format<double, std::__format::_Sink_iter<char> >(double,
   std::basic_format_context<std::__format::_Sink_iter<char>, char>&) const */

undefined8 __thiscall
std::__format::__formatter_fp<char>::format<double,std::__format::_Sink_iter<char>>
          (__formatter_fp<char> *this,double param_1,basic_format_context *param_2)

{
  byte *pbVar1;
  __formatter_fp<char> _Var2;
  __format *p_Var3;
  long lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  uint7 uVar8;
  ulong ******ppppppuVar9;
  int iVar10;
  void *pvVar12;
  ulong *******pppppppuVar13;
  uint uVar11;
  ulong *******pppppppuVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  byte bVar18;
  ulong uVar19;
  uint *puVar20;
  byte *pbVar21;
  size_t sVar22;
  char *pcVar23;
  longdouble *plVar24;
  longdouble *plVar25;
  longdouble *plVar26;
  longdouble *plVar27;
  longdouble *plVar28;
  uint uVar29;
  ulong *******pppppppuVar30;
  char *pcVar31;
  ulong uVar32;
  undefined4 uVar33;
  char *unaff_R12;
  char cVar34;
  ulong unaff_R14;
  ulong *******pppppppuVar35;
  ulong unaff_R15;
  char *pcVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [12];
  undefined8 unaff_retaddr;
  undefined1 auStack_178 [8];
  undefined1 *puStack_170;
  undefined1 auStack_168 [6];
  undefined1 uStack_162;
  undefined1 uStack_161;
  double local_160;
  char local_152;
  char local_151;
  ulong local_150;
  ulong *******local_148;
  ulong *******local_140;
  ulong *******local_138;
  ulong *******local_130;
  ulong *******local_128;
  undefined8 local_120;
  ulong ******local_118 [2];
  ulong *******local_108;
  ulong *******local_100;
  undefined8 local_f8;
  ulong ******local_e7 [13];
  undefined1 auStack_78 [16];
  ulong *******local_68;
  ulong *******local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  locale local_40 [16];
  
  plVar24 = (longdouble *)auStack_168;
  plVar25 = (longdouble *)auStack_168;
  local_68 = (ulong *******)&local_58;
  local_60 = (ulong *******)0x0;
  local_58 = 0;
  uVar29 = (byte)this[1] & 6;
  pcVar31 = (char *)(ulong)uVar29;
  local_160 = param_1;
  if (((byte)this[1] & 6) == 0) {
    switch((byte)this[1] >> 3 & 0xf) {
    case 0:
      local_150 = 6;
LAB_0010f466:
      puStack_170 = (undefined1 *)0x10f481;
      auVar39 = std::to_chars((char *)local_e7,(char *)&local_68,local_160);
      iVar10 = 0;
      local_152 = 'e';
      cVar34 = '\0';
      break;
    case 1:
      local_150 = 6;
      goto switchD_0010f151_caseD_1;
    case 2:
      local_150 = 6;
      local_152 = 'P';
      unaff_R14 = 1;
      goto LAB_0010f20c;
    case 3:
      local_150 = 6;
      goto switchD_0010f151_caseD_3;
    case 4:
      local_150 = 6;
      local_152 = 'E';
      cVar34 = '\x01';
      goto LAB_0010f1a7;
    case 5:
      local_150 = 6;
      goto switchD_0010f151_caseD_5;
    case 6:
      local_150 = 6;
      cVar34 = '\x01';
      goto LAB_0010f182;
    case 7:
      local_150 = 6;
      goto switchD_0010f151_caseD_7;
    case 8:
      local_150 = 6;
      local_152 = 'E';
      cVar34 = '\x01';
      goto LAB_0010f167;
    default:
      goto switchD_0010f12d_default;
    }
    goto LAB_0010f257;
  }
                    /* try { // try from 0010f12f to 0010f6b1 has its CatchHandler @ 0010f901 */
  puStack_170 = (undefined1 *)0x10f134;
  local_150 = _Spec<char>::
              _M_get_precision<std::basic_format_context<std::__format::_Sink_iter<char>,char>>
                        ((_Spec<char> *)this,param_2);
  uVar11 = (byte)this[1] >> 3 & 0xf;
  puVar20 = &switchD_0010f151::switchdataD_001178e8;
  pbVar21 = (byte *)((long)&switchD_0010f151::switchdataD_001178e8 +
                    (long)(int)(&switchD_0010f151::switchdataD_001178e8)[uVar11]);
  switch(uVar11) {
  case 0:
    if ((char)uVar29 == '\0') goto LAB_0010f466;
    iVar10 = 3;
    local_152 = 'e';
    local_151 = '\0';
    cVar34 = '\0';
    goto LAB_0010f1b1;
  case 1:
switchD_0010f151_caseD_1:
    local_152 = 'e';
    unaff_R14 = 0;
    break;
  case 2:
    local_152 = 'P';
    unaff_R14 = 1;
    break;
  case 3:
switchD_0010f151_caseD_3:
    local_152 = 'e';
    cVar34 = '\0';
    goto LAB_0010f1a7;
  case 4:
    local_152 = 'E';
    cVar34 = '\x01';
LAB_0010f1a7:
    iVar10 = 1;
    local_151 = '\0';
    goto LAB_0010f1b1;
  case 5:
switchD_0010f151_caseD_5:
    cVar34 = '\0';
    goto LAB_0010f182;
  case 6:
    cVar34 = '\x01';
LAB_0010f182:
    iVar10 = 2;
    local_152 = 'e';
    local_151 = '\0';
    goto LAB_0010f1b1;
  case 7:
switchD_0010f151_caseD_7:
    local_152 = 'e';
    cVar34 = '\0';
    goto LAB_0010f167;
  case 8:
    local_152 = 'E';
    cVar34 = '\x01';
LAB_0010f167:
    iVar10 = 3;
    local_151 = '\x01';
    goto LAB_0010f1b1;
  case 9:
    uStack_162 = 0x65;
    unaff_R14 = 0;
    goto LAB_0010ffab;
  case 10:
    goto switchD_0010f151_caseD_a;
  case 0xb:
    if ((long)(int)(&switchD_0010f151::switchdataD_001178e8)[uVar11] < -0x1178e8) {
      halt_baddata();
    }
    *pbVar21 = *pbVar21 | (byte)pbVar21;
    goto LAB_00110182;
  case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe:
    switch(uVar11) {
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
    local_160 = 2.96439387504748e-323;
    uStack_162 = 0x45;
    unaff_R14 = 1;
    pcVar31 = (char *)0x1;
LAB_0010ffab:
    uStack_161 = 0;
    plVar24 = (longdouble *)auStack_178;
    uVar29 = (uint)pcVar31;
    puStack_170 = (undefined1 *)unaff_retaddr;
    auVar38 = std::to_chars((long)&local_f8 + 1,auStack_78,pcVar31,(ulong)local_160 & 0xffffffff);
    puVar20 = auVar38._8_8_;
    unaff_R12 = auVar38._0_8_;
switchD_0010f151_caseD_a:
    if ((int)puVar20 == 0x4b) {
      uVar32 = *(long *)((long)plVar24 + 0x18) + 8;
      *(undefined1 *)(plVar24 + 2) = 1;
      if (uVar29 == 2) {
        *(undefined4 *)(plVar24 + 4) = 0;
        *(undefined8 *)((long)plVar24 + 8) = *(undefined8 *)((long)plVar24 + 0x178);
        *(undefined8 *)plVar24 = *(undefined8 *)(plVar24 + 0x17);
        *(undefined8 *)((long)plVar24 + -8) = 0x1102dc;
        frexpl(plVar24 + 4);
        if (0 < *(int *)(plVar24 + 4)) {
          uVar32 = uVar32 + ((uint)(*(int *)(plVar24 + 4) * 0xfa4) / 0x33f5 + 1);
        }
        *(undefined1 *)(plVar24 + 2) = 1;
      }
      if (uVar32 < 0x81) {
        uVar32 = 0x100;
      }
      *(undefined8 *)((long)plVar24 + 8) = 0x110cdb;
      __cxx11::string::reserve((string *)(plVar24 + 0x10),uVar32);
      *(longdouble **)((long)plVar24 + 0x28) = plVar24 + 0x11;
      do {
        if (*(long *)(plVar24 + 0x10) == *(long *)((long)plVar24 + 0x28)) {
          lVar15 = 0xf;
        }
        else {
          lVar15 = *(long *)(plVar24 + 0x11);
        }
        *(undefined8 *)((long)plVar24 + 8) = 0x110350;
        __cxx11::string::reserve((string *)(plVar24 + 0x10),lVar15 * 2);
        lVar4 = *(long *)(plVar24 + 0x10);
        pcVar36 = (char *)(lVar4 + -1 + lVar15 * 2);
        pcVar31 = (char *)(lVar4 + 1);
        if (*(char *)(plVar24 + 2) == '\0') {
          if (uVar29 == 0) {
            *(undefined8 *)((long)plVar24 + 8) = *(undefined8 *)((long)plVar24 + 0x178);
            *(undefined8 *)plVar24 = *(undefined8 *)(plVar24 + 0x17);
            *(undefined8 *)((long)plVar24 + -8) = 0x110400;
            auVar39 = std::to_chars(pcVar31,pcVar36,*plVar24);
          }
          else {
            *(undefined8 *)((long)plVar24 + 8) = *(undefined8 *)((long)plVar24 + 0x178);
            *(undefined8 *)plVar24 = *(undefined8 *)(plVar24 + 0x17);
            *(undefined8 *)((long)plVar24 + -8) = 0x11038a;
            auVar39 = std::to_chars(pcVar31,pcVar36,uVar29);
          }
        }
        else {
          *(undefined8 *)((long)plVar24 + 8) = *(undefined8 *)((long)plVar24 + 0x178);
          *(undefined8 *)plVar24 = *(undefined8 *)(plVar24 + 0x17);
          *(undefined8 *)((long)plVar24 + -8) = 0x1103e7;
          auVar39 = std::to_chars(pcVar31,pcVar36,uVar29,*(undefined4 *)((long)plVar24 + 0x18));
        }
        unaff_R12 = auVar39._0_8_;
        if (auVar39._8_4_ == 0) {
          *(long *)((long)plVar24 + 0x108) = (long)unaff_R12 - lVar4;
          *(undefined1 *)(*(long *)(plVar24 + 0x10) + ((long)unaff_R12 - lVar4)) = 0;
          pcVar31 = (char *)(*(long *)(plVar24 + 0x10) + 1);
          *(long *)((long)plVar24 + 0x28) =
               *(long *)(plVar24 + 0x10) + *(long *)((long)plVar24 + 0x108);
          goto LAB_00110080;
        }
        *(undefined8 *)((long)plVar24 + 0x108) = 0;
        **(undefined1 **)(plVar24 + 0x10) = 0;
      } while (auVar39._8_4_ == 0x4b);
      pcVar31 = (char *)(*(long *)(plVar24 + 0x10) + 1);
      *(long *)((long)plVar24 + 0x28) = *(long *)(plVar24 + 0x10) + *(long *)((long)plVar24 + 0x108)
      ;
    }
    else {
      *(longdouble **)((long)plVar24 + 0x28) = plVar24 + 0x10;
      pcVar31 = (char *)((long)plVar24 + 0x81);
    }
LAB_00110080:
    plVar27 = plVar24 + 1;
    plVar28 = plVar24 + 1;
    plVar25 = plVar24 + 1;
    plVar26 = plVar24 + 1;
    pcVar36 = pcVar31;
    if ((char)unaff_R14 != '\0') {
      for (; pcVar36 != unaff_R12; pcVar36 = pcVar36 + 1) {
        cVar34 = *pcVar36;
        *(undefined8 *)((long)plVar24 + 8) = 0x110096;
        iVar10 = toupper((int)cVar34);
        *pcVar36 = (char)iVar10;
      }
    }
    *(undefined1 *)(plVar24 + 2) = 1;
    if ((longdouble)0 <= plVar24[0x17]) {
      _Var2 = *this;
      if (((byte)_Var2 & 0xc) == 4) {
        pcVar31[-1] = '+';
        pcVar31 = pcVar31 + -1;
      }
      else {
        *(undefined1 *)(plVar24 + 2) = 0;
        if (((byte)_Var2 & 0xc) == 0xc) {
          pcVar31[-1] = ' ';
          pcVar31 = pcVar31 + -1;
          *(undefined1 *)(plVar24 + 2) = 1;
        }
      }
    }
    unaff_R14 = (long)unaff_R12 - (long)pcVar31;
    if (((byte)*this & 0x10) == 0) {
      *(longdouble **)(plVar24 + 6) = plVar24 + 7;
      *(undefined8 *)((long)plVar24 + 0x68) = 0;
      *(undefined1 *)(plVar24 + 7) = 0;
      if (((byte)*this & 0x20) == 0) {
        *(char **)(plVar24 + 2) = pcVar31;
        goto LAB_001108f5;
      }
      *(char **)(plVar24 + 2) = pcVar31;
      plVar28 = plVar24 + 1;
      if (_DAT_0011a370 < ABS(plVar24[0x17])) goto LAB_001108f5;
    }
    else {
      if (_DAT_0011a370 < ABS(plVar24[0x17])) {
        *(longdouble **)(plVar24 + 6) = plVar24 + 7;
        *(undefined8 *)((long)plVar24 + 0x68) = 0;
        *(undefined1 *)(plVar24 + 7) = 0;
        *(char **)(plVar24 + 2) = pcVar31;
        plVar28 = plVar24 + 1;
        goto LAB_001108f5;
      }
      *(ulong *)(plVar24 + 4) = unaff_R14;
      *(char **)((long)plVar24 + 0x48) = pcVar31;
      if (unaff_R14 == 0) {
LAB_0011047e:
        *(undefined8 *)((long)plVar24 + 8) = 0x110492;
        unaff_R15 = basic_string_view<char,std::char_traits<char>>::find
                              ((basic_string_view<char,std::char_traits<char>> *)(plVar24 + 4),
                               *(char *)((long)plVar24 + 0x16),0);
        if (unaff_R15 == 0xffffffffffffffff) {
          unaff_R15 = unaff_R14;
        }
        if (*(char *)((long)plVar24 + 0x17) == '\0') {
          *(undefined8 *)(plVar24 + 3) = 1;
          *(undefined8 *)((long)plVar24 + 0x18) = 0;
          *(undefined1 *)((long)plVar24 + 0x17) = 1;
          plVar26 = plVar24 + 1;
        }
        else {
          *(undefined8 *)(plVar24 + 3) = 1;
          if (*(long *)((long)plVar24 + 0x18) != 0) {
            puVar20 = (uint *)(unaff_R15 - *(byte *)(plVar24 + 2));
            *(ulong *)((long)plVar24 + 0x38) = unaff_R15;
            plVar25 = plVar24 + 1;
LAB_0011018e:
            *(long *)((long)plVar25 + 8) = *(long *)((long)plVar25 + 8) - (long)puVar20;
            goto LAB_00110526;
          }
        }
LAB_001104bb:
        if ((*(long *)((long)plVar26 + 0xf8) == 0) &&
           (*(ulong *)((long)plVar26 + 0x20) <=
            (ulong)(*(long *)((long)plVar26 + 0x18) - (long)unaff_R12))) {
          pcVar36 = pcVar31 + unaff_R15;
          *(undefined8 *)((long)plVar26 + -8) = 0x1105d8;
          memmove(pcVar31 + *(long *)((long)plVar26 + 0x20) + unaff_R15,pcVar36,
                  unaff_R14 - unaff_R15);
          if (*(char *)((long)plVar26 + 7) != '\0') {
            unaff_R15 = unaff_R15 + 1;
            *pcVar36 = '.';
          }
          *(undefined8 *)((long)plVar26 + -8) = 0x1105f3;
          memset(pcVar31 + unaff_R15,0x30,*(size_t *)((long)plVar26 + 8));
          *(undefined8 *)((long)plVar26 + 0x10) = *(undefined8 *)((long)plVar26 + 0x38);
          unaff_R14 = *(long *)((long)plVar26 + 0x20) + *(long *)((long)plVar26 + 0x30);
        }
        else {
          *(undefined8 *)((long)plVar26 + -8) = 0x1104f2;
          __cxx11::string::reserve
                    ((string *)((long)plVar26 + 0xf0),unaff_R14 + *(long *)((long)plVar26 + 0x20));
          uVar32 = *(ulong *)((long)plVar26 + 0xf8);
          if (uVar32 == 0) {
            uVar32 = *(ulong *)((long)plVar26 + 0x30);
            if (unaff_R15 <= *(ulong *)((long)plVar26 + 0x30)) {
              uVar32 = unaff_R15;
            }
            *(undefined8 *)((long)plVar26 + -8) = 0x11064b;
            __cxx11::string::_M_replace
                      ((string *)((long)plVar26 + 0xf0),0,0,*(char **)((long)plVar26 + 0x38),uVar32)
            ;
            if (*(char *)((long)plVar26 + 7) != '\0') {
              *(undefined8 *)((long)plVar26 + -8) = 0x110690;
              __cxx11::string::push_back((string *)((long)plVar26 + 0xf0),'.');
            }
            if (*(ulong *)((long)plVar26 + 8) != 0) {
              *(undefined8 *)((long)plVar26 + -8) = 0x11067c;
              __cxx11::string::_M_replace_aux
                        ((string *)((long)plVar26 + 0xf0),*(ulong *)((long)plVar26 + 0xf8),0,
                         *(ulong *)((long)plVar26 + 8),'0');
            }
            uVar32 = *(ulong *)((long)plVar26 + 0x30);
            if (uVar32 < unaff_R15) {
              *(undefined8 *)((long)plVar26 + -8) = 0x110741;
              uVar16 = std::__throw_out_of_range_fmt
                                 ("%s: __pos (which is %zu) > __size (which is %zu)",
                                  "basic_string_view::substr",unaff_R15,uVar32);
              *(undefined8 *)((long)plVar26 + -8) = 0x110c15;
              __cxx11::string::_M_dispose((string *)((long)plVar26 + 0xf0));
                    /* WARNING: Subroutine does not return */
              *(undefined1 **)((long)plVar26 + -8) = &LAB_00110c1d;
              _Unwind_Resume(uVar16);
            }
            uVar32 = uVar32 - unaff_R15;
            pcVar36 = (char *)(unaff_R15 + *(long *)((long)plVar26 + 0x38));
            uVar19 = *(ulong *)((long)plVar26 + 0xf8);
            if (0x7fffffffffffffff - uVar19 < uVar32) {
              *(undefined8 *)((long)plVar26 + -8) = 0x110755;
              puVar17 = (undefined1 *)std::__throw_length_error("basic_string::append");
LAB_00110755:
              pcVar23 = (char *)0xf;
            }
            else {
              pcVar31 = (char *)(uVar32 + uVar19);
              puVar17 = *(undefined1 **)((long)plVar26 + 0xf0);
              if (puVar17 == (undefined1 *)((long)plVar26 + 0x100)) goto LAB_00110755;
              pcVar23 = *(char **)((long)plVar26 + 0x100);
            }
            if (pcVar23 < pcVar31) {
              *(undefined8 *)((long)plVar26 + -8) = 0x110793;
              __cxx11::string::_M_mutate((string *)((long)plVar26 + 0xf0),uVar19,0,pcVar36,uVar32);
            }
            else if (uVar32 != 0) {
              if (uVar32 == 1) {
                puVar17[uVar19] = *pcVar36;
              }
              else {
                *(undefined8 *)((long)plVar26 + -8) = 0x110771;
                memcpy(puVar17 + uVar19,pcVar36,uVar32);
              }
            }
            *(char **)((long)plVar26 + 0xf8) = pcVar31;
            pcVar31[*(long *)((long)plVar26 + 0xf0)] = '\0';
          }
          else {
            if (uVar32 < unaff_R15) {
              *(undefined8 *)((long)plVar26 + -8) = 0x11082a;
              std::__throw_out_of_range_fmt
                        ("%s: __pos (which is %zu) > this->size() (which is %zu)",
                         "basic_string::insert",unaff_R15,uVar32);
LAB_0011082a:
              *(undefined8 *)((long)plVar26 + -8) = 0x110836;
              auVar38 = std::__throw_length_error("basic_string::_M_replace_aux");
LAB_00110836:
              pcVar36 = (char *)0xf;
            }
            else {
              if (0x7fffffffffffffff - uVar32 < *(ulong *)((long)plVar26 + 0x20)) goto LAB_0011082a;
              pcVar31 = (char *)(uVar32 + *(long *)((long)plVar26 + 0x20));
              auVar38._8_8_ = uVar32;
              auVar38._0_8_ = *(undefined1 **)((long)plVar26 + 0xf0);
              if (*(undefined1 **)((long)plVar26 + 0xf0) == (undefined1 *)((long)plVar26 + 0x100))
              goto LAB_00110836;
              pcVar36 = *(char **)((long)plVar26 + 0x100);
            }
            if (pcVar36 < pcVar31) {
              *(undefined8 *)((long)plVar26 + -8) = 0x11087d;
              __cxx11::string::_M_mutate
                        ((string *)((long)plVar26 + 0xf0),unaff_R15,0,(char *)0x0,
                         *(ulong *)((long)plVar26 + 0x20));
            }
            else {
              sVar22 = auVar38._8_8_ - unaff_R15;
              if (sVar22 != 0) {
                puVar17 = (undefined1 *)(auVar38._0_8_ + unaff_R15);
                if (sVar22 == 1) {
                  puVar17[*(long *)((long)plVar26 + 0x20)] = *puVar17;
                }
                else {
                  *(undefined8 *)((long)plVar26 + -8) = 0x110855;
                  memmove(puVar17 + *(long *)((long)plVar26 + 0x20),puVar17,sVar22);
                }
              }
            }
            if (*(long *)((long)plVar26 + 0x20) == 1) {
              *(undefined1 *)(unaff_R15 + *(long *)((long)plVar26 + 0xf0)) = 0x30;
            }
            else {
              *(undefined8 *)((long)plVar26 + -8) = 0x11080a;
              memset((undefined1 *)(unaff_R15 + *(long *)((long)plVar26 + 0xf0)),0x30,
                     *(size_t *)((long)plVar26 + 0x20));
            }
            *(char **)((long)plVar26 + 0xf8) = pcVar31;
            pcVar31[*(long *)((long)plVar26 + 0xf0)] = '\0';
            if (*(char *)((long)plVar26 + 7) != '\0') {
              *(undefined1 *)(*(long *)((long)plVar26 + 0xf0) + unaff_R15) = 0x2e;
            }
          }
          unaff_R14 = *(ulong *)((long)plVar26 + 0xf8);
          *(undefined8 *)((long)plVar26 + 0x10) = *(undefined8 *)((long)plVar26 + 0xf0);
        }
      }
      else {
        *(undefined8 *)((long)plVar24 + 8) = 0x11011f;
        pvVar12 = memchr(pcVar31,0x2e,unaff_R14);
        if (pvVar12 == (void *)0x0) goto LAB_0011047e;
        lVar15 = (long)pvVar12 - (long)pcVar31;
        *(long *)((long)plVar24 + 0x38) = lVar15;
        if (lVar15 == -1) goto LAB_0011047e;
        *(ulong *)(plVar24 + 3) = lVar15 + 1U;
        *(undefined8 *)((long)plVar24 + 8) = 0x110152;
        unaff_R15 = basic_string_view<char,std::char_traits<char>>::find
                              ((basic_string_view<char,std::char_traits<char>> *)(plVar24 + 4),
                               *(char *)((long)plVar24 + 0x16),lVar15 + 1U);
        if (unaff_R15 == 0xffffffffffffffff) {
          unaff_R15 = unaff_R14;
        }
        if (*(char *)((long)plVar24 + 0x17) != '\0') {
          puVar20 = (uint *)((unaff_R15 - *(byte *)(plVar24 + 2)) + -1);
          plVar25 = plVar24 + 1;
          if (pcVar31[*(byte *)(plVar24 + 2)] == '0') {
            if (*(ulong *)(plVar24 + 3) < unaff_R14) {
              do {
                if (pcVar31[*(long *)(plVar24 + 3)] != '0') goto LAB_00110463;
                uVar32 = *(long *)(plVar24 + 3) + 1;
                *(ulong *)(plVar24 + 3) = uVar32;
              } while (uVar32 < unaff_R14);
              *(undefined8 *)(plVar24 + 3) = 0xffffffffffffffff;
            }
            else {
              *(undefined8 *)(plVar24 + 3) = 0xffffffffffffffff;
            }
LAB_00110463:
            puVar20 = (uint *)(unaff_R15 - *(long *)(plVar24 + 3));
            plVar25 = plVar24 + 1;
          }
LAB_00110182:
          if (*(long *)((long)plVar25 + 8) == 0) goto LAB_00110526;
          goto LAB_0011018e;
        }
        *(undefined8 *)((long)plVar24 + 0x18) = 0;
LAB_00110526:
        *(bool *)((long)plVar25 + 7) = *(ulong *)((long)plVar25 + 0x28) == unaff_R15;
        *(char **)((long)plVar25 + 0x10) = pcVar31;
        lVar15 = (ulong)(*(ulong *)((long)plVar25 + 0x28) == unaff_R15) +
                 *(long *)((long)plVar25 + 8);
        *(long *)((long)plVar25 + 0x20) = lVar15;
        plVar26 = plVar25;
        if (lVar15 != 0) goto LAB_001104bb;
      }
      *(undefined1 **)((long)plVar26 + 0x50) = (undefined1 *)((long)plVar26 + 0x60);
      *(undefined8 *)((long)plVar26 + 0x58) = 0;
      *(undefined1 *)((long)plVar26 + 0x60) = 0;
      pcVar31 = *(char **)((long)plVar26 + 0x10);
      plVar28 = plVar26;
      plVar27 = plVar26;
      if (((byte)*this & 0x20) == 0) goto LAB_001108f5;
    }
    if (param_2[0x20] == (basic_format_context)0x0) {
      *(undefined8 *)((long)plVar27 + -8) = 0x11090e;
      std::locale::locale((locale *)(param_2 + 0x18));
      param_2[0x20] = (basic_format_context)0x1;
    }
    *(undefined8 *)((long)plVar27 + -8) = 0x110593;
    std::locale::locale((locale *)((long)plVar27 + 0x118),(locale *)(param_2 + 0x18));
    *(undefined8 *)((long)plVar27 + -8) = 0x1105b4;
    _M_localize_abi_cxx11_
              ((undefined1 *)((long)plVar27 + 0x30),this,unaff_R14,
               *(undefined8 *)((long)plVar27 + 0x10),(int)*(char *)((long)plVar27 + 6),
               (locale *)((long)plVar27 + 0x118));
    puVar5 = *(undefined8 **)((long)plVar27 + 0x50);
    if (puVar5 == (undefined8 *)((long)plVar27 + 0x60)) {
      if (*(undefined1 **)((long)plVar27 + 0x30) == (undefined1 *)((long)plVar27 + 0x40)) {
        uVar32 = *(ulong *)((long)plVar27 + 0x38);
        goto LAB_00110c27;
      }
      *(undefined1 **)((long)plVar27 + 0x50) = *(undefined1 **)((long)plVar27 + 0x30);
      *(undefined8 *)((long)plVar27 + 0x58) = *(undefined8 *)((long)plVar27 + 0x38);
      *(undefined8 *)((long)plVar27 + 0x60) = *(undefined8 *)((long)plVar27 + 0x40);
LAB_001109db:
      *(undefined1 **)((long)plVar27 + 0x30) = (undefined1 *)((long)plVar27 + 0x40);
    }
    else if (*(undefined1 **)((long)plVar27 + 0x30) == (undefined1 *)((long)plVar27 + 0x40)) {
      uVar32 = *(ulong *)((long)plVar27 + 0x38);
LAB_00110c27:
      if (uVar32 != 0) {
        if (uVar32 == 1) {
          *(undefined1 *)puVar5 = *(undefined1 *)((long)plVar27 + 0x40);
        }
        else {
          uVar29 = (uint)uVar32;
          uVar19 = uVar32 & 0xffffffff;
          if (uVar29 < 8) {
            if ((uVar32 & 4) == 0) {
              if ((uVar29 != 0) &&
                 (*(undefined1 *)puVar5 = *(undefined1 *)((long)plVar27 + 0x40), (uVar32 & 2) != 0))
              {
                *(undefined2 *)((long)puVar5 + (uVar19 - 2)) =
                     *(undefined2 *)((long)plVar27 + uVar19 + 0x3e);
              }
            }
            else {
              *(undefined4 *)puVar5 = *(undefined4 *)((long)plVar27 + 0x40);
              *(undefined4 *)((long)puVar5 + (uVar19 - 4)) =
                   *(undefined4 *)((long)plVar27 + uVar19 + 0x3c);
            }
          }
          else {
            *puVar5 = *(undefined8 *)((long)plVar27 + 0x40);
            *(undefined8 *)((long)puVar5 + ((uVar32 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)plVar27 + (uVar32 & 0xffffffff) + 0x38);
            lVar15 = (long)puVar5 - ((ulong)(puVar5 + 1) & 0xfffffffffffffff8);
            uVar29 = (int)lVar15 + uVar29 & 0xfffffff8;
            if (7 < uVar29) {
              uVar11 = 0;
              do {
                *(undefined8 *)(((ulong)(puVar5 + 1) & 0xfffffffffffffff8) + (ulong)uVar11) =
                     *(undefined8 *)((long)plVar27 + (ulong)uVar11 + (0x40 - lVar15));
                uVar11 = uVar11 + 8;
              } while (uVar11 < uVar29);
            }
          }
        }
      }
      *(long *)((long)plVar27 + 0x58) = *(long *)((long)plVar27 + 0x38);
      *(undefined1 *)(*(long *)((long)plVar27 + 0x50) + *(long *)((long)plVar27 + 0x38)) = 0;
    }
    else {
      uVar16 = *(undefined8 *)((long)plVar27 + 0x60);
      *(undefined1 **)((long)plVar27 + 0x50) = *(undefined1 **)((long)plVar27 + 0x30);
      *(undefined8 *)((long)plVar27 + 0x58) = *(undefined8 *)((long)plVar27 + 0x38);
      *(undefined8 *)((long)plVar27 + 0x60) = *(undefined8 *)((long)plVar27 + 0x40);
      if (puVar5 == (undefined8 *)0x0) goto LAB_001109db;
      *(undefined8 **)((long)plVar27 + 0x30) = puVar5;
      *(undefined8 *)((long)plVar27 + 0x40) = uVar16;
    }
    *(undefined8 *)((long)plVar27 + 0x38) = 0;
    **(undefined1 **)((long)plVar27 + 0x30) = 0;
    *(undefined8 *)((long)plVar27 + -8) = 0x110986;
    __cxx11::string::_M_dispose((string *)((long)plVar27 + 0x30));
    *(undefined8 *)((long)plVar27 + -8) = 0x110993;
    std::locale::~locale((locale *)((long)plVar27 + 0x118));
    pcVar31 = *(char **)((long)plVar27 + 0x10);
    plVar28 = plVar27;
    if (*(ulong *)((long)plVar27 + 0x58) != 0) {
      pcVar31 = *(char **)((long)plVar27 + 0x50);
      unaff_R14 = *(ulong *)((long)plVar27 + 0x58);
    }
LAB_001108f5:
    *(undefined8 *)((long)plVar28 + -8) = 0x110900;
    uVar32 = _Spec<char>::
             _M_get_width<std::basic_format_context<std::__format::_Sink_iter<char>,char>>
                       ((_Spec<char> *)this,param_2);
    if (unaff_R14 < uVar32) {
      uVar33 = *(undefined4 *)(this + 8);
      _Var2 = *this;
      lVar15 = uVar32 - unaff_R14;
      p_Var3 = *(__format **)(param_2 + 0x10);
      bVar18 = (byte)_Var2 & 3;
      if (((byte)_Var2 & 3) == 0) {
        if (((byte)_Var2 & 0x40) == 0) {
          bVar18 = 2;
          uVar33 = 0x20;
        }
        else if (_DAT_0011a370 < ABS(*(longdouble *)((long)plVar28 + 0x160))) {
          bVar18 = 2;
          uVar33 = 0x20;
        }
        else {
          bVar18 = 2;
          uVar33 = 0x30;
          if (0xf < (byte)__detail::__from_chars_alnum_to_val_table<false>::value
                          [**(byte **)((long)plVar28 + 0x10)]) {
            cVar34 = *pcVar31;
            pcVar36 = *(char **)(p_Var3 + 0x18);
            *(char **)(p_Var3 + 0x18) = pcVar36 + 1;
            *pcVar36 = cVar34;
            if (*(long *)(p_Var3 + 0x18) - *(long *)(p_Var3 + 8) == *(long *)(p_Var3 + 0x10)) {
              pcVar6 = (code *)**(undefined8 **)p_Var3;
              *(undefined8 *)((long)plVar28 + -8) = 0x110b66;
              (*pcVar6)(p_Var3);
            }
            pcVar31 = pcVar31 + 1;
            unaff_R14 = unaff_R14 - 1;
            bVar18 = 2;
            uVar33 = 0x30;
          }
        }
      }
      *(undefined8 *)((long)plVar28 + -8) = 0x110b84;
      uVar16 = __write_padded<std::__format::_Sink_iter<char>,char>
                         (p_Var3,unaff_R14,pcVar31,bVar18,lVar15,uVar33);
    }
    else {
      p_Var3 = *(__format **)(param_2 + 0x10);
      *(undefined8 *)((long)plVar28 + -8) = 0x110b58;
      uVar16 = __write<std::__format::_Sink_iter<char>,char>(p_Var3,unaff_R14,pcVar31);
    }
    if (*(undefined1 **)((long)plVar28 + 0x50) != (undefined1 *)((long)plVar28 + 0x60)) {
      *(undefined8 *)((long)plVar28 + -8) = 0x110bb3;
      operator_delete(*(undefined1 **)((long)plVar28 + 0x50),*(long *)((long)plVar28 + 0x60) + 1);
    }
    if (*(undefined1 **)((long)plVar28 + 0xf0) != (undefined1 *)((long)plVar28 + 0x100)) {
      *(undefined8 *)((long)plVar28 + -8) = 0x110bd9;
      operator_delete(*(undefined1 **)((long)plVar28 + 0xf0),*(long *)((long)plVar28 + 0x100) + 1);
    }
    return uVar16;
  }
LAB_0010f20c:
  cVar34 = (char)unaff_R14;
  if (((byte)this[1] & 0x78) != 0x10) {
    local_152 = 'p';
  }
  if ((char)uVar29 == '\0') {
    puStack_170 = (undefined1 *)0x10f24f;
    auVar39 = std::to_chars(local_160,local_e7,&local_68,4);
    iVar10 = 4;
LAB_0010f257:
    pppppppuVar14 = auVar39._0_8_;
    if (auVar39._8_4_ == 0x4b) {
      uVar32 = local_150 + 8;
      local_151 = '\0';
      local_148 = (ulong *******)((ulong)local_148 & 0xffffffffffffff00);
      goto LAB_0010fe89;
    }
    local_151 = '\0';
    local_140 = (ulong *******)&local_68;
    pppppppuVar30 = local_e7;
  }
  else {
switchD_0010f12d_default:
    cVar34 = (char)unaff_R14;
    iVar10 = 4;
    local_151 = '\0';
LAB_0010f1b1:
    puStack_170 = (undefined1 *)0x10f1d2;
    auVar39 = std::to_chars(local_160,local_e7,&local_68,iVar10,local_150 & 0xffffffff);
    pppppppuVar14 = auVar39._0_8_;
    if (auVar39._8_4_ == 0x4b) {
      uVar32 = local_150 + 8;
      local_148 = (ulong *******)CONCAT71(local_148._1_7_,1);
      if (iVar10 == 2) {
        local_128 = (ulong *******)((ulong)local_128 & 0xffffffff00000000);
        puStack_170 = (undefined1 *)0x10f4c8;
        frexp(local_160,(int *)&local_128);
        if (0 < (int)local_128) {
          uVar32 = uVar32 + ((uint)((int)local_128 * 0xfa4) / 0x33f5 + 1);
        }
        local_148 = (ulong *******)CONCAT71(local_148._1_7_,1);
      }
LAB_0010fe89:
      if (uVar32 < 0x81) {
        uVar32 = 0x100;
      }
                    /* try { // try from 0010fea4 to 0010fea8 has its CatchHandler @ 0010f901 */
      puStack_170 = (undefined1 *)0x10fea9;
      __cxx11::string::reserve((string *)&local_68,uVar32);
      local_140 = (ulong *******)&local_58;
      do {
        if (local_68 == local_140) {
          lVar15 = 0xf;
        }
        else {
          lVar15 = CONCAT71(uStack_57,local_58);
        }
        puStack_170 = (undefined1 *)0x10f536;
        __cxx11::string::reserve((string *)&local_68,lVar15 * 2);
        pppppppuVar30 = local_68;
        pbVar1 = (byte *)((long)local_68 + (lVar15 * 2 - 1U));
        pbVar21 = (byte *)((long)local_68 + 1);
        if ((char)local_148 == '\0') {
          if (iVar10 == 0) {
            puStack_170 = (undefined1 *)0x10f5c6;
            auVar39 = std::to_chars((char *)pbVar21,(char *)pbVar1,local_160);
          }
          else {
            puStack_170 = (undefined1 *)0x10f568;
            auVar39 = std::to_chars(local_160,pbVar21,pbVar1,iVar10);
          }
        }
        else {
          puStack_170 = (undefined1 *)0x10f5b9;
          auVar39 = std::to_chars(local_160,pbVar21,pbVar1,iVar10,local_150 & 0xffffffff);
        }
        pppppppuVar14 = auVar39._0_8_;
        if (auVar39._8_4_ == 0) {
          local_60 = (ulong *******)((long)pppppppuVar14 - (long)pppppppuVar30);
          *(byte *)((long)local_68 + (long)local_60) = 0;
          pppppppuVar30 = (ulong *******)((long)local_68 + 1);
          local_140 = (ulong *******)((long)local_68 + (long)local_60);
          goto LAB_0010f27a;
        }
        local_60 = (ulong *******)0x0;
        *(byte *)local_68 = 0;
      } while (auVar39._8_4_ == 0x4b);
      pppppppuVar30 = (ulong *******)((long)local_68 + 1);
      local_140 = local_68;
    }
    else {
      local_140 = (ulong *******)&local_68;
      pppppppuVar30 = local_e7;
    }
  }
LAB_0010f27a:
  iVar10 = (int)local_140;
  pppppppuVar35 = pppppppuVar30;
  if (cVar34 != '\0') {
    for (; pppppppuVar35 != pppppppuVar14; pppppppuVar35 = (ulong *******)((long)pppppppuVar35 + 1))
    {
      puStack_170 = (undefined1 *)0x10f290;
      iVar10 = toupper((int)(char)*(byte *)pppppppuVar35);
      *(byte *)pppppppuVar35 = (byte)iVar10;
    }
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_160;
  uVar29 = movmskpd(iVar10,auVar7);
  uVar8 = local_148._1_7_;
  local_148 = (ulong *******)CONCAT71(local_148._1_7_,1);
  if ((uVar29 & 1) == 0) {
    if (((byte)*this & 0xc) == 4) {
      *(byte *)((long)pppppppuVar30 + -1) = 0x2b;
      pppppppuVar30 = (ulong *******)((long)pppppppuVar30 + -1);
    }
    else {
      local_148 = (ulong *******)((ulong)local_148._1_7_ << 8);
      if (((byte)*this & 0xc) == 0xc) {
        *(byte *)((long)pppppppuVar30 + -1) = 0x20;
        pppppppuVar30 = (ulong *******)((long)pppppppuVar30 + -1);
        local_148 = (ulong *******)CONCAT71(uVar8,1);
      }
    }
  }
  pppppppuVar35 = (ulong *******)((long)pppppppuVar14 - (long)pppppppuVar30);
  if (((byte)*this & 0x10) == 0) {
    local_108 = (ulong *******)&local_f8;
    local_100 = (ulong *******)0x0;
    local_f8 = (ulong ******)((ulong)local_f8._1_7_ << 8);
    local_148 = pppppppuVar30;
    if ((((byte)*this & 0x20) == 0) || (1.79769313486232e+308 < ABS(local_160))) goto LAB_0010fabc;
  }
  else {
    if (1.79769313486232e+308 < ABS(local_160)) {
      local_108 = (ulong *******)&local_f8;
      local_100 = (ulong *******)0x0;
      local_f8 = (ulong ******)((ulong)local_f8._1_7_ << 8);
      local_148 = pppppppuVar30;
      goto LAB_0010fabc;
    }
    local_128 = pppppppuVar35;
    local_120 = pppppppuVar30;
    if (pppppppuVar35 == (ulong *******)0x0) {
LAB_0010f63e:
      puStack_170 = (undefined1 *)0x10f652;
      pppppppuVar13 =
           (ulong *******)
           basic_string_view<char,std::char_traits<char>>::find
                     ((basic_string_view<char,std::char_traits<char>> *)&local_128,local_152,0);
      if (pppppppuVar13 == (ulong *******)0xffffffffffffffff) {
        pppppppuVar13 = pppppppuVar35;
      }
      if (local_151 == '\0') {
        local_138 = (ulong *******)0x1;
        local_150 = 0;
        local_151 = '\x01';
      }
      else {
        local_138 = (ulong *******)0x1;
        if (local_150 != 0) {
          pbVar21 = (byte *)((long)pppppppuVar13 - ((ulong)local_148 & 0xff));
          local_130 = pppppppuVar13;
          goto LAB_0010f38b;
        }
      }
LAB_0010f67b:
      if ((local_60 == (ulong *******)0x0) &&
         (local_138 <= (ulong)((long)local_140 - (long)pppppppuVar14))) {
        pbVar21 = (byte *)((long)pppppppuVar30 + (long)pppppppuVar13);
        puStack_170 = (undefined1 *)0x10f798;
        memmove((byte *)((long)local_138 + (long)pppppppuVar13) + (long)pppppppuVar30,pbVar21,
                (long)pppppppuVar35 - (long)pppppppuVar13);
        if (local_151 != '\0') {
          pppppppuVar13 = (ulong *******)((long)pppppppuVar13 + 1);
          *pbVar21 = 0x2e;
        }
        puStack_170 = (undefined1 *)0x10f7b3;
        memset((byte *)((long)pppppppuVar30 + (long)pppppppuVar13),0x30,local_150);
        local_148 = local_120;
        pppppppuVar35 = (ulong *******)((long)local_138 + (long)local_128);
      }
      else {
        puStack_170 = (undefined1 *)0x10f6b2;
        __cxx11::string::reserve((string *)&local_68,(ulong)((long)pppppppuVar35 + (long)local_138))
        ;
        auVar37._8_8_ = local_60;
        auVar37._0_8_ = local_68;
        if (local_60 == (ulong *******)0x0) {
          pppppppuVar14 = local_128;
          if (pppppppuVar13 <= local_128) {
            pppppppuVar14 = pppppppuVar13;
          }
                    /* try { // try from 0010f806 to 0010fa3c has its CatchHandler @ 0010f901 */
          puStack_170 = (undefined1 *)0x10f80b;
          __cxx11::string::_M_replace
                    ((string *)&local_68,0,0,(char *)local_120,(ulong)pppppppuVar14);
          if (local_151 != '\0') {
            puStack_170 = (undefined1 *)0x10f850;
            __cxx11::string::push_back((string *)&local_68,'.');
          }
          if (local_150 != 0) {
            puStack_170 = (undefined1 *)0x10f83c;
            __cxx11::string::_M_replace_aux((string *)&local_68,(ulong)local_60,0,local_150,'0');
          }
          if (local_128 < pppppppuVar13) {
            puStack_170 = (undefined1 *)0x10f901;
            uVar16 = std::__throw_out_of_range_fmt
                               ("%s: __pos (which is %zu) > __size (which is %zu)",
                                "basic_string_view::substr",pppppppuVar13,local_128);
            puStack_170 = (undefined1 *)0x10fde3;
            __cxx11::string::_M_dispose((string *)&local_68);
                    /* WARNING: Subroutine does not return */
            puStack_170 = &LAB_0010fdeb;
            _Unwind_Resume(uVar16);
                    /* catch() { ... } // from try @ 0010f12f with catch @ 0010f901
                       catch() { ... } // from try @ 0010f806 with catch @ 0010f901
                       catch() { ... } // from try @ 0010fea4 with catch @ 0010f901 */
          }
          uVar32 = (long)local_128 - (long)pppppppuVar13;
          pbVar21 = (byte *)((long)pppppppuVar13 + (long)local_120);
          pppppppuVar14 = local_60;
          if (0x7fffffffffffffffU - (long)local_60 < uVar32) {
            puStack_170 = (undefined1 *)0x10f915;
            pppppppuVar35 = (ulong *******)std::__throw_length_error("basic_string::append");
LAB_0010f915:
            pppppppuVar13 = (ulong *******)0xf;
          }
          else {
            pppppppuVar30 = (ulong *******)(uVar32 + (long)local_60);
            pppppppuVar35 = local_68;
            if (local_68 == (ulong *******)&local_58) goto LAB_0010f915;
            pppppppuVar13 = (ulong *******)CONCAT71(uStack_57,local_58);
          }
          if (pppppppuVar13 < pppppppuVar30) {
            puStack_170 = (undefined1 *)0x10f953;
            __cxx11::string::_M_mutate
                      ((string *)&local_68,(ulong)pppppppuVar14,0,(char *)pbVar21,uVar32);
          }
          else if (uVar32 != 0) {
            if (uVar32 == 1) {
              *(byte *)((long)pppppppuVar35 + (long)pppppppuVar14) = *pbVar21;
            }
            else {
              puStack_170 = (undefined1 *)0x10f931;
              memcpy((byte *)((long)pppppppuVar35 + (long)pppppppuVar14),pbVar21,uVar32);
            }
          }
          local_60 = pppppppuVar30;
          *(byte *)((long)local_68 + (long)pppppppuVar30) = 0;
        }
        else {
          if (local_60 < pppppppuVar13) {
            puStack_170 = (undefined1 *)0x10f9ea;
            std::__throw_out_of_range_fmt
                      ("%s: __pos (which is %zu) > this->size() (which is %zu)",
                       "basic_string::insert",pppppppuVar13,local_60);
LAB_0010f9ea:
            puStack_170 = (undefined1 *)0x10f9f6;
            auVar37 = std::__throw_length_error("basic_string::_M_replace_aux");
LAB_0010f9f6:
            pppppppuVar14 = (ulong *******)0xf;
          }
          else {
            if (0x7fffffffffffffffU - (long)local_60 < local_138) goto LAB_0010f9ea;
            pppppppuVar30 = (ulong *******)((long)local_60 + (long)local_138);
            if (local_68 == (ulong *******)&local_58) goto LAB_0010f9f6;
            pppppppuVar14 = (ulong *******)CONCAT71(uStack_57,local_58);
          }
          if (pppppppuVar14 < pppppppuVar30) {
            puStack_170 = (undefined1 *)0x10fa3d;
            __cxx11::string::_M_mutate
                      ((string *)&local_68,(ulong)pppppppuVar13,0,(char *)0x0,(ulong)local_138);
          }
          else {
            sVar22 = auVar37._8_8_ - (long)pppppppuVar13;
            if (sVar22 != 0) {
              pbVar21 = (byte *)(auVar37._0_8_ + (long)pppppppuVar13);
              if (sVar22 == 1) {
                pbVar21[(long)local_138] = *pbVar21;
              }
              else {
                puStack_170 = (undefined1 *)0x10fa15;
                memmove(pbVar21 + (long)local_138,pbVar21,sVar22);
              }
            }
          }
          if (local_138 == (ulong *******)0x1) {
            *(byte *)((long)pppppppuVar13 + (long)local_68) = 0x30;
          }
          else {
            puStack_170 = (undefined1 *)0x10f9ca;
            memset((byte *)((long)pppppppuVar13 + (long)local_68),0x30,(size_t)local_138);
          }
          local_60 = pppppppuVar30;
          *(byte *)((long)local_68 + (long)pppppppuVar30) = 0;
          if (local_151 != '\0') {
            *(byte *)((long)local_68 + (long)pppppppuVar13) = 0x2e;
          }
        }
        local_148 = local_68;
        pppppppuVar35 = local_60;
      }
    }
    else {
      puStack_170 = (undefined1 *)0x10f31c;
      pvVar12 = memchr(pppppppuVar30,0x2e,(size_t)pppppppuVar35);
      if ((pvVar12 == (void *)0x0) ||
         (local_130 = (ulong *******)((long)pvVar12 - (long)pppppppuVar30),
         local_130 == (ulong *******)0xffffffffffffffff)) goto LAB_0010f63e;
      local_138 = (ulong *******)((long)local_130 + 1);
      puStack_170 = (undefined1 *)0x10f34f;
      pppppppuVar13 =
           (ulong *******)
           basic_string_view<char,std::char_traits<char>>::find
                     ((basic_string_view<char,std::char_traits<char>> *)&local_128,local_152,
                      (ulong)local_138);
      if (pppppppuVar13 == (ulong *******)0xffffffffffffffff) {
        pppppppuVar13 = pppppppuVar35;
      }
      if (local_151 == '\0') {
        local_150 = 0;
      }
      else {
        lVar15 = -1 - ((ulong)local_148 & 0xff);
        if (*(byte *)((long)pppppppuVar30 + ((ulong)local_148 & 0xff)) == 0x30) {
          if (local_138 < pppppppuVar35) {
            do {
              if (*(byte *)((long)pppppppuVar30 + (long)local_138) != 0x30) goto LAB_0010f623;
              local_138 = (ulong *******)((long)local_138 + 1);
            } while (local_138 < pppppppuVar35);
            local_138 = (ulong *******)0xffffffffffffffff;
          }
          else {
            local_138 = (ulong *******)0xffffffffffffffff;
          }
LAB_0010f623:
          lVar15 = -(long)local_138;
        }
        pbVar21 = (byte *)((long)pppppppuVar13 + lVar15);
        if (local_150 == 0) goto LAB_0010f6e6;
LAB_0010f38b:
        local_150 = local_150 - (long)pbVar21;
      }
LAB_0010f6e6:
      local_151 = local_130 == pppppppuVar13;
      local_138 = (ulong *******)((byte)local_151 + local_150);
      local_148 = pppppppuVar30;
      if (local_138 != (ulong *******)0x0) goto LAB_0010f67b;
    }
    local_108 = (ulong *******)&local_f8;
    local_100 = (ulong *******)0x0;
    local_f8 = (ulong ******)((ulong)local_f8 & 0xffffffffffffff00);
    pppppppuVar30 = local_148;
    if (((byte)*this & 0x20) == 0) goto LAB_0010fabc;
  }
  local_108 = (ulong *******)&local_f8;
  local_100 = (ulong *******)0x0;
  if (param_2[0x20] == (basic_format_context)0x0) {
    puStack_170 = (undefined1 *)0x10fad5;
    std::locale::locale((locale *)(param_2 + 0x18));
    param_2[0x20] = (basic_format_context)0x1;
  }
  puStack_170 = (undefined1 *)0x10f753;
  std::locale::locale(local_40,(locale *)(param_2 + 0x18));
                    /* try { // try from 0010f76f to 0010f773 has its CatchHandler @ 0010fdbc */
  puStack_170 = (undefined1 *)0x10f774;
  _M_localize_abi_cxx11_(&local_128,this,pppppppuVar35,local_148,(int)local_152,local_40);
  ppppppuVar9 = local_f8;
  pppppppuVar14 = local_108;
  if (local_108 == (ulong *******)&local_f8) {
    if (local_128 == local_118) goto LAB_0010fdf5;
LAB_0010fba2:
    local_f8 = local_118[0];
    local_108 = local_128;
    local_128 = local_118;
  }
  else if (local_128 == local_118) {
LAB_0010fdf5:
    if (local_120 != (ulong *******)0x0) {
      if (local_120 == (ulong *******)0x1) {
        *(byte *)local_108 = (byte)local_118[0];
      }
      else {
        uVar29 = (uint)local_120;
        uVar32 = (ulong)local_120 & 0xffffffff;
        if (uVar29 < 8) {
          if (((ulong)local_120 & 4) == 0) {
            if ((uVar29 != 0) &&
               (*(byte *)local_108 = (byte)local_118[0], ((ulong)local_120 & 2) != 0)) {
              *(undefined2 *)((long)local_108 + (uVar32 - 2)) =
                   *(undefined2 *)((long)local_118 + (uVar32 - 2));
            }
          }
          else {
            *(undefined4 *)local_108 = local_118[0]._0_4_;
            *(undefined4 *)((long)local_108 + (uVar32 - 4)) =
                 *(undefined4 *)((long)local_118 + (uVar32 - 4));
          }
        }
        else {
          *local_108 = local_118[0];
          *(undefined8 *)((long)local_108 + (((ulong)local_120 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)local_118 + (((ulong)local_120 & 0xffffffff) - 8));
          lVar15 = (long)local_108 - ((ulong)(local_108 + 1) & 0xfffffffffffffff8);
          uVar29 = (int)lVar15 + uVar29 & 0xfffffff8;
          if (7 < uVar29) {
            uVar11 = 0;
            do {
              *(undefined8 *)(((ulong)(local_108 + 1) & 0xfffffffffffffff8) + (ulong)uVar11) =
                   *(undefined8 *)((long)local_118 + ((ulong)uVar11 - lVar15));
              uVar11 = uVar11 + 8;
            } while (uVar11 < uVar29);
          }
        }
      }
    }
    *(byte *)((long)local_108 + (long)local_120) = 0;
  }
  else {
    local_108 = local_128;
    local_f8 = local_118[0];
    if (pppppppuVar14 == (ulong *******)0x0) goto LAB_0010fba2;
    local_128 = pppppppuVar14;
    local_118[0] = ppppppuVar9;
  }
  local_100 = local_120;
  local_120 = (ulong *******)0x0;
  *(byte *)local_128 = 0;
  puStack_170 = (undefined1 *)0x10fb4d;
  __cxx11::string::_M_dispose((string *)&local_128);
  puStack_170 = (undefined1 *)0x10fb5a;
  std::locale::~locale(local_40);
  pppppppuVar30 = local_148;
  if (local_100 != (ulong *******)0x0) {
    pppppppuVar30 = local_108;
    pppppppuVar35 = local_100;
  }
LAB_0010fabc:
                    /* try { // try from 0010fac2 to 0010fd51 has its CatchHandler @ 0010fdeb */
  puStack_170 = (undefined1 *)0x10fac7;
  pppppppuVar14 =
       (ulong *******)
       _Spec<char>::_M_get_width<std::basic_format_context<std::__format::_Sink_iter<char>,char>>
                 ((_Spec<char> *)this,param_2);
  if (pppppppuVar35 < pppppppuVar14) {
    uVar33 = *(undefined4 *)(this + 8);
    _Var2 = *this;
    lVar15 = (long)pppppppuVar14 - (long)pppppppuVar35;
    p_Var3 = *(__format **)(param_2 + 0x10);
    bVar18 = (byte)_Var2 & 3;
    if (((byte)_Var2 & 3) == 0) {
      if (((byte)_Var2 & 0x40) == 0) {
        bVar18 = 2;
        uVar33 = 0x20;
      }
      else if (1.79769313486232e+308 < ABS(local_160)) {
        bVar18 = 2;
        uVar33 = 0x20;
      }
      else {
        bVar18 = 2;
        uVar33 = 0x30;
        if (0xf < (byte)__detail::__from_chars_alnum_to_val_table<false>::value[*(byte *)local_148])
        {
          bVar18 = *(byte *)pppppppuVar30;
          pbVar21 = *(byte **)(p_Var3 + 0x18);
          *(byte **)(p_Var3 + 0x18) = pbVar21 + 1;
          *pbVar21 = bVar18;
          if (*(long *)(p_Var3 + 0x18) - *(long *)(p_Var3 + 8) == *(long *)(p_Var3 + 0x10)) {
            puStack_170 = (undefined1 *)0x10fd34;
            (*(code *)**(undefined8 **)p_Var3)(p_Var3);
          }
          pppppppuVar30 = (ulong *******)((long)pppppppuVar30 + 1);
          pppppppuVar35 = (ulong *******)((long)pppppppuVar35 + -1);
          bVar18 = 2;
          uVar33 = 0x30;
        }
      }
    }
    puStack_170 = (undefined1 *)0x10fd52;
    uVar16 = __write_padded<std::__format::_Sink_iter<char>,char>
                       (p_Var3,pppppppuVar35,pppppppuVar30,bVar18,lVar15,uVar33);
  }
  else {
    puStack_170 = (undefined1 *)0x10fd26;
    uVar16 = __write<std::__format::_Sink_iter<char>,char>
                       (*(__format **)(param_2 + 0x10),pppppppuVar35,pppppppuVar30);
  }
  if (local_108 != (ulong *******)&local_f8) {
    puStack_170 = (undefined1 *)0x10fd81;
    operator_delete(local_108,(long)local_f8 + 1);
  }
  if (local_68 != (ulong *******)&local_58) {
    puStack_170 = (undefined1 *)0x10fda7;
    operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
  }
  return uVar16;
}

