
/* _FUN(net_pc*, packet*) */

void main::{lambda(net_pc*,packet*)#2}::_FUN(net_pc *param_1,packet *param_2)

{
  undefined1 uVar1;
  undefined8 ******__n;
  undefined8 *******__dest;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *******pppppppuVar6;
  long *local_d8;
  ulong local_d0;
  long local_c8 [2];
  undefined8 ******local_b8;
  undefined8 ******local_b0;
  undefined8 ******local_a8 [2];
  undefined1 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 ******local_88;
  undefined8 ******local_80;
  undefined8 ******local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 ******local_58;
  undefined8 ******local_50;
  undefined8 ******local_48 [3];
  
  if (*(int *)(param_2 + 4) == 0x260fc72a) {
    local_68 = &local_58;
    local_68 = operator_new(0x39);
    local_58 = (undefined8 ******)0x38;
    *local_68 = (undefined8 ******)0x6c706d6f6320794d;
    local_68[1] = (undefined8 ******)0x6620646574616369;
    local_68[2] = (undefined8 ******)0x206c6c6177657269;
    local_68[3] = (undefined8 ******)0x6f742073656c7572;
    local_68[4] = (undefined8 ******)0x6f7420656d20646c;
    local_68[5] = (undefined8 ******)0x6c617420746f6e20;
    local_68[6] = (undefined8 ******)0x756f79206f74206b;
    local_60 = 0x38;
    *(undefined1 *)(local_68 + 7) = 0;
                    /* try { // try from 00106492 to 00106496 has its CatchHandler @ 00106911 */
    net_pc::respond_to_packet(param_1,param_2,(string *)&local_68);
    std::__cxx11::string::_M_dispose((string *)&local_68);
    return;
  }
  local_d8 = local_c8;
  local_d8 = operator_new(0x26);
  local_c8[0] = 0x25;
  *local_d8 = 0x6867666564636261;
  local_d8[1] = 0x706f6e6d6c6b6a69;
  local_d8[2] = 0x7877767574737271;
  local_d8[3] = 0x3534333231307a79;
  *(undefined8 *)((long)local_d8 + 0x1d) = 0x5f39383736353433;
  local_d0 = 0x25;
  *(undefined1 *)((long)local_d8 + 0x25) = 0;
  local_b8 = local_a8;
                    /* try { // try from 001063d6 to 001063da has its CatchHandler @ 0010695f */
  local_b8 = operator_new(0x11);
  local_a8[0] = (undefined8 *******)0x10;
  *local_b8 = (undefined8 ******)0x726365737b4f4d43;
  ((undefined8 *******)local_b8)[1] = (undefined8 ******)0x5f65646f635f7465;
  local_b0 = (undefined8 *******)0x10;
  *(undefined1 *)((undefined8 *******)local_b8 + 2) = 0;
  if (*(long *)(param_2 + 0x18) == 0) {
    pppppppuVar6 = (undefined8 *******)0x11;
LAB_0010662e:
    pppppppuVar2 = (undefined8 *******)local_a8[0];
  }
  else {
    uVar5 = 0;
    do {
      __n = local_b0;
      uVar1 = *(undefined1 *)
               ((long)local_d8 +
               ((long)*(char *)(*(long *)(param_2 + 0x10) + uVar5) + uVar5) % local_d0);
      pppppppuVar6 = (undefined8 *******)((long)local_b0 + 1);
      pppppppuVar2 = (undefined8 *******)local_a8[0];
      if ((undefined8 *******)local_b8 == local_a8) {
        pppppppuVar2 = (undefined8 *******)0xf;
      }
      __dest = (undefined8 *******)local_b8;
      pppppppuVar3 = (undefined8 *******)local_a8[0];
      if (pppppppuVar2 < pppppppuVar6) {
        if ((long)pppppppuVar6 < 0) {
                    /* try { // try from 001064f8 to 0010675c has its CatchHandler @ 001064fd */
          uVar4 = std::__throw_length_error("basic_string::_M_create");
                    /* catch() { ... } // from try @ 001064f8 with catch @ 001064fd */
          goto LAB_00106943;
        }
        pppppppuVar2 = (undefined8 *******)((long)pppppppuVar2 * 2);
        pppppppuVar3 = (undefined8 *******)0x7fffffffffffffff;
        if (pppppppuVar2 < (undefined8 *******)0x8000000000000000) {
          pppppppuVar3 = pppppppuVar2;
        }
        if (pppppppuVar2 <= pppppppuVar6) {
          pppppppuVar3 = pppppppuVar6;
        }
        if ((long)((long)pppppppuVar3 + 1U) < 0) {
          __dest = (undefined8 *******)std::__throw_bad_alloc();
        }
        else {
          __dest = operator_new((ulong)((long)pppppppuVar3 + 1U));
        }
        if ((undefined8 *******)__n != (undefined8 *******)0x0) {
          if ((undefined8 *******)__n == (undefined8 *******)0x1) {
            *(undefined1 *)__dest = *(undefined1 *)local_b8;
          }
          else {
            memcpy(__dest,local_b8,(size_t)__n);
          }
        }
        if ((undefined8 *******)local_b8 != local_a8) {
          operator_delete(local_b8,(ulong)((long)local_a8[0] + 1));
        }
      }
      local_a8[0] = pppppppuVar3;
      local_b8 = __dest;
      *(undefined1 *)((long)local_b8 + (long)__n) = uVar1;
      *(undefined1 *)((long)local_b8 + 1 + (long)__n) = 0;
      uVar5 = uVar5 + 1;
      local_b0 = pppppppuVar6;
    } while (uVar5 < *(ulong *)(param_2 + 0x18));
    pppppppuVar6 = (undefined8 *******)((long)__n + 2);
    pppppppuVar2 = (undefined8 *******)0xf;
    if ((undefined8 *******)local_b8 != local_a8) goto LAB_0010662e;
  }
  pppppppuVar3 = (undefined8 *******)local_b0;
  if (pppppppuVar2 < pppppppuVar6) {
    std::__cxx11::string::_M_mutate((string *)&local_b8,(ulong)local_b0,0,(char *)0x0,1);
  }
  *(undefined1 *)((long)local_b8 + (long)pppppppuVar3) = 0x7d;
  *(undefined1 *)((long)local_b8 + (long)pppppppuVar6) = 0;
  local_98 = 0;
  local_8c = 0x20;
  local_88 = local_78;
  local_80 = (undefined8 *******)0x0;
  local_78[0] = (undefined8 ******)((ulong)local_78[0] & 0xffffffffffffff00);
  local_b0 = pppppppuVar6;
  if (param_1[0x10] == (net_pc)0x0) {
    std::__throw_bad_optional_access();
LAB_00106805:
    local_48[0] = pppppppuVar6;
    if ((long)pppppppuVar6 < 0) {
      std::__throw_length_error("basic_string::_M_create");
    }
    else if (-1 < (long)pppppppuVar6 + 1) {
      local_58 = operator_new((ulong)((long)pppppppuVar6 + 1));
      goto LAB_0010683e;
    }
    local_58 = (undefined8 ******)std::__throw_bad_alloc();
  }
  else {
    local_94 = *(undefined4 *)(param_1 + 0xc);
    local_90 = 0x260fc72a;
    if (pppppppuVar6 < (undefined8 *******)0x10) {
      if (pppppppuVar6 != (undefined8 *******)0x0) {
        pppppppuVar3 = (undefined8 *******)local_88;
        pppppppuVar2 = (undefined8 *******)local_78[0];
        if (pppppppuVar6 != (undefined8 *******)0x1) goto LAB_001067d4;
                    /* WARNING: Ignoring partial resolution of indirect */
        local_78[0]._0_1_ = *(undefined1 *)local_b8;
      }
    }
    else {
      if ((long)pppppppuVar6 < 0) {
        uVar4 = std::__throw_length_error("basic_string::_M_create");
        std::__cxx11::string::_M_dispose((string *)&local_88);
                    /* catch() { ... } // from try @ 0010677c with catch @ 0010678f */
LAB_00106943:
        std::__cxx11::string::_M_dispose((string *)&local_b8);
        std::__cxx11::string::_M_dispose((string *)&local_d8);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar4);
      }
      pppppppuVar2 = (undefined8 *******)0x1e;
      if ((undefined8 *******)0x1d < pppppppuVar6) {
        pppppppuVar2 = pppppppuVar6;
      }
      if ((long)pppppppuVar2 + 1 < 0) {
        pppppppuVar3 = (undefined8 *******)std::__throw_bad_alloc();
      }
      else {
                    /* try { // try from 0010677c to 0010682a has its CatchHandler @ 0010678f */
        pppppppuVar3 = operator_new((ulong)((long)pppppppuVar2 + 1));
      }
      if ((undefined8 *******)local_88 != local_78) {
        operator_delete(local_88,(ulong)((long)local_78[0] + 1));
      }
LAB_001067d4:
      local_78[0] = pppppppuVar2;
      local_88 = pppppppuVar3;
      memcpy(local_88,local_b8,(size_t)pppppppuVar6);
    }
    *(undefined1 *)((long)local_88 + (long)pppppppuVar6) = 0;
    local_68 = (undefined8 *******)CONCAT71(local_68._1_7_,local_98);
    local_68 = (undefined8 *******)CONCAT44(local_94,(undefined4)local_68);
    local_60._0_5_ = CONCAT14(local_8c,local_90);
    local_58 = local_48;
    pppppppuVar3 = (undefined8 *******)local_88;
    local_80 = pppppppuVar6;
    if ((undefined8 *******)0xf < pppppppuVar6) goto LAB_00106805;
    if (pppppppuVar6 == (undefined8 *******)0x1) {
      local_48[0] = (undefined8 ******)CONCAT71(local_48[0]._1_7_,*(undefined1 *)local_88);
      goto LAB_00106856;
    }
    if (pppppppuVar6 == (undefined8 *******)0x0) goto LAB_00106856;
  }
LAB_0010683e:
  memcpy(local_58,pppppppuVar3,(size_t)pppppppuVar6);
LAB_00106856:
  *(undefined1 *)((long)local_58 + (long)pppppppuVar6) = 0;
  local_50 = pppppppuVar6;
                    /* try { // try from 00106877 to 0010687b has its CatchHandler @ 00106929 */
  net_pc::send_packet(param_1,&local_68);
  if ((undefined8 *******)local_58 != local_48) {
    operator_delete(local_58,(ulong)((long)local_48[0] + 1));
  }
  if ((undefined8 *******)local_88 != local_78) {
    operator_delete(local_88,(ulong)((long)local_78[0] + 1));
  }
  if ((undefined8 *******)local_b8 != local_a8) {
    operator_delete(local_b8,(ulong)((long)local_a8[0] + 1));
  }
  if (local_d8 != local_c8) {
    operator_delete(local_d8,local_c8[0] + 1);
  }
  return;
}

