
/* main::{lambda(net_pc*, packet*)#4}::TEMPNAMEPLACEHOLDERVALUE(net_pc*, packet*) const */

void __thiscall
main::{lambda(net_pc*,packet*)#4}::operator()
          (_lambda_net_pc__packet___4_ *this,net_pc *param_1,packet *param_2)

{
  char cVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  ulong *__n;
  ulong **__dest;
  undefined8 uVar8;
  size_t sVar9;
  undefined1 auVar10 [16];
  ulong local_c0;
  ulong local_b8 [4];
  undefined1 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 *local_88;
  ulong local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  ulong *local_58;
  ulong local_50;
  ulong local_48 [3];
  allocator local_2b;
  allocator local_2a;
  allocator local_29 [9];
  
  if (*(short *)(param_1 + 0x270) != -0x3502) {
    *(undefined2 *)(param_1 + 0x270) = 0xcafe;
    param_1[0x272] = (net_pc)0x0;
    *(undefined8 *)(param_1 + 0x273) = 0;
    *(undefined8 *)(param_1 + 0x27b) = 0;
    *(undefined8 *)(param_1 + 0x283) = 0;
    *(undefined8 *)(param_1 + 0x28b) = 0;
    *(undefined8 *)(param_1 + 0x293) = 0;
  }
  if (*(int *)(param_2 + 4) == 0x260fc72a) {
    param_1[0x272] = (net_pc)0x1;
    uVar2 = *(ulong *)(param_2 + 0x18);
    if (uVar2 < 4) {
LAB_00105727:
      local_68 = &local_58;
      local_68 = operator_new(0x1c);
      local_58 = (ulong *)0x1b;
      *local_68 = (ulong *)0x2074276e6f642049;
      local_68[1] = (ulong *)0x206f7420746e6177;
      *(undefined8 *)((long)local_68 + 0xb) = 0x6c6174206f742074;
      *(undefined8 *)((long)local_68 + 0x13) = 0x756f79206f74206b;
      local_60 = (ulong *)0x1b;
      *(undefined1 *)((long)local_68 + 0x1b) = 0;
                    /* try { // try from 0010579b to 0010579f has its CatchHandler @ 0010611a */
      net_pc::respond_to_packet(param_1,param_2,(string *)&local_68);
      std::__cxx11::string::_M_dispose((string *)&local_68);
      return;
    }
    puVar3 = *(undefined1 **)(param_2 + 0x10);
    iVar5 = memcmp(puVar3,&DAT_00117051,4);
    if (iVar5 != 0) goto LAB_00105727;
    sVar9 = uVar2 - 4;
    if (sVar9 != 0) {
      if (sVar9 == 1) {
        *puVar3 = puVar3[4];
      }
      else {
        memmove(puVar3,puVar3 + 4,sVar9);
      }
    }
    lVar4 = *(long *)(param_2 + 0x18);
    *(long *)(param_2 + 0x18) = lVar4 + -4;
    *(undefined1 *)(*(long *)(param_2 + 0x10) + -4 + lVar4) = 0;
    if (*(long *)(param_2 + 0x18) == 0) {
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_68,"So you had nothing to say?",&local_2b);
                    /* try { // try from 001057fa to 001057fe has its CatchHandler @ 0010612f */
      net_pc::respond_to_packet(param_1,param_2,(string *)&local_68);
      std::__cxx11::string::_M_dispose((string *)&local_68);
      return;
    }
    pcVar7 = malloc(*(long *)(param_2 + 0x18) + 1);
    *(char **)(param_1 + 0x273) = pcVar7;
    sVar9 = *(size_t *)(param_2 + 0x18);
    strncpy(pcVar7,*(char **)(param_2 + 0x10),sVar9);
    pcVar7[sVar9] = '\0';
    local_98 = 0;
    local_8c = 0x20;
    local_88 = local_78;
    local_80 = 0;
    local_78[0] = 0;
    if (param_1[0x10] == (net_pc)0x0) {
                    /* try { // try from 0010580c to 00105892 has its CatchHandler @ 00105811 */
      uVar8 = std::__throw_bad_optional_access();
      std::__cxx11::string::_M_dispose((string *)&local_88);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar8);
                    /* catch() { ... } // from try @ 0010571d with catch @ 00105811
                       catch() { ... } // from try @ 0010580c with catch @ 00105811 */
    }
    local_94 = *(undefined4 *)(param_1 + 0xc);
    local_90 = 0x53305c08;
                    /* try { // try from 0010571d to 00105721 has its CatchHandler @ 00105811 */
    std::__cxx11::string::_M_assign((string *)&local_88,(string *)(param_2 + 0x10));
    uVar2 = local_80;
    puVar3 = local_88;
    local_68 = (ulong **)CONCAT71(local_68._1_7_,local_98);
    local_68 = (ulong **)CONCAT44(local_94,(undefined4)local_68);
    local_60._0_5_ = CONCAT14(local_8c,local_90);
    local_58 = local_48;
    if (local_80 < 0x10) {
      if (local_80 == 1) {
        local_48[0] = CONCAT71(local_48[0]._1_7_,*local_88);
      }
      else if (local_80 != 0) goto LAB_001058a3;
    }
    else {
      if ((long)local_80 < 0) {
        std::__throw_length_error("basic_string::_M_create");
LAB_0010588e:
        local_58 = (ulong *)std::__throw_bad_alloc();
      }
      else {
        if ((long)(local_80 + 1) < 0) goto LAB_0010588e;
        local_58 = operator_new(local_80 + 1);
      }
      local_48[0] = uVar2;
LAB_001058a3:
      memcpy(local_58,puVar3,uVar2);
    }
    local_50 = uVar2;
    *(undefined1 *)((long)local_58 + uVar2) = 0;
                    /* try { // try from 001058d3 to 001058d7 has its CatchHandler @ 00106144 */
    net_pc::send_packet(param_1,&local_68);
    std::__cxx11::string::_M_dispose((string *)&local_58);
    std::__cxx11::string::_M_dispose((string *)&local_88);
  }
  iVar5 = *(int *)(param_2 + 4);
  if (iVar5 != 0x53305c08) {
    if (iVar5 != 0x400e0319) {
      if (iVar5 == 0x400e031d) {
        pcVar7 = malloc(*(long *)(param_2 + 0x18) + 1);
        *(char **)(param_1 + 0x283) = pcVar7;
        sVar9 = *(size_t *)(param_2 + 0x18);
        strncpy(pcVar7,*(char **)(param_2 + 0x10),sVar9);
        pcVar7[sVar9] = '\0';
        local_98 = 0;
        local_8c = 0x20;
        local_88 = local_78;
        local_80 = 0;
        local_78[0] = 0;
        if (param_1[0x10] == (net_pc)0x0) {
          uVar8 = std::__throw_bad_optional_access();
          std::__cxx11::string::_M_dispose((string *)&local_88);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume(uVar8);
                    /* catch() { ... } // from try @ 00105c1a with catch @ 00105c26
                       catch() { ... } // from try @ 00105cb5 with catch @ 00105c26 */
        }
        local_94 = *(undefined4 *)(param_1 + 0xc);
        local_90 = 0x64191a0f;
                    /* try { // try from 00105c1a to 00105c25 has its CatchHandler @ 00105c26 */
        std::__cxx11::string::assign((string *)&local_88,*(char **)(param_1 + 0x293));
        uVar2 = local_80;
        puVar3 = local_88;
        local_68 = (ulong **)CONCAT71(local_68._1_7_,local_98);
        local_68 = (ulong **)CONCAT44(local_94,(undefined4)local_68);
        local_60._0_5_ = CONCAT14(local_8c,local_90);
        local_58 = local_48;
        local_b8[0] = local_80;
        if (local_80 < 0x10) {
          if (local_80 == 1) {
            local_48[0] = CONCAT71(local_48[0]._1_7_,*local_88);
            goto LAB_00105c84;
          }
          if (local_80 == 0) goto LAB_00105c84;
        }
        else {
                    /* try { // try from 00105cb5 to 00105cb9 has its CatchHandler @ 00105c26 */
          local_58 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)local_b8);
          local_48[0] = local_b8[0];
        }
        memcpy(local_58,puVar3,uVar2);
LAB_00105c84:
        local_50 = local_b8[0];
        *(undefined1 *)((long)local_58 + local_b8[0]) = 0;
                    /* try { // try from 00105c9f to 00105ca3 has its CatchHandler @ 001061a1 */
        net_pc::send_packet(param_1,&local_68);
        std::__cxx11::string::_M_dispose((string *)&local_58);
        std::__cxx11::string::_M_dispose((string *)&local_88);
        return;
      }
      if (iVar5 != 0x64191a0f) {
        return;
      }
      pcVar7 = malloc(*(long *)(param_2 + 0x18) + 1);
      *(char **)(param_1 + 0x28b) = pcVar7;
      sVar9 = *(size_t *)(param_2 + 0x18);
      strncpy(pcVar7,*(char **)(param_2 + 0x10),sVar9);
      pcVar7[sVar9] = '\0';
      pcVar7 = *(char **)(param_1 + 0x27b);
      local_68 = &local_58;
      if (pcVar7 == (char *)0x0) {
                    /* try { // try from 00105d73 to 00105d8b has its CatchHandler @ 00105d78 */
        auVar10 = std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* catch() { ... } // from try @ 00105d73 with catch @ 00105d78
                       catch() { ... } // from try @ 00105e02 with catch @ 00105d78 */
        if (auVar10._8_8_ != 1) {
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
        __cxa_begin_catch(auVar10._0_8_);
        local_98 = 0;
        local_8c = 0x20;
        local_88 = local_78;
        local_80 = 0;
        local_78[0] = 0;
        if (param_1[0x10] != (net_pc)0x0) {
          local_94 = *(undefined4 *)(param_1 + 0xc);
          local_90 = 0x260fc72a;
                    /* try { // try from 00106241 to 00106282 has its CatchHandler @ 0010624d */
          std::__cxx11::string::assign
                    ((string *)&local_88,"You ain\'t gonna crash my computer with that");
          local_68 = (ulong **)CONCAT71(local_68._1_7_,local_98);
          local_68 = (ulong **)CONCAT44(local_94,(undefined4)local_68);
          local_60._0_5_ = CONCAT14(local_8c,local_90);
          std::__cxx11::string::string((string *)&local_58,(string *)&local_88);
                    /* try { // try from 0010628b to 0010628f has its CatchHandler @ 001062ae */
          net_pc::send_packet(param_1,&local_68);
          std::__cxx11::string::_M_dispose((string *)&local_58);
          std::__cxx11::string::_M_dispose((string *)&local_88);
          __cxa_end_catch();
          return;
        }
        uVar8 = std::__throw_bad_optional_access();
        std::__cxx11::string::_M_dispose((string *)&local_88);
        __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar8);
                    /* catch() { ... } // from try @ 00106241 with catch @ 0010624d */
      }
      __n = (ulong *)strlen(pcVar7);
      if (__n < (ulong *)0x10) {
        if (__n == (ulong *)0x1) {
          local_58 = (ulong *)CONCAT71(local_58._1_7_,*pcVar7);
        }
        else if (__n != (ulong *)0x0) {
          __dest = &local_58;
          goto LAB_00105d99;
        }
      }
      else {
        __dest = operator_new((long)__n + 1);
        local_68 = __dest;
        local_58 = __n;
LAB_00105d99:
        memcpy(__dest,pcVar7,(size_t)__n);
      }
      *(undefined1 *)((long)local_68 + (long)__n) = 0;
      local_60 = __n;
                    /* try { // try from 00105ddb to 00105ddf has its CatchHandler @ 001061c0 */
      iVar5 = __gnu_cxx::__stoa<long,int,char,int>
                        (__isoc23_strtol,"stoi",(char *)local_68,(ulong *)0x0,10);
      std::__cxx11::string::_M_dispose((string *)&local_68);
                    /* try { // try from 00105e02 to 00105e06 has its CatchHandler @ 00105d78 */
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_68,*(char **)(param_1 + 0x283),&local_2a);
                    /* try { // try from 00105e25 to 00105e29 has its CatchHandler @ 001061e1 */
      iVar6 = __gnu_cxx::__stoa<long,int,char,int>
                        (__isoc23_strtol,"stoi",(char *)local_68,(ulong *)0x0,10);
      std::__cxx11::string::_M_dispose((string *)&local_68);
      cVar1 = **(char **)(param_1 + 0x28b);
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)local_b8,*(char **)(param_1 + 0x273),local_29);
      free(*(void **)(param_1 + 0x273));
      free(*(void **)(param_1 + 0x27b));
      free(*(void **)(param_1 + 0x283));
      free(*(void **)(param_1 + 0x28b));
      free(*(void **)(param_1 + 0x293));
      if ((iVar5 == 8 && cVar1 == '1') && (iVar6 == 0x6022e46)) {
        local_98 = 0;
        local_8c = 0x20;
        local_88 = local_78;
        local_80 = 0;
        local_78[0] = 0;
        if (param_1[0x10] == (net_pc)0x0) {
          uVar8 = std::__throw_bad_optional_access();
          std::__cxx11::string::_M_dispose((string *)&local_88);
                    /* catch() { ... } // from try @ 00105f42 with catch @ 00105f4e
                       catch() { ... } // from try @ 00105fdd with catch @ 00105f4e */
LAB_001062e9:
          std::__cxx11::string::_M_dispose((string *)local_b8);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume(uVar8);
        }
        local_94 = *(undefined4 *)(param_1 + 0xc);
        local_90 = 0x260fc729;
                    /* try { // try from 00105f42 to 00105f4d has its CatchHandler @ 00105f4e */
        std::__cxx11::string::_M_assign((string *)&local_88,(string *)local_b8);
        uVar2 = local_80;
        puVar3 = local_88;
        local_68 = (ulong **)CONCAT71(local_68._1_7_,local_98);
        local_68 = (ulong **)CONCAT44(local_94,(undefined4)local_68);
        local_60._0_5_ = CONCAT14(local_8c,local_90);
        local_58 = local_48;
        local_c0 = local_80;
        if (local_80 < 0x10) {
          if (local_80 == 1) {
            local_48[0] = CONCAT71(local_48[0]._1_7_,*local_88);
          }
          else if (local_80 != 0) goto LAB_00105ff7;
        }
        else {
                    /* try { // try from 00105fdd to 00105fe1 has its CatchHandler @ 00105f4e */
          local_58 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_c0);
          local_48[0] = local_c0;
LAB_00105ff7:
          memcpy(local_58,puVar3,uVar2);
        }
        local_50 = local_c0;
        *(undefined1 *)((long)local_58 + local_c0) = 0;
                    /* try { // try from 00105fc7 to 00105fcb has its CatchHandler @ 001062d2 */
        net_pc::send_packet(param_1,&local_68);
        std::__cxx11::string::_M_dispose((string *)&local_58);
        std::__cxx11::string::_M_dispose((string *)&local_88);
        goto LAB_0010610b;
      }
      local_98 = 0;
      local_8c = 0x20;
      local_88 = local_78;
      local_80 = 0;
      local_78[0] = 0;
      if (param_1[0x10] == (net_pc)0x0) {
                    /* try { // try from 0010602c to 001060b2 has its CatchHandler @ 00106031 */
        uVar8 = std::__throw_bad_optional_access();
        std::__cxx11::string::_M_dispose((string *)&local_88);
                    /* catch() { ... } // from try @ 00105ef7 with catch @ 00106031
                       catch() { ... } // from try @ 0010602c with catch @ 00106031 */
        goto LAB_001062e9;
      }
      local_94 = *(undefined4 *)(param_1 + 0xc);
      local_90 = 0x260fc72a;
                    /* try { // try from 00105ef7 to 00105efb has its CatchHandler @ 00106031 */
      std::__cxx11::string::assign((string *)&local_88,"I don\'t want to talk to you");
      uVar2 = local_80;
      puVar3 = local_88;
      local_68 = (ulong **)CONCAT71(local_68._1_7_,local_98);
      local_68 = (ulong **)CONCAT44(local_94,(undefined4)local_68);
      local_60._0_5_ = CONCAT14(local_8c,local_90);
      local_58 = local_48;
      if (local_80 < 0x10) {
        if (local_80 == 1) {
          local_48[0] = CONCAT71(local_48[0]._1_7_,*local_88);
        }
        else if (local_80 != 0) goto LAB_001060c3;
      }
      else {
        if ((long)local_80 < 0) {
          std::__throw_length_error("basic_string::_M_create");
LAB_001060ae:
          local_58 = (ulong *)std::__throw_bad_alloc();
        }
        else {
          if ((long)(local_80 + 1) < 0) goto LAB_001060ae;
          local_58 = operator_new(local_80 + 1);
        }
        local_48[0] = uVar2;
LAB_001060c3:
        memcpy(local_58,puVar3,uVar2);
      }
      local_50 = uVar2;
      *(undefined1 *)((long)local_58 + uVar2) = 0;
                    /* try { // try from 001060f2 to 001060f6 has its CatchHandler @ 001062fb */
      net_pc::send_packet(param_1,&local_68);
      std::__cxx11::string::_M_dispose((string *)&local_58);
      std::__cxx11::string::_M_dispose((string *)&local_88);
LAB_0010610b:
      std::__cxx11::string::_M_dispose((string *)local_b8);
      return;
    }
    pcVar7 = malloc(*(long *)(param_2 + 0x18) + 1);
    *(char **)(param_1 + 0x27b) = pcVar7;
    sVar9 = *(size_t *)(param_2 + 0x18);
    strncpy(pcVar7,*(char **)(param_2 + 0x10),sVar9);
    pcVar7[sVar9] = '\0';
    local_98 = 0;
    local_8c = 0x20;
    local_88 = local_78;
    local_80 = 0;
    local_78[0] = 0;
    if (param_1[0x10] == (net_pc)0x0) {
      uVar8 = std::__throw_bad_optional_access();
      std::__cxx11::string::_M_dispose((string *)&local_88);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar8);
                    /* catch() { ... } // from try @ 00105abd with catch @ 00105ac9 */
    }
    local_94 = *(undefined4 *)(param_1 + 0xc);
    local_90 = 0x400e031d;
                    /* try { // try from 00105abd to 00105b4a has its CatchHandler @ 00105ac9 */
    std::__cxx11::string::assign((string *)&local_88,*(char **)(param_1 + 0x293));
    uVar2 = local_80;
    puVar3 = local_88;
    local_68 = (ulong **)CONCAT71(local_68._1_7_,local_98);
    local_68 = (ulong **)CONCAT44(local_94,(undefined4)local_68);
    local_60._0_5_ = CONCAT14(local_8c,local_90);
    local_58 = local_48;
    if (local_80 < 0x10) {
      if (local_80 == 1) {
        local_48[0] = CONCAT71(local_48[0]._1_7_,*local_88);
        goto LAB_00105b74;
      }
      if (local_80 == 0) goto LAB_00105b74;
    }
    else {
      if ((long)local_80 < 0) {
        std::__throw_length_error("basic_string::_M_create");
LAB_00105b46:
        local_58 = (ulong *)std::__throw_bad_alloc();
      }
      else {
        if ((long)(local_80 + 1) < 0) goto LAB_00105b46;
        local_58 = operator_new(local_80 + 1);
      }
      local_48[0] = uVar2;
    }
    memcpy(local_58,puVar3,uVar2);
LAB_00105b74:
    local_50 = uVar2;
    *(undefined1 *)((long)local_58 + uVar2) = 0;
                    /* try { // try from 00105b8a to 00105b8e has its CatchHandler @ 00106182 */
    net_pc::send_packet(param_1,&local_68);
    std::__cxx11::string::_M_dispose((string *)&local_58);
    std::__cxx11::string::_M_dispose((string *)&local_88);
    return;
  }
  pcVar7 = malloc(*(long *)(param_2 + 0x18) + 1);
  *(char **)(param_1 + 0x293) = pcVar7;
  sVar9 = *(size_t *)(param_2 + 0x18);
  strncpy(pcVar7,*(char **)(param_2 + 0x10),sVar9);
  pcVar7[sVar9] = '\0';
  local_98 = 0;
  local_8c = 0x20;
  local_88 = local_78;
  local_80 = 0;
  local_78[0] = 0;
  if (param_1[0x10] == (net_pc)0x0) {
    uVar8 = std::__throw_bad_optional_access();
    std::__cxx11::string::_M_dispose((string *)&local_88);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar8);
                    /* catch() { ... } // from try @ 00105960 with catch @ 0010596c */
  }
  local_94 = *(undefined4 *)(param_1 + 0xc);
  local_90 = 0x400e0319;
                    /* try { // try from 00105960 to 001059ed has its CatchHandler @ 0010596c */
  std::__cxx11::string::assign((string *)&local_88,pcVar7);
  uVar2 = local_80;
  puVar3 = local_88;
  local_68 = (ulong **)CONCAT71(local_68._1_7_,local_98);
  local_68 = (ulong **)CONCAT44(local_94,(undefined4)local_68);
  local_60._0_5_ = CONCAT14(local_8c,local_90);
  local_58 = local_48;
  if (local_80 < 0x10) {
    if (local_80 == 1) {
      local_48[0] = CONCAT71(local_48[0]._1_7_,*local_88);
      goto LAB_00105a17;
    }
    if (local_80 == 0) goto LAB_00105a17;
  }
  else {
    if ((long)local_80 < 0) {
      std::__throw_length_error("basic_string::_M_create");
LAB_001059e9:
      local_58 = (ulong *)std::__throw_bad_alloc();
    }
    else {
      if ((long)(local_80 + 1) < 0) goto LAB_001059e9;
      local_58 = operator_new(local_80 + 1);
    }
    local_48[0] = uVar2;
  }
  memcpy(local_58,puVar3,uVar2);
LAB_00105a17:
  local_50 = uVar2;
  *(undefined1 *)((long)local_58 + uVar2) = 0;
                    /* try { // try from 00105a2d to 00105a31 has its CatchHandler @ 00106163 */
  net_pc::send_packet(param_1,&local_68);
  std::__cxx11::string::_M_dispose((string *)&local_58);
  std::__cxx11::string::_M_dispose((string *)&local_88);
  return;
}

