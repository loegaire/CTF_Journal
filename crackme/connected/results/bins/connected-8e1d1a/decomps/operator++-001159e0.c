
/* std::__unicode::__v15_1_0::_Grapheme_cluster_view<std::basic_string_view<char,
   std::char_traits<char> > >::_Iterator::TEMPNAMEPLACEHOLDERVALUE() */

_Iterator * __thiscall
std::__unicode::__v15_1_0::
_Grapheme_cluster_view<std::basic_string_view<char,std::char_traits<char>>>::_Iterator::operator++
          (_Iterator *this)

{
  long lVar1;
  char cVar2;
  _Iterator _Var3;
  long lVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte bVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = *(long *)(this + 0x30);
  if (lVar1 != *(long *)(this + 0x20)) {
    local_68 = *(undefined8 *)(this + 0x10);
    uStack_60 = *(undefined8 *)(this + 0x18);
    local_58 = *(long *)(this + 0x20);
    uStack_50 = *(ulong *)(this + 0x28);
    local_48 = lVar1;
    uVar10 = *(uint *)(this + 4);
    do {
      uVar5 = (uint)uStack_50._1_1_;
      if ((byte)uStack_50 + 1 == uVar5) {
        if (lVar1 == local_58) goto LAB_00115c96;
        local_58 = local_58 + (uStack_50 >> 0x10 & 0xff);
        if (lVar1 == local_58) {
          uStack_50 = (ulong)uStack_50._1_7_ << 8;
          goto LAB_00115c96;
        }
        _Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>::_M_read_utf8
                  ((_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl> *)
                   &local_68);
      }
      else if ((byte)uStack_50 + 1 < uVar5) {
        uStack_50 = CONCAT71(uStack_50._1_7_,(byte)uStack_50 + 1);
      }
      if (local_58 == lVar1) goto LAB_00115c96;
      uVar5 = *(uint *)((long)&local_68 + (uStack_50 & 0xff) * 4);
      lVar8 = 0x6a4;
      puVar9 = (uint *)__gcb_edges;
      while (lVar4 = lVar8, 0 < lVar4) {
        lVar8 = lVar4 >> 1;
        if (puVar9[lVar8] < (uVar5 << 4 | 0xf)) {
          puVar9 = puVar9 + lVar8 + 1;
          lVar8 = (lVar4 - lVar8) + -1;
        }
      }
      uVar11 = puVar9[-1] & 0xf;
      _Var3 = this[8];
      if (_Var3 != (_Iterator)0x3) {
        if (_Var3 == (_Iterator)0x1) {
          _Var3 = (_Iterator)0x3;
          if (uVar11 == 0) {
            bVar7 = 0;
            if (0xa8 < uVar5) {
              puVar6 = __xpicto_edges;
              lVar8 = 0x9c;
              while (lVar4 = lVar8, 0 < lVar4) {
                lVar8 = lVar4 >> 1;
                if (*(uint *)((long)puVar6 + lVar8 * 4) <= uVar5) {
                  puVar6 = (undefined1 *)((uint *)((long)puVar6 + lVar8 * 4) + 1);
                  lVar8 = (lVar4 - lVar8) + -1;
                }
              }
              bVar7 = (byte)((long)((long)puVar6 + -0x117ce0) >> 2) & 1;
            }
            _Var3 = (_Iterator)('\x03' - bVar7);
          }
        }
        else if (uVar11 == 10) {
          if (_Var3 == (_Iterator)0x2) {
            _Var3 = (_Iterator)0x1;
          }
          else {
            _Var3 = (_Iterator)0x3;
            if (0xa8 < *(uint *)this) {
              puVar6 = __xpicto_edges;
              lVar8 = 0x9c;
              while (lVar4 = lVar8, 0 < lVar4) {
                lVar8 = lVar4 >> 1;
                if (*(uint *)((long)puVar6 + lVar8 * 4) <= *(uint *)this) {
                  puVar6 = (undefined1 *)((uint *)((long)puVar6 + lVar8 * 4) + 1);
                  lVar8 = (lVar4 - lVar8) + -1;
                }
              }
              if (((ulong)((long)puVar6 + -0x117ce0) & 4) == 0) {
                _Var3 = (_Iterator)0x3;
              }
              else {
                _Var3 = (_Iterator)0x1;
              }
            }
          }
        }
        else if (uVar11 != 4) {
          _Var3 = (_Iterator)0x3;
        }
        this[8] = _Var3;
      }
      _Var3 = (_Iterator)0x0;
      if (uVar11 == 0xd) {
        _Var3 = (_Iterator)((char)this[9] + '\x01');
      }
      this[9] = _Var3;
      if ((((uVar5 == 0x94d) || (uVar5 == 0x9cd)) || (uVar5 == 0xacd)) ||
         (((uVar5 == 0xb4d || (uVar5 == 0xc4d)) || (uVar5 == 0xd4d)))) {
        this[10] = (_Iterator)0x1;
      }
      cVar2 = _M_is_break(this,uVar10,uVar11);
      uVar10 = uVar11;
    } while (cVar2 == '\0');
    *(uint *)this = uVar5;
    *(uint *)(this + 4) = uVar11;
    this[8] = (_Iterator)0x0;
    this[9] = (_Iterator)0x0;
    this[10] = (_Iterator)0x0;
LAB_00115c96:
    *(undefined8 *)(this + 0x10) = local_68;
    *(undefined8 *)(this + 0x18) = uStack_60;
    *(long *)(this + 0x20) = local_58;
    *(ulong *)(this + 0x28) = uStack_50;
    *(long *)(this + 0x30) = local_48;
  }
  return this;
}

