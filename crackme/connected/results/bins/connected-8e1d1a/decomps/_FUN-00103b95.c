
/* _FUN(net_pc*, packet*) */

void main::{lambda(net_pc*,packet*)#9}::_FUN(net_pc *param_1,packet *param_2)

{
  undefined1 *__src;
  packet *ppVar1;
  packet *ppVar2;
  undefined8 uVar3;
  packet *ppVar4;
  packet *local_a8;
  packet *local_a0;
  packet *local_98 [2];
  undefined1 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  packet *local_78;
  packet *local_70;
  packet *local_68 [2];
  undefined8 local_58;
  undefined8 local_50;
  packet **local_48;
  packet *local_40;
  packet *local_38 [3];
  
  local_a8 = (packet *)local_98;
  __src = *(undefined1 **)(param_2 + 0x10);
  ppVar4 = *(packet **)(param_2 + 0x18);
  if (ppVar4 < (packet *)0x10) {
    if (ppVar4 == (packet *)0x1) goto LAB_00103c0e;
    if (ppVar4 != (packet *)0x0) {
LAB_00103bf0:
      memcpy(local_a8,__src,(size_t)ppVar4);
    }
  }
  else {
    if ((long)ppVar4 < 0) {
      std::__throw_length_error("basic_string::_M_create");
    }
    else if (-1 < (long)(ppVar4 + 1)) {
      local_a8 = operator_new((ulong)(ppVar4 + 1));
      local_98[0] = ppVar4;
      goto LAB_00103bf0;
    }
    std::__throw_bad_alloc();
LAB_00103c0e:
    local_98[0] = (packet *)CONCAT71(local_98[0]._1_7_,*__src);
  }
  local_a8[(long)ppVar4] = (packet)0x0;
  for (ppVar1 = local_a8; local_a0 = ppVar4, ppVar1 != local_a8 + (long)ppVar4; ppVar1 = ppVar1 + 1)
  {
    if (*ppVar1 == (packet)0x42) {
      local_58 = &local_48;
      local_50 = 3;
      local_48 = (packet **)CONCAT44(local_48._4_4_,0x2e2e2e);
                    /* try { // try from 00103d46 to 00103d4a has its CatchHandler @ 00103eee */
      net_pc::respond_to_packet(param_1,param_2,(string *)&local_58);
      if (local_58 != &local_48) {
        operator_delete(local_58,(long)local_48 + 1);
      }
      if (local_a8 == (packet *)local_98) {
        return;
      }
      operator_delete(local_a8,(ulong)(local_98[0] + 1));
      return;
    }
    *ppVar1 = (packet)((byte)*ppVar1 ^ 0x42);
  }
  local_88 = 0;
  local_7c = 0x20;
  local_78 = (packet *)local_68;
  local_70 = (packet *)0x0;
  local_68[0] = (packet *)((ulong)local_68[0] & 0xffffffffffffff00);
  if (param_1[0x10] == (net_pc)0x0) {
    std::__throw_bad_optional_access();
    ppVar1 = ppVar4;
LAB_00103e2b:
    ppVar4 = param_2;
    local_38[0] = param_2;
    if ((long)param_2 < 0) {
      std::__throw_length_error("basic_string::_M_create");
    }
    else if (-1 < (long)(param_2 + 1)) {
      local_48 = operator_new((ulong)(param_2 + 1));
      goto LAB_00103e5e;
    }
    local_48 = (packet **)std::__throw_bad_alloc();
  }
  else {
    local_84 = *(undefined4 *)(param_1 + 0xc);
    local_80 = *(undefined4 *)(param_2 + 4);
    if (ppVar4 < (packet *)0x10) {
      if (ppVar4 != (packet *)0x0) {
        ppVar2 = local_78;
        ppVar1 = local_68[0];
        if (ppVar4 != (packet *)0x1) goto LAB_00103dfb;
                    /* WARNING: Ignoring partial resolution of indirect */
        local_68[0]._0_1_ = *local_a8;
      }
    }
    else {
      if ((long)ppVar4 < 0) {
        uVar3 = std::__throw_length_error("basic_string::_M_create");
        std::__cxx11::string::_M_dispose((string *)&local_78);
        std::__cxx11::string::_M_dispose((string *)&local_a8);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar3);
                    /* catch() { ... } // from try @ 00103dad with catch @ 00103dc0 */
      }
      ppVar1 = (packet *)0x1e;
      if ((packet *)0x1d < ppVar4) {
        ppVar1 = ppVar4;
      }
      if ((long)(ppVar1 + 1) < 0) {
        ppVar2 = (packet *)std::__throw_bad_alloc();
      }
      else {
                    /* try { // try from 00103dad to 00103e50 has its CatchHandler @ 00103dc0 */
        ppVar2 = operator_new((ulong)(ppVar1 + 1));
      }
      if (local_78 != (packet *)local_68) {
        operator_delete(local_78,(ulong)(local_68[0] + 1));
      }
LAB_00103dfb:
      local_68[0] = ppVar1;
      local_78 = ppVar2;
      memcpy(local_78,local_a8,(size_t)ppVar4);
    }
    local_78[(long)ppVar4] = (packet)0x0;
    local_58 = (packet ***)CONCAT71(local_58._1_7_,local_88);
    local_58 = (packet ***)CONCAT44(local_84,(undefined4)local_58);
    local_50._0_5_ = CONCAT14(local_7c,local_80);
    local_48 = local_38;
    param_2 = ppVar4;
    ppVar1 = local_78;
    local_70 = ppVar4;
    if ((packet *)0xf < ppVar4) goto LAB_00103e2b;
    if (ppVar4 == (packet *)0x1) {
      local_38[0] = (packet *)CONCAT71(local_38[0]._1_7_,*local_78);
      goto LAB_00103e74;
    }
    if (ppVar4 == (packet *)0x0) goto LAB_00103e74;
  }
LAB_00103e5e:
  memcpy(local_48,ppVar1,(size_t)ppVar4);
LAB_00103e74:
  *(packet *)((long)local_48 + (long)ppVar4) = (packet)0x0;
  local_40 = ppVar4;
                    /* try { // try from 00103e8a to 00103e8e has its CatchHandler @ 00103f0b */
  net_pc::send_packet(param_1,&local_58);
  if (local_48 != local_38) {
    operator_delete(local_48,(ulong)(local_38[0] + 1));
  }
  if (local_78 != (packet *)local_68) {
    operator_delete(local_78,(ulong)(local_68[0] + 1));
  }
  if (local_a8 != (packet *)local_98) {
    operator_delete(local_a8,(ulong)(local_98[0] + 1));
  }
  return;
}

