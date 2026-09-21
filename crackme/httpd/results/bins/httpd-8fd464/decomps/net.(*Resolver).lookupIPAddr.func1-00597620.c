
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*Resolver).lookupIPAddr.func1(interface_{} ~r0, error ~r1) */

multireturn_interface____error_ net___Resolver__lookupIPAddr_func1(void)

{
  undefined8 uVar1;
  runtime__type *extraout_RAX;
  runtime_itab *prVar2;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  __uint8 val;
  context_Context cVar3;
  multireturn_interface____error_ mVar4;
  string sVar5;
  undefined *puStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  int local_58;
  void *local_50;
  undefined8 local_40;
  void *local_38;
  undefined **ppuStack_10;
  
                    /* Unresolved local var:
                       func(context.Context,_string,_string)_([]net.IPAddr,_error) * *
                       resolverFunc@[???]
                       Unresolved local var: context.Context lookupGroupCtx@[???]
                       Unresolved local var: string network@[???]
                       Unresolved local var: string host@[???] */
  while (&ppuStack_10 <= *(undefined ****)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  uVar1 = *(undefined8 *)(in_RDX + 0x20);
  puStack0000000000000008 = (undefined *)0x0;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
  ppuStack_10 = &PTR_sync___WaitGroup__Done_002b3ac0;
  cVar3.data = *(void **)(in_RDX + 0x28);
  cVar3.tab = *(runtime_itab **)(in_RDX + 0x30);
  sVar5.len = *(int *)(in_RDX + 0x38);
  sVar5.str = *(uint8 **)(in_RDX + 0x10);
  (**net_testHookLookupIP)
            (cVar3,(func_context_Context__string__string_____net_IPAddr__error_ **)
                   net_testHookLookupIP,sVar5,*(string *)(in_RDX + 8),
             *(__net_IPAddr **)(in_RDX + 0x18),(error *)*(__net_IPAddr **)(in_RDX + 0x18));
  val.len = (int)local_50;
  val.array = (uint8 *)local_40;
  val.cap = local_58;
  runtime_convTslice(val);
  prVar2 = (runtime_itab *)&DAT_00221720;
  puStack0000000000000008 = &DAT_00221720;
  uStack0000000000000010 = uVar1;
  sync___WaitGroup__Done(&net_dnsWaitGroup);
  mVar4.~r0.data = local_50;
  mVar4.~r0._type = extraout_RAX;
  mVar4.~r1.data = local_38;
  mVar4.~r1.tab = prVar2;
  return mVar4;
}

