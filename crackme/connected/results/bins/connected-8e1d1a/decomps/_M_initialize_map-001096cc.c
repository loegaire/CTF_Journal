
/* std::_Deque_base<frame, std::allocator<frame> >::_M_initialize_map(unsigned long) */

void __thiscall
std::_Deque_base<frame,std::allocator<frame>>::_M_initialize_map
          (_Deque_base<frame,std::allocator<frame>> *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_R12;
  long *unaff_R13;
  
  plVar4 = (long *)(param_1 + 1);
  uVar6 = param_1 + 3;
  uVar7 = 8;
  if (7 < uVar6) {
    uVar7 = uVar6;
  }
  *(ulong *)(this + 8) = uVar7;
  if (uVar6 >> 0x3c == 0) {
    pvVar3 = operator_new(uVar7 << 3);
    *(void **)this = pvVar3;
    plVar5 = (long *)((long)pvVar3 + ((ulong)(*(long *)(this + 8) - (long)plVar4) >> 1) * 8);
    unaff_R12 = plVar5 + (long)plVar4;
    unaff_R13 = plVar5;
    if (plVar5 < unaff_R12) goto LAB_00109744;
  }
  else {
    if (uVar6 >> 0x3d != 0) {
      std::__throw_bad_array_new_length();
    }
    pvVar3 = (void *)std::__throw_bad_alloc();
    while( true ) {
      *plVar4 = (long)pvVar3;
      plVar5 = plVar4 + 1;
      if (unaff_R12 <= plVar5) break;
LAB_00109744:
                    /* try { // try from 00109749 to 0010974d has its CatchHandler @ 00109750 */
      pvVar3 = operator_new(0x4b6);
      plVar4 = plVar5;
    }
  }
  *(long **)(this + 0x28) = unaff_R13;
  lVar1 = *unaff_R13;
  *(long *)(this + 0x18) = lVar1;
  *(long *)(this + 0x20) = lVar1 + 0x4b6;
  *(long **)(this + 0x48) = unaff_R12 + -1;
  lVar2 = unaff_R12[-1];
  *(long *)(this + 0x38) = lVar2;
  *(long *)(this + 0x40) = lVar2 + 0x4b6;
  *(long *)(this + 0x10) = lVar1;
  *(long *)(this + 0x30) = lVar2;
  return;
}

