
/* WARNING: Unknown calling convention */

void runtime_printany(interface___ i)

{
  float fVar1;
  float fVar2;
  float64 v;
  bool v_00;
  byte bVar3;
  char cVar4;
  short sVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint64 uVar9;
  int64 iVar10;
  uint8 *puVar11;
  undefined1 auVar12 [16];
  long in_FS_OFFSET;
  string s;
  interface___ i_00;
  string s_00;
  interface___ i_spill;
  
  s.len = i.data;
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (i_spill._type != (runtime__type *)0x0) {
    uVar7 = (i_spill._type)->hash;
    if (uVar7 < 0xb31a546e) {
      if (uVar7 < 0x7925028d) {
        if (uVar7 < 0x2ea27ffc) {
          if (uVar7 == 0x13ff06c5) {
                    /* Unresolved local var: bool v@[???] */
            if (i_spill._type == (runtime__type *)&DAT_00222aa0) {
              v_00 = *(bool *)i_spill.data;
              runtime_printlock();
              runtime_printbool(v_00);
              runtime_printunlock();
              return;
            }
          }
          else {
                    /* Unresolved local var: float64 v@[???] */
            if ((uVar7 == 0x2ea27ffb) && (i_spill._type == (runtime__type *)&DAT_002231e0)) {
              v = *(float64 *)i_spill.data;
              runtime_printlock();
              runtime_printfloat(v);
              runtime_printunlock();
              return;
            }
          }
        }
        else if (uVar7 == 0x663e425f) {
          if (i_spill._type == (runtime__type *)&DAT_00225720) {
            bVar3 = *(byte *)i_spill.data;
            runtime_printlock();
            runtime_printuint((ulong)bVar3);
            runtime_printunlock();
            return;
          }
        }
        else {
                    /* Unresolved local var: complex64 v@[???] */
          if ((uVar7 == 0x7925028c) && (i_spill._type == (runtime__type *)&DAT_00222fa0)) {
            fVar1 = *(float *)((long)i_spill.data + 4);
            fVar2 = *(float *)i_spill.data;
            runtime_printlock();
            auVar12._8_8_ = (double)fVar1;
            auVar12._0_8_ = (double)fVar2;
            runtime_printcomplex((complex128)auVar12);
            runtime_printunlock();
            return;
          }
        }
      }
      else if (uVar7 < 0x963f9c00) {
        if (uVar7 == 0x86318d2e) {
                    /* Unresolved local var: uint64 v@[???] */
          if (i_spill._type == (runtime__type *)&DAT_002256e0) {
            uVar9 = *(uint64 *)i_spill.data;
            runtime_printlock();
            runtime_printuint(uVar9);
            runtime_printunlock();
            return;
          }
        }
        else {
                    /* Unresolved local var: int64 v@[???] */
          if ((uVar7 == 0x963f9bff) && (i_spill._type == (runtime__type *)&DAT_00224d60)) {
            iVar10 = *(int64 *)i_spill.data;
            runtime_printlock();
            runtime_printint(iVar10);
            runtime_printunlock();
            return;
          }
        }
      }
      else if (uVar7 == 0xb0c23ed3) {
                    /* Unresolved local var: float32 v@[???] */
        if (i_spill._type == (runtime__type *)&DAT_002231a0) {
          fVar1 = *(float *)i_spill.data;
          runtime_printlock();
          runtime_printfloat((float64)(double)fVar1);
          runtime_printunlock();
          return;
        }
      }
      else {
                    /* Unresolved local var: complex128 v@[???] */
        if ((uVar7 == 0xb31a546d) && (i_spill._type == (runtime__type *)&DAT_00222f60)) {
          auVar12 = *(undefined1 (*) [16])i_spill.data;
          runtime_printlock();
          runtime_printcomplex((complex128)auVar12);
          runtime_printunlock();
          return;
        }
      }
    }
    else if (uVar7 < 0xd04ae83e) {
      if (uVar7 < 0xbd4ad793) {
        if (uVar7 == 0xbbad4102) {
          if (i_spill._type == (runtime__type *)&DAT_00224d20) {
            iVar8 = *(int *)i_spill.data;
            runtime_printlock();
            runtime_printint((long)iVar8);
            runtime_printunlock();
            return;
          }
        }
        else {
                    /* Unresolved local var: uintptr v@[???] */
          if ((uVar7 == 0xbd4ad792) && (i_spill._type == (runtime__type *)&DAT_00225760)) {
            uVar9 = *(uint64 *)i_spill.data;
            runtime_printlock();
            runtime_printuint(uVar9);
            runtime_printunlock();
            return;
          }
        }
      }
      else if (uVar7 == 0xcc06c027) {
        if (i_spill._type == (runtime__type *)&DAT_00224da0) {
          cVar4 = *(char *)i_spill.data;
          runtime_printlock();
          runtime_printint((long)cVar4);
          runtime_printunlock();
          return;
        }
      }
      else if ((uVar7 == 0xd04ae83d) && (i_spill._type == (runtime__type *)&DAT_002256a0)) {
        uVar7 = *(uint *)i_spill.data;
        runtime_printlock();
        runtime_printuint((ulong)uVar7);
        runtime_printunlock();
        return;
      }
    }
    else if (uVar7 < 0xe0ff5cb5) {
      if (uVar7 == 0xd5b87712) {
                    /* Unresolved local var: uint v@[???] */
        if (i_spill._type == (runtime__type *)&DAT_00225620) {
          uVar9 = *(uint64 *)i_spill.data;
          runtime_printlock();
          runtime_printuint(uVar9);
          runtime_printunlock();
          return;
        }
      }
      else {
                    /* Unresolved local var: string v@[???] */
        if ((uVar7 == 0xe0ff5cb4) && (i_spill._type == (runtime__type *)&DAT_00225520)) {
          puVar11 = *(uint8 **)((long)i_spill.data + 8);
          runtime_printlock();
          s.str = puVar11;
          runtime_printstring(s);
          runtime_printunlock();
          return;
        }
      }
    }
    else if (uVar7 == 0xecd580ce) {
      if (i_spill._type == (runtime__type *)&DAT_00224ce0) {
        sVar5 = *(short *)i_spill.data;
        runtime_printlock();
        runtime_printint((long)sVar5);
        runtime_printunlock();
        return;
      }
    }
    else if (uVar7 == 0xeff20ea0) {
      if (i_spill._type == (runtime__type *)&DAT_00225660) {
        uVar6 = *(ushort *)i_spill.data;
        runtime_printlock();
        runtime_printuint((ulong)uVar6);
        runtime_printunlock();
        return;
      }
    }
    else {
                    /* Unresolved local var: int v@[???] */
      if ((uVar7 == 0xf75371fa) && (i_spill._type == (runtime__type *)&DAT_00224ca0)) {
        iVar10 = *(int64 *)i_spill.data;
        runtime_printlock();
        runtime_printint(iVar10);
        runtime_printunlock();
        return;
      }
    }
    i_00.data = s.len;
    i_00._type = i_spill.data;
                    /* Unresolved local var: interface_{} v@[???] */
    runtime_printanycustomtype(i_00);
    return;
  }
                    /* Unresolved local var: interface_{} v@[???] */
  runtime_printlock();
  s_00.len = (int)s.len;
  s_00.str = &DAT_00287c0c;
  runtime_printstring(s_00);
  runtime_printunlock();
  return;
}

