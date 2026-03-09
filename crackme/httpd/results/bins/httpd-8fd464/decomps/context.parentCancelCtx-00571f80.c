
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.parentCancelCtx(context.Context parent, context.cancelCtx
   * ~r1, bool ~r2) */

multireturn_context_cancelCtx___bool_ context_parentCancelCtx(context_Context parent)

{
  long in_FS_OFFSET;
  multireturn_context_cancelCtx___bool_ mVar1;
  multireturn_context_cancelCtx___bool_ mVar2;
  multireturn_context_cancelCtx___bool_ mVar3;
  multireturn_context_cancelCtx___bool_ mVar4;
  context_Context parent_spill;
  chan_struct___ local_40;
  undefined *local_30;
  context_cancelCtx *local_28;
  runtime__type *local_18;
  chan_struct___ phStack_10;
  
                    /* Unresolved local var: <-chan_struct_{} done@[???]
                       Unresolved local var: context.cancelCtx * p@[???]
                       Unresolved local var: chan_struct_{} pdone@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  (*(code *)parent_spill.tab[1].inter)();
  mVar1.~r2 = parent.data._0_1_;
  if ((context_closedchan == local_40) || (local_40 == (chan_struct___)0x0)) {
    mVar1.~r1 = (context_cancelCtx *)local_40;
    return mVar1;
  }
  (**(code **)&parent_spill.tab[1].hash)();
  if (local_30 != &DAT_00252720) {
    mVar4.~r2 = mVar1.~r2;
    mVar4.~r1 = local_28;
    return mVar4;
  }
                    /* Unresolved local var: void * typ@[???]
                       Unresolved local var: void * data@[???] */
  local_18 = (local_28->done).v._type;
  if ((local_18 == (runtime__type *)0x0) || (local_18 == (runtime__type *)0xffffffffffffffff)) {
    local_18 = (runtime__type *)0x0;
    phStack_10 = (chan_struct___)0x0;
  }
  else {
    phStack_10 = (local_28->done).v.data;
  }
  if (local_18 != (runtime__type *)&DAT_00222ea0) {
    phStack_10 = (chan_struct___)0x0;
  }
  if (phStack_10 != local_40) {
    mVar2.~r2 = mVar1.~r2;
    mVar2.~r1 = local_28;
    return mVar2;
  }
  mVar3.~r2 = mVar1.~r2;
  mVar3.~r1 = local_28;
  return mVar3;
}

