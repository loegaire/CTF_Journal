
/* net_pc::respond_to_packet(packet const*, std::__cxx11::string const&) */

void __thiscall net_pc::respond_to_packet(net_pc *this,packet *param_1,string *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong unaff_RBX;
  net_pc *unaff_RBP;
  undefined1 *__src;
  ulong *unaff_R12;
  ulong uVar3;
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  ulong *local_78;
  ulong local_70;
  ulong local_68 [2];
  undefined1 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  ulong *local_48;
  ulong local_40;
  ulong local_38 [2];
  
  local_58 = 0;
  local_4c = 0x20;
  local_48 = local_38;
  local_40 = 0;
  local_38[0] = local_38[0] & 0xffffffffffffff00;
  if (this[0x10] == (net_pc)0x0) {
    std::__throw_bad_optional_access();
LAB_0010b18c:
    this = unaff_RBP;
    local_68[0] = unaff_RBX;
    if ((long)unaff_RBX < 0) {
      std::__throw_length_error("basic_string::_M_create");
    }
    else if (-1 < (long)(unaff_RBX + 1)) {
      local_78 = operator_new(unaff_RBX + 1);
      goto LAB_0010b1bf;
    }
    local_78 = (ulong *)std::__throw_bad_alloc();
  }
  else {
    local_54 = *(undefined4 *)(this + 0xc);
    local_50 = *(undefined4 *)(param_1 + 4);
    unaff_RBX = *(ulong *)(param_2 + 8);
    if (unaff_RBX < 0x10) {
      if (unaff_RBX != 0) {
        __src = *(undefined1 **)param_2;
        if (unaff_RBX != 1) goto LAB_0010b15e;
                    /* WARNING: Ignoring partial resolution of indirect */
        local_38[0]._0_1_ = *__src;
      }
    }
    else {
      if ((long)unaff_RBX < 0) {
        uVar2 = std::__throw_length_error("basic_string::_M_create");
        std::__cxx11::string::_M_dispose((string *)&local_48);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar2);
                    /* catch() { ... } // from try @ 0010b110 with catch @ 0010b123 */
      }
      uVar3 = 0x1e;
      if (0x1d < unaff_RBX) {
        uVar3 = unaff_RBX;
      }
      if ((long)(uVar3 + 1) < 0) {
        puVar1 = (ulong *)std::__throw_bad_alloc();
      }
      else {
                    /* try { // try from 0010b110 to 0010b1b1 has its CatchHandler @ 0010b123 */
        puVar1 = operator_new(uVar3 + 1);
      }
      if (local_48 != local_38) {
        operator_delete(local_48,local_38[0] + 1);
      }
      __src = *(undefined1 **)param_2;
      local_48 = puVar1;
      local_38[0] = uVar3;
LAB_0010b15e:
      memcpy(local_48,__src,unaff_RBX);
    }
    *(undefined1 *)((long)local_48 + unaff_RBX) = 0;
    local_88[0] = local_58;
    local_84 = local_54;
    local_80 = local_50;
    local_7c = local_4c;
    local_78 = local_68;
    unaff_RBP = this;
    unaff_R12 = local_48;
    local_40 = unaff_RBX;
    if (0xf < unaff_RBX) goto LAB_0010b18c;
    if (unaff_RBX == 1) {
      local_68[0] = CONCAT71(local_68[0]._1_7_,(char)*local_48);
      goto LAB_0010b1d5;
    }
    if (unaff_RBX == 0) goto LAB_0010b1d5;
  }
LAB_0010b1bf:
  memcpy(local_78,unaff_R12,unaff_RBX);
LAB_0010b1d5:
  *(undefined1 *)((long)local_78 + unaff_RBX) = 0;
  local_70 = unaff_RBX;
                    /* try { // try from 0010b1e9 to 0010b1ed has its CatchHandler @ 0010b235 */
  send_packet(this,local_88);
  if (local_78 != local_68) {
    operator_delete(local_78,local_68[0] + 1);
  }
  if (local_48 != local_38) {
    operator_delete(local_48,local_38[0] + 1);
  }
  return;
}

