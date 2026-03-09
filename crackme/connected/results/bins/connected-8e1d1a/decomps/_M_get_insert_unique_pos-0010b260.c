
/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, unsigned short>,
   std::_Select1st<std::pair<unsigned int const, unsigned short> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, unsigned short> >
   >::_M_get_insert_unique_pos(unsigned int const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
::_M_get_insert_unique_pos
          (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
           *this,uint *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  undefined1 auVar3 [16];
  
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var1 = (_Rb_tree_node_base *)(this + 8);
LAB_0010b285:
    if (*(_Rb_tree_node_base **)(this + 0x18) == p_Var1) {
      p_Var2 = (_Rb_tree_node_base *)0x0;
      goto LAB_0010b2d0;
    }
    p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var1);
  }
  else {
    p_Var2 = *(_Rb_tree_node_base **)(this + 0x10);
    do {
      p_Var1 = p_Var2;
      if (*(uint *)(p_Var1 + 0x20) <= *param_1) {
        p_Var2 = *(_Rb_tree_node_base **)(p_Var1 + 0x18);
      }
      else {
        p_Var2 = *(_Rb_tree_node_base **)(p_Var1 + 0x10);
      }
    } while (p_Var2 != (_Rb_tree_node_base *)0x0);
    p_Var2 = p_Var1;
    if (*(uint *)(p_Var1 + 0x20) > *param_1) goto LAB_0010b285;
  }
  if (*(uint *)(p_Var2 + 0x20) < *param_1) {
    p_Var2 = (_Rb_tree_node_base *)0x0;
  }
  else {
    p_Var1 = (_Rb_tree_node_base *)0x0;
  }
LAB_0010b2d0:
  auVar3._8_8_ = p_Var1;
  auVar3._0_8_ = p_Var2;
  return auVar3;
}

