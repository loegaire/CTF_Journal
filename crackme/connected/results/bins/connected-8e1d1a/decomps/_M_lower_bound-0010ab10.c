
/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, unsigned short>,
   std::_Select1st<std::pair<unsigned int const, unsigned short> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, unsigned short> >
   >::_M_lower_bound(std::_Rb_tree_node<std::pair<unsigned int const, unsigned short> >*,
   std::_Rb_tree_node_base*, unsigned int const&) */

_Rb_tree_node_base * __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
::_M_lower_bound(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                 *this,_Rb_tree_node *param_1,_Rb_tree_node_base *param_2,uint *param_3)

{
  _Rb_tree_node_base *p_Var1;
  
  if (param_1 != (_Rb_tree_node *)0x0) {
    do {
      if (*(uint *)((_Rb_tree_node_base *)param_1 + 0x20) < *param_3) {
        p_Var1 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)param_1 + 0x18);
      }
      else {
        p_Var1 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)param_1 + 0x10);
        param_2 = (_Rb_tree_node_base *)param_1;
      }
      param_1 = (_Rb_tree_node *)p_Var1;
    } while (p_Var1 != (_Rb_tree_node_base *)0x0);
  }
  return param_2;
}

