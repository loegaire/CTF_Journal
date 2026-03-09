
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.interfaceMessages(int ifindex,
   []vendor/golang.org/x/net/route.Message ~r1, error ~r2) */

multireturn___vendor_golang_org_x_net_route_Message_error__conflict
net_interfaceMessages(int ifindex)

{
  int in_RCX;
  vendor_golang_org_x_net_route_RIBType unaff_RBX;
  undefined8 uVar1;
  long in_FS_OFFSET;
  __uint8 b;
  multireturn___uint8_error__conflict2 mVar2;
  multireturn___vendor_golang_org_x_net_route_Message_error_ mVar3;
  multireturn___vendor_golang_org_x_net_route_Message_error__conflict mVar4;
  multireturn___vendor_golang_org_x_net_route_Message_error__conflict mVar5;
  int ifindex_spill;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
                    /* Unresolved local var: vendor/golang.org/x/net/route.RIBType typ@[???]
                       Unresolved local var: []uint8 rib@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  mVar2 = vendor_golang_org_x_net_route_FetchRIB(ifindex_spill,unaff_RBX,in_RCX);
  mVar5.~r2.tab = mVar2.~r4.tab;
  if (local_20 == 0) {
    uVar1 = 5;
  }
  else {
    mVar2 = vendor_golang_org_x_net_route_FetchRIB(ifindex_spill,mVar2.~r3.len,local_30);
    mVar5.~r2.tab = mVar2.~r4.tab;
    if (local_20 != 0) {
      mVar5.~r1.len = local_30;
      mVar5.~r1.array = (vendor_golang_org_x_net_route_Message *)local_20;
      mVar5.~r1.cap = local_18;
      mVar5.~r2.data = local_28;
      return mVar5;
    }
    uVar1 = 3;
  }
  b.len = local_30;
  b.array = (uint8 *)uVar1;
  b.cap = (int)mVar5.~r2.tab;
  mVar3 = vendor_golang_org_x_net_route_ParseRIB(local_38,b);
  mVar4.~r2.tab = mVar3.~r3.tab;
  mVar4.~r1.len = local_20;
  mVar4.~r1.array = (vendor_golang_org_x_net_route_Message *)local_30;
  mVar4.~r1.cap = local_18;
  mVar4.~r2.data = local_10;
  return mVar4;
}

