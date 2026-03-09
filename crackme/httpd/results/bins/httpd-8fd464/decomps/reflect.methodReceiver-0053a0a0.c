
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.methodReceiver(string op, reflect.Value v, int
   methodIndex, reflect.rtype * rcvrtype, reflect.funcType * t, void * fn) */

multireturn_reflect_rtype___reflect_funcType___void___
reflect_methodReceiver(string op,reflect_Value v,int methodIndex)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  reflect_rtype *t;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *unaff_RBP;
  reflect_flag rVar11;
  uint8 *puVar12;
  int in_R9;
  long in_FS_OFFSET;
  __reflect_method _Var13;
  multireturn_reflect_rtype___reflect_funcType___void___ mVar14;
  string val;
  interface___ e;
  interface___ e_00;
  string sVar15;
  string val_00;
  interface___ e_01;
  interface___ e_02;
  interface___ e_03;
  string a1;
  string a1_00;
  string a1_01;
  string a0;
  string a0_00;
  string a0_01;
  string a2;
  string a2_00;
  string a2_01;
  string op_spill;
  reflect_nonEmptyInterface *iface;
  int i;
  
  rVar11 = v.flag;
  puVar12 = v.ptr;
  sVar15.len = (void *)op.len;
  do {
    puVar10 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar10 = (undefined1 *)((long)register0x00000020 + -0x78);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      t = *(reflect_rtype **)((long)register0x00000020 + 0x18);
      if ((t->kind & 0x1f) != 0x14) {
                    /* Unresolved local var: void * * &ifn@[???]
                       Unresolved local var: []reflect.method ms@[???] */
        *(reflect_rtype **)((long)register0x00000020 + -0x78) = t;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a1a5;
        _Var13 = reflect___rtype__exportedMethods(t);
        val.len = (void *)_Var13.len;
        lVar5 = *(long *)((long)register0x00000020 + -0x70);
        if (*(ulong *)((long)register0x00000020 + 0x30) <
            *(ulong *)((long)register0x00000020 + -0x68)) {
          lVar6 = *(ulong *)((long)register0x00000020 + 0x30) * 0x10;
          *(undefined4 *)((long)register0x00000020 + -0x2c) = *(undefined4 *)(lVar5 + 4 + lVar6);
          uVar1 = *(uint *)(lVar5 + 8 + lVar6);
          a0.str = (uint8 *)(ulong)uVar1;
          *(uint *)((long)register0x00000020 + -0x30) = uVar1;
          uVar3 = *(uint *)(lVar5 + lVar6);
          iVar7 = *(int *)((long)register0x00000020 + 0x18);
          *(int *)((long)register0x00000020 + -0x78) = iVar7;
          *(uint *)((long)register0x00000020 + -0x70) = uVar3;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a1e9;
          reflect_resolveNameOff((void *)(ulong)uVar3,uVar1);
          if ((**(byte **)((long)register0x00000020 + -0x68) & 1) != 0) {
            *(undefined **)((long)register0x00000020 + -0x78) = &DAT_002257a0;
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a209;
            runtime_newobject((runtime__type *)&DAT_002257a0);
            sVar15.len = *(void **)((long)register0x00000020 + -0x70);
            *(void **)((long)register0x00000020 + -0x10) = sVar15.len;
            *(undefined8 *)((long)register0x00000020 + -0x78) =
                 *(undefined8 *)((long)register0x00000020 + 0x18);
            *(undefined4 *)((long)register0x00000020 + -0x70) =
                 *(undefined4 *)((long)register0x00000020 + -0x30);
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a22c;
            reflect_resolveTextOff(sVar15.len,uVar1);
            if (runtime_writeBarrier._0_4_ == 0) {
              **(undefined8 **)((long)register0x00000020 + -0x10) =
                   *(undefined8 *)((long)register0x00000020 + -0x68);
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a24e;
              runtime_gcWriteBarrier();
            }
            *(void **)((long)register0x00000020 + -0x78) =
                 *(void **)((long)register0x00000020 + 0x18);
            *(undefined4 *)((long)register0x00000020 + -0x70) =
                 *(undefined4 *)((long)register0x00000020 + -0x2c);
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a268;
            reflect_resolveTypeOff(*(void **)((long)register0x00000020 + 0x18),uVar1);
            sVar15.len = *(void **)((long)register0x00000020 + -0x68);
            uVar9 = *(undefined8 *)((long)register0x00000020 + 0x18);
            lVar5 = *(long *)((long)register0x00000020 + -0x10);
LAB_0053a27a:
            *(undefined8 *)((long)register0x00000020 + 0x38) = uVar9;
            *(void **)((long)register0x00000020 + 0x40) = sVar15.len;
            *(long *)((long)register0x00000020 + 0x48) = lVar5;
            mVar14.t = (reflect_funcType *)a0.str;
            mVar14.rcvrtype = (reflect_rtype *)lVar5;
            mVar14.fn = sVar15.len;
            return mVar14;
          }
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
          *(undefined **)((long)register0x00000020 + -0x70) = &DAT_0028e6cc;
          *(undefined8 *)((long)register0x00000020 + -0x68) = 9;
          *(undefined8 *)((long)register0x00000020 + -0x60) =
               *(undefined8 *)((long)register0x00000020 + 8);
          *(undefined8 *)((long)register0x00000020 + -0x58) =
               *(undefined8 *)((long)register0x00000020 + 0x10);
          *(undefined **)((long)register0x00000020 + -0x50) = &DAT_0029c27a;
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x15;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a2ed;
          a1.len = rVar11;
          a1.str = puVar12;
          a0.len = iVar7;
          a2.len = in_R9;
          a2.str = (uint8 *)methodIndex;
          sVar15 = runtime_concatstring3((runtime_tmpBuf *)&DAT_0029c27a,a0,a1,a2);
          val.len = (void *)sVar15.len;
          *(uint8 **)((long)register0x00000020 + -0x78) =
               *(uint8 **)((long)register0x00000020 + -0x40);
          *(undefined8 *)((long)register0x00000020 + -0x70) =
               *(undefined8 *)((long)register0x00000020 + -0x38);
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a305;
          val.str = *(uint8 **)((long)register0x00000020 + -0x40);
          runtime_convTstring(val);
          *(undefined **)((long)register0x00000020 + -0x78) = &DAT_00225520;
          *(runtime__type **)((long)register0x00000020 + -0x70) =
               *(runtime__type **)((long)register0x00000020 + -0x68);
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a31f;
          e.data = val.len;
          e._type = *(runtime__type **)((long)register0x00000020 + -0x68);
          runtime_gopanic(e);
        }
        *(undefined **)((long)register0x00000020 + -0x78) = &DAT_00225520;
        *(undefined ***)((long)register0x00000020 + -0x70) = &reflect__stmp_67;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a33b;
        e_00.data = val.len;
        e_00._type = (runtime__type *)&reflect__stmp_67;
        runtime_gopanic(e_00);
LAB_0053a33b:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a345;
        runtime_panicIndex();
      }
      puVar8 = (undefined *)t[1].ptrdata;
      uVar4._0_4_ = t[1].hash;
      uVar4._4_1_ = t[1].tflag;
      uVar4._5_1_ = t[1].align;
      uVar4._6_1_ = t[1].fieldAlign;
      uVar4._7_1_ = t[1].kind;
      if (*(ulong *)((long)register0x00000020 + 0x30) < uVar4) {
        *(undefined **)((long)register0x00000020 + -0x18) = puVar8;
        uVar1 = *(uint *)(puVar8 + *(ulong *)((long)register0x00000020 + 0x30) * 8);
        a0_00.str = (uint8 *)(ulong)uVar1;
        *(reflect_rtype **)((long)register0x00000020 + -0x78) = t;
        *(uint *)((long)register0x00000020 + -0x70) = uVar1;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a105;
        reflect_resolveNameOff(t,uVar1);
        if ((**(byte **)((long)register0x00000020 + -0x68) & 1) != 0) {
          lVar5 = **(long **)((long)register0x00000020 + 0x20);
          if (lVar5 != 0) {
            a0.str = *(uint8 **)(lVar5 + 8);
            sVar15.len = *(void **)((long)register0x00000020 + 0x30);
            if ((void *)0x1869f < sVar15.len) goto LAB_0053a33b;
            *(long *)((long)register0x00000020 + -0x20) = lVar5;
            *(uint8 **)((long)register0x00000020 + -0x28) = a0.str;
            uVar2 = *(undefined4 *)
                     (*(long *)((long)register0x00000020 + -0x18) + 4 + (long)sVar15.len * 8);
            *(undefined8 *)((long)register0x00000020 + -0x78) =
                 *(undefined8 *)((long)register0x00000020 + 0x18);
            *(undefined4 *)((long)register0x00000020 + -0x70) = uVar2;
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a174;
            reflect_resolveTypeOff(sVar15.len,(int32)a0.str);
            lVar5 = *(long *)((long)register0x00000020 + -0x20) +
                    *(long *)((long)register0x00000020 + 0x30) * 8 + 0x18;
            sVar15.len = *(void **)((long)register0x00000020 + -0x68);
            uVar9 = *(undefined8 *)((long)register0x00000020 + -0x28);
            goto LAB_0053a27a;
          }
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
          *(undefined **)((long)register0x00000020 + -0x70) = &DAT_0028e6cc;
          *(undefined8 *)((long)register0x00000020 + -0x68) = 9;
          *(undefined8 *)((long)register0x00000020 + -0x60) =
               *(undefined8 *)((long)register0x00000020 + 8);
          *(undefined8 *)((long)register0x00000020 + -0x58) =
               *(undefined8 *)((long)register0x00000020 + 0x10);
          *(char **)((long)register0x00000020 + -0x50) =
               " of method on nil interface value142108547152020037174224853515625710542735760100185871124267578125BCMCSControlServersDomainNameListBayStack 450 10/100/1000 SwitchesDestination address is the serverE.164 with NSAP format subaddressEthernet Routing Switch 4550T-PWREthernetCTP skip count is odd: %dExtended MPLS LVP FEC Flow RecordGODEBUG sys/cpu: can not enable \"GODEBUG: no value specified for \"Invalid SCTP common header lengthNot all IP header bytes availableOPTera Metro 8010co OPM L2 SwitchRR Set that should exist does notSIGCHLD: child status has changedSIGTTIN: background read from ttySIGXFSZ: file size limit exceededServer Not Authoritative for zoneUnable to decode SCTPChunkType %dbad point length: %d, expected %dbase outside usable address spacebytes.Buffer.Grow: negative countconcurrent map read and map writecrypto/aes: output not full blockcrypto/des: output not full blockcrypto: requested hash function #findrunnable: negative nmspinningfreeing stack not in a stack spanheapBitsSetType: unexpected shifthttp2: invalid pseudo headers: %vhttp2: recursive push not allowedhttp: CloseIdleConnections calledhttp: invalid Read on closed Bodyhttp: multiple registrations for inappropriate file type or formatindefinite length found (not DER)invalid concurrent Body.Read callleafCounts[maxBits][maxBits] != nmin must be a non-zero power of 2misrounded allocation in sysAllocnet/http: skip alternate protocoloperation not supported by devicepad size larger than data payloadpseudo header field after regularreflect.nameFrom: name too long: reflect: Field index out of rangereflect: NumOut of non-func type reflect: array index out of rangereflect: slice index out of rangeruntime: castogscanstatus oldval=runtime: failed mSpanList.insert runtime: goroutine stack exceeds runtime: memory allocated by OS [runtime: name offset out of rangeruntime: text offset out of rangeruntime: type offset out of rangescalar has high bit set illegallyslice bounds out of range [%x:%y]stackalloc not on scheduler stackstoplockedm: inconsistent lockingst..." /* TRUNCATED STRING LITERAL */
          ;
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x21;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a396;
          a1_00.len = rVar11;
          a1_00.str = puVar12;
          a0_00.len = (int)puVar8;
          a2_00.len = in_R9;
          a2_00.str = (uint8 *)methodIndex;
          sVar15 = runtime_concatstring3((runtime_tmpBuf *)0x2a2c50,a0_00,a1_00,a2_00);
          val_00.len = (uint8 *)sVar15.len;
          *(uint8 **)((long)register0x00000020 + -0x78) =
               *(uint8 **)((long)register0x00000020 + -0x40);
          *(undefined8 *)((long)register0x00000020 + -0x70) =
               *(undefined8 *)((long)register0x00000020 + -0x38);
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a3ae;
          val_00.str = *(uint8 **)((long)register0x00000020 + -0x40);
          runtime_convTstring(val_00);
          puVar8 = &DAT_00225520;
          *(undefined **)((long)register0x00000020 + -0x78) = &DAT_00225520;
          *(runtime__type **)((long)register0x00000020 + -0x70) =
               *(runtime__type **)((long)register0x00000020 + -0x68);
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a3c8;
          e_01.data = val_00.len;
          e_01._type = *(runtime__type **)((long)register0x00000020 + -0x68);
          runtime_gopanic(e_01);
          a0_00.str = val_00.len;
        }
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
        *(undefined **)((long)register0x00000020 + -0x70) = &DAT_0028e6cc;
        *(undefined8 *)((long)register0x00000020 + -0x68) = 9;
        *(undefined8 *)((long)register0x00000020 + -0x60) =
             *(undefined8 *)((long)register0x00000020 + 8);
        *(undefined8 *)((long)register0x00000020 + -0x58) =
             *(undefined8 *)((long)register0x00000020 + 0x10);
        *(undefined **)((long)register0x00000020 + -0x50) = &DAT_0029c27a;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x15;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a419;
        a1_01.len = rVar11;
        a1_01.str = puVar12;
        a0_01.len = (int)puVar8;
        a0_01.str = a0_00.str;
        a2_01.len = in_R9;
        a2_01.str = (uint8 *)methodIndex;
        sVar15 = runtime_concatstring3((runtime_tmpBuf *)&DAT_0029c27a,a0_01,a1_01,a2_01);
        *(uint8 **)((long)register0x00000020 + -0x78) =
             *(uint8 **)((long)register0x00000020 + -0x40);
        *(undefined8 *)((long)register0x00000020 + -0x70) =
             *(undefined8 *)((long)register0x00000020 + -0x38);
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a431;
        sVar15.str = *(uint8 **)((long)register0x00000020 + -0x40);
        runtime_convTstring(sVar15);
        *(undefined **)((long)register0x00000020 + -0x78) = &DAT_00225520;
        *(runtime__type **)((long)register0x00000020 + -0x70) =
             *(runtime__type **)((long)register0x00000020 + -0x68);
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a44b;
        e_02.data = sVar15.len;
        e_02._type = *(runtime__type **)((long)register0x00000020 + -0x68);
        runtime_gopanic(e_02);
      }
      *(undefined **)((long)register0x00000020 + -0x78) = &DAT_00225520;
      *(undefined ***)((long)register0x00000020 + -0x70) = &reflect__stmp_67;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x53a467;
      e_03.data = sVar15.len;
      e_03._type = (runtime__type *)&reflect__stmp_67;
      runtime_gopanic(e_03);
    }
    *(undefined8 *)(puVar10 + -8) = 0x53a46d;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar10;
  } while( true );
}

