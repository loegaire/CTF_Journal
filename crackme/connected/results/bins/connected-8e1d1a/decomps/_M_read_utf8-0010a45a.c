
/* std::__unicode::_Utf_iterator<char, char32_t, char const*, char const*,
   std::__unicode::_Repl>::_M_read_utf8() */

void __thiscall
std::__unicode::_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>::
_M_read_utf8(_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl> *this)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  _Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl> _Var4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  
  pbVar2 = *(byte **)(this + 0x10);
  *(byte **)(this + 0x10) = pbVar2 + 1;
  bVar1 = *pbVar2;
  if ((char)bVar1 < '\0') {
    if (bVar1 < 0xc2) {
      _Var4 = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>)0x1;
      uVar5 = 0xfffd;
    }
    else {
      pbVar3 = *(byte **)(this + 0x20);
      if (pbVar2 + 1 == pbVar3) {
        _Var4 = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>)0x1;
        uVar5 = 0xfffd;
      }
      else {
        uVar5 = (uint)bVar1;
        if (bVar1 < 0xe0) {
          if ((byte)(pbVar2[1] + 0x80) < 0x40) {
            uVar5 = (uVar5 & 0x1f) << 6 | pbVar2[1] & 0x3f;
            _Var4 = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>)0x2;
          }
          else {
            _Var4 = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>)0x1;
            uVar5 = 0xfffd;
          }
        }
        else if (bVar1 < 0xf0) {
          if (bVar1 == 0xe0) {
            bVar7 = 0xa0;
            bVar6 = 0xbf;
          }
          else {
            bVar7 = 0x80;
            bVar6 = 0xbf;
            if (bVar1 == 0xed) {
              bVar6 = 0x9f;
            }
          }
          bVar1 = pbVar2[1];
          if ((bVar1 < bVar7) || (bVar6 < bVar1)) {
            _Var4 = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>)0x1;
            uVar5 = 0xfffd;
          }
          else {
            *(byte **)(this + 0x10) = pbVar2 + 2;
            if (pbVar3 == pbVar2 + 2) {
              _Var4 = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>)
                      0x2;
              uVar5 = 0xfffd;
            }
            else if ((byte)(pbVar2[2] + 0x80) < 0x40) {
              uVar5 = pbVar2[2] & 0x3f | (bVar1 & 0x3f | (uVar5 & 0xf) << 6) << 6;
              _Var4 = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>)
                      0x3;
            }
            else {
              _Var4 = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>)
                      0x2;
              uVar5 = 0xfffd;
            }
          }
        }
        else if (bVar1 < 0xf5) {
          if (bVar1 == 0xf0) {
            bVar7 = 0x90;
            bVar6 = 0xbf;
          }
          else {
            bVar7 = 0x80;
            bVar6 = 0xbf;
            if (bVar1 == 0xf4) {
              bVar6 = 0x8f;
            }
          }
          bVar1 = pbVar2[1];
          if ((bVar1 < bVar7) || (bVar6 < bVar1)) {
            _Var4 = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>)0x1;
            uVar5 = 0xfffd;
          }
          else {
            *(byte **)(this + 0x10) = pbVar2 + 2;
            if (pbVar3 == pbVar2 + 2) {
              _Var4 = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>)
                      0x2;
              uVar5 = 0xfffd;
            }
            else {
              bVar6 = pbVar2[2];
              if ((byte)(bVar6 + 0x80) < 0x40) {
                *(byte **)(this + 0x10) = pbVar2 + 3;
                if (pbVar3 == pbVar2 + 3) {
                  _Var4 = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>
                           )0x3;
                  uVar5 = 0xfffd;
                }
                else if ((byte)(pbVar2[3] + 0x80) < 0x40) {
                  uVar5 = pbVar2[3] & 0x3f |
                          ((bVar1 & 0x3f | (uVar5 & 7) << 6) << 6 | bVar6 & 0x3f) << 6;
                  _Var4 = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>
                           )0x4;
                }
                else {
                  _Var4 = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>
                           )0x3;
                  uVar5 = 0xfffd;
                }
              }
              else {
                _Var4 = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>)
                        0x2;
                uVar5 = 0xfffd;
              }
            }
          }
        }
        else {
          _Var4 = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>)0x1;
          uVar5 = 0xfffd;
        }
      }
    }
  }
  else {
    uVar5 = (uint)bVar1;
    _Var4 = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>)0x1;
  }
  this[0x1a] = _Var4;
  this[0x18] = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>)0x0;
  *(uint *)this = uVar5;
  this[0x19] = (_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>)0x1;
  *(byte **)(this + 0x10) = pbVar2;
  return;
}

