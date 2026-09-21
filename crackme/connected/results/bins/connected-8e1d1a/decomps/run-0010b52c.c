
/* net_pc::run() */

net_pc __thiscall net_pc::run(net_pc *this)

{
  net_pc nVar1;
  undefined1 *__src;
  uint uVar2;
  int iVar3;
  long lVar4;
  _Rb_tree_node_base *p_Var5;
  long lVar6;
  ulong uVar7;
  uint extraout_EDX;
  undefined2 uVar8;
  undefined8 *puVar9;
  frame *pfVar10;
  deque<frame,std::allocator<frame>> *this_00;
  undefined8 *puVar11;
  long in_R8;
  int unaff_R12D;
  byte bVar12;
  ulong local_9f0;
  frame local_9e8;
  int local_9e4;
  undefined3 local_9e0;
  undefined1 local_9dc;
  undefined1 *local_9d8;
  ulong local_9d0;
  undefined1 local_9c8 [16];
  frame local_9b8 [2];
  undefined2 uStack_9b6;
  undefined2 uStack_9b4;
  undefined1 uStack_9b2;
  uint uStack_9b1;
  frame fStack_9ad;
  undefined1 local_9ac;
  ulong *local_9a8;
  ulong local_9a0;
  ulong local_998 [145];
  undefined8 local_50a;
  undefined1 local_4f8 [10];
  undefined1 uStack_4ee;
  undefined2 uStack_4ed;
  int local_4ea;
  void *local_4e2;
  long local_4da;
  uint local_3c;
  uint *local_38;
  undefined1 local_29;
  
  bVar12 = 0;
  puVar11 = *(undefined8 **)(this + 0x28);
  if (puVar11 == *(undefined8 **)(this + 0x48)) {
    return (net_pc)0x0;
  }
  if (*(long *)(this + 0x68) == 0) {
    return (net_pc)0x0;
  }
  lVar4 = *(long *)(this + 0x38);
  puVar9 = puVar11;
  if ((long)puVar11 - *(long *)(this + 0x30) != 0) {
    puVar9 = *(undefined8 **)
              (*(long *)(this + 0x40) +
              ((long)puVar11 - *(long *)(this + 0x30) >> 1) * -0xd95dd2ff9351168);
  }
  this_00 = (deque<frame,std::allocator<frame>> *)local_4f8;
  for (lVar6 = 0x96; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined8 *)this_00 = *puVar9;
    puVar9 = puVar9 + 1;
    this_00 = this_00 + 8;
  }
  *(undefined4 *)this_00 = *(undefined4 *)puVar9;
  *(undefined2 *)(this_00 + 4) = *(undefined2 *)((long)puVar9 + 4);
  if (puVar11 == (undefined8 *)(lVar4 + -0x4b6)) {
    this_00 = (deque<frame,std::allocator<frame>> *)(this + 0x18);
    std::deque<frame,std::allocator<frame>>::_M_pop_front_aux(this_00);
  }
  else {
    *(long *)(this + 0x28) = (long)puVar11 + 0x4b6;
  }
  uVar8 = SUB82(puVar9,0);
  if (local_4f8[6] != '\x01') {
    if (local_4f8[6] == '\x02') {
      local_3c = stack0xfffffffffffffb0f;
      p_Var5 = (_Rb_tree_node_base *)
               std::
               _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
               ::_M_lower_bound((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                                 *)(this + 0x238),*(_Rb_tree_node **)(this + 0x248),
                                (_Rb_tree_node_base *)(this + 0x240),&local_3c);
      if ((p_Var5 == (_Rb_tree_node_base *)(this + 0x240)) ||
         (stack0xfffffffffffffb0f < *(uint *)(p_Var5 + 0x20))) {
        local_38 = &local_3c;
        p_Var5 = (_Rb_tree_node_base *)
                 std::
                 _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                 ::
                 _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>
                           ((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                             *)(this + 0x238),p_Var5,&std::piecewise_construct,&local_38,&local_29);
      }
      *(undefined2 *)(p_Var5 + 0x24) = uStack_4ed;
      return (net_pc)0x1;
    }
    if (local_4f8[6] != '\0') {
      return (net_pc)0x1;
    }
    nVar1 = this[0x10];
    if (nVar1 == (net_pc)0x0) {
      std::__throw_bad_optional_access();
    }
    else {
      unaff_R12D = *(int *)(this + 0xc);
      if (local_4ea != unaff_R12D) {
        return nVar1;
      }
      if (local_4da != 4) goto LAB_0010b600;
    }
    iVar3 = memcmp(local_4e2,&DAT_00117136,4);
    if (iVar3 != 0) {
LAB_0010b600:
      if (*(code **)(this + 0x268) == (code *)0x0) {
        return nVar1;
      }
      (**(code **)(this + 0x268))(this,local_4f8 + 6);
      return nVar1;
    }
    local_9e8 = (frame)0x0;
    local_9dc = 0x20;
    local_9d8 = local_9c8;
    local_9d0 = 0;
    local_9c8[0] = 0;
    local_9e0 = CONCAT21(uStack_4ed,uStack_4ee);
    local_9e4 = unaff_R12D;
                    /* try { // try from 0010b68d to 0010b691 has its CatchHandler @ 0010b917 */
    std::__cxx11::string::assign((string *)&local_9d8,"pong");
    uVar7 = local_9d0;
    __src = local_9d8;
    local_9b8[0] = local_9e8;
    uStack_9b4 = (undefined2)local_9e4;
    uStack_9b2 = (undefined1)((uint)local_9e4 >> 0x10);
    uStack_9b1 = CONCAT31(local_9e0,(char)((uint)local_9e4 >> 0x18));
    local_9ac = (frame)local_9dc;
    local_9a8 = local_998;
    local_9f0 = local_9d0;
    if (local_9d0 < 0x10) {
      if (local_9d0 == 1) {
        local_998[0] = CONCAT71(local_998[0]._1_7_,*local_9d8);
        goto LAB_0010b6e2;
      }
      if (local_9d0 == 0) goto LAB_0010b6e2;
    }
    else {
                    /* try { // try from 0010b713 to 0010b717 has its CatchHandler @ 0010b917 */
      local_9a8 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_9a8,(ulong)&local_9f0);
      local_998[0] = local_9f0;
    }
    memcpy(local_9a8,__src,uVar7);
LAB_0010b6e2:
    local_9a0 = local_9f0;
    *(undefined1 *)((long)local_9a8 + local_9f0) = 0;
                    /* try { // try from 0010b6fd to 0010b701 has its CatchHandler @ 0010b8f8 */
    send_packet(this,local_9b8);
    std::__cxx11::string::_M_dispose((string *)&local_9a8);
    std::__cxx11::string::_M_dispose((string *)&local_9d8);
    return nVar1;
  }
  nVar1 = this[0x10];
  if (nVar1 == (net_pc)0x0) {
    local_4f8._0_2_ = (short)this_00;
    std::__throw_bad_optional_access();
    uStack_9b1 = extraout_EDX;
  }
  else {
    uStack_9b1 = *(uint *)(this + 0xc);
    if (uStack_9b1 != stack0xfffffffffffffb0f) {
      return nVar1;
    }
    uVar8 = *(undefined2 *)(this + 8);
    in_R8 = *(long *)(this + 0x68);
    puVar11 = *(undefined8 **)(in_R8 + 0x40);
    if (puVar11 != (undefined8 *)(*(long *)(in_R8 + 0x50) + -0x4b6)) {
      local_9b8[0] = SUB21(uVar8,0);
      local_9b8[1] = SUB21((ushort)uVar8 >> 8,0);
      uStack_9b6 = local_4f8._0_2_;
      uStack_9b4 = 7;
      uStack_9b2 = 2;
      uVar2 = uStack_9b1;
      *puVar11 = CONCAT17((undefined1)uStack_9b1,
                          CONCAT16(2,CONCAT24(7,CONCAT22(local_4f8._0_2_,uVar8))));
      *(undefined8 *)((long)puVar11 + 0x4ae) = local_50a;
      lVar4 = (long)puVar11 - (long)((ulong)(puVar11 + 1) & 0xfffffffffffffff8);
      pfVar10 = local_9b8 + -lVar4;
      puVar11 = (undefined8 *)((ulong)(puVar11 + 1) & 0xfffffffffffffff8);
      for (uVar7 = (ulong)((int)lVar4 + 0x4b6U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *(undefined8 *)pfVar10;
        pfVar10 = pfVar10 + ((ulong)bVar12 * -2 + 1) * 8;
        puVar11 = puVar11 + (ulong)bVar12 * -2 + 1;
      }
      *(long *)(in_R8 + 0x40) = *(long *)(in_R8 + 0x40) + 0x4b6;
      uStack_9b1 = uVar2;
      fStack_9ad = local_9b8[0];
      local_9ac = local_9b8[1];
      goto LAB_0010b800;
    }
  }
  local_9b8[0] = SUB21(uVar8,0);
  local_9b8[1] = SUB21((ushort)uVar8 >> 8,0);
  uStack_9b4 = 7;
  uStack_9b2 = 2;
  uStack_9b6 = local_4f8._0_2_;
  fStack_9ad = local_9b8[0];
  local_9ac = local_9b8[1];
  std::deque<frame,std::allocator<frame>>::_M_push_back_aux<frame_const&>
            ((deque<frame,std::allocator<frame>> *)(in_R8 + 0x10),local_9b8);
LAB_0010b800:
  (**(code **)**(undefined8 **)(*(long *)(this + 0x68) + 0x68))();
  return nVar1;
}

