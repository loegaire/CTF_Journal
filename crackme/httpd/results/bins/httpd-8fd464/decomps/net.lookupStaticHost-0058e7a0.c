
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.lookupStaticHost(string host, []string ~r1) */

__string net_lookupStaticHost(string host)

{
  int iVar1;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  int iVar2;
  void *in_RDI;
  long in_FS_OFFSET;
  bool bVar3;
  __uint8 _Var4;
  __uint8 b;
  __string _Var5;
  __string _Var6;
  string s;
  string ky;
  multireturn_void___bool_ mVar7;
  string host_spill;
  undefined8 uStack0000000000000018;
  int iStack0000000000000020;
  int iStack0000000000000028;
  runtime_maptype *local_78;
  uint8 *local_70;
  char local_68;
  undefined7 uStack_67;
  undefined **ppuStack_10;
  
  s.str = (uint8 *)host.len;
  while (&ppuStack_10 <= *(undefined ****)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  ppuStack_10 = (undefined **)0x0;
  uStack0000000000000018 = 0;
  iStack0000000000000020 = 0;
  iStack0000000000000028 = 0;
  LOCK();
  bVar3 = net_hosts.Mutex.state == 0;
  if (bVar3) {
    net_hosts.Mutex.state = 1;
  }
  UNLOCK();
  iVar2 = CONCAT71(0x7a00,bVar3);
  if (!bVar3) {
    sync___Mutex__lockSlow(&net_hosts.Mutex);
  }
  ppuStack_10 = &PTR_sync___Mutex__Unlock_002b3aa0;
  net_readHosts();
  if (net_hosts.byName == (map_string___string)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (net_hosts.byName)->count;
  }
  if (iVar1 != 0) {
    s.len = iVar2;
                    /* Unresolved local var: []uint8 lowerHost@[???] */
    _Var4 = runtime_stringtoslicebyte((runtime_tmpBuf *)host_spill.len,s);
    iVar2 = CONCAT71(uStack_67,local_68);
    _Var4.array = local_70;
    _Var4.cap = iVar2;
    iVar1 = iVar2;
                    /* Unresolved local var: []string ips@[???] */
    net_lowerASCIIBytes(_Var4);
    b.len = _Var4.len;
    b.array = (uint8 *)iVar2;
    b.cap = iVar1;
    net_absDomainName(b);
    ky.len = (int)in_RDI;
    ky.str = local_70;
    mVar7 = runtime_mapaccess2_faststr(local_78,(runtime_hmap *)&DAT_002361a0,ky);
    _Var6.len = (uint8 *)CONCAT71(0x2361,mVar7.~r4);
    iVar2 = *(int *)(local_70 + 8);
    s.str = _Var6.len;
    if (local_68 != '\0') {
      iVar1 = iVar2;
                    /* Unresolved local var: []string ipsCp@[???] */
      runtime_makeslicecopy(*(runtime__type **)local_70,(int)_Var6.len,iVar2,in_RDI);
      iStack0000000000000020 = iVar2;
      iStack0000000000000028 = iVar2;
      sync___Mutex__Unlock(&net_hosts.Mutex);
      _Var6.array = (string *)extraout_RAX_00;
      _Var6.cap = iVar1;
      return _Var6;
    }
  }
  uStack0000000000000018 = 0;
  iStack0000000000000020 = 0;
  iStack0000000000000028 = 0;
  sync___Mutex__Unlock(&net_hosts.Mutex);
  _Var5.len = (int)s.str;
  _Var5.array = (string *)extraout_RAX;
  _Var5.cap = iVar2;
  return _Var5;
}

