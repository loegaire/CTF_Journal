
/* WARNING: Unknown calling convention */

void sort_Slice(interface___ x,func_int__int__bool **less)

{
  func_int__int_ **ppfVar1;
  long lVar2;
  void *in_RSI;
  void *maxDepth;
  runtime__type *in_RDI;
  long in_FS_OFFSET;
  sort_lessSwap data;
  interface___ iVar3;
  interface___ iVar4;
  internal_reflectlite_Value v;
  interface___ x_spill;
  func_int__int__bool **less_spill;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
                    /* Unresolved local var: func(int,_int) * * swap@[???]
                       Unresolved local var: int length@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  iVar3.data = in_RSI;
  iVar3._type = in_RDI;
  (**sort_reflectValueOf)(iVar3,(internal_reflectlite_Value *)sort_reflectValueOf);
  iVar4.data = local_30;
  iVar4._type = x_spill.data;
  maxDepth = local_30;
  (**sort_reflectSwapper)(iVar4,(func_int__int_ ***)sort_reflectSwapper);
  v.ptr = local_38;
  v.typ = (internal_reflectlite_rtype *)local_40;
  v.flag = (internal_reflectlite_flag)local_30;
  internal_reflectlite_Value_Len(v);
  lVar2 = 0;
                    /* Unresolved local var: int depth@[???]
                       Unresolved local var: int i@[???] */
  for (ppfVar1 = local_38; 0 < (long)ppfVar1; ppfVar1 = (func_int__int_ **)((long)ppfVar1 >> 1)) {
    lVar2 = lVar2 + 1;
  }
  data.Swap = local_38;
  data.Less = local_40;
  sort_quickSort_func(data,lVar2 << 1,(int)x_spill.data,(int)maxDepth);
  return;
}

