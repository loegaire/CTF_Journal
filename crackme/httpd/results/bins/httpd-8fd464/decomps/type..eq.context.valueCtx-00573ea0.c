
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.context.valueCtx(context.valueCtx * p, context.valueCtx *
   q, bool r) */

bool type__eq_context_valueCtx(context_valueCtx *p,context_valueCtx *q)

{
  runtime_itab *y;
  runtime__type *prVar1;
  long in_FS_OFFSET;
  context_valueCtx *p_spill;
  context_valueCtx *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  y = (p_spill->Context).tab;
  if (((q_spill->Context).tab == y) &&
     (runtime_ifaceeq((runtime_itab *)p_spill,(q_spill->Context).data,y), local_10 != '\0')) {
    prVar1 = (p_spill->key)._type;
    if (((q_spill->key)._type == prVar1) &&
       (runtime_efaceeq((runtime__type *)p_spill,(q_spill->key).data,prVar1), local_10 != '\0')) {
      prVar1 = (p_spill->val)._type;
      if ((q_spill->val)._type != prVar1) {
        return false;
      }
      runtime_efaceeq((p_spill->val).data,(q_spill->val).data,prVar1);
      return (bool)local_10;
    }
  }
  return false;
}

