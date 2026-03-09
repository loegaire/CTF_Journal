
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.binarySearchTree(runtime.stackObjectBuf * x, int idx, int
   n, runtime.stackObject * root, runtime.stackObjectBuf * restBuf, int restIdx) */

multireturn_runtime_stackObject___runtime_stackObjectBuf___int_
runtime_binarySearchTree(runtime_stackObjectBuf *x,int idx,int n)

{
  runtime_stackObjectBuf *x_00;
  long lVar1;
  int idx_00;
  long in_FS_OFFSET;
  multireturn_runtime_stackObject___runtime_stackObjectBuf___int_ mVar2;
  multireturn_runtime_stackObject___runtime_stackObjectBuf___int_ mVar3;
  runtime_stackObjectBuf *x_spill;
  int idx_spill;
  int n_spill;
  undefined8 local_48;
  long local_40;
  ulong local_38;
  
                    /* Unresolved local var: runtime.stackObject * left@[???]
                       Unresolved local var: runtime.stackObject * right@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (n_spill == 0) {
    mVar3.restBuf = (runtime_stackObjectBuf *)idx;
    mVar3.root = (runtime_stackObject *)idx_spill;
    mVar3.restIdx = n;
    return mVar3;
  }
  x_00 = (runtime_stackObjectBuf *)(n_spill / 2);
  runtime_binarySearchTree(x_00,idx,n_spill);
  if (0x3e < local_38) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  lVar1 = local_38 * 0x20;
  idx_00 = local_40;
  if (local_38 == 0x3e) {
    idx_00 = *(int *)(local_40 + 0x18);
  }
  runtime_binarySearchTree((runtime_stackObjectBuf *)((n_spill - (long)x_00) + -1),idx_00,(int)x_00)
  ;
  *(undefined8 *)(local_40 + 0x30 + lVar1) = local_48;
  *(undefined8 *)(local_40 + 0x38 + lVar1) = local_48;
  mVar2.restBuf = (runtime_stackObjectBuf *)lVar1;
  mVar2.root = (runtime_stackObject *)local_40;
  mVar2.restIdx = local_38;
  return mVar2;
}

