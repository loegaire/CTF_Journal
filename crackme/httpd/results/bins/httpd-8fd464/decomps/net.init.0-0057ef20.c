
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void net_init_0(void)

{
  runtime_itab *extraout_RAX;
  runtime_itab *prVar1;
  void *unaff_RBX;
  long in_FS_OFFSET;
  sort_Interface data;
  __uint8 val;
  runtime__type *local_18;
  
  while (prVar1 = (runtime_itab *)net_rfc6724policyTable.len,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  val.len = (int)unaff_RBX;
  val.array = (uint8 *)net_rfc6724policyTable.array;
  val.cap = net_rfc6724policyTable.len;
  runtime_convTslice(val);
  runtime_newobject(local_18);
  *(undefined1 **)prVar1 = go_itab_net_byMaskLength_sort_Interface;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(runtime__type **)((long)prVar1 + 8) = local_18;
  }
  else {
    runtime_gcWriteBarrierCX();
    prVar1 = extraout_RAX;
  }
  data.data = unaff_RBX;
  data.tab = prVar1;
  sort_Sort(data);
  return;
}

