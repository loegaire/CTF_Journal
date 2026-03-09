
/* WARNING: Unknown calling convention */

void fmt___pp__fmtComplex(fmt_pp *p,complex128 v,int size,int32 verb)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  runtime__type *et;
  long extraout_RAX;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  runtime_slice old;
  runtime_slice old_00;
  fmt_pp *p_spill;
  int size_spill;
  int32 verb_spill;
  long local_38;
  long local_30;
  undefined1 *local_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: bool oldPlus@[???] */
  if (verb_spill < 99) {
    if (((verb_spill - 0x45U < 3) || (verb_spill == 0x58)) || (verb_spill == 0x62)) {
LAB_0056ac7b:
      uVar2 = *(undefined1 *)(v._0_8_ + 0x4b);
      lVar4 = *(long *)(v._0_8_ + 8);
      lVar5 = *(long *)v._0_8_;
      if (*(ulong *)(v._0_8_ + 0x10) < lVar4 + 1U) {
        old.len = v._0_8_;
        old.array = (void *)lVar4;
        old.cap = *(long *)v._0_8_;
        runtime_growslice((runtime__type *)&DAT_00225720,old,lVar4 + 1U);
        *(undefined1 **)(v._0_8_ + 0x10) = local_28;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(long *)v._0_8_ = local_38;
          lVar4 = local_30;
          lVar5 = local_38;
        }
        else {
          runtime_gcWriteBarrier();
          lVar4 = local_30;
          lVar5 = extraout_RAX;
        }
      }
      *(long *)(v._0_8_ + 8) = lVar4 + 1;
      *(undefined1 *)(lVar5 + lVar4) = 0x28;
      fmt___pp__fmtFloat((fmt_pp *)(ulong)(uint)verb_spill,(float64)v._8_8_,size_spill,v._0_4_);
      *(undefined1 *)(v._0_8_ + 0x4b) = 1;
      fmt___pp__fmtFloat((fmt_pp *)v._0_8_,(float64)p_spill,size_spill,verb_spill);
      et = *(runtime__type **)(v._0_8_ + 8);
      puVar1 = (undefined1 *)((long)&et->size + 2);
      puVar3 = *(undefined1 **)(v._0_8_ + 0x10);
      lVar4 = *(long *)v._0_8_;
      if (*(undefined1 **)(v._0_8_ + 0x10) < puVar1) {
        old_00.len = (int)puVar1;
        old_00.array = (void *)*(long *)v._0_8_;
        old_00.cap = v._0_8_;
        runtime_growslice(et,old_00,0x225720);
        puVar3 = local_28;
        lVar4 = local_38;
      }
      *(undefined2 *)((long)&et->size + lVar4) = 0x2969;
      *(undefined1 **)(v._0_8_ + 8) = puVar1;
      *(undefined1 **)(v._0_8_ + 0x10) = puVar3;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(long *)v._0_8_ = lVar4;
      }
      else {
        runtime_gcWriteBarrierBX();
      }
      *(undefined1 *)(v._0_8_ + 0x4b) = uVar2;
      return;
    }
  }
  else if (((verb_spill - 0x65U < 3) || (verb_spill == 0x76)) || (verb_spill == 0x78))
  goto LAB_0056ac7b;
  fmt___pp__badVerb((fmt_pp *)(ulong)(uint)verb_spill,(int32)size);
  return;
}

