
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.slicerunetostring(runtime.tmpBuf * buf, []int32 a, string
   ~r2) */

string runtime_slicerunetostring(runtime_tmpBuf *buf,__int32 a)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint8 *l;
  int iVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  string sVar6;
  __uint8 p;
  __uint8 p_00;
  runtime_tmpBuf *buf_spill;
  __int32 a_spill;
  int32 local_70;
  undefined4 uStack_6c;
  long local_68;
  ulong local_60;
  uint8 *local_58;
  uint8 dum [4];
  
  iVar4 = a.cap;
  l = (uint8 *)a.array;
                    /* Unresolved local var: int size1@[???]
                       Unresolved local var: int size2@[???]
                       Unresolved local var: []uint8 b@[???]
                       Unresolved local var: string s@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  dum[0] = 0;
  dum[1] = 0;
  dum[2] = 0;
  dum[3] = 0;
                    /* Unresolved local var: int32 r@[???] */
  lVar3 = 0;
  for (lVar2 = 0; lVar2 < a_spill.len; lVar2 = lVar2 + 1) {
    local_70 = a_spill.array[lVar2];
    l = dum;
    p.len = (int)l;
    p.array = (uint8 *)lVar2;
    p.cap = (int)a_spill.array;
    runtime_encoderune(p,(int32)iVar4);
    lVar3 = local_68 + lVar3;
  }
  runtime_rawstringtmp((runtime_tmpBuf *)(lVar3 + 3),(int)l);
                    /* Unresolved local var: int32 r@[???] */
  uVar1 = CONCAT44(uStack_6c,local_70);
  lVar2 = 0;
  for (uVar5 = 0; (lVar2 < a_spill.len && ((long)uVar5 < lVar3)); uVar5 = local_68 + uVar5) {
    if (local_60 < uVar5) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    p_00.array = ((long)-((long)local_58 - uVar5) >> 0x3f & uVar5) + local_68;
    p_00.cap = local_60 - uVar5;
    p_00.len = uVar1;
    runtime_encoderune(p_00,(int32)a_spill.len);
    lVar2 = lVar2 + 1;
  }
  if (uVar5 <= uVar1) {
    sVar6.len = uVar1;
    sVar6.str = local_58;
    return sVar6;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAlen();
}

