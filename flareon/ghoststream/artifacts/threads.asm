697: fcn.140001860 (int64_t arg1);
`- args(rcx) vars(13:sp[0x18..0x220])
0x140001860      mov qword [var_10h], rbx
0x140001865      push rdi
0x140001866      sub rsp, 0x210
0x14000186d      mov rax, qword [section..data]
0x140001874      xor rax, rsp
0x140001877      mov qword [var_200h], rax
0x14000187f      movdqa xmm0, xmmword [0x140004690]
0x140001887      lea rdx, [var_54h]
0x14000188c      movdqa xmm3, xmmword [0x140004660]
0x140001894      mov rdi, rcx
0x140001897      movdqa xmm4, xmmword [0x140004670]
0x14000189f      mov ecx, 8
0x1400018a4      movdqa xmmword [var_40h], xmm0
0x1400018aa      mov r8d, dword [var_40h]
0x1400018af      mov dword [var_30h], 0xdeadbeef
0x1400018b7      nop word [rax + rax]
0x1400018c0      lea eax, [rcx - 8]
0x1400018c3      movd xmm0, r8d
0x1400018c8      movd xmm1, eax
0x1400018cc      lea rdx, [rdx + 0x10]
0x1400018d0      pshufd xmm1, xmm1, 0
0x1400018d5      lea eax, [rcx - 4]
0x1400018d8      paddd xmm1, xmm3
0x1400018dc      movd xmm2, eax
0x1400018e0      pshufd xmm2, xmm2, 0
0x1400018e5      lea eax, [rcx + 4]
0x1400018e8      paddd xmm2, xmm3
0x1400018ec      andps xmm1, xmm4
0x1400018ef      andps xmm2, xmm4
0x1400018f2      packuswb xmm1, xmm1
0x1400018f6      packuswb xmm2, xmm2
0x1400018fa      packuswb xmm1, xmm1
0x1400018fe      xorps xmm1, xmm0
0x140001901      packuswb xmm2, xmm2
0x140001905      movd dword [rdx - 0x14], xmm1
0x14000190a      movd xmm0, r8d
0x14000190f      xorps xmm2, xmm0
0x140001912      movd xmm1, ecx
0x140001916      movd dword [rdx - 0x10], xmm2
0x14000191b      add ecx, 0x10
0x14000191e      pshufd xmm1, xmm1, 0
0x140001923      paddd xmm1, xmm3
0x140001927      movd xmm2, eax
0x14000192b      pshufd xmm2, xmm2, 0
0x140001930      andps xmm1, xmm4
0x140001933      paddd xmm2, xmm3
0x140001937      packuswb xmm1, xmm1
0x14000193b      andps xmm2, xmm4
0x14000193e      movd xmm0, r8d
0x140001943      packuswb xmm2, xmm2
0x140001947      lea eax, [rcx - 8]
0x14000194a      packuswb xmm1, xmm1
0x14000194e      packuswb xmm2, xmm2
0x140001952      xorps xmm1, xmm0
0x140001955      movd dword [rdx - 0xc], xmm1
0x14000195a      movd xmm0, r8d
0x14000195f      xorps xmm2, xmm0
0x140001962      movd dword [rdx - 8], xmm2
0x140001967      cmp eax, 0x100
0x14000196c      jl 0x1400018c0
0x140001972      xor ebx, ebx
0x140001974      mov ecx, ebx
0x140001976      nop word [rax + rax]
0x140001980      mov eax, dword [var_30h]
0x140001984      lea r8, [var_50h]
0x140001989      imul r10d, ecx, 0x1337
0x140001990      xor r10d, eax
0x140001993      mov eax, 0x80808081
0x140001998      ror r10d, 0x1b
0x14000199c      mul r10d
0x14000199f      shr edx, 7
0x1400019a2      imul eax, edx, 0xff
0x1400019a8      mov edx, r10d
0x1400019ab      sub edx, eax
0x1400019ad      mov eax, dword [var_30h]
0x1400019b1      xor edx, eax
0x1400019b3      lea eax, [r10 + rcx]
0x1400019b7      mov dword [var_30h], edx
0x1400019bb      movzx edx, cl
0x1400019be      inc ecx
0x1400019c0      add r8, rdx
0x1400019c3      movzx edx, al
0x1400019c6      movzx eax, byte [rsp + rdx + 0x50]
0x1400019cb      movzx r9d, byte [r8]
0x1400019cf      mov byte [r8], al
0x1400019d2      mov byte [rsp + rdx + 0x50], r9b
0x1400019d7      cmp ecx, 0x2710
0x1400019dd      jl 0x140001980
0x1400019df      lea rcx, [var_150h]
0x1400019e7      call qword [sym.imp.KERNEL32.dll_GetSystemInfo]
0x1400019ed      mov eax, dword [var_30h]
0x1400019f1      add eax, dword [var_170h]
0x1400019f8      mov dword [var_30h], eax
0x1400019fc      mov ecx, dword [var_30h]
0x140001a00      movzx eax, word [var_150h]
0x140001a08      xor ecx, eax
0x140001a0a      mov dword [var_180h], 0x40
0x140001a15      mov dword [var_30h], ecx
0x140001a19      lea rcx, [var_180h]
0x140001a21      call qword [sym.imp.KERNEL32.dll_GlobalMemoryStatusEx]
0x140001a27      test eax, eax
0x140001a29      je 0x140001a62
0x140001a2b      mov rcx, qword [var_188h]
0x140001a33      movabs rax, 0x4f8b588e368f0847
0x140001a3d      mul rcx
0x140001a40      mov rax, rcx
0x140001a43      sub rax, rdx
0x140001a46      shr rax, 1
0x140001a49      add rax, rdx
0x140001a4c      shr rax, 0x10
0x140001a50      imul eax, eax, 0x186a0
0x140001a56      sub ecx, eax
0x140001a58      mov eax, dword [var_30h]
0x140001a5c      add eax, ecx
0x140001a5e      mov dword [var_30h], eax
0x140001a62      call qword [sym.imp.KERNEL32.dll_GetTickCount]
0x140001a68      lea r8, str.Telemetry__u__x
0x140001a6f      mov edx, 0x40
0x140001a74      mov r9d, eax
0x140001a77      lea rcx, [var_1c0h]
0x140001a7f      mov eax, dword [var_30h]
0x140001a83      mov dword [var_20h], eax
0x140001a87      call fcn.1400010d0
0x140001a8c      cmp dword [0x140006668], 1
0x140001a93      jne 0x140001ac0
0x140001a95      mov r8, qword [rdi + 0x10]
0x140001a99      mov rdx, qword [rdi + 8]
0x140001a9d      mov rcx, qword [rdi]
0x140001aa0      call fcn.140001130
0x140001aa5      mov r9, qword [rdi + 0x20]
0x140001aa9      mov r8, qword [rdi + 0x10]
0x140001aad      mov rdx, qword [rdi + 0x28]
0x140001ab1      mov rcx, qword [rdi + 0x18]
0x140001ab5      call fcn.1400010d0
0x140001aba      nop word [rax + rax]
0x140001ac0      movdqu xmm0, xmmword [var_50h]
0x140001ac6      mov ecx, 4
0x140001acb      xorps xmm0, xmmword [var_1c0h]
0x140001ad3      movdqu xmmword [var_1c0h], xmm0
0x140001adc      nop dword [rax]
0x140001ae0      movzx eax, byte [rsp + rbx + 0x60]
0x140001ae5      xor byte [rsp + rbx + 0x1d0], al
0x140001aec      lea rbx, [rbx + 1]
0x140001af0      sub rcx, 1
0x140001af4      jne 0x140001ae0
0x140001af6      xor eax, eax
0x140001af8      mov rcx, qword [var_200h]
0x140001b00      xor rcx, rsp
0x140001b03      call fcn.140002710
0x140001b08      mov rbx, qword [var_10h]
0x140001b10      add rsp, 0x210
0x140001b17      pop rdi
0x140001b18      ret
=====CA0
503: fcn.140001ca0 (int64_t arg1);
`- args(rcx) vars(9:sp[0x10..0x2f0])
0x140001ca0      push rbx
0x140001ca2      sub rsp, 0x2e0
0x140001ca9      mov rax, qword [section..data]
0x140001cb0      xor rax, rsp
0x140001cb3      mov qword [var_2d0h], rax
0x140001cbb      mov rbx, rcx
0x140001cbe      lea rdx, [var_30h]
0x140001cc3      mov ecx, 0x202
0x140001cc8      call qword [sym.imp.WS2_32.dll_WSAStartup]
0x140001cce      test eax, eax
0x140001cd0      je 0x140001cdc
0x140001cd2      mov eax, 1
0x140001cd7      jmp 0x140001e7e
0x140001cdc      mov qword [var_2f8h], rsi
0x140001ce4      mov edx, 1
0x140001ce9      mov esi, 2
0x140001cee      mov qword [var_300h], rdi
0x140001cf6      mov ecx, esi
0x140001cf8      mov r8d, 6
0x140001cfe      call qword [sym.imp.WS2_32.dll_socket]
0x140001d04      mov rdi, rax
0x140001d07      cmp rax, 0xffffffffffffffff
0x140001d0b      je 0x140001e63
0x140001d11      mov ecx, 0x7a69
0x140001d16      mov word [var_20h], si
0x140001d1b      call qword [sym.imp.WS2_32.dll_htons]
0x140001d21      lea r8, [var_24h]
0x140001d26      mov ecx, esi
0x140001d28      lea rdx, str.127.0.0.1
0x140001d2f      mov word [var_22h], ax
0x140001d34      call qword [sym.imp.WS2_32.dll_inet_pton]
0x140001d3a      mov r8d, 0x10
0x140001d40      lea rdx, [var_20h]
0x140001d45      mov rcx, rdi
0x140001d48      call qword [sym.imp.WS2_32.dll_bind]
0x140001d4e      cmp eax, 0xffffffff
0x140001d51      je 0x140001e5a
0x140001d57      mov edx, 0x7fffffff
0x140001d5c      mov rcx, rdi
0x140001d5f      call qword [sym.imp.WS2_32.dll_listen]
0x140001d65      cmp eax, 0xffffffff
0x140001d68      je 0x140001e5a
0x140001d6e      xor r8d, r8d
0x140001d71      xor edx, edx
0x140001d73      mov rcx, rdi
0x140001d76      call qword [sym.imp.WS2_32.dll_accept]
0x140001d7c      mov rsi, rax
0x140001d7f      cmp rax, 0xffffffffffffffff
0x140001d83      je 0x140001e47
0x140001d89      xor edx, edx
0x140001d8b      lea rcx, [var_1d0h]
0x140001d93      mov r8d, 0x100
0x140001d99      call sub.VCRUNTIME140.dll_memset
0x140001d9e      xor r9d, r9d
0x140001da1      lea rdx, [var_1d0h]
0x140001da9      mov r8d, 0xff
0x140001daf      mov rcx, rsi
0x140001db2      call qword [sym.imp.WS2_32.dll_recv]
0x140001db8      cmp eax, 8
0x140001dbb      jle 0x140001e3e
0x140001dc1      mov r8d, 9
0x140001dc7      lea rdx, str.OVERRIDE:
0x140001dce      lea rcx, [var_1d0h]
0x140001dd6      call qword [sym.imp.api_ms_win_crt_string_l1_1_0.dll_strncmp]
0x140001ddc      test eax, eax
0x140001dde      jne 0x140001e3e
0x140001de0      mov rdx, qword [rbx + 8]
0x140001de4      lea r8, [var_1d9h]
0x140001dec      mov rcx, qword [rbx]
0x140001def      mov r9, 0xffffffffffffffff
0x140001df6      call qword [sym.imp.api_ms_win_crt_string_l1_1_0.dll_strncpy_s]
0x140001dfc      mov rcx, qword [rbx]
0x140001dff      xor edx, edx
0x140001e01      mov rax, 0xffffffffffffffff
0x140001e08      inc rax
0x140001e0b      cmp byte [rcx + rax], dl
0x140001e0e      jne 0x140001e08
0x140001e10      test rax, rax
0x140001e13      je 0x140001e3e
0x140001e15      xor byte [rcx + rdx], 0x33
0x140001e19      mov rax, qword [rbx]
0x140001e1c      add byte [rax + rdx], 5
0x140001e20      mov rax, 0xffffffffffffffff
0x140001e27      mov rcx, qword [rbx]
0x140001e2a      inc rdx
0x140001e2d      nop dword [rax]
0x140001e30      inc rax
0x140001e33      cmp byte [rcx + rax], 0
0x140001e37      jne 0x140001e30
0x140001e39      cmp rdx, rax
0x140001e3c      jb 0x140001e15
0x140001e3e      mov rcx, rsi
0x140001e41      call qword [sym.imp.WS2_32.dll_closesocket]
0x140001e47      mov rcx, rdi
0x140001e4a      call qword [sym.imp.WS2_32.dll_closesocket]
0x140001e50      call qword [sym.imp.WS2_32.dll_WSACleanup]
0x140001e56      xor eax, eax
0x140001e58      jmp 0x140001e6e
0x140001e5a      mov rcx, rdi
0x140001e5d      call qword [sym.imp.WS2_32.dll_closesocket]
0x140001e63      call qword [sym.imp.WS2_32.dll_WSACleanup]
0x140001e69      mov eax, 1
0x140001e6e      mov rsi, qword [var_2f8h]
0x140001e76      mov rdi, qword [var_300h]
0x140001e7e      mov rcx, qword [var_2d0h]
0x140001e86      xor rcx, rsp
0x140001e89      call fcn.140002710
0x140001e8e      add rsp, 0x2e0
0x140001e95      pop rbx
0x140001e96      ret
=====B20
384: fcn.140001b20 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4);
`- args(rcx, rdx, r8, r9) vars(3:sp[0x10..0x20])
0x140001b20      mov qword [var_8h], rbx
0x140001b25      mov qword [var_10h], rbp
0x140001b2a      mov qword [var_18h], rsi
0x140001b2f      push rdi
0x140001b30      sub rsp, 0x20
0x140001b34      mov ebx, edx
0x140001b36      cmp edx, 0x81
0x140001b3c      mov edx, 0xffffffeb
0x140001b41      mov rsi, r9
0x140001b44      mov rbp, r8
0x140001b47      mov rdi, rcx
0x140001b4a      jne 0x140001b5f
0x140001b4c      mov r8, qword [r9]
0x140001b4f      call qword [sym.imp.USER32.dll_SetWindowLongPtrW]
0x140001b55      mov eax, 1
0x140001b5a      jmp 0x140001c8b
0x140001b5f      call qword [sym.imp.USER32.dll_GetWindowLongPtrW]
0x140001b65      mov r9, rax
0x140001b68      xor r8d, r8d
0x140001b6b      mov eax, r8d
0x140001b6e      test r9, r9
0x140001b71      je 0x140001b7b
0x140001b73      mov eax, dword [r9 + 0x20]
0x140001b77      mov dword [r9 + 0x20], ebx
0x140001b7b      movzx r11d, bl
0x140001b7f      xor r11b, al
0x140001b82      cmp ebx, 1
0x140001b85      je 0x140001b9d
0x140001b87      mov r9, rsi
0x140001b8a      mov r8, rbp
0x140001b8d      mov edx, ebx
0x140001b8f      mov rcx, rdi
0x140001b92      call qword [sym.imp.USER32.dll_DefWindowProcW]
0x140001b98      jmp 0x140001c8b
0x140001b9d      test r9, r9
0x140001ba0      je 0x140001c84
0x140001ba6      mov rax, qword [r9 + 0x18]
0x140001baa      cmp qword [r9 + 0x10], rax
0x140001bae      jbe 0x140001c34
0x140001bb4      mov rdx, qword [r9]
0x140001bb7      mov rax, 0xffffffffffffffff
0x140001bbe      nop
0x140001bc0      inc rax
0x140001bc3      cmp byte [rdx + rax], r8b
0x140001bc7      jne 0x140001bc0
0x140001bc9      test rax, rax
0x140001bcc      je 0x140001bf7
0x140001bce      mov r10, r8
0x140001bd1      xor byte [r10 + rdx], r11b
0x140001bd5      lea r10, [r10 + 1]
0x140001bd9      mov rdx, qword [r9]
0x140001bdc      inc r8d
0x140001bdf      mov rax, 0xffffffffffffffff
0x140001be6      inc rax
0x140001be9      cmp byte [rdx + rax], 0
0x140001bed      jne 0x140001be6
0x140001bef      movsxd rcx, r8d
0x140001bf2      cmp rcx, rax
0x140001bf5      jb 0x140001bd1
0x140001bf7      xor byte [rdx], 0x8b
0x140001bfa      xor byte [rdx + 1], 0x8f
0x140001bfe      xor byte [rdx + 2], 0x92
0x140001c02      xor byte [rdx + 3], 0x85
0x140001c06      xor byte [rdx + 4], 0x88
0x140001c0a      xor byte [rdx + 5], 0x96
0x140001c0e      xor byte [rdx + 6], 0x98
0x140001c12      xor byte [rdx + 7], 0x9b
0x140001c16      xor byte [rdx + 8], 0x94
0x140001c1a      xor byte [rdx + 9], 0x8b
0x140001c1e      xor byte [rdx + 0xa], 0x95
0x140001c22      xor byte [rdx + 0xb], 0xe6
0x140001c26      xor byte [rdx + 0xc], 0xed
0x140001c2a      xor byte [rdx + 0xd], 0xf0
0x140001c2e      xor byte [rdx + 0xe], 0xe7
0x140001c32      jmp 0x140001c84
0x140001c34      mov rcx, qword [r9 + 8]
0x140001c38      xor byte [rcx], 0x8b
0x140001c3b      xor byte [rcx + 1], 0x8f
0x140001c3f      xor byte [rcx + 2], 0x92
0x140001c43      xor byte [rcx + 3], 0x85
0x140001c47      xor byte [rcx + 4], 0x88
0x140001c4b      xor byte [rcx + 5], 0x96
0x140001c4f      xor byte [rcx + 6], 0x98
0x140001c53      xor byte [rcx + 7], 0x9b
0x140001c57      xor byte [rcx + 8], 0x94
0x140001c5b      xor byte [rcx + 9], 0x8b
0x140001c5f      xor byte [rcx + 0xa], 0x95
0x140001c63      xor byte [rcx + 0xb], 0xe6
0x140001c67      xor byte [rcx + 0xc], 0xed
0x140001c6b      xor byte [rcx + 0xd], 0xf0
0x140001c6f      xor byte [rcx + 0xe], 0xe7
0x140001c73      lea rcx, str.SESSION_TOKEN_CACHE
0x140001c7a      mov rdx, qword [r9 + 8]
0x140001c7e      call qword [sym.imp.KERNEL32.dll_SetEnvironmentVariableA]
0x140001c84      mov rax, 0xffffffffffffffff
0x140001c8b      mov rbx, qword [var_8h]
0x140001c90      mov rbp, qword [var_10h]
0x140001c95      mov rsi, qword [var_18h]
0x140001c9a      add rsp, 0x20
0x140001c9e      pop rdi
0x140001c9f      ret
