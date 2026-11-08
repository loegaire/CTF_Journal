
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.funcpkgpath(runtime.funcInfo f, string ~r1) */

string runtime_funcpkgpath(runtime_funcInfo f)

{
  uint8 *puVar1;
  long in_FS_OFFSET;
  runtime_funcInfo f_00;
  runtime_funcInfo f_spill;
  long local_18;
  uint8 *local_10;
  string sVar3;
  ulong uVar2;
  
  f_00.datap = f.datap;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: string name@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  f_00._func = (runtime__func *)f_spill.datap;
  sVar3 = runtime_funcname(f_00);
  uVar2 = sVar3.len;
  puVar1 = local_10;
  do {
    puVar1 = puVar1 + -1;
    if ((long)puVar1 < 1) break;
    uVar2 = (ulong)puVar1[local_18];
  } while (puVar1[local_18] != 0x2f);
  do {
    if ((long)local_10 <= (long)puVar1) {
LAB_00506753:
      if (local_10 < puVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      sVar3.len = uVar2;
      sVar3.str = puVar1;
      return sVar3;
    }
    if (local_10 <= puVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    uVar2 = (ulong)puVar1[local_18];
    if (puVar1[local_18] == 0x2e) goto LAB_00506753;
    puVar1 = puVar1 + 1;
  } while( true );
}

