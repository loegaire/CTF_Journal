
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.gcBgMarkWorker.func1(runtime.g * g, void * nodep, bool
   ~r2) */

bool runtime_gcBgMarkWorker_func1(runtime_g *g,void *nodep)

{
  uint uVar1;
  runtime_muintptr rVar2;
  long lVar3;
  undefined1 extraout_AL;
  long in_FS_OFFSET;
  runtime_g *g_spill;
  runtime_gcBgMarkWorkerNode *node;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.m * mp@[???] */
  rVar2 = node->m;
  if (rVar2 != 0) {
                    /* Unresolved local var: runtime.g * _g_@[???] */
    lVar3 = *(long *)(in_FS_OFFSET + -8);
    uVar1 = *(uint *)(rVar2 + 0x110);
    nodep = (void *)(ulong)uVar1;
    *(uint *)(rVar2 + 0x110) = uVar1 - 1;
    if ((uVar1 == 1) && (*(char *)(lVar3 + 0xb1) != '\0')) {
      *(undefined8 *)(lVar3 + 0x10) = 0xfffffffffffffade;
    }
  }
  runtime___lfstack__push((runtime_lfstack *)node,nodep);
  return (bool)extraout_AL;
}

