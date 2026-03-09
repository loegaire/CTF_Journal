
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void net_readServices(void)

{
  byte bVar1;
  runtime_hmap *prVar2;
  runtime_hmap *h;
  uint8 *puVar3;
  bool bVar4;
  char cVar5;
  runtime_maptype *extraout_RAX;
  runtime_maptype *prVar6;
  long lVar7;
  int unaff_RBX;
  int iVar8;
  long lVar9;
  runtime_hmap *in_RDI;
  long in_FS_OFFSET;
  string name;
  string s;
  multireturn_void___bool_ mVar10;
  multireturn_string_bool__conflict4 mVar11;
  string t;
  string ky;
  string s_00;
  string s_01;
  runtime_maptype *local_a0;
  runtime_maptype *local_98;
  runtime_maptype *local_90;
  runtime_hmap *local_88;
  char local_80;
  undefined7 uStack_7f;
  runtime_maptype *local_28;
  runtime_maptype *local_20;
  runtime_maptype *local_18;
  undefined **ppuStack_10;
  
  prVar6 = local_90;
                    /* Unresolved local var: net.file * file@[???] */
  while (&local_28 <= *(runtime_maptype ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18 = (runtime_maptype *)0x0;
  ppuStack_10 = (undefined **)0x0;
  name.len = unaff_RBX;
  name.str = &DAT_002945b9;
  net_open(name);
  if (local_90 != (runtime_maptype *)0x0) {
    return;
  }
  local_20 = local_98;
  ppuStack_10 = &PTR_net___file__close_002b3428;
  local_18 = local_98;
                    /* Unresolved local var: bool ok@[???]
                       Unresolved local var: string line@[???] */
  mVar11 = net___file__readLine((net_file *)local_98);
  iVar8 = mVar11.s.len;
  local_90._0_1_ = '\0';
                    /* Unresolved local var: map[string]int m@[???]
                       Unresolved local var: int port@[???]
                       Unresolved local var: int j@[???]
                       Unresolved local var: bool ok@[???]
                       Unresolved local var: string netw@[???]
                       Unresolved local var: []string f@[???]
                       Unresolved local var: string portnet@[???]
                       Unresolved local var: string * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???]
                       Unresolved local var: int i@[???] */
  local_a0 = (runtime_maptype *)&DAT_0000000d;
  cVar5 = (char)local_90;
  local_90 = prVar6;
  do {
    if (cVar5 == '\0') {
      net___file__close((net_file *)local_18);
      return;
    }
    local_28 = local_a0;
    internal_bytealg_IndexByteString();
    local_a0 = local_98;
    if ((-1 < (long)local_90) && (local_a0 = local_90, local_98 < local_90)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    local_98 = (runtime_maptype *)&DAT_00287d9d;
    local_90 = (runtime_maptype *)&DAT_00000004;
    s.len = iVar8;
    s.str = &DAT_00287d9d;
    t.len = (int)in_RDI;
    t.str = (uint8 *)local_a0;
    net_splitAtBytes(s,t);
    puVar3 = (uint8 *)CONCAT71(uStack_7f,local_80);
    if (1 < (long)puVar3) {
      prVar2 = local_88->oldbuckets;
      h = local_88->buckets;
      lVar9 = 0;
      for (in_RDI = (runtime_hmap *)0x0;
          (((long)in_RDI < (long)prVar2 &&
           (bVar1 = *(byte *)((long)&in_RDI->count + (long)&h->count), 0x2f < bVar1)) &&
          (bVar1 < 0x3a)); in_RDI = (runtime_hmap *)((long)&in_RDI->count + 1)) {
        lVar9 = (ulong)(byte)(bVar1 - 0x30) + lVar9 * 10;
        if (0xfffffe < lVar9) {
          lVar9 = 0xffffff;
          bVar4 = false;
          goto LAB_0059cf28;
        }
      }
      if (in_RDI == (runtime_hmap *)0x0) {
        in_RDI = (runtime_hmap *)0x0;
        lVar9 = 0;
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
LAB_0059cf28:
      if (((bVar4) && (0 < lVar9)) && ((long)in_RDI < (long)prVar2)) {
        if (prVar2 <= in_RDI) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        if (*(char *)((long)&h->count + (long)&in_RDI->count) == '/') {
          local_a0 = (runtime_maptype *)net_services;
          local_90 = (runtime_maptype *)((long)prVar2 + (-1 - (long)in_RDI));
          local_98 = (runtime_maptype *)
                     ((long)&h->count +
                     ((ulong)((long)&in_RDI->count + 1U) & -(long)local_90 >> 0x3f));
          ky.len = (int)in_RDI;
          ky.str = &DAT_002363e0;
          mVar10 = runtime_mapaccess2_faststr(local_98,h,ky);
          prVar6 = (runtime_maptype *)local_88->count;
          if (local_80 == '\0') {
            runtime_makemap_small();
            local_a0 = (runtime_maptype *)net_services;
            s_00.len = (int)in_RDI;
            s_00.str = (uint8 *)local_90;
            runtime_mapassign_faststr
                      ((runtime_maptype *)&DAT_002363e0,
                       (runtime_hmap *)CONCAT71((int7)((ulong)h >> 8),mVar10.~r4),s_00);
            in_RDI = local_88;
            if (runtime_writeBarrier._0_4_ == 0) {
              prVar6 = (runtime_maptype *)&DAT_002363e0;
              local_88->count = (int)&DAT_002363e0;
            }
            else {
              runtime_gcWriteBarrier();
              prVar6 = extraout_RAX;
            }
          }
                    /* Unresolved local var: int i@[???] */
          for (lVar7 = 0; lVar7 < (long)puVar3; lVar7 = lVar7 + 1) {
            if (lVar7 != 1) {
              local_98 = (runtime_maptype *)(&local_88->count)[lVar7 * 2];
              local_90 = *(runtime_maptype **)(&local_88->flags + lVar7 * 0x10);
              s_01.len = (int)&DAT_00236320;
              s_01.str = puVar3;
              in_RDI = (runtime_hmap *)&DAT_00236320;
              runtime_mapassign_faststr(prVar6,local_88,s_01);
              local_88->count = lVar9;
              local_a0 = prVar6;
            }
          }
        }
      }
    }
    mVar11 = net___file__readLine((net_file *)local_20);
    iVar8 = mVar11.s.len;
    cVar5 = (char)local_90;
  } while( true );
}

