
/* WARNING: Unknown calling convention */

void fmt___pp__printArg(fmt_pp *p,interface___ arg,int32 verb)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 v [16];
  undefined1 v_00 [16];
  undefined1 auVar3 [16];
  byte *pbVar4;
  fmt_pp *extraout_RAX;
  fmt_pp *extraout_RAX_00;
  fmt_pp *pfVar5;
  bool isSigned;
  fmt_pp *pfVar6;
  code *pcVar7;
  uint uVar8;
  byte *extraout_RDX;
  byte *extraout_RDX_00;
  byte *pbVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  void **ppvVar13;
  void **ppvVar14;
  undefined *depth;
  int in_R9;
  long in_FS_OFFSET;
  interface___ iVar15;
  string s;
  string v_01;
  reflect_Value v_02;
  reflect_Value value;
  __uint8 v_03;
  reflect_Value value_00;
  reflect_Value value_01;
  string typeString;
  fmt_pp *p_spill;
  interface___ arg_spill;
  int32 verb_spill;
  char local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  void *local_68;
  undefined1 local_10 [8];
  int32 verb_00;
  
  while (local_10 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  (p_spill->arg)._type = arg_spill._type;
  ppvVar13 = &(p_spill->arg).data;
  pfVar6 = p_spill;
  if (runtime_writeBarrier._0_4_ == 0) {
    (p_spill->arg).data = arg_spill.data;
    pfVar5 = (fmt_pp *)arg_spill._type;
    pbVar9 = arg_spill.data;
  }
  else {
    runtime_gcWriteBarrierDX();
    pfVar5 = extraout_RAX;
    pbVar9 = extraout_RDX;
  }
  (pfVar6->value).flag = 0;
  if (runtime_writeBarrier._0_4_ == 0) {
    (pfVar6->value).typ = (reflect_rtype *)0x0;
    (pfVar6->value).ptr = (void *)0x0;
  }
  else {
    runtime_gcWriteBarrierR8();
    runtime_gcWriteBarrierBX();
    pfVar5 = extraout_RAX_00;
    pbVar9 = extraout_RDX_00;
  }
  if (arg_spill._type == (runtime__type *)0x0) {
    if ((verb_spill == 0x54) || (verb_spill == 0x76)) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = pfVar6;
      fmt___fmt__padString((fmt_fmt *)&DAT_002889bc,(string)(auVar3 << 0x40));
    }
    else {
      fmt___pp__badVerb((fmt_pp *)(ulong)(uint)verb_spill,0);
    }
    return;
  }
  if (verb_spill == 0x54) {
    if (arg_spill._type == (runtime__type *)0x0) {
      puVar10 = (undefined1 *)0x0;
    }
    else {
      puVar10 = go_itab__reflect_rtype_reflect_Type;
    }
    pcVar7 = *(code **)(puVar10 + 0xf8);
    (*pcVar7)();
    s.len = (int)pcVar7;
    s.str = (uint8 *)arg_spill._type;
    fmt___fmt__fmtS(&p_spill->fmt,s);
    return;
  }
  if (verb_spill != 0x70) {
    depth = (undefined *)0x0;
    if (arg_spill._type != (runtime__type *)0x0) {
      uVar8 = (arg_spill._type)->hash;
      depth = (undefined *)(ulong)uVar8;
      verb_00 = (int32)pfVar6;
      isSigned = SUB81(pfVar6,0);
      if (uVar8 < 0xb0c23ed4) {
        if (uVar8 < 0x500c1abd) {
          if (uVar8 < 0x2ea27ffc) {
            if (uVar8 == 0x13ff06c5) {
                    /* Unresolved local var: bool f@[???] */
              ppvVar13 = (void **)&DAT_00222aa0;
              if (pfVar5 == (fmt_pp *)&DAT_00222aa0) {
                fmt___pp__fmtBool((fmt_pp *)(ulong)*(byte *)arg_spill.data,SUB81(arg_spill._type,0),
                                  verb_00);
                return;
              }
            }
            else {
                    /* Unresolved local var: float64 f@[???] */
              if ((uVar8 == 0x2ea27ffb) &&
                 (ppvVar13 = (void **)&DAT_002231e0, pfVar5 == (fmt_pp *)&DAT_002231e0)) {
                fmt___pp__fmtFloat(arg_spill.data,*(float64 *)arg_spill.data,(int)arg_spill._type,
                                   verb_00);
                return;
              }
            }
          }
          else if (uVar8 == 0x382e7edf) {
                    /* Unresolved local var: []uint8 f@[???] */
            ppvVar13 = (void **)&DAT_002221a0;
            if (pfVar5 == (fmt_pp *)&DAT_002221a0) {
              v_03.len = (int)pfVar6;
              v_03.array = (uint8 *)*(undefined8 *)((long)arg_spill.data + 0x10);
              v_03.cap = (int)&DAT_002221a0;
              typeString.len = in_R9;
              typeString.str = (uint8 *)0x382e7edf;
              fmt___pp__fmtBytes((fmt_pp *)&DAT_0028969c,v_03,verb_spill,typeString);
              return;
            }
          }
          else if ((uVar8 == 0x500c1abc) &&
                  (depth = &DAT_00286b60, pfVar5 == (fmt_pp *)&DAT_00286b60)) {
            uVar11 = *(ulong *)((long)arg_spill.data + 0x10);
            uVar2 = *(undefined8 *)((long)arg_spill.data + 8);
            pfVar5 = *(fmt_pp **)arg_spill.data;
            if ((uVar11 != 0) && ((uVar11 & 0x60) == 0)) {
              v_02.flag = (reflect_flag)pfVar6;
              v_02._0_16_ = *(undefined1 (*) [16])arg_spill.data;
              ppvVar14 = ppvVar13;
              iVar15 = reflect_valueInterface(v_02,SUB81(ppvVar13,0));
              (p_spill->arg)._type = (runtime__type *)CONCAT44(uStack_6c,local_70);
              if (runtime_writeBarrier._0_4_ == 0) {
                (p_spill->arg).data = local_68;
                ppvVar13 = ppvVar14;
              }
              else {
                runtime_gcWriteBarrier();
              }
              fmt___pp__handleMethods((fmt_pp *)(ulong)(uint)verb_spill,(int32)iVar15.data);
              local_80 = (char)uVar11;
              pfVar6 = p_spill;
              if (local_80 != '\0') {
                return;
              }
            }
            value_00.ptr = pfVar6;
            value_00.typ = (reflect_rtype *)uVar2;
            value_00.flag = (reflect_flag)ppvVar13;
            fmt___pp__printValue(pfVar5,value_00,verb_spill,(int)depth);
            return;
          }
        }
        else if (uVar8 < 0x7925028d) {
          if (uVar8 == 0x663e425f) {
            ppvVar13 = (void **)&DAT_00225720;
            if (pfVar5 == (fmt_pp *)&DAT_00225720) {
              fmt___pp__fmtInteger
                        ((fmt_pp *)(ulong)*pbVar9,(uint64)arg_spill._type,isSigned,0x225720);
              return;
            }
          }
          else {
                    /* Unresolved local var: complex64 f@[???] */
            if ((uVar8 == 0x7925028c) &&
               (ppvVar13 = (void **)&DAT_00222fa0, pfVar5 == (fmt_pp *)&DAT_00222fa0)) {
              v._8_4_ = SUB84((double)*(float *)arg_spill.data,0);
              v._0_8_ = pfVar6;
              v._12_4_ = (int)((ulong)(double)*(float *)arg_spill.data >> 0x20);
              fmt___pp__fmtComplex(arg_spill.data,(complex128)v,(int)arg_spill._type,verb_00);
              return;
            }
          }
        }
        else if (uVar8 == 0x86318d2e) {
                    /* Unresolved local var: uint64 f@[???] */
          ppvVar13 = (void **)&DAT_002256e0;
          if (pfVar5 == (fmt_pp *)&DAT_002256e0) {
            fmt___pp__fmtInteger
                      (*(fmt_pp **)arg_spill.data,(uint64)arg_spill._type,isSigned,0x2256e0);
            return;
          }
        }
        else if (uVar8 == 0x963f9bff) {
                    /* Unresolved local var: int64 f@[???] */
          ppvVar13 = (void **)&DAT_00224d60;
          if (pfVar5 == (fmt_pp *)&DAT_00224d60) {
            fmt___pp__fmtInteger
                      (*(fmt_pp **)arg_spill.data,(uint64)arg_spill._type,isSigned,0x224d60);
            return;
          }
        }
        else {
                    /* Unresolved local var: float32 f@[???] */
          if ((uVar8 == 0xb0c23ed3) &&
             (ppvVar13 = (void **)&DAT_002231a0, pfVar5 == (fmt_pp *)&DAT_002231a0)) {
            fmt___pp__fmtFloat(arg_spill.data,(float64)(double)*(float *)arg_spill.data,
                               (int)arg_spill._type,verb_00);
            return;
          }
        }
      }
      else if (uVar8 < 0xd04ae83e) {
        if (uVar8 < 0xbbad4103) {
          if (uVar8 == 0xb31a546d) {
                    /* Unresolved local var: complex128 f@[???] */
            ppvVar13 = (void **)&DAT_00222f60;
            if (pfVar5 == (fmt_pp *)&DAT_00222f60) {
              v_00._8_4_ = (int)*(undefined8 *)arg_spill.data;
              v_00._0_8_ = pfVar6;
              v_00._12_4_ = (int)((ulong)*(undefined8 *)arg_spill.data >> 0x20);
              fmt___pp__fmtComplex(arg_spill.data,(complex128)v_00,(int)arg_spill._type,verb_00);
              return;
            }
          }
          else if ((uVar8 == 0xbbad4102) &&
                  (ppvVar13 = (void **)&DAT_00224d20, pfVar5 == (fmt_pp *)&DAT_00224d20)) {
            fmt___pp__fmtInteger
                      ((fmt_pp *)(long)*(int *)arg_spill.data,(uint64)arg_spill._type,isSigned,
                       0x224d20);
            return;
          }
        }
        else if (uVar8 == 0xbd4ad792) {
                    /* Unresolved local var: uintptr f@[???] */
          ppvVar13 = (void **)&DAT_00225760;
          if (pfVar5 == (fmt_pp *)&DAT_00225760) {
            fmt___pp__fmtInteger
                      (*(fmt_pp **)arg_spill.data,(uint64)arg_spill._type,isSigned,0x225760);
            return;
          }
        }
        else if (uVar8 == 0xcc06c027) {
          ppvVar13 = (void **)&DAT_00224da0;
          if (pfVar5 == (fmt_pp *)&DAT_00224da0) {
            fmt___pp__fmtInteger
                      ((fmt_pp *)(long)*(char *)arg_spill.data,(uint64)arg_spill._type,isSigned,
                       0x224da0);
            return;
          }
        }
        else if ((uVar8 == 0xd04ae83d) &&
                (ppvVar13 = (void **)&DAT_002256a0, pfVar5 == (fmt_pp *)&DAT_002256a0)) {
          fmt___pp__fmtInteger
                    ((fmt_pp *)(ulong)*(uint *)arg_spill.data,(uint64)arg_spill._type,isSigned,
                     0x2256a0);
          return;
        }
      }
      else if (uVar8 < 0xe0ff5cb5) {
        if (uVar8 == 0xd5b87712) {
                    /* Unresolved local var: uint f@[???] */
          ppvVar13 = (void **)&DAT_00225620;
          if (pfVar5 == (fmt_pp *)&DAT_00225620) {
            fmt___pp__fmtInteger
                      (*(fmt_pp **)arg_spill.data,(uint64)arg_spill._type,isSigned,0x225620);
            return;
          }
        }
        else {
                    /* Unresolved local var: string f@[???] */
          if ((uVar8 == 0xe0ff5cb4) &&
             (ppvVar13 = (void **)&DAT_00225520, pfVar5 == (fmt_pp *)&DAT_00225520)) {
            v_01.len = (int)pfVar6;
            v_01.str = (uint8 *)arg_spill._type;
            fmt___pp__fmtString(*(fmt_pp **)arg_spill.data,v_01,0x225520);
            return;
          }
        }
      }
      else if (uVar8 == 0xecd580ce) {
        ppvVar13 = (void **)&DAT_00224ce0;
        if (pfVar5 == (fmt_pp *)&DAT_00224ce0) {
          fmt___pp__fmtInteger
                    ((fmt_pp *)(long)*(short *)arg_spill.data,(uint64)arg_spill._type,isSigned,
                     0x224ce0);
          return;
        }
      }
      else if (uVar8 == 0xeff20ea0) {
        ppvVar13 = (void **)&DAT_00225660;
        if (pfVar5 == (fmt_pp *)&DAT_00225660) {
          fmt___pp__fmtInteger
                    ((fmt_pp *)(ulong)*(ushort *)arg_spill.data,(uint64)arg_spill._type,isSigned,
                     0x225660);
          return;
        }
      }
      else {
                    /* Unresolved local var: int f@[???] */
        if ((uVar8 == 0xf75371fa) &&
           (ppvVar13 = (void **)&DAT_00224ca0, pfVar5 == (fmt_pp *)&DAT_00224ca0)) {
          fmt___pp__fmtInteger(*(fmt_pp **)arg_spill.data,(uint64)arg_spill._type,isSigned,0x224ca0)
          ;
          return;
        }
      }
    }
                    /* Unresolved local var: interface_{} f@[???] */
    fmt___pp__handleMethods(pfVar5,(int32)arg_spill._type);
    if (local_80 == '\0') {
      if (reflect_dummy.b != false) {
        reflect_dummy.x._type = arg_spill._type;
        if (runtime_writeBarrier._0_4_ == 0) {
          reflect_dummy.x.data = arg_spill.data;
        }
        else {
          ppvVar13 = &reflect_dummy.x.data;
          runtime_gcWriteBarrier();
        }
      }
                    /* Unresolved local var: reflect.rtype * t@[???]
                       Unresolved local var: reflect.flag f@[???] */
      if (arg_spill._type == (runtime__type *)0x0) {
        arg_spill._type = (runtime__type *)0x0;
        uVar11 = 0;
        uVar8 = 0;
      }
      else {
        bVar1 = (arg_spill._type)->kind;
        uVar11 = (ulong)(uint)bVar1;
        uVar8 = bVar1 & 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar8 = uVar8 | 0x80;
        }
      }
      value_01.ptr = arg_spill._type;
      value_01.typ = (reflect_rtype *)uVar11;
      value_01.flag = (reflect_flag)ppvVar13;
      fmt___pp__printValue((fmt_pp *)(ulong)(uint)verb_spill,value_01,uVar8,(int)depth);
    }
    return;
  }
  pbVar4 = reflect_dummy.x.data;
  if ((reflect_dummy.b != false) &&
     (reflect_dummy.x._type = (runtime__type *)pfVar5, pbVar4 = pbVar9,
     runtime_writeBarrier._0_4_ != 0)) {
    runtime_gcWriteBarrierDX();
    pbVar4 = reflect_dummy.x.data;
  }
  reflect_dummy.x.data = pbVar4;
                    /* Unresolved local var: reflect.rtype * t@[???]
                       Unresolved local var: reflect.flag f@[???] */
  if (arg_spill._type == (runtime__type *)0x0) {
    arg_spill._type = (runtime__type *)0x0;
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    verb_spill = (int32)(arg_spill._type)->kind;
    uVar11 = (ulong)(verb_spill & 0x1f) | 0x80;
    uVar12 = (ulong)(verb_spill & 0x1f);
    if (((arg_spill._type)->kind & 0x20) == 0) {
      uVar12 = uVar11;
    }
  }
  value.ptr = pfVar6;
  value.typ = (reflect_rtype *)uVar11;
  value.flag = uVar12;
  fmt___pp__fmtPointer((fmt_pp *)arg_spill._type,value,verb_spill);
  return;
}

