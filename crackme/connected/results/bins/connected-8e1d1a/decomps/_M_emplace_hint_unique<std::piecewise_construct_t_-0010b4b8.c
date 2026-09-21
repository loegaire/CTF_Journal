
/* std::_Rb_tree_iterator<std::pair<unsigned int const, unsigned short> > std::_Rb_tree<unsigned
   int, std::pair<unsigned int const, unsigned short>, std::_Select1st<std::pair<unsigned int const,
   unsigned short> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned
   short> > >::_M_emplace_hint_unique<std::piecewise_construct_t const&, std::tuple<unsigned int
   const&>, std::tuple<> >(std::_Rb_tree_const_iterator<std::pair<unsigned int const, unsigned
   short> >, std::piecewise_construct_t const&, std::tuple<unsigned int const&>&&, std::tuple<>&&)
    */

_Rb_tree_node_base *
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
::
_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>
          (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
           *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  _Rb_tree_node *p_Var1;
  _Rb_tree_node_base *p_Var2;
  undefined1 auVar3 [16];
  
  p_Var1 = operator_new(0x28);
  *(undefined4 *)(p_Var1 + 0x20) = *(undefined4 *)*param_4;
  *(undefined2 *)(p_Var1 + 0x24) = 0;
  auVar3 = _M_get_insert_hint_unique_pos(param_1,param_2,p_Var1 + 0x20);
  p_Var2 = auVar3._0_8_;
  if (auVar3._8_8_ == (_Rb_tree_node_base *)0x0) {
    operator_delete(p_Var1,0x28);
  }
  else {
    p_Var2 = (_Rb_tree_node_base *)_M_insert_node(param_1,p_Var2,auVar3._8_8_,p_Var1);
  }
  return p_Var2;
}

