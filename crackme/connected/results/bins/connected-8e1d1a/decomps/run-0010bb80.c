
/* net_router::run() */

undefined8 __thiscall net_router::run(net_router *this)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  _Rb_tree_node_base *p_Var9;
  undefined8 *puVar10;
  _Rb_tree_node_base *p_Var11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined2 *extraout_RDX;
  undefined2 *puVar15;
  long extraout_RDX_00;
  deque<frame,std::allocator<frame>> *this_00;
  undefined2 uVar16;
  frame *pfVar17;
  undefined8 *puVar18;
  _Rb_tree_node *p_Var19;
  undefined2 uVar20;
  deque<frame,std::allocator<frame>> *pdVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  uint uVar24;
  byte bVar25;
  undefined1 local_9c8 [11];
  undefined2 uStack_9bd;
  uint local_9ba;
  undefined8 local_51a;
  undefined4 local_508;
  undefined2 uStack_504;
  undefined1 uStack_502;
  uint uStack_501;
  undefined2 local_4fd;
  undefined8 local_5a;
  uint local_4c;
  uint *local_48;
  undefined1 local_39 [9];
  
  bVar25 = 0;
  this_00 = (deque<frame,std::allocator<frame>> *)(this + 0x18);
  do {
    puVar23 = *(undefined8 **)(this_00 + 0x10);
    if ((puVar23 != *(undefined8 **)(this_00 + 0x30)) && (*(long *)(this_00 + 0x50) != 0)) {
      lVar12 = *(long *)(this_00 + 0x20);
      puVar10 = puVar23;
      if ((long)puVar23 - *(long *)(this_00 + 0x18) != 0) {
        puVar10 = *(undefined8 **)
                   (*(long *)(this_00 + 0x28) +
                   ((long)puVar23 - *(long *)(this_00 + 0x18) >> 1) * -0xd95dd2ff9351168);
      }
      puVar18 = puVar10;
      puVar22 = (undefined8 *)local_9c8;
      for (lVar13 = 0x96; lVar13 != 0; lVar13 = lVar13 + -1) {
        *puVar22 = *puVar18;
        puVar18 = puVar18 + (ulong)bVar25 * -2 + 1;
        puVar22 = puVar22 + (ulong)bVar25 * -2 + 1;
      }
      *(undefined4 *)puVar22 = *(undefined4 *)puVar18;
      uVar2 = *(ushort *)((long)puVar18 + 4);
      uVar24 = (uint)uVar2;
      *(ushort *)((long)puVar22 + 4) = uVar2;
      uVar16 = *(undefined2 *)puVar10;
      uVar3 = *(undefined2 *)((long)puVar10 + 2);
      cVar1 = *(char *)((long)puVar10 + 6);
      uVar5 = *(uint *)((long)puVar10 + 7);
      uVar4 = *(undefined2 *)((long)puVar10 + 0xb);
      uVar6 = *(uint *)((long)puVar10 + 0xe);
      if (puVar23 == (undefined8 *)(lVar12 + -0x4b6)) {
        pdVar21 = this_00;
        uVar24 = (uint)uVar2;
        std::deque<frame,std::allocator<frame>>::_M_pop_front_aux(this_00);
        uVar20 = SUB82(pdVar21,0);
      }
      else {
        *(long *)(this_00 + 0x10) = (long)puVar23 + 0x4b6;
        uVar20 = uVar4;
      }
      if (cVar1 == '\x01') {
        local_9c8._0_2_ = uVar16;
        local_9c8._2_2_ = uVar3;
        local_9c8[6] = 1;
        local_9c8._7_4_ = uVar5;
        uStack_9bd = uVar4;
        local_9ba = uVar6;
        if (this_00[-8] == (deque<frame,std::allocator<frame>>)0x0) {
          std::__throw_bad_optional_access();
          lVar12 = extraout_RDX_00;
LAB_0010be11:
          uStack_504 = 7;
          uStack_502 = 2;
          local_508._0_2_ = uVar20;
          local_508._2_2_ = uVar16;
          uStack_501 = uVar24;
          local_4fd = uVar20;
          std::deque<frame,std::allocator<frame>>::_M_push_back_aux<frame_const&>
                    ((deque<frame,std::allocator<frame>> *)(lVar12 + 0x10),(frame *)&local_508);
        }
        else {
          uVar24 = *(uint *)(this_00 + -0xc);
          if (uVar5 != uVar24) goto LAB_0010bee0;
          uVar20 = *(undefined2 *)(this_00 + -0x10);
          lVar12 = *(long *)(this_00 + 0x50);
          puVar23 = *(undefined8 **)(lVar12 + 0x40);
          if (puVar23 == (undefined8 *)(*(long *)(lVar12 + 0x50) + -0x4b6)) goto LAB_0010be11;
          local_508._0_2_ = uVar20;
          local_508._2_2_ = uVar16;
          uStack_504 = 7;
          uStack_502 = 2;
          uStack_501 = uVar24;
          uVar24 = uStack_501;
          local_4fd = uVar20;
          uStack_501._0_1_ = (undefined1)uVar24;
          *puVar23 = CONCAT17((undefined1)uStack_501,CONCAT16(2,CONCAT24(7,CONCAT22(uVar16,uVar20)))
                             );
          *(undefined8 *)((long)puVar23 + 0x4ae) = local_5a;
          lVar13 = (long)puVar23 - (long)((ulong)(puVar23 + 1) & 0xfffffffffffffff8);
          puVar10 = (undefined8 *)((long)&local_508 - lVar13);
          puVar23 = (undefined8 *)((ulong)(puVar23 + 1) & 0xfffffffffffffff8);
          for (uVar14 = (ulong)((int)lVar13 + 0x4b6U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar23 = *puVar10;
            puVar10 = puVar10 + (ulong)bVar25 * -2 + 1;
            puVar23 = puVar23 + (ulong)bVar25 * -2 + 1;
          }
          *(long *)(lVar12 + 0x40) = *(long *)(lVar12 + 0x40) + 0x4b6;
          uStack_501 = uVar24;
        }
        (**(code **)**(undefined8 **)(*(long *)(this_00 + 0x50) + 0x68))();
      }
      else if (cVar1 == '\x02') {
        local_4c = uVar5;
        p_Var9 = (_Rb_tree_node_base *)
                 std::
                 _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                 ::_M_lower_bound((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                                   *)(this + 0x270),*(_Rb_tree_node **)(this + 0x280),
                                  (_Rb_tree_node_base *)(this + 0x278),&local_4c);
        if (((_Rb_tree_node_base *)(this + 0x278) == p_Var9) || (uVar5 < *(uint *)(p_Var9 + 0x20)))
        {
          local_48 = &local_4c;
          p_Var9 = (_Rb_tree_node_base *)
                   std::
                   _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                   ::
                   _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>
                             ((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                               *)(this + 0x270),p_Var9,&std::piecewise_construct,&local_48,local_39)
          ;
        }
        *(undefined2 *)(p_Var9 + 0x24) = uVar4;
      }
      else if (cVar1 == '\0') {
        uVar24 = uVar6 & 0xffffff00;
        local_508._0_2_ = (undefined2)uVar24;
        local_508._2_2_ = (undefined2)(uVar24 >> 0x10);
        p_Var9 = (_Rb_tree_node_base *)(this + 0x240);
        p_Var11 = (_Rb_tree_node_base *)
                  std::
                  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                  ::find((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                          *)(this + 0x238),&local_508);
        uVar8 = local_9c8._7_4_;
        local_9c8[7] = (undefined1)uVar5;
        uVar7 = local_9c8[7];
        local_9c8._7_4_ = uVar8;
        if (p_Var9 == p_Var11) {
          if (this[0x26a] != (net_router)0x0) {
            local_9c8._0_2_ = *(undefined2 *)(this + (ulong)*(ushort *)(this + 0x268) * 0x70 + 8);
            puVar15 = *(undefined2 **)(this + (ulong)*(ushort *)(this + 0x268) * 0x70 + 0x68);
            local_9c8._2_2_ = *puVar15;
            puVar23 = *(undefined8 **)(puVar15 + 0x20);
            if (puVar23 == (undefined8 *)(*(long *)(puVar15 + 0x28) + -0x4b6)) {
              local_9c8[6] = 0;
              pfVar17 = (frame *)local_9c8;
              local_9c8._7_4_ = uVar5;
              uStack_9bd = uVar4;
              local_9ba = uVar6;
              std::deque<frame,std::allocator<frame>>::_M_push_back_aux<frame_const&>
                        ((deque<frame,std::allocator<frame>> *)(puVar15 + 8),pfVar17);
            }
            else {
              local_9c8[6] = 0;
              local_9c8._7_4_ = uVar5;
              uStack_9bd = uVar4;
              local_9ba = uVar6;
              *puVar23 = CONCAT17(uVar7,(uint7)CONCAT24(local_9c8._4_2_,
                                                        CONCAT22(local_9c8._2_2_,local_9c8._0_2_)));
              *(undefined8 *)((long)puVar23 + 0x4ae) = local_51a;
              lVar12 = (long)puVar23 - (long)((ulong)(puVar23 + 1) & 0xfffffffffffffff8);
              pfVar17 = (frame *)(local_9c8 + -lVar12);
              puVar23 = (undefined8 *)((ulong)(puVar23 + 1) & 0xfffffffffffffff8);
              for (uVar14 = (ulong)((int)lVar12 + 0x4b6U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
                *puVar23 = *(undefined8 *)pfVar17;
                pfVar17 = pfVar17 + (ulong)bVar25 * -0x10 + 8;
                puVar23 = puVar23 + (ulong)bVar25 * -2 + 1;
              }
              *(long *)(puVar15 + 0x20) = *(long *)(puVar15 + 0x20) + 0x4b6;
            }
            uVar16 = SUB82(pfVar17,0);
            if (this[0x26a] == (net_router)0x0) {
              std::__throw_bad_optional_access();
              goto LAB_0010bcce;
            }
            (**(code **)**(undefined8 **)
                          (*(long *)(this + (ulong)*(ushort *)(this + 0x268) * 0x70 + 0x68) + 0x68))
                      ();
          }
        }
        else {
          p_Var19 = *(_Rb_tree_node **)(this + 0x248);
          p_Var11 = (_Rb_tree_node_base *)
                    std::
                    _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                    ::_M_lower_bound((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_short>,std::_Select1st<std::pair<unsigned_int_const,unsigned_short>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
                                      *)(this + 0x238),p_Var19,p_Var9,&local_508);
          uVar16 = SUB82(p_Var19,0);
          if ((p_Var9 == p_Var11) || (uVar24 < *(uint *)(p_Var11 + 0x20))) {
LAB_0010bcce:
            uVar3 = 0x712e;
            std::__throw_out_of_range("map::at");
            local_9c8._0_2_ = uVar3;
            puVar15 = extraout_RDX;
LAB_0010bcda:
            local_9c8[6] = 0;
            local_9c8._2_2_ = uVar16;
            local_9c8._7_4_ = uVar5;
            uStack_9bd = uVar4;
            local_9ba = uVar6;
            std::deque<frame,std::allocator<frame>>::_M_push_back_aux<frame_const&>
                      ((deque<frame,std::allocator<frame>> *)(puVar15 + 8),(frame *)local_9c8);
          }
          else {
            p_Var9 = (_Rb_tree_node_base *)(ulong)*(ushort *)(p_Var11 + 0x24);
            local_9c8._0_2_ = *(undefined2 *)(this + (long)p_Var9 * 0x70 + 8);
            puVar15 = *(undefined2 **)(this + (long)p_Var9 * 0x70 + 0x68);
            uVar16 = *puVar15;
            puVar23 = *(undefined8 **)(puVar15 + 0x20);
            if (puVar23 == (undefined8 *)(*(long *)(puVar15 + 0x28) + -0x4b6)) goto LAB_0010bcda;
            local_9c8._2_2_ = uVar16;
            local_9c8[6] = 0;
            local_9c8._7_4_ = uVar5;
            uStack_9bd = uVar4;
            local_9ba = uVar6;
            *puVar23 = CONCAT17(uVar7,(uint7)CONCAT24(local_9c8._4_2_,
                                                      CONCAT22(uVar16,local_9c8._0_2_)));
            *(undefined8 *)((long)puVar23 + 0x4ae) = local_51a;
            lVar12 = (long)puVar23 - (long)((ulong)(puVar23 + 1) & 0xfffffffffffffff8);
            puVar10 = (undefined8 *)(local_9c8 + -lVar12);
            puVar23 = (undefined8 *)((ulong)(puVar23 + 1) & 0xfffffffffffffff8);
            for (uVar14 = (ulong)((int)lVar12 + 0x4b6U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
              *puVar23 = *puVar10;
              puVar10 = puVar10 + (ulong)bVar25 * -2 + 1;
              puVar23 = puVar23 + (ulong)bVar25 * -2 + 1;
            }
            *(long *)(puVar15 + 0x20) = *(long *)(puVar15 + 0x20) + 0x4b6;
          }
          (**(code **)**(undefined8 **)(*(long *)(this + (long)p_Var9 * 0x70 + 0x68) + 0x68))();
        }
      }
    }
LAB_0010bee0:
    this_00 = this_00 + 0x70;
    if ((deque<frame,std::allocator<frame>> *)(this + 0x248) == this_00) {
      return 0;
    }
  } while( true );
}

