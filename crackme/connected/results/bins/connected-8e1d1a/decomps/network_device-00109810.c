
/* network_device::network_device() */

void __thiscall network_device::network_device(network_device *this)

{
  int iVar1;
  network_device *pnVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR___cxa_pure_virtual_0011dda0;
  lVar3 = 4;
  pnVar2 = this + 8;
  do {
    iVar1 = rand();
    *(short *)pnVar2 = (short)iVar1;
    pnVar2[8] = (network_device)0x0;
    *(undefined8 *)(pnVar2 + 0x10) = 0;
    *(undefined8 *)(pnVar2 + 0x18) = 0;
    *(undefined8 *)(pnVar2 + 0x20) = 0;
    *(undefined8 *)(pnVar2 + 0x28) = 0;
    *(undefined8 *)(pnVar2 + 0x30) = 0;
    *(undefined8 *)(pnVar2 + 0x38) = 0;
    *(undefined8 *)(pnVar2 + 0x40) = 0;
    *(undefined8 *)(pnVar2 + 0x48) = 0;
    *(undefined8 *)(pnVar2 + 0x50) = 0;
    *(undefined8 *)(pnVar2 + 0x58) = 0;
                    /* try { // try from 001098bc to 001098c0 has its CatchHandler @ 001098c6 */
    std::_Deque_base<frame,std::allocator<frame>>::_M_initialize_map
              ((_Deque_base<frame,std::allocator<frame>> *)(pnVar2 + 0x10),0);
    *(undefined8 *)(pnVar2 + 0x60) = 0;
    *(undefined8 *)(pnVar2 + 0x68) = 0;
    pnVar2 = pnVar2 + 0x70;
    lVar3 = lVar3 + -1;
  } while (lVar3 != -1);
  if (this + 8 != this + 0x238) {
    pnVar2 = this + 0x70;
    do {
      *(network_device **)pnVar2 = this;
      pnVar2 = pnVar2 + 0x70;
    } while (pnVar2 != this + 0x2a0);
  }
  return;
}

