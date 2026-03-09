
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_memclrNoHeapPointers(void)

{
  undefined1 auVar1 [32];
  ulong uVar2;
  ulong uVar3;
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  undefined1 (*in_stack_00000008) [32];
  ulong in_stack_00000010;
  
  while( true ) {
    if (in_stack_00000010 == 0) {
      return;
    }
    if (in_stack_00000010 < 3) {
      (*in_stack_00000008)[0] = 0;
      in_stack_00000008[-1][in_stack_00000010 + 0x1f] = 0;
      return;
    }
    if (in_stack_00000010 < 5) {
      *(undefined2 *)*in_stack_00000008 = 0;
      *(undefined2 *)(in_stack_00000008[-1] + in_stack_00000010 + 0x1e) = 0;
      return;
    }
    if (in_stack_00000010 < 8) {
      *(undefined4 *)*in_stack_00000008 = 0;
      *(undefined4 *)(in_stack_00000008[-1] + in_stack_00000010 + 0x1c) = 0;
      return;
    }
    if (in_stack_00000010 == 8) {
      *(undefined8 *)*in_stack_00000008 = 0;
      return;
    }
    if (in_stack_00000010 < 0x11) {
      *(undefined8 *)*in_stack_00000008 = 0;
      *(undefined8 *)(in_stack_00000008[-1] + in_stack_00000010 + 0x18) = 0;
      return;
    }
    if (in_stack_00000010 < 0x21) {
      *(undefined1 (*) [16])*in_stack_00000008 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[-1] + in_stack_00000010 + 0x10) =
           (undefined1  [16])0x0;
      return;
    }
    if (in_stack_00000010 < 0x41) break;
    if (in_stack_00000010 < 0x81) {
      *(undefined1 (*) [16])*in_stack_00000008 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(*in_stack_00000008 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])in_stack_00000008[1] = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[1] + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[-2] + in_stack_00000010) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[-2] + in_stack_00000010 + 0x10) =
           (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[-1] + in_stack_00000010) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[-1] + in_stack_00000010 + 0x10) =
           (undefined1  [16])0x0;
      return;
    }
    if (in_stack_00000010 < 0x101) {
      *(undefined1 (*) [16])*in_stack_00000008 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(*in_stack_00000008 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])in_stack_00000008[1] = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[1] + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])in_stack_00000008[2] = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[2] + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])in_stack_00000008[3] = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[3] + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[-4] + in_stack_00000010) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[-4] + in_stack_00000010 + 0x10) =
           (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[-3] + in_stack_00000010) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[-3] + in_stack_00000010 + 0x10) =
           (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[-2] + in_stack_00000010) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[-2] + in_stack_00000010 + 0x10) =
           (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[-1] + in_stack_00000010) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[-1] + in_stack_00000010 + 0x10) =
           (undefined1  [16])0x0;
      return;
    }
    if (internal_cpu_X86.HasAVX2 == true) {
      if (0x1ffffff < in_stack_00000010) {
        *in_stack_00000008 = (undefined1  [32])0x0;
        uVar2 = (long)in_stack_00000008 +
                (in_stack_00000010 - (long)((ulong)(in_stack_00000008 + 1) & 0xffffffffffffffe0));
        pauVar4 = (undefined1 (*) [32])((ulong)(in_stack_00000008 + 1) & 0xffffffffffffffe0);
        do {
          pauVar5 = pauVar4;
          uVar3 = uVar2;
          auVar1 = vmovntdq_avx((undefined1  [32])0x0);
          *pauVar5 = auVar1;
          auVar1 = vmovntdq_avx((undefined1  [32])0x0);
          pauVar5[1] = auVar1;
          auVar1 = vmovntdq_avx((undefined1  [32])0x0);
          pauVar5[2] = auVar1;
          auVar1 = vmovntdq_avx((undefined1  [32])0x0);
          pauVar5[3] = auVar1;
          uVar2 = uVar3 - 0x80;
          pauVar4 = pauVar5 + 4;
        } while (0x7f < uVar3 - 0x80);
        *(undefined1 (*) [32])(pauVar5[-1] + uVar3) = (undefined1  [32])0x0;
        *(undefined1 (*) [32])(pauVar5[-2] + uVar3) = (undefined1  [32])0x0;
        *(undefined1 (*) [32])(pauVar5[-3] + uVar3) = (undefined1  [32])0x0;
        *(undefined1 (*) [32])(pauVar5[-4] + uVar3) = (undefined1  [32])0x0;
        return;
      }
      do {
        pauVar4 = in_stack_00000008;
        uVar2 = in_stack_00000010;
        *pauVar4 = (undefined1  [32])0x0;
        pauVar4[1] = (undefined1  [32])0x0;
        pauVar4[2] = (undefined1  [32])0x0;
        pauVar4[3] = (undefined1  [32])0x0;
        in_stack_00000010 = uVar2 - 0x80;
        in_stack_00000008 = pauVar4 + 4;
      } while (0x7f < uVar2 - 0x80);
      *(undefined1 (*) [32])(pauVar4[-1] + uVar2) = (undefined1  [32])0x0;
      *(undefined1 (*) [32])(pauVar4[-2] + uVar2) = (undefined1  [32])0x0;
      *(undefined1 (*) [32])(pauVar4[-3] + uVar2) = (undefined1  [32])0x0;
      *(undefined1 (*) [32])(pauVar4[-4] + uVar2) = (undefined1  [32])0x0;
      return;
    }
    do {
      *(undefined1 (*) [16])*in_stack_00000008 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(*in_stack_00000008 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])in_stack_00000008[1] = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[1] + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])in_stack_00000008[2] = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[2] + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])in_stack_00000008[3] = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[3] + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])in_stack_00000008[4] = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[4] + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])in_stack_00000008[5] = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[5] + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])in_stack_00000008[6] = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[6] + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])in_stack_00000008[7] = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(in_stack_00000008[7] + 0x10) = (undefined1  [16])0x0;
      in_stack_00000010 = in_stack_00000010 - 0x100;
      in_stack_00000008 = in_stack_00000008 + 8;
    } while (0xff < in_stack_00000010);
  }
  *(undefined1 (*) [16])*in_stack_00000008 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(*in_stack_00000008 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(in_stack_00000008[-1] + in_stack_00000010) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(in_stack_00000008[-1] + in_stack_00000010 + 0x10) = (undefined1  [16])0x0;
  return;
}

