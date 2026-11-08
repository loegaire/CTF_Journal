
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.nssSource.standardCriteria(net.nssSource s, bool ~r0) */

bool net_nssSource_standardCriteria(net_nssSource s)

{
  uint8 *puVar1;
  uint8 *puVar2;
  bool bVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long in_FS_OFFSET;
  net_nssSource s_spill;
  char local_78;
  char local_30;
  long lStack_10;
  
  while (&lStack_10 <= *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: net.nssCriterion crit@[???] */
  bVar3 = SUB81(s_spill.criteria.len,0);
  if (s_spill.criteria.len < 1) {
    return bVar3;
  }
  lVar4 = 0;
  do {
    puVar1 = ((s_spill.criteria.array)->status).str;
    lVar6 = ((s_spill.criteria.array)->status).len;
    puVar2 = ((s_spill.criteria.array)->action).str;
    lStack_10 = ((s_spill.criteria.array)->action).len;
    local_30 = (char)*(undefined8 *)s_spill.criteria.array;
                    /* Unresolved local var: string def@[???] */
    if (local_30 == '\0') {
      if (lVar6 == 7) {
        if ((*(int *)puVar1 == 0x63637573) &&
           ((*(short *)(puVar1 + 4) == 0x7365 && (puVar1[6] == 0x73)))) {
          lVar6 = 6;
LAB_0059a409:
          if (((lVar4 == s_spill.criteria.len + -1) && (lStack_10 == 6)) &&
             ((*(int *)puVar2 == 0x75746572 && (*(short *)(puVar2 + 4) == 0x6e72)))) {
            cVar5 = '\x01';
          }
          else if (lVar6 == lStack_10) {
            runtime_memequal();
            cVar5 = local_78;
          }
          else {
            cVar5 = '\0';
          }
          goto LAB_0059a49a;
        }
        if (((*(int *)puVar1 == 0x76616e75) && (*(short *)(puVar1 + 4) == 0x6961)) &&
           (puVar1[6] == 0x6c)) goto LAB_0059a3fd;
      }
      else if ((lVar6 == 8) &&
              ((*(long *)puVar1 == 0x646e756f66746f6e || (*(long *)puVar1 == 0x6e69616761797274))))
      {
LAB_0059a3fd:
        lVar6 = 8;
        goto LAB_0059a409;
      }
      cVar5 = '\0';
    }
    else {
      cVar5 = '\0';
    }
LAB_0059a49a:
    if (cVar5 == '\0') {
      return bVar3;
    }
    lVar4 = lVar4 + 1;
    if (s_spill.criteria.len <= lVar4) {
      return bVar3;
    }
    s_spill.criteria.array = s_spill.criteria.array + 1;
  } while( true );
}

