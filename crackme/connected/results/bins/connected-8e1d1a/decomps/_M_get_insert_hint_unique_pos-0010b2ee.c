
/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, unsigned short>,
   std::_Select1st<std::pair<unsigned int const, unsigned short> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, unsigned short> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<unsigned int const,
   unsigned short> >, unsigned int const&) */

_Rb_tree_node_base * __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
           *this,_Rb_tree_node_base *param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  _Rb_tree_node_base *p_Var3;
  
  if (param_2 == (_Rb_tree_node_base *)(this + 8)) {
    if ((*(long *)(this + 0x28) == 0) || (*param_3 <= *(uint *)(*(long *)(this + 0x20) + 0x20))) {
      p_Var3 = (_Rb_tree_node_base *)_M_get_insert_unique_pos(this,param_3);
    }
    else {
      p_Var3 = (_Rb_tree_node_base *)0x0;
    }
  }
  else {
    uVar1 = *param_3;
    if (uVar1 < *(uint *)(param_2 + 0x20)) {
      p_Var3 = *(_Rb_tree_node_base **)(this + 0x18);
      if (*(_Rb_tree_node_base **)(this + 0x18) != param_2) {
        lVar2 = std::_Rb_tree_decrement(param_2);
        if (*(uint *)(lVar2 + 0x20) < uVar1) {
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
      if ((*(uint *)(param_2 + 0x20) < uVar1) &&
         (p_Var3 = (_Rb_tree_node_base *)0x0, *(_Rb_tree_node_base **)(this + 0x20) != param_2)) {
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
        if (uVar1 < *(uint *)(p_Var3 + 0x20)) {
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

