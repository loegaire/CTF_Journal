
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.fastexprand(int mean, int32 ~r1) */

int32 runtime_fastexprand(int mean)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  double dVar5;
  int mean_spill;
  
                    /* Unresolved local var: uint32 q@[???]
                       Unresolved local var: float64 qlog@[???] */
  if (mean_spill < 0x7000001) {
    if (mean_spill == 0) {
      return (int32)mean;
    }
  }
  else {
    mean_spill = 0x7000000;
  }
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
  lVar2 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  uVar4 = *(uint *)(lVar2 + 0x128);
  uVar1 = *(uint *)(lVar2 + 300);
  *(uint *)(lVar2 + 0x128) = uVar1;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar4 = uVar1 >> 0x10 ^ uVar4 >> 7 ^ uVar1 ^ uVar4;
  *(uint *)(lVar2 + 300) = uVar4;
  dVar5 = (double)((uVar4 + uVar1 & 0x3ffffff) + 1);
                    /* Unresolved local var: uint64 xBits@[???]
                       Unresolved local var: int64 xExp@[???]
                       Unresolved local var: uint64 xManIndex@[???]
                       Unresolved local var: uint64 xManScale@[???]
                       Unresolved local var: float64 low@[???]
                       Unresolved local var: float64 high@[???] */
  uVar3 = (ulong)dVar5 >> 0x2f & 0x1f;
  if (uVar3 + 1 < 0x21) {
    dVar5 = ((double)(long)(((ulong)dVar5 >> 0x34 & 0x7ff) - 0x3ff) +
             (double)runtime_fastlog2Table[uVar3] +
            (double)((ulong)dVar5 >> 0x1b & 0xfffff) *
            ((double)runtime_fastlog2Table[uVar3 + 1] - (double)runtime_fastlog2Table[uVar3]) *
            9.5367431640625e-07) - 26.0;
    if (0.0 < dVar5) {
      dVar5 = 0.0;
    }
    return (int)(dVar5 * (double)mean_spill * -0.6931471805599453) + 1;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndexU();
}

