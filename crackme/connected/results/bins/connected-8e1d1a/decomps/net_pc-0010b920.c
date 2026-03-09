
/* net_pc::net_pc(unsigned int) */

void __thiscall net_pc::net_pc(net_pc *this,uint param_1)

{
  _Rb_tree_node_base *p_Var1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  net_pc *pnVar5;
  _Rb_tree_node_base *p_Var6;
  ulong uVar7;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
  *p_Var8;
  undefined8 *puVar9;
  long lVar10;
  byte bVar11;
  uint local_3c;
  uint *local_38;
  undefined1 local_29;
  
  bVar11 = 0;
  *(undefined ***)this = &PTR___cxa_pure_virtual_0011dda0;
  lVar10 = 4;
  p_Var8 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
            *)(this + 8);
  local_3c = param_1;
  do {
    iVar4 = rand();
    *(short *)p_Var8 = (short)iVar4;
    p_Var8[8] = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                 )0x0;
    *(undefined8 *)(p_Var8 + 0x10) = 0;
    *(undefined8 *)(p_Var8 + 0x18) = 0;
    *(undefined8 *)(p_Var8 + 0x20) = 0;
    *(undefined8 *)(p_Var8 + 0x28) = 0;
    *(undefined8 *)(p_Var8 + 0x30) = 0;
    *(undefined8 *)(p_Var8 + 0x38) = 0;
    *(undefined8 *)(p_Var8 + 0x40) = 0;
    *(undefined8 *)(p_Var8 + 0x48) = 0;
    *(undefined8 *)(p_Var8 + 0x50) = 0;
    *(undefined8 *)(p_Var8 + 0x58) = 0;
                    /* try { // try from 0010b9d3 to 0010b9d7 has its CatchHandler @ 0010b9dd */
    std::_Deque_base<frame,std::allocator<frame>>::_M_initialize_map
              ((_Deque_base<frame,std::allocator<frame>> *)(p_Var8 + 0x10),0);
    uVar3 = local_3c;
    *(undefined8 *)(p_Var8 + 0x60) = 0;
    *(undefined8 *)(p_Var8 + 0x68) = 0;
    lVar10 = lVar10 + -1;
    p_Var8 = p_Var8 + 0x70;
  } while (lVar10 != -1);
  p_Var8 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
            *)(this + 0x238);
  if (p_Var8 != (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                 *)(this + 8)) {
    pnVar5 = this + 0x70;
    do {
      *(net_pc **)pnVar5 = this;
      pnVar5 = pnVar5 + 0x70;
    } while (this + 0x2a0 != pnVar5);
  }
  *(undefined ***)this = &PTR_run_0011dbe0;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  p_Var1 = (_Rb_tree_node_base *)(this + 0x240);
  *(_Rb_tree_node_base **)(this + 0x250) = p_Var1;
  *(_Rb_tree_node_base **)(this + 600) = p_Var1;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(uint *)(this + 0xc) = local_3c;
  this[0x10] = (net_pc)0x1;
  uVar2 = *(undefined2 *)(this + 8);
  p_Var6 = (_Rb_tree_node_base *)
           std::
           _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
           ::_M_lower_bound(p_Var8,(_Rb_tree_node *)0x0,p_Var1,&local_3c);
  if ((p_Var1 == p_Var6) || (uVar3 < *(uint *)(p_Var6 + 0x20))) {
    local_38 = &local_3c;
                    /* try { // try from 0010bada to 0010bade has its CatchHandler @ 0010bb2a */
    p_Var6 = (_Rb_tree_node_base *)
             std::
             _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
             ::
             _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>
                       (p_Var8,p_Var6,&std::piecewise_construct,&local_38,&local_29);
  }
  *(undefined2 *)(p_Var6 + 0x24) = uVar2;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  puVar9 = (undefined8 *)((ulong)(this + 0x278) & 0xfffffffffffffff8);
  for (uVar7 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 0x278) & 0xfffffffffffffff8))
                       + 0x370U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
  }
  return;
}

