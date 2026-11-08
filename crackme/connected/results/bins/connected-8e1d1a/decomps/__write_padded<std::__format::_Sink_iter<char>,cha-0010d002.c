
/* std::__format::_Sink_iter<char> std::__format::__write_padded<std::__format::_Sink_iter<char>,
   char>(std::__format::_Sink_iter<char>, std::basic_string_view<char, std::char_traits<char> >,
   std::__format::_Align, unsigned long, char32_t) */

__format * __thiscall
std::__format::__write_padded<std::__format::_Sink_iter<char>,char>
          (__format *this,ulong param_2,void *param_3,int param_4,ulong param_5,uint param_6)

{
  string *psVar1;
  bool bVar2;
  bool bVar3;
  string *psVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  __format *p_Var9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  void *pvVar13;
  byte bVar14;
  byte bVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  ulong *puVar21;
  ulong local_e8;
  uint local_ac;
  ulong *local_a8;
  ulong local_a0;
  ulong local_98 [2];
  byte local_88 [8];
  string *local_80;
  string *local_78;
  byte local_70;
  byte local_6f;
  undefined1 local_6e;
  ulong **local_68;
  long local_58 [5];
  
  local_58[0]._0_1_ = 0;
  if (param_4 == 3) {
    uVar16 = param_5 >> 1;
    param_5 = ((uint)param_5 & 1) + uVar16;
    local_e8 = param_5;
  }
  else {
    uVar16 = 0;
    local_e8 = param_5;
    if (param_4 == 2) {
      local_e8 = 0;
      uVar16 = param_5;
    }
  }
  bVar14 = (byte)param_6;
  if (0x7e < param_6) {
    if (param_6 < 0xd800) {
      uVar17 = 0x1f;
      if (param_6 != 0) {
        for (; param_6 >> uVar17 == 0; uVar17 = uVar17 - 1) {
        }
      }
      iVar5 = 0x20 - (uVar17 ^ 0x1f);
      if (iVar5 < 8) {
        bVar15 = 1;
        local_88[3] = 0;
        local_88[2] = 0;
        local_88[1] = 0;
        local_88[0] = bVar14;
        goto LAB_0010d0fd;
      }
      if (iVar5 < 0xc) {
        local_88[0] = (byte)(param_6 >> 6) | 0xc0;
        local_88[1] = bVar14 & 0x3f | 0x80;
        bVar15 = 2;
        local_88[3] = 0;
        local_88[2] = 0;
        goto LAB_0010d0fd;
      }
LAB_0010d193:
      uVar17 = param_6;
      if (0x10 < iVar5) {
        local_88[0] = (byte)(param_6 >> 0x12) | 0xf0;
        local_88[1] = (byte)(param_6 >> 0xc) & 0x3f | 0x80;
        local_88[2] = (byte)(param_6 >> 6) & 0x3f | 0x80;
        local_88[3] = bVar14 & 0x3f | 0x80;
        bVar15 = 4;
        goto LAB_0010d0fd;
      }
    }
    else {
      if (param_6 - 0xe000 < 0x102000) {
        uVar17 = 0x1f;
        if (param_6 != 0) {
          for (; param_6 >> uVar17 == 0; uVar17 = uVar17 - 1) {
          }
        }
        iVar5 = 0x20 - (uVar17 ^ 0x1f);
        goto LAB_0010d193;
      }
      uVar17 = 0xfffd;
    }
    local_88[0] = (byte)(uVar17 >> 0xc) | 0xe0;
    local_88[1] = (byte)(uVar17 >> 6) & 0x3f | 0x80;
    local_88[2] = (byte)uVar17 & 0x3f | 0x80;
    bVar15 = 3;
    local_88[3] = 0;
LAB_0010d0fd:
    local_a8 = local_98;
    local_a0 = 0;
    local_80 = (string *)&local_ac;
    local_78 = (string *)&local_ac;
    local_70 = 0;
    local_6f = bVar15;
    local_6e = 1;
    local_68 = &local_a8;
    bVar3 = false;
    bVar14 = 0;
    bVar2 = false;
    uVar12 = 0;
    do {
      psVar4 = local_78;
      local_70 = 0;
      uVar11 = uVar12 + 1;
      *(byte *)((long)local_98 + uVar12) = local_88[bVar14];
      local_ac = param_6;
      if (bVar14 + 1 == (uint)bVar15 && local_78 != (string *)&local_a8) {
        psVar1 = local_78 + 4;
        if (psVar1 == (string *)&local_a8) goto LAB_0010d63f;
        local_78 = local_78 + 8;
        uVar17 = *(uint *)(psVar4 + 4);
        if (uVar17 < 0xd800) {
          if (uVar17 != 0) {
            uVar10 = 0x1f;
            if (uVar17 != 0) {
              for (; uVar17 >> uVar10 == 0; uVar10 = uVar10 - 1) {
              }
            }
            iVar5 = 0x20 - (uVar10 ^ 0x1f);
            if (7 < iVar5) {
              if (0xb < iVar5) goto LAB_0010d2ba;
              local_88[0] = (byte)(uVar17 >> 6) | 0xc0;
              local_88[1] = (byte)uVar17 & 0x3f | 0x80;
              local_88[3] = 0;
              local_88[2] = 0;
              bVar15 = 2;
              goto LAB_0010d286;
            }
          }
          local_88[0] = (byte)uVar17;
          local_88[3] = 0;
          local_88[2] = 0;
          local_88[1] = 0;
          bVar15 = 1;
        }
        else {
          if (0x101fff < uVar17 - 0xe000) {
            uVar17 = 0xfffd;
          }
          uVar10 = 0x1f;
          if (uVar17 != 0) {
            for (; uVar17 >> uVar10 == 0; uVar10 = uVar10 - 1) {
            }
          }
          iVar5 = 0x20 - (uVar10 ^ 0x1f);
LAB_0010d2ba:
          if (iVar5 < 0x11) {
            local_88[0] = (byte)(uVar17 >> 0xc) | 0xe0;
            local_88[1] = (byte)(uVar17 >> 6) & 0x3f | 0x80;
            local_88[2] = (byte)uVar17 & 0x3f | 0x80;
            local_88[3] = 0;
            bVar15 = 3;
          }
          else {
            local_88[0] = (byte)(uVar17 >> 0x12) | 0xf0;
            local_88[1] = (byte)(uVar17 >> 0xc) & 0x3f | 0x80;
            local_88[2] = (byte)(uVar17 >> 6) & 0x3f | 0x80;
            local_88[3] = (byte)uVar17 & 0x3f | 0x80;
            bVar15 = 4;
          }
        }
LAB_0010d286:
        local_78 = psVar1;
        bVar14 = 0;
        bVar2 = true;
LAB_0010d36a:
        bVar3 = true;
      }
      else {
        if (bVar14 + 1 < (uint)bVar15) {
          bVar14 = bVar14 + 1;
          goto LAB_0010d36a;
        }
        if ((local_78 == (string *)&local_a8) && (bVar14 == 0)) {
          if (bVar3) {
            local_70 = 0;
          }
          local_70 = 0;
          if (!bVar2) goto LAB_0010d63f;
          local_6f = bVar15;
          goto LAB_0010d699;
        }
      }
      uVar12 = uVar11;
    } while (uVar11 != 0xf);
    if (bVar3) {
      local_70 = bVar14;
    }
    if (bVar2) {
      local_6f = bVar15;
    }
LAB_0010d699:
    if ((local_70 != 0) || (local_78 != (string *)&local_a8)) {
      uVar18 = 0xf;
      uVar12 = uVar11;
LAB_0010d5e5:
      bVar14 = local_70;
      psVar4 = local_78;
      if (uVar12 == uVar18) {
        uVar18 = uVar12 + 1;
        if ((long)uVar18 < 0) {
LAB_0010d421:
          uVar7 = std::__throw_length_error("basic_string::_M_create");
                    /* catch() { ... } // from try @ 0010d41c with catch @ 0010d42d
                       catch() { ... } // from try @ 0010d447 with catch @ 0010d42d */
          __cxx11::string::_M_dispose((string *)&local_a8);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume(uVar7);
        }
        if (uVar12 < uVar18) {
          uVar11 = uVar12 * 2;
          uVar6 = 0x7fffffffffffffff;
          if (uVar11 < 0x8000000000000000) {
            uVar6 = uVar11;
          }
          if (uVar18 < uVar11) {
            uVar18 = uVar6;
          }
          uVar11 = uVar18 + 1;
          if ((long)uVar11 < 0) {
                    /* try { // try from 0010d41c to 0010d42c has its CatchHandler @ 0010d42d */
            std::__throw_bad_alloc();
            goto LAB_0010d421;
          }
        }
        else {
          uVar11 = 1;
        }
                    /* try { // try from 0010d447 to 0010d44b has its CatchHandler @ 0010d42d */
        puVar8 = operator_new(uVar11);
        if (uVar12 == 1) {
          *(char *)puVar8 = (char)*local_a8;
        }
        else if (uVar12 != 0) {
          memcpy(puVar8,local_a8,uVar12);
        }
        __cxx11::string::_M_dispose((string *)&local_a8);
        local_a8 = puVar8;
        local_98[0] = uVar18;
      }
      uVar11 = uVar12 + 1;
      *(byte *)((long)local_a8 + uVar12) = local_88[bVar14];
      uVar12 = uVar11;
      if ((bVar14 + 1 == (uint)local_6f) && (psVar4 != (string *)&local_a8)) {
        if (psVar4 + 4 == (string *)&local_a8) goto LAB_0010d63f;
        uVar17 = *(uint *)(psVar4 + 4);
        if (uVar17 < 0xd800) {
          local_70 = 0;
          if (uVar17 != 0) {
            uVar10 = 0x1f;
            if (uVar17 != 0) {
              for (; uVar17 >> uVar10 == 0; uVar10 = uVar10 - 1) {
              }
            }
            iVar5 = 0x20 - (uVar10 ^ 0x1f);
            if (7 < iVar5) {
              if (0xb < iVar5) goto LAB_0010d525;
              local_88[0] = (byte)(uVar17 >> 6) | 0xc0;
              local_88[1] = (byte)uVar17 & 0x3f | 0x80;
              local_88[3] = 0;
              local_88[2] = 0;
              local_6f = 2;
              goto LAB_0010d4f1;
            }
          }
          local_88[0] = (byte)uVar17;
          local_88[3] = 0;
          local_88[2] = 0;
          local_88[1] = 0;
          local_6f = 1;
        }
        else {
          if (0x101fff < uVar17 - 0xe000) {
            uVar17 = 0xfffd;
          }
          local_70 = 0;
          uVar10 = 0x1f;
          if (uVar17 != 0) {
            for (; uVar17 >> uVar10 == 0; uVar10 = uVar10 - 1) {
            }
          }
          iVar5 = 0x20 - (uVar10 ^ 0x1f);
LAB_0010d525:
          if (iVar5 < 0x11) {
            local_88[0] = (byte)(uVar17 >> 0xc) | 0xe0;
            local_88[1] = (byte)(uVar17 >> 6) & 0x3f | 0x80;
            local_88[2] = (byte)uVar17 & 0x3f | 0x80;
            local_88[3] = 0;
            local_6f = 3;
          }
          else {
            local_88[0] = (byte)(uVar17 >> 0x12) | 0xf0;
            local_88[1] = (byte)(uVar17 >> 0xc) & 0x3f | 0x80;
            local_88[2] = (byte)(uVar17 >> 6) & 0x3f | 0x80;
            local_88[3] = (byte)uVar17 & 0x3f | 0x80;
            local_6f = 4;
          }
        }
LAB_0010d4f1:
        local_70 = 0;
        local_78 = psVar4 + 4;
        goto LAB_0010d5e5;
      }
      if (bVar14 + 1 < (uint)local_6f) {
        local_70 = bVar14 + 1;
        goto LAB_0010d5e5;
      }
      if ((local_78 != (string *)&local_a8) || (local_70 != 0)) goto LAB_0010d5e5;
    }
LAB_0010d63f:
    puVar8 = local_a8;
    *(undefined1 *)((long)local_a8 + uVar11) = 0;
    lVar19 = uVar16 - 1;
    local_a0 = uVar11;
    if (uVar16 != 0) {
      do {
        if (uVar11 != 0) {
          pvVar13 = *(void **)(this + 0x18);
          uVar12 = *(long *)(this + 0x10) - ((long)pvVar13 - *(long *)(this + 8));
          uVar16 = uVar11;
          puVar21 = puVar8;
          if (uVar12 <= uVar11) {
            do {
              uVar18 = uVar16;
              if (uVar12 <= uVar16) {
                uVar18 = uVar12;
              }
              if (uVar18 != 0) {
                memcpy(pvVar13,puVar21,uVar18);
              }
              *(ulong *)(this + 0x18) = *(long *)(this + 0x18) + uVar12;
              puVar21 = (ulong *)((long)puVar21 + uVar12);
              uVar16 = uVar16 - uVar12;
              (*(code *)**(undefined8 **)this)(this);
              pvVar13 = *(void **)(this + 0x18);
              uVar12 = *(long *)(this + 0x10) - ((long)pvVar13 - *(long *)(this + 8));
            } while (uVar12 <= uVar16);
            if (uVar16 == 0) goto LAB_0010d719;
          }
          memcpy(pvVar13,puVar21,uVar16);
          *(ulong *)(this + 0x18) = *(long *)(this + 0x18) + uVar16;
        }
LAB_0010d719:
        lVar19 = lVar19 + -1;
      } while (lVar19 != -1);
    }
                    /* try { // try from 0010d678 to 0010d7c6 has its CatchHandler @ 0010dab7 */
    p_Var9 = (__format *)__write<std::__format::_Sink_iter<char>,char>(this,param_2,param_3);
    lVar19 = local_e8 - 1;
    if (local_e8 != 0) {
      do {
        if (uVar11 != 0) {
          pvVar13 = *(void **)(p_Var9 + 0x18);
          uVar12 = *(long *)(p_Var9 + 0x10) - ((long)pvVar13 - *(long *)(p_Var9 + 8));
          uVar16 = uVar11;
          puVar21 = puVar8;
          if (uVar12 <= uVar11) {
            do {
              uVar18 = uVar16;
              if (uVar12 <= uVar16) {
                uVar18 = uVar12;
              }
              if (uVar18 != 0) {
                memcpy(pvVar13,puVar21,uVar18);
              }
              *(ulong *)(p_Var9 + 0x18) = *(long *)(p_Var9 + 0x18) + uVar12;
              puVar21 = (ulong *)((long)puVar21 + uVar12);
              uVar16 = uVar16 - uVar12;
              (*(code *)**(undefined8 **)p_Var9)(p_Var9);
              pvVar13 = *(void **)(p_Var9 + 0x18);
              uVar12 = *(long *)(p_Var9 + 0x10) - ((long)pvVar13 - *(long *)(p_Var9 + 8));
            } while (uVar12 <= uVar16);
            if (uVar16 == 0) goto LAB_0010d7ce;
          }
          memcpy(pvVar13,puVar21,uVar16);
          *(ulong *)(p_Var9 + 0x18) = *(long *)(p_Var9 + 0x18) + uVar16;
        }
LAB_0010d7ce:
        lVar19 = lVar19 + -1;
      } while (lVar19 != -1);
    }
    __cxx11::string::_M_dispose((string *)&local_a8);
    return p_Var9;
  }
  if (param_5 < 0x20) {
    if (param_5 != 0) goto LAB_0010d05a;
  }
  else {
    param_5 = 0x20;
LAB_0010d05a:
    plVar20 = local_58;
    uVar17 = (uint)param_5;
    if (7 < uVar17) {
      uVar10 = 0;
      do {
        *(ulong *)((long)plVar20 + (ulong)uVar10) = (ulong)(param_6 & 0xff) * 0x101010101010101;
        uVar10 = uVar10 + 8;
      } while (uVar10 < (uVar17 & 0xfffffff8));
      plVar20 = (long *)((ulong)uVar10 + (long)plVar20);
    }
    if ((param_5 & 7) != 0) {
      uVar10 = 0;
      do {
        *(byte *)((long)plVar20 + (ulong)uVar10) = bVar14;
        uVar10 = uVar10 + 1;
      } while (uVar10 < (uVar17 & 7));
    }
  }
  if (uVar16 != 0) {
    if (param_5 < uVar16) {
      do {
        do {
        } while (param_5 == 0);
        pvVar13 = *(void **)(this + 0x18);
        uVar11 = *(long *)(this + 0x10) - ((long)pvVar13 - *(long *)(this + 8));
        uVar12 = param_5;
        if (param_5 < uVar11) {
          plVar20 = local_58;
LAB_0010d918:
          memcpy(pvVar13,plVar20,uVar12);
          *(ulong *)(this + 0x18) = *(long *)(this + 0x18) + uVar12;
        }
        else {
          plVar20 = local_58;
          do {
            uVar18 = uVar12;
            if (uVar11 <= uVar12) {
              uVar18 = uVar11;
            }
            if (uVar18 != 0) {
              memcpy(pvVar13,plVar20,uVar18);
            }
            *(ulong *)(this + 0x18) = *(long *)(this + 0x18) + uVar11;
            plVar20 = (long *)((long)plVar20 + uVar11);
            uVar12 = uVar12 - uVar11;
            (*(code *)**(undefined8 **)this)(this);
            pvVar13 = *(void **)(this + 0x18);
            uVar11 = *(long *)(this + 0x10) - ((long)pvVar13 - *(long *)(this + 8));
          } while (uVar11 <= uVar12);
          if (uVar12 != 0) goto LAB_0010d918;
        }
        uVar16 = uVar16 - param_5;
      } while (param_5 < uVar16);
      if (uVar16 == 0) goto LAB_0010d932;
    }
    if (param_5 <= uVar16) {
      uVar16 = param_5;
    }
    this = (__format *)__write<std::__format::_Sink_iter<char>,char>(this,uVar16,local_58);
  }
LAB_0010d932:
  if (param_2 != 0) {
    pvVar13 = *(void **)(this + 0x18);
    uVar16 = *(long *)(this + 0x10) - ((long)pvVar13 - *(long *)(this + 8));
    if (uVar16 <= param_2) {
      do {
        uVar12 = uVar16;
        if (param_2 <= uVar16) {
          uVar12 = param_2;
        }
        if (uVar12 != 0) {
          memcpy(pvVar13,param_3,uVar12);
        }
        *(ulong *)(this + 0x18) = *(long *)(this + 0x18) + uVar16;
        param_3 = (void *)((long)param_3 + uVar16);
        param_2 = param_2 - uVar16;
        (*(code *)**(undefined8 **)this)(this);
        pvVar13 = *(void **)(this + 0x18);
        uVar16 = *(long *)(this + 0x10) - ((long)pvVar13 - *(long *)(this + 8));
      } while (uVar16 <= param_2);
      if (param_2 == 0) goto LAB_0010d93f;
    }
    memcpy(pvVar13,param_3,param_2);
    *(ulong *)(this + 0x18) = *(long *)(this + 0x18) + param_2;
  }
LAB_0010d93f:
  if (local_e8 != 0) {
    if (param_5 < local_e8) {
      do {
        do {
        } while (param_5 == 0);
        pvVar13 = *(void **)(this + 0x18);
        uVar12 = *(long *)(this + 0x10) - ((long)pvVar13 - *(long *)(this + 8));
        uVar16 = param_5;
        if (param_5 < uVar12) {
          plVar20 = local_58;
LAB_0010da62:
          memcpy(pvVar13,plVar20,uVar16);
          *(ulong *)(this + 0x18) = *(long *)(this + 0x18) + uVar16;
        }
        else {
          plVar20 = local_58;
          do {
            uVar11 = uVar12;
            if (uVar16 <= uVar12) {
              uVar11 = uVar16;
            }
            if (uVar11 != 0) {
              memcpy(pvVar13,plVar20,uVar11);
            }
            *(ulong *)(this + 0x18) = *(long *)(this + 0x18) + uVar12;
            plVar20 = (long *)((long)plVar20 + uVar12);
            uVar16 = uVar16 - uVar12;
            (*(code *)**(undefined8 **)this)(this);
            pvVar13 = *(void **)(this + 0x18);
            uVar12 = *(long *)(this + 0x10) - ((long)pvVar13 - *(long *)(this + 8));
          } while (uVar12 <= uVar16);
          if (uVar16 != 0) goto LAB_0010da62;
        }
        local_e8 = local_e8 - param_5;
      } while (param_5 < local_e8);
      if (local_e8 == 0) {
        return this;
      }
    }
    if (local_e8 < param_5) {
      param_5 = local_e8;
    }
    this = (__format *)__write<std::__format::_Sink_iter<char>,char>(this,param_5,local_58);
  }
  return this;
}

