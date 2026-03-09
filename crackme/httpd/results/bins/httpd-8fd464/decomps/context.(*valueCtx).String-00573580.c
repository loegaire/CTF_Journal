
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.(*valueCtx).String(context.valueCtx * c, string ~r0) */

string context___valueCtx__String(context_valueCtx *c)

{
  uint uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  void *unaff_RBX;
  runtime__type *prVar5;
  void **ppvVar6;
  long in_FS_OFFSET;
  context_Context c_00;
  string sVar7;
  __string a;
  runtime_eface e;
  undefined1 auVar8 [16];
  context_valueCtx *c_spill;
  uint8 local_d0 [8];
  long local_c8;
  uint8 *local_c0;
  void *local_88;
  uint8 local_80 [8];
  runtime__type *local_78;
  void *local_70;
  uint8 local_68 [8];
  undefined1 local_60 [8];
  undefined *local_58;
  uint8 local_50 [8];
  undefined8 local_48;
  undefined *local_38;
  undefined8 local_30;
  runtime__type *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  while (local_60 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  pvVar2 = (c_spill->Context).data;
  c_00.data = unaff_RBX;
  c_00.tab = (runtime_itab *)c_spill;
  context_contextName(c_00);
  local_78 = (c_spill->key)._type;
  local_70 = (c_spill->key).data;
  local_80 = local_d0;
  if (local_78 == (runtime__type *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar4 = go_itab__internal_reflectlite_rtype_internal_reflectlite_Type;
  }
  (**(code **)(puVar4 + 0x58))();
  prVar5 = (c_spill->val)._type;
  puVar3 = (c_spill->val).data;
                    /* Unresolved local var: context.stringer s@[???]
                       Unresolved local var: string s@[???] */
  if (prVar5 != (runtime__type *)0x0) {
    uVar1 = prVar5->hash;
    e.data = &DAT_0023bfc0;
    e._type = prVar5;
    local_88 = pvVar2;
    runtime_assertE2I2((runtime_interfacetype *)(ulong)uVar1,e);
    if (local_c8 != 0) {
      (**(code **)(local_c8 + 0x18))();
      goto LAB_005736ff;
    }
    if ((uVar1 == 0xe0ff5cb4) && (prVar5 == (runtime__type *)&DAT_00225520)) {
      prVar5 = (runtime__type *)*puVar3;
      goto LAB_005736ff;
    }
  }
  prVar5 = (runtime__type *)&DAT_00296543;
LAB_005736ff:
  ppvVar6 = &local_88;
  auVar8 = FUN_0051a18b();
  local_20 = auVar8._8_8_;
  local_48 = auVar8._0_8_;
  local_68[0] = local_80[0];
  local_68[1] = local_80[1];
  local_68[2] = local_80[2];
  local_68[3] = local_80[3];
  local_68[4] = local_80[4];
  local_68[5] = local_80[5];
  local_68[6] = local_80[6];
  local_68[7] = local_80[7];
  local_58 = &DAT_00299285;
  local_50[0] = 0x10;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[7] = 0;
  local_38 = &DAT_0028944a;
  local_30 = 6;
  local_18 = 0x287742;
  local_10 = 1;
  a.len._0_1_ = local_d0[0];
  a.len._1_1_ = local_d0[1];
  a.len._2_1_ = local_d0[2];
  a.len._3_1_ = local_d0[3];
  a.len._4_1_ = local_d0[4];
  a.len._5_1_ = local_d0[5];
  a.len._6_1_ = local_d0[6];
  a.len._7_1_ = local_d0[7];
  a.array = (string *)prVar5;
  a.cap = (int)ppvVar6;
  local_28 = prVar5;
  sVar7 = runtime_concatstrings((runtime_tmpBuf *)local_68,a);
  sVar7.str = local_c0;
  return sVar7;
}

