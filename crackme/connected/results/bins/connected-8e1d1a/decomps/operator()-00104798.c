
/* main::{lambda(net_pc*, packet*)#7}::TEMPNAMEPLACEHOLDERVALUE(net_pc*, packet*) const */

void __thiscall
main::{lambda(net_pc*,packet*)#7}::operator()
          (_lambda_net_pc__packet___7_ *this,net_pc *param_1,packet *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  long lVar4;
  char *pcVar5;
  char cVar6;
  packet **pppVar7;
  undefined8 uVar8;
  ulong uVar9;
  packet *ppVar10;
  undefined1 *__src;
  ulong uVar11;
  packet **unaff_R12;
  ulong uVar12;
  packet *ppVar13;
  uint uVar14;
  char *local_148;
  ulong local_140;
  char local_138;
  undefined7 uStack_137;
  undefined1 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  packet **local_118;
  packet *local_110;
  packet *local_108 [2];
  char local_f8 [4];
  undefined4 uStack_f4;
  undefined8 local_f0;
  packet **local_e8;
  packet *local_e0;
  packet *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined8 local_37;
  
  if (*(int *)(param_2 + 4) == 0x53305c08) {
    uVar1 = *(undefined4 *)(param_1 + 0x270);
    uVar11 = *(ulong *)(param_2 + 0x18);
    if (uVar11 < 10) {
      uVar14 = 1;
    }
    else {
      uVar14 = 1;
      uVar9 = uVar11;
      do {
        if (uVar9 < 100) {
          uVar14 = uVar14 + 1;
          break;
        }
        if (uVar9 < 1000) {
          uVar14 = uVar14 + 2;
          break;
        }
        if (uVar9 < 10000) {
          uVar14 = uVar14 + 3;
          break;
        }
        uVar14 = uVar14 + 4;
        bVar2 = 99999 < uVar9;
        uVar9 = uVar9 / 10000;
      } while (bVar2);
    }
    local_148 = &local_138;
    local_140 = 0;
    local_138 = '\0';
    uVar12 = (ulong)uVar14;
                    /* try { // try from 00104a43 to 00104a47 has its CatchHandler @ 00104cfc */
    std::__cxx11::string::reserve((string *)&local_148,uVar12);
    pcVar5 = local_148;
    _local_f8 = 0x3330323031303030;
    local_f0 = 0x3730363035303430;
    local_e8 = (packet **)0x3131303139303830;
    local_e0 = (packet *)0x3531343133313231;
    local_d8 = (packet *)0x3931383137313631;
    local_d0 = 0x3332323231323032;
    local_c8 = 0x3732363235323432;
    local_c0 = 0x3133303339323832;
    local_b8 = 0x3533343333333233;
    local_b0 = 0x3933383337333633;
    local_a8 = 0x3334323431343034;
    local_a0 = 0x3734363435343434;
    local_98 = 0x3135303539343834;
    local_90 = 0x3535343533353235;
    local_88 = 0x3935383537353635;
    local_80 = 0x3336323631363036;
    local_78 = 0x3736363635363436;
    local_70 = 0x3137303739363836;
    local_68 = 0x3537343733373237;
    local_60 = 0x3937383737373637;
    local_58 = 0x3338323831383038;
    local_50 = 0x3738363835383438;
    local_48 = 0x3139303939383838;
    local_40 = 0x39;
    uStack_3f = 0x35393439333932;
    uStack_38 = 0x39;
    local_37 = 0x39393839373936;
    uVar14 = uVar14 - 1;
    uVar9 = uVar11;
    if (99 < uVar11) {
      do {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar9 >> 2;
        uVar11 = (uVar9 >> 2) / 0x19;
        lVar4 = (uVar9 + ((SUB168(auVar3 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffffffffffffffc) +
                         uVar11) * -0x14) * 2;
        local_148[uVar14] = local_f8[lVar4 + 1];
        local_148[uVar14 - 1] = local_f8[lVar4];
        uVar14 = uVar14 - 2;
        bVar2 = 9999 < uVar9;
        uVar9 = uVar11;
      } while (bVar2);
    }
    cVar6 = (char)uVar11 + '0';
    if (9 < uVar11) {
      local_148[1] = local_f8[uVar11 * 2 + 1];
      cVar6 = local_f8[uVar11 * 2];
    }
    *pcVar5 = cVar6;
    local_148[uVar12] = '\0';
    local_128 = 0;
    local_11c = 0x20;
    local_118 = local_108;
    local_110 = (packet *)0x0;
    local_108[0] = (packet *)((ulong)local_108[0] & 0xffffffffffffff00);
    local_140 = uVar12;
    if (param_1[0x10] == (net_pc)0x0) {
                    /* try { // try from 00104d0f to 00104d8f has its CatchHandler @ 00104d14 */
      uVar8 = std::__throw_bad_optional_access();
      std::__cxx11::string::_M_dispose((string *)&local_118);
      std::__cxx11::string::_M_dispose((string *)&local_148);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar8);
                    /* catch() { ... } // from try @ 00104cf5 with catch @ 00104d14
                       catch() { ... } // from try @ 00104d0f with catch @ 00104d14 */
    }
    local_124 = *(undefined4 *)(param_1 + 0xc);
    local_120 = uVar1;
                    /* try { // try from 00104cf5 to 00104cf9 has its CatchHandler @ 00104d14 */
    std::__cxx11::string::_M_assign((string *)&local_118,(string *)&local_148);
    ppVar10 = local_110;
    pppVar7 = local_118;
    _local_f8 = CONCAT71(stack0xffffffffffffff09,local_128);
    _local_f8 = CONCAT44(local_124,local_f8);
    local_f0._0_5_ = CONCAT14(local_11c,local_120);
    local_e8 = &local_d8;
    if (local_110 < (packet *)0x10) {
      if (local_110 == (packet *)0x1) {
        local_d8 = (packet *)CONCAT71(local_d8._1_7_,*(undefined1 *)local_118);
        goto LAB_00104db3;
      }
      if (local_110 == (packet *)0x0) goto LAB_00104db3;
    }
    else {
      if ((long)local_110 < 0) {
        std::__throw_length_error("basic_string::_M_create");
LAB_00104d8b:
        local_e8 = (packet **)std::__throw_bad_alloc();
      }
      else {
        if ((long)(local_110 + 1) < 0) goto LAB_00104d8b;
        local_e8 = operator_new((ulong)(local_110 + 1));
      }
      local_d8 = ppVar10;
    }
    memcpy(local_e8,pppVar7,(size_t)ppVar10);
LAB_00104db3:
    local_e0 = ppVar10;
    *(packet *)((long)local_e8 + (long)ppVar10) = (packet)0x0;
                    /* try { // try from 00104dc9 to 00104dcd has its CatchHandler @ 00104e4c */
    net_pc::send_packet(param_1,local_f8);
    if (local_e8 != &local_d8) {
      operator_delete(local_e8,(ulong)(local_d8 + 1));
    }
    if (local_118 != local_108) {
      operator_delete(local_118,(ulong)(local_108[0] + 1));
    }
    if (local_148 == &local_138) {
      return;
    }
    operator_delete(local_148,CONCAT71(uStack_137,local_138) + 1);
    return;
  }
  *(int *)(param_1 + 0x270) = *(int *)(param_2 + 4);
  local_128 = 0;
  local_11c = 0x20;
  local_118 = local_108;
  local_110 = (packet *)0x0;
  local_108[0] = (packet *)((ulong)local_108[0] & 0xffffffffffffff00);
  if (param_1[0x10] == (net_pc)0x0) {
    std::__throw_bad_optional_access();
LAB_00104913:
    ppVar10 = param_2;
    local_d8 = param_2;
    if ((long)param_2 < 0) {
      std::__throw_length_error("basic_string::_M_create");
    }
    else if (-1 < (long)(param_2 + 1)) {
      local_e8 = operator_new((ulong)(param_2 + 1));
      goto LAB_00104946;
    }
    local_e8 = (packet **)std::__throw_bad_alloc();
  }
  else {
    local_124 = *(undefined4 *)(param_1 + 0xc);
    local_120 = 0x53305c08;
    ppVar10 = *(packet **)(param_2 + 0x18);
    if (ppVar10 < (packet *)0x10) {
      if (ppVar10 != (packet *)0x0) {
        __src = *(undefined1 **)(param_2 + 0x10);
        if (ppVar10 != (packet *)0x1) goto LAB_001048e4;
                    /* WARNING: Ignoring partial resolution of indirect */
        local_108[0]._0_1_ = *__src;
      }
    }
    else {
      if ((long)ppVar10 < 0) {
        uVar8 = std::__throw_length_error("basic_string::_M_create");
        std::__cxx11::string::_M_dispose((string *)&local_118);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar8);
                    /* catch() { ... } // from try @ 00104896 with catch @ 001048a9 */
      }
      ppVar13 = (packet *)0x1e;
      if ((packet *)0x1d < ppVar10) {
        ppVar13 = ppVar10;
      }
      if ((long)(ppVar13 + 1) < 0) {
        pppVar7 = (packet **)std::__throw_bad_alloc();
      }
      else {
                    /* try { // try from 00104896 to 00104938 has its CatchHandler @ 001048a9 */
        pppVar7 = operator_new((ulong)(ppVar13 + 1));
      }
      if (local_118 != local_108) {
        operator_delete(local_118,(ulong)(local_108[0] + 1));
      }
      __src = *(undefined1 **)(param_2 + 0x10);
      local_118 = pppVar7;
      local_108[0] = ppVar13;
LAB_001048e4:
      memcpy(local_118,__src,(size_t)ppVar10);
    }
    *(packet *)((long)local_118 + (long)ppVar10) = (packet)0x0;
    _local_f8 = CONCAT71(stack0xffffffffffffff09,local_128);
    _local_f8 = CONCAT44(local_124,local_f8);
    local_f0._0_5_ = CONCAT14(local_11c,local_120);
    local_e8 = &local_d8;
    param_2 = ppVar10;
    unaff_R12 = local_118;
    local_110 = ppVar10;
    if ((packet *)0xf < ppVar10) goto LAB_00104913;
    if (ppVar10 == (packet *)0x1) {
      local_d8 = (packet *)CONCAT71(local_d8._1_7_,*(undefined1 *)local_118);
      goto LAB_0010495c;
    }
    if (ppVar10 == (packet *)0x0) goto LAB_0010495c;
  }
LAB_00104946:
  memcpy(local_e8,unaff_R12,(size_t)ppVar10);
LAB_0010495c:
  *(packet *)((long)local_e8 + (long)ppVar10) = (packet)0x0;
  local_e0 = ppVar10;
                    /* try { // try from 00104972 to 00104976 has its CatchHandler @ 00104e2d */
  net_pc::send_packet(param_1,local_f8);
  if (local_e8 != &local_d8) {
    operator_delete(local_e8,(ulong)(local_d8 + 1));
  }
  if (local_118 != local_108) {
    operator_delete(local_118,(ulong)(local_108[0] + 1));
  }
  return;
}

