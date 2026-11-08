            ; CALL XREF from entry0 @ 0x140001bfb(x)
┌ 1736: int main (int argc, char **argv, char **envp);
│ afv: vars(38:sp[0x10..0x420])
│           0x140001070      push rbp
│           0x140001072      push rbx
│           0x140001073      push r15
│           0x140001075      lea rbp, [rsp - 0x300]
│           0x14000107d      sub rsp, 0x400
│           0x140001084      mov rax, qword [section..data]            ; [0x140005000:8]=0x2b992ddfa232 ; "2\xa2\xdf-\x99+"
│           0x14000108b      xor rax, rsp
│           0x14000108e      mov qword [var_2d0h], rax
│           0x140001095      lea rcx, str._Partner__Process_started._n ; 0x1400032e0 ; "[Partner] Process started.\n" ; int64_t arg1
│           0x14000109c      call fcn.140001010
│           0x1400010a1      xor edx, edx                              ; int c
│           0x1400010a3      lea rcx, [lpBuffer]                       ; void *s
│           0x1400010aa      mov r8d, 0x100                            ; 256 ; size_t n
│           0x1400010b0      call sub.VCRUNTIME140.dll_memset          ; void *memset(void *s, int c, size_t n)
│           0x1400010b5      xor r15d, r15d
│           0x1400010b8      lea rcx, str..pipeFlareChallenge          ; 0x140003400 ; "\\.\pipe\FlareChallenge" ; LPCSTR lpFileName
│           0x1400010bf      mov qword [hTemplateFile], r15            ; HANDLE hTemplateFile
│           0x1400010c4      xor r9d, r9d                              ; LPSECURITY_ATTRIBUTES lpSecurityAttributes
│           0x1400010c7      mov dword [dwFlagsAndAttributes], r15d    ; DWORD dwFlagsAndAttributes
│           0x1400010cc      xor r8d, r8d                              ; DWORD dwShareMode
│           0x1400010cf      mov edx, 0x80000000                       ; DWORD dwDesiredAccess
│           0x1400010d4      mov dword [dwCreationDisposition], 3      ; DWORD dwCreationDisposition
│           0x1400010dc      call qword [sym.imp.KERNEL32.dll_CreateFileA] ; [0x140003040:8]=0x3e12 reloc.KERNEL32.dll_CreateFileA ; HANDLE CreateFileA(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)
│           0x1400010e2      mov rbx, rax
│           0x1400010e5      cmp rax, 0xffffffffffffffff
│       ┌─< 0x1400010e9      jne 0x14000114e
│       │   0x1400010eb      nop dword [rax + rax]
│       │   ; CODE XREF from main @ 0x14000114c(x)
│      ┌──> 0x1400010f0      call qword [sym.imp.KERNEL32.dll_GetLastError] ; [0x140003038:8]=0x3e02 reloc.KERNEL32.dll_GetLastError ; DWORD GetLastError(void)
│      ╎│   0x1400010f6      cmp eax, 0xe7                             ; 231
│     ┌───< 0x1400010fb      jne 0x1400016ce
│     │╎│   0x140001101      mov edx, 0x1388                           ; DWORD nTimeOut
│     │╎│   0x140001106      lea rcx, str..pipeFlareChallenge          ; 0x140003400 ; "\\.\pipe\FlareChallenge" ; LPCSTR lpNamedPipeName
│     │╎│   0x14000110d      call qword [sym.imp.KERNEL32.dll_WaitNamedPipeA] ; [0x140003008:8]=0x3d9c reloc.KERNEL32.dll_WaitNamedPipeA ; BOOL WaitNamedPipeA(LPCSTR lpNamedPipeName, DWORD nTimeOut)
│     │╎│   0x140001113      test eax, eax
│    ┌────< 0x140001115      je 0x1400016bb
│    ││╎│   0x14000111b      mov qword [hTemplateFile], r15            ; HANDLE hTemplateFile
│    ││╎│   0x140001120      lea rcx, str..pipeFlareChallenge          ; 0x140003400 ; "\\.\pipe\FlareChallenge" ; LPCSTR lpFileName
│    ││╎│   0x140001127      mov dword [dwFlagsAndAttributes], r15d    ; DWORD dwFlagsAndAttributes
│    ││╎│   0x14000112c      xor r9d, r9d                              ; LPSECURITY_ATTRIBUTES lpSecurityAttributes
│    ││╎│   0x14000112f      xor r8d, r8d                              ; DWORD dwShareMode
│    ││╎│   0x140001132      mov dword [dwCreationDisposition], 3      ; DWORD dwCreationDisposition
│    ││╎│   0x14000113a      mov edx, 0x80000000                       ; DWORD dwDesiredAccess
│    ││╎│   0x14000113f      call qword [sym.imp.KERNEL32.dll_CreateFileA] ; [0x140003040:8]=0x3e12 reloc.KERNEL32.dll_CreateFileA ; HANDLE CreateFileA(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)
│    ││╎│   0x140001145      mov rbx, rax
│    ││╎│   0x140001148      cmp rax, 0xffffffffffffffff
│    ││└──< 0x14000114c      je 0x1400010f0
│    ││ │   ; CODE XREF from main @ 0x1400010e9(x)
│    ││ └─> 0x14000114e      lea rcx, str.ucrtbase.dll                 ; 0x140003350 ; "ucrtbase.dll" ; LPCSTR lpModuleName
│    ││     0x140001155      mov qword [var_428h], rdi                 ; [0x428:8]=-1 ; 1064
│    ││     0x14000115d      call qword [sym.imp.KERNEL32.dll_GetModuleHandleA] ; [0x140003028:8]=0x3de6 reloc.KERNEL32.dll_GetModuleHandleA ; HMODULE GetModuleHandleA(LPCSTR lpModuleName)
│    ││     0x140001163      mov rcx, rax                              ; HMODULE hModule
│    ││     0x140001166      lea rdx, [0x140003360]                    ; "strlen" ; LPCSTR lpProcName
│    ││     0x14000116d      call qword [sym.imp.KERNEL32.dll_GetProcAddress] ; [0x140003050:8]=0x3e2e reloc.KERNEL32.dll_GetProcAddress ; ".>" ; FARPROC GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
│    ││     0x140001173      lea r9, [lpNumberOfBytesRead]             ; LPDWORD lpNumberOfBytesRead
│    ││     0x140001178      mov qword [dwCreationDisposition], r15    ; LPOVERLAPPED lpOverlapped
│    ││     0x14000117d      mov r8d, 0xff                             ; 255 ; DWORD nNumberOfBytesToRead
│    ││     0x140001183      lea rdx, [lpBuffer]                       ; LPVOID lpBuffer
│    ││     0x14000118a      mov rcx, rbx                              ; HANDLE hFile
│    ││     0x14000118d      mov rdi, rax
│    ││     0x140001190      call qword [sym.imp.KERNEL32.dll_ReadFile] ; [0x140003000:8]=0x3d90 reloc.KERNEL32.dll_ReadFile ; BOOL ReadFile(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)
│    ││     0x140001196      test eax, eax
│    ││ ┌─< 0x140001198      je 0x1400011de
│    ││ │   0x14000119a      mov eax, dword [lpNumberOfBytesRead]
│    ││ │   0x14000119e      test eax, eax
│    ││┌──< 0x1400011a0      je 0x1400011de
│    ││││   0x1400011a2      cmp rax, 0x100                            ; 256
│   ┌─────< 0x1400011a8      jae 0x140001732
│   │││││   0x1400011ae      lea rdx, [0x140003368]                    ; "\r\n" ; const char *s2
│   │││││   0x1400011b5      mov byte [rbp + rax + 0x1d0], r15b
│   │││││   0x1400011bd      lea rcx, [lpBuffer]                       ; const char *s1
│   │││││   0x1400011c4      call qword [sym.imp.api_ms_win_crt_string_l1_1_0.dll_strcspn] ; [0x140003218:8]=0x3ef6 reloc.api_ms_win_crt_string_l1_1_0.dll_strcspn ; size_t strcspn(const char *s1, const char *s2)
│   │││││   0x1400011ca      cmp rax, 0x100                            ; 256
│  ┌──────< 0x1400011d0      jae 0x140001732
│  ││││││   0x1400011d6      mov byte [rbp + rax + 0x1d0], r15b
│  ││││││   ; CODE XREFS from main @ 0x140001198(x), 0x1400011a0(x)
│  ││││└└─> 0x1400011de      mov qword [var_420h], rsi                 ; [0x420:8]=-1 ; 1056
│  ││││     0x1400011e6      mov rcx, rbx                              ; HANDLE hObject
│  ││││     0x1400011e9      mov qword [var_430h], r12                 ; [0x430:8]=-1 ; 1072
│  ││││     0x1400011f1      mov qword [var_3f8h], r13                 ; [0x3f8:8]=-1 ; 1016
│  ││││     0x1400011f9      mov qword [var_3f0h], r14                 ; [0x3f0:8]=-1 ; 1008
│  ││││     0x140001201      movaps xmmword [var_3e0h], xmm6
│  ││││     0x140001209      call qword [sym.imp.KERNEL32.dll_CloseHandle] ; [0x140003048:8]=0x3e20 reloc.KERNEL32.dll_CloseHandle ; " >" ; BOOL CloseHandle(HANDLE hObject)
│  ││││     0x14000120f      xor edx, edx                              ; int c
│  ││││     0x140001211      mov dword [var_40h], 0x35875c96           ; [0x35875c96:4]=-1
│  ││││     0x140001219      mov r8d, 0xda                             ; 218 ; size_t n
│  ││││     0x14000121f      mov dword [var_44h], 0x8b397ad7           ; [0x8b397ad7:4]=-1
│  ││││     0x140001227      lea rcx, [s]                              ; void *s
│  ││││     0x14000122e      mov dword [var_48h], 0x286d0475           ; [0x286d0475:4]=-1
│  ││││     0x140001236      mov dword [var_4ch], 0xc85856bb           ; [0xc85856bb:4]=-1
│  ││││     0x14000123e      mov dword [var_50h], 0xe1daee35           ; [0xe1daee35:4]=-1
│  ││││     0x140001246      mov dword [var_54h], 0x37a956a4           ; [0x37a956a4:4]=-1
│  ││││     0x14000124e      mov dword [var_58h], 0xf9561581           ; [0xf9561581:4]=-1
│  ││││     0x140001256      mov dword [var_5ch], 0xd340a27            ; '\'\n4\r'
│  ││││                                                                ; [0xd340a27:4]=-1
│  ││││     0x14000125e      mov dword [var_60h], 0x262c82ee           ; [0x262c82ee:4]=-1
│  ││││     0x140001266      mov word [var_64h], 0xf8a5                ; [0xf8a5:2]=0xffff
│  ││││     0x14000126d      call sub.VCRUNTIME140.dll_memset          ; void *memset(void *s, int c, size_t n)
│  ││││     0x140001272      mov eax, dword [var_60h]
│  ││││     0x140001276      lea rcx, [lpBuffer]                       ; const char *s
│  ││││     0x14000127d      movups xmm0, xmmword [var_40h]
│  ││││     0x140001282      mov dword [var_f0h], eax
│  ││││     0x140001288      mov esi, 0xdeadbeef
│  ││││     0x14000128d      movups xmm1, xmmword [var_50h]
│  ││││     0x140001292      movzx eax, word [var_64h]
│  ││││     0x140001297      xor rdi, rsi
│  ││││     0x14000129a      movups xmmword [s1], xmm0
│  ││││     0x1400012a1      movups xmmword [var_e0h], xmm1
│  ││││     0x1400012a8      mov word [var_f4h], ax
│  ││││     0x1400012af      mov qword [0x140005678], rdi              ; [0x140005678:8]=0
│  ││││     0x1400012b6      call qword [sym.imp.api_ms_win_crt_string_l1_1_0.dll_strlen] ; [0x140003210:8]=0x3f24 reloc.api_ms_win_crt_string_l1_1_0.dll_strlen ; "$?" ; size_t strlen(const char *s)
│  ││││     0x1400012bc      mov r14, qword [0x140005678]              ; [0x140005678:8]=0
│  ││││     0x1400012c3      mov rbx, rax
│  ││││     0x1400012c6      test eax, eax
│  ││││ ┌─< 0x1400012c8      jle 0x14000140a
│  ││││ │   0x1400012ce      movdqa xmm2, xmmword [0x140003420]        ; [0x140003420:16]=-1
│  ││││ │   0x1400012d6      lea rdx, [var_74h]
│  ││││ │   0x1400012db      movdqa xmm3, xmmword [0x140003430]        ; [0x140003430:16]=-1
│  ││││ │   0x1400012e3      add r14, 0x10203040
│  ││││ │   0x1400012ea      mov r8d, r15d
│  ││││ │   0x1400012ed      mov ecx, 8
│  ││││ │   0x1400012f2      nop dword [rax]
│  ││││ │   0x1400012f6      nop word [rax + rax]
│  ││││ │   ; CODE XREF from main @ 0x14000138c(x)
│  ││││┌──> 0x140001300      lea eax, [rcx - 8]
│  ││││╎│   0x140001303      movd xmm0, eax
│  ││││╎│   0x140001307      lea rdx, [rdx + 0x10]
│  ││││╎│   0x14000130b      pshufd xmm0, xmm0, 0
│  ││││╎│   0x140001310      lea eax, [rcx - 4]
│  ││││╎│   0x140001313      paddd xmm0, xmm2
│  ││││╎│   0x140001317      movd xmm1, eax
│  ││││╎│   0x14000131b      pshufd xmm1, xmm1, 0
│  ││││╎│   0x140001320      lea eax, [rcx + 4]
│  ││││╎│   0x140001323      paddd xmm1, xmm2
│  ││││╎│   0x140001327      andps xmm0, xmm3
│  ││││╎│   0x14000132a      andps xmm1, xmm3
│  ││││╎│   0x14000132d      packuswb xmm0, xmm0
│  ││││╎│   0x140001331      packuswb xmm1, xmm1
│  ││││╎│   0x140001335      packuswb xmm0, xmm0
│  ││││╎│   0x140001339      movd dword [rdx - 0x14], xmm0
│  ││││╎│   0x14000133e      packuswb xmm1, xmm1
│  ││││╎│   0x140001342      movd dword [rdx - 0x10], xmm1
│  ││││╎│   0x140001347      movd xmm0, ecx
│  ││││╎│   0x14000134b      add ecx, 0x10                             ; 16
│  ││││╎│   0x14000134e      pshufd xmm0, xmm0, 0
│  ││││╎│   0x140001353      paddd xmm0, xmm2
│  ││││╎│   0x140001357      movd xmm1, eax
│  ││││╎│   0x14000135b      pshufd xmm1, xmm1, 0
│  ││││╎│   0x140001360      andps xmm0, xmm3
│  ││││╎│   0x140001363      paddd xmm1, xmm2
│  ││││╎│   0x140001367      packuswb xmm0, xmm0
│  ││││╎│   0x14000136b      andps xmm1, xmm3
│  ││││╎│   0x14000136e      packuswb xmm0, xmm0
│  ││││╎│   0x140001372      movd dword [rdx - 0xc], xmm0
│  ││││╎│   0x140001377      lea eax, [rcx - 8]
│  ││││╎│   0x14000137a      packuswb xmm1, xmm1
│  ││││╎│   0x14000137e      packuswb xmm1, xmm1
│  ││││╎│   0x140001382      movd dword [rdx - 8], xmm1
│  ││││╎│   0x140001387      cmp eax, 0x100                            ; 256
│  ││││└──< 0x14000138c      jl 0x140001300
│  ││││ │   0x140001392      xor r14, 0xbadf00d
│  ││││ │   0x140001399      lea r10, [var_sp_70h]
│  ││││ │   0x14000139e      mov r9d, r15d
│  ││││ │   ; CODE XREF from main @ 0x1400013f3(x)
│  ││││┌──> 0x1400013a1      movzx r11d, byte [r10]
│  ││││╎│   0x1400013a5      mov eax, r9d
│  ││││╎│   0x1400013a8      cdq
│  ││││╎│   0x1400013a9      idiv ebx
│  ││││╎│   0x1400013ab      movsxd rax, edx
│  ││││╎│   0x1400013ae      movzx ecx, byte [rbp + rax + 0x1d0]
│  ││││╎│   0x1400013b6      add r8d, ecx
│  ││││╎│   0x1400013b9      add r8d, r11d
│  ││││╎│   0x1400013bc      and r8d, 0x800000ff
│ ┌───────< 0x1400013c3      jge 0x1400013d2
│ │││││╎│   0x1400013c5      dec r8d
│ │││││╎│   0x1400013c8      or r8d, 0xffffff00                        ; 4294967040
│ │││││╎│   0x1400013cf      inc r8d
│ │││││╎│   ; CODE XREF from main @ 0x1400013c3(x)
│ └───────> 0x1400013d2      movsxd rax, r8d
│  ││││╎│   0x1400013d5      lea rcx, [var_sp_70h]
│  ││││╎│   0x1400013da      add rcx, rax
│  ││││╎│   0x1400013dd      inc r9d
│  ││││╎│   0x1400013e0      movzx eax, byte [rcx]
│  ││││╎│   0x1400013e3      mov byte [r10], al
│  ││││╎│   0x1400013e6      inc r10
│  ││││╎│   0x1400013e9      mov byte [rcx], r11b
│  ││││╎│   0x1400013ec      cmp r9d, 0x100                            ; 256
│  ││││└──< 0x1400013f3      jl 0x1400013a1
│  ││││ │   0x1400013f5      xor r14, 0xbadf00d
│  ││││ │   0x1400013fc      sub r14, 0x10203040
│  ││││ │   0x140001403      mov qword [0x140005678], r14              ; [0x140005678:8]=0
│  ││││ │   ; CODE XREF from main @ 0x1400012c8(x)
│  ││││ └─> 0x14000140a      xor r14, rsi
│  ││││     0x14000140d      lea r9, [lpflOldProtect]                  ; PDWORD lpflOldProtect
│  ││││     0x140001412      mov rcx, r14                              ; LPVOID lpAddress
│  ││││     0x140001415      mov edx, 0x17                             ; 23 ; SIZE_T dwSize
│  ││││     0x14000141a      mov r8d, 0x40                             ; '@' ; 64 ; DWORD flNewProtect
│  ││││     0x140001420      call qword [sym.imp.KERNEL32.dll_VirtualProtect] ; [0x140003010:8]=0x3dae reloc.KERNEL32.dll_VirtualProtect ; BOOL VirtualProtect(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect)
│  ││││     0x140001426      movups xmm6, xmmword [r14]
│  ││││     0x14000142a      mov ebx, dword [r14 + 0x10]
│  ││││     0x14000142e      lea rdx, [lpString]                       ; LPSTR lpBuffer
│  ││││     0x140001435      movzx edi, word [r14 + 0x14]
│  ││││     0x14000143a      lea rcx, str.COMPUTERNAME                 ; 0x140003370 ; "COMPUTERNAME" ; LPCSTR lpName
│  ││││     0x140001441      movzx esi, byte [r14 + 0x16]
│  ││││     0x140001446      xorps xmm0, xmm0
│  ││││     0x140001449      mov dword [r14], 0x1304c031               ; [0x1304c031:4]=-1
│  ││││     0x140001450      mov r8d, 0x40                             ; '@' ; 64 ; DWORD nSize
│  ││││     0x140001456      mov dword [r14 + 4], 0x17501b2            ; [0x17501b2:4]=-1
│  ││││     0x14000145e      mov dword [r14 + 8], 0x301100e8           ; [0x301100e8:4]=-1
│  ││││     0x140001466      mov dword [r14 + 0xc], 0x48c2fe01         ; [0x48c2fe01:4]=-1
│  ││││     0x14000146e      mov dword [r14 + 0x10], 0x2138c1ff        ; [0x2138c1ff:4]=-1
│  ││││     0x140001476      mov word [r14 + 0x14], 0xf375             ; [0xf375:2]=0xffff
│  ││││     0x14000147d      mov byte [r14 + 0x16], 0xc3               ; [0xc3:1]=255 ; 195
│  ││││     0x140001482      movups xmmword [lpString], xmm0
│  ││││     0x140001489      movups xmmword [var_a0h], xmm0
│  ││││     0x140001490      movups xmmword [var_b0h], xmm0
│  ││││     0x140001497      movups xmmword [var_c0h], xmm0
│  ││││     0x14000149e      call qword [sym.imp.KERNEL32.dll_GetEnvironmentVariableA] ; [0x140003020:8]=0x3dcc reloc.KERNEL32.dll_GetEnvironmentVariableA ; DWORD GetEnvironmentVariableA(LPCSTR lpName, LPSTR lpBuffer, DWORD nSize)
│  ││││     0x1400014a4      lea rcx, [lpString]                       ; LPCSTR lpString
│  ││││     0x1400014ab      call qword [sym.imp.KERNEL32.dll_lstrlenA] ; [0x140003018:8]=0x3dc0 reloc.KERNEL32.dll_lstrlenA ; int lstrlenA(LPCSTR lpString)
│  ││││     0x1400014b1      call qword [sym.imp.KERNEL32.dll_IsDebuggerPresent] ; [0x140003060:8]=0x3e50 reloc.KERNEL32.dll_IsDebuggerPresent ; "P>" ; BOOL IsDebuggerPresent(void)
│  ││││     0x1400014b7      call qword [sym.imp.KERNEL32.dll_GetTickCount] ; [0x140003058:8]=0x3e40 reloc.KERNEL32.dll_GetTickCount ; "@>" ; DWORD GetTickCount(void)
│  ││││     0x1400014bd      movzx eax, word [0x140003390]             ; [0x140003390:2]=0x6173 ; "sa"
│  ││││     0x1400014c4      lea r13, str.Bxs_bv_u_TpcnolVjN           ; 0x140005078 ; "Bxs]bv`^u)TpcnolVjN"
│  ││││     0x1400014cb      movups xmm0, xmmword [str.Wingardium_Leviosa] ; [0x140003380:16]=-1 ; "Wingardium Leviosa"
│  ││││     0x1400014d2      mov word [var_80h], ax
│  ││││     0x1400014d9      mov rcx, r13                              ; const char *s
│  ││││     0x1400014dc      movzx eax, byte [0x140003392]             ; [0x140003392:1]=0
│  ││││     0x1400014e3      mov byte [var_82h], al
│  ││││     0x1400014e9      movups xmmword [var_70h], xmm0
│  ││││     0x1400014ed      call qword [sym.imp.api_ms_win_crt_string_l1_1_0.dll_strlen] ; [0x140003210:8]=0x3f24 reloc.api_ms_win_crt_string_l1_1_0.dll_strlen ; "$?" ; size_t strlen(const char *s)
│  ││││     0x1400014f3      lea rcx, [var_70h]                        ; const char *s
│  ││││     0x1400014f7      call qword [sym.imp.api_ms_win_crt_string_l1_1_0.dll_strlen] ; [0x140003210:8]=0x3f24 reloc.api_ms_win_crt_string_l1_1_0.dll_strlen ; "$?" ; size_t strlen(const char *s)
│  ││││     0x1400014fd      movups xmmword [r14], xmm6
│  ││││     0x140001501      mov dword [r14 + 0x10], ebx
│  ││││     0x140001505      lea r9, [lpflOldProtect]                  ; PDWORD lpflOldProtect
│  ││││     0x14000150a      mov word [r14 + 0x14], di
│  ││││     0x14000150f      mov edx, 0x17                             ; 23 ; SIZE_T dwSize
│  ││││     0x140001514      mov byte [r14 + 0x16], sil
│  ││││     0x140001518      mov rcx, r14                              ; LPVOID lpAddress
│  ││││     0x14000151b      mov r8d, dword [lpflOldProtect]           ; DWORD flNewProtect
│  ││││     0x140001520      mov r12, rax
│  ││││     0x140001523      call qword [sym.imp.KERNEL32.dll_VirtualProtect] ; [0x140003010:8]=0x3dae reloc.KERNEL32.dll_VirtualProtect ; BOOL VirtualProtect(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect)
│  ││││     0x140001529      movaps xmm6, xmmword [var_3e0h]
│  ││││     0x140001531      test r12d, r12d
│  ││││ ┌─< 0x140001534      jle 0x14000166d
│  ││││ │   0x14000153a      mov ecx, r15d
│  ││││ │   0x14000153d      mov r10, 0xffffffffffffffff
│  ││││ │   ; CODE XREF from main @ 0x14000154b(x)
│  ││││┌──> 0x140001544      inc r10
│  ││││╎│   0x140001547      cmp byte [r10 + r13], cl
│  ││││└──< 0x14000154b      jne 0x140001544
│  ││││ │   0x14000154d      movzx edi, r12b
│  ││││ │   0x140001551      lea r11, [var_d1h]
│  ││││ │   0x140001558      mov rsi, r15
│  ││││ │   0x14000155b      mov r14d, 0x13                            ; 19
│  ││││ │   ; CODE XREF from main @ 0x140001660(x)
│  ││││┌──> 0x140001561      lea r9d, [rdi + r15]
│  ││││╎│   0x140001565      and r9d, 0x800000ff
│ ┌───────< 0x14000156c      jge 0x14000157b
│ │││││╎│   0x14000156e      dec r9d
│ │││││╎│   0x140001571      or r9d, 0xffffff00                        ; 4294967040
│ │││││╎│   0x140001578      inc r9d
│ │││││╎│   ; CODE XREF from main @ 0x14000156c(x)
│ └───────> 0x14000157b      movsxd rax, r9d
│  ││││╎│   0x14000157e      lea rdx, [var_sp_70h]
│  ││││╎│   0x140001583      add rdx, rax
│  ││││╎│   0x140001586      movzx ebx, byte [rdx]
│  ││││╎│   0x140001589      lea r8d, [rcx + rbx]
│  ││││╎│   0x14000158d      and r8d, 0x800000ff
│ ┌───────< 0x140001594      jge 0x1400015a3
│ │││││╎│   0x140001596      dec r8d
│ │││││╎│   0x140001599      or r8d, 0xffffff00                        ; 4294967040
│ │││││╎│   0x1400015a0      inc r8d
│ │││││╎│   ; CODE XREF from main @ 0x140001594(x)
│ └───────> 0x1400015a3      movsxd rax, r8d
│  ││││╎│   0x1400015a6      lea rcx, [var_sp_70h]
│  ││││╎│   0x1400015ab      add rcx, rax
│  ││││╎│   0x1400015ae      movzx eax, byte [rcx]
│  ││││╎│   0x1400015b1      mov byte [rdx], al
│  ││││╎│   0x1400015b3      mov rax, rsi
│  ││││╎│   0x1400015b6      mov byte [rcx], bl
│  ││││╎│   0x1400015b8      movzx ecx, byte [rdx]
│  ││││╎│   0x1400015bb      xor edx, edx
│  ││││╎│   0x1400015bd      div r10
│  ││││╎│   0x1400015c0      add rcx, rbx
│  ││││╎│   0x1400015c3      movzx eax, dil
│  ││││╎│   0x1400015c7      add al, byte [r11 - 1]
│  ││││╎│   0x1400015cb      movzx ecx, cl
│  ││││╎│   0x1400015ce      movzx ecx, byte [rsp + rcx + 0x70]
│  ││││╎│   0x1400015d3      xor cl, byte [rdx + r13]
│  ││││╎│   0x1400015d7      xor cl, al
│  ││││╎│   0x1400015d9      lea eax, [r9 + rdi]
│  ││││╎│   0x1400015dd      mov byte [r11 - 1], cl
│  ││││╎│   0x1400015e1      and eax, 0x800000ff
│ ┌───────< 0x1400015e6      jge 0x1400015f1
│ │││││╎│   0x1400015e8      dec eax
│ │││││╎│   0x1400015ea      or eax, 0xffffff00                        ; 4294967040
│ │││││╎│   0x1400015ef      inc eax
│ │││││╎│   ; CODE XREF from main @ 0x1400015e6(x)
│ └───────> 0x1400015f1      movsxd r15, eax
│  ││││╎│   0x1400015f4      lea r9, [var_sp_70h]
│  ││││╎│   0x1400015f9      movzx ebx, byte [r9 + r15]
│  ││││╎│   0x1400015fe      lea ecx, [r8 + rbx]
│  ││││╎│   0x140001602      and ecx, 0x800000ff
│ ┌───────< 0x140001608      jge 0x140001614
│ │││││╎│   0x14000160a      dec ecx
│ │││││╎│   0x14000160c      or ecx, 0xffffff00                        ; 4294967040
│ │││││╎│   0x140001612      inc ecx
│ │││││╎│   ; CODE XREF from main @ 0x140001608(x)
│ └───────> 0x140001614      movsxd rax, ecx
│  ││││╎│   0x140001617      lea rdx, [var_sp_70h]
│  ││││╎│   0x14000161c      add rdx, rax
│  ││││╎│   0x14000161f      movzx eax, byte [rdx]
│  ││││╎│   0x140001622      mov byte [r9 + r15], al
│  ││││╎│   0x140001626      lea rax, [rsi + 1]
│  ││││╎│   0x14000162a      mov byte [rdx], bl
│  ││││╎│   0x14000162c      add rsi, 2
│  ││││╎│   0x140001630      movzx edx, byte [r9 + r15]
│  ││││╎│   0x140001635      add rdx, rbx
│  ││││╎│   0x140001638      movzx r8d, dl
│  ││││╎│   0x14000163c      xor edx, edx
│  ││││╎│   0x14000163e      div r10
│  ││││╎│   0x140001641      movzx r8d, byte [rsp + r8 + 0x70]
│  ││││╎│   0x140001647      movzx eax, dil
│  ││││╎│   0x14000164b      add al, byte [r11]
│  ││││╎│   0x14000164e      xor r8b, byte [rdx + r13]
│  ││││╎│   0x140001652      xor r8b, al
│  ││││╎│   0x140001655      mov byte [r11], r8b
│  ││││╎│   0x140001658      add r11, 2
│  ││││╎│   0x14000165c      sub r14, 1
│  ││││└──< 0x140001660      jne 0x140001561
│  ││││ │   0x140001666      mov byte [s], r14b
│  ││││ │   ; CODE XREF from main @ 0x140001534(x)
│  ││││ └─> 0x14000166d      lea rdx, str._flare_on.com                ; 0x140003398 ; "@flare-on.com" ; const char *s2
│  ││││     0x140001674      lea rcx, [s1]                             ; const char *s1
│  ││││     0x14000167b      call qword [sym.imp.VCRUNTIME140.dll_strstr] ; [0x1400030e8:8]=0x3e72 reloc.VCRUNTIME140.dll_strstr ; "r>" ; char *strstr(const char *s1, const char *s2)
│  ││││     0x140001681      mov r14, qword [var_3f0h]
│  ││││     0x140001689      mov r13, qword [var_3f8h]
│  ││││     0x140001691      mov r12, qword [var_430h]
│  ││││     0x140001699      mov rsi, qword [var_420h]
│  ││││     0x1400016a1      test rax, rax
│  ││││ ┌─< 0x1400016a4      je 0x1400016f4
│  ││││ │   0x1400016a6      lea rdx, [s1]                             ; int64_t arg2
│  ││││ │   0x1400016ad      lea rcx, str._n_SUCCESS__Decrypted_Flag:__s_n ; 0x1400033a8 ; "\n[SUCCESS] Decrypted Flag: %s\n" ; int64_t arg1
│  ││││ │   0x1400016b4      call fcn.140001010
│  ││││┌──< 0x1400016b9      jmp 0x140001700
│  ││││││   ; CODE XREF from main @ 0x140001115(x)
│  ││└────> 0x1400016bb      lea rcx, str._Partner__Pipe_timeout._n    ; 0x140003330 ; "[Partner] Pipe timeout.\n" ; int64_t arg1
│  ││ │││   0x1400016c2      call fcn.140001010
│  ││ │││   0x1400016c7      mov eax, 1
│  ││┌────< 0x1400016cc      jmp 0x140001717
│  ││││││   ; CODE XREF from main @ 0x1400010fb(x)
│  │││└───> 0x1400016ce      call qword [sym.imp.KERNEL32.dll_GetLastError] ; [0x140003038:8]=0x3e02 reloc.KERNEL32.dll_GetLastError ; DWORD GetLastError(void)
│  │││ ││   0x1400016d4      mov edx, eax                              ; int64_t arg2
│  │││ ││   0x1400016d6      lea rcx, str._Partner__Could_not_open_pipe._Error:__lu_n ; 0x140003300 ; "[Partner] Could not open pipe. Error: %lu\n" ; int64_t arg1
│  │││ ││   0x1400016dd      call fcn.140001010
│  │││ ││   0x1400016e2      mov ecx, 0x7d0                            ; 2000 ; DWORD dwMilliseconds
│  │││ ││   0x1400016e7      call qword [sym.imp.KERNEL32.dll_Sleep]   ; [0x140003030:8]=0x3dfa reloc.KERNEL32.dll_Sleep ; VOID Sleep(DWORD dwMilliseconds)
│  │││ ││   0x1400016ed      mov eax, 1
│  │││┌───< 0x1400016f2      jmp 0x140001717
│  ││││││   ; CODE XREF from main @ 0x1400016a4(x)
│  │││││└─> 0x1400016f4      lea rcx, str._n_FAILED__Try_again_with_better_debugging_n ; 0x1400033c8 ; "\n[FAILED] Try again with better debugging\n" ; int64_t arg1
│  │││││    0x1400016fb      call fcn.140001010
│  │││││    ; CODE XREF from main @ 0x1400016b9(x)
│  ││││└──> 0x140001700      lea rcx, str.pause                        ; 0x1400033f4 ; "pause" ; const char *string
│  ││││     0x140001707      call qword [sym.imp.api_ms_win_crt_runtime_l1_1_0.dll_system] ; [0x140003180:8]=0x3f1a reloc.api_ms_win_crt_runtime_l1_1_0.dll_system ; int system(const char *string)
│  ││││     0x14000170d      mov rdi, qword [var_428h]
│  ││││     0x140001715      xor eax, eax
│  ││││     ; CODE XREFS from main @ 0x1400016cc(x), 0x1400016f2(x)
│  ││└└───> 0x140001717      mov rcx, qword [var_2d0h]
│  ││       0x14000171e      xor rcx, rsp                              ; uint32_t arg1
│  ││       0x140001721      call fcn.140001750
│  ││       0x140001726      add rsp, 0x400
│  ││       0x14000172d      pop r15
│  ││       0x14000172f      pop rbx
│  ││       0x140001730      pop rbp
│  ││       0x140001731      ret
│  ││       ; CODE XREFS from main @ 0x1400011a8(x), 0x1400011d0(x)
│  └└─────> 0x140001732      call fcn.140001878
└           0x140001737      int3
