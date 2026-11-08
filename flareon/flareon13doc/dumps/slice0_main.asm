            ;-- entry0:
            ;-- func.1000006b4:
            ;-- pc:
┌ 2332: int main (int argc, char **argv);
│ `- args(x0, x1) vars(65:sp[0x8..0xf9c])
│           0x1000006b4      ef3bb66d       stp d15, d14, [sp, -0xa0]!
│           0x1000006b8      ed33016d       stp d13, d12, [var_10h]
│           0x1000006bc      eb2b026d       stp d11, d10, [sp, 0x20]
│           0x1000006c0      e923036d       stp d9, d8, [var_30h]
│           0x1000006c4      fc6f04a9       stp x28, x27, [var_40h]
│           0x1000006c8      fa6705a9       stp x26, x25, [sp, 0x50]
│           0x1000006cc      f85f06a9       stp x24, x23, [sp, 0x60]
│           0x1000006d0      f65707a9       stp x22, x21, [sp, 0x70]
│           0x1000006d4      f44f08a9       stp x20, x19, [sp, 0x80]
│           0x1000006d8      fd7b09a9       stp x29, x30, [sp, 0x90]
│           0x1000006dc      ff7340d1       sub sp, sp, 0x1c, lsl 12
│           0x1000006e0      ffc33bd1       sub sp, sp, 0xef0
│           0x1000006e4      087c4093       sxtw x8, w0                ; argc
│           0x1000006e8      f4734091       add x20, sp, 0x1c, lsl 12
│           0x1000006ec      49000090       adrp x9, segment.__DATA    ; 0x100008000
│           0x1000006f0      29411191       add x9, x9, 0x450          ; 0x100008450
│                                                                      ; section.10.__DATA.__bss
│                                                                      [10] -rw- section size 16 named 10.__DATA.__bss
│           0x1000006f4      f6474091       add x22, sp, 0x11, lsl 12
│           0x1000006f8      94423891       add x20, x20, 0xe10
│           0x1000006fc      212100a9       stp x1, x8, [x9]           ; 0x100008450
│                                                                      ; section.10.__DATA.__bss
│                                                                      [10] -rw- section size 16 named 10.__DATA.__bss ; argv
│           0x100000700      d6420a91       add x22, x22, 0x290
│           0x100000704      f3074091       add x19, sp, 1, lsl 12
│           0x100000708      e9ffff97       bl sym.func.1000006ac
│           0x10000070c      e0038052       mov w0, 0x1f
│           0x100000710      e1031f2a       mov w1, wzr
│           0x100000714      e2031faa       mov x2, xzr                ; void*addr
│           0x100000718      e3031f2a       mov w3, wzr
│           0x10000071c      af020094       bl sym.imp.ptrace          ; long ptrace(__ptrace_request request, pid_t pid, void*addr, void*data)
│           0x100000720      00e4006f       movi v0.2d, 0000000000000000
│           0x100000724      08108052       mov w8, 0x80
│           0x100000728      090000b0       adrp x9, 0x100001000
│           0x10000072c      88fe0139       strb w8, [x20, 0x7f]
│           0x100000730      0a0000b0       adrp x10, 0x100001000
│           0x100000734      2281c03d       ldr q2, [x9, 0x200]        ; [0x100001200:4]=0xb8b3db9b ; section.2.__TEXT.__const
│                                                                      [02] -r-x section size 231 named 2.__TEXT.__const
│           0x100000738      4385c03d       ldr q3, [x10, 0x210]
│           0x10000073c      49188052       mov w9, 0xc2
│           0x100000740      0b0000b0       adrp x11, 0x100001000
│           0x100000744      ea734091       add x10, sp, 0x1c, lsl 12
│           0x100000748      6489c03d       ldr q4, [x11, 0x220]
│           0x10000074c      0b0000b0       adrp x11, 0x100001000
│           0x100000750      8032803d       str q0, [x20, 0xc0]
│           0x100000754      4a413a91       add x10, x10, 0xe90
│           0x100000758      9ff20cb8       stur wzr, [x20, 0xcf]
│           0x10000075c      88fe4139       ldrb w8, [x20, 0x7f]
│           0x100000760      608294ad       stp q0, q0, [x19, 0x290]!
│           0x100000764      600201ad       stp q0, q0, [x19, 0x20]
│           0x100000768      010d014e       dup v1.16b, w8
│           0x10000076c      0901094a       eor w9, w8, w9
│           0x100000770      608202ad       stp q0, q0, [x19, 0x50]
│           0x100000774      89420339       strb w9, [x20, 0xd0]
│           0x100000778      090000b0       adrp x9, 0x100001000
│           0x10000077c      608203ad       stp q0, q0, [x19, 0x70]
│           0x100000780      221c226e       eor v2.16b, v1.16b, v2.16b
│           0x100000784      231c236e       eor v3.16b, v1.16b, v3.16b
│           0x100000788      241c246e       eor v4.16b, v1.16b, v4.16b
│           0x10000078c      608204ad       stp q0, q0, [x19, 0x90]
│           0x100000790      608205ad       stp q0, q0, [x19, 0xb0]
│           0x100000794      820e04ad       stp q2, q3, [x20, 0x80]
│           0x100000798      228dc03d       ldr q2, [x9, 0x230]
│           0x10000079c      c9148052       mov w9, 0xa6
│           0x1000007a0      6391c03d       ldr q3, [x11, 0x240]
│           0x1000007a4      4b018052       mov w11, 0xa
│           0x1000007a8      0901094a       eor w9, w8, w9
│           0x1000007ac      08051a52       eor w8, w8, 0xc0
│           0x1000007b0      89460339       strb w9, [x20, 0xd1]
│           0x1000007b4      69018052       mov w9, 0xb
│           0x1000007b8      884a0339       strb w8, [x20, 0xd2]
│           0x1000007bc      48010baa       orr x8, x10, x11
│           0x1000007c0      221c226e       eor v2.16b, v1.16b, v2.16b
│           0x1000007c4      88a602a9       stp x8, x9, [x20, 0x28]
│           0x1000007c8      48550091       add x8, x10, 0x15
│           0x1000007cc      211c236e       eor v1.16b, v1.16b, v3.16b
│           0x1000007d0      88a603a9       stp x8, x9, [x20, 0x38]
│           0x1000007d4      48810091       add x8, x10, 0x20
│           0x1000007d8      88a604a9       stp x8, x9, [x20, 0x48]
│           0x1000007dc      48ad0091       add x8, x10, 0x2b
│           0x1000007e0      88a605a9       stp x8, x9, [x20, 0x58]
│           0x1000007e4      48d90091       add x8, x10, 0x36
│           0x1000007e8      e80b00f9       str x8, [var_10h]
│           0x1000007ec      88a606a9       stp x8, x9, [x20, 0x68]
│           0x1000007f0      080000b0       adrp x8, 0x100001000
│           0x1000007f4      69020191       add x9, x19, 0x40
│           0x1000007f8      8132803d       str q1, [x20, 0xc0]
│           0x1000007fc      0195c03d       ldr q1, [x8, 0x250]
│           0x100000800      080000b0       adrp x8, 0x100001000
│           0x100000804      840a05ad       stp q4, q2, [x20, 0xa0]
│           0x100000808      0299c03d       ldr q2, [x8, 0x260]
│           0x10000080c      080000b0       adrp x8, 0x100001000
│           0x100000810      608206ad       stp q0, q0, [x19, 0xd0]
│           0x100000814      608207ad       stp q0, q0, [x19, 0xf0]
│           0x100000818      608208ad       stp q0, q0, [x19, 0x110]
│           0x10000081c      604e803d       str q0, [x19, 0x130]
│           0x100000820      618201ad       stp q1, q0, [x19, 0x30]
│           0x100000824      009dc03d       ldr q0, [x8, 0x270]        ; [0x100001270:4]=0x746f7461 ; "atot_yllekafalf_\xf0\xfdT\x06_<\x05\x03\x01AZR]=_\b"
│           0x100000828      8aae01a9       stp x10, x11, [x20, 0x18]
│           0x10000082c      0a088052       mov w10, 0x40              ; '@'
│           0x100000830      ff5f09f9       str xzr, [sp, 0x12b8]
│           0x100000834      ff5b09f9       str xzr, [sp, 0x12b0]
│           0x100000838      600a00ad       stp q0, q2, [x19]
│           0x10000083c      df020039       strb wzr, [x22]
│           0x100000840      c8024039       ldrb w8, [x22]
│           ; CODE XREF from main @ 0x100000874(x)
│       ┌─> 0x100000844      2b415fb8       ldur w11, [x9, -0xc]
│       ╎   0x100000848      2c015eb8       ldur w12, [x9, -0x20]
│       ╎   0x10000084c      1f010071       cmp w8, 0
│       ╎   0x100000850      2d815cb8       ldur w13, [x9, -0x38]
│       ╎   0x100000854      2e015cb8       ldur w14, [x9, -0x40]
│       ╎   0x100000858      8b010b4a       eor w11, w12, w11
│       ╎   0x10000085c      ac010e4a       eor w12, w13, w14
│       ╎   0x100000860      6b010c4a       eor w11, w11, w12
│       ╎   0x100000864      6c7d8b13       ror w12, w11, 0x1f
│       ╎   0x100000868      6b018c1a       csel w11, w11, w12, eq
│       ╎   0x10000086c      4a0500f1       subs x10, x10, 1
│       ╎   0x100000870      2b4500b8       str w11, [x9], 4
│       └─< 0x100000874      81feff54       b.ne 0x100000844
│           0x100000878      29719552       mov w9, 0xab89
│           0x10000087c      c89f9b52       mov w8, 0xdcfe
│           0x100000880      ce8e8a52       mov w14, 0x5476            ; 'vT'
│           0x100000884      113e9c52       mov w17, 0xe1f0
│           0x100000888      2d608452       mov w13, 0x2301
│           0x10000088c      f0074091       add x16, sp, 1, lsl 12
│           0x100000890      c09f9b52       mov w0, 0xdcfe
│           0x100000894      21719552       mov w1, 0xab89
│           0x100000898      22608452       mov w2, 0x2301
│           0x10000089c      ec031faa       mov x12, xzr
│           0x1000008a0      a9f9bd72       movk w9, 0xefcd, lsl 16
│           0x1000008a4      4817b372       movk w8, 0x98ba, lsl 16
│           0x1000008a8      4e06a272       movk w14, 0x1032, lsl 16   ; '2\x10'
│           0x1000008ac      517ab872       movk w17, 0xc3d2, lsl 16
│           0x1000008b0      ade8ac72       movk w13, 0x6745, lsl 16   ; 'Eg'
│           0x1000008b4      af198052       mov w15, 0xcd
│           0x1000008b8      10420a91       add x16, x16, 0x290
│           0x1000008bc      4017b372       movk w0, 0x98ba, lsl 16
│           0x1000008c0      a1f9bd72       movk w1, 0xefcd, lsl 16
│           0x1000008c4      a2e8ac72       movk w2, 0x6745, lsl 16    ; 'Eg'
│       ┌─< 0x1000008c8      13000014       b 0x100000914
│       │   ; CODE XREF from main @ 0x10000092c(x)
│      ┌──> 0x1000008cc      0b000e4a       eor w11, w0, w14
│      ╎│   0x1000008d0      23749d52       mov w3, 0xeba1
│      ╎│   0x1000008d4      6201014a       eor w2, w11, w1
│      ╎│   0x1000008d8      23dbad72       movk w3, 0x6ed9, lsl 16
│      ╎│   ; CODE XREFS from main @ 0x100000948(x), 0x100000964(x), 0x100000978(x)
│   ┌┌┌───> 0x1000008dc      446d8a13       ror w4, w10, 0x1b
│   ╎╎╎╎│   0x1000008e0      057a6cb8       ldr w5, [x16, x12, lsl 2]
│   ╎╎╎╎│   0x1000008e4      2b088113       ror w11, w1, 2
│   ╎╎╎╎│   0x1000008e8      8c050091       add x12, x12, 1
│   ╎╎╎╎│   0x1000008ec      9100110b       add w17, w4, w17
│   ╎╎╎╎│   0x1000008f0      6100050b       add w1, w3, w5
│   ╎╎╎╎│   0x1000008f4      9f4101f1       cmp x12, 0x50
│   ╎╎╎╎│   0x1000008f8      2202020b       add w2, w17, w2
│   ╎╎╎╎│   0x1000008fc      f1030e2a       mov w17, w14
│   ╎╎╎╎│   0x100000900      ee03002a       mov w14, w0
│   ╎╎╎╎│   0x100000904      4200010b       add w2, w2, w1
│   ╎╎╎╎│   0x100000908      e0030b2a       mov w0, w11
│   ╎╎╎╎│   0x10000090c      e1030a2a       mov w1, w10
│  ┌──────< 0x100000910      60030054       b.eq 0x10000097c
│  │╎╎╎╎│   ; CODE XREF from main @ 0x1000008c8(x)
│  │╎╎╎╎└─> 0x100000914      8a7d0f1b       mul w10, w12, w15
│  │╎╎╎╎    0x100000918      4b3d0c53       ubfx w11, w10, 0xc, 4
│  │╎╎╎╎    0x10000091c      ea03022a       mov w10, w2
│  │╎╎╎╎    0x100000920      7f090071       cmp w11, 2
│  │╎╎╎╎┌─< 0x100000924      40010054       b.eq 0x10000094c
│  │╎╎╎╎│   0x100000928      7f050071       cmp w11, 1
│  │╎╎╎└──< 0x10000092c      00fdff54       b.eq 0x1000008cc
│  │╎╎╎┌──< 0x100000930      cb010035       cbnz w11, 0x100000968
│  │╎╎╎││   0x100000934      2b00000a       and w11, w1, w0
│  │╎╎╎││   0x100000938      c201210a       bic w2, w14, w1
│  │╎╎╎││   0x10000093c      23338f52       mov w3, 0x7999
│  │╎╎╎││   0x100000940      42000b2a       orr w2, w2, w11
│  │╎╎╎││   0x100000944      4350ab72       movk w3, 0x5a82, lsl 16
│  │└─────< 0x100000948      e5ffff17       b 0x1000008dc
│  │ ╎╎││   ; CODE XREF from main @ 0x100000924(x)
│  │ ╎╎│└─> 0x10000094c      0b000e2a       orr w11, w0, w14
│  │ ╎╎│    0x100000950      02000e0a       and w2, w0, w14
│  │ ╎╎│    0x100000954      839b9752       mov w3, 0xbcdc
│  │ ╎╎│    0x100000958      6b01010a       and w11, w11, w1
│  │ ╎╎│    0x10000095c      63e3b172       movk w3, 0x8f1b, lsl 16
│  │ ╎╎│    0x100000960      6201022a       orr w2, w11, w2
│  │ └────< 0x100000964      deffff17       b 0x1000008dc
│  │  ╎│    ; CODE XREF from main @ 0x100000930(x)
│  │  ╎└──> 0x100000968      0b000e4a       eor w11, w0, w14
│  │  ╎     0x10000096c      c33a9852       mov w3, 0xc1d6
│  │  ╎     0x100000970      6201014a       eor w2, w11, w1
│  │  ╎     0x100000974      434cb972       movk w3, 0xca62, lsl 16
│  │  └───< 0x100000978      d9ffff17       b 0x1000008dc
│  │        ; CODE XREF from main @ 0x100000910(x)
│  └──────> 0x10000097c      4d000d0b       add w13, w2, w13
│           0x100000980      0c0000b0       adrp x12, 0x100001000
│           0x100000984      8c9d0b91       add x12, x12, 0x2e7        ; 0x1000012e7 ; "0123456789abcdef"
│           0x100000988      aefd5cd3       lsr x14, x13, 0x1c
│           0x10000098c      af6d58d3       ubfx x15, x13, 0x18, 4
│           0x100000990      4901090b       add w9, w10, w9
│           0x100000994      8a71498b       add x10, x12, x9, lsr 28
│           0x100000998      6801080b       add w8, w11, w8
│           0x10000099c      0b0000b0       adrp x11, 0x100001000
│           0x1000009a0      80696e3c       ldr b0, [x12, x14]
│           0x1000009a4      8e010f8b       add x14, x12, x15
│           0x1000009a8      af5d54d3       ubfx x15, x13, 0x14, 4
│           0x1000009ac      61a1c03d       ldr q1, [x11, 0x280]
│           0x1000009b0      e0474091       add x0, sp, 0x11, lsl 12
│           0x1000009b4      01709752       mov w1, 0xbb80
│           0x1000009b8      c005400d       ld1 {v0.b}[1], [x14]
│           0x1000009bc      8e010f8b       add x14, x12, x15
│           0x1000009c0      af4d50d3       ubfx x15, x13, 0x10, 4
│           0x1000009c4      00400a91       add x0, x0, 0x290          ; void *s
│           0x1000009c8      f3474091       add x19, sp, 0x11, lsl 12
│           0x1000009cc      73420a91       add x19, x19, 0x290
│           0x1000009d0      c009400d       ld1 {v0.b}[2], [x14]
│           0x1000009d4      8e010f8b       add x14, x12, x15
│           0x1000009d8      af3d4cd3       ubfx x15, x13, 0xc, 4
│           0x1000009dc      c00d400d       ld1 {v0.b}[3], [x14]
│           0x1000009e0      8e010f8b       add x14, x12, x15
│           0x1000009e4      af2d48d3       ubfx x15, x13, 8, 4
│           0x1000009e8      c011400d       ld1 {v0.b}[4], [x14]
│           0x1000009ec      8e010f8b       add x14, x12, x15
│           0x1000009f0      af1d44d3       ubfx x15, x13, 4, 4
│           0x1000009f4      ad0d4092       and x13, x13, 0xf
│           0x1000009f8      8d010d8b       add x13, x12, x13
│           0x1000009fc      c015400d       ld1 {v0.b}[5], [x14]
│           0x100000a00      8e010f8b       add x14, x12, x15
│           0x100000a04      c019400d       ld1 {v0.b}[6], [x14]
│           0x100000a08      a01d400d       ld1 {v0.b}[7], [x13]
│           0x100000a0c      2d6d58d3       ubfx x13, x9, 0x18, 4
│           0x100000a10      4001404d       ld1 {v0.b}[8], [x10]
│           0x100000a14      8a010d8b       add x10, x12, x13
│           0x100000a18      2d5d54d3       ubfx x13, x9, 0x14, 4
│           0x100000a1c      4005404d       ld1 {v0.b}[9], [x10]
│           0x100000a20      8a010d8b       add x10, x12, x13
│           0x100000a24      2d4d50d3       ubfx x13, x9, 0x10, 4
│           0x100000a28      4009404d       ld1 {v0.b}[0xa], [x10]
│           0x100000a2c      8a010d8b       add x10, x12, x13
│           0x100000a30      2d3d4cd3       ubfx x13, x9, 0xc, 4
│           0x100000a34      400d404d       ld1 {v0.b}[0xb], [x10]
│           0x100000a38      8a010d8b       add x10, x12, x13
│           0x100000a3c      2d2d48d3       ubfx x13, x9, 8, 4
│           0x100000a40      4011404d       ld1 {v0.b}[0xc], [x10]
│           0x100000a44      8a010d8b       add x10, x12, x13
│           0x100000a48      2d1d44d3       ubfx x13, x9, 4, 4
│           0x100000a4c      290d4092       and x9, x9, 0xf
│           0x100000a50      8901098b       add x9, x12, x9
│           0x100000a54      4015404d       ld1 {v0.b}[0xd], [x10]
│           0x100000a58      8a010d8b       add x10, x12, x13
│           0x100000a5c      0d6d58d3       ubfx x13, x8, 0x18, 4
│           0x100000a60      8b696d38       ldrb w11, [x12, x13]
│           0x100000a64      4d098052       mov w13, 0x4a              ; 'J'
│           0x100000a68      4019404d       ld1 {v0.b}[0xe], [x10]
│           0x100000a6c      0afd5cd3       lsr x10, x8, 0x1c
│           0x100000a70      085d54d3       ubfx x8, x8, 0x14, 4
│           0x100000a74      88696838       ldrb w8, [x12, x8]
│           0x100000a78      201d404d       ld1 {v0.b}[0xf], [x9]
│           0x100000a7c      89696a38       ldrb w9, [x12, x10]
│           0x100000a80      0a0a8052       mov w10, 0x50              ; 'P'
│           0x100000a84      08090052       eor w8, w8, 7
│           0x100000a88      29010a4a       eor w9, w9, w10
│           0x100000a8c      6a010d4a       eor w10, w11, w13
│           0x100000a90      884a0039       strb w8, [x20, 0x12]
│           0x100000a94      001c216e       eor v0.16b, v0.16b, v1.16b
│           0x100000a98      89420039       strb w9, [x20, 0x10]
│           0x100000a9c      8a460039       strb w10, [x20, 0x11]
│           0x100000aa0      c0e2ae3d       str q0, [x22, 0xbb80]
│           0x100000aa4      c4010094       bl sym.imp.bzero           ; void bzero(void *s, size_t n)
│           0x100000aa8      09c09252       mov w9, 0x9600
│           0x100000aac      55000090       adrp x21, segment.__DATA   ; 0x100008000
│           0x100000ab0      0010241e       fmov s0, 8.00000000
│           0x100000ab4      7702098b       add x23, x19, x9
│           0x100000ab8      0970a652       mov w9, 0x33800000
│           0x100000abc      0110321e       fmov s1, -4.00000000
│           0x100000ac0      220d040e       dup v2.2s, w9
│           0x100000ac4      090000b0       adrp x9, 0x100001000
│           0x100000ac8      0a0000b0       adrp x10, 0x100001000
│           0x100000acc      284941fd       ldr d8, [x9, 0x290]
│           0x100000ad0      8943a852       mov w9, 0x421c0000
│           0x100000ad4      03102a1e       fmov s3, 0.25000000
│           0x100000ad8      04102d1e       fmov s4, 0.75000000
│           0x100000adc      2501271e       fmov s5, w9
│           0x100000ae0      ab2240b9       ldr w11, [x21, 0x20]
│           0x100000ae4      514d41fd       ldr d17, [x10, 0x298]
│           0x100000ae8      082c8152       mov w8, 0x960
│           0x100000aec      092ca852       mov w9, 0x41600000
│           0x100000af0      ea0317aa       mov x10, x23
│           ; CODE XREF from main @ 0x100000b7c(x)
│       ┌─> 0x100000af4      6b350b4a       eor w11, w11, w11, lsl 13
│       ╎   0x100000af8      690600b9       str w9, [x19, 4]
│       ╎   0x100000afc      080500f1       subs x8, x8, 1
│       ╎   0x100000b00      6b454b4a       eor w11, w11, w11, lsr 17
│       ╎   0x100000b04      6b150b4a       eor w11, w11, w11, lsl 5
│       ╎   0x100000b08      6c350b4a       eor w12, w11, w11, lsl 13
│       ╎   0x100000b0c      6b7d0853       lsr w11, w11, 8
│       ╎   0x100000b10      8c454c4a       eor w12, w12, w12, lsr 17
│       ╎   0x100000b14      67a1031e       ucvtf s7, w11, 0x18
│       ╎   0x100000b18      8c150c4a       eor w12, w12, w12, lsl 5
│       ╎   0x100000b1c      8d350c4a       eor w13, w12, w12, lsl 13
│       ╎   0x100000b20      8601271e       fmov s6, w12
│       ╎   0x100000b24      e708201e       fmul s7, s7, s0
│       ╎   0x100000b28      ad454d4a       eor w13, w13, w13, lsr 17
│       ╎   0x100000b2c      ad150d4a       eor w13, w13, w13, lsl 5
│       ╎   0x100000b30      e728211e       fadd s7, s7, s1
│       ╎   0x100000b34      a61d0c4e       mov v6.s[1], w13
│       ╎   0x100000b38      ac350d4a       eor w12, w13, w13, lsl 13
│       ╎   0x100000b3c      8b454c4a       eor w11, w12, w12, lsr 17
│       ╎   0x100000b40      e728251e       fadd s7, s7, s5
│       ╎   0x100000b44      c604382f       ushr v6.2s, v6.2s, 8
│       ╎   0x100000b48      6b150b4a       eor w11, w11, w11, lsl 5
│       ╎   0x100000b4c      6c7d0853       lsr w12, w11, 8
│       ╎   0x100000b50      670200bd       str s7, [x19]
│       ╎   0x100000b54      c6d8212e       ucvtf v6.2s, v6.2s
│       ╎   0x100000b58      90a1031e       ucvtf s16, w12, 0x18
│       ╎   0x100000b5c      c6dc222e       fmul v6.2s, v6.2s, v2.2s
│       ╎   0x100000b60      100a231e       fmul s16, s16, s3
│       ╎   0x100000b64      c6dc282e       fmul v6.2s, v6.2s, v8.2s
│       ╎   0x100000b68      102a241e       fadd s16, s16, s4
│       ╎   0x100000b6c      c6d4310e       fadd v6.2s, v6.2s, v17.2s
│       ╎   0x100000b70      668225fd       str d6, [x19, 0x4b00]
│       ╎   0x100000b74      73220091       add x19, x19, 8
│       ╎   0x100000b78      504500bc       str s16, [x10], 4
│       └─< 0x100000b7c      c1fbff54       b.ne 0x100000af4
│           0x100000b80      e8734091       add x8, sp, 0x1c, lsl 12
│           0x100000b84      e0074091       add x0, sp, 1, lsl 12
│           0x100000b88      2100a052       mov w1, 0x10000
│           0x100000b8c      08413a91       add x8, x8, 0xe90
│           0x100000b90      00400a91       add x0, x0, 0x290          ; void *s
│           0x100000b94      fa074091       add x26, sp, 1, lsl 12
│           0x100000b98      f11b00fd       str d17, [var_30h]
│           0x100000b9c      18050191       add x24, x8, 0x41
│           0x100000ba0      5a430a91       add x26, x26, 0x290
│           0x100000ba4      ab2200b9       str w11, [x21, 0x20]
│           0x100000ba8      83010094       bl sym.imp.bzero           ; void bzero(void *s, size_t n)
│           0x100000bac      010000b0       adrp x1, 0x100001000
│           0x100000bb0      21880b91       add x1, x1, 0x2e2          ; 0x1000012e2
│                                                                      ; str.e_2J ; const char *ptr
│           0x100000bb4      20008052       mov w0, 1
│           0x100000bb8      82008052       mov w2, 4
│           0x100000bbc      8d010094       bl sym.imp.write           ; ssize_t write(int fd, const char *ptr, size_t nbytes)
│           0x100000bc0      e8474091       add x8, sp, 0x11, lsl 12
│           0x100000bc4      29db9952       mov w9, 0xced9
│           0x100000bc8      04d0251e       fmov s4, 15.00000000
│           0x100000bcc      08410a91       add x8, x8, 0x290
│           0x100000bd0      e99eb772       movk w9, 0xbcf7, lsl 16
│           0x100000bd4      0e10231e       fmov s14, 6.00000000
│           0x100000bd8      08110091       add x8, x8, 4
│           0x100000bdc      2c01271e       fmov s12, w9
│           0x100000be0      0d30261e       fmov s13, 17.00000000
│           0x100000be4      e81700f9       str x8, [var_28h]
│           0x100000be8      080000b0       adrp x8, 0x100001000
│           0x100000bec      0610241e       fmov s6, 8.00000000
│           0x100000bf0      0a5141fd       ldr d10, [x8, 0x2a0]
│           0x100000bf4      c8f58852       mov w8, 0x47ae
│           0x100000bf8      1010321e       fmov s16, -4.00000000
│           0x100000bfc      28aca772       movk w8, 0x3d61, lsl 16    ; 'a='
│           0x100000c00      11102a1e       fmov s17, 0.25000000
│           0x100000c04      12102d1e       fmov s18, 0.75000000
│           0x100000c08      0b0d040e       dup v11.2s, w8
│           0x100000c0c      8853a852       mov w8, 0x429c0000
│           0x100000c10      f4734091       add x20, sp, 0x1c, lsl 12
│           0x100000c14      0501271e       fmov s5, w8
│           0x100000c18      e8519852       mov w8, 0xc28f
│           0x100000c1c      8d608952       mov w13, 0x4b04
│           0x100000c20      a89ea772       movk w8, 0x3cf5, lsl 16
│           0x100000c24      f9230191       add x25, sp, 0x48
│           0x100000c28      94a23891       add x20, x20, 0xe28
│           0x100000c2c      0f01271e       fmov s15, w8
│           0x100000c30      0870a652       mov w8, 0x33800000
│           0x100000c34      33028052       mov w19, 0x11
│           0x100000c38      070d040e       dup v7.2s, w8
│           0x100000c3c      8843a852       mov w8, 0x421c0000
│           0x100000c40      16048052       mov w22, 0x20
│           0x100000c44      0901271e       fmov s9, w8
│           0x100000c48      1b278052       mov w27, 0x138
│           0x100000c4c      0e2ca852       mov w14, 0x41600000
│           0x100000c50      f72300f9       str x23, [var_40h]
│           0x100000c54      e81f00fd       str d8, [var_38h]
│           0x100000c58      e52700bd       str s5, [var_24h]
│           0x100000c5c      e70f00fd       str d7, [var_18h]
│       ┌─< 0x100000c60      16000014       b 0x100000cb8
│       │   ; CODE XREFS from main @ 0x100000fa8(x), 0x100000fcc(x)
│     ┌┌──> 0x100000c64      e1074091       add x1, sp, 1, lsl 12
│     ╎╎│   0x100000c68      4803158b       add x8, x26, x21
│     ╎╎│   0x100000c6c      49018052       mov w9, 0xa
│     ╎╎│   0x100000c70      21400a91       add x1, x1, 0x290          ; const char *ptr
│     ╎╎│   0x100000c74      221b0191       add x2, x25, 0x46          ; size_t nbytes
│     ╎╎│   0x100000c78      20008052       mov w0, 1
│     ╎╎│   0x100000c7c      095d0039       strb w9, [x8, 0x17]
│     ╎╎│   0x100000c80      5c010094       bl sym.imp.write           ; ssize_t write(int fd, const char *ptr, size_t nbytes)
│     ╎╎│   0x100000c84      001d9052       mov w0, 0x80e8
│     ╎╎│   0x100000c88      57010094       bl sym.imp.usleep          ; int usleep(int s)
│     ╎╎│   0x100000c8c      e52740bd       ldr s5, [var_24h]
│     ╎╎│   0x100000c90      e70f40fd       ldr d7, [var_18h]
│     ╎╎│   0x100000c94      55000090       adrp x21, segment.__DATA   ; 0x100008000
│     ╎╎│   0x100000c98      8d608952       mov w13, 0x4b04
│     ╎╎│   0x100000c9c      04d0251e       fmov s4, 15.00000000
│     ╎╎│   0x100000ca0      f9230191       add x25, sp, 0x48
│     ╎╎│   0x100000ca4      0610241e       fmov s6, 8.00000000
│     ╎╎│   0x100000ca8      1010321e       fmov s16, -4.00000000
│     ╎╎│   0x100000cac      11102a1e       fmov s17, 0.25000000
│     ╎╎│   0x100000cb0      12102d1e       fmov s18, 0.75000000
│     ╎╎│   0x100000cb4      0e2ca852       mov w14, 0x41600000
│     ╎╎│   ; CODE XREF from main @ 0x100000c60(x)
│     ╎╎└─> 0x100000cb8      aa2240b9       ldr w10, [x21, 0x20]
│     ╎╎    0x100000cbc      e9474091       add x9, sp, 0x11, lsl 12
│     ╎╎    0x100000cc0      e31b40fd       ldr d3, [var_30h]
│     ╎╎    0x100000cc4      e8031faa       mov x8, xzr
│     ╎╎    0x100000cc8      29410a91       add x9, x9, 0x290
│     ╎╎┌─< 0x100000ccc      26000014       b 0x100000d64
│     ╎╎│   ; CODE XREFS from main @ 0x100000d94(x), 0x100000da0(x), 0x100000dac(x), 0x100000db8(x)
│ ┌┌┌┌────> 0x100000cd0      4a350a4a       eor w10, w10, w10, lsl 13
│ ╎╎╎╎╎╎│   0x100000cd4      2e0500b9       str w14, [x9, 4]
│ ╎╎╎╎╎╎│   0x100000cd8      4a454a4a       eor w10, w10, w10, lsr 17
│ ╎╎╎╎╎╎│   0x100000cdc      4a150a4a       eor w10, w10, w10, lsl 5
│ ╎╎╎╎╎╎│   0x100000ce0      4b350a4a       eor w11, w10, w10, lsl 13
│ ╎╎╎╎╎╎│   0x100000ce4      4a7d0853       lsr w10, w10, 8
│ ╎╎╎╎╎╎│   0x100000ce8      6b454b4a       eor w11, w11, w11, lsr 17
│ ╎╎╎╎╎╎│   0x100000cec      41a1031e       ucvtf s1, w10, 0x18
│ ╎╎╎╎╎╎│   0x100000cf0      6b150b4a       eor w11, w11, w11, lsl 5
│ ╎╎╎╎╎╎│   0x100000cf4      6c350b4a       eor w12, w11, w11, lsl 13
│ ╎╎╎╎╎╎│   0x100000cf8      6001271e       fmov s0, w11
│ ╎╎╎╎╎╎│   0x100000cfc      2108261e       fmul s1, s1, s6
│ ╎╎╎╎╎╎│   0x100000d00      8c454c4a       eor w12, w12, w12, lsr 17
│ ╎╎╎╎╎╎│   0x100000d04      8c150c4a       eor w12, w12, w12, lsl 5
│ ╎╎╎╎╎╎│   0x100000d08      2128301e       fadd s1, s1, s16
│ ╎╎╎╎╎╎│   0x100000d0c      801d0c4e       mov v0.s[1], w12
│ ╎╎╎╎╎╎│   0x100000d10      8a350c4a       eor w10, w12, w12, lsl 13
│ ╎╎╎╎╎╎│   0x100000d14      4a454a4a       eor w10, w10, w10, lsr 17
│ ╎╎╎╎╎╎│   0x100000d18      2128291e       fadd s1, s1, s9
│ ╎╎╎╎╎╎│   0x100000d1c      0004382f       ushr v0.2s, v0.2s, 8
│ ╎╎╎╎╎╎│   0x100000d20      4a150a4a       eor w10, w10, w10, lsl 5
│ ╎╎╎╎╎╎│   0x100000d24      4b7d0853       lsr w11, w10, 8
│ ╎╎╎╎╎╎│   0x100000d28      210100bd       str s1, [x9]
│ ╎╎╎╎╎╎│   0x100000d2c      00d8212e       ucvtf v0.2s, v0.2s
│ ╎╎╎╎╎╎│   0x100000d30      aa2200b9       str w10, [x21, 0x20]
│ ╎╎╎╎╎╎│   0x100000d34      62a1031e       ucvtf s2, w11, 0x18
│ ╎╎╎╎╎╎│   0x100000d38      00dc272e       fmul v0.2s, v0.2s, v7.2s
│ ╎╎╎╎╎╎│   0x100000d3c      4208311e       fmul s2, s2, s17
│ ╎╎╎╎╎╎│   0x100000d40      00dc282e       fmul v0.2s, v0.2s, v8.2s
│ ╎╎╎╎╎╎│   0x100000d44      00d4230e       fadd v0.2s, v0.2s, v3.2s
│ ╎╎╎╎╎╎│   0x100000d48      208125fd       str d0, [x9, 0x4b00]
│ ╎╎╎╎╎╎│   0x100000d4c      4028321e       fadd s0, s2, s18
│ ╎╎╎╎╎╎│   0x100000d50      e07a28bc       str s0, [x23, x8, lsl 2]
│ ╎╎╎╎╎╎│   ; CODE XREF from main @ 0x100000db4(x)
│ ────────> 0x100000d54      08050091       add x8, x8, 1
│ ╎╎╎╎╎╎│   0x100000d58      29210091       add x9, x9, 8
│ ╎╎╎╎╎╎│   0x100000d5c      1f8125f1       cmp x8, 0x960
│ ────────< 0x100000d60      e0020054       b.eq 0x100000dbc
│ ╎╎╎╎╎╎│   ; CODE XREF from main @ 0x100000ccc(x)
│ ╎╎╎╎╎╎└─> 0x100000d64      208165fd       ldr d0, [x9, 0x4b00]
│ ╎╎╎╎╎╎    0x100000d68      220140fd       ldr d2, [x9]
│ ╎╎╎╎╎╎    0x100000d6c      2b010d8b       add x11, x9, x13
│ ╎╎╎╎╎╎    0x100000d70      00d42a0e       fadd v0.2s, v0.2s, v10.2s
│ ╎╎╎╎╎╎    0x100000d74      01dc2b2e       fmul v1.2s, v0.2s, v11.2s
│ ╎╎╎╎╎╎    0x100000d78      6091000d       st1 {v0.s}[1], [x11]
│ ╎╎╎╎╎╎    0x100000d7c      41d4210e       fadd v1.2s, v2.2s, v1.2s
│ ╎╎╎╎╎╎    0x100000d80      210100fd       str d1, [x9]
│ ╎╎╎╎╎╎    0x100000d84      e07a68bc       ldr s0, [x23, x8, lsl 2]
│ ╎╎╎╎╎╎    0x100000d88      00282c1e       fadd s0, s0, s12
│ ╎╎╎╎╎╎    0x100000d8c      e07a28bc       str s0, [x23, x8, lsl 2]
│ ╎╎╎╎╎╎    0x100000d90      0820201e       fcmp s0, 0.0
│ └───────< 0x100000d94      e9f9ff54       b.ls 0x100000cd0
│  ╎╎╎╎╎    0x100000d98      200540bd       ldr s0, [x9, 4]
│  ╎╎╎╎╎    0x100000d9c      0020241e       fcmp s0, s4
│  └──────< 0x100000da0      8af9ff54       b.ge 0x100000cd0
│   ╎╎╎╎    0x100000da4      200140bd       ldr s0, [x9]
│   ╎╎╎╎    0x100000da8      0820201e       fcmp s0, 0.0
│   └─────< 0x100000dac      24f9ff54       b.mi 0x100000cd0
│    ╎╎╎    0x100000db0      0020251e       fcmp s0, s5
│ ────────< 0x100000db4      0bfdff54       b.lt 0x100000d54
│    └────< 0x100000db8      c6ffff17       b 0x100000cd0
│     ╎╎    ; CODE XREF from main @ 0x100000d60(x)
│ ────────> 0x100000dbc      e0230191       add x0, sp, 0x48           ; void *s
│     ╎╎    0x100000dc0      01498252       mov w1, 0x1248             ; 'H\x12'
│     ╎╎    0x100000dc4      fc000094       bl sym.imp.bzero           ; void bzero(void *s, size_t n)
│     ╎╎    0x100000dc8      e91740f9       ldr x9, [var_28h]
│     ╎╎    0x100000dcc      e8031faa       mov x8, xzr
│     ╎╎┌─< 0x100000dd0      05000014       b 0x100000de4
│     ╎╎│   ; CODE XREFS from main @ 0x100000df8(x), 0x100000e0c(x), 0x100000e14(x)
│  ┌┌┌────> 0x100000dd4      08050091       add x8, x8, 1
│  ╎╎╎╎╎│   0x100000dd8      29210091       add x9, x9, 8
│  ╎╎╎╎╎│   0x100000ddc      1f8125f1       cmp x8, 0x960
│ ┌───────< 0x100000de0      c0010054       b.eq 0x100000e18
│ │╎╎╎╎╎│   ; CODE XREF from main @ 0x100000dd0(x)
│ │╎╎╎╎╎└─> 0x100000de4      20857f2d       ldp s0, s1, [x9, -4]
│ │╎╎╎╎╎    0x100000de8      0a00381e       fcvtzs w10, s0
│ │╎╎╎╎╎    0x100000dec      2b00381e       fcvtzs w11, s1
│ │╎╎╎╎╎    0x100000df0      5f350171       cmp w10, 0x4d
│ │╎╎╎╎╎    0x100000df4      62994e7a       ccmp w11, 0xe, 2, ls
│ │└──────< 0x100000df8      e8feff54       b.hi 0x100000dd4
│ │ ╎╎╎╎    0x100000dfc      6b65bb9b       umaddl x11, w11, w27, x25
│ │ ╎╎╎╎    0x100000e00      e07a68bc       ldr s0, [x23, x8, lsl 2]
│ │ ╎╎╎╎    0x100000e04      61596abc       ldr s1, [x11, w10, uxtw 2]
│ │ ╎╎╎╎    0x100000e08      0020211e       fcmp s0, s1
│ │ └─────< 0x100000e0c      4dfeff54       b.le 0x100000dd4
│ │  ╎╎╎    0x100000e10      60792abc       str s0, [x11, x10, lsl 2]
│ │  └────< 0x100000e14      f0ffff17       b 0x100000dd4
│ │   ╎╎    ; CODE XREF from main @ 0x100000de0(x)
│ └───────> 0x100000e18      e8074091       add x8, sp, 1, lsl 12
│     ╎╎    0x100000e1c      09098052       mov w9, 0x48               ; 'H'
│     ╎╎    0x100000e20      f5031faa       mov x21, xzr
│     ╎╎    0x100000e24      08410a91       add x8, x8, 0x290
│     ╎╎    0x100000e28      f7230191       add x23, sp, 0x48
│     ╎╎    0x100000e2c      7c008052       mov w28, 3
│     ╎╎    0x100000e30      09090039       strb w9, [x8, 2]
│     ╎╎    0x100000e34      68638b52       mov w8, 0x5b1b             ; ''
│     ╎╎    0x100000e38      e8232579       strh w8, [sp, 0x1290]
│     ╎╎┌─< 0x100000e3c      08000014       b 0x100000e5c
│     ╎╎│   ; CODE XREF from main @ 0x100000e78(x)
│    ┌────> 0x100000e40      b5060091       add x21, x21, 1
│    ╎╎╎│   0x100000e44      48018052       mov w8, 0xa
│    ╎╎╎│   0x100000e48      486b3c38       strb w8, [x26, x28]
│    ╎╎╎│   0x100000e4c      bf3e00f1       cmp x21, 0xf
│    ╎╎╎│   0x100000e50      3c0b0091       add x28, x25, 2
│    ╎╎╎│   0x100000e54      f7e20491       add x23, x23, 0x138
│   ┌─────< 0x100000e58      c0040054       b.eq 0x100000ef0
│   │╎╎╎│   ; CODE XREF from main @ 0x100000e3c(x)
│   │╎╎╎└─> 0x100000e5c      fb031faa       mov x27, xzr
│   │╎╎╎┌─< 0x100000e60      07000014       b 0x100000e7c
│   │╎╎╎│   ; CODE XREF from main @ 0x100000e84(x)
│  ┌──────> 0x100000e64      566b3c38       strb w22, [x26, x28]
│  ╎│╎╎╎│   0x100000e68      f9031caa       mov x25, x28
│  ╎│╎╎╎│   ; CODE XREF from main @ 0x100000eec(x)
│ ┌───────> 0x100000e6c      7b130091       add x27, x27, 4
│ ╎╎│╎╎╎│   0x100000e70      3c070091       add x28, x25, 1
│ ╎╎│╎╎╎│   0x100000e74      7fe304f1       cmp x27, 0x138
│ ╎╎│└────< 0x100000e78      40feff54       b.eq 0x100000e40
│ ╎╎│ ╎╎│   ; CODE XREF from main @ 0x100000e60(x)
│ ╎╎│ ╎╎└─> 0x100000e7c      e86a7bbc       ldr s8, [x23, x27]
│ ╎╎│ ╎╎    0x100000e80      00212f1e       fcmp s8, s15
│ ╎└──────< 0x100000e84      09ffff54       b.ls 0x100000e64
│ ╎ │ ╎╎    0x100000e88      00092e1e       fmul s0, s8, s14
│ ╎ │ ╎╎    0x100000e8c      a9008052       mov w9, 5
│ ╎ │ ╎╎    0x100000e90      0800381e       fcvtzs w8, s0
│ ╎ │ ╎╎    0x100000e94      087da80a       bic w8, w8, w8, asr 31
│ ╎ │ ╎╎    0x100000e98      1f150071       cmp w8, 5
│ ╎ │ ╎╎    0x100000e9c      08b1891a       csel w8, w8, w9, lt
│ ╎ │ ╎╎    0x100000ea0      2900a052       mov w9, 0x10000
│ ╎ │ ╎╎    0x100000ea4      8852288b       add x8, x20, w8, uxtw 4
│ ╎ │ ╎╎    0x100000ea8      29011ccb       sub x9, x9, x28
│ ╎ │ ╎╎    0x100000eac      190540f9       ldr x25, [x8, 8]
│ ╎ │ ╎╎    0x100000eb0      3f0119eb       cmp x9, x25
│ ╎ │ ╎╎    0x100000eb4      22b1999a       csel x2, x9, x25, lt
│ ╎ │ ╎╎    0x100000eb8      5f0400f1       cmp x2, 1
│ ╎ │ ╎╎┌─< 0x100000ebc      8b000054       b.lt 0x100000ecc
│ ╎ │ ╎╎│   0x100000ec0      010140f9       ldr x1, [x8]               ; const void *s2
│ ╎ │ ╎╎│   0x100000ec4      80031a8b       add x0, x28, x26           ; void *s1
│ ╎ │ ╎╎│   0x100000ec8      c1000094       bl sym.imp.memmove         ; void *memmove(void *s1, const void *s2, size_t n)
│ ╎ │ ╎╎│   ; CODE XREF from main @ 0x100000ebc(x)
│ ╎ │ ╎╎└─> 0x100000ecc      00092d1e       fmul s0, s8, s13
│ ╎ │ ╎╎    0x100000ed0      39031c8b       add x25, x25, x28
│ ╎ │ ╎╎    0x100000ed4      0800381e       fcvtzs w8, s0
│ ╎ │ ╎╎    0x100000ed8      087da80a       bic w8, w8, w8, asr 31
│ ╎ │ ╎╎    0x100000edc      1f450071       cmp w8, 0x11
│ ╎ │ ╎╎    0x100000ee0      08b1931a       csel w8, w8, w19, lt
│ ╎ │ ╎╎    0x100000ee4      084b6838       ldrb w8, [x24, w8, uxtw]
│ ╎ │ ╎╎    0x100000ee8      486b3938       strb w8, [x26, x25]
│ └───────< 0x100000eec      e0ffff17       b 0x100000e6c
│   │ ╎╎    ; CODE XREF from main @ 0x100000e58(x)
│   └─────> 0x100000ef0      c8ff9f52       mov w8, 0xfffe
│     ╎╎    0x100000ef4      080119cb       sub x8, x8, x25
│     ╎╎    0x100000ef8      1f0500f1       cmp x8, 1
│     ╎╎┌─< 0x100000efc      0b010054       b.lt 0x100000f1c
│     ╎╎│   0x100000f00      1f1100f1       cmp x8, 4
│     ╎╎│   0x100000f04      89008052       mov w9, 4
│     ╎╎│   0x100000f08      80031a8b       add x0, x28, x26           ; void *s1
│     ╎╎│   0x100000f0c      0231899a       csel x2, x8, x9, lo        ; size_t n
│     ╎╎│   0x100000f10      010000b0       adrp x1, 0x100001000
│     ╎╎│   0x100000f14      21f00b91       add x1, x1, 0x2fc          ; 0x1000012fc
│     ╎╎│                                                              ; str.e_0m ; const void *s2
│     ╎╎│   0x100000f18      aa000094       bl sym.imp.memcpy          ; void *memcpy(void *s1, const void *s2, size_t n)
│     ╎╎│   ; CODE XREF from main @ 0x100000efc(x)
│     ╎╎└─> 0x100000f1c      481b0091       add x8, x26, 6
│     ╎╎    0x100000f20      f72340f9       ldr x23, [var_40h]
│     ╎╎    0x100000f24      e81f40fd       ldr d8, [var_38h]
│     ╎╎    0x100000f28      0901198b       add x9, x8, x25
│     ╎╎    0x100000f2c      a8fb9f52       mov w8, 0xffdd
│     ╎╎    0x100000f30      eac303b2       mov x10, 0x2020202020202020 ; '        '
│     ╎╎    0x100000f34      080119cb       sub x8, x8, x25
│     ╎╎    0x100000f38      2a5101f8       stur x10, [x9, 0x15]
│     ╎╎    0x100000f3c      1f0500f1       cmp x8, 1
│     ╎╎    0x100000f40      2aa900a9       stp x10, x10, [x9, 8]
│     ╎╎    0x100000f44      2a0100f9       str x10, [x9]
│     ╎╎┌─< 0x100000f48      0b010054       b.lt 0x100000f68
│     ╎╎│   0x100000f4c      1f2d00f1       cmp x8, 0xb
│     ╎╎│   0x100000f50      69018052       mov w9, 0xb
│     ╎╎│   0x100000f54      e10b40f9       ldr x1, [var_10h]          ; const void *s2
│     ╎╎│   0x100000f58      0231899a       csel x2, x8, x9, lo        ; size_t n
│     ╎╎│   0x100000f5c      488f0091       add x8, x26, 0x23
│     ╎╎│   0x100000f60      0001198b       add x0, x8, x25            ; void *s1
│     ╎╎│   0x100000f64      9a000094       bl sym.imp.memmove         ; void *memmove(void *s1, const void *s2, size_t n)
│     ╎╎│   ; CODE XREF from main @ 0x100000f48(x)
│     ╎╎└─> 0x100000f68      48fa9f52       mov w8, 0xffd2
│     ╎╎    0x100000f6c      35bb0091       add x21, x25, 0x2e
│     ╎╎    0x100000f70      1b278052       mov w27, 0x138
│     ╎╎    0x100000f74      080119cb       sub x8, x8, x25
│     ╎╎    0x100000f78      1f0500f1       cmp x8, 1
│     ╎╎┌─< 0x100000f7c      0b010054       b.lt 0x100000f9c
│     ╎╎│   0x100000f80      1f4d00f1       cmp x8, 0x13
│     ╎╎│   0x100000f84      69028052       mov w9, 0x13
│     ╎╎│   0x100000f88      e1734091       add x1, sp, 0x1c, lsl 12
│     ╎╎│   0x100000f8c      0231899a       csel x2, x8, x9, lo        ; size_t n
│     ╎╎│   0x100000f90      4003158b       add x0, x26, x21           ; void *s1
│     ╎╎│   0x100000f94      21403891       add x1, x1, 0xe10          ; const void *s2
│     ╎╎│   0x100000f98      8a000094       bl sym.imp.memcpy          ; void *memcpy(void *s1, const void *s2, size_t n)
│     ╎╎│   ; CODE XREF from main @ 0x100000f7c(x)
│     ╎╎└─> 0x100000f9c      e8f79f52       mov w8, 0xffbf
│     ╎╎    0x100000fa0      080119cb       sub x8, x8, x25
│     ╎╎    0x100000fa4      1f0500f1       cmp x8, 1
│     └───< 0x100000fa8      ebe5ff54       b.lt 0x100000c64
│      ╎    0x100000fac      1f1100f1       cmp x8, 4
│      ╎    0x100000fb0      89008052       mov w9, 4
│      ╎    0x100000fb4      010000b0       adrp x1, 0x100001000
│      ╎    0x100000fb8      21f00b91       add x1, x1, 0x2fc          ; 0x1000012fc
│      ╎                                                               ; str.e_0m ; const void *s2
│      ╎    0x100000fbc      0231899a       csel x2, x8, x9, lo        ; size_t n
│      ╎    0x100000fc0      484f0091       add x8, x26, 0x13
│      ╎    0x100000fc4      0001158b       add x0, x8, x21            ; void *s1
│      ╎    0x100000fc8      7e000094       bl sym.imp.memcpy          ; void *memcpy(void *s1, const void *s2, size_t n)
└      └──< 0x100000fcc      26ffff17       b 0x100000c64
            ; CODE XREF from sym.func.100001128 @ 0x10000112c(x)
            ; CODE XREF from sym.func.100001170 @ 0x100001170(x)
┌ 344: sym.func.100000fd0 (int64_t arg_10h);
│ `- args(sp[0x10..0x10]) vars(1:sp[0x8..0x8])
│           0x100000fd0      0b00261e       fmov w11, s0
│           0x100000fd4      6a791753       ubfx w10, w11, 0x17, 8
│           0x100000fd8      687d1053       lsr w8, w11, 0x10
│           0x100000fdc      69590012       and w9, w11, 0x7fffff
│           0x100000fe0      4cc10171       subs w12, w10, 0x70
│           0x100000fe4      08011112       and w8, w8, 0x8000
│       ┌─< 0x100000fe8      a8010054       b.hi 0x10000101c
│       │   0x100000fec      2b0e8052       mov w11, 0x71              ; 'q'
│       │   0x100000ff0      29010932       orr w9, w9, 0x800000
│       │   0x100000ff4      5f990171       cmp w10, 0x66
│       │   0x100000ff8      6b010a4b       sub w11, w11, w10
│       │   0x100000ffc      2925cb1a       lsr w9, w9, w11
│       │   ; XREFS: DATA 0x100000728  DATA 0x100000730  DATA 0x100000740  
│       │   ; XREFS: DATA 0x10000074c  DATA 0x100000778  DATA 0x1000007f0  
│       │   ; XREFS: DATA 0x100000800  DATA 0x10000080c  DATA 0x100000980  
│       │   ; XREFS: DATA 0x10000099c  DATA 0x100000ac4  DATA 0x100000ac8  
│       │   ; XREFS: DATA 0x100000bac  DATA 0x100000be8  DATA 0x100000f10  
│       │   ; XREFS: DATA 0x100000fb4  
│       │   0x100001000      2b791f53       lsl w11, w9, 1
│       │   0x100001004      6b011312       and w11, w11, 0x2000
│       │   0x100001008      6901090b       add w9, w11, w9
│       │   0x10000100c      0935492a       orr w9, w8, w9, lsr 13
│       │   0x100001010      0831891a       csel w8, w8, w9, lo
│       │   0x100001014      0001271e       fmov s0, w8
│       │   0x100001018      c0035fd6       ret
│       │   ; CODE XREF from sym.func.100000fd0 @ 0x100000fe8(x)
│       └─> 0x10000101c      9f3d0271       cmp w12, 0x8f
│       ┌─< 0x100001020      81010054       b.ne 0x100001050
│       │   0x100001024      2a7d0d53       lsr w10, w9, 0xd
│       │   0x100001028      5f010071       cmp w10, 0
│       │   0x10000102c      4a01082a       orr w10, w10, w8
│       │   0x100001030      08111632       orr w8, w8, 0x7c00
│       │   0x100001034      eb179f1a       cset w11, eq
│       │   0x100001038      3f010071       cmp w9, 0
│       │   0x10000103c      4a010b2a       orr w10, w10, w11
│       │   0x100001040      4a111632       orr w10, w10, 0x7c00
│       │   0x100001044      4811881a       csel w8, w10, w8, ne
│       │   0x100001048      0001271e       fmov s0, w8
│       │   0x10000104c      c0035fd6       ret
│       │   ; CODE XREF from sym.func.100000fd0 @ 0x100001020(x)
│       └─> 0x100001050      2d094011       add w13, w9, 2, lsl 12
│           0x100001054      4abd0151       sub w10, w10, 0x6f
│           0x100001058      3ff95f71       cmp w9, 0x7fe, lsl 12
│           0x10000105c      ad319f1a       csel w13, w13, wzr, lo
│           0x100001060      8a318a1a       csel w10, w12, w10, lo
│           0x100001064      7f011472       tst w11, 0x1000
│           0x100001068      8a018a1a       csel w10, w12, w10, eq
│           0x10000106c      29018d1a       csel w9, w9, w13, eq
│           0x100001070      5f7d0071       cmp w10, 0x1f
│       ┌─< 0x100001074      03050054       b.lo 0x100001114
│       │   0x100001078      ff4300d1       sub sp, sp, 0x10
│       │   0x10000107c      090082d2       mov x9, 0x1000
│       │   0x100001080      08111632       orr w8, w8, 0x7c00
│       │   0x100001084      a994baf2       movk x9, 0xd4a5, lsl 16
│       │   0x100001088      091dc0f2       movk x9, 0xe8, lsl 32
│       │   0x10000108c      e90700f9       str x9, [var_8h]
│       │   0x100001090      e90740f9       ldr x9, [var_8h]
│       │   0x100001094      297d099b       mul x9, x9, x9
│       │   0x100001098      e90700f9       str x9, [var_8h]
│       │   0x10000109c      e90740f9       ldr x9, [var_8h]
│       │   0x1000010a0      297d099b       mul x9, x9, x9
│       │   0x1000010a4      e90700f9       str x9, [var_8h]
│       │   0x1000010a8      e90740f9       ldr x9, [var_8h]
│       │   0x1000010ac      297d099b       mul x9, x9, x9
│       │   0x1000010b0      e90700f9       str x9, [var_8h]
│       │   0x1000010b4      e90740f9       ldr x9, [var_8h]
│       │   0x1000010b8      297d099b       mul x9, x9, x9
│       │   0x1000010bc      e90700f9       str x9, [var_8h]
│       │   0x1000010c0      e90740f9       ldr x9, [var_8h]
│       │   0x1000010c4      297d099b       mul x9, x9, x9
│       │   0x1000010c8      e90700f9       str x9, [var_8h]
│       │   0x1000010cc      e90740f9       ldr x9, [var_8h]
│       │   0x1000010d0      297d099b       mul x9, x9, x9
│       │   0x1000010d4      e90700f9       str x9, [var_8h]
│       │   0x1000010d8      e90740f9       ldr x9, [var_8h]
│       │   0x1000010dc      297d099b       mul x9, x9, x9
│       │   0x1000010e0      e90700f9       str x9, [var_8h]
│       │   0x1000010e4      e90740f9       ldr x9, [var_8h]
│       │   0x1000010e8      297d099b       mul x9, x9, x9
│       │   0x1000010ec      e90700f9       str x9, [var_8h]
│       │   0x1000010f0      e90740f9       ldr x9, [var_8h]
│       │   0x1000010f4      297d099b       mul x9, x9, x9
│       │   0x1000010f8      e90700f9       str x9, [var_8h]
│       │   0x1000010fc      e90740f9       ldr x9, [var_8h]
│       │   0x100001100      297d099b       mul x9, x9, x9
│       │   0x100001104      e90700f9       str x9, [var_8h]
│       │   0x100001108      ff430091       add sp, sp, 0x10           ; 0x178000
│       │   0x10000110c      0001271e       fmov s0, w8
│       │   0x100001110      c0035fd6       ret
│       │   ; CODE XREF from sym.func.100000fd0 @ 0x100001074(x)
│       └─> 0x100001114      297d0d53       lsr w9, w9, 0xd
│           0x100001118      29290a2a       orr w9, w9, w10, lsl 10
│           0x10000111c      2801082a       orr w8, w9, w8
│           0x100001120      0001271e       fmov s0, w8
└           0x100001124      c0035fd6       ret
┌ 64: sym.func.100001130 ();
│           0x100001130      0900261e       fmov w9, s0
│           0x100001134      08f0ae52       mov w8, 0x77800000
│           0x100001138      0101271e       fmov s1, w8
│           0x10000113c      08f0a852       mov w8, 0x47800000
│           0x100001140      2a391353       ubfiz w10, w9, 0xd, 0xf
│           0x100001144      297d0f53       lsr w9, w9, 0xf
│           0x100001148      4001271e       fmov s0, w10
│           0x10000114c      0008211e       fmul s0, s0, s1
│           0x100001150      0101271e       fmov s1, w8
│           0x100001154      0800261e       fmov w8, s0
│           0x100001158      0020211e       fcmp s0, s1
│           0x10000115c      0a1d0932       orr w10, w8, 0x7f800000
│           0x100001160      08b18a1a       csel w8, w8, w10, lt
│           0x100001164      087d092a       orr w8, w8, w9, lsl 31
│           0x100001168      0001271e       fmov s0, w8
└           0x10000116c      c0035fd6       ret
┌ 64: sym.func.100001174 ();
│           0x100001174      0900261e       fmov w9, s0
│           0x100001178      08f0ae52       mov w8, 0x77800000
│           0x10000117c      0101271e       fmov s1, w8
│           0x100001180      08f0a852       mov w8, 0x47800000
│           0x100001184      2a391353       ubfiz w10, w9, 0xd, 0xf
│           0x100001188      297d0f53       lsr w9, w9, 0xf
│           0x10000118c      4001271e       fmov s0, w10
│           0x100001190      0008211e       fmul s0, s0, s1
│           0x100001194      0101271e       fmov s1, w8
│           0x100001198      0800261e       fmov w8, s0
│           0x10000119c      0020211e       fcmp s0, s1
│           0x1000011a0      0a1d0932       orr w10, w8, 0x7f800000
│           0x1000011a4      08b18a1a       csel w8, w8, w10, lt
│           0x1000011a8      087d092a       orr w8, w8, w9, lsl 31
│           0x1000011ac      0001271e       fmov s0, w8
└           0x1000011b0      c0035fd6       ret
