
/* WARNING: Removing unreachable block (ram,0x00105142) */
/* WARNING: Removing unreachable block (ram,0x00105147) */
/* WARNING: Removing unreachable block (ram,0x00105150) */
/* WARNING: Removing unreachable block (ram,0x00105116) */
/* WARNING: Removing unreachable block (ram,0x0010511b) */
/* WARNING: Removing unreachable block (ram,0x00105157) */
/* WARNING: Removing unreachable block (ram,0x00105163) */
/* WARNING: Removing unreachable block (ram,0x00105168) */
/* WARNING: Removing unreachable block (ram,0x00105175) */
/* _FUN(net_pc*, packet*) */

void main::{lambda(net_pc*,packet*)#6}::_FUN(net_pc *param_1,packet *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  ulong __n;
  byte *pbVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  byte bVar9;
  bool bVar10;
  undefined1 *local_68;
  ulong local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  ulong *local_38;
  ulong local_30;
  ulong local_28 [2];
  
  if (*(int *)(param_2 + 4) == 0x53305c08) {
    uVar1 = *(undefined4 *)(param_1 + 0x270);
    pbVar8 = *(byte **)(param_2 + 0x10);
    if (pbVar8 == pbVar8 + *(long *)(param_2 + 0x18)) {
      if (param_1[0x10] == (net_pc)0x0) goto LAB_00105095;
      uVar4 = *(undefined4 *)(param_1 + 0xc);
      puVar7 = &DAT_0011704d;
    }
    else {
      bVar9 = 1;
      pbVar3 = pbVar8;
      do {
        pbVar6 = pbVar3;
        bVar9 = bVar9 & ~*pbVar6;
        pbVar3 = pbVar6 + 1;
      } while (pbVar6 + 1 != pbVar8 + *(long *)(param_2 + 0x18));
      bVar2 = true;
      do {
        bVar2 = (bool)(bVar2 & (byte)(*pbVar8 - 0x21) < 0x5e);
        bVar10 = pbVar6 != pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar10);
      if (param_1[0x10] == (net_pc)0x0) {
LAB_00105095:
        local_68 = &local_58;
        local_58 = 0;
        local_60 = 0;
                    /* try { // try from 00105095 to 00105167 has its CatchHandler @ 0010509a */
        uVar5 = std::__throw_bad_optional_access();
        std::__cxx11::string::_M_dispose((string *)&local_68);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar5);
                    /* catch() { ... } // from try @ 00105095 with catch @ 0010509a */
      }
      uVar4 = *(undefined4 *)(param_1 + 0xc);
      if ((bVar9 == 0) || (!bVar2)) {
        puVar7 = &DAT_0011704f;
      }
      else {
        puVar7 = &DAT_0011704d;
      }
    }
    local_58 = 0;
    local_60 = 0;
    local_68 = &local_58;
    if (puVar7 == local_68) {
      std::__cxx11::string::_M_replace_cold
                ((char *)&local_68,(ulong)local_68,(char *)0x0,(ulong)puVar7,1);
    }
    else {
      local_58 = *puVar7;
    }
    local_68[1] = 0;
    local_38 = local_28;
    local_28[0] = CONCAT71(local_28[0]._1_7_,*local_68);
    local_3c = 0x20;
    local_48[0] = 0;
    local_60 = 1;
    local_30 = 1;
    local_44 = uVar4;
    local_40 = uVar1;
                    /* try { // try from 001051a1 to 001051a5 has its CatchHandler @ 00105208 */
    net_pc::send_packet(param_1,local_48);
    if (local_38 != local_28) {
      operator_delete(local_38,local_28[0] + 1);
    }
    if (local_68 == &local_58) {
      return;
    }
    operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
    return;
  }
  *(int *)(param_1 + 0x270) = *(int *)(param_2 + 4);
  local_68 = &local_58;
  local_60 = 0;
  local_58 = 0;
  if (param_1[0x10] == (net_pc)0x0) {
    uVar5 = std::__throw_bad_optional_access();
    std::__cxx11::string::_M_dispose((string *)&local_68);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar5);
                    /* catch() { ... } // from try @ 00104eea with catch @ 00104ef6 */
  }
  uVar1 = *(undefined4 *)(param_1 + 0xc);
                    /* try { // try from 00104eea to 00104f70 has its CatchHandler @ 00104ef6 */
  std::__cxx11::string::_M_assign((string *)&local_68,(string *)(param_2 + 0x10));
  __n = local_60;
  puVar7 = local_68;
  local_48[0] = 0;
  local_40 = 0x53305c08;
  local_3c = 0x20;
  local_38 = local_28;
  local_44 = uVar1;
  if (local_60 < 0x10) {
    if (local_60 == 1) {
      local_28[0] = CONCAT71(local_28[0]._1_7_,*local_68);
      goto LAB_00104f94;
    }
    if (local_60 == 0) goto LAB_00104f94;
  }
  else {
    if ((long)local_60 < 0) {
      std::__throw_length_error("basic_string::_M_create");
LAB_00104f6c:
      local_38 = (ulong *)std::__throw_bad_alloc();
    }
    else {
      if ((long)(local_60 + 1) < 0) goto LAB_00104f6c;
      local_38 = operator_new(local_60 + 1);
    }
    local_28[0] = __n;
  }
  memcpy(local_38,puVar7,__n);
LAB_00104f94:
  local_30 = __n;
  *(undefined1 *)((long)local_38 + __n) = 0;
                    /* try { // try from 00104faa to 00104fae has its CatchHandler @ 001051e9 */
  net_pc::send_packet(param_1,local_48);
  if (local_38 != local_28) {
    operator_delete(local_38,local_28[0] + 1);
  }
  if (local_68 != &local_58) {
    operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
  }
  return;
}

