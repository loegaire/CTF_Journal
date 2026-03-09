
/* WARNING: Removing unreachable block (ram,0x005373f9) */
/* WARNING: Removing unreachable block (ram,0x00537107) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.implements(reflect.rtype * T, reflect.rtype * V, bool ~r2)
    */

bool reflect_implements(reflect_rtype *T,reflect_rtype *V)

{
  int32 off;
  reflect_imethod *prVar1;
  reflect_name rVar2;
  uint8 *extraout_RAX;
  uint8 *extraout_RAX_00;
  reflect_rtype *extraout_RAX_01;
  ulong uVar3;
  ulong uVar4;
  void *rtype;
  void *extraout_RDX;
  void *pvVar5;
  int32 off_00;
  long lVar6;
  long in_FS_OFFSET;
  string sVar7;
  reflect_interfaceType *t;
  reflect_interfaceType *v;
  undefined8 local_b8;
  reflect_name local_b0;
  char local_a8;
  void *local_78;
  void *local_40;
  reflect_imethod *local_38;
  uint8 *local_30;
  void *local_28;
  byte *local_18;
  reflect_imethod *local_10;
  
  pvVar5 = local_b8;
                    /* Unresolved local var: reflect.uncommonType * v@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: []reflect.method vmethods@[???]
                       Unresolved local var: reflect.method * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
  while (&local_40 <= *(void ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    T = extraout_RAX_01;
  }
  if (((t->rtype).kind & 0x1f) != 0x14) {
    return SUB81(T,0);
  }
  if ((t->methods).len == 0) {
    return SUB81(T,0);
  }
  off_00 = (int32)t;
  if (((v->rtype).kind & 0x1f) != 0x14) {
    reflect___rtype__uncommon(T);
    if (local_b8 == (void *)0x0) {
      return false;
    }
    uVar4 = (ulong)*(ushort *)((long)local_b8 + 4);
    if (*(ushort *)((long)local_b8 + 4) == 0) {
      uVar4 = 0;
      lVar6 = 0;
    }
    else {
      lVar6 = (ulong)*(uint *)((long)local_b8 + 8) + (long)local_b8;
      if (0x10000 < uVar4) {
        runtime_panicSlice3Alen();
        pvVar5 = extraout_RDX;
        goto LAB_00537307;
      }
    }
                    /* Unresolved local var: int j@[???] */
    uVar3 = 0;
    rtype = (void *)0x0;
    do {
      if ((long)(ulong)*(ushort *)((long)pvVar5 + 4) <= (long)uVar3) {
        return SUB81(pvVar5,0);
      }
      prVar1 = (t->methods).array;
      if ((void *)(t->methods).len <= rtype) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_10 = prVar1;
      reflect_resolveNameOff((void *)(ulong)(uint)prVar1[(long)rtype].name,off_00);
      if (uVar4 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_18 = local_b0.bytes;
      off = *(int32 *)(lVar6 + uVar3 * 0x10);
      local_b8 = (void *)CONCAT44(local_b8._4_4_,off);
      reflect_resolveNameOff(local_b0.bytes,off);
      reflect_name_name(local_b0);
      local_28 = local_b8;
      sVar7 = reflect_name_name(local_b0);
      runtime_memequal();
      if (local_a8 == '\0') {
        rVar2.bytes = (uint8 *)0x0;
      }
      else {
        reflect_resolveTypeOff(v,(int32)sVar7.len);
        local_30 = local_b0.bytes;
        local_b8 = (void *)CONCAT44(local_b8._4_4_,local_10[(long)rtype].typ);
        reflect_resolveTypeOff(rtype,off_00);
        rVar2.bytes = (uint8 *)CONCAT71((int7)((ulong)local_30 >> 8),local_b0.bytes == local_30);
      }
      if ((char)rVar2.bytes != '\0') {
        if ((*local_18 & 1) == 0) {
                    /* Unresolved local var: string tmPkgPath@[???]
                       Unresolved local var: string vmPkgPath@[???] */
          reflect_name_pkgPath(rVar2);
          if (local_b0.bytes == (uint8 *)0x0) {
            reflect_name_name((reflect_name)t);
          }
          local_40 = local_b8;
          sVar7 = reflect_name_pkgPath(local_b0);
          if (local_b0.bytes == (uint8 *)0x0) {
            local_b8 = (void *)((ulong)local_b8 & 0xffffffff00000000);
            reflect_resolveNameOff(pvVar5,(int32)sVar7.len);
            reflect_name_name((reflect_name)0x0);
          }
          runtime_memequal();
          rVar2.bytes = extraout_RAX;
          if (local_a8 == '\0') goto LAB_00537012;
        }
        rtype = (void *)((long)rtype + 1);
        if ((t->methods).len <= (long)rtype) {
          return SUB81(rVar2.bytes,0);
        }
      }
LAB_00537012:
      uVar3 = uVar3 + 1;
                    /* Unresolved local var: reflect.name tmName@[???]
                       Unresolved local var: reflect.name vmName@[???] */
    } while( true );
  }
  local_78 = (void *)0x0;
  pvVar5 = (void *)0x0;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???] */
  do {
    if ((v->methods).len <= (long)local_78) {
      return SUB81(local_78,0);
    }
    prVar1 = (t->methods).array;
    if ((void *)(t->methods).len <= pvVar5) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    local_10 = prVar1;
    reflect_resolveNameOff((void *)(ulong)(uint)prVar1[(long)pvVar5].name,(int32)v);
    prVar1 = (v->methods).array;
    if ((void *)(v->methods).len <= local_78) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    local_18 = local_b0.bytes;
    local_b8 = (void *)CONCAT44(local_b8._4_4_,prVar1[(long)local_78].name);
    local_38 = prVar1;
    reflect_resolveNameOff(v,(int32)local_b0.bytes);
    reflect_name_name(local_b0);
    local_28 = local_b8;
    sVar7 = reflect_name_name(local_b0);
    runtime_memequal();
    if (local_a8 == '\0') {
      rVar2.bytes = (uint8 *)0x0;
    }
    else {
      reflect_resolveTypeOff(local_78,(int32)sVar7.len);
      local_30 = local_b0.bytes;
      local_b8 = (void *)((ulong)local_b8._4_4_ << 0x20);
      reflect_resolveTypeOff(pvVar5,off_00);
      rVar2.bytes = (uint8 *)CONCAT71((int7)((ulong)local_30 >> 8),local_b0.bytes == local_30);
    }
    if ((char)rVar2.bytes != '\0') {
      if ((*local_18 & 1) == 0) {
                    /* Unresolved local var: string tmPkgPath@[???]
                       Unresolved local var: string vmPkgPath@[???] */
        reflect_name_pkgPath(rVar2);
        if (local_b0.bytes == (uint8 *)0x0) {
          reflect_name_name((reflect_name)t);
        }
        reflect_name_pkgPath(local_b0);
        if (local_b0.bytes == (uint8 *)0x0) {
          reflect_name_name((reflect_name)v);
        }
        runtime_memequal();
        rVar2.bytes = extraout_RAX_00;
        if (local_a8 == '\0') goto LAB_00537307;
      }
      pvVar5 = (void *)((long)pvVar5 + 1);
      if ((t->methods).len <= (long)pvVar5) {
        return SUB81(rVar2.bytes,0);
      }
    }
LAB_00537307:
    local_78 = (void *)((long)local_78 + 1);
                    /* Unresolved local var: reflect.name tmName@[???]
                       Unresolved local var: reflect.name vmName@[???] */
  } while( true );
}

