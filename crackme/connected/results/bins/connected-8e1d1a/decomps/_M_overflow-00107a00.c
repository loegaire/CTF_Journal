
/* std::__format::_Iter_sink<char, std::__format::_Sink_iter<char> >::_M_overflow() */

void __thiscall
std::__format::_Iter_sink<char,std::__format::_Sink_iter<char>>::_M_overflow
          (_Iter_sink<char,std::__format::_Sink_iter<char>> *this)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  
  puVar4 = *(undefined1 **)(this + 8);
  puVar6 = *(undefined1 **)(this + 0x18);
  uVar7 = (long)puVar6 - (long)puVar4;
  uVar5 = *(ulong *)(this + 0x128);
  if ((long)uVar5 < 0) {
    puVar2 = *(undefined8 **)(this + 0x120);
    if (0 < (long)uVar7) {
      do {
        uVar1 = *puVar4;
        puVar3 = (undefined1 *)puVar2[3];
        puVar2[3] = puVar3 + 1;
        *puVar3 = uVar1;
        if (puVar2[3] - puVar2[1] == puVar2[2]) {
          (**(code **)*puVar2)(puVar2);
        }
        puVar4 = puVar4 + 1;
      } while (puVar6 != puVar4);
    }
    *(undefined8 **)(this + 0x120) = puVar2;
  }
  else if (*(ulong *)(this + 0x130) < uVar5) {
    uVar5 = uVar5 - *(ulong *)(this + 0x130);
    if (uVar7 < uVar5) {
      uVar5 = uVar7;
    }
    puVar2 = *(undefined8 **)(this + 0x120);
    if (0 < (long)uVar5) {
      puVar6 = puVar4 + uVar5;
      do {
        uVar1 = *puVar4;
        puVar3 = (undefined1 *)puVar2[3];
        puVar2[3] = puVar3 + 1;
        *puVar3 = uVar1;
        if (puVar2[3] - puVar2[1] == puVar2[2]) {
          (**(code **)*puVar2)(puVar2);
        }
        puVar4 = puVar4 + 1;
      } while (puVar4 != puVar6);
    }
    *(undefined8 **)(this + 0x120) = puVar2;
  }
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 8);
  *(ulong *)(this + 0x130) = *(long *)(this + 0x130) + uVar7;
  return;
}

