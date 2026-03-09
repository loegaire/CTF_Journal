
/* main::{lambda(net_pc*, packet*)#8}::TEMPNAMEPLACEHOLDERVALUE(net_pc*, packet*) const */

void __thiscall
main::{lambda(net_pc*,packet*)#8}::operator()
          (_lambda_net_pc__packet___8_ *this,net_pc *param_1,packet *param_2)

{
  undefined4 uVar1;
  uchar *puVar2;
  ulong *puVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  byte bVar8;
  ulong uVar9;
  ulong *puVar10;
  uchar *puVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  ulong *local_148;
  undefined8 local_140;
  ulong local_138 [2];
  undefined1 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  ulong *local_118;
  ulong local_110;
  ulong local_108 [2];
  char local_f8 [4];
  undefined4 uStack_f4;
  undefined8 local_f0;
  ulong *local_e8;
  ulong local_e0;
  ulong local_d8 [19];
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined8 local_37;
  
  if (*(int *)(param_2 + 4) == 0x53305c08) {
    uVar1 = *(undefined4 *)(param_1 + 0x270);
    uVar15 = *(ulong *)(param_2 + 0x18);
    puVar2 = *(uchar **)(param_2 + 0x10);
    uVar5 = adler_32(puVar2,uVar15);
    uVar4 = fletcher_16(puVar2,uVar15);
    if (uVar15 == 0) {
      uVar14 = 0;
      bVar8 = 1;
    }
    else {
      uVar9 = 0;
      uVar14 = 0;
      do {
        uVar14 = uVar14 + ((int)(char)puVar2[uVar9] << ((byte)uVar9 & 0x1f));
        uVar9 = uVar9 + 1;
      } while (uVar15 != uVar9);
      if (uVar15 < 2) {
        bVar8 = 1;
      }
      else {
        puVar11 = puVar2 + (uVar15 - 1);
        uVar9 = 0;
        bVar8 = 1;
        do {
          bVar8 = bVar8 & puVar2[uVar9] == *puVar11;
          uVar9 = uVar9 + 1;
          puVar11 = puVar11 + -1;
        } while (uVar9 < uVar15 >> 1);
      }
    }
    uVar14 = (uVar5 ^ uVar4) & -(uint)bVar8 ^ uVar14;
    local_128 = 0;
    local_11c = 0x20;
    local_118 = local_108;
    local_110 = 0;
    local_108[0] = local_108[0] & 0xffffffffffffff00;
    if (param_1[0x10] == (net_pc)0x0) {
                    /* try { // try from 0010469f to 001046a3 has its CatchHandler @ 00104652 */
      std::__throw_bad_optional_access();
      goto LAB_001046a4;
    }
    local_124 = *(undefined4 *)(param_1 + 0xc);
    local_120 = uVar1;
    if (uVar14 < 10) {
      local_148 = local_138;
      local_140 = 0;
      local_138[0] = (ulong)local_138[0]._1_7_ << 8;
      std::__cxx11::string::reserve((string *)&local_148,1);
      uVar15 = 1;
LAB_00104426:
      cVar12 = (char)uVar14 + '0';
      puVar10 = local_148;
    }
    else {
      uVar16 = 1;
      uVar5 = uVar14;
      do {
        if (uVar5 < 100) {
          uVar16 = uVar16 + 1;
          break;
        }
        if (uVar5 < 1000) {
          uVar16 = uVar16 + 2;
          break;
        }
        if (uVar5 < 10000) {
          uVar16 = uVar16 + 3;
          break;
        }
        uVar5 = uVar5 / 10000;
        uVar16 = uVar16 + 4;
      } while (9 < uVar5);
      local_148 = local_138;
      local_140 = 0;
      local_138[0] = (ulong)local_138[0]._1_7_ << 8;
      uVar15 = (ulong)uVar16;
      std::__cxx11::string::reserve((string *)&local_148,uVar15);
      puVar10 = local_148;
      _local_f8 = 0x3330323031303030;
      local_f0 = 0x3730363035303430;
      local_e8 = (ulong *)0x3131303139303830;
      local_e0 = 0x3531343133313231;
      local_d8[0] = 0x3931383137313631;
      local_d8[1] = 0x3332323231323032;
      local_d8[2] = 0x3732363235323432;
      local_d8[3] = 0x3133303339323832;
      local_d8[4] = 0x3533343333333233;
      local_d8[5] = 0x3933383337333633;
      local_d8[6] = 0x3334323431343034;
      local_d8[7] = 0x3734363435343434;
      local_d8[8] = 0x3135303539343834;
      local_d8[9] = 0x3535343533353235;
      local_d8[10] = 0x3935383537353635;
      local_d8[0xb] = 0x3336323631363036;
      local_d8[0xc] = 0x3736363635363436;
      local_d8[0xd] = 0x3137303739363836;
      local_d8[0xe] = 0x3537343733373237;
      local_d8[0xf] = 0x3937383737373637;
      local_d8[0x10] = 0x3338323831383038;
      local_d8[0x11] = 0x3738363835383438;
      local_d8[0x12] = 0x3139303939383838;
      local_40 = 0x39;
      uStack_3f = 0x35393439333932;
      uStack_38 = 0x39;
      local_37 = 0x39393839373936;
      uVar16 = uVar16 - 1;
      if (99 < uVar14) {
        do {
          uVar13 = uVar14;
          uVar14 = uVar13 / 100;
          uVar5 = (uVar13 % 100) * 2;
          *(char *)((long)local_148 + (ulong)uVar16) = local_f8[uVar5 + 1];
          *(char *)((long)local_148 + (ulong)(uVar16 - 1)) = local_f8[uVar5];
          uVar16 = uVar16 - 2;
        } while (9999 < uVar13);
        if (uVar13 < 1000) goto LAB_00104426;
      }
      *(char *)((long)local_148 + 1) = local_f8[uVar14 * 2 + 1];
      cVar12 = local_f8[uVar14 * 2];
    }
    uVar9 = local_108[0];
    puVar3 = local_118;
    *(char *)puVar10 = cVar12;
    local_140 = uVar15;
    *(char *)((long)local_148 + uVar15) = '\0';
    if (local_118 == local_108) {
      if (local_148 == local_138) goto LAB_0010472a;
LAB_00104566:
      local_108[0] = local_138[0];
      local_118 = local_148;
      local_148 = local_138;
    }
    else if (local_148 == local_138) {
LAB_0010472a:
      if (uVar15 != 0) {
        if (uVar15 == 1) {
          *(char *)local_118 = (char)local_138[0];
        }
        else {
          uVar5 = (uint)uVar15;
          if (uVar5 < 8) {
            if ((uVar15 & 4) == 0) {
              if ((uVar5 != 0) && (*(char *)local_118 = (char)local_138[0], (uVar15 & 2) != 0)) {
                *(undefined2 *)((long)local_118 + (uVar15 - 2)) =
                     *(undefined2 *)((long)local_138 + (uVar15 - 2));
              }
            }
            else {
              *(undefined4 *)local_118 = (undefined4)local_138[0];
              *(undefined4 *)((long)local_118 + (uVar15 - 4)) =
                   *(undefined4 *)((long)local_138 + (uVar15 - 4));
            }
          }
          else {
            *local_118 = local_138[0];
            *(undefined8 *)((long)local_118 + (uVar15 - 8)) =
                 *(undefined8 *)((long)local_138 + (uVar15 - 8));
            lVar7 = (long)local_118 - ((ulong)(local_118 + 1) & 0xfffffffffffffff8);
            uVar5 = (int)lVar7 + uVar5 & 0xfffffff8;
            if (7 < uVar5) {
              uVar14 = 0;
              do {
                *(undefined8 *)(((ulong)(local_118 + 1) & 0xfffffffffffffff8) + (ulong)uVar14) =
                     *(undefined8 *)((long)local_138 + ((ulong)uVar14 - lVar7));
                uVar14 = uVar14 + 8;
              } while (uVar14 < uVar5);
            }
          }
        }
      }
      *(char *)((long)local_118 + uVar15) = '\0';
    }
    else {
      local_118 = local_148;
      local_108[0] = local_138[0];
      if (puVar3 == (ulong *)0x0) goto LAB_00104566;
      local_148 = puVar3;
      local_138[0] = uVar9;
    }
    local_140 = 0;
    *(char *)local_148 = '\0';
    local_110 = uVar15;
    if (local_148 != local_138) {
      operator_delete(local_148,local_138[0] + 1);
    }
    uVar15 = local_110;
    puVar10 = local_118;
    _local_f8 = CONCAT71(stack0xffffffffffffff09,local_128);
    _local_f8 = CONCAT44(local_124,local_f8);
    local_f0._0_5_ = CONCAT14(local_11c,local_120);
    local_e8 = local_d8;
    if (local_110 < 0x10) {
      if (local_110 == 1) {
        local_d8[0] = CONCAT71(local_d8[0]._1_7_,(char)*local_118);
      }
      else if (local_110 != 0) goto LAB_0010466c;
    }
    else {
      if ((long)local_110 < 0) {
        uVar6 = std::__throw_length_error("basic_string::_M_create");
        std::__cxx11::string::_M_dispose((string *)&local_118);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar6);
                    /* catch() { ... } // from try @ 0010463f with catch @ 00104652
                       catch() { ... } // from try @ 0010469f with catch @ 00104652 */
      }
      if ((long)(local_110 + 1) < 0) {
        local_e8 = (ulong *)std::__throw_bad_alloc();
      }
      else {
                    /* try { // try from 0010463f to 0010465e has its CatchHandler @ 00104652 */
        local_e8 = operator_new(local_110 + 1);
      }
      local_d8[0] = uVar15;
LAB_0010466c:
      memcpy(local_e8,puVar10,uVar15);
    }
    local_e0 = uVar15;
    *(undefined1 *)((long)local_e8 + uVar15) = 0;
                    /* try { // try from 00104698 to 0010469c has its CatchHandler @ 00104706 */
    net_pc::send_packet(param_1,local_f8);
LAB_001046a4:
    if (local_e8 != local_d8) {
      operator_delete(local_e8,local_d8[0] + 1);
    }
    if (local_118 == local_108) {
      return;
    }
    operator_delete(local_118,local_108[0] + 1);
    return;
  }
  *(int *)(param_1 + 0x270) = *(int *)(param_2 + 4);
  local_128 = 0;
  local_11c = 0x20;
  local_118 = local_108;
  local_110 = 0;
  local_108[0] = local_108[0] & 0xffffffffffffff00;
  if (param_1[0x10] == (net_pc)0x0) {
    uVar6 = std::__throw_bad_optional_access();
    std::__cxx11::string::_M_dispose((string *)&local_118);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar6);
                    /* catch() { ... } // from try @ 00103f8a with catch @ 00103f96 */
  }
  local_124 = *(undefined4 *)(param_1 + 0xc);
  local_120 = 0x53305c08;
                    /* try { // try from 00103f8a to 00104011 has its CatchHandler @ 00103f96 */
  std::__cxx11::string::_M_assign((string *)&local_118,(string *)(param_2 + 0x10));
  uVar15 = local_110;
  puVar10 = local_118;
  _local_f8 = CONCAT71(stack0xffffffffffffff09,local_128);
  _local_f8 = CONCAT44(local_124,local_f8);
  local_f0._0_5_ = CONCAT14(local_11c,local_120);
  local_e8 = local_d8;
  if (local_110 < 0x10) {
    if (local_110 == 1) {
      local_d8[0] = CONCAT71(local_d8[0]._1_7_,(char)*local_118);
      goto LAB_00104035;
    }
    if (local_110 == 0) goto LAB_00104035;
  }
  else {
    if ((long)local_110 < 0) {
      std::__throw_length_error("basic_string::_M_create");
LAB_0010400d:
      local_e8 = (ulong *)std::__throw_bad_alloc();
    }
    else {
      if ((long)(local_110 + 1) < 0) goto LAB_0010400d;
      local_e8 = operator_new(local_110 + 1);
    }
    local_d8[0] = uVar15;
  }
  memcpy(local_e8,puVar10,uVar15);
LAB_00104035:
  local_e0 = uVar15;
  *(undefined1 *)((long)local_e8 + uVar15) = 0;
                    /* try { // try from 0010404b to 0010404f has its CatchHandler @ 001046e7 */
  net_pc::send_packet(param_1,local_f8);
  if (local_e8 != local_d8) {
    operator_delete(local_e8,local_d8[0] + 1);
  }
  if (local_118 != local_108) {
    operator_delete(local_118,local_108[0] + 1);
  }
  return;
}

