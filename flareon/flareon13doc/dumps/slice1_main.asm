            ;-- section.0.__TEXT.__text:
            ; NULL XREF from aav.0x100000074 @ +0x5c(r)
            ; CALL XREF from sym.func.100035510 @ 0x1000355fc(r)
┌ 12000: sym.func.100000750 (int64_t arg1, int64_t arg2, int64_t arg_40h_2, int64_t arg_a0h, int64_t arg_10h, int64_t arg_20h, int64_t arg_30h, int64_t arg_40h, int64_t arg_50h, int64_t arg_5c0h);
│ `- args(x0, x1, sp[0x40..0xb80]) vars(199:sp[0x8..0x610])
│           0x100000750      stp x28, x27, [sp, -0x60]!                ; [00] -r-x section size 217564 named 0.__TEXT.__text
│           0x100000754      stp x26, x25, [arg_50h]
│           0x100000758      stp x24, x23, [arg_40h]
│           0x10000075c      stp x22, x21, [arg_30h]
│           0x100000760      stp x20, x19, [arg_20h]
│           0x100000764      stp x29, x30, [arg_10h]
│           0x100000768      sub sp, sp, 0x5c0
│           0x10000076c      adr x9, section.12.__DATA.__bss           ; 0x100058180
│           0x100000770      nop
│           0x100000774      ldrb w8, [x9]                             ; [0x100058180:4]=0
│                                                                      ; section.12.__DATA.__bss
│                                                                      [12] -rw- section size 1344 named 12.__DATA.__bss
│           0x100000778      str w0, [x9, 0x34]                        ; arg1
│           0x10000077c      str x1, [x9, 0x48]                        ; arg2
│       ┌─< 0x100000780      tbnz w8, 0, 0x100000798
│       │   0x100000784      adr x0, section.12.__DATA.__bss           ; 0x100058180 ; int64_t arg1
│       │   0x100000788      nop
│       │   0x10000078c      adr x1, sym.func.100003bbc                ; 0x100003bbc ; int64_t arg2
│       │   0x100000790      nop
│       │   0x100000794      bl sym.func.100034520
│       │   ; CODE XREF from sym.func.100000750 @ 0x100000780(x)
│       └─> 0x100000798      nop
│           0x10000079c      ldr x8, 0x1000581d0                       ; [0x1000581d0:8]=0
│       ┌─< 0x1000007a0      cbz x8, 0x100000f0c
│       │   0x1000007a4      ldr w9, [x8, 4]
│       │   0x1000007a8      subs w9, w9, 1
│      ┌──< 0x1000007ac      b.vs 0x10000362c
│     ┌───< 0x1000007b0      tbnz w9, 0x1f, 0x1000007dc
│     │││   0x1000007b4      ldrb w10, [x8, 0xc]
│    ┌────< 0x1000007b8      cbz w10, 0x1000007d0
│    ││││   0x1000007bc      add x10, x8, 0xd
│    ││││   ; CODE XREF from sym.func.100000750 @ 0x1000007cc(x)
│  ┌┌─────> 0x1000007c0      cbz x9, 0x1000007dc
│  │╎││││   0x1000007c4      ldrb w11, [x10], 1
│  │╎││││   0x1000007c8      sub x9, x9, 1
│  │└─────< 0x1000007cc      cbnz w11, 0x1000007c0
│  │ ││││   ; CODE XREF from sym.func.100000750 @ 0x1000007b8(x)
│  │ └────> 0x1000007d0      bl sym.func.10000e698
│  │  │││   0x1000007d4      bl sym.func.100004270
│  │  │││   0x1000007d8      bl sym.func.1000042a4
│  │  │││   ; CODE XREFS from sym.func.100000750 @ 0x1000007b0(x), 0x1000007c0(x)
│  └──└───> 0x1000007dc      mov w9, 0x2b6
│      ││   0x1000007e0      adr x10, 0x100058188
│      ││   0x1000007e4      nop
│      ││   0x1000007e8      ldrb w11, [x10]
│      ││   0x1000007ec      stp xzr, x8, [x10, 0x150]
│      ││   0x1000007f0      str w9, [x10, 0x148]
│     ┌───< 0x1000007f4      tbnz w11, 0, 0x10000080c
│     │││   ; CODE XREF from sym.func.100000750 @ 0x100000f20(x)
│    ┌────> 0x1000007f8      adr x0, 0x100058188                       ; int64_t arg1
│    ╎│││   0x1000007fc      nop
│    ╎│││   0x100000800      adr x1, sym.func.1000234f0                ; 0x1000234f0 ; int64_t arg2
│    ╎│││   0x100000804      nop
│    ╎│││   0x100000808      bl sym.func.100034520
│    ╎│││   ; CODE XREFS from sym.func.100000750 @ 0x1000007f4(x), 0x100000f24(x)
│   ┌─└───> 0x10000080c      adrp x20, reloc._tlv_bootstrap            ; 0x100058000
│   ╎╎ ││   0x100000810      ldr x19, [x20, 0x1e0]
│   ╎╎ ││   0x100000814      mov x0, x19                               ; int64_t arg1
│   ╎╎ ││   0x100000818      bl sym.func.1000150fc
│   ╎╎ ││   0x10000081c      ldr x8, [x19, 0x10]
│   ╎╎ ││   0x100000820      ldrsw x9, [x19, 4]
│   ╎╎ ││   0x100000824      adr x10, 0x10004df00
│   ╎╎ ││   0x100000828      nop
│   ╎╎ ││   0x10000082c      str x10, [x8, x9, lsl 3]
│   ╎╎ ││   0x100000830      ldr w8, [x19, 4]
│   ╎╎ ││   0x100000834      adds w8, w8, 1
│   ╎╎┌───< 0x100000838      b.vs 0x10000362c
│   ╎╎│││   0x10000083c      mov w0, 1
│   ╎╎│││   0x100000840      mov w1, 0x18
│   ╎╎│││   0x100000844      str w8, [x19, 4]
│   ╎╎│││   0x100000848      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│   ╎╎│││   0x10000084c      adr x9, 0x100058182
│   ╎╎│││   0x100000850      nop
│   ╎╎│││   0x100000854      mov w8, 2
│   ╎╎│││   0x100000858      ldrb w10, [x9]
│   ╎╎│││   0x10000085c      str w8, [x0]
│   ╎╎│││   0x100000860      add x8, x9, 0x106
│   ╎╎│││   0x100000864      str x0, [x8]
│  ┌──────< 0x100000868      tbnz w10, 0, 0x100000880
│  │╎╎│││   0x10000086c      adr x0, 0x100058182                       ; int64_t arg1
│  │╎╎│││   0x100000870      nop
│  │╎╎│││   0x100000874      adr x1, sym.func.1000062cc                ; 0x1000062cc ; int64_t arg2
│  │╎╎│││   0x100000878      nop
│  │╎╎│││   0x10000087c      bl sym.func.100034520
│  │╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x100000868(x)
│  └──────> 0x100000880      adrp x21, reloc._tlv_bootstrap            ; 0x100058000
│   ╎╎│││   0x100000884      ldrb w8, [x21, 0x188]
│  ┌──────< 0x100000888      tbnz w8, 0, 0x1000008a0
│  │╎╎│││   0x10000088c      adr x0, 0x100058188                       ; int64_t arg1
│  │╎╎│││   0x100000890      nop
│  │╎╎│││   0x100000894      adr x1, sym.func.1000234f0                ; 0x1000234f0 ; int64_t arg2
│  │╎╎│││   0x100000898      nop
│  │╎╎│││   0x10000089c      bl sym.func.100034520
│  │╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x100000888(x)
│  └──────> 0x1000008a0      ldr x19, [x20, 0x1e0]
│   ╎╎│││   0x1000008a4      mov x0, x19                               ; int64_t arg1
│   ╎╎│││   0x1000008a8      bl sym.func.1000150fc
│   ╎╎│││   0x1000008ac      ldr x8, [x19, 0x10]
│   ╎╎│││   0x1000008b0      ldrsw x9, [x19, 4]
│   ╎╎│││   0x1000008b4      adr x10, 0x10004df60
│   ╎╎│││   0x1000008b8      nop
│   ╎╎│││   0x1000008bc      str x10, [x8, x9, lsl 3]
│   ╎╎│││   0x1000008c0      ldr w8, [x19, 4]
│   ╎╎│││   0x1000008c4      adds w8, w8, 1
│  ┌──────< 0x1000008c8      b.vs 0x10000362c
│  │╎╎│││   0x1000008cc      str w8, [x19, 4]
│  │╎╎│││   0x1000008d0      ldrb w8, [x21, 0x188]
│ ┌───────< 0x1000008d4      tbnz w8, 0, 0x1000008ec
│ ││╎╎│││   0x1000008d8      adr x0, 0x100058188                       ; int64_t arg1
│ ││╎╎│││   0x1000008dc      nop
│ ││╎╎│││   0x1000008e0      adr x1, sym.func.1000234f0                ; 0x1000234f0 ; int64_t arg2
│ ││╎╎│││   0x1000008e4      nop
│ ││╎╎│││   0x1000008e8      bl sym.func.100034520
│ ││╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x1000008d4(x)
│ └───────> 0x1000008ec      ldr x19, [x20, 0x1e0]
│  │╎╎│││   0x1000008f0      mov x0, x19                               ; int64_t arg1
│  │╎╎│││   0x1000008f4      bl sym.func.1000150fc
│  │╎╎│││   0x1000008f8      ldr x8, [x19, 0x10]
│  │╎╎│││   0x1000008fc      ldrsw x9, [x19, 4]
│  │╎╎│││   0x100000900      adr x10, 0x10004dfd0
│  │╎╎│││   0x100000904      nop
│  │╎╎│││   0x100000908      str x10, [x8, x9, lsl 3]
│  │╎╎│││   0x10000090c      ldr w8, [x19, 4]
│  │╎╎│││   0x100000910      adds w8, w8, 1
│ ┌───────< 0x100000914      b.vs 0x10000362c
│ ││╎╎│││   0x100000918      str w8, [x19, 4]
│ ││╎╎│││   0x10000091c      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ ││╎╎│││   0x100000920      ldrb w8, [x8, 0x189]
│ ────────< 0x100000924      tbnz w8, 0, 0x10000093c
│ ││╎╎│││   0x100000928      adr x0, 0x100058189                       ; int64_t arg1
│ ││╎╎│││   0x10000092c      nop
│ ││╎╎│││   0x100000930      adr x1, sym.func.100025560                ; 0x100025560 ; int64_t arg2
│ ││╎╎│││   0x100000934      nop
│ ││╎╎│││   0x100000938      bl sym.func.100034520
│ ││╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x100000924(x)
│ ────────> 0x10000093c      mov w0, 4
│ ││╎╎│││   0x100000940      bl sym.imp.malloc                         ;  void *malloc(size_t size)
│ ││╎╎│││   0x100000944      adr x9, 0x100058186
│ ││╎╎│││   0x100000948      nop
│ ││╎╎│││   0x10000094c      mov w8, 0x800000
│ ││╎╎│││   0x100000950      ldrb w10, [x9]
│ ││╎╎│││   0x100000954      adr x19, section.12.__DATA.__bss          ; 0x100058180
│ ││╎╎│││   0x100000958      nop
│ ││╎╎│││   0x10000095c      str w8, [x0]
│ ││╎╎│││   0x100000960      stur x0, [x9, 0x7a]
│ ────────< 0x100000964      tbz w10, 0, 0x100000e8c
│ ││╎╎│││   0x100000968      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ ││╎╎│││   0x10000096c      ldrb w8, [x8, 0x187]
│ ────────< 0x100000970      tbz w8, 0, 0x100000eac
│ ││╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x100000ea8(x)
│ ────────> 0x100000974      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ ││╎╎│││   0x100000978      ldrb w8, [x8, 0x191]
│ ────────< 0x10000097c      tbz w8, 0, 0x100000ecc
│ ││╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x100000ec8(x)
│ ────────> 0x100000980      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ ││╎╎│││   0x100000984      ldrb w8, [x8, 0x192]
│ ────────< 0x100000988      tbnz w8, 0, 0x1000009a0
│ ││╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x100000ee8(x)
│ ────────> 0x10000098c      adr x0, 0x100058192                       ; int64_t arg1
│ ││╎╎│││   0x100000990      nop
│ ││╎╎│││   0x100000994      adr x1, sym.func.1000270dc                ; 0x1000270dc ; int64_t arg2
│ ││╎╎│││   0x100000998      nop
│ ││╎╎│││   0x10000099c      bl sym.func.100034520
│ ││╎╎│││   ; CODE XREFS from sym.func.100000750 @ 0x100000988(x), 0x100000eec(x)
│ ────────> 0x1000009a0      adr x8, 0x100058184
│ ││╎╎│││   0x1000009a4      nop
│ ││╎╎│││   0x1000009a8      mov w9, 0x9680
│ ││╎╎│││   0x1000009ac      movk w9, 0x98, lsl 16
│ ││╎╎│││   0x1000009b0      ldrb w11, [x8]
│ ││╎╎│││   0x1000009b4      add x10, x8, 0x114
│ ││╎╎│││   0x1000009b8      str w9, [x8, 0x11c]
│ ││╎╎│││   0x1000009bc      mov w9, 0x101
│ ││╎╎│││   0x1000009c0      str xzr, [x10]
│ ││╎╎│││   0x1000009c4      strh w9, [x8, 0x10]
│ ────────< 0x1000009c8      tbnz w11, 0, 0x1000009e0
│ ││╎╎│││   0x1000009cc      adr x0, 0x100058184                       ; int64_t arg1
│ ││╎╎│││   0x1000009d0      nop
│ ││╎╎│││   0x1000009d4      adr x1, sym.func.10000ae30                ; 0x10000ae30 ; int64_t arg2
│ ││╎╎│││   0x1000009d8      nop
│ ││╎╎│││   0x1000009dc      bl sym.func.100034520
│ ││╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x1000009c8(x)
│ ────────> 0x1000009e0      movi v0.2d, 0000000000000000
│ ││╎╎│││   0x1000009e4      stp q0, q0, [x19, 0x1e0]
│ ││╎╎│││   0x1000009e8      str q0, [x19, 0x1d0]
│ ││╎╎│││   0x1000009ec      bl sym.func.1000066ac
│ ││╎╎│││   0x1000009f0      ldrb w8, [x19]                            ; [0x100058180:4]=0
│ ││╎╎│││                                                              ; section.12.__DATA.__bss
│ ││╎╎│││                                                              [12] -rw- section size 1344 named 12.__DATA.__bss
│ ││╎╎│││   0x1000009f4      mov w9, 0x82
│ ││╎╎│││   0x1000009f8      str x0, [x19, 0x1f8]
│ ││╎╎│││   0x1000009fc      str w9, [x19, 0x1d0]
│ ────────< 0x100000a00      tbnz w8, 0, 0x100000a18
│ ││╎╎│││   0x100000a04      adr x0, section.12.__DATA.__bss           ; 0x100058180 ; int64_t arg1
│ ││╎╎│││   0x100000a08      nop
│ ││╎╎│││   0x100000a0c      adr x1, sym.func.100003bbc                ; 0x100003bbc ; int64_t arg2
│ ││╎╎│││   0x100000a10      nop
│ ││╎╎│││   0x100000a14      bl sym.func.100034520
│ ││╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x100000a00(x)
│ ────────> 0x100000a18      adr x8, 0x100058181
│ ││╎╎│││   0x100000a1c      nop
│ ││╎╎│││   0x100000a20      sub x9, x8, 1
│ ││╎╎│││   0x100000a24      ldrb w8, [x8]
│ ││╎╎│││   0x100000a28      stp xzr, xzr, [x9, 0x128]
│ ────────< 0x100000a2c      tbnz w8, 0, 0x100000a44
│ ││╎╎│││   0x100000a30      adr x0, 0x100058181                       ; int64_t arg1
│ ││╎╎│││   0x100000a34      nop
│ ││╎╎│││   0x100000a38      adr x1, sym.func.1000051fc                ; 0x1000051fc ; int64_t arg2
│ ││╎╎│││   0x100000a3c      nop
│ ││╎╎│││   0x100000a40      bl sym.func.100034520
│ ││╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x100000a2c(x)
│ ────────> 0x100000a44      adr x0, 0x100058040
│ ││╎╎│││   0x100000a48      nop
│ ││╎╎│││   0x100000a4c      mov w1, 0x10
│ ││╎╎│││   0x100000a50      bl sym.imp.arc4random_buf
│ ││╎╎│││   0x100000a54      adr x19, 0x10005818a
│ ││╎╎│││   0x100000a58      nop
│ ││╎╎│││   0x100000a5c      mov w8, 0x101
│ ││╎╎│││   0x100000a60      mov w9, 1
│ ││╎╎│││   0x100000a64      strh w8, [x19, 0xc]
│ ││╎╎│││   0x100000a68      strb w9, [x19, 0xe]
│ ││╎╎│││   0x100000a6c      bl sym.func.1000066ac
│ ││╎╎│││   0x100000a70      stur x0, [x19, 0x7e]
│ ││╎╎│││   0x100000a74      mov w0, wzr
│ ││╎╎│││   0x100000a78      bl sym.func.100025dac
│ ││╎╎│││   0x100000a7c      stur x0, [x19, 0x86]
│ ││╎╎│││   0x100000a80      mov w0, 1
│ ││╎╎│││   0x100000a84      bl sym.func.100025dac
│ ││╎╎│││   0x100000a88      ldrb w8, [x19]
│ ││╎╎│││   0x100000a8c      stur x0, [x19, 0x8e]
│ ────────< 0x100000a90      tbnz w8, 0, 0x100000aa8
│ ││╎╎│││   0x100000a94      adr x0, 0x10005818a                       ; int64_t arg1
│ ││╎╎│││   0x100000a98      nop
│ ││╎╎│││   0x100000a9c      adr x1, sym.func.100025d90                ; 0x100025d90 ; int64_t arg2
│ ││╎╎│││   0x100000aa0      nop
│ ││╎╎│││   0x100000aa4      bl sym.func.100034520
│ ││╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x100000a90(x)
│ ────────> 0x100000aa8      nop
│ ││╎╎│││   0x100000aac      ldr w8, 0x1000581b4                       ; [0x1000581b4:8]=0
│ ││╎╎│││   0x100000ab0      subs w19, w8, 1
│ ────────< 0x100000ab4      b.vs 0x10000362c
│ ││╎╎│││   0x100000ab8      adr x8, 0x1000582f0
│ ││╎╎│││   0x100000abc      nop
│ ││╎╎│││   0x100000ac0      mov w9, 3
│ ││╎╎│││   0x100000ac4      stp xzr, xzr, [x8]
│ ││╎╎│││   0x100000ac8      str xzr, [x8, 0x10]
│ ││╎╎│││   0x100000acc      str w9, [x8]
│ ────────< 0x100000ad0      tbnz w19, 0x1f, 0x1000036c8
│ ││╎╎│││   0x100000ad4      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ ││╎╎│││   0x100000ad8      adrp x22, reloc._tlv_bootstrap            ; 0x100058000
│ ││╎╎│││   0x100000adc      str w19, [x8, 0x2f8]
│ ────────< 0x100000ae0      cbz w19, 0x100000b20
│ ││╎╎│││   0x100000ae4      ubfiz x1, x19, 3, 0x20                    ; size_t size
│ ││╎╎│││   0x100000ae8      mov w0, 1
│ ││╎╎│││   0x100000aec      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ││╎╎│││   0x100000af0      mov x21, x0
│ ││╎╎│││   0x100000af4      mov w20, 8
│ ││╎╎│││   0x100000af8      str x0, [x22, 0x300]
│ ││╎╎│││   0x100000afc      adrp x22, reloc._tlv_bootstrap            ; 0x100058000
│ ││╎╎│││   0x100000b00      mov x23, x19
│ ││╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x100000b1c(x)
│ ────────> 0x100000b04      ldr x8, [x22, 0x1c8]
│ ││╎╎│││   0x100000b08      ldr x0, [x8, x20]                         ; [0x100000008:4]=0
│ ││╎╎│││                                                              ; aav.0x100000008 ; int64_t arg1
│ ││╎╎│││   0x100000b0c      bl sym.func.10000dfdc
│ ││╎╎│││   0x100000b10      subs x23, x23, 1
│ ││╎╎│││   0x100000b14      add x20, x20, 8
│ ││╎╎│││   0x100000b18      str x0, [x21], 8
│ ────────< 0x100000b1c      b.ne 0x100000b04
│ ││╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x100000ae0(x)
│ ────────> 0x100000b20      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ ││╎╎│││   0x100000b24      mov w0, 1
│ ││╎╎│││   0x100000b28      mov w1, 0x30                              ; '0'
│ ││╎╎│││   0x100000b2c      str w19, [x8, 0x2f4]
│ ││╎╎│││   0x100000b30      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ││╎╎│││   0x100000b34      mov w8, 0xa2
│ ││╎╎│││   0x100000b38      mov x19, x0
│ ││╎╎│││   0x100000b3c      str w8, [x0]
│ ││╎╎│││   0x100000b40      bl sym.func.1000066ac
│ ││╎╎│││   0x100000b44      str x0, [x19, 8]
│ ││╎╎│││   0x100000b48      mov w0, 1
│ ││╎╎│││   0x100000b4c      mov w1, 0x38                              ; '8'
│ ││╎╎│││   0x100000b50      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ││╎╎│││   0x100000b54      mov x21, x0
│ ││╎╎│││   0x100000b58      mov w8, 0x98
│ ││╎╎│││   0x100000b5c      mov x22, x0
│ ││╎╎│││   0x100000b60      add x0, sp, 0x1c0
│ ││╎╎│││   0x100000b64      str w8, [x22], 8
│ ││╎╎│││   0x100000b68      bl sym.imp.pthread_condattr_init
│ ││╎╎│││   0x100000b6c      add x1, sp, 0x1c0
│ ││╎╎│││   0x100000b70      mov x0, x22
│ ││╎╎│││   0x100000b74      bl sym.imp.pthread_cond_init
│ ────────< 0x100000b78      cbnz w0, 0x10000368c
│ ││╎╎│││   0x100000b7c      add x0, sp, 0x1c0
│ ││╎╎│││   0x100000b80      bl sym.imp.pthread_condattr_destroy
│ ││╎╎│││   0x100000b84      stp x21, xzr, [x19, 0x10]
│ ││╎╎│││   0x100000b88      bl sym.func.100005224
│ ││╎╎│││   0x100000b8c      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ ││╎╎│││   0x100000b90      str x0, [x19, 0x20]
│ ││╎╎│││   0x100000b94      str x19, [x8, 0x30]
│ ││╎╎│││   0x100000b98      bl sym.func.100005224
│ ││╎╎│││   0x100000b9c      ldr x8, [x0, 0x20]
│ ────────< 0x100000ba0      cbz x8, 0x1000036e0
│ ││╎╎│││   0x100000ba4      mov w0, 1
│ ││╎╎│││   0x100000ba8      mov w1, 0x80
│ ││╎╎│││   0x100000bac      str x8, [var_90h]
│ ││╎╎│││   0x100000bb0      mov w23, 1
│ ││╎╎│││   0x100000bb4      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ││╎╎│││   0x100000bb8      mov x19, x0
│ ││╎╎│││   0x100000bbc      mov w0, 1
│ ││╎╎│││   0x100000bc0      mov w1, 0x18
│ ││╎╎│││   0x100000bc4      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ││╎╎│││   0x100000bc8      mov w8, 0x99
│ ││╎╎│││   0x100000bcc      mov w9, 0x101
│ ││╎╎│││   0x100000bd0      mov x21, x0
│ ││╎╎│││   0x100000bd4      str w8, [x0]
│ ││╎╎│││   0x100000bd8      mov w1, 0x18
│ ││╎╎│││   0x100000bdc      strh w9, [x0, 8]
│ ││╎╎│││   0x100000be0      mov w0, 1
│ ││╎╎│││   0x100000be4      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ││╎╎│││   0x100000be8      mov w8, 0xa4
│ ││╎╎│││   0x100000bec      str x0, [x21, 0x10]
│ ││╎╎│││   0x100000bf0      str w8, [x0]
│ ││╎╎│││   0x100000bf4      mov w8, 0x9f
│ ││╎╎│││   0x100000bf8      str w8, [x19]
│ ││╎╎│││   0x100000bfc      adr x8, 0x10004e020
│ ││╎╎│││   0x100000c00      nop
│ ││╎╎│││   0x100000c04      str x21, [x19, 0x48]
│ ││╎╎│││   0x100000c08      str x8, [x19, 0x28]
│ ││╎╎│││   0x100000c0c      bl sym.func.1000066ac
│ ││╎╎│││   0x100000c10      str x0, [x19, 0x30]
│ ││╎╎│││   0x100000c14      mov w0, 1
│ ││╎╎│││   0x100000c18      mov w1, 0x38                              ; '8'
│ ││╎╎│││   0x100000c1c      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ││╎╎│││   0x100000c20      mov x21, x0
│ ││╎╎│││   0x100000c24      mov w8, 0x98
│ ││╎╎│││   0x100000c28      mov x22, x0
│ ││╎╎│││   0x100000c2c      add x0, sp, 0x1c0
│ ││╎╎│││   0x100000c30      str w8, [x22], 8
│ ││╎╎│││   0x100000c34      bl sym.imp.pthread_condattr_init
│ ││╎╎│││   0x100000c38      add x1, sp, 0x1c0
│ ││╎╎│││   0x100000c3c      mov x0, x22
│ ││╎╎│││   0x100000c40      bl sym.imp.pthread_cond_init
│ ────────< 0x100000c44      cbnz w0, 0x10000368c
│ ││╎╎│││   0x100000c48      add x0, sp, 0x1c0
│ ││╎╎│││   0x100000c4c      add x22, sp, 0xc0
│ ││╎╎│││   0x100000c50      bl sym.imp.pthread_condattr_destroy
│ ││╎╎│││   0x100000c54      ldr x20, [x19, 0x30]
│ ││╎╎│││   0x100000c58      mov w0, 1
│ ││╎╎│││   0x100000c5c      mov w1, 0x28                              ; '('
│ ││╎╎│││   0x100000c60      str x21, [x19, 0x38]
│ ││╎╎│││   0x100000c64      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ││╎╎│││   0x100000c68      mov w8, 0x9c
│ ││╎╎│││   0x100000c6c      str x20, [x0, 8]
│ ││╎╎│││   0x100000c70      mov w1, 0x18
│ ││╎╎│││   0x100000c74      str w8, [x0]
│ ││╎╎│││   0x100000c78      str x0, [x19, 0x40]
│ ││╎╎│││   0x100000c7c      mov w0, 1
│ ││╎╎│││   0x100000c80      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ││╎╎│││   0x100000c84      mov w8, 0x13
│ ││╎╎│││   0x100000c88      mov x21, x0
│ ││╎╎│││   0x100000c8c      str w23, [x0, 8]
│ ││╎╎│││   0x100000c90      str w8, [x0]
│ ││╎╎│││   0x100000c94      mov w0, 1
│ ││╎╎│││   0x100000c98      mov w1, 8
│ ││╎╎│││   0x100000c9c      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ││╎╎│││   0x100000ca0      str x21, [x19, 0x68]
│ ││╎╎│││   0x100000ca4      str x0, [x21, 0x10]
│ ││╎╎│││   0x100000ca8      bl sym.func.100026e54
│ ││╎╎│││   0x100000cac      str x0, [x19, 0x50]
│ ││╎╎│││   0x100000cb0      add x0, sp, 0x1c0
│ ││╎╎│││   0x100000cb4      mov w1, 8
│ ││╎╎│││   0x100000cb8      str w23, [x19, 0x70]
│ ││╎╎│││   0x100000cbc      bl sym.imp.arc4random_buf
│ ││╎╎│││   0x100000cc0      ldr x20, [x22, 0x100]
│ ││╎╎│││   0x100000cc4      add x0, sp, 0x1c0
│ ││╎╎│││   0x100000cc8      mov w1, 8
│ ││╎╎│││   0x100000ccc      bl sym.imp.arc4random_buf
│ ││╎╎│││   0x100000cd0      ldr x21, [x22, 0x100]
│ ││╎╎│││   0x100000cd4      mov w0, 1
│ ││╎╎│││   0x100000cd8      mov w1, 0x18
│ ││╎╎│││   0x100000cdc      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ││╎╎│││   0x100000ce0      mov x9, 0x7f2d                            ; '-\x7f'
│ ││╎╎│││   0x100000ce4      orr x8, x23, x21, lsl 1
│ ││╎╎│││   0x100000ce8      str x0, [x19, 0x78]
│ ││╎╎│││   0x100000cec      movk x9, 0x4c95, lsl 16
│ ││╎╎│││   0x100000cf0      adr x1, 0x10004e038                       ; int64_t arg2
│ ││╎╎│││   0x100000cf4      nop
│ ││╎╎│││   0x100000cf8      movk x9, 0xf42d, lsl 32
│ ││╎╎│││   0x100000cfc      add x10, x8, x20
│ ││╎╎│││   0x100000d00      ldr x20, [x19, 0x68]
│ ││╎╎│││   0x100000d04      movk x9, 0x5851, lsl 48                   ; 'QX'
│ ││╎╎│││   0x100000d08      mov w2, wzr
│ ││╎╎│││   0x100000d0c      madd x9, x10, x9, x8
│ ││╎╎│││   0x100000d10      mov w10, 0xba
│ ││╎╎│││   0x100000d14      str w10, [x0]
│ ││╎╎│││   0x100000d18      stp x9, x8, [x0, 8]
│ ││╎╎│││   0x100000d1c      ldr x8, [x19, 0x28]
│ ││╎╎│││   0x100000d20      mov x0, x8                                ; int64_t arg1
│ ││╎╎│││   0x100000d24      bl sym.func.100025584
│ ││╎╎│││   0x100000d28      mov x23, x0
│ ││╎╎│││   0x100000d2c      mov w0, 1
│ ││╎╎│││   0x100000d30      mov w1, 0x50                              ; 'P'
│ ││╎╎│││   0x100000d34      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ││╎╎│││   0x100000d38      mov w8, 0x9d
│ ││╎╎│││   0x100000d3c      mov x21, x0
│ ││╎╎│││   0x100000d40      mov w1, 8
│ ││╎╎│││   0x100000d44      str w8, [x0]
│ ││╎╎│││   0x100000d48      mov w0, 1
│ ││╎╎│││   0x100000d4c      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ││╎╎│││   0x100000d50      ldr x24, [x19, 0x40]
│ ││╎╎│││   0x100000d54      str x0, [var_a0h]
│ ││╎╎│││   0x100000d58      mov w1, 0x818
│ ││╎╎│││   0x100000d5c      str x21, [x0]
│ ││╎╎│││   0x100000d60      mov w0, 1
│ ││╎╎│││   0x100000d64      stp x23, x19, [x21, 8]
│ ││╎╎│││   0x100000d68      str x24, [x21, 0x28]
│ ││╎╎│││   0x100000d6c      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ││╎╎│││   0x100000d70      mov w8, 0x9a
│ ││╎╎│││   0x100000d74      str x24, [x0, 8]
│ ││╎╎│││   0x100000d78      adr x1, 0x10004e050                       ; int64_t arg2
│ ││╎╎│││   0x100000d7c      nop
│ ││╎╎│││   0x100000d80      str w8, [x0]
│ ││╎╎│││   0x100000d84      ldr x8, [x19, 0x50]
│ ││╎╎│││   0x100000d88      stp x0, x8, [x21, 0x30]
│ ││╎╎│││   0x100000d8c      mov x0, x23                               ; int64_t arg1
│ ││╎╎│││   0x100000d90      bl sym.func.10000b3bc
│ ││╎╎│││   0x100000d94      ldr x22, [x21, 0x10]
│ ││╎╎│││   0x100000d98      mov x23, x0
│ ││╎╎│││   0x100000d9c      ldr x8, [x22, 0x48]
│ ││╎╎│││   0x100000da0      mov x0, x8                                ; int64_t arg1
│ ││╎╎│││   0x100000da4      bl sym.func.100025884
│ ││╎╎│││   0x100000da8      mov x24, x0
│ ││╎╎│││   0x100000dac      mov x25, x1
│ ││╎╎│││   0x100000db0      mov w0, 1
│ ││╎╎│││   0x100000db4      mov w1, 0xb0
│ ││╎╎│││   0x100000db8      mov w26, w2
│ ││╎╎│││   0x100000dbc      mov w27, w3
│ ││╎╎│││   0x100000dc0      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ││╎╎│││   0x100000dc4      mov w8, 0x7b                              ; '{'
│ ││╎╎│││   0x100000dc8      mov w10, 1
│ ││╎╎│││   0x100000dcc      str x23, [x0, 0x58]
│ ││╎╎│││   0x100000dd0      str w8, [x0]
│ ││╎╎│││   0x100000dd4      and w8, w27, 1
│ ││╎╎│││   0x100000dd8      sub x9, x25, 8
│ ││╎╎│││   0x100000ddc      strb w10, [x0, 0x88]
│ ││╎╎│││   0x100000de0      and x9, x9, 0xfffffffffffffff0
│ ││╎╎│││   0x100000de4      adr x23, sym.func.10002cec8               ; 0x10002cec8
│ ││╎╎│││   0x100000de8      nop
│ ││╎╎│││   0x100000dec      stp x24, x25, [x0, 0x18]
│ ││╎╎│││   0x100000df0      adrp x24, reloc._tlv_bootstrap            ; 0x100058000
│ ││╎╎│││   0x100000df4      str w26, [x0, 0x28]
│ ││╎╎│││   0x100000df8      mov x28, x0
│ ││╎╎│││   0x100000dfc      strb w8, [x0, 0x2c]
│ ││╎╎│││   0x100000e00      mov x1, x28                               ; int64_t arg2
│ ││╎╎│││   0x100000e04      ldr w8, [x22]
│ ││╎╎│││   0x100000e08      str x22, [x0, 0x78]
│ ││╎╎│││   0x100000e0c      str w8, [x0, 0x70]
│ ││╎╎│││   0x100000e10      adr x11, sym.func.10002c3a8               ; 0x10002c3a8
│ ││╎╎│││   0x100000e14      nop
│ ││╎╎│││   0x100000e18      ldr x8, [var_a0h]
│ ││╎╎│││   0x100000e1c      stp x11, x8, [x0, 0x90]
│ ││╎╎│││   0x100000e20      sub x8, x9, 0xb0
│ ││╎╎│││   0x100000e24      stp x8, x10, [x0, 8]
│ ││╎╎│││   0x100000e28      stur x0, [x9, -0x10]
│ ││╎╎│││   0x100000e2c      stur x23, [x9, -0x70]
│ ││╎╎│││   0x100000e30      ldr x0, [x24, 0x20]                       ; [0x100058020:4]=0
│ ││╎╎│││                                                              ; section.11.__DATA.__common
│ ││╎╎│││                                                              [11] -rw- section size 352 named 11.__DATA.__common ; int64_t arg1
│ ││╎╎│││   0x100000e34      bl sym.func.1000053b8
│ ││╎╎│││   0x100000e38      str x28, [x21, 0x20]
│ ││╎╎│││   0x100000e3c      ldp w9, w8, [x20, 8]
│ ││╎╎│││   0x100000e40      sxtw x8, w8
│ ││╎╎│││   0x100000e44      subs w11, w9, w8
│ ────────< 0x100000e48      b.vs 0x10000362c
│ ││╎╎│││   0x100000e4c      ldr w10, [x20, 4]
│ ││╎╎│││   0x100000e50      cmp w10, w11
│ ────────< 0x100000e54      b.ne 0x100000ef0
│ ────────< 0x100000e58      cbz w9, 0x100000f28
│ ────────< 0x100000e5c      cbz w8, 0x100000e70
│ ││╎╎│││   0x100000e60      scvtf d0, w9, 1
│ ││╎╎│││   0x100000e64      scvtf d1, w8
│ ││╎╎│││   0x100000e68      fcmp d0, d1
│ ────────< 0x100000e6c      b.ls 0x100000fac
│ ││╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x100000e5c(x)
│ ────────> 0x100000e70      cmp w9, 0xff
│ ────────< 0x100000e74      b.gt 0x100000f30
│ ││╎╎│││   0x100000e78      mov w10, -0x40000001
│ ││╎╎│││   0x100000e7c      cmp w9, w10
│ ────────< 0x100000e80      b.le 0x10000362c
│ ││╎╎│││   0x100000e84      lsl w9, w9, 1
│ ────────< 0x100000e88      b 0x100000f40
│ ││╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x100000964(x)
│ ────────> 0x100000e8c      adr x0, 0x100058186                       ; int64_t arg1
│ ││╎╎│││   0x100000e90      nop
│ ││╎╎│││   0x100000e94      adr x1, sym.func.100017cdc                ; 0x100017cdc ; int64_t arg2
│ ││╎╎│││   0x100000e98      nop
│ ││╎╎│││   0x100000e9c      bl sym.func.100034520
│ ││╎╎│││   0x100000ea0      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ ││╎╎│││   0x100000ea4      ldrb w8, [x8, 0x187]
│ ────────< 0x100000ea8      tbnz w8, 0, 0x100000974
│ ││╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x100000970(x)
│ ────────> 0x100000eac      adr x0, 0x100058187                       ; int64_t arg1
│ ││╎╎│││   0x100000eb0      nop
│ ││╎╎│││   0x100000eb4      adr x1, sym.func.100021ac8                ; 0x100021ac8 ; int64_t arg2
│ ││╎╎│││   0x100000eb8      nop
│ ││╎╎│││   0x100000ebc      bl sym.func.100034520
│ ││╎╎│││   0x100000ec0      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ ││╎╎│││   0x100000ec4      ldrb w8, [x8, 0x191]
│ ────────< 0x100000ec8      tbnz w8, 0, 0x100000980
│ ││╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x10000097c(x)
│ ────────> 0x100000ecc      adr x0, 0x100058191                       ; int64_t arg1
│ ││╎╎│││   0x100000ed0      nop
│ ││╎╎│││   0x100000ed4      adr x1, sym.func.100025fd4                ; 0x100025fd4 ; int64_t arg2
│ ││╎╎│││   0x100000ed8      nop
│ ││╎╎│││   0x100000edc      bl sym.func.100034520
│ ││╎╎│││   0x100000ee0      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ ││╎╎│││   0x100000ee4      ldrb w8, [x8, 0x192]
│ ────────< 0x100000ee8      tbz w8, 0, 0x10000098c
│ ────────< 0x100000eec      b 0x1000009a0
│ ││╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x100000e54(x)
│ ────────> 0x100000ef0      ldr x0, [x20, 0x10]
│ ││╎╎│││   0x100000ef4      ldrsw x8, [x20, 4]
│ ││╎╎│││   0x100000ef8      str x21, [x0, x8, lsl 3]
│ ││╎╎│││   0x100000efc      ldr w8, [x20, 4]
│ ││╎╎│││   0x100000f00      adds w8, w8, 1
│ ────────< 0x100000f04      b.vc 0x100001008
│ ────────< 0x100000f08      b 0x10000362c
│ ││╎╎│││   ; CODE XREF from sym.func.100000750 @ 0x1000007a0(x)
│ ││╎╎││└─> 0x100000f0c      adr x10, 0x100058188
│ ││╎╎││    0x100000f10      nop
│ ││╎╎││    0x100000f14      ldrb w11, [x10]
│ ││╎╎││    0x100000f18      stp xzr, x8, [x10, 0x150]
│ ││╎╎││    0x100000f1c      str wzr, [x10, 0x148]                     ; arg1
│ ││╎└────< 0x100000f20      tbz w11, 0, 0x1000007f8
│ ││└─────< 0x100000f24      b 0x10000080c
│ ││  ││    ; CODE XREF from sym.func.100000750 @ 0x100000e58(x)
│ ────────> 0x100000f28      mov w9, 3
│ ││  ││┌─< 0x100000f2c      b 0x100000f40
│ ││  │││   ; CODE XREF from sym.func.100000750 @ 0x100000e74(x)
│ ────────> 0x100000f30      adds w10, w9, 0x300
│ ││ ┌────< 0x100000f34      b.vs 0x10000362c
│ ││ ││││   0x100000f38      adds w9, w9, w10, lsr 2
│ ││┌─────< 0x100000f3c      b.vs 0x10000362c
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100000e88(x), 0x100000f2c(x)
│ ──────└─> 0x100000f40      ldr x10, [x20, 0x10]
│ ││││││    0x100000f44      str w9, [x20, 8]
│ ││││││┌─< 0x100000f48      cbz x10, 0x100000f80
│ ────────< 0x100000f4c      tbnz w9, 0x1f, 0x1000037e0
│ │││││││   0x100000f50      sub x0, x10, x8, lsl 3                    ; void *ptr
│ │││││││   0x100000f54      ubfiz x1, x9, 3, 0x20                     ; size_t size
│ │││││││   0x100000f58      bl sym.imp.realloc                        ; void *realloc(void *ptr, size_t size)
│ │││││││   0x100000f5c      ldrsw x8, [x20, 0xc]
│ │││││││   0x100000f60      add x0, x0, x8, lsl 3
│ │││││││   0x100000f64      str x0, [x20, 0x10]
│ │││││││   0x100000f68      ldrsw x8, [x20, 4]
│ │││││││   0x100000f6c      str x21, [x0, x8, lsl 3]
│ │││││││   0x100000f70      ldr w8, [x20, 4]
│ │││││││   0x100000f74      adds w8, w8, 1
│ ────────< 0x100000f78      b.vc 0x100001008
│ ────────< 0x100000f7c      b 0x10000362c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100000f48(x)
│ ──────└─> 0x100000f80      tbnz w9, 0x1f, 0x1000037f0
│ ││││││    0x100000f84      ubfiz x1, x9, 3, 0x20                     ; size_t size
│ ││││││    0x100000f88      mov w0, 1
│ ││││││    0x100000f8c      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ││││││    0x100000f90      str x0, [x20, 0x10]
│ ││││││    0x100000f94      ldrsw x8, [x20, 4]
│ ││││││    0x100000f98      str x21, [x0, x8, lsl 3]
│ ││││││    0x100000f9c      ldr w8, [x20, 4]
│ ││││││    0x100000fa0      adds w8, w8, 1
│ ││││││┌─< 0x100000fa4      b.vc 0x100001008
│ ────────< 0x100000fa8      b 0x10000362c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100000e6c(x)
│ ────────< 0x100000fac      tbnz w10, 0x1f, 0x100003794
│ │││││││   0x100000fb0      ldr x1, [x20, 0x10]                       ; const void *s2
│ │││││││   0x100000fb4      lsl x2, x10, 3                            ; size_t n
│ │││││││   0x100000fb8      sub x0, x1, x8, lsl 3                     ; void *s1
│ │││││││   0x100000fbc      bl sym.imp.memcpy                         ; void *memcpy(void *s1, const void *s2, size_t n)
│ │││││││   0x100000fc0      ldr w8, [x20, 0xc]
│ ────────< 0x100000fc4      tbnz w8, 0x1f, 0x10000362c
│ │││││││   0x100000fc8      ldr x9, [x20, 0x10]
│ │││││││   0x100000fcc      lsl x1, x8, 3                             ; size_t n
│ │││││││   0x100000fd0      ldrsw x8, [x20, 4]
│ │││││││   0x100000fd4      sub x9, x9, x1
│ │││││││   0x100000fd8      add x0, x9, x8, lsl 3                     ; void *s
│ │││││││   0x100000fdc      bl sym.imp.bzero                          ; void bzero(void *s, size_t n)
│ │││││││   0x100000fe0      ldrsw x8, [x20, 0xc]
│ │││││││   0x100000fe4      ldr x9, [x20, 0x10]
│ │││││││   0x100000fe8      str wzr, [x20, 0xc]
│ │││││││   0x100000fec      sub x0, x9, x8, lsl 3
│ │││││││   0x100000ff0      str x0, [x20, 0x10]
│ │││││││   0x100000ff4      ldrsw x8, [x20, 4]
│ │││││││   0x100000ff8      str x21, [x0, x8, lsl 3]
│ │││││││   0x100000ffc      ldr w8, [x20, 4]
│ │││││││   0x100001000      adds w8, w8, 1
│ ────────< 0x100001004      b.vs 0x10000362c
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100000f04(x), 0x100000f78(x), 0x100000fa4(x)
│ ──────└─> 0x100001008      str w8, [x20, 4]
│ ││││││    0x10000100c      ldr x8, [x19, 0x68]
│ ││││││    0x100001010      ldr w9, [x8, 4]
│ ││││││┌─< 0x100001014      cbz w9, 0x1000036f0
│ │││││││   0x100001018      ldr x8, [x8, 0x10]
│ │││││││   0x10000101c      ldr x20, [x8]
│ │││││││   0x100001020      bl sym.func.100005224
│ │││││││   0x100001024      mov w8, 0x9f
│ │││││││   0x100001028      ldr x9, [x20, 8]
│ │││││││   0x10000102c      str x19, [x0, 0x48]
│ │││││││   0x100001030      str w8, [x0, 0x40]
│ │││││││   0x100001034      mov w8, 0x9d
│ │││││││   0x100001038      str w8, [x0, 0x50]
│ │││││││   0x10000103c      mov w8, 1
│ │││││││   0x100001040      str x9, [x0, 0x38]
│ │││││││   0x100001044      nop
│ │││││││   0x100001048      str x20, [x0, 0x58]
│ │││││││   0x10000104c      str x0, [x20, 0x18]
│ │││││││   0x100001050      str w8, [x20, 0x44]
│ │││││││   0x100001054      ldr x21, 0x100058378                      ; [0x100058378:8]=0
│ │││││││   0x100001058      add x0, x21, 8
│ │││││││   0x10000105c      bl sym.imp.pthread_mutex_lock
│ │││││││   0x100001060      mov w1, w0
│ ────────< 0x100001064      cbnz w1, 0x1000036f8
│ │││││││   0x100001068      nop
│ │││││││   0x10000106c      str wzr, [x19, 0x18]
│ │││││││   0x100001070      ldr w8, 0x100058368                       ; [0x100058368:8]=0
│ │││││││   0x100001074      str xzr, [x19, 0x20]
│ ────────< 0x100001078      cbz w8, 0x100001434
│ │││││││   0x10000107c      adr x8, 0x100058368
│ │││││││   0x100001080      nop
│ │││││││   0x100001084      mov w11, 0x9f
│ │││││││   0x100001088      ldr x9, [x8, 8]
│ │││││││   0x10000108c      ldr w10, [x9]
│ │││││││   0x100001090      str x9, [x19, 0x20]
│ │││││││   0x100001094      str w10, [x19, 0x18]
│ │││││││   0x100001098      str w11, [x9, 8]
│ │││││││   0x10000109c      str x19, [x9, 0x10]
│ │││││││   0x1000010a0      str w11, [x8]
│ │││││││   0x1000010a4      add x0, x21, 8
│ │││││││   0x1000010a8      str x19, [x8, 8]
│ │││││││   0x1000010ac      bl sym.imp.pthread_mutex_unlock
│ ────────< 0x1000010b0      cbnz w0, 0x10000145c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001458(x)
│ ────────> 0x1000010b4      ldr x10, [var_90h]
│ │││││││   0x1000010b8      mov w8, 0x9f
│ │││││││   0x1000010bc      adrp x9, reloc._tlv_bootstrap             ; 0x100058000
│ │││││││   0x1000010c0      mov w0, 1
│ │││││││   0x1000010c4      mov w1, 0x40                              ; '@'
│ │││││││   0x1000010c8      str x19, [x9, 0x38]
│ │││││││   0x1000010cc      str x19, [x10, 0x78]
│ │││││││   0x1000010d0      str w8, [x10, 0x70]
│ │││││││   0x1000010d4      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x1000010d8      mov w8, 0xa1
│ │││││││   0x1000010dc      mov x19, x0
│ │││││││   0x1000010e0      mov w1, 8
│ │││││││   0x1000010e4      str w8, [x0]
│ │││││││   0x1000010e8      mov w0, 1
│ │││││││   0x1000010ec      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x1000010f0      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ │││││││   0x1000010f4      add x8, x8, 0x298
│ │││││││   0x1000010f8      mov x21, x0
│ │││││││   0x1000010fc      ldr q0, [x8]
│ │││││││   0x100001100      str x19, [x0]
│ │││││││   0x100001104      add x1, sp, 0x1c0
│ │││││││   0x100001108      mov w0, 4
│ │││││││   0x10000110c      str q0, [x19, 0x10]
│ │││││││   0x100001110      bl sym.imp.clock_gettime
│ ────────< 0x100001114      cbnz w0, 0x1000036a0
│ │││││││   0x100001118      add x8, sp, 0xc0
│ │││││││   0x10000111c      ldr x1, [x8, 0x108]
│ │││││││   0x100001120      cmp x1, w1, sxtw
│ ────────< 0x100001124      b.ne 0x10000362c
│ │││││││   0x100001128      ldr x0, [x8, 0x100]                       ; signed int64_t arg1
│ │││││││   0x10000112c      mov w2, 5
│ │││││││   0x100001130      mov w3, wzr
│ │││││││   0x100001134      add x20, sp, 0xc0
│ │││││││   0x100001138      bl sym.func.100027000
│ │││││││   0x10000113c      str x0, [x19, 0x20]
│ │││││││   0x100001140      mov w0, 4
│ │││││││   0x100001144      str w1, [x19, 0x28]
│ │││││││   0x100001148      add x1, sp, 0x1c0
│ │││││││   0x10000114c      bl sym.imp.clock_gettime
│ ────────< 0x100001150      cbnz w0, 0x1000036a0
│ │││││││   0x100001154      ldr x1, [x20, 0x108]
│ │││││││   0x100001158      add x8, sp, 0xc0
│ │││││││   0x10000115c      cmp x1, w1, sxtw
│ ────────< 0x100001160      b.ne 0x10000362c
│ │││││││   0x100001164      ldr x0, [x8, 0x100]                       ; signed int64_t arg1
│ │││││││   0x100001168      mov w3, 0xe100
│ │││││││   0x10000116c      mov x2, xzr
│ │││││││   0x100001170      movk w3, 0x5f5, lsl 16
│ │││││││   0x100001174      bl sym.func.100027000
│ │││││││   0x100001178      str x0, [x19, 0x30]
│ │││││││   0x10000117c      mov w0, 1
│ │││││││   0x100001180      str w1, [x19, 0x38]
│ │││││││   0x100001184      mov w1, 0xb8
│ │││││││   0x100001188      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x10000118c      mov w8, 0x7f                              ; '\x7f'
│ │││││││   0x100001190      mov x22, x0
│ │││││││   0x100001194      adr x2, sym.func.10002324c                ; 0x10002324c
│ │││││││   0x100001198      nop
│ │││││││   0x10000119c      str w8, [x0]
│ │││││││   0x1000011a0      adr x8, 0x10004e0d0
│ │││││││   0x1000011a4      nop
│ │││││││   0x1000011a8      mov x1, xzr
│ │││││││   0x1000011ac      mov x3, x22
│ │││││││   0x1000011b0      str x8, [x0, 0x38]
│ │││││││   0x1000011b4      adr x8, sym.func.10002ced8                ; 0x10002ced8
│ │││││││   0x1000011b8      nop
│ │││││││   0x1000011bc      stp x8, x21, [x0, 0xa8]
│ │││││││   0x1000011c0      add x0, x0, 8
│ │││││││   0x1000011c4      bl sym.imp.pthread_create
│ ────────< 0x1000011c8      cbnz w0, 0x10000370c
│ │││││││   0x1000011cc      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ │││││││   0x1000011d0      adr x0, 0x100039400                       ; int64_t arg1
│ │││││││   0x1000011d4      nop
│ │││││││   0x1000011d8      str x22, [x19, 8]
│ │││││││   0x1000011dc      str x19, [x8, 0x160]
│ │││││││   0x1000011e0      bl sym.func.100003d14
│ ────────< 0x1000011e4      cbz x0, 0x100001220
│ │││││││   0x1000011e8      adr x8, 0x100039610
│ │││││││   0x1000011ec      nop
│ │││││││   0x1000011f0      cmp x0, x8
│ ────────< 0x1000011f4      b.eq 0x10000121c
│ │││││││   0x1000011f8      ldr w8, [x0, 4]
│ │││││││   0x1000011fc      cmp w8, 1
│ ────────< 0x100001200      b.ne 0x100001220
│ │││││││   0x100001204      ldr w8, [x0, 8]
│ │││││││   0x100001208      cmp w8, 1
│ ────────< 0x10000120c      b.hi 0x100001220
│ │││││││   0x100001210      ldrb w8, [x0, 0xc]
│ │││││││   0x100001214      cmp w8, 0x31
│ ────────< 0x100001218      b.ne 0x100001220
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000011f4(x)
│ ────────> 0x10000121c      bl sym.func.10000d0fc
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x1000011e4(x), 0x100001200(x), 0x10000120c(x), 0x100001218(x)
│ ────────> 0x100001220      adrp x27, reloc._tlv_bootstrap            ; 0x100058000
│ │││││││   0x100001224      ldrb w8, [x27, 0x1a1]
│ ────────< 0x100001228      tbnz w8, 0, 0x100001240
│ │││││││   0x10000122c      adr x0, 0x1000581a1                       ; int64_t arg1
│ │││││││   0x100001230      nop
│ │││││││   0x100001234      adr x1, sym.func.10002db58                ; 0x10002db58 ; int64_t arg2
│ │││││││   0x100001238      nop
│ │││││││   0x10000123c      bl sym.func.100034520
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001228(x)
│ ────────> 0x100001240      mov w8, 1
│ │││││││   0x100001244      adr x10, 0x1000581a0
│ │││││││   0x100001248      nop
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001254(x)
│ ────────> 0x10000124c      ldxrb w9, [x10]
│ │││││││   0x100001250      stxrb w11, w8, [x10]
│ ────────< 0x100001254      cbnz w11, 0x10000124c
│ │││││││   0x100001258      adrp x26, reloc._tlv_bootstrap            ; 0x100058000
│ ────────< 0x10000125c      tbnz w9, 0, 0x1000012e4
│ │││││││   0x100001260      mov w0, 0x20000
│ │││││││   0x100001264      mov w19, 0x20000
│ │││││││   0x100001268      bl sym.imp.malloc                         ;  void *malloc(size_t size)
│ │││││││   0x10000126c      add x8, sp, 0xc0
│ │││││││   0x100001270      mov x1, xzr
│ │││││││   0x100001274      stp x0, x19, [x8, 0x100]
│ │││││││   0x100001278      add x0, sp, 0x1c0
│ │││││││   0x10000127c      str wzr, [x8, 0x110]
│ │││││││   0x100001280      bl sym.imp.sigaltstack
│ │││││││   0x100001284      nop
│ │││││││   0x100001288      add x19, sp, 0xc0
│ │││││││   0x10000128c      ldr d0, 0x100036430                       ; [0x100036430:8]=0x4100000000
│ │││││││   0x100001290      ldrb w8, [x26, 0x1a2]
│ │││││││   0x100001294      str d0, [var_c0h_6]
│ ────────< 0x100001298      tbnz w8, 0, 0x1000012b0
│ │││││││   0x10000129c      adr x0, 0x1000581a2                       ; int64_t arg1
│ │││││││   0x1000012a0      nop
│ │││││││   0x1000012a4      adr x1, sym.func.10002db64                ; 0x10002db64 ; int64_t arg2
│ │││││││   0x1000012a8      nop
│ │││││││   0x1000012ac      bl sym.func.100034520
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001298(x)
│ ────────> 0x1000012b0      nop
│ │││││││   0x1000012b4      add x0, x19, 8
│ │││││││   0x1000012b8      ldr x8, 0x100058220                       ; [0x100058220:8]=0
│ │││││││   0x1000012bc      str x8, [act]
│ │││││││   0x1000012c0      bl sym.imp.sigemptyset
│ │││││││   0x1000012c4      add x1, sp, 0xc0                          ; const struct sigaction *act
│ │││││││   0x1000012c8      mov w0, 0xb
│ │││││││   0x1000012cc      mov x2, xzr                               ; struct sigaction *oldact
│ │││││││   0x1000012d0      bl sym.imp.sigaction                      ; int sigaction(int signum, const struct sigaction *act, struct sigaction *oldact)
│ │││││││   0x1000012d4      add x1, sp, 0xc0                          ; const struct sigaction *act
│ │││││││   0x1000012d8      mov w0, 0xa
│ │││││││   0x1000012dc      mov x2, xzr                               ; struct sigaction *oldact
│ │││││││   0x1000012e0      bl sym.imp.sigaction                      ; int sigaction(int signum, const struct sigaction *act, struct sigaction *oldact)
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x10000125c(x)
│ ────────> 0x1000012e4      adrp x21, reloc._tlv_bootstrap            ; 0x100058000
│ │││││││   0x1000012e8      ldrb w8, [x21, 0x1a9]
│ ────────< 0x1000012ec      tbnz w8, 0, 0x100001304
│ │││││││   0x1000012f0      adr x0, 0x1000581a9                       ; int64_t arg1
│ │││││││   0x1000012f4      nop
│ │││││││   0x1000012f8      adr x1, sym.func.10002eb04                ; 0x10002eb04 ; int64_t arg2
│ │││││││   0x1000012fc      nop
│ │││││││   0x100001300      bl sym.func.100034520
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000012ec(x)
│ ────────> 0x100001304      mov w8, 1
│ │││││││   0x100001308      adr x10, 0x1000581a8
│ │││││││   0x10000130c      nop
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001318(x)
│ ────────> 0x100001310      ldxrb w9, [x10]
│ │││││││   0x100001314      stxrb w11, w8, [x10]
│ ────────< 0x100001318      cbnz w11, 0x100001310
│ │││││││   0x10000131c      adrp x22, reloc._tlv_bootstrap            ; 0x100058000
│ ────────< 0x100001320      tbnz w9, 0, 0x100001548
│ │││││││   0x100001324      ldrb w8, [x22, 0x1aa]
│ ────────< 0x100001328      tbnz w8, 0, 0x100001340
│ │││││││   0x10000132c      adr x0, 0x1000581aa                       ; int64_t arg1
│ │││││││   0x100001330      nop
│ │││││││   0x100001334      adr x1, sym.func.10002eb10                ; 0x10002eb10 ; int64_t arg2
│ │││││││   0x100001338      nop
│ │││││││   0x10000133c      bl sym.func.100034520
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001328(x)
│ ────────> 0x100001340      adr x0, 0x1000581b8
│ │││││││   0x100001344      nop
│ │││││││   0x100001348      bl sym.imp.sigemptyset
│ │││││││   0x10000134c      bl sym.func.100005224
│ │││││││   0x100001350      ldr w8, [x0, 0x50]
│ ────────< 0x100001354      cbz w8, 0x1000037a4
│ │││││││   0x100001358      ldr x25, [x0, 0x58]
│ │││││││   0x10000135c      ldr w8, [x25]
│ │││││││   0x100001360      cmp w8, 0xa0
│ ────────< 0x100001364      b.ne 0x100001470
│ │││││││   0x100001368      ldr x19, [x25, 0x80]
│ │││││││   0x10000136c      mov x27, x24
│ │││││││   0x100001370      mov x20, x23
│ │││││││   0x100001374      ldr w8, [x19]
│ │││││││   0x100001378      cmp w8, 0xa0
│ ────────< 0x10000137c      b.ne 0x100001390
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x10000138c(x)
│ ────────> 0x100001380      ldr x19, [x19, 0x80]
│ │││││││   0x100001384      ldr w8, [x19]
│ │││││││   0x100001388      cmp w8, 0xa0
│ ────────< 0x10000138c      b.eq 0x100001380
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x10000137c(x)
│ ────────> 0x100001390      ldr x0, [x19, 0x48]                       ; int64_t arg1
│ │││││││   0x100001394      bl sym.func.100025884
│ │││││││   0x100001398      mov x21, x0
│ │││││││   0x10000139c      mov x22, x1
│ │││││││   0x1000013a0      mov w0, 1
│ │││││││   0x1000013a4      mov w1, 0xb0
│ │││││││   0x1000013a8      mov w23, w2
│ │││││││   0x1000013ac      mov w24, w3
│ │││││││   0x1000013b0      mov w28, 1
│ │││││││   0x1000013b4      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x1000013b8      mov w8, 0x7b                              ; '{'
│ │││││││   0x1000013bc      strb w28, [x0, 0x88]
│ │││││││   0x1000013c0      adr x9, sym.func.10002eb1c                ; 0x10002eb1c
│ │││││││   0x1000013c4      nop
│ │││││││   0x1000013c8      str w8, [x0]
│ │││││││   0x1000013cc      adr x8, 0x10004e260
│ │││││││   0x1000013d0      nop
│ │││││││   0x1000013d4      stp x21, x22, [x0, 0x18]
│ │││││││   0x1000013d8      mov x25, x0
│ │││││││   0x1000013dc      str x8, [x0, 0x58]
│ │││││││   0x1000013e0      and w8, w24, 1
│ │││││││   0x1000013e4      mov x1, x25                               ; int64_t arg2
│ │││││││   0x1000013e8      str w23, [x0, 0x28]
│ │││││││   0x1000013ec      strb w8, [x0, 0x2c]
│ │││││││   0x1000013f0      ldr w8, [x19]
│ │││││││   0x1000013f4      str x9, [x0, 0x90]
│ │││││││   0x1000013f8      str x19, [x0, 0x78]
│ │││││││   0x1000013fc      str w8, [x0, 0x70]
│ │││││││   0x100001400      sub x8, x22, 8
│ │││││││   0x100001404      and x8, x8, 0xfffffffffffffff0
│ │││││││   0x100001408      sub x9, x8, 0xb0
│ │││││││   0x10000140c      stp x9, x28, [x0, 8]
│ │││││││   0x100001410      stur x0, [x8, -0x10]
│ │││││││   0x100001414      stur x20, [x8, -0x70]
│ │││││││   0x100001418      ldr x0, [x27, 0x20]                       ; [0x100058020:4]=0
│ │││││││                                                              ; section.11.__DATA.__common
│ │││││││                                                              [11] -rw- section size 352 named 11.__DATA.__common ; int64_t arg1
│ │││││││   0x10000141c      bl sym.func.1000053b8
│ │││││││   0x100001420      mov x0, x19                               ; int64_t arg1
│ │││││││   0x100001424      mov x1, x25                               ; int64_t arg2
│ │││││││   0x100001428      bl sym.func.100022684
│ │││││││   0x10000142c      adrp x27, reloc._tlv_bootstrap            ; 0x100058000
│ ────────< 0x100001430      b 0x10000151c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001078(x)
│ ────────> 0x100001434      adr x8, 0x100058358
│ │││││││   0x100001438      nop
│ │││││││   0x10000143c      mov w9, 0x9f
│ │││││││   0x100001440      str x19, [x8, 0x18]
│ │││││││   0x100001444      str w9, [x8, 0x10]
│ │││││││   0x100001448      str w9, [x8]
│ │││││││   0x10000144c      add x0, x21, 8
│ │││││││   0x100001450      str x19, [x8, 8]
│ │││││││   0x100001454      bl sym.imp.pthread_mutex_unlock
│ ────────< 0x100001458      cbz w0, 0x1000010b4
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000010b0(x)
│ ────────> 0x10000145c      mov w1, w0
│ │││││││   0x100001460      adr x0, 0x100038650                       ; int64_t arg1
│ │││││││   0x100001464      nop
│ │││││││   0x100001468      bl sym.func.100005464
│ │││││││   0x10000146c      bl sym.func.100005798
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001364(x)
│ ────────> 0x100001470      ldr x28, [x25, 0x10]
│ │││││││   0x100001474      ldr x0, [x28, 0x48]                       ; int64_t arg1
│ │││││││   0x100001478      bl sym.func.100025884
│ │││││││   0x10000147c      mov x19, x0
│ │││││││   0x100001480      mov x21, x1
│ │││││││   0x100001484      mov w0, 1
│ │││││││   0x100001488      mov w1, 0xb0
│ │││││││   0x10000148c      mov w22, w2
│ │││││││   0x100001490      mov w23, w3
│ │││││││   0x100001494      mov w20, 1
│ │││││││   0x100001498      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x10000149c      mov w8, 0x7b                              ; '{'
│ │││││││   0x1000014a0      strb w20, [x0, 0x88]
│ │││││││   0x1000014a4      adr x9, sym.func.10002eb1c                ; 0x10002eb1c
│ │││││││   0x1000014a8      nop
│ │││││││   0x1000014ac      str w8, [x0]
│ │││││││   0x1000014b0      adr x8, 0x10004e260
│ │││││││   0x1000014b4      nop
│ │││││││   0x1000014b8      stp x19, x21, [x0, 0x18]
│ │││││││   0x1000014bc      mov x10, x24
│ │││││││   0x1000014c0      str x8, [x0, 0x58]
│ │││││││   0x1000014c4      and w8, w23, 1
│ │││││││   0x1000014c8      mov x24, x0
│ │││││││   0x1000014cc      str w22, [x0, 0x28]
│ │││││││   0x1000014d0      mov x1, x24                               ; int64_t arg2
│ │││││││   0x1000014d4      strb w8, [x0, 0x2c]
│ │││││││   0x1000014d8      ldr w8, [x28]
│ │││││││   0x1000014dc      str x9, [x0, 0x90]
│ │││││││   0x1000014e0      str x28, [x0, 0x78]
│ │││││││   0x1000014e4      str w8, [x0, 0x70]
│ │││││││   0x1000014e8      sub x8, x21, 8
│ │││││││   0x1000014ec      and x8, x8, 0xfffffffffffffff0
│ │││││││   0x1000014f0      sub x9, x8, 0xb0
│ │││││││   0x1000014f4      stp x9, x20, [x0, 8]
│ │││││││   0x1000014f8      adr x9, sym.func.10002cec8                ; 0x10002cec8
│ │││││││   0x1000014fc      nop
│ │││││││   0x100001500      stur x0, [x8, -0x10]
│ │││││││   0x100001504      stur x9, [x8, -0x70]
│ │││││││   0x100001508      ldr x0, [x10, 0x20]                       ; [0x100058020:4]=0
│ │││││││                                                              ; section.11.__DATA.__common
│ │││││││                                                              [11] -rw- section size 352 named 11.__DATA.__common ; int64_t arg1
│ │││││││   0x10000150c      bl sym.func.1000053b8
│ │││││││   0x100001510      ldr x0, [x25, 0x30]                       ; int64_t arg1
│ │││││││   0x100001514      mov x1, x24                               ; int64_t arg2
│ │││││││   0x100001518      bl sym.func.1000227fc
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001430(x)
│ ────────> 0x10000151c      mov w0, 0xd
│ │││││││   0x100001520      mov w1, 1
│ │││││││   0x100001524      mov x2, xzr                               ; int64_t arg3
│ │││││││   0x100001528      bl sym.func.100030d2c
│ │││││││   0x10000152c      adr x8, 0x1000582a8
│ │││││││   0x100001530      nop
│ │││││││   0x100001534      mov w0, 0x14
│ │││││││   0x100001538      ldp x1, x2, [x8]                          ; int64_t arg3
│ │││││││   0x10000153c      bl sym.func.100030d2c
│ │││││││   0x100001540      adrp x21, reloc._tlv_bootstrap            ; 0x100058000
│ │││││││   0x100001544      adrp x22, reloc._tlv_bootstrap            ; 0x100058000
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001320(x)
│ ────────> 0x100001548      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ │││││││   0x10000154c      ldrb w8, [x8, 0x1ab]
│ ────────< 0x100001550      tbnz w8, 0, 0x100001568
│ │││││││   0x100001554      adr x0, 0x1000581ab                       ; int64_t arg1
│ │││││││   0x100001558      nop
│ │││││││   0x10000155c      adr x1, sym.func.10002f21c                ; 0x10002f21c ; int64_t arg2
│ │││││││   0x100001560      nop
│ │││││││   0x100001564      bl sym.func.100034520
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001550(x)
│ ────────> 0x100001568      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ │││││││   0x10000156c      ldrb w8, [x8, 0x188]
│ ────────< 0x100001570      tbnz w8, 0, 0x100001588
│ │││││││   0x100001574      adr x0, 0x100058188                       ; int64_t arg1
│ │││││││   0x100001578      nop
│ │││││││   0x10000157c      adr x1, sym.func.1000234f0                ; 0x1000234f0 ; int64_t arg2
│ │││││││   0x100001580      nop
│ │││││││   0x100001584      bl sym.func.100034520
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001570(x)
│ ────────> 0x100001588      nop
│ │││││││   0x10000158c      ldr x19, 0x1000581e0                      ; [0x1000581e0:8]=0
│ │││││││   0x100001590      mov x0, x19                               ; int64_t arg1
│ │││││││   0x100001594      bl sym.func.1000150fc
│ │││││││   0x100001598      ldr x8, [x19, 0x10]
│ │││││││   0x10000159c      ldrsw x9, [x19, 4]
│ │││││││   0x1000015a0      adr x10, 0x10004e7d0
│ │││││││   0x1000015a4      nop
│ │││││││   0x1000015a8      str x10, [x8, x9, lsl 3]
│ │││││││   0x1000015ac      ldr w8, [x19, 4]
│ │││││││   0x1000015b0      adds w8, w8, 1
│ ────────< 0x1000015b4      b.vs 0x10000362c
│ │││││││   0x1000015b8      str w8, [x19, 4]
│ │││││││   0x1000015bc      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ │││││││   0x1000015c0      ldrb w8, [x8, 0x1ac]
│ ────────< 0x1000015c4      tbz w8, 0, 0x100001a4c
│ │││││││   0x1000015c8      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ │││││││   0x1000015cc      ldrb w8, [x8, 0x1ad]
│ ────────< 0x1000015d0      tbz w8, 0, 0x100001a6c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001a68(x)
│ ────────> 0x1000015d4      ldrb w8, [x22, 0x1aa]
│ ────────< 0x1000015d8      tbz w8, 0, 0x100001a88
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001a84(x)
│ ────────> 0x1000015dc      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ │││││││   0x1000015e0      ldrb w8, [x8, 0x1b1]
│ ────────< 0x1000015e4      tbz w8, 0, 0x100001aa8
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001aa4(x)
│ ────────> 0x1000015e8      ldrb w8, [x21, 0x1a9]
│ ────────< 0x1000015ec      tbz w8, 0, 0x100001ac4
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001ac0(x)
│ ────────> 0x1000015f0      ldrb w8, [x27, 0x1a1]
│ ────────< 0x1000015f4      tbz w8, 0, 0x100001ae0
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001adc(x)
│ ────────> 0x1000015f8      ldrb w8, [x26, 0x1a2]
│ ────────< 0x1000015fc      tbz w8, 0, 0x100001afc
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001af8(x)
│ ────────> 0x100001600      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ │││││││   0x100001604      ldrb w8, [x8, 0x1b0]
│ ────────< 0x100001608      tbz w8, 0, 0x100001b1c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001b18(x)
│ ────────> 0x10000160c      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ │││││││   0x100001610      ldrb w8, [x8, 0x1af]
│ ────────< 0x100001614      tbz w8, 0, 0x100001b3c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001b38(x)
│ ────────> 0x100001618      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ │││││││   0x10000161c      ldrb w8, [x8, 0x1ae]
│ ────────< 0x100001620      tbnz w8, 0, 0x100001638
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001b58(x)
│ ────────> 0x100001624      adr x0, 0x1000581ae                       ; int64_t arg1
│ │││││││   0x100001628      nop
│ │││││││   0x10000162c      adr x1, sym.func.1000324f0                ; 0x1000324f0 ; int64_t arg2
│ │││││││   0x100001630      nop
│ │││││││   0x100001634      bl sym.func.100034520
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100001620(x), 0x100001b5c(x)
│ ────────> 0x100001638      mov w0, 1
│ │││││││   0x10000163c      mov w1, 0x38                              ; '8'
│ │││││││   0x100001640      mov w19, 1
│ │││││││   0x100001644      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x100001648      adr x9, 0x100058193
│ │││││││   0x10000164c      nop
│ │││││││   0x100001650      mov w8, 0x29                              ; ')'
│ │││││││   0x100001654      ldrb w10, [x9]
│ │││││││   0x100001658      str w8, [x0]
│ │││││││   0x10000165c      strb w19, [x0, 0x20]
│ │││││││   0x100001660      stur x0, [x9, 0xcd]
│ ────────< 0x100001664      tbnz w10, 0, 0x10000167c
│ │││││││   0x100001668      adr x0, 0x100058193                       ; int64_t arg1
│ │││││││   0x10000166c      nop
│ │││││││   0x100001670      adr x1, sym.func.10002778c                ; 0x10002778c ; int64_t arg2
│ │││││││   0x100001674      nop
│ │││││││   0x100001678      bl sym.func.100034520
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001664(x)
│ ────────> 0x10000167c      nop
│ │││││││   0x100001680      adr x26, 0x1000581c0
│ │││││││   0x100001684      nop
│ │││││││   0x100001688      ldr q0, 0x100035cf0                       ; section.2.__TEXT.__literals
│ │││││││                                                              ; [0x100035cf0:8]=0xc00000007
│ │││││││   0x10000168c      nop
│ │││││││   0x100001690      mov w0, 1
│ │││││││   0x100001694      ldr q1, 0x100035d00                       ; [0x100035d00:8]=0x900000005
│ │││││││   0x100001698      nop
│ │││││││   0x10000169c      mov w1, 0x20
│ │││││││   0x1000016a0      stp q0, q0, [x26, 0x200]
│ │││││││   0x1000016a4      mov w20, 0x20
│ │││││││   0x1000016a8      stp q0, q0, [x26, 0x220]
│ │││││││   0x1000016ac      ldr q0, 0x100035d10                       ; [0x100035d10:8]=0xb00000004
│ │││││││   0x1000016b0      nop
│ │││││││   0x1000016b4      stp q1, q1, [x26, 0x240]
│ │││││││   0x1000016b8      stp q1, q1, [x26, 0x260]
│ │││││││   0x1000016bc      ldr q1, 0x100035d20                       ; [0x100035d20:8]=0xa00000006
│ │││││││   0x1000016c0      nop
│ │││││││   0x1000016c4      stp q0, q0, [x26, 0x280]
│ │││││││   0x1000016c8      stp q0, q0, [x26, 0x2a0]
│ │││││││   0x1000016cc      ldr q0, 0x100035d30                       ; [0x100035d30:8]=0xe8c7b756d76aa478
│ │││││││   0x1000016d0      nop
│ │││││││   0x1000016d4      stp q1, q1, [x26, 0x2c0]
│ │││││││   0x1000016d8      stp q1, q1, [x26, 0x2e0]
│ │││││││   0x1000016dc      ldr q1, 0x100035d40                       ; [0x100035d40:8]=0x4787c62af57c0faf
│ │││││││   0x1000016e0      nop
│ │││││││   0x1000016e4      ldr q2, 0x100035d50                       ; [0x100035d50:8]=0x8b44f7af698098d8
│ │││││││   0x1000016e8      nop
│ │││││││   0x1000016ec      str wzr, [x26]
│ │││││││   0x1000016f0      stp q0, q1, [x26, 0x300]
│ │││││││   0x1000016f4      ldr q0, 0x100035d60                       ; [0x100035d60:8]=0xfd9871936b901122
│ │││││││   0x1000016f8      nop
│ │││││││   0x1000016fc      ldr q1, 0x100035d70                       ; [0x100035d70:8]=0xc040b340f61e2562
│ │││││││   0x100001700      nop
│ │││││││   0x100001704      stp q2, q0, [x26, 0x320]
│ │││││││   0x100001708      ldr q0, 0x100035d80                       ; [0x100035d80:8]=0x2441453d62f105d
│ │││││││   0x10000170c      nop
│ │││││││   0x100001710      ldr q2, 0x100035d90                       ; [0x100035d90:8]=0xc33707d621e1cde6
│ │││││││   0x100001714      nop
│ │││││││   0x100001718      stp q1, q0, [x26, 0x340]
│ │││││││   0x10000171c      ldr q0, 0x100035da0                       ; [0x100035da0:8]=0xfcefa3f8a9e3e905
│ │││││││   0x100001720      nop
│ │││││││   0x100001724      ldr q1, 0x100035db0                       ; [0x100035db0:8]=0x8771f681fffa3942
│ │││││││   0x100001728      nop
│ │││││││   0x10000172c      stp q2, q0, [x26, 0x360]
│ │││││││   0x100001730      ldr q0, 0x100035dc0                       ; [0x100035dc0:8]=0x4bdecfa9a4beea44
│ │││││││   0x100001734      nop
│ │││││││   0x100001738      ldr q2, 0x100035dd0                       ; [0x100035dd0:8]=0xeaa127fa289b7ec6
│ │││││││   0x10000173c      nop
│ │││││││   0x100001740      stp q1, q0, [x26, 0x380]
│ │││││││   0x100001744      ldr q0, 0x100035de0                       ; [0x100035de0:8]=0xe6db99e5d9d4d039
│ │││││││   0x100001748      nop
│ │││││││   0x10000174c      ldr q1, 0x100035df0                       ; [0x100035df0:8]=0x432aff97f4292244
│ │││││││   0x100001750      nop
│ │││││││   0x100001754      stp q2, q0, [x26, 0x3a0]
│ │││││││   0x100001758      ldr q0, 0x100035e00                       ; [0x100035e00:8]=0x8f0ccc92655b59c3
│ │││││││   0x10000175c      nop
│ │││││││   0x100001760      ldr q2, 0x100035e10                       ; [0x100035e10:8]=0xfe2ce6e06fa87e4f
│ │││││││   0x100001764      nop
│ │││││││   0x100001768      stp q1, q0, [x26, 0x3c0]
│ │││││││   0x10000176c      movi v1.2d, 0000000000000000
│ │││││││   0x100001770      ldr q0, 0x100035e20                       ; [0x100035e20:8]=0xbd3af235f7537e82
│ │││││││   0x100001774      stp q2, q0, [x26, 0x3e0]
│ │││││││   0x100001778      stp q1, q1, [x26, 0x170]
│ │││││││   0x10000177c      str q1, [x26, 0x400]
│ │││││││   0x100001780      str q1, [x26, 0x410]
│ │││││││   0x100001784      str q1, [x26, 0x420]
│ │││││││   0x100001788      str q1, [x26, 0x430]
│ │││││││   0x10000178c      str q1, [x26, 0x440]
│ │││││││   0x100001790      str q1, [x26, 0x450]
│ │││││││   0x100001794      str q1, [x26, 0x460]
│ │││││││   0x100001798      str q1, [x26, 0x470]
│ │││││││   0x10000179c      str q1, [x26, 0x480]
│ │││││││   0x1000017a0      str q1, [x26, 0x490]
│ │││││││   0x1000017a4      str q1, [x26, 0x4a0]
│ │││││││   0x1000017a8      str q1, [x26, 0x4b0]
│ │││││││   0x1000017ac      str q1, [x26, 0x4c0]
│ │││││││   0x1000017b0      str q1, [x26, 0x4d0]
│ │││││││   0x1000017b4      str q1, [x26, 0x4e0]
│ │││││││   0x1000017b8      str q1, [x26, 0x4f0]
│ │││││││   0x1000017bc      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x1000017c0      nop
│ │││││││   0x1000017c4      nop
│ │││││││   0x1000017c8      mov x19, x0
│ │││││││   0x1000017cc      ldr q0, 0x100035e30                       ; [0x100035e30:8]=0x8b8a80888182888d
│ │││││││   0x1000017d0      ldr q1, 0x100035e40                       ; [0x100035e40:8]=0x8f80808f8e868882
│ │││││││   0x1000017d4      mov w1, 0x20
│ │││││││   0x1000017d8      stp q0, q1, [x0]
│ │││││││   0x1000017dc      mov w0, 1
│ │││││││   0x1000017e0      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x1000017e4      nop
│ │││││││   0x1000017e8      nop
│ │││││││   0x1000017ec      mov x21, x0
│ │││││││   0x1000017f0      ldr q0, 0x100035e50                       ; [0x100035e50:8]=0x8a838a8c8c858585
│ │││││││   0x1000017f4      ldr q1, 0x100035e60                       ; [0x100035e60:8]=0x87888e8085858e84
│ │││││││   0x1000017f8      mov w1, 0x20
│ │││││││   0x1000017fc      stp q0, q1, [x0]
│ │││││││   0x100001800      mov w0, 1
│ │││││││   0x100001804      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x100001808      nop
│ │││││││   0x10000180c      nop
│ │││││││   0x100001810      mov x22, x0
│ │││││││   0x100001814      ldr q0, 0x100035e70                       ; [0x100035e70:8]=0x84878b8c8089878c
│ │││││││   0x100001818      ldr q1, 0x100035e80                       ; [0x100035e80:8]=0x878f898c83888f89
│ │││││││   0x10000181c      mov w1, 0x20
│ │││││││   0x100001820      stp q0, q1, [x0]
│ │││││││   0x100001824      mov w0, 1
│ │││││││   0x100001828      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x10000182c      nop
│ │││││││   0x100001830      nop
│ │││││││   0x100001834      mov x23, x0
│ │││││││   0x100001838      ldr q0, 0x100035e90                       ; [0x100035e90:8]=0x8b818d8b8c808f8c
│ │││││││   0x10000183c      ldr q1, 0x100035ea0                       ; [0x100035ea0:8]=0x8e8b828f87888f8f
│ │││││││   0x100001840      mov w1, 0x20
│ │││││││   0x100001844      stp q0, q1, [x0]
│ │││││││   0x100001848      mov w0, 1
│ │││││││   0x10000184c      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x100001850      nop
│ │││││││   0x100001854      nop
│ │││││││   0x100001858      mov x24, x0
│ │││││││   0x10000185c      ldr q0, 0x100035eb0                       ; [0x100035eb0:8]=0x89848b8d8080848d
│ │││││││   0x100001860      ldr q1, 0x100035ec0                       ; [0x100035ec0:8]=0x848a828b808a8f81
│ │││││││   0x100001864      mov w1, 0x20
│ │││││││   0x100001868      stp q0, q1, [x0]
│ │││││││   0x10000186c      mov w0, 1
│ │││││││   0x100001870      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x100001874      nop
│ │││││││   0x100001878      nop
│ │││││││   0x10000187c      mov x25, x0
│ │││││││   0x100001880      ldr q0, 0x100035ed0                       ; [0x100035ed0:8]=0x88818e8d818c8f89
│ │││││││   0x100001884      ldr q1, 0x100035ee0                       ; [0x100035ee0:8]=0x8780898e8c8f8d85
│ │││││││   0x100001888      mov w8, 6
│ │││││││   0x10000188c      mov w1, 0x60                              ; '`'
│ │││││││   0x100001890      stp xzr, xzr, [x26, 0x150]
│ │││││││   0x100001894      stp q0, q1, [x0]
│ │││││││   0x100001898      mov w0, 1
│ │││││││   0x10000189c      str xzr, [x26, 0x160]
│ │││││││   0x1000018a0      str w8, [x26, 0x158]
│ │││││││   0x1000018a4      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x1000018a8      nop
│ │││││││   0x1000018ac      str x0, [x26, 0x160]
│ │││││││   0x1000018b0      mov w1, 0x50                              ; 'P'
│ │││││││   0x1000018b4      ldr d0, 0x100036438                       ; [0x100036438:8]=0x60000001c
│ │││││││   0x1000018b8      str w20, [x0]
│ │││││││   0x1000018bc      strb wzr, [x0, 4]
│ │││││││   0x1000018c0      str x19, [x0, 8]
│ │││││││   0x1000018c4      mov w19, 0x50                             ; 'P'
│ │││││││   0x1000018c8      str w20, [x0, 0x10]
│ │││││││   0x1000018cc      strb wzr, [x0, 0x14]
│ │││││││   0x1000018d0      str x21, [x0, 0x18]
│ │││││││   0x1000018d4      str w20, [x0, 0x20]
│ │││││││   0x1000018d8      strb wzr, [x0, 0x24]
│ │││││││   0x1000018dc      str x22, [x0, 0x28]
│ │││││││   0x1000018e0      str w20, [x0, 0x30]
│ │││││││   0x1000018e4      strb wzr, [x0, 0x34]
│ │││││││   0x1000018e8      str x23, [x0, 0x38]
│ │││││││   0x1000018ec      str w20, [x0, 0x40]
│ │││││││   0x1000018f0      strb wzr, [x0, 0x44]
│ │││││││   0x1000018f4      str x24, [x0, 0x48]
│ │││││││   0x1000018f8      str x25, [x0, 0x58]
│ │││││││   0x1000018fc      strb wzr, [x0, 0x54]
│ │││││││   0x100001900      str w20, [x0, 0x50]
│ │││││││   0x100001904      mov w0, 1
│ │││││││   0x100001908      str d0, [x26, 0x150]
│ │││││││   0x10000190c      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x100001910      nop
│ │││││││   0x100001914      str x0, [x26, 0x100]
│ │││││││   0x100001918      mov w1, 0x18
│ │││││││   0x10000191c      ldr q0, 0x100035ef0                       ; [0x100035ef0:8]=0x8180888281858486
│ │││││││   0x100001920      nop
│ │││││││   0x100001924      str w19, [x26, 0xf8]
│ │││││││   0x100001928      ldr q1, 0x100035f00                       ; [0x100035f00:8]=0x81898f8185848085
│ │││││││   0x10000192c      nop
│ │││││││   0x100001930      strb wzr, [x26, 0xfc]
│ │││││││   0x100001934      ldr q2, 0x100035f10                       ; [0x100035f10:8]=0x8a858d8e8e8a838e
│ │││││││   0x100001938      nop
│ │││││││   0x10000193c      stp q0, q1, [x0]
│ │││││││   0x100001940      ldr q0, 0x100035f20                       ; [0x100035f20:8]=0x88818d8e8e88898e
│ │││││││   0x100001944      nop
│ │││││││   0x100001948      ldr q1, 0x100035f30                       ; [0x100035f30:8]=0x8381888f888a8284
│ │││││││   0x10000194c      stp q2, q0, [x0, 0x20]
│ │││││││   0x100001950      str q1, [x0, 0x40]
│ │││││││   0x100001954      mov w0, 1
│ │││││││   0x100001958      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x10000195c      ldr w8, [x26, 0x134]
│ │││││││   0x100001960      mov x27, x0
│ │││││││   0x100001964      mov w9, 3
│ │││││││   0x100001968      str w9, [x0]
│ │││││││   0x10000196c      cmp w8, 6
│ │││││││   0x100001970      str x0, [var_78h]
│ ────────< 0x100001974      b.ne 0x100001b60
│ │││││││   0x100001978      mov x19, xzr
│ │││││││   0x10000197c      adrp x22, reloc._tlv_bootstrap            ; 0x100058000
│ │││││││   0x100001980      adrp x23, reloc._tlv_bootstrap            ; 0x100058000
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000019b8(x)
│ ────────> 0x100001984      ldr x8, [x22, 0x300]
│ │││││││   0x100001988      mov x0, x27                               ; int64_t arg1
│ │││││││   0x10000198c      ldr x21, [x8, x19, lsl 3]
│ │││││││   0x100001990      bl sym.func.1000150fc
│ │││││││   0x100001994      ldrsw x8, [x27, 4]
│ │││││││   0x100001998      ldr x20, [x27, 0x10]
│ │││││││   0x10000199c      adds w28, w8, 1
│ │││││││   0x1000019a0      str x21, [x20, x8, lsl 3]
│ ────────< 0x1000019a4      b.vs 0x10000362c
│ │││││││   0x1000019a8      ldrsw x8, [x23, 0x2f4]
│ │││││││   0x1000019ac      add x19, x19, 1
│ │││││││   0x1000019b0      str w28, [x27, 4]
│ │││││││   0x1000019b4      cmp x19, x8
│ ────────< 0x1000019b8      b.lt 0x100001984
│ │││││││   ; XREFS: CODE 0x100001c54  CODE 0x100001cb8  CODE 0x100001cc4  
│ │││││││   ; XREFS: CODE 0x100001ec0  CODE 0x1000021a0  CODE 0x100002214  
│ │││││││   ; XREFS: CODE 0x100002318  CODE 0x100003670  
│ ────────> 0x1000019bc      nop
│ │││││││   0x1000019c0      ldr w22, 0x100058314                      ; [0x100058314:8]=0
│ ────────< 0x1000019c4      tbnz w22, 0x1f, 0x100003720
│ ────────< 0x1000019c8      cbz w22, 0x100002334
│ │││││││   0x1000019cc      lsl x23, x22, 4
│ │││││││   0x1000019d0      mov w0, 1
│ │││││││   0x1000019d4      mov x1, x23                               ; size_t size
│ │││││││   0x1000019d8      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x1000019dc      mov x24, x0
│ │││││││   0x1000019e0      mov x19, xzr
│ │││││││   0x1000019e4      adrp x21, reloc._tlv_bootstrap            ; 0x100058000
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001a1c(x)
│ ────────> 0x1000019e8      ldr x8, [x21, 0x320]
│ │││││││   0x1000019ec      add x8, x8, x19
│ │││││││   0x1000019f0      ldr x2, [x8, 8]
│ │││││││   0x1000019f4      ldr w0, [x8]
│ │││││││   0x1000019f8      ldrb w1, [x8, 4]
│ │││││││   0x1000019fc      bl sym.func.100033ef8
│ │││││││   0x100001a00      add x8, x24, x19
│ │││││││   0x100001a04      add x19, x19, 0x10
│ │││││││   0x100001a08      and w9, w1, 1
│ │││││││   0x100001a0c      cmp x23, x19
│ │││││││   0x100001a10      str w0, [x8]
│ │││││││   0x100001a14      str x2, [x8, 8]
│ │││││││   0x100001a18      strb w9, [x8, 4]
│ ────────< 0x100001a1c      b.ne 0x1000019e8
│ │││││││   0x100001a20      mov w0, 1
│ │││││││   0x100001a24      mov w1, 0x18
│ │││││││   0x100001a28      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x100001a2c      mov w8, 0x1c
│ │││││││   0x100001a30      mov x19, x0
│ │││││││   0x100001a34      str w22, [x0, 8]
│ │││││││   0x100001a38      str w8, [x0]
│ │││││││   0x100001a3c      mov w0, 1
│ │││││││   0x100001a40      mov x1, x23                               ; size_t size
│ │││││││   0x100001a44      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ────────< 0x100001a48      b 0x10000235c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000015c4(x)
│ ────────> 0x100001a4c      adr x0, 0x1000581ac                       ; int64_t arg1
│ │││││││   0x100001a50      nop
│ │││││││   0x100001a54      adr x1, sym.func.10002ef00                ; 0x10002ef00 ; int64_t arg2
│ │││││││   0x100001a58      nop
│ │││││││   0x100001a5c      bl sym.func.100034520
│ │││││││   0x100001a60      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ │││││││   0x100001a64      ldrb w8, [x8, 0x1ad]
│ ────────< 0x100001a68      tbnz w8, 0, 0x1000015d4
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000015d0(x)
│ ────────> 0x100001a6c      adr x0, 0x1000581ad                       ; int64_t arg1
│ │││││││   0x100001a70      nop
│ │││││││   0x100001a74      adr x1, sym.func.10002fde8                ; 0x10002fde8 ; int64_t arg2
│ │││││││   0x100001a78      nop
│ │││││││   0x100001a7c      bl sym.func.100034520
│ │││││││   0x100001a80      ldrb w8, [x22, 0x1aa]
│ ────────< 0x100001a84      tbnz w8, 0, 0x1000015dc
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000015d8(x)
│ ────────> 0x100001a88      adr x0, 0x1000581aa                       ; int64_t arg1
│ │││││││   0x100001a8c      nop
│ │││││││   0x100001a90      adr x1, sym.func.10002eb10                ; 0x10002eb10 ; int64_t arg2
│ │││││││   0x100001a94      nop
│ │││││││   0x100001a98      bl sym.func.100034520
│ │││││││   0x100001a9c      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ │││││││   0x100001aa0      ldrb w8, [x8, 0x1b1]
│ ────────< 0x100001aa4      tbnz w8, 0, 0x1000015e8
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000015e4(x)
│ ────────> 0x100001aa8      adr x0, 0x1000581b1                       ; int64_t arg1
│ │││││││   0x100001aac      nop
│ │││││││   0x100001ab0      adr x1, sym.func.100032d90                ; 0x100032d90 ; int64_t arg2
│ │││││││   0x100001ab4      nop
│ │││││││   0x100001ab8      bl sym.func.100034520
│ │││││││   0x100001abc      ldrb w8, [x21, 0x1a9]
│ ────────< 0x100001ac0      tbnz w8, 0, 0x1000015f0
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000015ec(x)
│ ────────> 0x100001ac4      adr x0, 0x1000581a9                       ; int64_t arg1
│ │││││││   0x100001ac8      nop
│ │││││││   0x100001acc      adr x1, sym.func.10002eb04                ; 0x10002eb04 ; int64_t arg2
│ │││││││   0x100001ad0      nop
│ │││││││   0x100001ad4      bl sym.func.100034520
│ │││││││   0x100001ad8      ldrb w8, [x27, 0x1a1]
│ ────────< 0x100001adc      tbnz w8, 0, 0x1000015f8
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000015f4(x)
│ ────────> 0x100001ae0      adr x0, 0x1000581a1                       ; int64_t arg1
│ │││││││   0x100001ae4      nop
│ │││││││   0x100001ae8      adr x1, sym.func.10002db58                ; 0x10002db58 ; int64_t arg2
│ │││││││   0x100001aec      nop
│ │││││││   0x100001af0      bl sym.func.100034520
│ │││││││   0x100001af4      ldrb w8, [x26, 0x1a2]
│ ────────< 0x100001af8      tbnz w8, 0, 0x100001600
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000015fc(x)
│ ────────> 0x100001afc      adr x0, 0x1000581a2                       ; int64_t arg1
│ │││││││   0x100001b00      nop
│ │││││││   0x100001b04      adr x1, sym.func.10002db64                ; 0x10002db64 ; int64_t arg2
│ │││││││   0x100001b08      nop
│ │││││││   0x100001b0c      bl sym.func.100034520
│ │││││││   0x100001b10      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ │││││││   0x100001b14      ldrb w8, [x8, 0x1b0]
│ ────────< 0x100001b18      tbnz w8, 0, 0x10000160c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001608(x)
│ ────────> 0x100001b1c      adr x0, 0x1000581b0                       ; int64_t arg1
│ │││││││   0x100001b20      nop
│ │││││││   0x100001b24      adr x1, sym.func.1000329e4                ; 0x1000329e4 ; int64_t arg2
│ │││││││   0x100001b28      nop
│ │││││││   0x100001b2c      bl sym.func.100034520
│ │││││││   0x100001b30      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ │││││││   0x100001b34      ldrb w8, [x8, 0x1af]
│ ────────< 0x100001b38      tbnz w8, 0, 0x100001618
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001614(x)
│ ────────> 0x100001b3c      adr x0, 0x1000581af                       ; int64_t arg1
│ │││││││   0x100001b40      nop
│ │││││││   0x100001b44      adr x1, sym.func.100032718                ; 0x100032718 ; int64_t arg2
│ │││││││   0x100001b48      nop
│ │││││││   0x100001b4c      bl sym.func.100034520
│ │││││││   0x100001b50      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ │││││││   0x100001b54      ldrb w8, [x8, 0x1ae]
│ ────────< 0x100001b58      tbz w8, 0, 0x100001624
│ ────────< 0x100001b5c      b 0x100001638
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001974(x)
│ ────────> 0x100001b60      mov x20, xzr
│ │││││││   0x100001b64      mov w28, wzr
│ │││││││   0x100001b68      mov w26, wzr
│ │││││││   0x100001b6c      adr x21, 0x10005818a
│ │││││││   0x100001b70      nop
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002314(x)
│ ────────> 0x100001b74      adrp x8, reloc._tlv_bootstrap             ; 0x100058000
│ │││││││   0x100001b78      ldrb w8, [x8, 0x18a]
│ ────────< 0x100001b7c      tbnz w8, 0, 0x100001b90
│ │││││││   0x100001b80      mov x0, x21                               ; int64_t arg1
│ │││││││   0x100001b84      adr x1, sym.func.100025d90                ; 0x100025d90 ; int64_t arg2
│ │││││││   0x100001b88      nop
│ │││││││   0x100001b8c      bl sym.func.100034520
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001b7c(x)
│ ────────> 0x100001b90      add w26, w26, 1
│ │││││││   0x100001b94      ldur x22, [x21, 0x66]
│ │││││││   0x100001b98      adr x0, 0x10004e820                       ; int64_t arg1
│ │││││││   0x100001b9c      nop
│ │││││││   0x100001ba0      mov w1, w26
│ │││││││   0x100001ba4      mov w2, 6
│ │││││││   0x100001ba8      adr x3, 0x10004e838                       ; int64_t arg4
│ │││││││   0x100001bac      nop
│ │││││││   0x100001bb0      bl sym.func.100004ba8
│ │││││││   0x100001bb4      ldr w1, [x0, 4]
│ │││││││   0x100001bb8      add x3, x0, 0xc                           ; 0x10004e82c ; "flag[" ; int64_t arg_8h
│ │││││││   0x100001bbc      mov x0, x22                               ; int64_t arg1
│ │││││││   0x100001bc0      mov w2, 1
│ │││││││   0x100001bc4      bl sym.func.1000305b0
│ │││││││   0x100001bc8      ldrb w8, [x21]
│ ────────< 0x100001bcc      tbnz w8, 0, 0x100001be0
│ │││││││   0x100001bd0      mov x0, x21                               ; int64_t arg1
│ │││││││   0x100001bd4      adr x1, sym.func.100025d90                ; 0x100025d90 ; int64_t arg2
│ │││││││   0x100001bd8      nop
│ │││││││   0x100001bdc      bl sym.func.100034520
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001bcc(x)
│ ────────> 0x100001be0      nop
│ │││││││   0x100001be4      ldr x22, 0x1000581f0                      ; [0x1000581f0:8]=0
│ │││││││   0x100001be8      ldr w1, [x22, 0x68]
│ │││││││   0x100001bec      cmp w1, 1
│ ────────< 0x100001bf0      b.lt 0x100001c24
│ │││││││   0x100001bf4      ldr x3, [x22, 0x50]
│ ────────< 0x100001bf8      cbnz x3, 0x100001c18
│ │││││││   0x100001bfc      ldr w0, [x22, 0x70]
│ ────────< 0x100001c00      tbnz w0, 0x1f, 0x10000362c
│ │││││││   0x100001c04      mov w19, w1
│ │││││││   0x100001c08      bl sym.imp.malloc                         ;  void *malloc(size_t size)
│ │││││││   0x100001c0c      mov w1, w19
│ │││││││   0x100001c10      mov x3, x0
│ │││││││   0x100001c14      str x0, [x22, 0x50]
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001bf8(x)
│ ────────> 0x100001c18      mov x0, x22                               ; int64_t arg1
│ │││││││   0x100001c1c      mov w2, wzr
│ │││││││   0x100001c20      bl sym.func.1000261d8
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001bf0(x)
│ ────────> 0x100001c24      str wzr, [x22, 0x68]
│ │││││││   0x100001c28      nop
│ │││││││   0x100001c2c      ldr x25, 0x100058210                      ; [0x100058210:8]=0
│ │││││││   0x100001c30      str w26, [var_a0h]
│ │││││││   0x100001c34      mov x0, x25                               ; int64_t arg1
│ │││││││   0x100001c38      bl sym.func.1000331d4
│ ────────< 0x100001c3c      cbz x0, 0x100001cbc
│ │││││││   0x100001c40      mov x1, x25                               ; int64_t arg2
│ │││││││   0x100001c44      mov x26, x0
│ │││││││   0x100001c48      bl sym.func.1000332b8
│ │││││││   0x100001c4c      mov x19, x26
│ │││││││   0x100001c50      ldr w23, [x19, 8]!
│ ────────< 0x100001c54      cbz w23, 0x1000019bc
│ │││││││   0x100001c58      cmp w23, 1
│ ────────< 0x100001c5c      b.lt 0x100001e94
│ │││││││   0x100001c60      ldr x22, [x26, 0x10]
│ │││││││   0x100001c64      mov w1, 0xa
│ │││││││   0x100001c68      mov x2, x23                               ; size_t n
│ │││││││   0x100001c6c      mov x0, x22                               ; void *s
│ │││││││   0x100001c70      bl sym.imp.memchr                         ; void *memchr(void *s, int c, size_t n)
│ ────────< 0x100001c74      cbz x0, 0x100001e94
│ │││││││   0x100001c78      sub x8, x0, x22
│ │││││││   0x100001c7c      cmp x8, w8, sxtw
│ ────────< 0x100001c80      b.ne 0x10000362c
│ │││││││   0x100001c84      mov w8, w8
│ │││││││   0x100001c88      mov w9, 0xc9
│ ────────< 0x100001c8c      cbnz w9, 0x100001e9c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001e98(x)
│ ────────> 0x100001c90      mov w8, 0x7fffffff
│ │││││││   0x100001c94      cmp w23, w8
│ ────────< 0x100001c98      b.ne 0x100001f1c
│ │││││││   0x100001c9c      mov x0, x26                               ; int64_t arg1
│ │││││││   0x100001ca0      mov w1, 0x7fffffff
│ │││││││   0x100001ca4      mov w2, 0xa
│ │││││││   0x100001ca8      bl sym.func.100014f38
│ │││││││   0x100001cac      ldr w26, [var_a0h]
│ │││││││   0x100001cb0      mov x22, x0
│ ────────< 0x100001cb4      cbnz x0, 0x100002218
│ ────────< 0x100001cb8      b 0x1000019bc
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001c3c(x)
│ ────────> 0x100001cbc      mov x0, x25                               ; int64_t arg1
│ │││││││   0x100001cc0      bl sym.func.100033d64
│ ────────< 0x100001cc4      cbz w0, 0x1000019bc
│ │││││││   0x100001cc8      mov w22, w0
│ │││││││   0x100001ccc      mov w27, w1
│ │││││││   0x100001cd0      mov x26, x2
│ │││││││   0x100001cd4      cmp w0, 1
│ ────────< 0x100001cd8      b.lt 0x100001ec4
│ │││││││   0x100001cdc      mov w2, w22
│ │││││││   0x100001ce0      mov x0, x26                               ; void *s
│ │││││││   0x100001ce4      mov w1, 0xa
│ │││││││   0x100001ce8      bl sym.imp.memchr                         ; void *memchr(void *s, int c, size_t n)
│ ────────< 0x100001cec      cbz x0, 0x100001ec4
│ │││││││   0x100001cf0      sub x8, x0, x26
│ │││││││   0x100001cf4      cmp x8, w8, sxtw
│ ────────< 0x100001cf8      b.ne 0x10000362c
│ │││││││   0x100001cfc      mov w8, w8
│ │││││││   0x100001d00      mov w9, 0xc9
│ │││││││   0x100001d04      str w28, [var_90h]
│ ────────< 0x100001d08      cbnz w9, 0x100001ed0
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001ecc(x)
│ ────────> 0x100001d0c      mov w0, 1
│ │││││││   0x100001d10      mov w1, 0x50                              ; 'P'
│ │││││││   0x100001d14      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x100001d18      mov w8, 0x76                              ; 'v'
│ │││││││   0x100001d1c      mov x28, x0
│ │││││││   0x100001d20      str w8, [x0]
│ │││││││   0x100001d24      mov w0, 0x4d                              ; 'M'
│ │││││││   0x100001d28      bl sym.imp.malloc                         ;  void *malloc(size_t size)
│ │││││││   0x100001d2c      mov w8, 0x4d                              ; 'M'
│ │││││││   0x100001d30      mov w24, 0x7fffffff
│ │││││││   0x100001d34      str x0, [x28, 0x40]
│ │││││││   0x100001d38      str w8, [x28, 0x3c]
│ ────────< 0x100001d3c      b 0x100001d44
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100001db0(x), 0x100001dd0(x), 0x100001de4(x)
│ ────────> 0x100001d40      mov x8, xzr
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100001d3c(x), 0x100001dfc(x)
│ ────────> 0x100001d44      cmp w22, w24
│ │││││││   0x100001d48      csel w23, w22, w24, lt
│ ────────< 0x100001d4c      tbnz w23, 0x1f, 0x100003674
│ │││││││   0x100001d50      mov x0, x28                               ; void *ptr
│ │││││││   0x100001d54      mov w1, w23
│ │││││││   0x100001d58      bl sym.func.100004464
│ │││││││   0x100001d5c      ldr w21, [x28, 0x38]
│ │││││││   0x100001d60      adds w8, w21, 0xc
│ ────────< 0x100001d64      b.vs 0x10000362c
│ │││││││   0x100001d68      ldr x19, [x28, 0x40]
│ │││││││   0x100001d6c      mov x1, x26                               ; const void *s2
│ │││││││   0x100001d70      mov x2, x23                               ; size_t n
│ │││││││   0x100001d74      add x0, x19, w8, sxtw                     ; void *s1
│ │││││││   0x100001d78      bl sym.imp.memcpy                         ; void *memcpy(void *s1, const void *s2, size_t n)
│ │││││││   0x100001d7c      adds w21, w21, w23
│ ────────< 0x100001d80      b.vs 0x10000362c
│ │││││││   0x100001d84      mov x0, x25                               ; int64_t arg1
│ │││││││   0x100001d88      mov w1, w23
│ │││││││   0x100001d8c      str w21, [x28, 0x38]
│ │││││││   0x100001d90      bl sym.func.100033e14
│ │││││││   0x100001d94      subs w24, w24, w23
│ ────────< 0x100001d98      b.eq 0x1000021a4
│ │││││││   0x100001d9c      subs w22, w22, w23
│ ────────< 0x100001da0      b.eq 0x100001db4
│ │││││││   0x100001da4      add x26, x26, x23
│ │││││││   0x100001da8      cmp w22, 1
│ ────────< 0x100001dac      b.ge 0x100001dd4
│ ────────< 0x100001db0      b 0x100001d40
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001da0(x)
│ ────────> 0x100001db4      mov x0, x25                               ; int64_t arg1
│ │││││││   0x100001db8      bl sym.func.100033d64
│ ────────< 0x100001dbc      cbz w0, 0x1000021b8
│ │││││││   0x100001dc0      mov w22, w0
│ │││││││   0x100001dc4      mov w27, w1
│ │││││││   0x100001dc8      mov x26, x2
│ │││││││   0x100001dcc      cmp w0, 1
│ ────────< 0x100001dd0      b.lt 0x100001d40
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001dac(x)
│ ────────> 0x100001dd4      mov w2, w22
│ │││││││   0x100001dd8      mov x0, x26                               ; void *s
│ │││││││   0x100001ddc      mov w1, 0xa
│ │││││││   0x100001de0      bl sym.imp.memchr                         ; void *memchr(void *s, int c, size_t n)
│ ────────< 0x100001de4      cbz x0, 0x100001d40
│ │││││││   0x100001de8      sub x8, x0, x26
│ │││││││   0x100001dec      cmp x8, w8, sxtw
│ ────────< 0x100001df0      b.ne 0x10000362c
│ │││││││   0x100001df4      mov w8, w8
│ │││││││   0x100001df8      mov w9, 0xc9
│ ────────< 0x100001dfc      cbz w9, 0x100001d44
│ │││││││   0x100001e00      cmp w24, w8
│ │││││││   0x100001e04      csinc w23, w24, w8, le
│ ────────< 0x100001e08      tbnz w23, 0x1f, 0x100003674
│ │││││││   0x100001e0c      mov x24, xzr
│ │││││││   0x100001e10      mov w8, wzr
│ ────────< 0x100001e14      tbnz w22, 0x1f, 0x100002328
│ │││││││   0x100001e18      cmp w23, w22
│ │││││││   0x100001e1c      mov x22, x24
│ ────────< 0x100001e20      b.hi 0x100001e3c
│ │││││││   0x100001e24      and w8, w27, 1
│ │││││││   0x100001e28      mov x22, x26
│ │││││││   0x100001e2c      strb w8, [var_1c0h]
│ │││││││   0x100001e30      and w8, w8, 0xff
│ │││││││   0x100001e34      orr x24, x23, x8, lsl 32
│ │││││││   0x100001e38      mov w8, 0x206
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001e20(x)
│ ────────> 0x100001e3c      cbz w8, 0x100003664
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x10000232c(x)
│ ────────> 0x100001e40      ldr w26, [var_a0h]
│ ────────< 0x100001e44      cbz w24, 0x100001e84
│ │││││││   0x100001e48      mov x0, x28                               ; void *ptr
│ │││││││   0x100001e4c      mov w1, w24
│ │││││││   0x100001e50      bl sym.func.100004464
│ │││││││   0x100001e54      ldr w21, [x28, 0x38]
│ │││││││   0x100001e58      adds w8, w21, 0xc
│ ────────< 0x100001e5c      b.vs 0x10000362c
│ ────────< 0x100001e60      tbnz w24, 0x1f, 0x100003664
│ │││││││   0x100001e64      ldr x19, [x28, 0x40]
│ │││││││   0x100001e68      and x2, x24, 0x7fffffff                   ; size_t n
│ │││││││   0x100001e6c      mov x1, x22                               ; const void *s2
│ │││││││   0x100001e70      add x0, x19, w8, sxtw                     ; void *s1
│ │││││││   0x100001e74      bl sym.imp.memcpy                         ; void *memcpy(void *s1, const void *s2, size_t n)
│ │││││││   0x100001e78      adds w21, w21, w24
│ ────────< 0x100001e7c      b.vs 0x10000362c
│ │││││││   0x100001e80      str w21, [x28, 0x38]
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001e44(x)
│ ────────> 0x100001e84      mov x0, x25                               ; int64_t arg1
│ │││││││   0x100001e88      mov w1, w23
│ │││││││   0x100001e8c      bl sym.func.100033e14
│ ────────< 0x100001e90      b 0x1000021c0
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100001c5c(x), 0x100001c74(x)
│ ────────> 0x100001e94      mov x8, xzr
│ ────────< 0x100001e98      b 0x100001c90
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001c8c(x)
│ ────────> 0x100001e9c      adds w8, w8, 1
│ │││││││   0x100001ea0      mov w9, 0x7fffffff
│ │││││││   0x100001ea4      mov x0, x26                               ; int64_t arg1
│ │││││││   0x100001ea8      csel w1, w9, w8, vs
│ │││││││   0x100001eac      mov w2, 0xa
│ │││││││   0x100001eb0      bl sym.func.100014f38
│ │││││││   0x100001eb4      ldr w26, [var_a0h]
│ │││││││   0x100001eb8      mov x22, x0
│ ────────< 0x100001ebc      cbnz x0, 0x100002218
│ ────────< 0x100001ec0      b 0x1000019bc
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100001cd8(x), 0x100001cec(x)
│ ────────> 0x100001ec4      mov x8, xzr
│ │││││││   0x100001ec8      str w28, [var_90h]
│ ────────< 0x100001ecc      b 0x100001d0c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001d08(x)
│ ────────> 0x100001ed0      adds w9, w8, 1
│ │││││││   0x100001ed4      mov w10, 0x7fffffff
│ │││││││   0x100001ed8      csel w23, w10, w9, vs
│ │││││││   0x100001edc      cmp w23, 0
│ ────────< 0x100001ee0      b.le 0x1000020ec
│ │││││││   0x100001ee4      cmp w23, w22
│ ────────< 0x100001ee8      b.gt 0x100003664
│ │││││││   0x100001eec      sub w9, w23, 1
│ │││││││   0x100001ef0      ldrb w8, [x26, w9, uxtw]
│ │││││││   0x100001ef4      cmp w8, 0xa
│ │││││││   0x100001ef8      mov w8, w23
│ ────────< 0x100001efc      b.ne 0x1000020f8
│ ────────< 0x100001f00      cbz w9, 0x1000020f4
│ │││││││   0x100001f04      add x8, x26, w23, uxtw
│ │││││││   0x100001f08      sub w10, w23, 2
│ │││││││   0x100001f0c      ldurb w8, [x8, -2]                        ; [0x100000000:4]=0xfeedfacf ; sym.__mh_execute_header
│ │││││││   0x100001f10      cmp w8, 0xd
│ │││││││   0x100001f14      csel w8, w10, w9, eq
│ ────────< 0x100001f18      b 0x1000020f8
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001c98(x)
│ ────────> 0x100001f1c      mov w0, 1
│ │││││││   0x100001f20      mov w1, 0x50                              ; 'P'
│ │││││││   0x100001f24      str w28, [var_90h]
│ │││││││   0x100001f28      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x100001f2c      mov w8, 0x76                              ; 'v'
│ │││││││   0x100001f30      mov x27, x0
│ │││││││   0x100001f34      str w8, [x0]
│ │││││││   0x100001f38      mov w0, 0x4d                              ; 'M'
│ │││││││   0x100001f3c      bl sym.imp.malloc                         ;  void *malloc(size_t size)
│ │││││││   0x100001f40      mov x28, x0
│ │││││││   0x100001f44      mov w21, wzr
│ │││││││   0x100001f48      mov w8, 0x4d                              ; 'M'
│ │││││││   0x100001f4c      mov w22, 0x7fffffff
│ │││││││   0x100001f50      str w8, [x27, 0x3c]
│ │││││││   0x100001f54      str x0, [x27, 0x40]
│ ────────< 0x100001f58      b 0x100001f68
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100001fd4(x), 0x100001fec(x)
│ ────────> 0x100001f5c      mov x8, xzr
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002004(x)
│ ────────> 0x100001f60      cmp w22, w23
│ ────────< 0x100001f64      b.lt 0x100002010
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001f58(x)
│ ────────> 0x100001f68      subs w22, w22, w23
│ ────────< 0x100001f6c      b.vs 0x10000362c
│ │││││││   0x100001f70      ldr w23, [x19]
│ ────────< 0x100001f74      cbz w23, 0x100001fb8
│ │││││││   0x100001f78      ldr x24, [x19, 8]
│ │││││││   0x100001f7c      mov x0, x27                               ; void *ptr
│ │││││││   0x100001f80      mov w1, w23
│ │││││││   0x100001f84      bl sym.func.100004464
│ │││││││   0x100001f88      ldr w21, [x27, 0x38]
│ │││││││   0x100001f8c      adds w8, w21, 0xc
│ ────────< 0x100001f90      b.vs 0x10000362c
│ ────────< 0x100001f94      tbnz w23, 0x1f, 0x100003664
│ │││││││   0x100001f98      ldr x28, [x27, 0x40]
│ │││││││   0x100001f9c      mov x1, x24                               ; const void *s2
│ │││││││   0x100001fa0      mov x2, x23                               ; size_t n
│ │││││││   0x100001fa4      add x0, x28, w8, sxtw                     ; void *s1
│ │││││││   0x100001fa8      bl sym.imp.memcpy                         ; void *memcpy(void *s1, const void *s2, size_t n)
│ │││││││   0x100001fac      adds w21, w21, w23
│ ────────< 0x100001fb0      b.vs 0x10000362c
│ │││││││   0x100001fb4      str w21, [x27, 0x38]
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001f74(x)
│ ────────> 0x100001fb8      mov x0, x26                               ; int64_t arg1
│ │││││││   0x100001fbc      mov x1, x25                               ; int64_t arg2
│ │││││││   0x100001fc0      stp xzr, xzr, [x19]
│ │││││││   0x100001fc4      bl sym.func.1000332b8
│ │││││││   0x100001fc8      ldr w23, [x26, 8]
│ ────────< 0x100001fcc      cbz w23, 0x1000020a8
│ │││││││   0x100001fd0      cmp w23, 1
│ ────────< 0x100001fd4      b.lt 0x100001f5c
│ │││││││   0x100001fd8      ldr x24, [x26, 0x10]
│ │││││││   0x100001fdc      mov w1, 0xa
│ │││││││   0x100001fe0      mov x2, x23                               ; size_t n
│ │││││││   0x100001fe4      mov x0, x24                               ; void *s
│ │││││││   0x100001fe8      bl sym.imp.memchr                         ; void *memchr(void *s, int c, size_t n)
│ ────────< 0x100001fec      cbz x0, 0x100001f5c
│ │││││││   0x100001ff0      sub x8, x0, x24
│ │││││││   0x100001ff4      cmp x8, w8, sxtw
│ ────────< 0x100001ff8      b.ne 0x10000362c
│ │││││││   0x100001ffc      mov w8, w8
│ │││││││   0x100002000      mov w9, 0xc9
│ ────────< 0x100002004      cbz w9, 0x100001f60
│ │││││││   0x100002008      cmp w22, w8
│ │││││││   0x10000200c      csinc w22, w22, w8, le
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001f64(x)
│ ────────< 0x100002010      tbnz w22, 0x1f, 0x1000037c8
│ │││││││   0x100002014      mov x25, xzr
│ │││││││   0x100002018      mov w8, wzr
│ ────────< 0x10000201c      tbnz w23, 0x1f, 0x10000231c
│ │││││││   ;-- aav.0x100002020:
│ │││││││   ; XREFS: 0x10003b1cc  0x10003ff3c  0x1000400ec  
│ │││││││   ; XREFS: 0x10004048c  0x10004153c  0x10004a14c  
│ │││││││   ; XREFS: 0x10004ae1c  0x10004b74c  0x10004e01c  
│ │││││││   0x100002020      cmp w22, w23
│ │││││││   0x100002024      mov x24, x25
│ ────────< 0x100002028      b.hi 0x100002048
│ │││││││   0x10000202c      ldrb w8, [x26, 0xc]
│ │││││││   0x100002030      mov w9, w22
│ │││││││   0x100002034      ldr x24, [x26, 0x10]
│ │││││││   0x100002038      strb w8, [var_1c0h]
│ │││││││   0x10000203c      and w8, w8, 0xff
│ │││││││   0x100002040      orr x25, x9, x8, lsl 32
│ │││││││   0x100002044      mov w8, 0x206
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002028(x)
│ ────────> 0x100002048      cbz w8, 0x100003664
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002320(x)
│ ────────> 0x10000204c      cbz w25, 0x100002090
│ │││││││   0x100002050      mov x0, x27                               ; void *ptr
│ │││││││   0x100002054      mov w1, w25
│ │││││││   0x100002058      bl sym.func.100004464
│ │││││││   0x10000205c      ldr w21, [x27, 0x38]
│ │││││││   0x100002060      adds w8, w21, 0xc
│ ────────< 0x100002064      b.vs 0x10000362c
│ ────────< 0x100002068      tbnz w25, 0x1f, 0x100003664
│ │││││││   0x10000206c      ldr x28, [x27, 0x40]
│ │││││││   0x100002070      and x2, x25, 0x7fffffff                   ; size_t n
│ │││││││   0x100002074      mov x1, x24                               ; const void *s2
│ │││││││   0x100002078      add x0, x28, w8, sxtw                     ; void *s1
│ │││││││   0x10000207c      bl sym.imp.memcpy                         ; void *memcpy(void *s1, const void *s2, size_t n)
│ │││││││   0x100002080      adds w21, w21, w25
│ ────────< 0x100002084      b.vs 0x10000362c
│ │││││││   0x100002088      ldr w23, [x19]
│ │││││││   0x10000208c      str w21, [x27, 0x38]
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x10000204c(x)
│ ────────> 0x100002090      subs w8, w23, w22
│ ────────< 0x100002094      b.lt 0x100003664
│ │││││││   0x100002098      ldr x9, [x26, 0x10]
│ │││││││   0x10000209c      str w8, [x26, 8]
│ │││││││   0x1000020a0      add x9, x9, w22, uxtw
│ │││││││   0x1000020a4      str x9, [x26, 0x10]
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001fcc(x)
│ ────────> 0x1000020a8      ldr w26, [var_a0h]
│ │││││││   0x1000020ac      cmp w21, 0
│ ────────< 0x1000020b0      b.le 0x1000020e4
│ │││││││   0x1000020b4      add x8, x28, 0xc
│ │││││││   0x1000020b8      sub w9, w21, 1
│ │││││││   0x1000020bc      ldrb w10, [x8, w9, uxtw]
│ │││││││   0x1000020c0      cmp w10, 0xa
│ ────────< 0x1000020c4      b.ne 0x1000020e4
│ │││││││   0x1000020c8      str w9, [x27, 0x38]
│ ────────< 0x1000020cc      cbz w9, 0x1000020e4
│ │││││││   0x1000020d0      sub w9, w21, 2
│ │││││││   0x1000020d4      ldrb w8, [x8, w9, uxtw]
│ │││││││   0x1000020d8      cmp w8, 0xd
│ ────────< 0x1000020dc      b.ne 0x1000020e4
│ │││││││   0x1000020e0      str w9, [x27, 0x38]
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x1000020b0(x), 0x1000020c4(x), 0x1000020cc(x), 0x1000020dc(x)
│ ────────> 0x1000020e4      mov x0, x27
│ ────────< 0x1000020e8      b 0x1000021fc
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001ee0(x)
│ ────────> 0x1000020ec      adds w1, w8, 1
│ ────────< 0x1000020f0      b.mi 0x1000037b4
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001f00(x)
│ ────────> 0x1000020f4      mov w8, wzr
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100001efc(x), 0x100001f18(x)
│ ────────> 0x1000020f8      mov x28, xzr
│ │││││││   0x1000020fc      mov w9, wzr
│ ────────< 0x100002100      tbnz w22, 0x1f, 0x1000021ac
│ │││││││   0x100002104      cmp w8, w22
│ │││││││   0x100002108      mov x24, x28
│ ────────< 0x10000210c      b.hi 0x10000212c
│ │││││││   0x100002110      and w9, w27, 1
│ │││││││   0x100002114      mov w8, w8
│ │││││││   0x100002118      mov x24, x26
│ │││││││   0x10000211c      strb w9, [var_1c0h]
│ │││││││   0x100002120      and w9, w9, 0xff
│ │││││││   0x100002124      orr x28, x8, x9, lsl 32
│ │││││││   0x100002128      mov w9, 0x206
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x10000210c(x)
│ ────────> 0x10000212c      cbz w9, 0x100003664
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000021b0(x)
│ ────────> 0x100002130      ldr w26, [var_a0h]
│ ────────< 0x100002134      cbz w28, 0x100002180
│ ────────< 0x100002138      cbz x24, 0x100003774
│ ────────< 0x10000213c      tbnz w28, 0x1f, 0x1000036b8
│ │││││││   0x100002140      add w0, w28, 0xd
│ │││││││   0x100002144      bl sym.imp.malloc                         ;  void *malloc(size_t size)
│ │││││││   0x100002148      mov x22, x0
│ │││││││   0x10000214c      add x21, x0, 0xc
│ │││││││   0x100002150      add x0, x0, 0xc                           ; void *s1
│ │││││││   0x100002154      and x2, x28, 0x7fffffff                   ; size_t n
│ │││││││   0x100002158      mov x1, x24                               ; const void *s2
│ │││││││   0x10000215c      and x19, x28, 0x7fffffff
│ │││││││   0x100002160      bl sym.imp.memcpy                         ; void *memcpy(void *s1, const void *s2, size_t n)
│ │││││││   0x100002164      strb wzr, [x21, x19]
│ │││││││   0x100002168      mov w8, 1
│ │││││││   0x10000216c      adr x21, 0x10005818a
│ │││││││   0x100002170      nop
│ │││││││   0x100002174      stp w8, w28, [x22]
│ │││││││   0x100002178      str wzr, [x22, 8]
│ ────────< 0x10000217c      b 0x100002188
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002134(x)
│ ────────> 0x100002180      adr x22, 0x1000385b0
│ │││││││   0x100002184      nop
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x10000217c(x)
│ ────────> 0x100002188      mov x0, x25                               ; int64_t arg1
│ │││││││   0x10000218c      mov w1, w23
│ │││││││   0x100002190      bl sym.func.100033e14
│ │││││││   0x100002194      ldr x27, [var_78h]
│ │││││││   0x100002198      ldr w28, [var_90h]
│ ────────< 0x10000219c      cbnz x22, 0x100002218
│ ────────< 0x1000021a0      b 0x1000019bc
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001d98(x)
│ ────────> 0x1000021a4      ldr w26, [var_a0h]
│ ────────< 0x1000021a8      b 0x1000021c0
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002100(x)
│ ────────> 0x1000021ac      mov x24, x28
│ ────────< 0x1000021b0      cbnz w9, 0x100002130
│ ────────< 0x1000021b4      b 0x100003664
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001dbc(x)
│ ────────> 0x1000021b8      ldr w26, [var_a0h]
│ ────────< 0x1000021bc      cbz w21, 0x10000366c
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100001e90(x), 0x1000021a8(x)
│ ────────> 0x1000021c0      cmp w21, 0
│ ────────< 0x1000021c4      b.le 0x1000021f8
│ │││││││   0x1000021c8      add x8, x19, 0xc
│ │││││││   0x1000021cc      sub w9, w21, 1
│ │││││││   0x1000021d0      ldrb w10, [x8, w9, uxtw]
│ │││││││   0x1000021d4      cmp w10, 0xa
│ ────────< 0x1000021d8      b.ne 0x1000021f8
│ │││││││   0x1000021dc      str w9, [x28, 0x38]
│ ────────< 0x1000021e0      cbz w9, 0x1000021f8
│ │││││││   0x1000021e4      sub w9, w21, 2
│ │││││││   0x1000021e8      ldrb w8, [x8, w9, uxtw]                   ; [0x100000008:4]=0
│ │││││││                                                              ; aav.0x100000008
│ │││││││   0x1000021ec      cmp w8, 0xd
│ ────────< 0x1000021f0      b.ne 0x1000021f8
│ │││││││   0x1000021f4      str w9, [x28, 0x38]
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x1000021c4(x), 0x1000021d8(x), 0x1000021e0(x), 0x1000021f0(x)
│ ────────> 0x1000021f8      mov x0, x28
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000020e8(x)
│ ────────> 0x1000021fc      bl sym.func.100004d30
│ │││││││   0x100002200      ldr x27, [var_78h]
│ │││││││   0x100002204      mov x22, x0
│ │││││││   0x100002208      adr x21, 0x10005818a
│ │││││││   0x10000220c      nop
│ │││││││   0x100002210      ldr w28, [var_90h]
│ ────────< 0x100002214      cbz x0, 0x1000019bc
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100001cb4(x), 0x100001ebc(x), 0x10000219c(x)
│ ────────> 0x100002218      ldr w8, [x22, 4]
│ ────────< 0x10000221c      cbz w8, 0x1000022f0
│ │││││││   0x100002220      subs w19, w8, 1
│ ────────< 0x100002224      b.vs 0x10000362c
│ │││││││   0x100002228      add x23, x22, 0xc
│ │││││││   0x10000222c      ldrb w9, [x23, w19, sxtw]
│ │││││││   0x100002230      cmp w9, 0xd
│ ────────< 0x100002234      b.eq 0x100002294
│ │││││││   0x100002238      cmp w9, 0xa
│ ────────< 0x10000223c      b.ne 0x1000022f0
│ │││││││   0x100002240      cmp w8, 2
│ ────────< 0x100002244      b.lt 0x100002294
│ │││││││   0x100002248      sub w24, w8, 2
│ │││││││   0x10000224c      ldrb w9, [x23, x24]
│ │││││││   0x100002250      cmp w9, 0xd
│ ────────< 0x100002254      b.ne 0x100002294
│ ────────< 0x100002258      cbz w24, 0x1000022e8
│ │││││││   0x10000225c      ldr w9, [x22, 8]
│ │││││││   0x100002260      add x0, x8, 0xb                           ; size_t size
│ │││││││   0x100002264      sub w10, w9, 2
│ │││││││   0x100002268      cmp w9, 0
│ │││││││   0x10000226c      csel w20, w10, wzr, gt
│ │││││││   0x100002270      bl sym.imp.malloc                         ;  void *malloc(size_t size)
│ │││││││   0x100002274      add x25, x0, 0xc
│ │││││││   0x100002278      mov x22, x0
│ │││││││   0x10000227c      mov x1, x23                               ; const void *s2
│ │││││││   0x100002280      mov x0, x25                               ; void *s1
│ │││││││   0x100002284      mov x2, x24                               ; size_t n
│ │││││││   0x100002288      bl sym.imp.memcpy                         ; void *memcpy(void *s1, const void *s2, size_t n)
│ │││││││   0x10000228c      strb wzr, [x25, x24]
│ ────────< 0x100002290      b 0x1000022d8
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100002234(x), 0x100002244(x), 0x100002254(x)
│ ────────> 0x100002294      ldr w8, [x22, 8]
│ │││││││   0x100002298      cmp w8, 1
│ │││││││   0x10000229c      csinc w8, w8, wzr, gt
│ ────────< 0x1000022a0      cbz w19, 0x1000022e8
│ ────────< 0x1000022a4      tbnz w19, 0x1f, 0x1000036b8
│ │││││││   0x1000022a8      add w0, w19, 0xd
│ │││││││   0x1000022ac      sub w20, w8, 1
│ │││││││   0x1000022b0      bl sym.imp.malloc                         ;  void *malloc(size_t size)
│ │││││││   0x1000022b4      mov w24, w19
│ │││││││   0x1000022b8      add x25, x0, 0xc
│ │││││││   0x1000022bc      mov x22, x0
│ │││││││   0x1000022c0      mov x0, x25                               ; void *s1
│ │││││││   0x1000022c4      mov x1, x23                               ; const void *s2
│ │││││││   0x1000022c8      mov x2, x24                               ; size_t n
│ │││││││   0x1000022cc      bl sym.imp.memcpy                         ; void *memcpy(void *s1, const void *s2, size_t n)
│ │││││││   0x1000022d0      strb wzr, [x25, x24]
│ │││││││   0x1000022d4      mov w24, w19
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002290(x)
│ ────────> 0x1000022d8      mov w8, 1
│ │││││││   0x1000022dc      str w20, [x22, 8]
│ │││││││   0x1000022e0      stp w8, w24, [x22]
│ ────────< 0x1000022e4      b 0x1000022f0
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100002258(x), 0x1000022a0(x)
│ ────────> 0x1000022e8      adr x22, 0x1000385b0
│ │││││││   0x1000022ec      nop
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x10000221c(x), 0x10000223c(x), 0x1000022e4(x)
│ ────────> 0x1000022f0      mov x0, x27                               ; int64_t arg1
│ │││││││   0x1000022f4      bl sym.func.1000150fc
│ │││││││   0x1000022f8      ldrsw x8, [x27, 4]
│ │││││││   0x1000022fc      ldr x20, [x27, 0x10]
│ │││││││   0x100002300      adds w28, w8, 1
│ │││││││   0x100002304      str x22, [x20, x8, lsl 3]
│ ────────< 0x100002308      b.vs 0x10000362c
│ │││││││   0x10000230c      cmp w26, 6
│ │││││││   0x100002310      str w28, [x27, 4]
│ ────────< 0x100002314      b.ne 0x100001b74
│ ────────< 0x100002318      b 0x1000019bc
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x10000201c(x)
│ ────────> 0x10000231c      mov x24, x25
│ ────────< 0x100002320      cbnz w8, 0x10000204c
│ ────────< 0x100002324      b 0x100003664
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001e14(x)
│ ────────> 0x100002328      mov x22, x24
│ ────────< 0x10000232c      cbnz w8, 0x100001e40
│ ────────< 0x100002330      b 0x100003664
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000019c8(x)
│ ────────> 0x100002334      mov w0, 1
│ │││││││   0x100002338      mov w1, 0x18
│ │││││││   0x10000233c      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x100002340      mov x19, x0
│ │││││││   0x100002344      mov w8, 0x1c
│ │││││││   0x100002348      mov x24, xzr
│ │││││││   0x10000234c      mov x23, xzr
│ │││││││   0x100002350      mov x0, xzr
│ │││││││   0x100002354      str w8, [x19]
│ │││││││   0x100002358      str w22, [x19, 8]
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100001a48(x)
│ ────────> 0x10000235c      mov x1, x24                               ; const void *s2
│ │││││││   0x100002360      mov x2, x23                               ; size_t n
│ │││││││   0x100002364      str x0, [x19, 0x10]
│ │││││││   0x100002368      str x0, [var_60h]
│ │││││││   0x10000236c      bl sym.imp.memcpy                         ; void *memcpy(void *s1, const void *s2, size_t n)
│ │││││││   0x100002370      cmp w28, 1
│ │││││││   0x100002374      str w22, [x19, 4]
│ ────────< 0x100002378      b.lt 0x100003738
│ │││││││   0x10000237c      mov x8, x22
│ │││││││   0x100002380      mov x10, xzr
│ │││││││   0x100002384      str w28, [var_90h]
│ │││││││   0x100002388      mov w9, w28
│ │││││││   0x10000238c      add x28, sp, 0xc0
│ │││││││   0x100002390      adr x21, 0x1000584c0
│ │││││││   0x100002394      nop
│ │││││││   0x100002398      add x23, sp, 0x1c0
│ │││││││   0x10000239c      mov w22, 0x20
│ │││││││   0x1000023a0      mov w24, 0x7fffffc0
│ │││││││   0x1000023a4      str wzr, [arg_20h]
│ │││││││   0x1000023a8      str x9, [arg_10h]
│ │││││││   0x1000023ac      str x8, [arg_40h]
│ │││││││   0x1000023b0      str x19, [arg_30h]
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002734(x)
│ ────────> 0x1000023b4      str w8, [var_a0h]
│ │││││││   0x1000023b8      ldr x8, [x20, x10, lsl 3]
│ │││││││   0x1000023bc      mov w1, 1
│ │││││││   0x1000023c0      mov w3, wzr
│ │││││││   0x1000023c4      str x10, [var_80h]
│ │││││││   0x1000023c8      ldr w0, [x8, 4]
│ │││││││   0x1000023cc      add x2, x8, 0xc                           ; int64_t arg4
│ │││││││   0x1000023d0      bl sym.func.100033f9c
│ │││││││   0x1000023d4      mov w19, 0x5476                           ; 'vT'
│ │││││││   0x1000023d8      mov w25, 0xdcfe
│ │││││││   0x1000023dc      mov w26, 0xab89
│ │││││││   0x1000023e0      mov w27, 0x2301
│ │││││││   0x1000023e4      movk w19, 0x1032, lsl 16                  ; '2\x10'
│ │││││││   0x1000023e8      cmp w0, 1
│ │││││││   0x1000023ec      movk w25, 0x98ba, lsl 16
│ │││││││   0x1000023f0      movk w26, 0xefcd, lsl 16
│ │││││││   0x1000023f4      movk w27, 0x6745, lsl 16                  ; 'Eg'
│ │││││││   0x1000023f8      add x4, sp, 0xc0
│ ────────< 0x1000023fc      b.lt 0x1000025e8
│ │││││││   0x100002400      mov x8, xzr
│ │││││││   0x100002404      add x9, x1, 3
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000025e4(x)
│ ────────> 0x100002408      mov x10, xzr
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002478(x)
│ ────────> 0x10000240c      add w11, w8, w10
│ │││││││   0x100002410      cmp w0, w11
│ ────────< 0x100002414      b.le 0x100003664
│ │││││││   0x100002418      add w11, w8, w10
│ │││││││   0x10000241c      add w11, w11, 1
│ │││││││   0x100002420      cmp w11, w0
│ │││││││   ;-- aav.0x100002424:
│ │││││││   ; XREFS: 0x100043f4c  0x1000440ec  0x1000450ac  
│ │││││││   ; XREFS: 0x1000450dc  0x1000460fc  0x10004621c  
│ │││││││   ; XREFS: 0x100046dec  0x100046fcc  0x10004785c  
│ │││││││   ; XREFS: 0x100047d0c  0x100047e3c  0x100047fdc  
│ │││││││   ; XREFS: 0x10004870c  0x1000489cc  0x100048b6c  
│ │││││││   ; XREFS: 0x10004972c  
│ ────────< 0x100002424      b.hs 0x100003664
│ │││││││   0x100002428      add w11, w8, w10
│ │││││││   0x10000242c      add w11, w11, 2
│ │││││││   0x100002430      cmp w11, w0
│ ────────< 0x100002434      b.hs 0x100003664
│ │││││││   0x100002438      add w11, w8, w10
│ │││││││   0x10000243c      add w11, w11, 3
│ │││││││   0x100002440      cmp w11, w0
│ ────────< 0x100002444      b.hs 0x100003664
│ │││││││   0x100002448      add x11, x9, x10
│ │││││││   0x10000244c      add x12, x9, x10
│ │││││││   0x100002450      ldurb w11, [x11, -3]
│ │││││││   0x100002454      ldurb w13, [x12, -2]
│ │││││││   0x100002458      orr w11, w11, w13, lsl 8
│ │││││││   0x10000245c      ldurb w13, [x12, -1]
│ │││││││   0x100002460      ldrb w12, [x12]
│ │││││││   0x100002464      orr w11, w11, w13, lsl 16
│ │││││││   0x100002468      orr w11, w11, w12, lsl 24
│ │││││││   0x10000246c      str w11, [x28, x10]
│ │││││││   0x100002470      add x10, x10, 4
│ │││││││   0x100002474      cmp x10, 0x40
│ ────────< 0x100002478      b.ne 0x10000240c
│ │││││││   0x10000247c      ldp q0, q1, [act]
│ │││││││   0x100002480      mov x10, xzr
│ │││││││   0x100002484      mov x11, xzr
│ │││││││   0x100002488      mov x12, -0x40
│ │││││││   0x10000248c      mov x16, x21
│ │││││││   0x100002490      mov w17, w27
│ │││││││   0x100002494      mov w1, w26
│ │││││││   0x100002498      mov w13, w25
│ │││││││   0x10000249c      stp q0, q1, [x4, 0x100]
│ │││││││   0x1000024a0      ldp q2, q0, [var_e0h]
│ │││││││   0x1000024a4      mov w14, w19
│ │││││││   0x1000024a8      stp q2, q0, [x4, 0x120]
│ ────────< 0x1000024ac      b 0x1000024dc
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000025a8(x)
│ ────────> 0x1000024b0      lsr w17, w17, w2
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000025bc(x)
│ ────────> 0x1000024b4      cmp w2, 0x20
│ │││││││   0x1000024b8      add x16, x16, 4
│ │││││││   0x1000024bc      add x11, x11, 1
│ │││││││   0x1000024c0      csel w17, w17, wzr, lo
│ │││││││   0x1000024c4      adds x12, x12, 1
│ │││││││   0x1000024c8      add x10, x10, 7
│ │││││││   0x1000024cc      orr w17, w17, w1
│ │││││││   0x1000024d0      add w1, w17, w13
│ │││││││   0x1000024d4      mov w17, w15
│ ────────< 0x1000024d8      b.hs 0x1000025c0
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000024ac(x)
│ ────────> 0x1000024dc      add x2, x12, 0x40
│ │││││││   0x1000024e0      mov w15, w14
│ │││││││   0x1000024e4      mov w14, w13
│ │││││││   0x1000024e8      cmp x2, 0x10
│ │││││││   0x1000024ec      mov w13, w1
│ ────────< 0x1000024f0      b.hs 0x100002504
│ │││││││   0x1000024f4      and w1, w14, w13
│ │││││││   0x1000024f8      bic w3, w15, w13
│ │││││││   0x1000024fc      orr w1, w3, w1
│ ────────< 0x100002500      b 0x100002554
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000024f0(x)
│ ────────> 0x100002504      cmp x2, 0x20
│ ────────< 0x100002508      b.hs 0x100002528
│ │││││││   0x10000250c      add x2, x11, x11, lsl 2
│ │││││││   0x100002510      and w1, w15, w13
│ │││││││   0x100002514      bic w3, w14, w15
│ │││││││   0x100002518      orr w1, w1, w3
│ │││││││   0x10000251c      add x2, x2, 1
│ │││││││   0x100002520      and x2, x2, 0xf
│ ────────< 0x100002524      b 0x100002554
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002508(x)
│ ────────> 0x100002528      cmp x2, 0x2f
│ ────────< 0x10000252c      b.hi 0x100002548
│ │││││││   0x100002530      add x2, x11, x11, lsl 1
│ │││││││   0x100002534      eor w1, w14, w13
│ │││││││   0x100002538      eor w1, w1, w15
│ │││││││   0x10000253c      add x2, x2, 5
│ │││││││   0x100002540      and x2, x2, 0xf
│ ────────< 0x100002544      b 0x100002554
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x10000252c(x)
│ ────────> 0x100002548      orn w1, w13, w15
│ │││││││   0x10000254c      and x2, x10, 0xf
│ │││││││   0x100002550      eor w1, w1, w14
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100002500(x), 0x100002524(x), 0x100002544(x)
│ ────────> 0x100002554      ldr w3, [x16]
│ │││││││   0x100002558      add w17, w1, w17
│ │││││││   0x10000255c      ldr w1, [x23, x2, lsl 2]
│ │││││││   0x100002560      ldur w2, [x16, -0x100]
│ │││││││   0x100002564      add w17, w17, w3
│ │││││││   0x100002568      add w17, w17, w1
│ ────────< 0x10000256c      tbnz w2, 0x1f, 0x100002588
│ │││││││   0x100002570      lsl w1, w17, w2
│ │││││││   0x100002574      cmp w2, 0x20
│ │││││││   0x100002578      csel w1, w1, wzr, lo
│ │││││││   0x10000257c      subs w2, w22, w2
│ ────────< 0x100002580      b.vc 0x1000025a8
│ ────────< 0x100002584      b 0x10000362c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x10000256c(x)
│ ────────> 0x100002588      negs w1, w2
│ ────────< 0x10000258c      b.vs 0x10000362c
│ ────────< 0x100002590      tbnz w1, 0x1f, 0x10000362c
│ │││││││   0x100002594      lsr w3, w17, w1
│ │││││││   0x100002598      cmp w1, 0x20
│ │││││││   0x10000259c      csel w1, w3, wzr, lo
│ │││││││   0x1000025a0      subs w2, w22, w2
│ ────────< 0x1000025a4      b.vs 0x10000362c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002580(x)
│ ────────< 0x1000025a8      tbz w2, 0x1f, 0x1000024b0
│ │││││││   0x1000025ac      negs w2, w2
│ ────────< 0x1000025b0      b.vs 0x10000362c
│ ────────< 0x1000025b4      tbnz w2, 0x1f, 0x10000362c
│ │││││││   0x1000025b8      lsl w17, w17, w2
│ ────────< 0x1000025bc      b 0x1000024b4
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000024d8(x)
│ ────────> 0x1000025c0      cmp x8, x24
│ ────────< 0x1000025c4      b.eq 0x10000362c
│ │││││││   0x1000025c8      add x8, x8, 0x40
│ │││││││   0x1000025cc      add w19, w14, w19
│ │││││││   0x1000025d0      add w25, w13, w25
│ │││││││   0x1000025d4      cmp w0, w8
│ │││││││   0x1000025d8      add w26, w1, w26
│ │││││││   0x1000025dc      add w27, w15, w27
│ │││││││   0x1000025e0      add x9, x9, 0x40
│ ────────< 0x1000025e4      b.gt 0x100002408
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000023fc(x)
│ ────────> 0x1000025e8      mov w0, 1
│ │││││││   0x1000025ec      mov w1, 0x10
│ │││││││   0x1000025f0      mov x24, x21
│ │││││││   0x1000025f4      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x1000025f8      ldr w15, [var_a0h]
│ │││││││   0x1000025fc      stp w27, w26, [x0]
│ │││││││   0x100002600      stp w25, w19, [x0, 8]
│ │││││││   0x100002604      subs w21, w15, 1
│ ────────< 0x100002608      b.vs 0x10000362c
│ ────────< 0x10000260c      tbnz w21, 0x1f, 0x10000266c
│ │││││││   0x100002610      ldr x14, [var_60h]
│ │││││││   0x100002614      ldr x19, [arg_30h]
│ │││││││   0x100002618      mov x8, x0
│ │││││││   0x10000261c      mov x9, xzr
│ │││││││   0x100002620      mov x0, x14
│ │││││││   0x100002624      ldr w10, [x14]
│ │││││││   0x100002628      cmp w10, 0x10
│ ────────< 0x10000262c      b.ne 0x100002650
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002664(x)
│ ────────> 0x100002630      ldr x10, [x0, 8]
│ │││││││   0x100002634      cmp x10, x8
│ ────────< 0x100002638      b.eq 0x100002674
│ │││││││   0x10000263c      ldp x11, x13, [x8]
│ │││││││   0x100002640      ldp x12, x10, [x10]
│ │││││││   0x100002644      cmp x12, x11
│ │││││││   0x100002648      ccmp x10, x13, 0, eq
│ ────────< 0x10000264c      b.eq 0x100002674
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x10000262c(x), 0x100002668(x)
│ ────────> 0x100002650      add x10, x21, x9
│ ────────< 0x100002654      cbz x10, 0x10000266c
│ │││││││   0x100002658      sub x9, x9, 1
│ │││││││   0x10000265c      ldr w10, [x0, 0x10]!
│ │││││││   0x100002660      cmp w10, 0x10
│ ────────< 0x100002664      b.eq 0x100002630
│ ────────< 0x100002668      b 0x100002650
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x10000260c(x), 0x100002654(x)
│ ────────> 0x10000266c      mov w21, w15
│ ────────< 0x100002670      b 0x100002718
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100002638(x), 0x10000264c(x)
│ ────────> 0x100002674      neg w8, w9
│ │││││││   0x100002678      cmp w15, w8
│ ────────< 0x10000267c      b.le 0x100003664
│ ────────< 0x100002680      cbz x9, 0x1000026b8
│ │││││││   0x100002684      add x8, x21, x9
│ ────────< 0x100002688      tbnz w8, 0x1f, 0x100003794
│ │││││││   0x10000268c      ubfiz x2, x8, 4, 0x20                     ; size_t n
│ │││││││   0x100002690      add x1, x0, 0x10                          ; const void *s2
│ │││││││   0x100002694      bl sym.imp.memmove                        ; void *memmove(void *s1, const void *s2, size_t n)
│ │││││││   0x100002698      ldr x14, [var_60h]
│ │││││││   0x10000269c      str w21, [x19, 4]
│ │││││││   0x1000026a0      add x8, x14, x21, lsl 4
│ │││││││   0x1000026a4      stp xzr, xzr, [x8]
│ │││││││   0x1000026a8      ldr w8, [arg_20h]
│ │││││││   0x1000026ac      adds w8, w8, 1
│ ────────< 0x1000026b0      b.vc 0x100002708
│ ────────< 0x1000026b4      b 0x10000362c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002680(x)
│ ────────> 0x1000026b8      subs w21, w15, 1
│ │││││││   0x1000026bc      str w21, [x19, 4]
│ │││││││   0x1000026c0      stp xzr, xzr, [x14]
│ │││││││   0x1000026c4      ldrsw x8, [x19, 0xc]
│ ────────< 0x1000026c8      b.eq 0x1000026f0
│ │││││││   0x1000026cc      adds w8, w8, 1
│ ────────< 0x1000026d0      b.vs 0x10000362c
│ │││││││   0x1000026d4      add x14, x14, 0x10
│ │││││││   0x1000026d8      str w8, [x19, 0xc]
│ │││││││   0x1000026dc      str x14, [x19, 0x10]
│ │││││││   0x1000026e0      ldr w8, [arg_20h]
│ │││││││   0x1000026e4      adds w8, w8, 1
│ ────────< 0x1000026e8      b.vc 0x100002708
│ ────────< 0x1000026ec      b 0x10000362c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000026c8(x)
│ ────────> 0x1000026f0      sub x14, x14, x8, lsl 4
│ │││││││   0x1000026f4      str wzr, [x19, 0xc]
│ │││││││   0x1000026f8      str x14, [x19, 0x10]
│ │││││││   0x1000026fc      ldr w8, [arg_20h]
│ │││││││   0x100002700      adds w8, w8, 1
│ ────────< 0x100002704      b.vs 0x10000362c
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x1000026b0(x), 0x1000026e8(x)
│ ────────> 0x100002708      str w8, [arg_20h]
│ │││││││   0x10000270c      mov w8, w21
│ │││││││   0x100002710      str x14, [var_60h]
│ │││││││   0x100002714      str x8, [arg_40h]
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002670(x)
│ ────────> 0x100002718      ldr x10, [var_80h]
│ │││││││   0x10000271c      ldr x8, [arg_10h]
│ │││││││   0x100002720      add x10, x10, 1
│ │││││││   0x100002724      cmp x10, x8
│ │││││││   0x100002728      mov w8, w21
│ │││││││   0x10000272c      mov x21, x24
│ │││││││   0x100002730      mov w24, 0x7fffffc0
│ ────────< 0x100002734      b.ne 0x1000023b4
│ │││││││   0x100002738      ldr w8, [var_90h]
│ │││││││   0x10000273c      cmp w8, 6
│ ────────< 0x100002740      b.ne 0x10000373c
│ │││││││   0x100002744      ldr x20, [var_78h]
│ │││││││   0x100002748      ldr x8, [arg_40h]
│ │││││││   0x10000274c      adr x19, section.12.__DATA.__bss          ; 0x100058180
│ │││││││   0x100002750      nop
│ ────────< 0x100002754      cbnz w8, 0x10000373c
│ │││││││   0x100002758      mov w0, 1
│ │││││││   0x10000275c      mov w1, 0x20
│ │││││││   0x100002760      mov w23, 0x20
│ │││││││   0x100002764      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x100002768      ldr w8, [x20, 4]
│ │││││││   0x10000276c      mov x22, x0
│ │││││││   0x100002770      cmp w8, 1
│ ────────< 0x100002774      b.lt 0x100003258
│ │││││││   0x100002778      movi v4.2d, 0000000000000000
│ │││││││   0x10000277c      nop
│ │││││││   0x100002780      mov x9, x20
│ │││││││   0x100002784      ldr q0, 0x100035f40                       ; [0x100035f40:8]=0xfffffff0ffffffe8
│ │││││││   0x100002788      mov x21, xzr
│ │││││││   0x10000278c      add x24, sp, 0xc0
│ │││││││   0x100002790      adr x25, 0x100058330
│ │││││││   0x100002794      nop
│ │││││││   0x100002798      adrp x26, reloc._tlv_bootstrap            ; 0x100058000
│ │││││││   0x10000279c      mov w27, 0x7fffffc0
│ │││││││   0x1000027a0      mov w28, -0x80000000
│ │││││││   0x1000027a4      add x20, sp, 0x1c0
│ │││││││   0x1000027a8      str q0, [arg_50h]
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002a6c(x)
│ ────────> 0x1000027ac      ldr x8, [x9, 0x10]
│ │││││││   0x1000027b0      ldrb w9, [x26, 0x1b2]
│ │││││││   0x1000027b4      ldr x8, [x8, x21, lsl 3]
│ │││││││   0x1000027b8      ldr w0, [x8, 4]
│ ────────< 0x1000027bc      tbz w9, 0, 0x100002a74
│ │││││││   ; CODE XREF from aav.0x10000296c @ +0x8e8(x)
│ ────────> 0x1000027c0      add x2, x8, 0xc                           ; int64_t arg4
│ │││││││   0x1000027c4      mov w1, 1
│ │││││││   0x1000027c8      mov w3, 1
│ │││││││   0x1000027cc      bl sym.func.100033f9c
│ │││││││   0x1000027d0      ldp q0, q1, [x25]
│ │││││││   0x1000027d4      cmp w0, 1
│ ────────< 0x1000027d8      b.lt 0x1000029b4
│ │││││││   0x1000027dc      movi v4.2d, 0000000000000000
│ │││││││   0x1000027e0      mov x8, xzr
│ │││││││   0x1000027e4      add x9, x1, 3
│ │││││││   0x1000027e8      add x7, sp, 0xc0
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000029b0(x)
│ ────────> 0x1000027ec      mov x10, xzr
│ │││││││   0x1000027f0      stp q4, q4, [x7, 0x80]
│ │││││││   0x1000027f4      stp q4, q4, [x7, 0xa0]
│ │││││││   0x1000027f8      stp q4, q4, [x7, 0xc0]
│ │││││││   0x1000027fc      stp q4, q4, [x7, 0xe0]
│ │││││││   0x100002800      stp q4, q4, [act]
│ │││││││   0x100002804      stp q4, q4, [var_e0h]
│ │││││││   0x100002808      stp q4, q4, [arg_50h0]
│ │││││││   0x10000280c      stp q4, q4, [var_120h_4]
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002880(x)
│ ────────> 0x100002810      add w11, w8, w10
│ │││││││   0x100002814      cmp w0, w11
│ ────────< 0x100002818      b.le 0x100003664
│ │││││││   0x10000281c      add w11, w8, w10
│ │││││││   ;-- aav.0x100002820:
│ │││││││   ; NULL XREF from str.BUG:_7r13d_70_r3_um3_d34d_f1b3r @ +0x30(r)
│ │││││││   0x100002820      add w11, w11, 1
│ │││││││   0x100002824      cmp w11, w0
│ ────────< 0x100002828      b.hs 0x100003664
│ │││││││   0x10000282c      add w11, w8, w10
│ │││││││   0x100002830      add w11, w11, 2
│ │││││││   0x100002834      cmp w11, w0
│ ────────< 0x100002838      b.hs 0x100003664
│ │││││││   0x10000283c      add w11, w8, w10
│ │││││││   0x100002840      add w11, w11, 3
│ │││││││   0x100002844      cmp w11, w0
│ ────────< 0x100002848      b.hs 0x100003664
│ │││││││   0x10000284c      add x11, x9, x10
│ │││││││   0x100002850      add x12, x9, x10
│ │││││││   0x100002854      ldurb w11, [x11, -3]
│ │││││││   0x100002858      ldurb w13, [x12, -2]
│ │││││││   0x10000285c      lsl w11, w11, 0x18
│ │││││││   0x100002860      orr w11, w11, w13, lsl 16
│ │││││││   0x100002864      ldurb w13, [x12, -1]
│ │││││││   0x100002868      ldrb w12, [x12]
│ │││││││   0x10000286c      orr w11, w11, w13, lsl 8
│ │││││││   0x100002870      orr w11, w11, w12
│ │││││││   0x100002874      str w11, [x24, x10]
│ │││││││   0x100002878      add x10, x10, 4
│ │││││││   0x10000287c      cmp x10, 0x40
│ ────────< 0x100002880      b.ne 0x100002810
│ │││││││   0x100002884      add x10, x24, 0x40
│ │││││││   0x100002888      mov w11, 0x30                             ; '0'
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000028c4(x)
│ ────────> 0x10000288c      ldp w14, w12, [x10, -0x40]
│ │││││││   0x100002890      ldur w13, [x10, -8]
│ │││││││   0x100002894      ldur w17, [x10, -0x1c]
│ │││││││   0x100002898      subs x11, x11, 1
│ │││││││   0x10000289c      ror w15, w12, 0x12
│ │││││││   0x1000028a0      ror w16, w13, 0x13
│ │││││││   0x1000028a4      add w14, w14, w17
│ │││││││   0x1000028a8      eor w15, w15, w12, ror 7
│ │││││││   0x1000028ac      eor w16, w16, w13, ror 17
│ │││││││   0x1000028b0      eor w12, w15, w12, lsr 3
│ │││││││   0x1000028b4      eor w13, w16, w13, lsr 10
│ │││││││   0x1000028b8      add w12, w14, w12
│ │││││││   0x1000028bc      add w12, w12, w13
│ │││││││   0x1000028c0      str w12, [x10], 4
│ ────────< 0x1000028c4      b.ne 0x10000288c
│ │││││││   0x1000028c8      mov w10, v1.s[3]
│ │││││││   0x1000028cc      mov w12, v1.s[2]
│ │││││││   0x1000028d0      mov x16, xzr
│ │││││││   0x1000028d4      mov w14, v1.s[1]
│ │││││││   0x1000028d8      mov w11, v0.s[3]
│ │││││││   0x1000028dc      mov w13, v0.s[2]
│ │││││││   0x1000028e0      mov w15, v0.s[1]
│ │││││││   0x1000028e4      fmov w1, s1
│ │││││││   0x1000028e8      fmov w17, s0
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002970(x)
│ ────────> 0x1000028ec      mov w2, w10
│ │││││││   0x1000028f0      mov w10, w12
│ │││││││   0x1000028f4      mov w12, w14
│ │││││││   0x1000028f8      mov w14, w1
│ │││││││   0x1000028fc      mov w1, w11
│ │││││││   0x100002900      mov w11, w13
│ │││││││   0x100002904      mov w13, w15
│ │││││││   0x100002908      mov w15, w17
│ │││││││   0x10000290c      ror w17, w14, 6
│ │││││││   0x100002910      add x3, x19, x16                          ; 0x100058180
│ │││││││                                                              ; section.12.__DATA.__bss
│ │││││││                                                              [12] -rw- section size 1344 named 12.__DATA.__bss
│ │││││││   0x100002914      ror w4, w15, 2
│ │││││││   0x100002918      and w5, w12, w14
│ │││││││   0x10000291c      bic w6, w10, w14
│ │││││││   0x100002920      ldr w3, [x3, 0x440]
│ │││││││   0x100002924      eor w17, w17, w14, ror 11
│ │││││││   0x100002928      orr w5, w6, w5
│ │││││││   0x10000292c      eor w4, w4, w15, ror 13
│ │││││││   0x100002930      ldr w6, [x24, x16]
│ │││││││   0x100002934      add w2, w2, w5
│ │││││││   0x100002938      eor w17, w17, w14, ror 25
│ │││││││   0x10000293c      and w5, w11, w13
│ │││││││   0x100002940      add w2, w2, w3
│ │││││││   0x100002944      eor w3, w11, w13
│ │││││││   0x100002948      eor w4, w4, w15, ror 22
│ │││││││   0x10000294c      and w3, w3, w15
│ │││││││   0x100002950      add w2, w2, w6
│ │││││││   ;-- aav.0x100002954:
│ │││││││   ; NULL XREF from str.Iterator::SingletonProcIterator_T_ @ +0x20(r)
│ │││││││   ; NULL XREF from str.Channel::Sender_T_ @ +0x10(r)
│ │││││││   0x100002954      add x16, x16, 4
│ │││││││   0x100002958      eor w3, w3, w5
│ │││││││   0x10000295c      add w17, w17, w2
│ │││││││   0x100002960      cmp x16, 0x100
│ │││││││   0x100002964      add w2, w3, w4
│ │││││││   0x100002968      add w1, w17, w1
│ │││││││   ;-- aav.0x10000296c:
│ │││││││   ; NULL XREF from str.7upl3__7r1ng__N1l_ @ +0x10(r)
│ │││││││   ; NULL XREF from str.7upl3_1n732__B00l_ @ +0x10(r)
│ │││││││   ; NULL XREF from str.Ch4nn3l::R3c31v3r_3xc3p710n__N1l_ @ +0x20(r)
│ │││││││   ; NULL XREF from str.Pr0c_H4_h_7upl3_U1n764___ymb0l___N1l___7upl3_U1n764___ymb0l___N1l_ @ +0x40(r)
│ │││││││   0x10000296c      add w17, w2, w17
│ ────────< 0x100002970      b.ne 0x1000028ec
│ │││││││   0x100002974      cmp x8, x27
│ ────────< 0x100002978      b.eq 0x10000362c
│ │││││││   0x10000297c      fmov s2, w1
│ │││││││   0x100002980      fmov s3, w17
│ │││││││   0x100002984      add x8, x8, 0x40
│ │││││││   0x100002988      cmp w0, w8
│ │││││││   0x10000298c      add x9, x9, 0x40
│ │││││││   0x100002990      mov v2.s[1], w14
│ │││││││   0x100002994      mov v3.s[1], w15
│ │││││││   0x100002998      mov v2.s[2], w12
│ │││││││   0x10000299c      mov v3.s[2], w13
│ │││││││   0x1000029a0      mov v2.s[3], w10
│ │││││││   0x1000029a4      mov v3.s[3], w11
│ │││││││   0x1000029a8      add v1.4s, v2.4s, v1.4s
│ │││││││   0x1000029ac      add v0.4s, v3.4s, v0.4s
│ ────────< 0x1000029b0      b.gt 0x1000027ec
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000027d8(x)
│ ────────> 0x1000029b4      dup v3.4s, v1.s[2]
│ │││││││   0x1000029b8      dup v2.4s, v1.s[3]
│ │││││││   0x1000029bc      mov w0, 1
│ │││││││   0x1000029c0      mov w1, 0x20
│ │││││││   0x1000029c4      stp q2, q3, [var_90h]
│ │││││││   0x1000029c8      dup v2.4s, v1.s[0]
│ │││││││   0x1000029cc      str q2, [var_80h]
│ │││││││   0x1000029d0      dup v2.4s, v1.s[1]
│ │││││││   0x1000029d4      dup v1.4s, v0.s[2]
│ │││││││   0x1000029d8      stp q1, q2, [arg_10h]
│ │││││││   0x1000029dc      dup v2.4s, v0.s[3]
│ │││││││   0x1000029e0      dup v1.4s, v0.s[0]
│ │││││││   0x1000029e4      dup v0.4s, v0.s[1]
│ │││││││   0x1000029e8      stp q1, q2, [arg_30h]
│ │││││││   0x1000029ec      str q0, [arg_40h]
│ │││││││   0x1000029f0      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ │││││││   0x1000029f4      ldp q7, q0, [arg_50h]
│ │││││││   0x1000029f8      add x21, x21, 1
│ │││││││   0x1000029fc      ldp q1, q2, [arg_30h]
│ │││││││   0x100002a00      ldr q16, [var_a0h]
│ │││││││   0x100002a04      ldp q3, q4, [arg_10h]
│ │││││││   0x100002a08      ldr x9, [var_78h]
│ │││││││   0x100002a0c      ushl v0.4s, v0.4s, v7.4s
│ │││││││   0x100002a10      ldp q5, q6, [var_80h]
│ │││││││   0x100002a14      ushl v1.4s, v1.4s, v7.4s
│ │││││││   0x100002a18      ushl v2.4s, v2.4s, v7.4s
│ │││││││   0x100002a1c      ldrsw x8, [x9, 4]
│ │││││││   0x100002a20      ushl v3.4s, v3.4s, v7.4s
│ │││││││   0x100002a24      ushl v4.4s, v4.4s, v7.4s
│ │││││││   0x100002a28      ushl v5.4s, v5.4s, v7.4s
│ │││││││   0x100002a2c      ushl v6.4s, v6.4s, v7.4s
│ │││││││   0x100002a30      ushl v7.4s, v16.4s, v7.4s
│ │││││││   0x100002a34      uzp1 v0.8h, v1.8h, v0.8h
│ │││││││   0x100002a38      cmp x21, x8
│ │││││││   0x100002a3c      uzp1 v2.8h, v3.8h, v2.8h
│ │││││││   0x100002a40      uzp1 v1.8h, v7.8h, v6.8h
│ │││││││   0x100002a44      uzp1 v3.8h, v5.8h, v4.8h
│ │││││││   0x100002a48      movi v4.2d, 0000000000000000
│ │││││││   0x100002a4c      uzp1 v0.16b, v0.16b, v2.16b
│ │││││││   0x100002a50      uzp1 v1.16b, v3.16b, v1.16b
│ │││││││   0x100002a54      stp q0, q1, [x0]
│ │││││││   0x100002a58      ldp q1, q2, [x22]
│ │││││││   0x100002a5c      ldp q0, q3, [x0]
│ │││││││   0x100002a60      eor v0.16b, v0.16b, v1.16b
│ │││││││   0x100002a64      eor v1.16b, v3.16b, v2.16b
│ │││││││   0x100002a68      stp q0, q1, [x22]
│ ────────< 0x100002a6c      b.lt 0x1000027ac
│ ────────< 0x100002a70      b 0x100003258
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000027bc(x)
│ ────────> 0x100002a74      adr x9, 0x1000581c0
│ │││││││   0x100002a78      nop
│ │││││││   0x100002a7c      add x5, sp, 0xc0
│ │││││││   0x100002a80      ldar w9, [x9]
│ │││││││   0x100002a84      stp q4, q4, [x5, 0x100]
│ │││││││   0x100002a88      stp q4, q4, [x5, 0x120]
│ │││││││   0x100002a8c      adds w9, w9, 2
│ │││││││   0x100002a90      stp q4, q4, [x5, 0x140]
│ │││││││   0x100002a94      stp q4, q4, [x5, 0x160]
│ │││││││   0x100002a98      stp q4, q4, [x5, 0x180]
│ │││││││   0x100002a9c      stp q4, q4, [x5, 0x1a0]
│ │││││││   0x100002aa0      stp q4, q4, [x5, 0x1c0]
│ │││││││   0x100002aa4      stp q4, q4, [x5, 0x1e0]
│ ────────< 0x100002aa8      b.vs 0x10000362c
│ │││││││   0x100002aac      mov w10, wzr
│ ────────< 0x100002ab0      b 0x100002acc
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100002ad8(x), 0x100002ae8(x)
│ ────────> 0x100002ab4      mov w11, w10
│ ────────< 0x100002ab8      tbnz w10, 0x1f, 0x100002b28
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002b34(x)
│ ────────> 0x100002abc      add w10, w10, 1
│ │││││││   0x100002ac0      str w9, [x20, w11, uxtw 2]
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100002afc(x), 0x100002b08(x)
│ ────────> 0x100002ac4      adds w9, w9, 1
│ ────────< 0x100002ac8      b.vs 0x10000362c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002ab0(x)
│ ────────> 0x100002acc      cmp w10, 0x40
│ ────────< 0x100002ad0      b.ge 0x100002b38
│ │││││││   0x100002ad4      cmp w9, w28
│ ────────< 0x100002ad8      b.eq 0x100002ab4
│ │││││││   0x100002adc      mov w12, 4
│ │││││││   0x100002ae0      mov w11, 2
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002b20(x)
│ ────────> 0x100002ae4      cmp w12, w9
│ ────────< 0x100002ae8      b.gt 0x100002ab4
│ │││││││   0x100002aec      sdiv w12, w9, w11
│ │││││││   0x100002af0      eor w13, w11, w9
│ │││││││   0x100002af4      msub w12, w12, w11, w9
│ ────────< 0x100002af8      tbz w13, 0x1f, 0x100002b08
│ ────────< 0x100002afc      cbz w12, 0x100002ac4
│ │││││││   0x100002b00      adds w12, w12, w11
│ ────────< 0x100002b04      b.vs 0x10000362c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002af8(x)
│ ────────> 0x100002b08      cbz w12, 0x100002ac4
│ │││││││   0x100002b0c      adds w12, w11, 1
│ ────────< 0x100002b10      b.vs 0x10000362c
│ │││││││   0x100002b14      smull x12, w12, w12
│ │││││││   0x100002b18      add w11, w11, 1
│ │││││││   0x100002b1c      cmp x12, w12, sxtw
│ ────────< 0x100002b20      b.eq 0x100002ae4
│ ────────< 0x100002b24      b 0x10000362c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002ab8(x)
│ ────────> 0x100002b28      cmn w10, 0x41
│ ────────< 0x100002b2c      b.ls 0x100003664
│ │││││││   0x100002b30      add w11, w10, 0x40
│ ────────< 0x100002b34      b 0x100002abc
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002ad0(x)
│ ────────> 0x100002b38      ldr w9, [x5, 0x100]
│ ────────< 0x100002b3c      tbnz w9, 0x1f, 0x10000362c
│ │││││││   0x100002b40      mov x10, xzr
│ │││││││   0x100002b44      mov x12, xzr
│ │││││││   0x100002b48      mov x11, xzr
│ │││││││   0x100002b4c      mov x13, 0x10000000000
│ ────────< 0x100002b50      b 0x100002b68
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100002bc8(x), 0x100002be0(x)
│ ────────> 0x100002b54      mov x10, x15
│ │││││││   0x100002b58      mov x12, x14
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002bf0(x)
│ ────────> 0x100002b5c      cmp x10, x13
│ │││││││   0x100002b60      sbcs xzr, x12, x11
│ ────────< 0x100002b64      b.hs 0x100002bf8
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002b50(x)
│ ────────> 0x100002b68      adds x15, x10, x13
│ │││││││   0x100002b6c      adcs x14, x12, x11
│ │││││││   0x100002b70      cset w16, hs
│ ────────< 0x100002b74      tbnz w16, 0, 0x10000362c
│ │││││││   0x100002b78      adds x15, x15, 1
│ │││││││   0x100002b7c      adcs x16, x14, xzr
│ │││││││   0x100002b80      cset w14, hs
│ ────────< 0x100002b84      tbnz w14, 0, 0x10000362c
│ │││││││   0x100002b88      lsr x14, x16, 1
│ │││││││   0x100002b8c      extr x15, x16, x15, 1
│ ────────< 0x100002b90      cbz x14, 0x100002bd0
│ │││││││   0x100002b94      umulh x16, x14, x15
│ │││││││   0x100002b98      cmp x14, 0
│ │││││││   0x100002b9c      mul x17, x14, x15
│ │││││││   0x100002ba0      umulh x1, x15, x15
│ │││││││   0x100002ba4      ccmp xzr, x16, 0, eq
│ │││││││   0x100002ba8      add x16, x17, x17
│ │││││││   0x100002bac      cset w17, ne
│ │││││││   0x100002bb0      adds x16, x1, x16
│ │││││││   0x100002bb4      csinc w17, w17, wzr, lo
│ ────────< 0x100002bb8      tbnz w17, 0, 0x10000362c
│ │││││││   0x100002bbc      mul x17, x15, x15
│ │││││││   0x100002bc0      cmp xzr, x17
│ │││││││   0x100002bc4      sbcs xzr, x9, x16
│ ────────< 0x100002bc8      b.hs 0x100002b54
│ ────────< 0x100002bcc      b 0x100002be4
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002b90(x)
│ ────────> 0x100002bd0      umulh x16, x15, x15
│ │││││││   0x100002bd4      mul x17, x15, x15
│ │││││││   0x100002bd8      cmp xzr, x17
│ │││││││   0x100002bdc      sbcs xzr, x9, x16
│ ────────< 0x100002be0      b.hs 0x100002b54
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002bcc(x)
│ ────────> 0x100002be4      subs x13, x15, 1
│ │││││││   0x100002be8      sbcs x11, x14, xzr
│ │││││││   0x100002bec      cset w14, lo
│ ────────< 0x100002bf0      tbz w14, 0, 0x100002b5c
│ ────────< 0x100002bf4      b 0x10000362c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002b64(x)
│ ────────> 0x100002bf8      ldr w9, [x5, 0x104]
│ │││││││   0x100002bfc      adrp x11, reloc._tlv_bootstrap            ; 0x100058000
│ │││││││   0x100002c00      str w10, [x11, 0x330]
│ ────────< 0x100002c04      tbnz w9, 0x1f, 0x10000362c
│ │││││││   0x100002c08      mov x10, xzr
│ │││││││   0x100002c0c      mov x12, xzr
│ │││││││   0x100002c10      mov x11, xzr
│ │││││││   0x100002c14      mov x13, 0x10000000000
│ ────────< 0x100002c18      b 0x100002c30
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002c9c(x)
│ ────────> 0x100002c1c      mov x10, x15
│ │││││││   0x100002c20      mov x12, x14
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002cac(x)
│ ────────> 0x100002c24      cmp x10, x13
│ │││││││   0x100002c28      sbcs xzr, x12, x11
│ ────────< 0x100002c2c      b.hs 0x100002cb4
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002c18(x)
│ ────────> 0x100002c30      adds x15, x10, x13
│ │││││││   0x100002c34      adcs x14, x12, x11
│ │││││││   0x100002c38      cset w16, hs
│ ────────< 0x100002c3c      tbnz w16, 0, 0x10000362c
│ │││││││   0x100002c40      adds x15, x15, 1
│ │││││││   0x100002c44      adcs x14, x14, xzr
│ │││││││   0x100002c48      cset w16, hs
│ ────────< 0x100002c4c      tbnz w16, 0, 0x10000362c
│ │││││││   0x100002c50      extr x15, x14, x15, 1
│ │││││││   0x100002c54      lsr x14, x14, 1
│ │││││││   0x100002c58      umulh x16, x14, x15
│ │││││││   0x100002c5c      cmp x14, 0
│ │││││││   0x100002c60      mul x17, x14, x15
│ │││││││   0x100002c64      umulh x1, x15, x15
│ │││││││   0x100002c68      ccmp xzr, x16, 0, eq
│ │││││││   0x100002c6c      mul x2, x15, x15
│ │││││││   0x100002c70      add x16, x17, x17
│ │││││││   0x100002c74      cset w17, ne
│ │││││││   0x100002c78      adds x3, x1, x16
│ │││││││   0x100002c7c      csinc w16, w17, wzr, lo
│ │││││││   0x100002c80      cmp x14, 0
│ │││││││   0x100002c84      csel w4, w16, wzr, ne
│ │││││││   0x100002c88      mov x16, x2
│ │││││││   0x100002c8c      csel x17, x3, x1, ne
│ ────────< 0x100002c90      tbnz w4, 0, 0x10000362c
│ │││││││   0x100002c94      cmp xzr, x16
│ │││││││   0x100002c98      sbcs xzr, x9, x17
│ ────────< 0x100002c9c      b.hs 0x100002c1c
│ │││││││   0x100002ca0      subs x13, x15, 1
│ │││││││   0x100002ca4      sbcs x11, x14, xzr
│ │││││││   0x100002ca8      cset w14, lo
│ ────────< 0x100002cac      tbz w14, 0, 0x100002c24
│ ────────< 0x100002cb0      b 0x10000362c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002c2c(x)
│ ────────> 0x100002cb4      ldr w9, [x5, 0x108]
│ │││││││   0x100002cb8      adrp x11, reloc._tlv_bootstrap            ; 0x100058000
│ │││││││   0x100002cbc      str w10, [x11, 0x334]
│ ────────< 0x100002cc0      tbnz w9, 0x1f, 0x10000362c
│ │││││││   0x100002cc4      mov x10, xzr
│ │││││││   0x100002cc8      mov x12, xzr
│ │││││││   0x100002ccc      mov x11, xzr
│ │││││││   0x100002cd0      mov x13, 0x10000000000
│ ────────< 0x100002cd4      b 0x100002cec
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002d58(x)
│ ────────> 0x100002cd8      mov x10, x15
│ │││││││   0x100002cdc      mov x12, x14
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002d68(x)
│ ────────> 0x100002ce0      cmp x10, x13
│ │││││││   0x100002ce4      sbcs xzr, x12, x11
│ ────────< 0x100002ce8      b.hs 0x100002d70
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002cd4(x)
│ ────────> 0x100002cec      adds x15, x10, x13
│ │││││││   0x100002cf0      adcs x14, x12, x11
│ │││││││   0x100002cf4      cset w16, hs
│ ────────< 0x100002cf8      tbnz w16, 0, 0x10000362c
│ │││││││   0x100002cfc      adds x15, x15, 1
│ │││││││   0x100002d00      adcs x14, x14, xzr
│ │││││││   0x100002d04      cset w16, hs
│ ────────< 0x100002d08      tbnz w16, 0, 0x10000362c
│ │││││││   0x100002d0c      extr x15, x14, x15, 1
│ │││││││   0x100002d10      lsr x14, x14, 1
│ │││││││   0x100002d14      umulh x16, x14, x15
│ │││││││   0x100002d18      cmp x14, 0
│ │││││││   0x100002d1c      mul x17, x14, x15
│ │││││││   0x100002d20      umulh x1, x15, x15
│ │││││││   0x100002d24      ccmp xzr, x16, 0, eq
│ │││││││   0x100002d28      mul x2, x15, x15
│ │││││││   0x100002d2c      add x16, x17, x17
│ │││││││   0x100002d30      cset w17, ne
│ │││││││   0x100002d34      adds x3, x1, x16
│ │││││││   0x100002d38      csinc w16, w17, wzr, lo
│ │││││││   0x100002d3c      cmp x14, 0
│ │││││││   0x100002d40      csel w4, w16, wzr, ne
│ │││││││   0x100002d44      mov x16, x2
│ │││││││   0x100002d48      csel x17, x3, x1, ne
│ ────────< 0x100002d4c      tbnz w4, 0, 0x10000362c
│ │││││││   0x100002d50      cmp xzr, x16
│ │││││││   0x100002d54      sbcs xzr, x9, x17
│ ────────< 0x100002d58      b.hs 0x100002cd8
│ │││││││   0x100002d5c      subs x13, x15, 1
│ │││││││   0x100002d60      sbcs x11, x14, xzr
│ │││││││   0x100002d64      cset w14, lo
│ ────────< 0x100002d68      tbz w14, 0, 0x100002ce0
│ ────────< 0x100002d6c      b 0x10000362c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002ce8(x)
│ ────────> 0x100002d70      ldr w9, [x5, 0x10c]
│ │││││││   0x100002d74      adrp x11, reloc._tlv_bootstrap            ; 0x100058000
│ │││││││   0x100002d78      str w10, [x11, 0x338]
│ ────────< 0x100002d7c      tbnz w9, 0x1f, 0x10000362c
│ │││││││   0x100002d80      mov x10, xzr
│ │││││││   0x100002d84      mov x12, xzr
│ │││││││   0x100002d88      mov x11, xzr
│ │││││││   0x100002d8c      mov x13, 0x10000000000
│ ────────< 0x100002d90      b 0x100002da8
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002e14(x)
│ ────────> 0x100002d94      mov x10, x15
│ │││││││   0x100002d98      mov x12, x14
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002e24(x)
│ ────────> 0x100002d9c      cmp x10, x13
│ │││││││   0x100002da0      sbcs xzr, x12, x11
│ ────────< 0x100002da4      b.hs 0x100002e2c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002d90(x)
│ ────────> 0x100002da8      adds x15, x10, x13
│ │││││││   0x100002dac      adcs x14, x12, x11
│ │││││││   0x100002db0      cset w16, hs
│ ────────< 0x100002db4      tbnz w16, 0, 0x10000362c
│ │││││││   0x100002db8      adds x15, x15, 1
│ │││││││   0x100002dbc      adcs x14, x14, xzr
│ │││││││   0x100002dc0      cset w16, hs
│ ────────< 0x100002dc4      tbnz w16, 0, 0x10000362c
│ │││││││   0x100002dc8      extr x15, x14, x15, 1
│ │││││││   0x100002dcc      lsr x14, x14, 1
│ │││││││   0x100002dd0      umulh x16, x14, x15
│ │││││││   0x100002dd4      cmp x14, 0
│ │││││││   0x100002dd8      mul x17, x14, x15
│ │││││││   0x100002ddc      umulh x1, x15, x15
│ │││││││   0x100002de0      ccmp xzr, x16, 0, eq
│ │││││││   0x100002de4      mul x2, x15, x15
│ │││││││   0x100002de8      add x16, x17, x17
│ │││││││   0x100002dec      cset w17, ne
│ │││││││   0x100002df0      adds x3, x1, x16
│ │││││││   0x100002df4      csinc w16, w17, wzr, lo
│ │││││││   0x100002df8      cmp x14, 0
│ │││││││   0x100002dfc      csel w4, w16, wzr, ne
│ │││││││   0x100002e00      mov x16, x2
│ │││││││   0x100002e04      csel x17, x3, x1, ne
│ ────────< 0x100002e08      tbnz w4, 0, 0x10000362c
│ │││││││   0x100002e0c      cmp xzr, x16
│ │││││││   0x100002e10      sbcs xzr, x9, x17
│ ────────< 0x100002e14      b.hs 0x100002d94
│ │││││││   0x100002e18      subs x13, x15, 1
│ │││││││   0x100002e1c      sbcs x11, x14, xzr
│ │││││││   0x100002e20      cset w14, lo
│ ────────< 0x100002e24      tbz w14, 0, 0x100002d9c
│ ────────< 0x100002e28      b 0x10000362c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002da4(x)
│ ────────> 0x100002e2c      ldr w9, [x5, 0x110]
│ │││││││   0x100002e30      adrp x11, reloc._tlv_bootstrap            ; 0x100058000
│ │││││││   0x100002e34      str w10, [x11, 0x33c]
│ ────────< 0x100002e38      tbnz w9, 0x1f, 0x10000362c
│ │││││││   0x100002e3c      mov x10, xzr
│ │││││││   0x100002e40      mov x12, xzr
│ │││││││   0x100002e44      mov x11, xzr
│ │││││││   0x100002e48      mov x13, 0x10000000000
│ ────────< 0x100002e4c      b 0x100002e64
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002ed0(x)
│ ────────> 0x100002e50      mov x10, x15
│ │││││││   0x100002e54      mov x12, x14
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002ee0(x)
│ ────────> 0x100002e58      cmp x10, x13
│ │││││││   0x100002e5c      sbcs xzr, x12, x11
│ ────────< 0x100002e60      b.hs 0x100002ee8
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002e4c(x)
│ ────────> 0x100002e64      adds x15, x10, x13
│ │││││││   0x100002e68      adcs x14, x12, x11
│ │││││││   0x100002e6c      cset w16, hs
│ ────────< 0x100002e70      tbnz w16, 0, 0x10000362c
│ │││││││   0x100002e74      adds x15, x15, 1
│ │││││││   0x100002e78      adcs x14, x14, xzr
│ │││││││   0x100002e7c      cset w16, hs
│ ────────< 0x100002e80      tbnz w16, 0, 0x10000362c
│ │││││││   0x100002e84      extr x15, x14, x15, 1
│ │││││││   0x100002e88      lsr x14, x14, 1
│ │││││││   0x100002e8c      umulh x16, x14, x15
│ │││││││   0x100002e90      cmp x14, 0
│ │││││││   0x100002e94      mul x17, x14, x15
│ │││││││   0x100002e98      umulh x1, x15, x15
│ │││││││   0x100002e9c      ccmp xzr, x16, 0, eq
│ │││││││   0x100002ea0      mul x2, x15, x15
│ │││││││   0x100002ea4      add x16, x17, x17
│ │││││││   0x100002ea8      cset w17, ne
│ │││││││   0x100002eac      adds x3, x1, x16
│ │││││││   0x100002eb0      csinc w16, w17, wzr, lo
│ │││││││   0x100002eb4      cmp x14, 0
│ │││││││   0x100002eb8      csel w4, w16, wzr, ne
│ │││││││   0x100002ebc      mov x16, x2
│ │││││││   0x100002ec0      csel x17, x3, x1, ne
│ ────────< 0x100002ec4      tbnz w4, 0, 0x10000362c
│ │││││││   0x100002ec8      cmp xzr, x16
│ │││││││   0x100002ecc      sbcs xzr, x9, x17
│ ────────< 0x100002ed0      b.hs 0x100002e50
│ │││││││   0x100002ed4      subs x13, x15, 1
│ │││││││   0x100002ed8      sbcs x11, x14, xzr
│ │││││││   0x100002edc      cset w14, lo
│ ────────< 0x100002ee0      tbz w14, 0, 0x100002e58
│ ────────< 0x100002ee4      b 0x10000362c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002e60(x)
│ ────────> 0x100002ee8      ldr w9, [x5, 0x114]
│ │││││││   0x100002eec      adrp x11, reloc._tlv_bootstrap            ; 0x100058000
│ │││││││   0x100002ef0      str w10, [x11, 0x340]
│ ────────< 0x100002ef4      tbnz w9, 0x1f, 0x10000362c
│ │││││││   0x100002ef8      mov x10, xzr
│ │││││││   0x100002efc      mov x12, xzr
│ │││││││   0x100002f00      mov x11, xzr
│ │││││││   0x100002f04      mov x13, 0x10000000000
│ ────────< 0x100002f08      b 0x100002f20
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002f8c(x)
│ ────────> 0x100002f0c      mov x10, x15
│ │││││││   0x100002f10      mov x12, x14
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002f9c(x)
│ ────────> 0x100002f14      cmp x10, x13
│ │││││││   0x100002f18      sbcs xzr, x12, x11
│ ────────< 0x100002f1c      b.hs 0x100002fa4
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002f08(x)
│ ────────> 0x100002f20      adds x15, x10, x13
│ │││││││   0x100002f24      adcs x14, x12, x11
│ │││││││   0x100002f28      cset w16, hs
│ ────────< 0x100002f2c      tbnz w16, 0, 0x10000362c
│ │││││││   0x100002f30      adds x15, x15, 1
│ │││││││   0x100002f34      adcs x14, x14, xzr
│ │││││││   0x100002f38      cset w16, hs
│ ────────< 0x100002f3c      tbnz w16, 0, 0x10000362c
│ │││││││   0x100002f40      extr x15, x14, x15, 1
│ │││││││   0x100002f44      lsr x14, x14, 1
│ │││││││   0x100002f48      umulh x16, x14, x15
│ │││││││   0x100002f4c      cmp x14, 0
│ │││││││   0x100002f50      mul x17, x14, x15
│ │││││││   0x100002f54      umulh x1, x15, x15
│ │││││││   0x100002f58      ccmp xzr, x16, 0, eq
│ │││││││   0x100002f5c      mul x2, x15, x15
│ │││││││   0x100002f60      add x16, x17, x17
│ │││││││   0x100002f64      cset w17, ne
│ │││││││   0x100002f68      adds x3, x1, x16
│ │││││││   0x100002f6c      csinc w16, w17, wzr, lo
│ │││││││   0x100002f70      cmp x14, 0
│ │││││││   0x100002f74      csel w4, w16, wzr, ne
│ │││││││   0x100002f78      mov x16, x2
│ │││││││   0x100002f7c      csel x17, x3, x1, ne
│ ────────< 0x100002f80      tbnz w4, 0, 0x10000362c
│ │││││││   0x100002f84      cmp xzr, x16
│ │││││││   0x100002f88      sbcs xzr, x9, x17
│ ────────< 0x100002f8c      b.hs 0x100002f0c
│ │││││││   0x100002f90      subs x13, x15, 1
│ │││││││   0x100002f94      sbcs x11, x14, xzr
│ │││││││   0x100002f98      cset w14, lo
│ ────────< 0x100002f9c      tbz w14, 0, 0x100002f14
│ ────────< 0x100002fa0      b 0x10000362c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002f1c(x)
│ ────────> 0x100002fa4      ldr w9, [x5, 0x118]
│ │││││││   0x100002fa8      adrp x11, reloc._tlv_bootstrap            ; 0x100058000
│ │││││││   0x100002fac      str w10, [x11, 0x344]
│ ────────< 0x100002fb0      tbnz w9, 0x1f, 0x10000362c
│ │││││││   0x100002fb4      mov x10, xzr
│ │││││││   0x100002fb8      mov x12, xzr
│ │││││││   0x100002fbc      mov x11, xzr
│ │││││││   0x100002fc0      mov x13, 0x10000000000
│ ────────< 0x100002fc4      b 0x100002fdc
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100003048(x)
│ ────────> 0x100002fc8      mov x10, x15
│ │││││││   0x100002fcc      mov x12, x14
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100003058(x)
│ ────────> 0x100002fd0      cmp x10, x13
│ │││││││   0x100002fd4      sbcs xzr, x12, x11
│ ────────< 0x100002fd8      b.hs 0x100003060
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002fc4(x)
│ ────────> 0x100002fdc      adds x15, x10, x13
│ │││││││   0x100002fe0      adcs x14, x12, x11
│ │││││││   0x100002fe4      cset w16, hs
│ ────────< 0x100002fe8      tbnz w16, 0, 0x10000362c
│ │││││││   0x100002fec      adds x15, x15, 1
│ │││││││   0x100002ff0      adcs x14, x14, xzr
│ │││││││   0x100002ff4      cset w16, hs
│ ────────< 0x100002ff8      tbnz w16, 0, 0x10000362c
│ │││││││   0x100002ffc      extr x15, x14, x15, 1
│ │││││││   0x100003000      lsr x14, x14, 1
│ │││││││   0x100003004      umulh x16, x14, x15
│ │││││││   0x100003008      cmp x14, 0
│ │││││││   0x10000300c      mul x17, x14, x15
│ │││││││   0x100003010      umulh x1, x15, x15
│ │││││││   0x100003014      ccmp xzr, x16, 0, eq
│ │││││││   0x100003018      mul x2, x15, x15
│ │││││││   0x10000301c      add x16, x17, x17
│ │││││││   0x100003020      cset w17, ne
│ │││││││   0x100003024      adds x3, x1, x16
│ │││││││   0x100003028      csinc w16, w17, wzr, lo
│ │││││││   0x10000302c      cmp x14, 0
│ │││││││   0x100003030      csel w4, w16, wzr, ne
│ │││││││   0x100003034      mov x16, x2
│ │││││││   0x100003038      csel x17, x3, x1, ne
│ ────────< 0x10000303c      tbnz w4, 0, 0x10000362c
│ │││││││   0x100003040      cmp xzr, x16
│ │││││││   0x100003044      sbcs xzr, x9, x17
│ ────────< 0x100003048      b.hs 0x100002fc8
│ │││││││   0x10000304c      subs x13, x15, 1
│ │││││││   0x100003050      sbcs x11, x14, xzr
│ │││││││   0x100003054      cset w14, lo
│ ────────< 0x100003058      tbz w14, 0, 0x100002fd0
│ ────────< 0x10000305c      b 0x10000362c
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100002fd8(x)
│ ────────> 0x100003060      ldr w9, [x5, 0x11c]
│ │││││││   0x100003064      adrp x11, reloc._tlv_bootstrap            ; 0x100058000
│ │││││││   0x100003068      str w10, [x11, 0x348]
│ ────────< 0x10000306c      tbnz w9, 0x1f, 0x10000362c
│ │││││││   0x100003070      mov x10, xzr
│ │││││││   0x100003074      mov x12, xzr
│ │││││││   0x100003078      mov x11, xzr
│ │││││││   0x10000307c      mov x13, 0x10000000000
│ ────────< 0x100003080      b 0x100003098
  │││││││   ; CODE XREF from aav.0x10000296c @ +0x798(x)
..
  │││││││   ; CODE XREF from aav.0x10000296c @ +0x7a8(x)
  │││││││   ; CODE XREF from sym.func.100000750 @ 0x100003080(x)
  │││││││   ; CODE XREF from aav.0x10000296c @ +0x728(x)
  │││││││   ; CODE XREF from aav.0x10000296c @ +0x804(x)
  │││││││   ; CODE XREF from aav.0x10000296c @ +0x7bc(x)
  │││││││   ; CODE XREF from aav.0x10000296c @ +0x8c8(x)
  │││││││   ; CODE XREF from aav.0x10000296c @ +0x8d8(x)
  │││││││   ; CODE XREF from aav.0x10000296c @ +0x7f0(x)
  │││││││   ; CODE XREF from aav.0x10000296c @ +0x830(x)
  │││││││   ; CODE XREF from aav.0x10000296c @ +0x858(x)
  │││││││   ; CODE XREF from aav.0x10000296c @ +0x7d0(x)
│ │││││││   ; CODE XREFS from sym.func.100000750 @ 0x100002774(x), 0x100002a70(x)
│ ────────> 0x100003258      adr x8, 0x1000582b8
│ │││││││   0x10000325c      nop
│ │││││││   0x100003260      ldr x2, [x8, 8]
│ │││││││   0x100003264      ldr w0, [x8]
│ │││││││   0x100003268      ldrb w1, [x8, 4]
│ │││││││   0x10000326c      bl sym.func.100033ef8
│ │││││││   0x100003270      nop
│ │││││││   0x100003274      add x9, sp, 0xc0
│ │││││││   0x100003278      ldr q0, sym.__mh_execute_header           ; [0x100035f50:8]=0x100000000 sym.__mh_execute_header
│ │││││││   0x10000327c      nop
│ │││││││   0x100003280      ldr q1, 0x100035f60                       ; [0x100035f60:8]=0x500000004
│ │││││││   0x100003284      nop
│ │││││││   0x100003288      ldr q2, 0x100035f70                       ; [0x100035f70:8]=0x900000008
│ │││││││   0x10000328c      nop
│ │││││││   0x100003290      stp q0, q1, [x9, 0x100]
│ │││││││   0x100003294      ldr q0, 0x100035f80                       ; [0x100035f80:8]=0xd0000000c
│ │││││││   0x100003298      nop
│ │││││││   0x10000329c      ldr q1, 0x100035f90                       ; [0x100035f90:8]=0x1100000010
│ │││││││   0x1000032a0      nop
│ │││││││   0x1000032a4      stp q2, q0, [x9, 0x120]
│ │││││││   0x1000032a8      ldr q0, 0x100035fa0                       ; [0x100035fa0:8]=0x1500000014
│ │││││││   0x1000032ac      nop
│ │││││││   0x1000032b0      ldr q2, 0x100035fb0                       ; [0x100035fb0:8]=0x1900000018
│ │││││││   0x1000032b4      nop
│ │││││││   0x1000032b8      stp q1, q0, [x9, 0x140]
│ │││││││   0x1000032bc      ldr q0, 0x100035fc0                       ; [0x100035fc0:8]=0x1d0000001c
│ │││││││   0x1000032c0      nop
│ │││││││   0x1000032c4      ldr q1, 0x100035fd0                       ; [0x100035fd0:8]=0x2100000020
│ │││││││   0x1000032c8      nop
│ │││││││   0x1000032cc      stp q2, q0, [x9, 0x160]
│ │││││││   0x1000032d0      ldr q0, 0x100035fe0                       ; [0x100035fe0:8]=0x2500000024
│ │││││││   0x1000032d4      nop
│ │││││││   0x1000032d8      ldr q2, 0x100035ff0                       ; [0x100035ff0:8]=0x2900000028
│ │││││││   0x1000032dc      nop
│ │││││││   0x1000032e0      stp q1, q0, [x9, 0x180]
│ │││││││   0x1000032e4      ldr q0, 0x100036000                       ; [0x100036000:8]=0x2d0000002c
│ │││││││   0x1000032e8      nop
│ │││││││   0x1000032ec      ldr q1, 0x100036010                       ; [0x100036010:8]=0x3100000030
│ │││││││   0x1000032f0      nop
│ │││││││   0x1000032f4      stp q2, q0, [x9, 0x1a0]
│ │││││││   0x1000032f8      ldr q0, 0x100036020                       ; [0x100036020:8]=0x3500000034
│ │││││││   0x1000032fc      nop
│ │││││││   0x100003300      ldr q2, 0x100036030                       ; [0x100036030:8]=0x3900000038
│ │││││││   0x100003304      nop
│ │││││││   0x100003308      stp q1, q0, [x9, 0x1c0]
│ │││││││   0x10000330c      ldr q0, 0x100036040                       ; [0x100036040:8]=0x3d0000003c
│ │││││││   0x100003310      nop
│ │││││││   0x100003314      ldr q1, 0x100036050                       ; [0x100036050:8]=0x4100000040
│ │││││││   0x100003318      nop
│ │││││││   0x10000331c      stp q2, q0, [x9, 0x1e0]
│ │││││││   0x100003320      ldr q0, 0x100036060                       ; [0x100036060:8]=0x4500000044
│ │││││││   0x100003324      nop
│ │││││││   0x100003328      ldr q2, 0x100036070                       ; [0x100036070:8]=0x4900000048
│ │││││││   0x10000332c      nop
│ │││││││   0x100003330      stp q1, q0, [x9, 0x200]
│ │││││││   0x100003334      ldr q0, 0x100036080                       ; [0x100036080:8]=0x4d0000004c
│ │││││││   0x100003338      nop
│ │││││││   0x10000333c      ldr q1, 0x100036090                       ; [0x100036090:8]=0x5100000050
│ │││││││   0x100003340      nop
│ │││││││   0x100003344      stp q2, q0, [x9, 0x220]
│ │││││││   0x100003348      ldr q0, 0x1000360a0                       ; [0x1000360a0:8]=0x5500000054
│ │││││││   0x10000334c      nop
│ │││││││   0x100003350      ldr q2, 0x1000360b0                       ; [0x1000360b0:8]=0x5900000058
│ │││││││   0x100003354      nop
│ │││││││   0x100003358      stp q1, q0, [x9, 0x240]
│ │││││││   0x10000335c      ldr q0, 0x1000360c0                       ; [0x1000360c0:8]=0x5d0000005c
│ │││││││   0x100003360      nop
│ │││││││   0x100003364      ldr q1, 0x1000360d0                       ; [0x1000360d0:8]=0x6100000060
│ │││││││   0x100003368      nop
│ │││││││   0x10000336c      stp q2, q0, [x9, 0x260]
│ │││││││   0x100003370      ldr q0, 0x1000360e0                       ; [0x1000360e0:8]=0x6500000064
│ │││││││   0x100003374      nop
│ │││││││   0x100003378      ldr q2, 0x1000360f0                       ; [0x1000360f0:8]=0x6900000068
│ │││││││   0x10000337c      nop
│ │││││││   0x100003380      stp q1, q0, [x9, 0x280]
│ │││││││   0x100003384      ldr q0, 0x100036100                       ; [0x100036100:8]=0x6d0000006c
│ │││││││   0x100003388      nop
│ │││││││   0x10000338c      ldr q1, 0x100036110                       ; [0x100036110:8]=0x7100000070
│ │││││││   0x100003390      nop
│ │││││││   0x100003394      stp q2, q0, [x9, 0x2a0]
│ │││││││   0x100003398      ldr q0, 0x100036120                       ; [0x100036120:8]=0x7500000074
│ │││││││   0x10000339c      nop
│ │││││││   0x1000033a0      ldr q2, 0x100036130                       ; [0x100036130:8]=0x7900000078
│ │││││││   0x1000033a4      nop
│ │││││││   0x1000033a8      stp q1, q0, [x9, 0x2c0]
│ │││││││   0x1000033ac      ldr q0, 0x100036140                       ; [0x100036140:8]=0x7d0000007c
│ │││││││   0x1000033b0      nop
│ │││││││   0x1000033b4      ldr q1, 0x100036150                       ; [0x100036150:8]=0x8100000080
│ │││││││   0x1000033b8      nop
│ │││││││   0x1000033bc      stp q2, q0, [x9, 0x2e0]
│ │││││││   0x1000033c0      ldr q0, 0x100036160                       ; [0x100036160:8]=0x8500000084
│ │││││││   0x1000033c4      nop
│ │││││││   0x1000033c8      ldr q2, 0x100036170                       ; [0x100036170:8]=0x8900000088
│ │││││││   0x1000033cc      nop
│ │││││││   0x1000033d0      stp q1, q0, [x9, 0x300]
│ │││││││   0x1000033d4      ldr q0, 0x100036180                       ; [0x100036180:8]=0x8d0000008c
│ │││││││   0x1000033d8      nop
│ │││││││   0x1000033dc      ldr q1, 0x100036190                       ; [0x100036190:8]=0x9100000090
│ │││││││   0x1000033e0      nop
│ │││││││   0x1000033e4      stp q2, q0, [x9, 0x320]
│ │││││││   0x1000033e8      ldr q0, 0x1000361a0                       ; [0x1000361a0:8]=0x9500000094
│ │││││││   0x1000033ec      nop
│ │││││││   0x1000033f0      ldr q2, 0x1000361b0                       ; [0x1000361b0:8]=0x9900000098
│ │││││││   0x1000033f4      nop
│ │││││││   0x1000033f8      stp q1, q0, [x9, 0x340]
│ │││││││   0x1000033fc      ldr q0, 0x1000361c0                       ; [0x1000361c0:8]=0x9d0000009c
│ │││││││   0x100003400      nop
│ │││││││   0x100003404      ldr q1, 0x1000361d0                       ; [0x1000361d0:8]=0xa1000000a0
│ │││││││   0x100003408      nop
│ │││││││   0x10000340c      stp q2, q0, [x9, 0x360]
│ │││││││   0x100003410      ldr q0, 0x1000361e0                       ; [0x1000361e0:8]=0xa5000000a4
│ │││││││   0x100003414      nop
│ │││││││   0x100003418      ldr q2, 0x1000361f0                       ; [0x1000361f0:8]=0xa9000000a8
│ │││││││   0x10000341c      nop
│ │││││││   0x100003420      stp q1, q0, [x9, 0x380]
│ │││││││   0x100003424      ldr q0, 0x100036200                       ; [0x100036200:8]=0xad000000ac
│ │││││││   0x100003428      nop
│ │││││││   0x10000342c      ldr q1, 0x100036210                       ; [0x100036210:8]=0xb1000000b0
│ │││││││   0x100003430      nop
│ │││││││   0x100003434      stp q2, q0, [x9, 0x3a0]
│ │││││││   0x100003438      ldr q0, 0x100036220                       ; [0x100036220:8]=0xb5000000b4
│ │││││││   0x10000343c      nop
│ │││││││   0x100003440      ldr q2, 0x100036230                       ; [0x100036230:8]=0xb9000000b8
│ │││││││   0x100003444      nop
│ │││││││   0x100003448      stp q1, q0, [x9, 0x3c0]
│ │││││││   0x10000344c      ldr q0, 0x100036240                       ; [0x100036240:8]=0xbd000000bc
│ │││││││   0x100003450      nop
│ │││││││   0x100003454      ldr q1, 0x100036250                       ; [0x100036250:8]=0xc1000000c0
│ │││││││   0x100003458      nop
│ │││││││   0x10000345c      stp q2, q0, [x9, 0x3e0]
│ │││││││   0x100003460      ldr q0, 0x100036260                       ; [0x100036260:8]=0xc5000000c4
│ │││││││   0x100003464      nop
│ │││││││   0x100003468      str q1, [x9, 0x400]
│ │││││││   0x10000346c      ldr q1, 0x100036270                       ; [0x100036270:8]=0xc9000000c8
│ │││││││   0x100003470      nop
│ │││││││   0x100003474      str q0, [x9, 0x410]
│ │││││││   0x100003478      ldr q0, 0x100036280                       ; [0x100036280:8]=0xcd000000cc
│ │││││││   0x10000347c      nop
│ │││││││   0x100003480      str q1, [x9, 0x420]
│ │││││││   0x100003484      ldr q1, 0x100036290                       ; [0x100036290:8]=0xd1000000d0
│ │││││││   0x100003488      nop
│ │││││││   0x10000348c      str q0, [x9, 0x430]
│ │││││││   0x100003490      ldr q0, 0x1000362a0                       ; [0x1000362a0:8]=0xd5000000d4
│ │││││││   0x100003494      nop
│ │││││││   0x100003498      str q1, [x9, 0x440]
│ │││││││   0x10000349c      ldr q1, 0x1000362b0                       ; [0x1000362b0:8]=0xd9000000d8
│ │││││││   0x1000034a0      nop
│ │││││││   0x1000034a4      str q0, [x9, 0x450]
│ │││││││   0x1000034a8      ldr q0, 0x1000362c0                       ; [0x1000362c0:8]=0xdd000000dc
│ │││││││   0x1000034ac      nop
│ │││││││   0x1000034b0      str q1, [x9, 0x460]
│ │││││││   0x1000034b4      ldr q1, 0x1000362d0                       ; [0x1000362d0:8]=0xe1000000e0
│ │││││││   0x1000034b8      nop
│ │││││││   0x1000034bc      str q0, [x9, 0x470]
│ │││││││   0x1000034c0      ldr q0, 0x1000362e0                       ; [0x1000362e0:8]=0xe5000000e4
│ │││││││   0x1000034c4      nop
│ │││││││   0x1000034c8      str q1, [x9, 0x480]
│ │││││││   0x1000034cc      ldr q1, 0x1000362f0                       ; [0x1000362f0:8]=0xe9000000e8
│ │││││││   0x1000034d0      nop
│ │││││││   0x1000034d4      str q0, [x9, 0x490]
│ │││││││   0x1000034d8      ldr q0, 0x100036300                       ; [0x100036300:8]=0xed000000ec
│ │││││││   0x1000034dc      nop
│ │││││││   0x1000034e0      str q1, [x9, 0x4a0]
│ │││││││   0x1000034e4      ldr q1, 0x100036310                       ; [0x100036310:8]=0xf1000000f0
│ │││││││   0x1000034e8      nop
│ │││││││   0x1000034ec      str q0, [x9, 0x4b0]
│ │││││││   0x1000034f0      ldr q0, 0x100036320                       ; [0x100036320:8]=0xf5000000f4
│ │││││││   0x1000034f4      nop
│ │││││││   0x1000034f8      str q1, [x9, 0x4c0]
│ │││││││   0x1000034fc      ldr q1, 0x100036330                       ; [0x100036330:8]=0xf9000000f8
│ │││││││   0x100003500      nop
│ │││││││   0x100003504      str q0, [x9, 0x4d0]
│ │││││││   0x100003508      ldr q0, 0x100036340                       ; [0x100036340:8]=0xfd000000fc
│ │││││││   0x10000350c      str q1, [x9, 0x4e0]
│ │││││││   0x100003510      str q0, [x9, 0x4f0]
│ ────────< 0x100003514      cbz w23, 0x100003800
│ ────────< 0x100003518      tbnz w23, 0x1f, 0x100003664
│ │││││││   0x10000351c      mov w19, w0
│ │││││││   0x100003520      mov x21, x2
│ │││││││   0x100003524      mov x8, xzr
│ │││││││   0x100003528      mov w10, wzr
│ │││││││   0x10000352c      add x9, sp, 0x1c0
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x100003568(x)
│ ────────> 0x100003530      ldr w11, [x9, x8, lsl 2]
│ │││││││   0x100003534      adds w10, w10, w11
│ ────────< 0x100003538      b.vs 0x10000362c
│ │││││││   0x10000353c      udiv w12, w8, w23
│ │││││││   0x100003540      msub w12, w12, w23, w8
│ │││││││   0x100003544      ldrb w12, [x22, w12, uxtw]
│ │││││││   0x100003548      adds w10, w10, w12
│ ────────< 0x10000354c      b.vs 0x10000362c
│ │││││││   0x100003550      and w10, w10, 0xff
│ │││││││   0x100003554      ldr w12, [x9, w10, uxtw 2]
│ │││││││   0x100003558      str w12, [x9, x8, lsl 2]
│ │││││││   0x10000355c      add x8, x8, 1
│ │││││││   0x100003560      cmp x8, 0x100
│ │││││││   0x100003564      str w11, [x9, w10, uxtw 2]
│ ────────< 0x100003568      b.ne 0x100003530
│ ────────< 0x10000356c      tbnz w19, 0x1f, 0x1000037f0
│ │││││││   0x100003570      mov w20, w19
│ │││││││   0x100003574      mov w0, 1
│ │││││││   0x100003578      mov x1, x20                               ; size_t size
│ │││││││   0x10000357c      bl sym.imp.calloc                         ; void *calloc(size_t nmeb, size_t size)
│ ────────< 0x100003580      cbz w19, 0x100003630
│ │││││││   0x100003584      mov x22, x0
│ │││││││   0x100003588      mov x8, xzr
│ │││││││   0x10000358c      mov w9, wzr
│ │││││││   0x100003590      mov w10, wzr
│ │││││││   0x100003594      add x11, sp, 0x1c0
│ │││││││   ; CODE XREF from sym.func.100000750 @ 0x1000035f0(x)
│ ────────> 0x100003598      add w9, w9, 1
│ │││││││   0x10000359c      and w9, w9, 0xff
│ │││││││   0x1000035a0      ldr w12, [x11, w9, uxtw 2]
│ │││││││   0x1000035a4      adds w10, w10, w12
│ ────────< 0x1000035a8      b.vs 0x10000362c
│ │││││││   0x1000035ac      and w10, w10, 0xff
│ │││││││   0x1000035b0      ldr w13, [x11, w10, uxtw 2]
│ │││││││   0x1000035b4      str w13, [x11, w9, uxtw 2]
│ │││││││   0x1000035b8      str w12, [x11, w10, uxtw 2]
│ │││││││   0x1000035bc      ldr w13, [x11, w9, uxtw 2]
│ │││││││   0x1000035c0      adds w12, w13, w12
│ ────────< 0x1000035c4      b.vs 0x10000362c
│ │││││││   0x1000035c8      and w12, w12, 0xff
│ │││││││   0x1000035cc      ldr w12, [x11, w12, uxtw 2]
│ ────────< 0x1000035d0      tbnz w12, 0x1f, 0x10000362c
│ │││││││   0x1000035d4      ldrb w13, [x21, x8]
│ │││││││   0x1000035d8      eor w12, w12, w13
│ │││││││   0x1000035dc      cmp w12, 0x100
│ ────────< 0x1000035e0      b.ge 0x10000362c
│ │││││││   0x1000035e4      strb w12, [x22, x8]
│ │││││││   0x1000035e8      add x8, x8, 1
│ │││││││   0x1000035ec      cmp x20, x8
│ ────────< 0x1000035f0      b.ne 0x100003598
│ │││││││   0x1000035f4      add w0, w19, 0xd
│ │││││││   0x1000035f8      bl sym.imp.malloc                         ;  void *malloc(size_t size)
│ │││││││   0x1000035fc      mov x21, x0
│ │││││││   0x100003600      add x23, x0, 0xc
│ │││││││   0x100003604      add x0, x0, 0xc                           ; void *s1
│ │││││││   0x100003608      mov x1, x22                               ; const void *s2
│ │││││││   0x10000360c      mov x2, x20                               ; size_t n
│ │││││││   0x100003610      bl sym.imp.memcpy                         ; void *memcpy(void *s1, const void *s2, size_t n)
│ │││││││   0x100003614      mov w8, 1
│ │││││││   0x100003618      mov x1, x21
│ │││││││   0x10000361c      strb wzr, [x23, x20]
│ │││││││   0x100003620      stp w8, w19, [x21]
│ │││││││   0x100003624      str wzr, [x21, 8]
│ ────────< 0x100003628      b 0x100003638
│ │││││││   ; XREFS(104)
│ └└└└└└──> 0x10000362c      bl sym.func.100003b88
│       │   ; CODE XREF from sym.func.100000750 @ 0x100003580(x)
│ ────────> 0x100003630      adr x1, 0x1000385b0
│       │   0x100003634      nop
│       │   ; CODE XREF from sym.func.100000750 @ 0x100003628(x)
│ ────────> 0x100003638      nop
│       │   0x10000363c      ldr x0, 0x100058218                       ; [0x100058218:8]=0 ; int64_t arg1
│       │   0x100003640      bl sym.func.1000307d8
│       │   0x100003644      add sp, sp, 0x5c0
│       │   0x100003648      ldp x29, x30, [arg_10h]
│       │   0x10000364c      ldp x20, x19, [arg_20h]
│       │   0x100003650      ldp x22, x21, [arg_30h]
│       │   0x100003654      ldp x24, x23, [arg_40h]
│       │   0x100003658      ldp x26, x25, [arg_50h]
│       │   0x10000365c      ldp x28, x27, [sp], 0x60
│       │   0x100003660      ret
│       │   ; XREFS(22)
│ ────────> 0x100003664      bl sym.func.10000470c
│       │   0x100003668      bl sym.func.10000473c
│       │   ; CODE XREF from sym.func.100000750 @ 0x1000021bc(x)
│ ────────> 0x10000366c      ldr w28, [var_90h]
│ ────────< 0x100003670      b 0x1000019bc
│       │   ; CODE XREFS from sym.func.100000750 @ 0x100001d4c(x), 0x100001e08(x)
│ ────────> 0x100003674      adr x0, 0x1000383b0                       ; int64_t arg1
│       │   0x100003678      nop
│       │   0x10000367c      mov w1, w23
│       │   0x100003680      bl sym.func.100004310
│       │   0x100003684      bl sym.func.100004270
│       │   0x100003688      bl sym.func.1000042a4
│       │   ; CODE XREFS from sym.func.100000750 @ 0x100000b78(x), 0x100000c44(x)
│ ────────> 0x10000368c      mov w1, w0
│       │   0x100003690      adr x0, 0x100038840                       ; int64_t arg1
│       │   0x100003694      nop
│       │   0x100003698      bl sym.func.100005464
│       │   0x10000369c      bl sym.func.100005798
│       │   ; CODE XREFS from sym.func.100000750 @ 0x100001114(x), 0x100001150(x)
│ ────────> 0x1000036a0      bl sym.func.1000062d0
│       │   0x1000036a4      mov w1, w0
│       │   0x1000036a8      adr x0, 0x10004d740                       ; int64_t arg1
│       │   0x1000036ac      nop
│       │   0x1000036b0      bl sym.func.100005464
│       │   0x1000036b4      bl sym.func.100005798
│       │   ; CODE XREFS from sym.func.100000750 @ 0x10000213c(x), 0x1000022a4(x)
│ ────────> 0x1000036b8      adr x0, 0x1000382b0                       ; int64_t arg1
│       │   0x1000036bc      nop
│       │   0x1000036c0      bl sym.func.100004270
│       │   0x1000036c4      bl sym.func.1000042a4
│       │   ; CODE XREF from sym.func.100000750 @ 0x100000ad0(x)
│ ────────> 0x1000036c8      adr x0, 0x1000382d0                       ; int64_t arg1
│       │   0x1000036cc      nop
│       │   0x1000036d0      mov w1, w19
│       │   0x1000036d4      bl sym.func.100004310
│       │   0x1000036d8      bl sym.func.100004270
│       │   0x1000036dc      bl sym.func.1000042a4
│       │   ; CODE XREF from sym.func.100000750 @ 0x100000ba0(x)
│ ────────> 0x1000036e0      adr x0, 0x100038680                       ; int64_t arg1
│       │   0x1000036e4      nop
│       │   0x1000036e8      bl sym.func.100005908
│       │   0x1000036ec      bl sym.func.10000593c
│       │   ; CODE XREF from sym.func.100000750 @ 0x100001014(x)
│       └─> 0x1000036f0      bl sym.func.100004ea0
│           0x1000036f4      bl sym.func.100004ed0
│           ; CODE XREF from sym.func.100000750 @ 0x100001064(x)
│ ────────> 0x1000036f8      adr x0, 0x100038580                       ; int64_t arg1
│           0x1000036fc      nop
│           0x100003700      bl sym.func.100005464
│           0x100003704      bl sym.func.100005798
..
│           ; CODE XREF from sym.func.100000750 @ 0x1000011c8(x)
│ ────────> 0x10000370c      mov w1, w0
│           0x100003710      adr x0, 0x10004d4b0                       ; int64_t arg1
│           0x100003714      nop
│           0x100003718      bl sym.func.100005464
│           0x10000371c      bl sym.func.100005798
│           ; CODE XREF from sym.func.100000750 @ 0x1000019c4(x)
│ ────────> 0x100003720      adr x0, 0x1000382d0                       ; int64_t arg1
│           0x100003724      nop
│           0x100003728      mov w1, w22
│           0x10000372c      bl sym.func.100004310
│           0x100003730      bl sym.func.100004270
│           0x100003734      bl sym.func.1000042a4
│           ; CODE XREF from sym.func.100000750 @ 0x100002378(x)
│ ────────> 0x100003738      str wzr, [arg_20h]
│           ; CODE XREFS from sym.func.100000750 @ 0x100002740(x), 0x100002754(x)
│ ────────> 0x10000373c      bl sym.func.100025d6c
│           0x100003740      nop
│           0x100003744      ldr w1, [arg_20h]
│           0x100003748      adr x0, 0x10004e850                       ; int64_t arg1
│           0x10000374c      nop
│           0x100003750      ldr x19, 0x1000581f0                      ; [0x1000581f0:8]=0
│           0x100003754      adr x3, 0x100038c28                       ; int64_t arg4
│           0x100003758      nop
│           0x10000375c      mov w2, 6
│           0x100003760      bl sym.func.100004ba8
│           0x100003764      mov x1, x0                                ; int64_t arg2
│           0x100003768      mov x0, x19                               ; int64_t arg1
│           0x10000376c      bl sym.func.1000307d8
│           0x100003770      bl sym.func.100034314
│           ; CODE XREF from sym.func.100000750 @ 0x100002138(x)
│ ────────> 0x100003774      adr x0, 0x1000385c0                       ; int64_t arg1
│           0x100003778      nop
│           0x10000377c      adr x2, 0x100038610                       ; int64_t arg3
│           0x100003780      nop
│           0x100003784      mov w1, w28
│           0x100003788      bl sym.func.10000562c
│           0x10000378c      bl sym.func.100004270
│           0x100003790      bl sym.func.1000042a4
│           ; CODE XREFS from sym.func.100000750 @ 0x100000fac(x), 0x100002688(x)
│ ────────> 0x100003794      adr x0, 0x100038390                       ; int64_t arg1
│           0x100003798      nop
│           0x10000379c      bl sym.func.100004270
│           0x1000037a0      bl sym.func.1000042a4
│           ; CODE XREF from sym.func.100000750 @ 0x100001354(x)
│ ────────> 0x1000037a4      adr x0, 0x100038700                       ; int64_t arg1
│           0x1000037a8      nop
│           0x1000037ac      bl sym.func.100005908
│           0x1000037b0      bl sym.func.10000593c
│           ; CODE XREF from sym.func.100000750 @ 0x1000020f0(x)
│ ────────> 0x1000037b4      adr x0, 0x1000383b0                       ; int64_t arg1
│           0x1000037b8      nop
│           0x1000037bc      bl sym.func.100004310
│           0x1000037c0      bl sym.func.100004270
│           0x1000037c4      bl sym.func.1000042a4
│           ; CODE XREF from sym.func.100000750 @ 0x100002010(x)
│ ────────> 0x1000037c8      adr x0, 0x1000383b0                       ; int64_t arg1
│           0x1000037cc      nop
│           0x1000037d0      mov w1, w22
│           0x1000037d4      bl sym.func.100004310
│           0x1000037d8      bl sym.func.100004270
│           0x1000037dc      bl sym.func.1000042a4
│           ; CODE XREF from sym.func.100000750 @ 0x100000f4c(x)
│ ────────> 0x1000037e0      adr x0, 0x100038470                       ; int64_t arg1
│           0x1000037e4      nop
│           0x1000037e8      bl sym.func.100004270
│           0x1000037ec      bl sym.func.1000042a4
│           ; CODE XREFS from sym.func.100000750 @ 0x100000f80(x), 0x10000356c(x)
│ ────────> 0x1000037f0      adr x0, 0x100038320                       ; int64_t arg1
│           0x1000037f4      nop
│           0x1000037f8      bl sym.func.100004270
│           0x1000037fc      bl sym.func.1000042a4
│           ; CODE XREF from sym.func.100000750 @ 0x100003514(x)
│ ────────> 0x100003800      bl sym.func.100004f64
└           0x100003804      bl sym.func.100004f94
