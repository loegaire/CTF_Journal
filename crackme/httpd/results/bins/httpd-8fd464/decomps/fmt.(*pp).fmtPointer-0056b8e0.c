
/* WARNING: Unknown calling convention */

void fmt___pp__fmtPointer(fmt_pp *p,reflect_Value value,int32 verb)

{
  fmt_pp *pfVar1;
  undefined1 *puVar2;
  uint8 *puVar3;
  uint64 v;
  undefined1 *puVar4;
  ulong uVar5;
  uint8 *extraout_RAX;
  fmt_pp *extraout_RAX_00;
  fmt_pp *extraout_RAX_01;
  fmt_pp *p_00;
  uint8 *extraout_RAX_02;
  runtime__type *prVar6;
  fmt_pp *pfVar7;
  fmt_pp *pfVar8;
  reflect_flag extraout_RDX;
  reflect_flag extraout_RDX_00;
  uint8 *puVar9;
  int32 verb_00;
  fmt_pp *pfVar12;
  long in_FS_OFFSET;
  string s;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  reflect_Value v_00;
  runtime_slice rVar13;
  reflect_Value v_01;
  fmt_pp *p_spill;
  reflect_Value value_spill;
  int32 verb_spill;
  fmt_pp *local_68;
  uint8 *local_58;
  runtime__type *local_50;
  fmt_pp *local_48;
  fmt_pp *pfVar10;
  reflect_flag rVar11;
  
  pfVar1 = local_68;
  rVar11 = value.flag;
  v_00.ptr = value.typ;
                    /* Unresolved local var: uintptr u@[???] */
  while (verb_00 = (int32)rVar11,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar5 = value_spill.flag & 0x1f;
  if (((1 < uVar5 - 0x12) && (2 < uVar5 - 0x15)) && (uVar5 != 0x1a)) {
    fmt___pp__badVerb((fmt_pp *)(ulong)(uint)verb_spill,(int32)value.typ);
    return;
  }
  v_00.typ = value_spill.typ;
  v_00.flag = value_spill.flag;
  reflect_Value_Pointer(v_00);
  if (verb_spill < 0x65) {
    if (((verb_spill == 0x58) || (verb_spill == 0x62)) || (verb_spill == 100)) goto LAB_0056bd77;
  }
  else if (verb_spill < 0x71) {
    if (verb_spill == 0x6f) {
LAB_0056bd77:
      fmt___pp__fmtInteger(local_68,(uint64)v_00.ptr,SUB41(verb_spill,0),verb_00);
      return;
    }
    if (verb_spill == 0x70) {
      fmt___pp__fmt0x64(local_68,(uint64)v_00.ptr,SUB81(p_spill,0));
      return;
    }
  }
  else {
    if (verb_spill == 0x76) {
      if ((p_spill->fmt).fmtFlags.sharpV != false) {
        prVar6 = (runtime__type *)(p_spill->buf).len;
        pfVar10 = (fmt_pp *)((long)&prVar6->size + 1);
        puVar9 = (p_spill->buf).array;
        pfVar8 = (fmt_pp *)(p_spill->buf).cap;
        pfVar7 = p_spill;
        if (pfVar8 < pfVar10) {
          rVar13.len = (int)p_spill;
          rVar13.array = pfVar10;
          rVar13.cap = (int)pfVar8;
          rVar13 = runtime_growslice((runtime__type *)&DAT_00225720,rVar13,(int)puVar9);
          pfVar10 = (fmt_pp *)rVar13.len;
          (p_spill->buf).cap = (int)local_48;
          prVar6 = local_50;
          local_68 = pfVar8;
          if (runtime_writeBarrier._0_4_ == 0) {
            (p_spill->buf).array = local_58;
            puVar9 = local_58;
          }
          else {
            runtime_gcWriteBarrier();
            puVar9 = extraout_RAX;
          }
        }
        (pfVar7->buf).len = (int)((long)&prVar6->size + 1);
        *(uint8 *)((long)&prVar6->size + (long)puVar9) = 0x28;
        v_01.ptr = pfVar10;
        v_01.typ = (reflect_rtype *)value_spill.flag;
        v_01.flag = (reflect_flag)pfVar7;
        reflect_Value_Type(v_01);
        (*local_68[1].value.ptr)();
        v = (p_spill->buf).len;
        pfVar10 = (fmt_pp *)(v + value_spill.flag);
        pfVar8 = (fmt_pp *)(p_spill->buf).cap;
        puVar9 = (p_spill->buf).array;
        if (pfVar8 < pfVar10) {
          old.len = (int)p_spill;
          old.array = pfVar10;
          old.cap = (int)pfVar8;
          runtime_growslice((runtime__type *)&DAT_00225720,old,(int)value_spill.ptr);
          pfVar8 = local_48;
          puVar9 = local_58;
        }
        runtime_memmove();
        (p_spill->buf).len = (int)pfVar10;
        (p_spill->buf).cap = (int)pfVar8;
        pfVar7 = (fmt_pp *)(v + value_spill.flag + 2);
        pfVar12 = p_spill;
        if (runtime_writeBarrier._0_4_ == 0) {
          (p_spill->buf).array = puVar9;
          p_00 = pfVar10;
          rVar11 = value_spill.flag;
        }
        else {
          runtime_gcWriteBarrierR8();
          p_00 = extraout_RAX_00;
          rVar11 = extraout_RDX;
        }
        if (pfVar8 < pfVar7) {
          old_00.len = (int)pfVar8;
          old_00.array = (void *)v;
          old_00.cap = (int)pfVar12;
          runtime_growslice((runtime__type *)p_00,old_00,(int)pfVar7);
          p_00 = pfVar10;
          pfVar8 = local_48;
          rVar11 = value_spill.flag;
          pfVar12 = p_spill;
          puVar9 = local_58;
        }
        puVar3 = (p_00->fmt).intbuf + (long)(puVar9 + -0x68);
        puVar3[0] = 0x29;
        puVar3[1] = 0x28;
        (pfVar12->buf).len = (int)pfVar7;
        (pfVar12->buf).cap = (int)pfVar8;
        if (runtime_writeBarrier._0_4_ == 0) {
          (pfVar12->buf).array = puVar9;
        }
        else {
          runtime_gcWriteBarrierR8();
          p_00 = extraout_RAX_01;
          rVar11 = extraout_RDX_00;
        }
        if (pfVar1 == (fmt_pp *)0x0) {
          pfVar1 = (fmt_pp *)(v + rVar11 + 5);
          if (pfVar8 < pfVar1) {
            old_01.len = (int)pfVar8;
            old_01.array = (void *)v;
            old_01.cap = (int)pfVar12;
            runtime_growslice((runtime__type *)&DAT_00225720,old_01,(int)pfVar7);
            p_00 = pfVar10;
            pfVar8 = local_48;
            pfVar12 = p_spill;
            puVar9 = local_58;
          }
          puVar3 = (p_00->fmt).intbuf + (long)(puVar9 + -0x66);
          puVar3[0] = 0x6e;
          puVar3[1] = 0x69;
          (p_00->fmt).intbuf[(long)(puVar9 + -100)] = 0x6c;
          (pfVar12->buf).len = (int)pfVar1;
          (pfVar12->buf).cap = (int)pfVar8;
          if (runtime_writeBarrier._0_4_ == 0) {
            (pfVar12->buf).array = puVar9;
          }
          else {
            runtime_gcWriteBarrierR8();
          }
        }
        else {
          fmt___pp__fmt0x64(p_00,v,SUB81(pfVar8,0));
          pfVar12 = p_spill;
        }
        prVar6 = (runtime__type *)(pfVar12->buf).len;
        puVar2 = (undefined1 *)((long)&prVar6->size + 1);
        puVar4 = (undefined1 *)(pfVar12->buf).cap;
        puVar9 = (pfVar12->buf).array;
        if (puVar4 < puVar2) {
          old_02.len = (int)puVar2;
          old_02.array = puVar4;
          old_02.cap = (int)pfVar12;
          runtime_growslice(prVar6,old_02,0x225720);
          (p_spill->buf).cap = (int)local_48;
          prVar6 = local_50;
          if (runtime_writeBarrier._0_4_ == 0) {
            (p_spill->buf).array = local_58;
            puVar9 = local_58;
            pfVar12 = p_spill;
          }
          else {
            runtime_gcWriteBarrier();
            puVar9 = extraout_RAX_02;
            pfVar12 = p_spill;
          }
        }
        (pfVar12->buf).len = (int)((long)&prVar6->size + 1);
        *(uint8 *)((long)&prVar6->size + (long)puVar9) = 0x29;
        return;
      }
      if (local_68 == (fmt_pp *)0x0) {
        s.len = (int)p_spill;
        s.str = (uint8 *)v_00.ptr;
        fmt___fmt__padString((fmt_fmt *)&DAT_002889bc,s);
        return;
      }
      fmt___pp__fmt0x64(local_68,(uint64)v_00.ptr,SUB81(p_spill,0));
      return;
    }
    if (verb_spill == 0x78) goto LAB_0056bd77;
  }
  fmt___pp__badVerb(p_spill,(int32)value.typ);
  return;
}

