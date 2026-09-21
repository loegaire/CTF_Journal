
/* WARNING: Unknown calling convention */

void fmt___pp__printValue(fmt_pp *p,reflect_Value value,int32 verb,int depth)

{
  code *pcVar1;
  runtime__type *prVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 v [16];
  undefined1 v_00 [16];
  undefined1 auVar17 [16];
  uint8 uVar18;
  fmt_pp *extraout_RAX;
  fmt_pp *extraout_RAX_00;
  fmt_pp *extraout_RAX_01;
  fmt_pp *extraout_RAX_02;
  fmt_pp *extraout_RAX_03;
  fmt_pp *extraout_RAX_04;
  fmt_pp *extraout_RAX_05;
  fmt_pp *extraout_RAX_06;
  fmt_pp *extraout_RAX_07;
  fmt_pp *pfVar19;
  uintptr uVar20;
  fmt_pp *extraout_RAX_08;
  fmt_pp *extraout_RAX_09;
  fmt_pp *extraout_RAX_10;
  fmt_pp *extraout_RAX_11;
  fmt_pp *pfVar21;
  fmt_pp *extraout_RAX_12;
  fmt_pp *extraout_RAX_13;
  fmt_pp *pfVar22;
  fmt_pp *extraout_RAX_14;
  long lVar23;
  long extraout_RAX_15;
  fmt_pp *extraout_RAX_16;
  fmt_pp *extraout_RAX_17;
  fmt_pp *extraout_RAX_18;
  fmt_pp *extraout_RAX_19;
  fmt_pp *extraout_RAX_20;
  fmt_pp *extraout_RAX_21;
  fmt_pp *extraout_RAX_22;
  uint8 *puVar24;
  fmt_pp *pfVar25;
  fmt_pp *pfVar26;
  fmt_pp *extraout_RDX;
  fmt_pp *extraout_RDX_00;
  fmt_pp *extraout_RDX_01;
  ulong uVar27;
  fmt_pp *extraout_RDX_02;
  uint8 *puVar28;
  uint uVar29;
  fmt_pp *pfVar30;
  int32 iVar31;
  reflect_flag rVar32;
  void *pvVar33;
  int in_R9;
  long in_FS_OFFSET;
  interface___ iVar34;
  reflect_Type rVar35;
  string sVar36;
  reflect_Value v_01;
  reflect_Value mapValue;
  reflect_Value v_02;
  reflect_Value v_03;
  reflect_Value v_04;
  reflect_Value v_05;
  reflect_Value v_06;
  reflect_Value v_07;
  reflect_Value v_08;
  reflect_Value v_09;
  reflect_Value v_10;
  reflect_Value v_11;
  reflect_Value v_12;
  reflect_Value v_13;
  reflect_Value v_14;
  reflect_Value v_15;
  reflect_Value v_16;
  reflect_Value v_17;
  reflect_Value v_18;
  reflect_Value v_19;
  reflect_Value v_20;
  reflect_Value v_21;
  reflect_Value v_22;
  reflect_Value rVar37;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  runtime_slice old_03;
  runtime_slice old_04;
  runtime_slice old_05;
  reflect_Value value_00;
  runtime_slice old_06;
  runtime_slice old_07;
  runtime_slice old_08;
  runtime_slice old_09;
  runtime_slice old_10;
  reflect_Value value_01;
  runtime_slice old_11;
  runtime_slice old_12;
  reflect_Value value_02;
  reflect_Value v_24;
  runtime_slice old_13;
  runtime_slice old_14;
  reflect_Value value_03;
  runtime_slice old_15;
  runtime_slice old_16;
  runtime_slice old_17;
  runtime_slice old_18;
  runtime_slice old_19;
  reflect_Value value_04;
  runtime_slice old_20;
  runtime_slice old_21;
  reflect_Value value_05;
  runtime_slice old_22;
  runtime_slice old_23;
  __uint8 v_25;
  runtime_slice old_24;
  runtime_slice old_25;
  runtime_slice old_26;
  runtime_slice old_27;
  reflect_Value value_06;
  runtime_slice old_28;
  reflect_Value value_07;
  string typeString;
  fmt_pp *p_spill;
  reflect_Value value_spill;
  int32 verb_spill;
  int depth_spill;
  undefined4 uVar38;
  undefined1 *puVar39;
  undefined4 uVar40;
  fmt_pp *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  fmt_pp *local_1a8;
  fmt_pp *local_1a0;
  fmt_pp *local_198;
  fmt_pp *local_158;
  fmt_pp *local_150 [2];
  fmt_pp *local_140;
  reflect_flag local_138;
  long local_130;
  long local_128;
  fmt_pp *local_120;
  uint8 *local_118;
  fmt_pp *local_110;
  fmt_pp *local_108;
  fmt_pp *local_100;
  fmt_pp *local_f8;
  fmt_pp *local_f0;
  fmt_pp *local_e8;
  fmt_pp *local_e0;
  fmt_pp *local_d8;
  fmt_pp *local_d0;
  fmt_pp *local_c8;
  reflect_flag local_a0;
  fmt_pp *local_98;
  uint8 *local_90;
  fmt_pp *local_88;
  fmt_pp *local_80;
  fmt_pp *local_78;
  reflect_flag local_70;
  long local_68 [12];
  reflect_Value v_23;
  
  rVar32 = value.flag;
  rVar37.ptr = value.typ;
  while (local_150 <= *(fmt_pp ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((0 < depth_spill) && (value_spill.flag != 0)) && ((value_spill.flag & 0x60) == 0)) {
    local_1b8 = (fmt_pp *)CONCAT71(local_1b8._1_7_,1);
    rVar37.typ = value_spill.typ;
    rVar37.flag = value_spill.flag;
    iVar34 = reflect_valueInterface(rVar37,SUB81(rVar32,0));
    (p_spill->arg)._type = (runtime__type *)local_1b0;
    if (runtime_writeBarrier._0_4_ == 0) {
      (p_spill->arg).data = local_1a8;
    }
    else {
      runtime_gcWriteBarrier();
    }
    fmt___pp__handleMethods((fmt_pp *)(ulong)(uint)verb_spill,(int32)iVar34.data);
    local_1c0._0_1_ = (char)value_spill.flag;
    if ((char)local_1c0 != '\0') {
      return;
    }
  }
  (p_spill->arg)._type = (runtime__type *)0x0;
  pfVar25 = (fmt_pp *)value_spill.flag;
  if (runtime_writeBarrier._0_4_ == 0) {
    (p_spill->arg).data = (void *)0x0;
    local_110 = (fmt_pp *)depth_spill;
  }
  else {
    runtime_gcWriteBarrierSI();
    local_110 = extraout_RAX;
  }
  (p_spill->value).flag = (reflect_flag)pfVar25;
  if (runtime_writeBarrier._0_4_ == 0) {
    (p_spill->value).typ = value_spill.typ;
    (p_spill->value).ptr = value_spill.ptr;
  }
  else {
    runtime_gcWriteBarrierSI();
    runtime_gcWriteBarrierDX();
                    /* Unresolved local var: reflect.Type t@[???] */
                    /* Unresolved local var: internal/fmtsort.SortedMap * sorted@[???] */
    local_110 = extraout_RAX_00;
  }
  v_01.flag = (fmt_pp *)((ulong)pfVar25 & 0x1f);
  if (v_01.flag < (fmt_pp *)&DAT_00000011) {
    if ((fmt_pp *)&DAT_0000000c < v_01.flag) {
      if ((fmt_pp *)&DAT_0000000e < v_01.flag) {
        if (v_01.flag == (fmt_pp *)&DAT_0000000f) {
          local_1b8 = (fmt_pp *)0x40;
          local_1b0 = (fmt_pp *)CONCAT44(local_1b0._4_4_,verb_spill);
          v._8_4_ = SUB84((double)*(float *)value_spill.ptr,0);
          v._0_8_ = p_spill;
          v._12_4_ = (int)((ulong)(double)*(float *)value_spill.ptr >> 0x20);
          fmt___pp__fmtComplex
                    ((fmt_pp *)(ulong)(uint)verb_spill,(complex128)v,(int)value_spill.ptr,0xf);
          return;
        }
        local_1b8 = (fmt_pp *)0x80;
        local_1b0 = (fmt_pp *)CONCAT44(local_1b0._4_4_,verb_spill);
        v_00._8_4_ = (int)*(undefined8 *)value_spill.ptr;
        v_00._0_8_ = p_spill;
        v_00._12_4_ = (int)((ulong)*(undefined8 *)value_spill.ptr >> 0x20);
        fmt___pp__fmtComplex
                  ((fmt_pp *)(ulong)(uint)verb_spill,(complex128)v_00,(int)value_spill.ptr,
                   (int32)v_01.flag);
        return;
      }
      if (v_01.flag == (fmt_pp *)&DAT_0000000d) {
        local_1b8 = (fmt_pp *)CONCAT44(local_1b8._4_4_,verb_spill);
        fmt___pp__fmtFloat((fmt_pp *)(ulong)(uint)verb_spill,
                           (float64)(double)*(float *)value_spill.ptr,(int)value_spill.ptr,0xd);
        return;
      }
      local_1b8 = (fmt_pp *)CONCAT44(local_1b8._4_4_,verb_spill);
      fmt___pp__fmtFloat((fmt_pp *)(ulong)(uint)verb_spill,*(float64 *)value_spill.ptr,
                         (int)value_spill.ptr,(int32)v_01.flag);
      return;
    }
    iVar31 = (int32)p_spill;
    if ((fmt_pp *)0x1 < v_01.flag) {
      if (v_01.flag <= (fmt_pp *)&DAT_00000006) {
        fmt___pp__fmtInteger
                  ((fmt_pp *)(ulong)(uint)verb_spill,(uint64)value_spill.ptr,SUB81(v_01.flag,0),
                   iVar31);
        return;
      }
      fmt___pp__fmtInteger
                ((fmt_pp *)(ulong)(uint)verb_spill,(uint64)value_spill.ptr,SUB81(v_01.flag,0),iVar31
                );
      return;
    }
    if (v_01.flag == (fmt_pp *)0x0) {
      if (local_110 == (fmt_pp *)0x0) {
        local_e0 = (fmt_pp *)(p_spill->buf).len;
        local_d8 = (fmt_pp *)&((runtime__type *)local_e0)->kind;
        pfVar25 = (fmt_pp *)(p_spill->buf).cap;
        local_78 = (fmt_pp *)(p_spill->buf).array;
        if (pfVar25 < local_d8) {
          old_13.len = (int)local_d8;
          old_13.array = local_78;
          old_13.cap = (int)p_spill;
          local_1b8 = pfVar25;
          local_1b0 = local_d8;
          runtime_growslice((runtime__type *)local_e0,old_13,0x225720);
          pfVar25 = local_198;
          local_78 = local_1a8;
        }
        local_e0 = pfVar25;
        runtime_memmove();
        (p_spill->buf).len = (int)local_d8;
        (p_spill->buf).cap = (int)local_e0;
        if (runtime_writeBarrier._0_4_ == 0) {
          (p_spill->buf).array = (uint8 *)local_78;
          return;
        }
        runtime_gcWriteBarrier();
        return;
      }
      if (verb_spill != 0x76) {
        fmt___pp__badVerb((fmt_pp *)(ulong)(uint)verb_spill,(int32)value_spill.ptr);
        return;
      }
      v_01.flag = (fmt_pp *)(p_spill->buf).len;
      pfVar25 = (fmt_pp *)((long)&((v_01.flag)->buf).array + 5);
      pfVar19 = (fmt_pp *)(p_spill->buf).cap;
      pfVar26 = (fmt_pp *)(p_spill->buf).array;
      if (pfVar19 < pfVar25) {
        old_14.len = (int)pfVar25;
        old_14.array = pfVar26;
        old_14.cap = (int)p_spill;
        local_1b8 = pfVar19;
        local_1b0 = pfVar25;
        local_e0 = v_01.flag;
        local_d8 = pfVar25;
        runtime_growslice((runtime__type *)v_01.flag,old_14,0x225720);
        v_01.flag = local_e0;
        pfVar25 = local_d8;
        pfVar19 = local_198;
        pfVar26 = local_1a8;
      }
      puVar28 = ((v_01.flag)->fmt).intbuf + (long)&pfVar26[-1].fmt.prec;
      puVar28[0] = 0x3c;
      puVar28[1] = 0x6e;
      puVar28[2] = 0x69;
      puVar28[3] = 0x6c;
      ((undefined1 *)((long)&(pfVar26->buf).array + 4))[(long)v_01.flag] = 0x3e;
      (p_spill->buf).len = (int)pfVar25;
      (p_spill->buf).cap = (int)pfVar19;
      if (runtime_writeBarrier._0_4_ == 0) {
        (p_spill->buf).array = (uint8 *)pfVar26;
        return;
      }
      runtime_gcWriteBarrierBX();
      return;
    }
    v_15.ptr = value_spill.ptr;
    v_15.typ = (reflect_rtype *)local_110;
    v_15.flag = (reflect_flag)v_01.flag;
    reflect_Value_Bool(v_15);
    fmt___pp__fmtBool((fmt_pp *)(ulong)(uint)verb_spill,SUB81(value_spill.ptr,0),iVar31);
    return;
  }
  uVar29 = (uint)value_spill.flag;
  pfVar19 = p_spill;
  if ((fmt_pp *)&DAT_00000015 < v_01.flag) {
    if ((fmt_pp *)0x17 < v_01.flag) {
      if (v_01.flag == (fmt_pp *)&DAT_00000018) {
        v_14.ptr = value_spill.ptr;
        v_14.typ = (reflect_rtype *)local_110;
        v_14.flag = 0x18;
        sVar36 = reflect_Value_String(v_14);
        sVar36.str = (uint8 *)sVar36.len;
        local_1b8 = (fmt_pp *)CONCAT44((int)((ulong)local_1b8 >> 0x20),verb_spill);
        sVar36.len = (int)local_1b0;
        fmt___pp__fmtString((fmt_pp *)(ulong)(uint)verb_spill,sVar36,(int32)p_spill);
        return;
      }
      if (v_01.flag == (fmt_pp *)&DAT_00000019) {
        v_01.flag = p_spill;
        if ((p_spill->fmt).fmtFlags.sharpV != false) {
          v_13.ptr = value_spill.ptr;
          v_13.typ = (reflect_rtype *)local_110;
          v_13.flag = 0x19;
          pvVar33 = value_spill.ptr;
          reflect_Value_Type(v_13);
          (*local_1b8[1].value.ptr)();
          local_e0 = (fmt_pp *)(p_spill->buf).len;
          local_d8 = (fmt_pp *)((pfVar25->fmt).intbuf + (long)local_e0 + -0x68);
          pfVar25 = (fmt_pp *)(p_spill->buf).cap;
          local_78 = (fmt_pp *)(p_spill->buf).array;
          if (pfVar25 < local_d8) {
            old_11.len = (int)p_spill;
            old_11.array = local_d8;
            old_11.cap = (int)pfVar25;
            local_1b8 = pfVar25;
            local_1b0 = local_d8;
            runtime_growslice((runtime__type *)&DAT_00225720,old_11,(int)pvVar33);
            pfVar25 = local_198;
            local_78 = local_1a8;
          }
          local_e0 = pfVar25;
          runtime_memmove();
          (p_spill->buf).len = (int)local_d8;
          (p_spill->buf).cap = (int)local_e0;
          if (runtime_writeBarrier._0_4_ == 0) {
            (p_spill->buf).array = (uint8 *)local_78;
            local_110 = (fmt_pp *)depth_spill;
            pfVar25 = (fmt_pp *)value_spill.flag;
          }
          else {
            runtime_gcWriteBarrier();
            local_110 = (fmt_pp *)depth_spill;
            pfVar25 = (fmt_pp *)value_spill.flag;
          }
        }
        pfVar26 = (fmt_pp *)((v_01.flag)->buf).len;
        pfVar19 = (fmt_pp *)((long)&(pfVar26->buf).array + 1);
        pfVar21 = (fmt_pp *)((v_01.flag)->buf).cap;
        pfVar22 = (fmt_pp *)((v_01.flag)->buf).array;
        if (pfVar21 < pfVar19) {
          old_12.len = (int)pfVar26;
          old_12.array = value_spill.ptr;
          old_12.cap = (int)v_01.flag;
          local_1b8 = pfVar21;
          local_1b0 = pfVar19;
          runtime_growslice((runtime__type *)&DAT_00225720,old_12,(int)pfVar25);
          (p_spill->buf).cap = (int)local_198;
          pfVar26 = local_1a0;
          if (runtime_writeBarrier._0_4_ == 0) {
            (p_spill->buf).array = (uint8 *)local_1a8;
            local_110 = (fmt_pp *)depth_spill;
            pfVar25 = (fmt_pp *)value_spill.flag;
            v_01.flag = p_spill;
            pfVar22 = local_1a8;
          }
          else {
            v_01.flag = p_spill;
            runtime_gcWriteBarrier();
            local_110 = (fmt_pp *)depth_spill;
            pfVar25 = (fmt_pp *)value_spill.flag;
            pfVar22 = extraout_RAX_09;
          }
        }
        pfVar19 = (fmt_pp *)((long)&(pfVar26->buf).array + 1);
        ((v_01.flag)->buf).len = (int)pfVar19;
        (pfVar26->fmt).intbuf[(long)&pfVar22[-1].fmt.prec] = 0x7b;
        pfVar26 = (fmt_pp *)0x0;
        while (v_17.ptr = value_spill.ptr, v_17.typ = (reflect_rtype *)local_110,
              v_17.flag = (reflect_flag)pfVar26, local_110 = pfVar26, reflect_Value_NumField(v_17),
              (long)local_110 < (long)local_1b8) {
          pfVar21 = local_110;
          pfVar26 = value_spill.ptr;
          v_01.flag = p_spill;
          if (0 < (long)local_110) {
            if ((p_spill->fmt).fmtFlags.sharpV == false) {
              pfVar22 = (fmt_pp *)(p_spill->buf).len;
              pfVar21 = (fmt_pp *)((long)&(pfVar22->buf).array + 1);
              uVar3 = (p_spill->buf).array;
              uVar4 = (p_spill->buf).len;
              old_16.len = uVar4;
              old_16.array = (void *)uVar3;
              pfVar25 = (fmt_pp *)(p_spill->buf).cap;
              pfVar26 = (fmt_pp *)(p_spill->buf).array;
              if (pfVar25 < pfVar21) {
                old_16.cap = (int)p_spill;
                local_1b8 = pfVar25;
                local_1b0 = pfVar21;
                runtime_growslice((runtime__type *)&DAT_00225720,old_16,(int)pfVar25);
                (p_spill->buf).cap = (int)local_198;
                pfVar22 = local_1a0;
                if (runtime_writeBarrier._0_4_ == 0) {
                  (p_spill->buf).array = (uint8 *)local_1a8;
                  pfVar26 = local_1a8;
                }
                else {
                  runtime_gcWriteBarrier();
                  pfVar26 = extraout_RAX_11;
                }
              }
              ((v_01.flag)->buf).len = (int)((long)&(pfVar22->buf).array + 1);
              (pfVar22->fmt).intbuf[(long)&pfVar26[-1].fmt.prec] = 0x20;
              pfVar21 = local_110;
            }
            else {
              pfVar21 = (fmt_pp *)(p_spill->buf).len;
              v_01.flag = (fmt_pp *)((long)&(pfVar21->buf).array + 2);
              pfVar26 = (fmt_pp *)(p_spill->buf).cap;
              pfVar25 = (fmt_pp *)(p_spill->buf).array;
              if (pfVar26 < v_01.flag) {
                old_15.len = (int)pfVar21;
                old_15.array = pfVar26;
                old_15.cap = (int)p_spill;
                local_1b8 = pfVar26;
                local_1b0 = v_01.flag;
                local_e0 = v_01.flag;
                local_d8 = pfVar21;
                runtime_growslice((runtime__type *)&DAT_00225720,old_15,(int)pfVar25);
                pfVar21 = local_d8;
                v_01.flag = local_e0;
                pfVar26 = local_198;
                pfVar25 = local_1a8;
              }
              puVar28 = (pfVar21->fmt).intbuf + (long)&pfVar25[-1].fmt.prec;
              puVar28[0] = 0x2c;
              puVar28[1] = 0x20;
              (p_spill->buf).len = (int)v_01.flag;
              (p_spill->buf).cap = (int)pfVar26;
              if (runtime_writeBarrier._0_4_ == 0) {
                (p_spill->buf).array = (uint8 *)pfVar25;
                pfVar21 = local_110;
                v_01.flag = p_spill;
              }
              else {
                v_01.flag = p_spill;
                runtime_gcWriteBarrierSI();
                pfVar21 = extraout_RAX_10;
              }
            }
          }
          iVar31 = (int32)pfVar25;
          if ((((v_01.flag)->fmt).fmtFlags.plusV != false) ||
             (((v_01.flag)->fmt).fmtFlags.sharpV != false)) {
            v_18.ptr = pfVar26;
            v_18.typ = value_spill.typ;
            v_18.flag = (reflect_flag)value_spill.ptr;
                    /* Unresolved local var: string name@[???] */
            reflect_Value_Type(v_18);
            (**(code **)&(local_1b8->fmt).fmtFlags.sharpV)();
            local_70 = value_spill.flag;
            iVar31 = (int32)&local_1b8;
            FUN_0051a4ec(local_68);
            pfVar21 = local_110;
            v_01.flag = p_spill;
            if (local_68[0] != 0) {
              local_130 = local_68[0];
              local_d8 = (fmt_pp *)(p_spill->buf).len;
              pfVar25 = (fmt_pp *)((local_d8->fmt).intbuf + local_68[0] + -0x68);
              v_01.flag = (fmt_pp *)(p_spill->buf).cap;
              pfVar19 = (fmt_pp *)(p_spill->buf).array;
              local_e0 = pfVar25;
              if (v_01.flag < pfVar25) {
                local_a0 = local_70;
                old_17.len = local_70;
                old_17.array = local_d8;
                old_17.cap = (int)v_01.flag;
                local_1b8 = v_01.flag;
                local_1b0 = pfVar25;
                runtime_growslice((runtime__type *)&DAT_00225720,old_17,(int)pfVar25);
                v_01.flag = local_198;
                pfVar19 = local_1a8;
              }
              iVar31 = (int32)pfVar25;
              local_e8 = v_01.flag;
              local_78 = pfVar19;
              runtime_memmove();
              pfVar26 = local_78;
              (p_spill->buf).len = (int)local_e0;
              (p_spill->buf).cap = (int)local_e8;
              pfVar25 = (fmt_pp *)((local_d8->fmt).intbuf + local_130 + -0x67);
              pfVar21 = local_e8;
              if (runtime_writeBarrier._0_4_ == 0) {
                (p_spill->buf).array = (uint8 *)local_78;
                pfVar22 = local_e0;
                v_01.flag = p_spill;
              }
              else {
                v_01.flag = p_spill;
                runtime_gcWriteBarrierBX();
                pfVar22 = extraout_RAX_12;
                pfVar25 = extraout_RDX_02;
              }
              if (pfVar21 < pfVar25) {
                iVar31 = 0x225720;
                old_18.len = (int)pfVar21;
                old_18.array = pfVar26;
                old_18.cap = (int)v_01.flag;
                local_1b8 = pfVar21;
                local_1b0 = pfVar25;
                runtime_growslice((runtime__type *)pfVar22,old_18,0x225720);
                (p_spill->buf).cap = (int)local_198;
                pfVar22 = local_1a0;
                if (runtime_writeBarrier._0_4_ == 0) {
                  (p_spill->buf).array = (uint8 *)local_1a8;
                  pfVar26 = local_1a8;
                  v_01.flag = p_spill;
                }
                else {
                  v_01.flag = p_spill;
                  runtime_gcWriteBarrier();
                  pfVar26 = extraout_RAX_13;
                }
              }
              ((v_01.flag)->buf).len = (int)((long)&(pfVar22->buf).array + 1);
              (pfVar22->fmt).intbuf[(long)&pfVar26[-1].fmt.prec] = 0x3a;
              pfVar21 = local_110;
            }
          }
          v_16.ptr = (void *)value_spill.flag;
          v_16.typ = (reflect_rtype *)pfVar21;
          v_16.flag = (reflect_flag)value_spill.typ;
          local_1b8 = pfVar21;
          fmt_getField(v_16,(int)v_01.flag);
          local_1b8 = local_1a0;
          local_1b0 = (fmt_pp *)CONCAT44((int)((ulong)local_1b0 >> 0x20),verb_spill);
          local_1a8 = (fmt_pp *)(depth_spill + 1);
          value_03.ptr = (void *)depth_spill;
          value_03.typ = (reflect_rtype *)p_spill;
          value_03.flag = (reflect_flag)v_01.flag;
          fmt___pp__printValue((fmt_pp *)(ulong)(uint)verb_spill,value_03,iVar31,(int)pfVar19);
          pfVar26 = (fmt_pp *)((long)&(local_110->buf).array + 1);
          pfVar25 = (fmt_pp *)value_spill.flag;
        }
        pfVar25 = (fmt_pp *)(p_spill->buf).len;
        local_1b0 = (fmt_pp *)((long)&(pfVar25->buf).array + 1);
        uVar5 = (p_spill->buf).array;
        uVar6 = (p_spill->buf).len;
        old_19.len = uVar6;
        old_19.array = (void *)uVar5;
        local_1b8 = (fmt_pp *)(p_spill->buf).cap;
        pfVar19 = (fmt_pp *)(p_spill->buf).array;
        if (local_1b8 < local_1b0) {
          old_19.cap = (int)v_01.flag;
          runtime_growslice((runtime__type *)&DAT_00225720,old_19,(int)local_1b8);
          (p_spill->buf).cap = (int)local_198;
          if (runtime_writeBarrier._0_4_ == 0) {
            (p_spill->buf).array = (uint8 *)local_1a8;
            pfVar25 = local_1a0;
            pfVar19 = local_1a8;
          }
          else {
            runtime_gcWriteBarrier();
            pfVar25 = local_1a0;
            pfVar19 = extraout_RAX_14;
          }
        }
        (p_spill->buf).len = (int)((long)&(pfVar25->buf).array + 1);
        (pfVar25->fmt).intbuf[(long)&pfVar19[-1].fmt.prec] = 0x7d;
        return;
      }
      if (v_01.flag != (fmt_pp *)&DAT_0000001a) {
        v_24.ptr = v_01.flag;
        v_24.typ = value_spill.ptr;
        v_24.flag = (reflect_flag)p_spill;
        fmt___pp__unknownType(local_110,v_24);
        return;
      }
LAB_0056e654:
      local_1b0 = (fmt_pp *)CONCAT44(local_1b0._4_4_,verb_spill);
      value_02.ptr = v_01.flag;
      value_02.typ = value_spill.ptr;
      value_02.flag = (reflect_flag)p_spill;
      fmt___pp__fmtPointer((fmt_pp *)(ulong)(uint)verb_spill,value_02,(int32)pfVar25);
      return;
    }
    if (v_01.flag == (fmt_pp *)&DAT_00000016) {
      if (local_110 == (fmt_pp *)0x0) {
        auVar17._8_8_ = 0;
        auVar17._0_8_ = value_spill.ptr;
        v_11.flag = 0x16;
        v_11.typ = (reflect_rtype *)SUB168(auVar17 << 0x40,0);
        v_11.ptr = (void *)SUB168(auVar17 << 0x40,8);
        uVar20 = reflect_Value_Pointer(v_11);
        v_01.flag = (fmt_pp *)
                    (CONCAT71((int7)(uVar20 >> 8),local_1b8 != (fmt_pp *)0x0) & 0xffffffff);
        local_110 = (fmt_pp *)depth_spill;
        pfVar25 = (fmt_pp *)value_spill.flag;
      }
      else {
        v_01.flag = (fmt_pp *)0x0;
      }
      if ((char)v_01.flag != '\0') {
        v_12.ptr = value_spill.ptr;
        v_12.typ = (reflect_rtype *)local_110;
        v_12.flag = (reflect_flag)v_01.flag;
        reflect_Value_Elem(v_12);
        uVar27 = (ulong)local_1a8 & 0x1f;
        v_01.flag = local_1b0;
        if (uVar27 < 0x16) {
          if ((uVar27 == 0x11) || (pfVar25 = (fmt_pp *)value_spill.flag, uVar27 == 0x15)) {
code_r0x0056e32b:
            v_01.flag = (fmt_pp *)(p_spill->buf).len;
            pfVar25 = (fmt_pp *)((long)&((v_01.flag)->buf).array + 1);
            pfVar19 = (fmt_pp *)(p_spill->buf).cap;
            pfVar26 = local_1b0;
            pfVar21 = local_1a8;
            pfVar22 = (fmt_pp *)(p_spill->buf).array;
            if (pfVar19 < pfVar25) {
              local_80 = local_1b0;
              local_88 = local_1b8;
              local_f0 = local_1a8;
              old_10.len = (int)local_1b0;
              old_10.array = local_1a8;
              old_10.cap = (int)pfVar25;
              local_1b8 = pfVar19;
              local_1b0 = pfVar25;
              runtime_growslice((runtime__type *)&DAT_00225720,old_10,(int)v_01.flag);
              (p_spill->buf).cap = (int)local_198;
              if (runtime_writeBarrier._0_4_ == 0) {
                (p_spill->buf).array = (uint8 *)local_1a8;
                pfVar26 = local_80;
                pfVar21 = local_f0;
                v_01.flag = local_1a0;
                pfVar22 = local_1a8;
              }
              else {
                runtime_gcWriteBarrier();
                pfVar26 = local_80;
                pfVar21 = local_f0;
                v_01.flag = local_1a0;
                pfVar22 = extraout_RAX_08;
              }
            }
            puVar39 = (undefined1 *)((long)&((v_01.flag)->buf).array + 1);
            (p_spill->buf).len = (int)puVar39;
            ((v_01.flag)->fmt).intbuf[(long)&pfVar22[-1].fmt.prec] = 0x26;
            local_1b0 = (fmt_pp *)CONCAT44(local_1b0._4_4_,verb_spill);
            local_1a8 = (fmt_pp *)(depth_spill + 1);
            value_01.ptr = pfVar26;
            value_01.typ = (reflect_rtype *)pfVar21;
            value_01.flag = (reflect_flag)puVar39;
            local_1b8 = pfVar21;
            fmt___pp__printValue(local_1a8,value_01,(int32)v_01.flag,(int)pfVar22);
            return;
          }
        }
        else if ((uVar27 == 0x17) || (pfVar25 = (fmt_pp *)value_spill.flag, uVar27 == 0x19))
        goto code_r0x0056e32b;
      }
      goto LAB_0056e654;
    }
  }
  else {
    if ((fmt_pp *)0x13 < v_01.flag) {
      if (v_01.flag == (fmt_pp *)&DAT_00000014) {
        v_02.ptr = value_spill.ptr;
        v_02.typ = (reflect_rtype *)local_110;
        v_02.flag = 0x14;
        rVar37 = reflect_Value_Elem(v_02);
        v_01.flag = local_1b8;
        v_03.ptr = rVar37.ptr;
        if (local_1a8 != (fmt_pp *)0x0) {
          local_1b8 = local_1a8;
          local_1b0 = (fmt_pp *)CONCAT44(local_1b0._4_4_,verb_spill);
          local_1a8 = (fmt_pp *)(depth_spill + 1);
          value_00.ptr = v_01.flag;
          value_00.typ = (reflect_rtype *)p_spill;
          value_00.flag = (reflect_flag)pfVar19;
          fmt___pp__printValue(local_1a8,value_00,(int32)pfVar25,depth);
          return;
        }
        if ((p_spill->fmt).fmtFlags.sharpV == false) {
          v_01.flag = (fmt_pp *)(p_spill->buf).len;
          pfVar25 = (fmt_pp *)((long)&((v_01.flag)->buf).array + 5);
          pfVar19 = (fmt_pp *)(p_spill->buf).cap;
          pfVar26 = (fmt_pp *)(p_spill->buf).array;
          if (pfVar19 < pfVar25) {
            old_03.len = (int)pfVar25;
            old_03.array = pfVar26;
            old_03.cap = (int)p_spill;
            local_1b8 = pfVar19;
            local_1b0 = pfVar25;
            local_e0 = pfVar25;
            local_d8 = v_01.flag;
            runtime_growslice((runtime__type *)v_01.flag,old_03,0x225720);
            v_01.flag = local_d8;
            pfVar25 = local_e0;
            pfVar19 = local_198;
            pfVar26 = local_1a8;
          }
          puVar28 = ((v_01.flag)->fmt).intbuf + (long)&pfVar26[-1].fmt.prec;
          puVar28[0] = 0x3c;
          puVar28[1] = 0x6e;
          puVar28[2] = 0x69;
          puVar28[3] = 0x6c;
          ((undefined1 *)((long)&(pfVar26->buf).array + 4))[(long)v_01.flag] = 0x3e;
          (p_spill->buf).len = (int)pfVar25;
          (p_spill->buf).cap = (int)pfVar19;
          if (runtime_writeBarrier._0_4_ == 0) {
            (p_spill->buf).array = (uint8 *)pfVar26;
            return;
          }
          runtime_gcWriteBarrierBX();
          return;
        }
        v_03.typ = (reflect_rtype *)value_spill.flag;
        v_03.flag = (reflect_flag)local_1b8;
        reflect_Value_Type(v_03);
        (*local_1b8[1].value.ptr)();
        local_138 = value_spill.flag;
        local_d8 = (fmt_pp *)(p_spill->buf).len;
        local_e0 = (fmt_pp *)((local_d8->fmt).intbuf + (value_spill.flag - 0x68));
        local_e8 = (fmt_pp *)(p_spill->buf).cap;
        local_78 = (fmt_pp *)(p_spill->buf).array;
        if (local_e8 < local_e0) {
          old_04.len = (int)p_spill;
          old_04.array = local_e0;
          old_04.cap = (int)local_e8;
          local_1b8 = local_e8;
          local_1b0 = local_e0;
          runtime_growslice((runtime__type *)&DAT_00225720,old_04,(int)value_spill.ptr);
          local_e8 = local_198;
          local_78 = local_1a8;
        }
        runtime_memmove();
        v_01.flag = local_78;
        (p_spill->buf).len = (int)local_e0;
        (p_spill->buf).cap = (int)local_e8;
        pfVar25 = (fmt_pp *)((local_d8->fmt).intbuf + (local_138 - 99));
        pfVar19 = local_e8;
        pfVar26 = p_spill;
        if (runtime_writeBarrier._0_4_ == 0) {
          (p_spill->buf).array = (uint8 *)local_78;
          pfVar21 = local_e0;
        }
        else {
          runtime_gcWriteBarrierBX();
          pfVar21 = extraout_RAX_04;
          pfVar25 = extraout_RDX_00;
        }
        if (pfVar19 < pfVar25) {
          old_05.len = (int)pfVar19;
          old_05.array = v_01.flag;
          old_05.cap = (int)pfVar26;
          local_1b8 = pfVar19;
          local_1b0 = pfVar25;
          local_d8 = pfVar25;
          runtime_growslice((runtime__type *)pfVar21,old_05,0x225720);
          pfVar21 = local_e0;
          pfVar19 = local_198;
          pfVar25 = local_d8;
          v_01.flag = local_1a8;
          pfVar26 = p_spill;
        }
        puVar28 = (pfVar21->fmt).intbuf + (long)&v_01.flag[-1].fmt.prec;
        puVar28[0] = 0x28;
        puVar28[1] = 0x6e;
        puVar28[2] = 0x69;
        puVar28[3] = 0x6c;
        ((undefined1 *)((long)&((v_01.flag)->buf).array + 4))[(long)pfVar21] = 0x29;
        (pfVar26->buf).len = (int)pfVar25;
        (pfVar26->buf).cap = (int)pfVar19;
        if (runtime_writeBarrier._0_4_ == 0) {
          (pfVar26->buf).array = (uint8 *)v_01.flag;
          return;
        }
        runtime_gcWriteBarrierBX();
        return;
      }
      if ((p_spill->fmt).fmtFlags.sharpV == false) {
        pfVar26 = (fmt_pp *)(p_spill->buf).len;
        v_01.flag = (fmt_pp *)((long)&(pfVar26->buf).array + 4);
        pfVar22 = (fmt_pp *)(p_spill->buf).cap;
        value_spill.flag = (reflect_flag)local_110;
        pfVar21 = (fmt_pp *)(p_spill->buf).array;
        if (pfVar22 < v_01.flag) {
          old.len = (int)pfVar26;
          old.array = value_spill.ptr;
          old.cap = (int)p_spill;
          local_1b8 = pfVar22;
          local_1b0 = v_01.flag;
          local_e0 = v_01.flag;
          local_d8 = pfVar26;
          runtime_growslice((runtime__type *)&DAT_00225720,old,(int)pfVar25);
                    /* Unresolved local var: int i@[???] */
          value_spill.flag = depth_spill;
          pfVar26 = local_d8;
          v_01.flag = local_e0;
          pfVar22 = local_198;
          pfVar21 = local_1a8;
        }
        puVar28 = (pfVar26->fmt).intbuf + (long)&pfVar21[-1].fmt.prec;
        puVar28[0] = 0x6d;
        puVar28[1] = 0x61;
        puVar28[2] = 0x70;
        puVar28[3] = 0x5b;
        (p_spill->buf).len = (int)v_01.flag;
        (p_spill->buf).cap = (int)pfVar22;
        if (runtime_writeBarrier._0_4_ == 0) {
          (p_spill->buf).array = (uint8 *)pfVar21;
          pfVar21 = pfVar26;
        }
        else {
          runtime_gcWriteBarrierCX();
          value_spill.flag = (reflect_flag)extraout_RAX_01;
        }
      }
      else {
        v_01.ptr = value_spill.ptr;
        v_01.typ = (reflect_rtype *)local_110;
        pvVar33 = value_spill.ptr;
        reflect_Value_Type(v_01);
        (*local_1b8[1].value.ptr)();
        local_d8 = (fmt_pp *)(p_spill->buf).len;
        local_e0 = (fmt_pp *)((pfVar25->fmt).intbuf + (long)&local_d8[-1].fmt.prec);
        local_e8 = (fmt_pp *)(p_spill->buf).cap;
        local_78 = (fmt_pp *)(p_spill->buf).array;
        local_140 = pfVar25;
        if (local_e8 < local_e0) {
          old_00.len = (int)p_spill;
          old_00.array = local_e0;
          old_00.cap = (int)local_e8;
          local_1b8 = local_e8;
          local_1b0 = local_e0;
          runtime_growslice((runtime__type *)&DAT_00225720,old_00,(int)pvVar33);
          local_e8 = local_198;
          local_78 = local_1a8;
        }
        runtime_memmove();
        (p_spill->buf).len = (int)local_e0;
        (p_spill->buf).cap = (int)local_e8;
        pfVar25 = local_e8;
        if (runtime_writeBarrier._0_4_ == 0) {
          (p_spill->buf).array = (uint8 *)local_78;
          v_01.flag = local_e0;
          pfVar26 = local_78;
        }
        else {
          runtime_gcWriteBarrierDX();
          v_01.flag = extraout_RAX_02;
          pfVar26 = extraout_RDX;
        }
                    /* Unresolved local var: void * ptr@[???] */
        if ((uVar29 >> 9 & 1) == 0) {
          pvVar33 = value_spill.ptr;
          if ((uVar29 >> 7 & 1) != 0) {
            pvVar33 = *(void **)value_spill.ptr;
          }
          if (pvVar33 == (void *)0x0) {
            pfVar21 = (fmt_pp *)((local_d8->fmt).intbuf + (long)((long)&local_140[-1].fmt.prec + 5))
            ;
            if (pfVar25 < pfVar21) {
              old_02.len = (int)pfVar25;
              old_02.array = pfVar21;
              old_02.cap = (int)pfVar19;
              local_1b8 = pfVar25;
              local_1b0 = pfVar21;
              local_d8 = pfVar21;
              runtime_growslice((runtime__type *)v_01.flag,old_02,0x225720);
              v_01.flag = local_e0;
              pfVar25 = local_198;
              pfVar26 = local_1a8;
              pfVar21 = local_d8;
              pfVar19 = p_spill;
            }
            puVar28 = ((v_01.flag)->fmt).intbuf + (long)&pfVar26[-1].fmt.prec;
            puVar28[0] = 0x28;
            puVar28[1] = 0x6e;
            puVar28[2] = 0x69;
            puVar28[3] = 0x6c;
            ((undefined1 *)((long)&(pfVar26->buf).array + 4))[(long)v_01.flag] = 0x29;
            (pfVar19->buf).len = (int)pfVar21;
            (pfVar19->buf).cap = (int)pfVar25;
            if (runtime_writeBarrier._0_4_ == 0) {
              (pfVar19->buf).array = (uint8 *)pfVar26;
            }
            else {
              runtime_gcWriteBarrierDX();
            }
            return;
          }
        }
        pfVar21 = (fmt_pp *)((local_d8->fmt).intbuf + (long)((long)&local_140[-1].fmt.prec + 1));
        if (pfVar25 < pfVar21) {
          old_01.len = (int)pfVar25;
          old_01.array = &DAT_00225720;
          old_01.cap = (int)pfVar19;
          local_1b8 = pfVar25;
          local_1b0 = pfVar21;
          runtime_growslice((runtime__type *)v_01.flag,old_01,(int)value_spill.ptr);
          (p_spill->buf).cap = (int)local_198;
          v_01.flag = local_1a0;
          if (runtime_writeBarrier._0_4_ == 0) {
            (p_spill->buf).array = (uint8 *)local_1a8;
            pfVar26 = local_1a8;
            pfVar19 = p_spill;
          }
          else {
            pfVar19 = p_spill;
            runtime_gcWriteBarrier();
            pfVar26 = extraout_RAX_03;
          }
        }
        pfVar21 = (fmt_pp *)((long)&((v_01.flag)->buf).array + 1);
        (pfVar19->buf).len = (int)pfVar21;
        ((v_01.flag)->fmt).intbuf[(long)&pfVar26[-1].fmt.prec] = 0x7b;
      }
      mapValue.ptr = value_spill.ptr;
      mapValue.typ = (reflect_rtype *)value_spill.flag;
      mapValue.flag = (reflect_flag)pfVar21;
      internal_fmtsort_Sort(mapValue);
      pfVar25 = (fmt_pp *)(local_1b8->buf).len;
      puVar28 = (local_1b8->buf).array;
      if (0 < (long)pfVar25) {
        local_c8 = local_1b8;
        puVar24 = (uint8 *)0x0;
        local_d8 = pfVar25;
        while( true ) {
          pfVar25 = *(fmt_pp **)(puVar28 + 8);
          v_01.flag = *(fmt_pp **)(puVar28 + 0x10);
          pfVar19 = *(fmt_pp **)puVar28;
          pfVar26 = p_spill;
          local_118 = puVar24;
          local_90 = puVar28;
          if (0 < (long)puVar24) {
            local_f0 = v_01.flag;
            local_88 = pfVar19;
            local_80 = pfVar25;
            if ((p_spill->fmt).fmtFlags.sharpV == false) {
              pfVar19 = (fmt_pp *)(p_spill->buf).len;
              v_01.flag = (fmt_pp *)((long)&(pfVar19->buf).array + 1);
              local_1b8 = (fmt_pp *)(p_spill->buf).cap;
              pfVar21 = (fmt_pp *)(p_spill->buf).array;
              if (local_1b8 < v_01.flag) {
                old_27.len = (int)local_d8;
                old_27.array = puVar24;
                old_27.cap = (int)p_spill;
                local_1b0 = v_01.flag;
                runtime_growslice((runtime__type *)&DAT_00225720,old_27,(int)pfVar25);
                (p_spill->buf).cap = (int)local_198;
                pfVar19 = local_1a0;
                if (runtime_writeBarrier._0_4_ == 0) {
                  (p_spill->buf).array = (uint8 *)local_1a8;
                  pfVar21 = local_1a8;
                }
                else {
                  runtime_gcWriteBarrier();
                  pfVar21 = extraout_RAX_21;
                }
              }
              (pfVar26->buf).len = (int)((long)&(pfVar19->buf).array + 1);
              (pfVar19->fmt).intbuf[(long)&pfVar21[-1].fmt.prec] = 0x20;
              puVar24 = local_118;
              pfVar25 = local_80;
              v_01.flag = local_f0;
            }
            else {
              pfVar19 = (fmt_pp *)(p_spill->buf).len;
              v_01.flag = (fmt_pp *)((long)&(pfVar19->buf).array + 2);
              pfVar21 = (fmt_pp *)(p_spill->buf).cap;
              pfVar22 = (fmt_pp *)(p_spill->buf).array;
              if (pfVar21 < v_01.flag) {
                old_26.len = (int)local_d8;
                old_26.array = puVar24;
                old_26.cap = (int)p_spill;
                local_1b8 = pfVar21;
                local_1b0 = v_01.flag;
                local_e8 = v_01.flag;
                local_e0 = pfVar19;
                runtime_growslice((runtime__type *)&DAT_00225720,old_26,(int)pfVar25);
                pfVar19 = local_e0;
                v_01.flag = local_e8;
                pfVar21 = local_198;
                pfVar22 = local_1a8;
              }
              puVar24 = local_118;
              puVar28 = (pfVar19->fmt).intbuf + (long)&pfVar22[-1].fmt.prec;
              puVar28[0] = 0x2c;
              puVar28[1] = 0x20;
              (p_spill->buf).len = (int)v_01.flag;
              (p_spill->buf).cap = (int)pfVar21;
              pfVar25 = local_80;
              v_01.flag = local_f0;
              if (runtime_writeBarrier._0_4_ == 0) {
                (p_spill->buf).array = (uint8 *)pfVar22;
              }
              else {
                runtime_gcWriteBarrierDX();
              }
            }
          }
          local_1b0 = (fmt_pp *)CONCAT44(local_1b0._4_4_,verb_spill);
          local_1a8 = (fmt_pp *)(depth_spill + 1);
          value_06.ptr = (void *)depth_spill;
          value_06.typ = (reflect_rtype *)puVar24;
          value_06.flag = (reflect_flag)pfVar26;
          local_1b8 = v_01.flag;
          local_e0 = local_1a8;
          fmt___pp__printValue
                    ((fmt_pp *)(ulong)(uint)verb_spill,value_06,(int32)pfVar25,(int)v_01.flag);
          pfVar19 = (fmt_pp *)(p_spill->buf).len;
          pfVar25 = (fmt_pp *)((long)&(pfVar19->buf).array + 1);
          uVar15 = (p_spill->buf).array;
          uVar16 = (p_spill->buf).len;
          old_28.len = uVar16;
          old_28.array = (void *)uVar15;
          pfVar21 = (fmt_pp *)(p_spill->buf).cap;
          pfVar22 = p_spill;
          pfVar30 = (fmt_pp *)(p_spill->buf).array;
          if (pfVar21 < pfVar25) {
            old_28.cap = (int)pfVar26;
            local_1b8 = pfVar21;
            local_1b0 = pfVar25;
            runtime_growslice((runtime__type *)&DAT_00225720,old_28,(int)pfVar21);
            (p_spill->buf).cap = (int)local_198;
            pfVar19 = local_1a0;
            if (runtime_writeBarrier._0_4_ == 0) {
              (p_spill->buf).array = (uint8 *)local_1a8;
              pfVar30 = local_1a8;
            }
            else {
              runtime_gcWriteBarrier();
              pfVar30 = extraout_RAX_22;
            }
          }
          (pfVar22->buf).len = (int)((long)&(pfVar19->buf).array + 1);
          (pfVar19->fmt).intbuf[(long)&pfVar30[-1].fmt.prec] = 0x3a;
          prVar2 = (local_c8->arg)._type;
          if ((local_c8->arg).data <= local_118) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          pfVar19 = (fmt_pp *)(&prVar2->ptrdata)[(long)local_118 * 3];
          local_1b8 = *(fmt_pp **)(&prVar2->hash + (long)local_118 * 6);
          local_1b0 = (fmt_pp *)CONCAT44(local_1b0._4_4_,verb_spill);
          local_1a8 = local_e0;
          value_07.ptr._0_4_ = verb_spill;
          value_07.typ = (reflect_rtype *)prVar2;
          value_07.ptr._4_4_ = 0;
          value_07.flag = (reflect_flag)pfVar19;
          fmt___pp__printValue(pfVar22,value_07,(int32)local_118,(int)v_01.flag);
          puVar24 = local_118 + 1;
          if ((long)local_d8 <= (long)puVar24) break;
          puVar28 = local_90 + 0x18;
        }
      }
LAB_0056f515:
      if ((p_spill->fmt).fmtFlags.sharpV != false) {
        pfVar25 = (fmt_pp *)(p_spill->buf).len;
        local_1b0 = (fmt_pp *)((long)&(pfVar25->buf).array + 1);
        uVar11 = (p_spill->buf).array;
        uVar12 = (p_spill->buf).len;
        old_24.len = uVar12;
        old_24.array = (void *)uVar11;
        local_1b8 = (fmt_pp *)(p_spill->buf).cap;
        v_01.flag = (fmt_pp *)(p_spill->buf).array;
        if (local_1b8 < local_1b0) {
          old_24.cap = (int)pfVar19;
          runtime_growslice((runtime__type *)&DAT_00225720,old_24,(int)local_1b8);
          (p_spill->buf).cap = (int)local_198;
          if (runtime_writeBarrier._0_4_ == 0) {
            (p_spill->buf).array = (uint8 *)local_1a8;
            pfVar25 = local_1a0;
            v_01.flag = local_1a8;
          }
          else {
            runtime_gcWriteBarrier();
            pfVar25 = local_1a0;
            v_01.flag = extraout_RAX_19;
          }
        }
        (p_spill->buf).len = (int)((long)&(pfVar25->buf).array + 1);
        (pfVar25->fmt).intbuf[(long)&v_01.flag[-1].fmt.prec] = 0x7d;
        return;
      }
      pfVar25 = (fmt_pp *)(p_spill->buf).len;
      local_1b0 = (fmt_pp *)((long)&(pfVar25->buf).array + 1);
      uVar13 = (p_spill->buf).array;
      uVar14 = (p_spill->buf).len;
      old_25.len = uVar14;
      old_25.array = (void *)uVar13;
      local_1b8 = (fmt_pp *)(p_spill->buf).cap;
      v_01.flag = (fmt_pp *)(p_spill->buf).array;
      if (local_1b8 < local_1b0) {
        old_25.cap = (int)pfVar19;
        runtime_growslice((runtime__type *)&DAT_00225720,old_25,(int)local_1b8);
        (p_spill->buf).cap = (int)local_198;
        if (runtime_writeBarrier._0_4_ == 0) {
          (p_spill->buf).array = (uint8 *)local_1a8;
          pfVar25 = local_1a0;
          v_01.flag = local_1a8;
        }
        else {
          runtime_gcWriteBarrier();
          pfVar25 = local_1a0;
          v_01.flag = extraout_RAX_20;
        }
      }
      (p_spill->buf).len = (int)((long)&(pfVar25->buf).array + 1);
      (pfVar25->fmt).intbuf[(long)&v_01.flag[-1].fmt.prec] = 0x5d;
      return;
    }
    if (v_01.flag != (fmt_pp *)&DAT_00000011) goto LAB_0056e654;
  }
  puVar28 = (uint8 *)(ulong)(uint)verb_spill;
  local_108 = local_110;
  pfVar26 = pfVar25;
  local_f0 = v_01.flag;
  if (verb_spill < 0x72) {
    if ((verb_spill != 0x58) && (verb_spill != 0x71)) goto LAB_0056df33;
  }
  else if ((verb_spill != 0x73) && (verb_spill != 0x78)) goto LAB_0056df33;
  v_04.ptr = value_spill.ptr;
  v_04.typ = (reflect_rtype *)local_110;
  v_04.flag = (reflect_flag)v_01.flag;
  v_01.flag = pfVar25;
  puVar39 = value_spill.ptr;
  rVar35 = reflect_Value_Type(v_04);
  v_05.ptr = rVar35.data;
  local_158 = local_1b8;
  local_d0 = local_1b0;
  (**(code **)&(local_1b8->fmt).fmtFlags)();
  (**(code **)(puVar39 + 0x98))();
  local_108 = (fmt_pp *)depth_spill;
  pfVar26 = (fmt_pp *)value_spill.flag;
  if (puVar39 == &DAT_00000008) {
                    /* Unresolved local var: []uint8 bytes@[???] */
    if (local_f0 == (fmt_pp *)0x17) {
      local_1c0 = (fmt_pp *)value_spill.flag;
      v_09.ptr = v_05.ptr;
      v_09.typ = (reflect_rtype *)value_spill.flag;
      v_09.flag = (reflect_flag)pfVar25;
      reflect_Value_Bytes(v_09);
      local_98 = local_1b8;
      local_100 = local_1b0;
      local_f8 = local_1a8;
      pfVar25 = value_spill.ptr;
    }
    else if ((uVar29 >> 8 & 1) == 0) {
      v_05.typ = (reflect_rtype *)value_spill.flag;
      v_05.flag = (reflect_flag)value_spill.typ;
      reflect_Value_Len(v_05);
      local_100 = local_1b8;
      uVar38 = SUB84(local_1b8,0);
      uVar40 = (undefined4)((ulong)local_1b8 >> 0x20);
      local_1c0 = local_1b8;
      runtime_makeslice((runtime__type *)local_1b8,(int)v_05.ptr,0x225720);
      pfVar25 = (fmt_pp *)CONCAT44(uVar40,uVar38);
      local_80 = local_1b8;
      v_01.flag = (fmt_pp *)0x0;
                    /* Unresolved local var: int i@[???] */
      while (local_98 = local_80, local_f8 = local_100, (long)v_01.flag < (long)local_100) {
        local_1c0 = (fmt_pp *)value_spill.flag;
        v_23.ptr = (void *)value_spill.flag;
        v_23.typ = value_spill.typ;
        v_23.flag = (reflect_flag)v_01.flag;
        local_1b8 = v_01.flag;
        local_120 = v_01.flag;
        pfVar25 = value_spill.ptr;
        rVar37 = reflect_Value_Index(v_23,(int)pfVar19);
        iVar34.data = rVar37.ptr;
                    /* Unresolved local var: reflect.Kind k@[???]
                       Unresolved local var: void * p@[???] */
        local_f0 = (fmt_pp *)((ulong)local_1a0 & 0x1f);
        if ((fmt_pp *)&DAT_00000009 < local_f0) {
          if (local_f0 == (fmt_pp *)&DAT_0000000a) {
            uVar18 = (uint8)*(undefined4 *)&(local_1a8->buf).array;
          }
          else if (local_f0 == (fmt_pp *)0xb) {
            uVar18 = (uint8)(local_1a8->buf).array;
          }
          else {
            if (local_f0 != (fmt_pp *)&DAT_0000000c) goto LAB_0056f4cd;
            uVar18 = (uint8)(local_1a8->buf).array;
          }
        }
        else if (local_f0 == (fmt_pp *)&DAT_00000007) {
          uVar18 = (uint8)(local_1a8->buf).array;
        }
        else if (local_f0 == (fmt_pp *)&DAT_00000008) {
          uVar18 = *(uint8 *)&(local_1a8->buf).array;
        }
        else {
          if (local_f0 != (fmt_pp *)&DAT_00000009) {
LAB_0056f4cd:
            runtime_newobject((runtime__type *)&DAT_0024d5e0);
            (pfVar25->buf).len = 0x12;
            (pfVar25->buf).array = &DAT_0029acb6;
            (pfVar25->buf).cap = (int)local_f0;
            iVar34._type = (runtime__type *)pfVar25;
            runtime_gopanic(iVar34);
            goto LAB_0056f515;
          }
          uVar18 = (uint8)*(undefined2 *)&(local_1a8->buf).array;
        }
        (local_120->fmt).intbuf[(long)&local_80[-1].fmt.prec] = uVar18;
        v_01.flag = (fmt_pp *)((long)&(local_120->buf).array + 1);
      }
    }
    else {
      v_06.ptr = v_05.ptr;
      v_06.typ = (reflect_rtype *)value_spill.flag;
      v_06.flag = (reflect_flag)value_spill.typ;
      reflect_Value_Len(v_06);
      local_1b0 = local_1b8;
      local_1b8 = (fmt_pp *)0x0;
      v_07.ptr = v_05.ptr;
      v_07.typ = (reflect_rtype *)local_1b0;
      v_07.flag = value_spill.flag;
      rVar37 = reflect_Value_Slice(v_07,(int)pfVar19,(int)v_01.flag);
      v_08.ptr = rVar37.ptr;
      uVar38 = SUB84(local_1a0,0);
      uVar40 = (undefined4)((ulong)local_1a0 >> 0x20);
      local_1c0 = local_198;
      v_08.typ = (reflect_rtype *)local_1a8;
      v_08.flag = (reflect_flag)local_1a0;
      reflect_Value_Bytes(v_08);
      local_98 = local_1b8;
      local_100 = local_1b0;
      local_f8 = local_1a8;
      pfVar25 = (fmt_pp *)CONCAT44(uVar40,uVar38);
    }
    pcVar1 = local_158[1].value.ptr;
    v_01.flag = local_d0;
    local_1a8 = pfVar25;
    (*pcVar1)();
    local_1b8 = local_f8;
    local_1b0 = (fmt_pp *)CONCAT44(local_1b0._4_4_,verb_spill);
    local_1a0 = local_1c0;
    v_25.len = (int)local_1c0;
    v_25.array = (uint8 *)pcVar1;
    v_25.cap = (int)pfVar19;
    typeString.len = in_R9;
    typeString.str = puVar28;
    fmt___pp__fmtBytes(local_1a8,v_25,(int32)v_01.flag,typeString);
    return;
  }
LAB_0056df33:
  if ((p_spill->fmt).fmtFlags.sharpV == false) {
    v_01.flag = (fmt_pp *)(p_spill->buf).len;
    pfVar25 = (fmt_pp *)((long)&((v_01.flag)->buf).array + 1);
    pfVar19 = (fmt_pp *)(p_spill->buf).cap;
    pfVar21 = p_spill;
    pfVar22 = (fmt_pp *)(p_spill->buf).array;
    if (pfVar19 < pfVar25) {
      old_06.len = (int)v_01.flag;
      old_06.array = value_spill.ptr;
      old_06.cap = (int)p_spill;
      local_1b8 = pfVar19;
      local_1b0 = pfVar25;
      runtime_growslice((runtime__type *)&DAT_00225720,old_06,(int)pfVar26);
      (p_spill->buf).cap = (int)local_198;
      v_01.flag = local_1a0;
      if (runtime_writeBarrier._0_4_ == 0) {
        (p_spill->buf).array = (uint8 *)local_1a8;
        local_108 = (fmt_pp *)depth_spill;
        pfVar26 = (fmt_pp *)value_spill.flag;
        pfVar22 = local_1a8;
      }
      else {
        runtime_gcWriteBarrier();
        local_108 = (fmt_pp *)depth_spill;
        pfVar26 = (fmt_pp *)value_spill.flag;
        pfVar22 = extraout_RAX_05;
      }
    }
    uVar27 = (ulong)(uint)verb_spill;
    (pfVar21->buf).len = (int)((long)&((v_01.flag)->buf).array + 1);
    ((v_01.flag)->fmt).intbuf[(long)&pfVar22[-1].fmt.prec] = 0x5b;
    pfVar25 = (fmt_pp *)0x0;
    while (v_22.ptr = value_spill.ptr, v_22.typ = (reflect_rtype *)local_108,
          v_22.flag = (reflect_flag)pfVar25, local_108 = pfVar25, reflect_Value_Len(v_22),
          (long)local_108 < (long)local_1b8) {
      if (0 < (long)local_108) {
        v_01.flag = (fmt_pp *)(p_spill->buf).len;
        pfVar25 = (fmt_pp *)((long)&((v_01.flag)->buf).array + 1);
        pfVar26 = (fmt_pp *)(p_spill->buf).array;
        local_1b8 = (fmt_pp *)(p_spill->buf).cap;
        pfVar19 = p_spill;
        pfVar21 = local_1b8;
        if (local_1b8 < pfVar25) {
          old_22.len = (int)p_spill;
          old_22.array = pfVar25;
          old_22.cap = (int)local_1b8;
          local_1b0 = pfVar25;
          runtime_growslice((runtime__type *)&DAT_00225720,old_22,(int)pfVar26);
          (p_spill->buf).cap = (int)local_198;
          v_01.flag = local_1a0;
          if (runtime_writeBarrier._0_4_ == 0) {
            (p_spill->buf).array = (uint8 *)local_1a8;
            pfVar26 = local_1a8;
            pfVar21 = p_spill;
          }
          else {
            runtime_gcWriteBarrier();
            pfVar26 = extraout_RAX_17;
            pfVar21 = pfVar19;
          }
        }
        (pfVar19->buf).len = (int)((long)&((v_01.flag)->buf).array + 1);
        ((v_01.flag)->fmt).intbuf[(long)&pfVar26[-1].fmt.prec] = 0x20;
      }
      iVar31 = (int32)pfVar26;
      v_21.ptr = (void *)value_spill.flag;
      v_21.typ = (reflect_rtype *)local_108;
      v_21.flag = (reflect_flag)value_spill.typ;
      local_1b8 = local_108;
      reflect_Value_Index(v_21,(int)pfVar21);
      local_1b8 = local_1a0;
      local_1b0 = (fmt_pp *)CONCAT44((int)((ulong)local_1b0 >> 0x20),verb_spill);
      local_1a8 = (fmt_pp *)(depth_spill + 1);
      value_05.ptr = (void *)depth_spill;
      value_05.typ = (reflect_rtype *)p_spill;
      value_05.flag = (reflect_flag)pfVar21;
      fmt___pp__printValue((fmt_pp *)(ulong)(uint)verb_spill,value_05,iVar31,uVar27);
      pfVar25 = (fmt_pp *)((long)&(local_108->buf).array + 1);
      pfVar26 = (fmt_pp *)value_spill.flag;
    }
    pfVar25 = (fmt_pp *)(p_spill->buf).len;
    local_1b0 = (fmt_pp *)((long)&(pfVar25->buf).array + 1);
    uVar9 = (p_spill->buf).array;
    uVar10 = (p_spill->buf).len;
    old_23.len = uVar10;
    old_23.array = (void *)uVar9;
    local_1b8 = (fmt_pp *)(p_spill->buf).cap;
    v_01.flag = (fmt_pp *)(p_spill->buf).array;
    if (local_1b8 < local_1b0) {
      old_23.cap = (int)pfVar21;
      runtime_growslice((runtime__type *)&DAT_00225720,old_23,(int)local_1b8);
      (p_spill->buf).cap = (int)local_198;
      if (runtime_writeBarrier._0_4_ == 0) {
        (p_spill->buf).array = (uint8 *)local_1a8;
        pfVar25 = local_1a0;
        v_01.flag = local_1a8;
      }
      else {
        runtime_gcWriteBarrier();
        pfVar25 = local_1a0;
        v_01.flag = extraout_RAX_18;
      }
    }
    (p_spill->buf).len = (int)((long)&(pfVar25->buf).array + 1);
    (pfVar25->fmt).intbuf[(long)&v_01.flag[-1].fmt.prec] = 0x5d;
    return;
  }
  v_10.ptr = value_spill.ptr;
  v_10.typ = (reflect_rtype *)local_108;
  v_10.flag = (reflect_flag)local_f0;
  pvVar33 = value_spill.ptr;
  reflect_Value_Type(v_10);
  (*local_1b8[1].value.ptr)();
  local_d8 = (fmt_pp *)(p_spill->buf).len;
  local_e0 = (fmt_pp *)((local_d8->fmt).intbuf + (long)&pfVar26[-1].fmt.prec);
  local_e8 = (fmt_pp *)(p_spill->buf).cap;
  local_78 = (fmt_pp *)(p_spill->buf).array;
  local_150[0] = pfVar26;
  if (local_e8 < local_e0) {
    old_07.len = (int)p_spill;
    old_07.array = local_e0;
    old_07.cap = (int)local_e8;
    local_1b8 = local_e8;
    local_1b0 = local_e0;
    runtime_growslice((runtime__type *)&DAT_00225720,old_07,(int)pvVar33);
    local_e8 = local_198;
    local_78 = local_1a8;
  }
  runtime_memmove();
  (p_spill->buf).len = (int)local_e0;
  (p_spill->buf).cap = (int)local_e8;
  pfVar25 = local_e8;
  v_01.flag = p_spill;
  if (runtime_writeBarrier._0_4_ == 0) {
    (p_spill->buf).array = (uint8 *)local_78;
    pfVar19 = local_e0;
    pfVar26 = local_78;
  }
  else {
    runtime_gcWriteBarrierDX();
    pfVar19 = extraout_RAX_06;
    pfVar26 = extraout_RDX_01;
  }
  if ((local_f0 == (fmt_pp *)0x17) && (*(long *)value_spill.ptr == 0)) {
    pfVar21 = (fmt_pp *)((local_d8->fmt).intbuf + (long)((long)&local_150[0][-1].fmt.prec + 5));
    if (pfVar25 < pfVar21) {
      old_08.len = (int)pfVar25;
      old_08.array = pfVar21;
      old_08.cap = (int)v_01.flag;
      local_1b8 = pfVar25;
      local_1b0 = pfVar21;
      local_d8 = pfVar21;
      runtime_growslice((runtime__type *)pfVar19,old_08,0x225720);
      pfVar19 = local_e0;
      pfVar25 = local_198;
      pfVar26 = local_1a8;
      pfVar21 = local_d8;
      v_01.flag = p_spill;
    }
    puVar28 = (pfVar19->fmt).intbuf + (long)&pfVar26[-1].fmt.prec;
    puVar28[0] = 0x28;
    puVar28[1] = 0x6e;
    puVar28[2] = 0x69;
    puVar28[3] = 0x6c;
    ((undefined1 *)((long)&(pfVar26->buf).array + 4))[(long)pfVar19] = 0x29;
    ((v_01.flag)->buf).len = (int)pfVar21;
    ((v_01.flag)->buf).cap = (int)pfVar25;
    if (runtime_writeBarrier._0_4_ == 0) {
      ((v_01.flag)->buf).array = (uint8 *)pfVar26;
    }
    else {
      runtime_gcWriteBarrierDX();
    }
    return;
  }
  pfVar21 = (fmt_pp *)((local_d8->fmt).intbuf + (long)((long)&local_150[0][-1].fmt.prec + 1));
  pfVar22 = local_150[0];
  if (pfVar25 < pfVar21) {
    old_09.len = (int)pfVar25;
    old_09.array = &DAT_00225720;
    old_09.cap = (int)v_01.flag;
    local_1b8 = pfVar25;
    local_1b0 = pfVar21;
    runtime_growslice((runtime__type *)pfVar19,old_09,(int)pfVar21);
    (p_spill->buf).cap = (int)local_198;
    pfVar19 = local_1a0;
    if (runtime_writeBarrier._0_4_ == 0) {
      (p_spill->buf).array = (uint8 *)local_1a8;
      pfVar26 = local_1a8;
      v_01.flag = p_spill;
      pfVar22 = local_150[0];
    }
    else {
      v_01.flag = p_spill;
      runtime_gcWriteBarrier();
      pfVar26 = extraout_RAX_07;
      pfVar22 = local_150[0];
    }
  }
  ((v_01.flag)->buf).len = (int)((long)&(pfVar19->buf).array + 1);
  (pfVar19->fmt).intbuf[(long)&pfVar26[-1].fmt.prec] = 0x7b;
  local_128 = 0;
  while (v_20.ptr = value_spill.ptr, v_20.typ = (reflect_rtype *)local_128,
        v_20.flag = (reflect_flag)value_spill.typ, reflect_Value_Len(v_20),
        local_128 < (long)local_1b8) {
    lVar23 = local_128;
    if (0 < local_128) {
      v_01.flag = (fmt_pp *)(p_spill->buf).len;
      pfVar25 = (fmt_pp *)((long)&((v_01.flag)->buf).array + 2);
      pfVar19 = (fmt_pp *)(p_spill->buf).cap;
      pfVar21 = (fmt_pp *)(p_spill->buf).array;
      if (pfVar19 < pfVar25) {
        old_20.len = (int)v_01.flag;
        old_20.array = pfVar19;
        old_20.cap = (int)p_spill;
        local_1b8 = pfVar19;
        local_1b0 = pfVar25;
        local_e0 = pfVar25;
        local_d8 = v_01.flag;
        runtime_growslice((runtime__type *)&DAT_00225720,old_20,(int)pfVar21);
        v_01.flag = local_d8;
        pfVar25 = local_e0;
        pfVar19 = local_198;
        pfVar21 = local_1a8;
      }
      puVar28 = ((v_01.flag)->fmt).intbuf + (long)&pfVar21[-1].fmt.prec;
      puVar28[0] = 0x2c;
      puVar28[1] = 0x20;
      (p_spill->buf).len = (int)pfVar25;
      (p_spill->buf).cap = (int)pfVar19;
      if (runtime_writeBarrier._0_4_ == 0) {
        (p_spill->buf).array = (uint8 *)pfVar21;
        lVar23 = local_128;
        v_01.flag = p_spill;
      }
      else {
        v_01.flag = p_spill;
        runtime_gcWriteBarrierSI();
        lVar23 = extraout_RAX_15;
      }
    }
    v_19.ptr = (void *)value_spill.flag;
    v_19.typ = (reflect_rtype *)lVar23;
    v_19.flag = (reflect_flag)value_spill.typ;
    local_1b8 = (fmt_pp *)lVar23;
    reflect_Value_Index(v_19,(int)v_01.flag);
    local_1b8 = local_1a0;
    local_1b0 = (fmt_pp *)CONCAT44((int)((ulong)local_1b0 >> 0x20),verb_spill);
    local_1a8 = (fmt_pp *)(depth_spill + 1);
    value_04.ptr = (void *)depth_spill;
    value_04.typ = (reflect_rtype *)p_spill;
    value_04.flag = (reflect_flag)v_01.flag;
    fmt___pp__printValue((fmt_pp *)(ulong)(uint)verb_spill,value_04,(int32)pfVar21,(int)pfVar22);
    local_128 = local_128 + 1;
  }
  pfVar25 = (fmt_pp *)(p_spill->buf).len;
  local_1b0 = (fmt_pp *)((long)&(pfVar25->buf).array + 1);
  uVar7 = (p_spill->buf).array;
  uVar8 = (p_spill->buf).len;
  old_21.len = uVar8;
  old_21.array = (void *)uVar7;
  local_1b8 = (fmt_pp *)(p_spill->buf).cap;
  pfVar19 = (fmt_pp *)(p_spill->buf).array;
  if (local_1b8 < local_1b0) {
    old_21.cap = (int)v_01.flag;
    runtime_growslice((runtime__type *)&DAT_00225720,old_21,(int)local_1b8);
    (p_spill->buf).cap = (int)local_198;
    if (runtime_writeBarrier._0_4_ == 0) {
      (p_spill->buf).array = (uint8 *)local_1a8;
      pfVar25 = local_1a0;
      pfVar19 = local_1a8;
    }
    else {
      runtime_gcWriteBarrier();
      pfVar25 = local_1a0;
      pfVar19 = extraout_RAX_16;
    }
  }
  (p_spill->buf).len = (int)((long)&(pfVar25->buf).array + 1);
  (pfVar25->fmt).intbuf[(long)&pfVar19[-1].fmt.prec] = 0x7d;
  return;
}

