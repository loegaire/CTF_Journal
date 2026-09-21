
/* WARNING: Removing unreachable block (ram,0x004b383f) */
/* WARNING: Removing unreachable block (ram,0x004b384f) */
/* WARNING: Removing unreachable block (ram,0x004b3918) */
/* WARNING: Unknown calling convention */

void runtime_cgoCheckArg(runtime__type *t,void *p,bool indir,bool top,string msg)

{
  uintptr uVar1;
  runtime_slice *p_00;
  runtime_arraytype *extraout_RAX;
  runtime_arraytype *t_00;
  runtime__type *prVar2;
  bool indir_00;
  runtime_slice *prVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  uint8 *puVar8;
  ulong uVar9;
  int iVar10;
  long in_FS_OFFSET;
  string val;
  interface___ e;
  string val_00;
  interface___ e_00;
  string val_01;
  interface___ e_01;
  string s_00;
  string s_01;
  string val_02;
  interface___ e_02;
  string val_03;
  interface___ e_03;
  string val_04;
  interface___ e_04;
  string s_02;
  string msg_00;
  string msg_01;
  string msg_02;
  string msg_03;
  string msg_04;
  string msg_05;
  runtime_arraytype *at;
  runtime_slice *s;
  bool indir_spill;
  bool top_spill;
  string msg_spill;
  long local_70;
  runtime__type *local_68;
  
  uVar9 = (ulong)top;
  iVar10 = msg.len;
  puVar8 = msg.str;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((at->typ).ptrdata == 0) || (s == (runtime_slice *)0x0)) {
    return;
  }
  bVar5 = (at->typ).kind & 0x1f;
  indir_00 = SUB81(s,0);
  if (bVar5 < 0x16) {
    if (bVar5 < 0x13) {
      if (bVar5 == 0x11) {
        if (indir_spill) {
          for (uVar6 = 0; uVar6 < at->len; uVar6 = uVar6 + 1) {
            msg_02.len = iVar10;
            msg_02.str = (uint8 *)msg_spill.len;
                    /* Unresolved local var: uintptr i@[???] */
            runtime_cgoCheckArg(&at->typ,msg_spill.str,SUB81(s,0),SUB81(uVar9,0),msg_02);
            s = (runtime_slice *)((long)&s->array + at->elem->size);
          }
          return;
        }
        if (at->len == 1) {
          msg_01.len = iVar10;
          msg_01.str = puVar8;
          runtime_cgoCheckArg((runtime__type *)msg_spill.len,p,indir_00,SUB81(uVar9,0),msg_01);
          return;
        }
        goto LAB_004b39c5;
      }
      if (bVar5 != 0x12) {
LAB_004b3a58:
        s_01.len = (int)p;
        s_01.str = &DAT_002930a6;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_01);
      }
    }
    else {
      if (bVar5 == 0x13) {
        if (indir_spill) {
          s = s->array;
        }
        runtime_cgoIsGoPointer(s);
        if ((char)local_70 != '\0') {
          val.len = (int)p;
          val.str = (uint8 *)msg_spill.len;
          runtime_convTstring(val);
          e.data = p;
          e._type = local_68;
          runtime_gopanic(e);
          return;
        }
        return;
      }
                    /* Unresolved local var: runtime._type * it@[???] */
      if (bVar5 == 0x14) {
        if (s->array == (void *)0x0) {
          return;
        }
        runtime_spanOfHeap((uintptr)s->array);
        if (local_70 == 0) {
          runtime_cgoIsGoPointer((void *)s->len);
          return;
        }
        val_00.len = (int)p;
        val_00.str = (uint8 *)msg_spill.len;
        runtime_convTstring(val_00);
        e_00.data = p;
        e_00._type = local_68;
        runtime_gopanic(e_00);
      }
    }
    val_01.len = (int)p;
    val_01.str = (uint8 *)msg_spill.len;
    runtime_convTstring(val_01);
    e_01.data = p;
    e_01._type = local_68;
    runtime_gopanic(e_01);
LAB_004b39c5:
    s_00.len = (int)p;
    s_00.str = &DAT_002930a6;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  if (bVar5 < 0x18) {
    if (bVar5 == 0x16) {
LAB_004b36e7:
      p_00 = s;
      if ((indir_spill) && (p_00 = s->array, s->array == (runtime_slice *)0x0)) {
        return;
      }
      prVar3 = s;
      runtime_cgoIsGoPointer(p_00);
      if ((char)local_70 != '\0') {
        if (top_spill) {
          msg_05.len = (int)prVar3;
          msg_05.str = p;
          runtime_cgoCheckUnknownPointer((void *)msg_spill.len,msg_05);
        }
        else {
          val_02.len = (int)p;
          val_02.str = (uint8 *)msg_spill.len;
          runtime_convTstring(val_02);
          puVar4 = &DAT_00237b20;
          e_02.data = p;
          e_02._type = local_68;
          runtime_gopanic(e_02);
          t_00 = extraout_RAX;
          do {
            msg_03.len = iVar10;
            msg_03.str = puVar8;
            runtime_cgoCheckArg(&t_00->typ,(void *)msg_spill.len,SUB81(msg_spill.str,0),
                                SUB81(uVar9,0),msg_03);
            puVar4 = puVar4 + 1;
LAB_004b3b0e:
            t_00 = at;
          } while ((long)puVar4 < s->cap);
        }
        return;
      }
      return;
    }
    if ((s->array == (void *)0x0) || (runtime_cgoIsGoPointer(at), (char)local_70 == '\0')) {
      return;
    }
    if (top_spill) {
      if (at->elem->ptrdata == 0) {
        return;
      }
      puVar4 = (undefined *)0x0;
                    /* Unresolved local var: int i@[???] */
      goto LAB_004b3b0e;
    }
    val_03.len = (int)p;
    val_03.str = (uint8 *)msg_spill.len;
    runtime_convTstring(val_03);
    e_03.data = p;
    e_03._type = local_68;
    runtime_gopanic(e_03);
  }
  else {
    if (bVar5 != 0x18) {
      if (bVar5 != 0x19) {
        if (bVar5 != 0x1a) goto LAB_004b3a58;
        goto LAB_004b36e7;
      }
      if (indir_spill) {
        uVar1 = at->len;
        prVar2 = at->slice;
        if ((long)uVar1 < 1) {
          return;
        }
        lVar7 = 0;
        while( true ) {
          uVar9._0_4_ = prVar2->hash;
          uVar9._4_1_ = prVar2->tflag;
          uVar9._5_1_ = prVar2->align;
          uVar9._6_1_ = prVar2->fieldAlign;
          uVar9._7_1_ = prVar2->kind;
          if (*(long *)((uint8 *)prVar2->ptrdata + 8) != 0) {
            msg_04.len = iVar10;
            msg_04.str = (uint8 *)prVar2->ptrdata;
            runtime_cgoCheckArg((runtime__type *)(ulong)top_spill,(void *)msg_spill.len,indir_00,
                                SUB81(uVar9 >> 1,0),msg_04);
          }
          lVar7 = lVar7 + 1;
          if ((long)uVar1 <= lVar7) break;
          prVar2 = (runtime__type *)&prVar2->equal;
        }
        return;
      }
      if (at->len == 1) {
        msg_00.len = iVar10;
        msg_00.str = puVar8;
        runtime_cgoCheckArg((runtime__type *)msg_spill.len,p,indir_00,SUB81(uVar9,0),msg_00);
        return;
      }
      goto LAB_004b3b97;
    }
    runtime_cgoIsGoPointer(s->array);
    if ((char)local_70 == '\0') {
      return;
    }
    if (top_spill) {
      return;
    }
  }
  val_04.len = (int)p;
  val_04.str = (uint8 *)msg_spill.len;
  runtime_convTstring(val_04);
  e_04.data = p;
  e_04._type = local_68;
  runtime_gopanic(e_04);
LAB_004b3b97:
  s_02.len = (int)p;
  s_02.str = &DAT_002930a6;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_02);
}

