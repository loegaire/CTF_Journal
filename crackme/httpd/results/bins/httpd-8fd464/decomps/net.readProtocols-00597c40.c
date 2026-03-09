
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void net_readProtocols(void)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  runtime_maptype *prVar4;
  long lVar5;
  int unaff_RBX;
  int iVar6;
  runtime_hmap *h;
  undefined8 *in_RDI;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  string name;
  string s;
  multireturn_void___bool_ mVar8;
  string t;
  string ky;
  string s_00;
  string ky_00;
  string s_01;
  multireturn_string_bool__conflict4 mVar9;
  runtime_maptype *local_b0;
  runtime_maptype *local_a8;
  runtime_maptype *local_a0;
  uint8 *local_98;
  char local_90;
  undefined7 uStack_8f;
  long local_88;
  runtime_maptype *local_38;
  runtime_maptype *local_30;
  runtime_maptype *local_28;
  runtime_maptype *local_20;
  runtime_maptype *local_18;
  undefined **ppuStack_10;
  
  prVar4 = local_a0;
                    /* Unresolved local var: net.file * file@[???] */
  while (&local_38 <= *(runtime_maptype ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18 = (runtime_maptype *)0x0;
  ppuStack_10 = (undefined **)0x0;
  name.len = unaff_RBX;
  name.str = &DAT_002964fd;
  net_open(name);
  if (local_a0 != (runtime_maptype *)0x0) {
    return;
  }
  local_30 = local_a8;
  ppuStack_10 = &PTR_net___file__close_002b3428;
  local_18 = local_a8;
                    /* Unresolved local var: bool ok@[???]
                       Unresolved local var: string line@[???] */
  mVar9 = net___file__readLine((net_file *)local_a8);
  iVar6 = mVar9.s.len;
  local_a0._0_1_ = '\0';
                    /* Unresolved local var: []string f@[???]
                       Unresolved local var: string * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.cap@[???]
                       Unresolved local var: int ~R0.len@[???]
                       Unresolved local var: int i@[???] */
  local_b0 = (runtime_maptype *)&DAT_0000000e;
  cVar3 = (char)local_a0;
  local_a0 = prVar4;
  do {
    if (cVar3 == '\0') {
      net___file__close((net_file *)local_18);
      return;
    }
    local_38 = local_b0;
    internal_bytealg_IndexByteString();
    local_b0 = local_a8;
    if ((-1 < (long)local_a0) && (local_b0 = local_a0, local_a8 < local_a0)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    local_a8 = (runtime_maptype *)&DAT_00287d9d;
    local_a0 = (runtime_maptype *)&DAT_00000004;
    s.len = iVar6;
    s.str = &DAT_00287d9d;
    t.len = (int)in_RDI;
    t.str = (uint8 *)local_b0;
    net_splitAtBytes(s,t);
                    /* Unresolved local var: int proto@[???]
                       Unresolved local var: bool ok@[???] */
                    /* Unresolved local var: string alias@[???] */
    if (1 < CONCAT71(uStack_8f,local_90)) {
      puVar7 = (undefined8 *)0x0;
      for (lVar5 = 0;
          ((lVar5 < *(long *)(local_98 + 0x18) &&
           (bVar1 = *(byte *)(*(long *)(local_98 + 0x10) + lVar5), 0x2f < bVar1)) && (bVar1 < 0x3a))
          ; lVar5 = lVar5 + 1) {
        puVar7 = (undefined8 *)((ulong)(byte)(bVar1 - 0x30) + (long)puVar7 * 10);
        if (0xfffffe < (long)puVar7) {
          puVar7 = (undefined8 *)0xffffff;
          bVar2 = false;
          goto LAB_00597e22;
        }
      }
      if (lVar5 == 0) {
        puVar7 = (undefined8 *)0x0;
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
LAB_00597e22:
      in_RDI = puVar7;
      if (bVar2) {
        local_a8 = *(runtime_maptype **)local_98;
        local_a0 = *(runtime_maptype **)(local_98 + 8);
        local_b0 = (runtime_maptype *)net_protocols;
        ky.len = (int)puVar7;
        ky.str = local_98;
        runtime_mapaccess2_faststr((runtime_maptype *)net_protocols,(runtime_hmap *)local_a0,ky);
        if (local_90 == '\0') {
          local_a8 = *(runtime_maptype **)local_98;
          local_a0 = *(runtime_maptype **)(local_98 + 8);
          local_b0 = (runtime_maptype *)net_protocols;
          s_00.len = (int)in_RDI;
          s_00.str = local_98;
          runtime_mapassign_faststr((runtime_maptype *)net_protocols,(runtime_hmap *)local_a0,s_00);
          *(undefined8 **)local_98 = puVar7;
        }
        prVar4 = (runtime_maptype *)(local_98 + (-(local_88 + -2) >> 0x3f & 0x20));
        lVar5 = CONCAT71(uStack_8f,local_90) + -2;
        if (0 < lVar5) {
          h = (runtime_hmap *)0x0;
          while( true ) {
            local_a8 = (runtime_maptype *)(prVar4->typ).size;
            local_a0 = (runtime_maptype *)(prVar4->typ).ptrdata;
            local_b0 = (runtime_maptype *)net_protocols;
            ky_00.len = (int)&DAT_00236320;
            ky_00.str = (uint8 *)local_a8;
            in_RDI = &DAT_00236320;
            local_28 = local_a8;
            local_20 = prVar4;
            mVar8 = runtime_mapaccess2_faststr(prVar4,h,ky_00);
            if (local_90 == '\0') {
              local_b0 = (runtime_maptype *)net_protocols;
              local_a8 = local_28;
              s_01.len = (int)in_RDI;
              s_01.str = (uint8 *)&DAT_00236320;
              runtime_mapassign_faststr
                        (local_a0,(runtime_hmap *)CONCAT71((int7)((ulong)h >> 8),mVar8.~r4),s_01);
              *(undefined8 **)local_98 = puVar7;
            }
            h = (runtime_hmap *)((long)&h->count + 1);
            if (lVar5 <= (long)h) break;
            prVar4 = (runtime_maptype *)&(local_20->typ).hash;
          }
        }
      }
    }
    mVar9 = net___file__readLine((net_file *)local_30);
    iVar6 = mVar9.s.len;
    cVar3 = (char)local_a0;
  } while( true );
}

