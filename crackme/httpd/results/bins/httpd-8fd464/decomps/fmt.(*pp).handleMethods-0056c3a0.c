
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.(*pp).handleMethods(fmt.pp * p, int32 verb, bool handled) */

bool fmt___pp__handleMethods(fmt_pp *p,int32 verb)

{
  runtime_interfacetype *prVar1;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  undefined1 extraout_AL_01;
  undefined1 extraout_AL_02;
  undefined1 extraout_AL_03;
  undefined1 extraout_AL_04;
  undefined1 extraout_AL_05;
  undefined1 extraout_AL_06;
  undefined1 extraout_AL_07;
  undefined1 extraout_AL_08;
  undefined1 extraout_AL_09;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  fmt_pp *inter;
  fmt_pp *p_00;
  fmt_pp *extraout_RDX;
  fmt_pp *extraout_RDX_00;
  int verb_00;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  runtime_iface rVar2;
  runtime_eface e;
  runtime_eface e_00;
  runtime_eface e_01;
  string v;
  runtime_eface e_02;
  string v_00;
  runtime_eface e_03;
  string s;
  fmt_pp *p_spill;
  int32 verb_spill;
  undefined1 uStack0000000000000018;
  undefined4 local_258;
  undefined4 uStack_254;
  void *local_250;
  undefined1 local_1f0 [48];
  runtime__type *local_1c0;
  void *local_1b8;
  int local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined **local_180;
  runtime__type *local_148;
  void *local_140;
  int local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined **local_108;
  runtime__type *local_d0;
  void *local_c8;
  int local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined **local_90;
  runtime__type *local_58;
  void *local_50;
  int local_48;
  undefined *local_40;
  undefined8 local_38;
  void *local_30;
  void *local_28;
  void *local_20;
  runtime_interfacetype *local_10;
  
  while (verb_00 = (int)in_RDI, local_1f0 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10))
  {
    runtime_morestack_noctxt();
  }
  uStack0000000000000018 = 0;
  if (p_spill->erroring != false) {
    runtime_deferreturn();
    return (bool)extraout_AL_09;
  }
  p_00 = (fmt_pp *)(ulong)(uint)verb_spill;
  inter = p_spill;
  if (verb_spill == 0x77) {
                    /* Unresolved local var: error err@[???] */
    e.data = (p_spill->arg)._type;
    e._type = (runtime__type *)&DAT_0023c640;
    rVar2 = runtime_assertE2I2((runtime_interfacetype *)p_spill,e);
    if (((CONCAT44(uStack_254,local_258) == 0) || (p_spill->wrapErrs == false)) ||
       ((p_spill->wrappedErr).tab != (runtime_itab *)0x0)) {
      (p_spill->wrappedErr).tab = (runtime_itab *)0x0;
      if (runtime_writeBarrier._0_4_ == 0) {
        (p_spill->wrappedErr).data = (void *)0x0;
      }
      else {
        runtime_gcWriteBarrier();
        p_spill = extraout_RDX_00;
      }
      p_spill->wrapErrs = false;
      fmt___pp__badVerb((fmt_pp *)0x77,(int32)rVar2.data);
      uStack0000000000000018 = 1;
      runtime_deferreturn();
      return (bool)extraout_AL_08;
    }
    (p_spill->wrappedErr).tab = (runtime_itab *)CONCAT44(uStack_254,local_258);
    if (runtime_writeBarrier._0_4_ == 0) {
      (p_spill->wrappedErr).data = local_250;
    }
    else {
      verb_00 = (int)p_spill + 0xc0;
      runtime_gcWriteBarrier();
      inter = extraout_RDX;
    }
                    /* Unresolved local var: fmt.Formatter formatter@[???] */
    p_00 = (fmt_pp *)0x76;
  }
                    /* Unresolved local var: fmt.GoStringer stringer@[???] */
  e_01.data._0_4_ = (int)p_00;
  e_00.data = p_00;
  e_00._type = (inter->arg).data;
  runtime_assertE2I2((runtime_interfacetype *)inter,e_00);
  if (CONCAT44(uStack_254,local_258) != 0) {
    uStack0000000000000018 = 1;
    local_58 = (p_spill->arg)._type;
    local_50 = (p_spill->arg).data;
    local_a8 = 0x30;
    local_90 = &PTR_fmt___pp__catchPanic_002b2de8;
    local_40 = &DAT_00289510;
    local_38 = 6;
    local_48 = (int)e_01.data;
    runtime_deferprocStack((runtime__defer *)p_spill);
    if (extraout_EAX_02 != 0) {
      runtime_deferreturn();
      return (bool)extraout_AL_07;
    }
    (**(code **)(CONCAT44(uStack_254,local_258) + 0x18))();
    runtime_deferreturn();
    return (bool)extraout_AL_06;
  }
  if ((p_spill->fmt).fmtFlags.sharpV == false) {
    if ((int)e_01.data < 0x72) {
      if (((int)e_01.data != 0x58) && ((int)e_01.data != 0x71)) goto LAB_0056c7a6;
    }
    else if ((((int)e_01.data != 0x73) && ((int)e_01.data != 0x76)) && ((int)e_01.data != 0x78))
    goto LAB_0056c7a6;
    prVar1 = (p_spill->arg).data;
    if ((p_spill->arg)._type != (runtime__type *)0x0) {
      e_01._type = &prVar1->typ;
      e_01.data._4_4_ = 0;
      local_10 = prVar1;
                    /* Unresolved local var: error v@[???] */
      rVar2 = runtime_assertE2I2((runtime_interfacetype *)&DAT_0023c640,e_01);
      e_02._type = rVar2.data;
      if (CONCAT44(uStack_254,local_258) != 0) {
        local_30 = local_250;
        uStack0000000000000018 = 1;
        local_148 = (p_spill->arg)._type;
        local_140 = (p_spill->arg).data;
        local_198 = 0x30;
        local_180 = &PTR_fmt___pp__catchPanic_002b2de8;
        local_130 = &DAT_00288a16;
        local_128 = 5;
        local_138 = (int)e_01.data;
        runtime_deferprocStack((runtime__defer *)p_spill);
        if (extraout_EAX != 0) {
          runtime_deferreturn();
          return (bool)extraout_AL_00;
        }
        (**(code **)(CONCAT44(uStack_254,local_258) + 0x18))();
        v.len = (int)local_30;
        v.str = (uint8 *)&PTR_fmt___pp__catchPanic_002b2de8;
        fmt___pp__fmtString(p_00,v,verb_00);
        runtime_deferreturn();
        return (bool)extraout_AL;
      }
      e_02.data = local_250;
                    /* Unresolved local var: fmt.Stringer v@[???] */
      runtime_assertE2I2(local_10,e_02);
      if (CONCAT44(uStack_254,local_258) != 0) {
        local_28 = local_250;
        uStack0000000000000018 = 1;
        local_1c0 = (p_spill->arg)._type;
        local_1b8 = (p_spill->arg).data;
        local_1a8 = &DAT_00289618;
        local_1a0 = 6;
        local_1b0 = (int)e_01.data;
        runtime_deferprocStack((runtime__defer *)p_spill);
        if (extraout_EAX_00 != 0) {
          runtime_deferreturn();
          return (bool)extraout_AL_02;
        }
        (**(code **)(CONCAT44(uStack_254,local_258) + 0x18))();
        v_00.len = (int)local_28;
        v_00.str = (uint8 *)&PTR_fmt___pp__catchPanic_002b2de8;
        fmt___pp__fmtString(p_00,v_00,verb_00);
        runtime_deferreturn();
        return (bool)extraout_AL_01;
      }
    }
  }
  else {
    e_03.data = (p_spill->arg)._type;
    e_03._type = (runtime__type *)&DAT_0023c740;
    runtime_assertE2I2((runtime_interfacetype *)p_spill,e_03);
    if (CONCAT44(uStack_254,local_258) != 0) {
      local_20 = local_250;
      uStack0000000000000018 = 1;
      local_d0 = (p_spill->arg)._type;
      local_c8 = (p_spill->arg).data;
      local_120 = 0x30;
      local_108 = &PTR_fmt___pp__catchPanic_002b2de8;
      local_b8 = &DAT_0028ba5a;
      local_b0 = 8;
      local_c0 = (int)e_01.data;
      runtime_deferprocStack((runtime__defer *)p_spill);
      if (extraout_EAX_01 != 0) {
        runtime_deferreturn();
        return (bool)extraout_AL_05;
      }
      (**(code **)(CONCAT44(uStack_254,local_258) + 0x18))();
      s.len = (int)local_20;
      s.str = (uint8 *)&PTR_fmt___pp__catchPanic_002b2de8;
      fmt___fmt__fmtS(&p_spill->fmt,s);
      runtime_deferreturn();
      return (bool)extraout_AL_04;
    }
  }
LAB_0056c7a6:
  uStack0000000000000018 = 0;
  runtime_deferreturn();
  return (bool)extraout_AL_03;
}

