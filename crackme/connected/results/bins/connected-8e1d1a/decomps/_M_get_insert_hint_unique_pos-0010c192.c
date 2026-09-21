
/* std::_Rb_tree<unsigned short, std::pair<unsigned short const, unsigned char>,
   std::_Select1st<std::pair<unsigned short const, unsigned char> >, std::less<unsigned short>,
   std::allocator<std::pair<unsigned short const, unsigned char> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<unsigned short const,
   unsigned char> >, unsigned short const&) */

_Rb_tree_node_base * __thiscall
std::
_Rb_tree<unsigned_short,std::pair<unsigned_short_const,unsigned_char>,std::_Select1st<std::pair<unsigned_short_const,unsigned_char>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,unsigned_char>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<unsigned_short,std::pair<unsigned_short_const,unsigned_char>,std::_Select1st<std::pair<unsigned_short_const,unsigned_char>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,unsigned_char>>>
           *this,_Rb_tree_node_base *param_2,ushort *param_3)

{
  ushort uVar1;
  long lVar2;
  _Rb_tree_node_base *p_Var3;
  
  if (param_2 == (_Rb_tree_node_base *)(this + 8)) {
    if ((*(long *)(this + 0x28) == 0) || (*param_3 <= *(ushort *)(*(long *)(this + 0x20) + 0x20))) {
      p_Var3 = (_Rb_tree_node_base *)_M_get_insert_unique_pos(this,param_3);
    }
    else {
      p_Var3 = (_Rb_tree_node_base *)0x0;
    }
  }
  else {
    uVar1 = *param_3;
    if (uVar1 < *(ushort *)(param_2 + 0x20)) {
      p_Var3 = *(_Rb_tree_node_base **)(this + 0x18);
      if (*(_Rb_tree_node_base **)(this + 0x18) != param_2) {
        lVar2 = std::_Rb_tree_decrement(param_2);
        if (*(ushort *)(lVar2 + 0x20) < uVar1) {
          p_Var3 = param_2;
          if (*(long *)(lVar2 + 0x18) == 0) {
            p_Var3 = (_Rb_tree_node_base *)0x0;
          }
        }
        else {
          p_Var3 = (_Rb_tree_node_base *)_M_get_insert_unique_pos(this,param_3);
        }
      }
    }
    else {
      p_Var3 = param_2;
      if ((*(ushort *)(param_2 + 0x20) < uVar1) &&
         (p_Var3 = (_Rb_tree_node_base *)0x0, *(_Rb_tree_node_base **)(this + 0x20) != param_2)) {
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
        if (uVar1 < *(ushort *)(p_Var3 + 0x20)) {
          if (*(long *)(param_2 + 0x18) == 0) {
            p_Var3 = (_Rb_tree_node_base *)0x0;
          }
        }
        else {
          p_Var3 = (_Rb_tree_node_base *)_M_get_insert_unique_pos(this,param_3);
        }
      }
    }
  }
  return p_Var3;
}

