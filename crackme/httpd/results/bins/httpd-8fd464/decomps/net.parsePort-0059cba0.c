
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.parsePort(string service, int port, bool needsLookup) */

multireturn_int_bool__conflict8 net_parsePort(string service)

{
  byte *pbVar1;
  uint8 uVar2;
  uint8 *puVar3;
  ulong uVar4;
  ulong k;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long in_FS_OFFSET;
  string s;
  multireturn_int_bool__conflict8 mVar9;
  multireturn_int_bool__conflict8 mVar10;
  string service_spill;
  uint local_30;
  long local_28;
  
                    /* Unresolved local var: bool neg@[???]
                       Unresolved local var: uint32 n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (service_spill.len == 0) {
    return (multireturn_int_bool__conflict8)((unkuint9)(byte)service.len << 0x40);
  }
  uVar2 = *service_spill.str;
  if (uVar2 == 0x2b) {
    service_spill.len = service_spill.len + -1;
    puVar3 = service_spill.str + (-service_spill.len >> 0x3f & 1);
                    /* Unresolved local var: int32 d@[???] */
    uVar4 = 0;
  }
  else {
    puVar3 = service_spill.str;
    if (uVar2 == 0x2d) {
      service_spill.len = service_spill.len + -1;
      puVar3 = service_spill.str + (-service_spill.len >> 0x3f & 1);
    }
    uVar4 = CONCAT71((int7)((ulong)service_spill.str >> 8),uVar2 == 0x2d);
  }
  lVar5 = 0;
  uVar7 = 0;
  k = uVar4;
  do {
    mVar9.needsLookup = SUB81(service_spill.len,0);
    if (service_spill.len <= lVar5) goto LAB_0059cceb;
    pbVar1 = puVar3 + lVar5;
    uVar6 = (uint)uVar7;
    if (*pbVar1 < 0x80) {
      lVar5 = lVar5 + 1;
      uVar8 = (uint)*pbVar1;
    }
    else {
      s.len = service_spill.len;
      s.str = puVar3;
      runtime_decoderune(s,k);
      k = uVar4 & 0xff;
                    /* Unresolved local var: uint32 nn@[???] */
      lVar5 = local_28;
      uVar8 = local_30;
    }
    if (9 < uVar8 - 0x30) {
      mVar9.port = (int)puVar3;
      return mVar9;
    }
    if (0x3fffffff < uVar6) {
      uVar7 = 0xffffffff;
      goto LAB_0059cceb;
    }
    uVar8 = (uVar8 + uVar6 * 10) - 0x30;
    uVar7 = (ulong)uVar8;
  } while (uVar6 * 10 <= uVar8);
  uVar7 = 0xffffffff;
LAB_0059cceb:
  if ((char)k == '\0') {
    if (0x3fffffff < (uint)uVar7) {
      uVar7 = 0x3fffffff;
    }
  }
  else if (0x40000000 < (uint)uVar7) {
    uVar7 = 0x40000000;
  }
  if ((k & 0xff) != 0) {
    uVar7 = -uVar7;
  }
  mVar10.needsLookup = mVar9.needsLookup;
  mVar10.port = uVar7;
  return mVar10;
}

