
/* void std::deque<frame, std::allocator<frame> >::_M_push_back_aux<frame const&>(frame const&) */

void __thiscall
std::deque<frame,std::allocator<frame>>::_M_push_back_aux<frame_const&>
          (deque<frame,std::allocator<frame>> *this,frame *param_1)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long extraout_RDX;
  size_t sVar4;
  frame *pfVar5;
  long *__src;
  undefined8 *puVar6;
  char *pcVar7;
  long lVar8;
  long *__dest;
  ulong uVar9;
  ulong uVar10;
  undefined1 uVar11;
  byte bVar12;
  void *local_40;
  
  bVar12 = 0;
  lVar3 = *(long *)(this + 0x48);
  __src = *(long **)(this + 0x28);
  lVar8 = lVar3 - (long)__src;
  __dest = (long *)(lVar8 >> 3);
  uVar2 = 0x365774bfe4d445;
  if ((long)__dest +
      (*(long *)(this + 0x20) - *(long *)(this + 0x10) >> 1) * -0x1b2bba5ff26a22d +
      (*(long *)(this + 0x30) - *(long *)(this + 0x38) >> 1) * -0x1b2bba5ff26a22d +
      ((ulong)(lVar3 == 0) - 1) == 0x365774bfe4d445) {
    pcVar7 = "cannot create std::deque larger than max_size()";
    std::__throw_length_error("cannot create std::deque larger than max_size()");
    lVar3 = extraout_RDX;
  }
  else {
    uVar2 = *(ulong *)(this + 8);
    pcVar7 = *(char **)this;
    if (1 < uVar2 - (lVar3 - (long)pcVar7 >> 3)) goto LAB_001099be;
  }
  if ((ulong)(((long)__dest + 2) * 2) < uVar2) {
    __dest = (long *)(pcVar7 + (uVar2 - ((long)__dest + 2) >> 1) * 8);
    if (__dest < __src) {
      sVar4 = (lVar3 + 8) - (long)__src;
      if ((long)sVar4 < 9) {
        if (sVar4 == 8) {
          *__dest = *__src;
        }
      }
      else {
        memmove(__dest,__src,sVar4);
      }
    }
    else {
      sVar4 = (lVar3 + 8) - (long)__src;
      if ((long)sVar4 < 9) {
        if (sVar4 == 8) {
          *(long *)((long)__dest + lVar8) = *__src;
        }
      }
      else {
        memmove((void *)((long)__dest + ((lVar8 + 8) - sVar4)),__src,sVar4);
      }
    }
  }
  else {
    uVar9 = 1;
    if (uVar2 != 0) {
      uVar9 = uVar2;
    }
    uVar10 = uVar9 + uVar2 + 2;
    if (uVar10 >> 0x3c == 0) {
      local_40 = operator_new(uVar10 * 8);
      __dest = (long *)((long)local_40 + ((uVar9 + uVar2) - (long)__dest >> 1) * 8);
      __src = *(long **)(this + 0x28);
      sVar4 = (*(long *)(this + 0x48) + 8) - (long)__src;
      uVar11 = sVar4 == 8;
      if ((long)sVar4 < 9) goto LAB_00109b6d;
      memmove(__dest,__src,sVar4);
    }
    else {
      uVar10 = uVar10 >> 0x3d;
      uVar11 = uVar10 == 0;
      if (!(bool)uVar11) {
        std::__throw_bad_array_new_length();
      }
      std::__throw_bad_alloc();
LAB_00109b6d:
      if ((bool)uVar11) {
        *__dest = *__src;
      }
    }
    operator_delete(*(void **)this,*(long *)(this + 8) * 8);
    *(void **)this = local_40;
    *(ulong *)(this + 8) = uVar10;
  }
  *(long **)(this + 0x28) = __dest;
  lVar3 = *__dest;
  *(long *)(this + 0x18) = lVar3;
  *(long *)(this + 0x20) = lVar3 + 0x4b6;
  *(long **)(this + 0x48) = (long *)((long)__dest + lVar8);
  lVar3 = *(long *)((long)__dest + lVar8);
  *(long *)(this + 0x38) = lVar3;
  *(long *)(this + 0x40) = lVar3 + 0x4b6;
LAB_001099be:
  lVar3 = *(long *)(this + 0x48);
  pvVar1 = operator_new(0x4b6);
  *(void **)(lVar3 + 8) = pvVar1;
  puVar6 = *(undefined8 **)(this + 0x30);
  *puVar6 = *(undefined8 *)param_1;
  *(undefined8 *)((long)puVar6 + 0x4ae) = *(undefined8 *)(param_1 + 0x4ae);
  lVar3 = (long)puVar6 - (long)((ulong)(puVar6 + 1) & 0xfffffffffffffff8);
  pfVar5 = param_1 + -lVar3;
  puVar6 = (undefined8 *)((ulong)(puVar6 + 1) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)((int)lVar3 + 0x4b6U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar6 = *(undefined8 *)pfVar5;
    pfVar5 = pfVar5 + ((ulong)bVar12 * -2 + 1) * 8;
    puVar6 = puVar6 + (ulong)bVar12 * -2 + 1;
  }
  lVar3 = *(long *)(this + 0x48);
  *(long *)(this + 0x48) = lVar3 + 8;
  lVar3 = *(long *)(lVar3 + 8);
  *(long *)(this + 0x38) = lVar3;
  *(long *)(this + 0x40) = lVar3 + 0x4b6;
  *(long *)(this + 0x30) = lVar3;
  return;
}

