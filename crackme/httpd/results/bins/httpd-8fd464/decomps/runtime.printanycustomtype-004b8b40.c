
/* WARNING: Unknown calling convention */

void runtime_printanycustomtype(interface___ i)

{
  float fVar1;
  float fVar2;
  float64 v;
  byte bVar3;
  bool v_00;
  char cVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int64 iVar9;
  uint64 uVar10;
  uint8 *puVar11;
  undefined1 auVar12 [16];
  long in_FS_OFFSET;
  string sVar13;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  string s_09;
  string s_10;
  string s_11;
  string s_12;
  string s_13;
  string s_14;
  string s_15;
  string s_16;
  string s_17;
  string s_18;
  string s_19;
  string s_20;
  string s_21;
  string s_22;
  string s_23;
  string s_24;
  string s_25;
  string s_26;
  string s_27;
  string s_28;
  string s_29;
  string s_30;
  string s_31;
  string s_32;
  string s_33;
  string s_34;
  string s_35;
  string s_36;
  string s_37;
  string s_38;
  string s_39;
  string s_40;
  string s_41;
  string s_42;
  string s_43;
  string s_44;
  string s_45;
  string s_46;
  string s_47;
  string s_48;
  interface___ i_spill;
  uint8 *local_78;
  
                    /* Unresolved local var: string typestring@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sVar13 = runtime____type__string(i_spill._type);
  bVar3 = (i_spill._type)->kind;
  if (bVar3 < 9) {
    if (4 < bVar3) {
      if (6 < bVar3) {
        if (bVar3 == 7) {
          uVar10 = *(uint64 *)i_spill.data;
          runtime_printlock();
          s_16.len = sVar13.len;
          s_16.str = local_78;
          runtime_printstring(s_16);
          s_17.len = sVar13.len;
          s_17.str = (uint8 *)((long)&go_string__ + 1);
          runtime_printstring(s_17);
          runtime_printuint(uVar10);
          s_18.len = sVar13.len;
          s_18.str = (uint8 *)((long)&go_string__ + 2);
          runtime_printstring(s_18);
          runtime_printunlock();
          return;
        }
        bVar3 = *(byte *)i_spill.data;
        runtime_printlock();
        s_19.len = sVar13.len;
        s_19.str = local_78;
        runtime_printstring(s_19);
        s_20.len = sVar13.len;
        s_20.str = (uint8 *)((long)&go_string__ + 1);
        runtime_printstring(s_20);
        runtime_printuint((ulong)bVar3);
        s_21.len = sVar13.len;
        s_21.str = (uint8 *)((long)&go_string__ + 2);
        runtime_printstring(s_21);
        runtime_printunlock();
        return;
      }
      if (bVar3 == 5) {
        iVar7 = *(int *)i_spill.data;
        runtime_printlock();
        s_10.len = sVar13.len;
        s_10.str = local_78;
        runtime_printstring(s_10);
        s_11.len = sVar13.len;
        s_11.str = (uint8 *)((long)&go_string__ + 1);
        runtime_printstring(s_11);
        runtime_printint((long)iVar7);
        s_12.len = sVar13.len;
        s_12.str = (uint8 *)((long)&go_string__ + 2);
        runtime_printstring(s_12);
        runtime_printunlock();
        return;
      }
      iVar9 = *(int64 *)i_spill.data;
      runtime_printlock();
      s_13.len = sVar13.len;
      s_13.str = local_78;
      runtime_printstring(s_13);
      s_14.len = sVar13.len;
      s_14.str = (uint8 *)((long)&go_string__ + 1);
      runtime_printstring(s_14);
      runtime_printint(iVar9);
      s_15.len = sVar13.len;
      s_15.str = (uint8 *)((long)&go_string__ + 2);
      runtime_printstring(s_15);
      runtime_printunlock();
      return;
    }
    if (2 < bVar3) {
      if (bVar3 == 3) {
        cVar4 = *(char *)i_spill.data;
        runtime_printlock();
        s_04.len = sVar13.len;
        s_04.str = local_78;
        runtime_printstring(s_04);
        s_05.len = sVar13.len;
        s_05.str = (uint8 *)((long)&go_string__ + 1);
        runtime_printstring(s_05);
        runtime_printint((long)cVar4);
        s_06.len = sVar13.len;
        s_06.str = (uint8 *)((long)&go_string__ + 2);
        runtime_printstring(s_06);
        runtime_printunlock();
        return;
      }
      sVar5 = *(short *)i_spill.data;
      runtime_printlock();
      s_07.len = sVar13.len;
      s_07.str = local_78;
      runtime_printstring(s_07);
      s_08.len = sVar13.len;
      s_08.str = (uint8 *)((long)&go_string__ + 1);
      runtime_printstring(s_08);
      runtime_printint((long)sVar5);
      s_09.len = sVar13.len;
      s_09.str = (uint8 *)((long)&go_string__ + 2);
      runtime_printstring(s_09);
      runtime_printunlock();
      return;
    }
    if (bVar3 == 1) {
      v_00 = *(bool *)i_spill.data;
      runtime_printlock();
      s_01.len = sVar13.len;
      s_01.str = local_78;
      runtime_printstring(s_01);
      s_02.len = sVar13.len;
      s_02.str = (uint8 *)((long)&go_string__ + 1);
      runtime_printstring(s_02);
      runtime_printbool(v_00);
      s_03.len = sVar13.len;
      s_03.str = (uint8 *)((long)&go_string__ + 2);
      runtime_printstring(s_03);
      runtime_printunlock();
      return;
    }
    if (bVar3 == 2) {
      iVar9 = *(int64 *)i_spill.data;
      runtime_printlock();
      sVar13.str = local_78;
      runtime_printstring(sVar13);
      s.len = sVar13.len;
      s.str = (uint8 *)((long)&go_string__ + 1);
      runtime_printstring(s);
      runtime_printint(iVar9);
      s_00.len = sVar13.len;
      s_00.str = (uint8 *)((long)&go_string__ + 2);
      runtime_printstring(s_00);
      runtime_printunlock();
      return;
    }
  }
  else {
    if (bVar3 < 0xd) {
      if (10 < bVar3) {
        if (bVar3 == 0xb) {
          uVar10 = *(uint64 *)i_spill.data;
          runtime_printlock();
          s_28.len = sVar13.len;
          s_28.str = local_78;
          runtime_printstring(s_28);
          s_29.len = sVar13.len;
          s_29.str = (uint8 *)((long)&go_string__ + 1);
          runtime_printstring(s_29);
          runtime_printuint(uVar10);
          s_30.len = sVar13.len;
          s_30.str = (uint8 *)((long)&go_string__ + 2);
          runtime_printstring(s_30);
          runtime_printunlock();
          return;
        }
        uVar10 = *(uint64 *)i_spill.data;
        runtime_printlock();
        s_31.len = sVar13.len;
        s_31.str = local_78;
        runtime_printstring(s_31);
        s_32.len = sVar13.len;
        s_32.str = (uint8 *)((long)&go_string__ + 1);
        runtime_printstring(s_32);
        runtime_printuint(uVar10);
        s_33.len = sVar13.len;
        s_33.str = (uint8 *)((long)&go_string__ + 2);
        runtime_printstring(s_33);
        runtime_printunlock();
        return;
      }
      if (bVar3 == 9) {
        uVar6 = *(ushort *)i_spill.data;
        runtime_printlock();
        s_22.len = sVar13.len;
        s_22.str = local_78;
        runtime_printstring(s_22);
        s_23.len = sVar13.len;
        s_23.str = (uint8 *)((long)&go_string__ + 1);
        runtime_printstring(s_23);
        runtime_printuint((ulong)uVar6);
        s_24.len = sVar13.len;
        s_24.str = (uint8 *)((long)&go_string__ + 2);
        runtime_printstring(s_24);
        runtime_printunlock();
        return;
      }
      uVar8 = *(uint *)i_spill.data;
      runtime_printlock();
      s_25.len = sVar13.len;
      s_25.str = local_78;
      runtime_printstring(s_25);
      s_26.len = sVar13.len;
      s_26.str = (uint8 *)((long)&go_string__ + 1);
      runtime_printstring(s_26);
      runtime_printuint((ulong)uVar8);
      s_27.len = sVar13.len;
      s_27.str = (uint8 *)((long)&go_string__ + 2);
      runtime_printstring(s_27);
      runtime_printunlock();
      return;
    }
    if (bVar3 < 0xf) {
      if (bVar3 == 0xd) {
        fVar1 = *(float *)i_spill.data;
        runtime_printlock();
        s_34.len = sVar13.len;
        s_34.str = local_78;
        runtime_printstring(s_34);
        s_35.len = sVar13.len;
        s_35.str = (uint8 *)((long)&go_string__ + 1);
        runtime_printstring(s_35);
        runtime_printfloat((float64)(double)fVar1);
        s_36.len = sVar13.len;
        s_36.str = (uint8 *)((long)&go_string__ + 2);
        runtime_printstring(s_36);
        runtime_printunlock();
        return;
      }
      v = *(float64 *)i_spill.data;
      runtime_printlock();
      s_37.len = sVar13.len;
      s_37.str = local_78;
      runtime_printstring(s_37);
      s_38.len = sVar13.len;
      s_38.str = (uint8 *)((long)&go_string__ + 1);
      runtime_printstring(s_38);
      runtime_printfloat(v);
      s_39.len = sVar13.len;
      s_39.str = (uint8 *)((long)&go_string__ + 2);
      runtime_printstring(s_39);
      runtime_printunlock();
      return;
    }
    if (bVar3 == 0xf) {
      fVar1 = *(float *)i_spill.data;
      fVar2 = *(float *)((long)i_spill.data + 4);
      runtime_printlock();
      s_48.len = sVar13.len;
      s_48.str = local_78;
      runtime_printstring(s_48);
      auVar12._8_8_ = (double)fVar2;
      auVar12._0_8_ = (double)fVar1;
      runtime_printcomplex((complex128)auVar12);
      runtime_printunlock();
      return;
    }
    if (bVar3 == 0x10) {
      auVar12 = *(undefined1 (*) [16])i_spill.data;
      runtime_printlock();
      s_47.len = sVar13.len;
      s_47.str = local_78;
      runtime_printstring(s_47);
      runtime_printcomplex((complex128)auVar12);
      runtime_printunlock();
      return;
    }
    if (bVar3 == 0x18) {
      puVar11 = *(uint8 **)((long)i_spill.data + 8);
      runtime_printlock();
      s_43.len = sVar13.len;
      s_43.str = local_78;
      runtime_printstring(s_43);
      s_44.len = sVar13.len;
      s_44.str = &DAT_0028777d;
      runtime_printstring(s_44);
      s_45.len = sVar13.len;
      s_45.str = puVar11;
      runtime_printstring(s_45);
      s_46.len = sVar13.len;
      s_46.str = &DAT_00287827;
      runtime_printstring(s_46);
      runtime_printunlock();
      return;
    }
  }
  runtime_printlock();
  s_40.len = sVar13.len;
  s_40.str = (uint8 *)((long)&go_string__ + 1);
  runtime_printstring(s_40);
  s_41.len = sVar13.len;
  s_41.str = local_78;
  runtime_printstring(s_41);
  s_42.len = sVar13.len;
  s_42.str = &DAT_0028777f;
  runtime_printstring(s_42);
  runtime_printpointer(i_spill.data);
  runtime_printunlock();
  return;
}

