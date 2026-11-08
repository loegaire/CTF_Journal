
/* _FUN(net_pc*, packet*) */

void main::{lambda(net_pc*,packet*)#5}::_FUN(net_pc *param_1,packet *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  int iVar9;
  ulong *local_88;
  ulong local_80;
  ulong local_78;
  undefined2 uStack_70;
  undefined1 uStack_6e;
  timespec local_68;
  ulong *local_58;
  ulong local_50;
  ulong local_48 [3];
  
  if (param_1[0x10] == (net_pc)0x0) {
    std::__throw_bad_optional_access();
LAB_001052a1:
                    /* try { // try from 001052a1 to 0010533c has its CatchHandler @ 001052a6 */
    uVar8 = std::__throw_bad_optional_access();
    std::__cxx11::string::_M_dispose((string *)&local_88);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar8);
                    /* catch() { ... } // from try @ 001052a1 with catch @ 001052a6 */
  }
  if (*(int *)(param_2 + 4) != *(int *)(param_1 + 0xc)) {
    iVar9 = 0x1000;
    do {
      iVar6 = rand();
      local_88 = &local_78;
      local_80 = 0;
      local_78 = local_78 & 0xffffffffffffff00;
      if (param_1[0x10] == (net_pc)0x0) goto LAB_001052a1;
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      local_78 = 0x4552454854204948;
      uStack_70 = 0x2121;
      local_80 = 10;
      uStack_6e = 0;
      local_68.tv_sec = 0;
      local_68.tv_nsec = 1000000;
      do {
        iVar5 = nanosleep(&local_68,&local_68);
        if (iVar5 != -1) break;
        piVar7 = __errno_location();
      } while (*piVar7 == 4);
      uVar3 = local_80;
      puVar4 = local_88;
      local_68.tv_sec = CONCAT44(uVar1,(int)local_68.tv_sec) & 0xffffffffffffff00;
      local_68.tv_nsec._0_5_ = CONCAT14(0x20,iVar6);
      local_58 = local_48;
      if (local_80 < 0x10) {
        if (local_80 == 1) {
          local_48[0] = CONCAT71(local_48[0]._1_7_,(char)*local_88);
        }
        else if (local_80 != 0) goto LAB_0010534a;
      }
      else {
        if ((long)local_80 < 0) {
          std::__throw_length_error("basic_string::_M_create");
LAB_00105338:
          local_58 = (ulong *)std::__throw_bad_alloc();
        }
        else {
          if ((long)(local_80 + 1) < 0) goto LAB_00105338;
          local_58 = operator_new(local_80 + 1);
        }
        local_48[0] = uVar3;
LAB_0010534a:
        memcpy(local_58,puVar4,uVar3);
      }
      local_50 = uVar3;
      *(undefined1 *)((long)local_58 + uVar3) = 0;
                    /* try { // try from 00105375 to 00105379 has its CatchHandler @ 00105563 */
      net_pc::send_packet(param_1,&local_68);
      if (local_58 != local_48) {
        operator_delete(local_58,local_48[0] + 1);
      }
      if (local_88 != &local_78) {
        operator_delete(local_88,local_78 + 1);
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    local_88 = &local_78;
    local_80 = 0;
    local_78 = local_78 & 0xffffffffffffff00;
    if (param_1[0x10] == (net_pc)0x0) {
                    /* try { // try from 00105510 to 00105514 has its CatchHandler @ 00105515 */
      uVar8 = std::__throw_bad_optional_access();
      std::__cxx11::string::_M_dispose((string *)&local_88);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar8);
                    /* catch() { ... } // from try @ 00105481 with catch @ 00105515
                       catch() { ... } // from try @ 00105510 with catch @ 00105515 */
    }
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_2 + 4);
                    /* try { // try from 00105481 to 001054cc has its CatchHandler @ 00105515 */
    std::__cxx11::string::_M_mutate
              ((string *)&local_88,0,0,"Okay, I did some spamming. You are welcome!",0x2b);
    puVar4 = local_88;
    local_80 = 0x2b;
    *(undefined1 *)((long)local_88 + 0x2b) = 0;
    local_68.tv_sec = CONCAT44(uVar1,(int)local_68.tv_sec) & 0xffffffffffffff00;
    local_68.tv_nsec._0_5_ = CONCAT14(0x20,uVar2);
    local_58 = local_48;
    local_58 = operator_new(0x2c);
    local_48[0] = 0x2b;
    uVar3 = puVar4[1];
    *local_58 = *puVar4;
    local_58[1] = uVar3;
    uVar3 = puVar4[3];
    local_58[2] = puVar4[2];
    local_58[3] = uVar3;
    uVar8 = *(undefined8 *)((long)puVar4 + 0x23);
    *(undefined8 *)((long)local_58 + 0x1b) = *(undefined8 *)((long)puVar4 + 0x1b);
    *(undefined8 *)((long)local_58 + 0x23) = uVar8;
    local_50 = 0x2b;
    *(undefined1 *)((long)local_58 + 0x2b) = 0;
                    /* try { // try from 00105509 to 0010550d has its CatchHandler @ 00105582 */
    net_pc::send_packet(param_1,&local_68);
    if (local_58 != local_48) {
      operator_delete(local_58,local_48[0] + 1);
    }
    if (local_88 != &local_78) {
      operator_delete(local_88,local_78 + 1);
    }
  }
  return;
}

