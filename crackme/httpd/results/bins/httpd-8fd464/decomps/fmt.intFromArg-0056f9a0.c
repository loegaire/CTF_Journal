
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void fmt.intFromArg([]interface_{} a, int argNum, int num, bool isInt,
   int newArgNum) */

multireturn_int_bool_int_ fmt_intFromArg(__interface___ a,int argNum)

{
  runtime__type *prVar1;
  ulong *puVar2;
  ulong *extraout_RAX;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  multireturn_int_bool_int_ mVar6;
  __interface___ a_spill;
  int argNum_spill;
  
  uVar5 = a.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (argNum_spill < a_spill.len) {
    if ((ulong)a_spill.len <= (ulong)argNum_spill) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    prVar1 = a_spill.array[argNum_spill]._type;
    puVar3 = a_spill.array[argNum_spill].data;
    if (prVar1 == (runtime__type *)&DAT_00224ca0) {
      uVar4 = *puVar3;
    }
    else {
      uVar4 = 0;
      if (prVar1 == (runtime__type *)0x0) {
        puVar3 = (ulong *)0x0;
        uVar5 = 0;
      }
      else {
        puVar2 = reflect_dummy.x.data;
        if ((reflect_dummy.b != false) &&
           (reflect_dummy.x._type = prVar1, puVar2 = puVar3, runtime_writeBarrier._0_4_ != 0)) {
          runtime_gcWriteBarrier();
          puVar3 = extraout_RAX;
          puVar2 = reflect_dummy.x.data;
        }
        reflect_dummy.x.data = puVar2;
                    /* Unresolved local var: reflect.rtype * t@[???]
                       Unresolved local var: reflect.flag f@[???] */
        if (prVar1 == (runtime__type *)0x0) {
          uVar5 = 0;
          puVar3 = (ulong *)0x0;
        }
        else {
          uVar5 = (ulong)(prVar1->kind & 0x1f);
        }
      }
                    /* Unresolved local var: int64 n@[???] */
      if (uVar5 - 2 < 5) {
                    /* Unresolved local var: void * p@[???] */
        if (uVar5 < 4) {
          if (uVar5 == 2) {
            uVar4 = *puVar3;
          }
          else {
            uVar4 = (ulong)(char)(byte)*puVar3;
          }
        }
        else if (uVar5 == 4) {
          uVar4 = (ulong)(short)(ushort)*puVar3;
        }
        else if (uVar5 == 5) {
          uVar4 = (ulong)(int)(uint)*puVar3;
        }
        else {
          uVar4 = *puVar3;
        }
      }
      else {
                    /* Unresolved local var: uint64 n@[???] */
        if (uVar5 - 7 < 6) {
                    /* Unresolved local var: void * p@[???] */
          if (uVar5 < 10) {
            if (uVar5 == 7) {
              uVar5 = *puVar3;
            }
            else if (uVar5 == 8) {
              uVar5 = (ulong)(byte)*puVar3;
            }
            else {
              uVar5 = (ulong)(ushort)*puVar3;
            }
          }
          else if (uVar5 == 10) {
            uVar5 = (ulong)(uint)*puVar3;
          }
          else if (uVar5 == 0xb) {
            uVar5 = *puVar3;
          }
          else {
            uVar5 = *puVar3;
          }
          if (-1 < (long)uVar5) {
            uVar4 = uVar5;
          }
        }
      }
    }
    uVar5 = uVar4 + 1000000;
    if (2000000 < uVar5) {
      uVar4 = 0;
    }
    argNum_spill = argNum_spill + 1;
  }
  else {
    uVar4 = 0;
  }
  mVar6.isInt = (undefined1)uVar5;
  mVar6.num = uVar4;
  mVar6.newArgNum = argNum_spill;
  return mVar6;
}

