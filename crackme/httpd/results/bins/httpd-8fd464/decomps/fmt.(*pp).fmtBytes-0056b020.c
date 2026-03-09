
/* WARNING: Unknown calling convention */

void fmt___pp__fmtBytes(fmt_pp *p,__uint8 v,int32 verb,string typeString)

{
  byte bVar1;
  bool isSigned;
  undefined1 *puVar2;
  undefined1 *puVar3;
  runtime__type *extraout_RAX;
  uint8 *extraout_RAX_00;
  runtime__type *prVar4;
  fmt_pp *pfVar5;
  uint8 *extraout_RAX_01;
  uint8 *extraout_RAX_02;
  uint8 *extraout_RAX_03;
  fmt_pp *pfVar6;
  fmt_pp *extraout_RAX_04;
  uint8 *extraout_RAX_05;
  int iVar7;
  runtime__type *cap;
  runtime__type *prVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint verb_00;
  uint8 *extraout_RDX;
  long lVar11;
  undefined4 in_register_00000034;
  undefined8 uVar12;
  fmt_pp *pfVar13;
  reflect_flag rVar14;
  runtime__type *prVar15;
  uint8 *puVar16;
  int in_R10;
  long in_FS_OFFSET;
  string sVar17;
  __uint8 b;
  __uint8 b_00;
  string digits;
  string digits_00;
  __uint8 val;
  string s;
  string s_00;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  reflect_Value value;
  __uint8 b_01;
  runtime_slice old_03;
  runtime_slice old_04;
  runtime_slice old_05;
  runtime_slice old_06;
  string digits_01;
  fmt_pp *p_spill;
  __uint8 v_spill;
  int32 verb_spill;
  string typeString_spill;
  void *local_98;
  uint8 *local_88;
  runtime__type *local_80;
  runtime__type *local_78;
  undefined1 local_30 [16];
  uint8 *local_20;
  undefined *local_18;
  
  uVar12 = CONCAT44(in_register_00000034,verb);
  puVar16 = (uint8 *)typeString.len;
  prVar15 = (runtime__type *)typeString.str;
  rVar14 = v.cap;
  iVar7 = v.len;
  sVar17.str = v.array;
  while (local_30 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (verb_spill < 0x72) {
    if (verb_spill == 0x58) {
      b.len = uVar12;
      b.array = (uint8 *)rVar14;
      b.cap = (int)prVar15;
      digits.len = in_R10;
      digits.str = puVar16;
      sVar17.len = iVar7;
      fmt___fmt__fmtSbx((fmt_fmt *)&DAT_00299bda,sVar17,b,digits);
      return;
    }
    if (verb_spill == 100) {
LAB_0056b152:
      if ((p_spill->fmt).fmtFlags.sharpV == false) {
        prVar8 = (runtime__type *)(p_spill->buf).len;
        pfVar13 = (fmt_pp *)((long)&prVar8->size + 1);
        sVar17.str = (p_spill->buf).array;
        pfVar5 = (fmt_pp *)(p_spill->buf).cap;
        pfVar6 = p_spill;
        if (pfVar5 < pfVar13) {
          old_02.len = (int)p_spill;
          old_02.array = pfVar13;
          old_02.cap = (int)pfVar5;
          runtime_growslice((runtime__type *)&DAT_00225720,old_02,(int)sVar17.str);
          (p_spill->buf).cap = (int)local_78;
          prVar8 = local_80;
          if (runtime_writeBarrier._0_4_ == 0) {
            (p_spill->buf).array = local_88;
            sVar17.str = local_88;
            pfVar5 = p_spill;
          }
          else {
            runtime_gcWriteBarrier();
            sVar17.str = extraout_RAX_01;
            pfVar5 = pfVar6;
          }
        }
        (pfVar6->buf).len = (int)((long)&prVar8->size + 1);
        *(uint8 *)((long)&prVar8->size + (long)sVar17.str) = 0x5b;
        for (lVar11 = 0; lVar11 < v_spill.len; lVar11 = lVar11 + 1) {
          isSigned = (bool)v_spill.array[lVar11];
          pfVar5 = (fmt_pp *)(ulong)isSigned;
          if (0 < lVar11) {
            prVar15 = (runtime__type *)(pfVar6->buf).len;
            sVar17.str = (pfVar6->buf).array;
            if ((undefined1 *)(pfVar6->buf).cap < (undefined1 *)((long)&prVar15->size + 1U)) {
              old_03.len = (int)pfVar6;
              old_03.array = (void *)v_spill.len;
              old_03.cap._0_1_ = isSigned;
              old_03.cap._1_7_ = 0;
              runtime_growslice((runtime__type *)&DAT_00225720,old_03,(int)v_spill.array);
              (p_spill->buf).cap = (int)local_78;
              prVar15 = local_80;
              if (runtime_writeBarrier._0_4_ == 0) {
                (p_spill->buf).array = local_88;
                pfVar6 = p_spill;
                sVar17.str = local_88;
              }
              else {
                runtime_gcWriteBarrier();
                pfVar6 = p_spill;
                sVar17.str = extraout_RAX_02;
              }
            }
            puVar16 = (uint8 *)((long)&prVar15->size + 1);
            (pfVar6->buf).len = (int)puVar16;
            *(uint8 *)((long)&prVar15->size + (long)sVar17.str) = 0x20;
          }
          local_88 = (uint8 *)0x11;
          digits_01.len = (int)puVar16;
          digits_01.str = (uint8 *)prVar15;
          fmt___fmt__fmtInteger
                    ((fmt_fmt *)(ulong)(uint)verb_spill,v_spill.len,(int)pfVar6,isSigned,
                     (int32)v_spill.array,digits_01);
          pfVar6 = p_spill;
        }
        prVar15 = (runtime__type *)(pfVar6->buf).len;
        puVar16 = (pfVar6->buf).array;
        puVar2 = (undefined1 *)(pfVar6->buf).cap;
        if (puVar2 < (undefined1 *)((long)&prVar15->size + 1U)) {
          old_04.len = (int)&DAT_00225720;
          old_04.array = puVar16;
          old_04.cap = (int)pfVar5;
          runtime_growslice(prVar15,old_04,(int)puVar2);
          (p_spill->buf).cap = (int)local_78;
          prVar15 = local_80;
          if (runtime_writeBarrier._0_4_ == 0) {
            (p_spill->buf).array = local_88;
            pfVar6 = p_spill;
            puVar16 = local_88;
          }
          else {
            pfVar6 = p_spill;
            runtime_gcWriteBarrier();
            puVar16 = extraout_RAX_03;
          }
        }
        (pfVar6->buf).len = (int)((long)&prVar15->size + 1);
        *(uint8 *)((long)&prVar15->size + (long)puVar16) = 0x5d;
        return;
      }
      prVar8 = (runtime__type *)(p_spill->buf).len;
      prVar15 = (runtime__type *)((long)&prVar8->size + typeString_spill.len);
      cap = (runtime__type *)(p_spill->buf).cap;
      local_20 = (p_spill->buf).array;
      if (cap < prVar15) {
        old.len = (int)&DAT_00225720;
        old.array = prVar15;
        old.cap = (int)local_20;
        runtime_growslice(prVar8,old,(int)cap);
        cap = local_78;
        local_20 = local_88;
      }
      runtime_memmove();
      (p_spill->buf).len = (int)prVar15;
      (p_spill->buf).cap = (int)cap;
      pfVar13 = p_spill;
      if (runtime_writeBarrier._0_4_ == 0) {
        (p_spill->buf).array = local_20;
        prVar4 = prVar15;
        puVar16 = local_20;
      }
      else {
        runtime_gcWriteBarrierDX();
        prVar4 = extraout_RAX;
        puVar16 = extraout_RDX;
      }
      if (v_spill.array != (uint8 *)0x0) {
        prVar15 = (runtime__type *)((long)&prVar8->size + typeString_spill.len + 1);
        if (cap < prVar15) {
          old_00.len = (int)cap;
          old_00.array = &DAT_00225720;
          old_00.cap = (int)pfVar13;
          runtime_growslice(prVar4,old_00,(int)prVar15);
          (p_spill->buf).cap = (int)local_78;
          prVar4 = local_80;
          if (runtime_writeBarrier._0_4_ == 0) {
            (p_spill->buf).array = local_88;
            puVar16 = local_88;
            pfVar13 = p_spill;
          }
          else {
            pfVar13 = p_spill;
            runtime_gcWriteBarrier();
            puVar16 = extraout_RAX_00;
          }
        }
        (pfVar13->buf).len = (int)((long)&prVar4->size + 1);
        *(uint8 *)((long)&prVar4->size + (long)puVar16) = 0x7b;
        for (pfVar5 = (fmt_pp *)0x0; (long)pfVar5 < v_spill.len;
            pfVar5 = (fmt_pp *)((long)&(pfVar5->buf).array + 1)) {
          pfVar6 = pfVar5;
          iVar7 = v_spill.len;
          if (0 < (long)pfVar5) {
            lVar11 = (pfVar13->buf).len;
            prVar15 = (runtime__type *)(pfVar13->buf).cap;
            puVar16 = (pfVar13->buf).array;
            if (prVar15 < (runtime__type *)(lVar11 + 2U)) {
              old_05.len = v_spill.len;
              old_05.array = v_spill.array;
              old_05.cap = (int)pfVar13;
              runtime_growslice((runtime__type *)&DAT_00225720,old_05,lVar11);
              pfVar13 = p_spill;
              prVar15 = local_78;
              puVar16 = local_88;
            }
            (puVar16 + lVar11)[0] = 0x2c;
            (puVar16 + lVar11)[1] = 0x20;
            (pfVar13->buf).len = (int)(lVar11 + 2U);
            (pfVar13->buf).cap = (int)prVar15;
            if (runtime_writeBarrier._0_4_ == 0) {
              (pfVar13->buf).array = puVar16;
            }
            else {
              runtime_gcWriteBarrierSI();
              pfVar6 = extraout_RAX_04;
            }
          }
          fmt___pp__fmt0x64(pfVar6,(uint64)v_spill.array,SUB81(iVar7,0));
          pfVar13 = p_spill;
        }
        prVar15 = (runtime__type *)(pfVar13->buf).len;
        puVar2 = (undefined1 *)((long)&prVar15->size + 1);
        puVar3 = (undefined1 *)(pfVar13->buf).cap;
        puVar16 = (pfVar13->buf).array;
        if (puVar3 < puVar2) {
          old_06.len = (int)puVar2;
          old_06.array = puVar3;
          old_06.cap = (int)pfVar13;
          runtime_growslice(prVar15,old_06,0x225720);
          (p_spill->buf).cap = (int)local_78;
          prVar15 = local_80;
          if (runtime_writeBarrier._0_4_ == 0) {
            (p_spill->buf).array = local_88;
            puVar16 = local_88;
            pfVar13 = p_spill;
          }
          else {
            runtime_gcWriteBarrier();
            puVar16 = extraout_RAX_05;
            pfVar13 = p_spill;
          }
        }
        (pfVar13->buf).len = (int)((long)&prVar15->size + 1);
        *(uint8 *)((long)&prVar15->size + (long)puVar16) = 0x7d;
        return;
      }
      prVar8 = (runtime__type *)((long)&prVar8->size + typeString_spill.len + 5);
      if (cap < prVar8) {
        old_01.len = (int)cap;
        old_01.array = prVar8;
        old_01.cap = (int)pfVar13;
        runtime_growslice(prVar4,old_01,0x225720);
        prVar4 = prVar15;
        cap = local_78;
        puVar16 = local_88;
        pfVar13 = p_spill;
      }
      sVar17.str = (uint8 *)((long)&prVar4->size + (long)puVar16);
      sVar17.str[0] = 0x28;
      sVar17.str[1] = 0x6e;
      sVar17.str[2] = 0x69;
      sVar17.str[3] = 0x6c;
      *(uint8 *)((long)&prVar4->size + (long)(puVar16 + 4)) = 0x29;
      (pfVar13->buf).len = (int)prVar8;
      (pfVar13->buf).cap = (int)cap;
      if (runtime_writeBarrier._0_4_ == 0) {
        (pfVar13->buf).array = puVar16;
      }
      else {
        runtime_gcWriteBarrierDX();
      }
      return;
    }
    if (verb_spill == 0x71) {
      sVar17 = runtime_slicebytetostring((runtime_tmpBuf *)p_spill,sVar17.str,v_spill.len);
      s.str = (uint8 *)sVar17.len;
      s.len = (int)local_98;
      fmt___fmt__fmtQ(&p_spill->fmt,s);
      return;
    }
  }
  else {
    if (verb_spill == 0x73) {
      b_01.len = iVar7;
      b_01.array = sVar17.str;
      b_01.cap = rVar14;
      fmt___fmt__fmtBs((fmt_fmt *)v_spill.cap,b_01);
      return;
    }
    if (verb_spill == 0x76) goto LAB_0056b152;
    if (verb_spill == 0x78) {
      b_00.len = uVar12;
      b_00.array = (uint8 *)rVar14;
      b_00.cap = (int)prVar15;
      digits_00.len = in_R10;
      digits_00.str = puVar16;
      s_00.len = iVar7;
      s_00.str = sVar17.str;
      fmt___fmt__fmtSbx((fmt_fmt *)&DAT_00299beb,s_00,b_00,digits_00);
      return;
    }
  }
  val.len = (int)sVar17.str;
  val.array = (uint8 *)v_spill.cap;
  val.cap = iVar7;
  runtime_convTslice(val);
  if (reflect_dummy.b == false) {
    puVar9 = &DAT_002221a0;
  }
  else {
    puVar9 = &DAT_002221a0;
    reflect_dummy.x._type = (runtime__type *)&DAT_002221a0;
    if (runtime_writeBarrier._0_4_ == 0) {
      reflect_dummy.x.data = local_98;
    }
    else {
      rVar14 = 0x79f9d0;
      runtime_gcWriteBarrier();
    }
  }
                    /* Unresolved local var: reflect.rtype * t@[???]
                       Unresolved local var: reflect.flag f@[???] */
  if (puVar9 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    verb_00 = 0;
  }
  else {
    bVar1 = puVar9[0x17];
    sVar17.str = (uint8 *)(ulong)(uint)bVar1;
    verb_00 = bVar1 & 0x1f;
    puVar10 = puVar9;
    if ((bVar1 & 0x20) == 0) {
      verb_00 = verb_00 | 0x80;
    }
  }
  value.ptr = puVar10;
  value.typ = (reflect_rtype *)sVar17.str;
  value.flag = rVar14;
  local_18 = puVar9;
  fmt___pp__printValue((fmt_pp *)(ulong)(uint)verb_spill,value,verb_00,(int)prVar15);
  return;
}

