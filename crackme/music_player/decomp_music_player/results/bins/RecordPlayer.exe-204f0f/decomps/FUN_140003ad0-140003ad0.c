
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140003ad0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68 [7];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_140009000 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)param_1[7];
  if ((plVar1 != param_1) && ((longlong *)param_2[7] != param_2)) {
    param_1[7] = param_2[7];
    param_2[7] = (longlong)plVar1;
    return;
  }
  local_30 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_1) {
      local_30 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,local_68);
      plVar1 = (longlong *)param_1[7];
      if (plVar1 == (longlong *)0x0) goto LAB_140003b63;
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
      plVar1 = local_30;
    }
    local_30 = plVar1;
    param_1[7] = 0;
  }
LAB_140003b63:
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_2) {
      lVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
      param_1[7] = lVar2;
      plVar1 = (longlong *)param_2[7];
      if (plVar1 == (longlong *)0x0) goto LAB_140003ba9;
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    }
    else {
      param_1[7] = (longlong)plVar1;
    }
    param_2[7] = 0;
  }
LAB_140003ba9:
  if (local_30 != (longlong *)0x0) {
    if (local_30 == local_68) {
      lVar2 = (**(code **)(*local_30 + 8))(local_30,param_2);
      param_2[7] = lVar2;
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x20))(local_30,local_30 != local_68);
      }
    }
    else {
      param_2[7] = (longlong)local_30;
    }
  }
  return;
}

