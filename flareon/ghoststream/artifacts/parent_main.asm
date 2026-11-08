2132: int main (int argc, char **argv, char **envp);
afv: vars(58:sp[0x8..0x7b0])
0x140001ea0      mov qword [var_18h], rbx
0x140001ea5      mov qword [var_20h], rdi
0x140001eaa      push rbp
0x140001eab      lea rbp, [rsp - 0x6a0]
0x140001eb3      sub rsp, 0x7a0
0x140001eba      mov rax, qword [section..data]
0x140001ec1      xor rax, rsp
0x140001ec4      mov qword [var_690h], rax
0x140001ecb      xor edx, edx
0x140001ecd      lea rcx, [lpThreadAttributes]
0x140001ed4      mov r8d, 0x100
0x140001eda      call sub.VCRUNTIME140.dll_memset
0x140001edf      xor edx, edx
0x140001ee1      lea rcx, [lpFilename]
0x140001ee8      mov r8d, 0x104
0x140001eee      call sub.VCRUNTIME140.dll_memset
0x140001ef3      xor edx, edx
0x140001ef5      lea rcx, [lpFileName]
0x140001efc      mov r8d, 0x104
0x140001f02      call sub.VCRUNTIME140.dll_memset
0x140001f07      xor edx, edx
0x140001f09      lea rcx, [var_590h]
0x140001f10      mov r8d, 0x100
0x140001f16      call sub.VCRUNTIME140.dll_memset
0x140001f1b      mov dword [var_28h], 0x3c1d40f2
0x140001f22      mov dword [var_2ch], 0x42374639
0x140001f29      mov dword [var_30h], 0x1d323036
0x140001f30      mov dword [var_34h], 0x3c36413c
0x140001f37      mov dword [var_38h], 0x4541fb3b
0x140001f3e      mov dword [var_3ch], 0x3c190741
0x140001f45      mov dword [var_40h], 0x3c23313f
0x140001f4c      mov dword [var_44h], 0x3a323139
0x140001f53      mov word [var_48h], 0x3f3c
0x140001f59      mov byte [var_4ah], 0x41
0x140001f5d      call qword [sym.imp.KERNEL32.dll_GetConsoleWindow]
0x140001f63      lea rcx, str.user32.dll
0x140001f6a      mov dword [var_60h], 0x5a4f4479
0x140001f72      mov rdi, rax
0x140001f75      mov dword [var_64h], 0x445b5875
0x140001f7d      mov dword [var_68h], 0x46535956
0x140001f85      mov byte [var_6ch], 0x50
0x140001f8a      call qword [sym.imp.KERNEL32.dll_GetModuleHandleA]
0x140001f90      mov rbx, rax
0x140001f93      test rax, rax
0x140001f96      jne 0x140001fad
0x140001f98      lea rcx, str.user32.dll
0x140001f9f      call qword [sym.imp.KERNEL32.dll_LoadLibraryA]
0x140001fa5      mov rbx, rax
0x140001fa8      test rax, rax
0x140001fab      je 0x140001fe8
0x140001fad      xor edx, edx
0x140001faf      lea rcx, [lpProcName]
0x140001fb3      mov r8d, 0x100
0x140001fb9      call sub.VCRUNTIME140.dll_memset
0x140001fbe      lea r8, [lpProcName]
0x140001fc2      mov edx, 0xd
0x140001fc7      lea rcx, [var_60h]
0x140001fcc      call fcn.140001130
0x140001fd1      lea rdx, [lpProcName]
0x140001fd5      mov rcx, rbx
0x140001fd8      call qword [sym.imp.KERNEL32.dll_GetProcAddress]
0x140001fde      test rax, rax
0x140001fe1      je 0x140001fe8
0x140001fe3      mov rcx, rdi
0x140001fe6      call rax
0x140001fe8      mov r8d, 0x104
0x140001fee      lea rdx, [lpFilename]
0x140001ff5      xor ecx, ecx
0x140001ff7      call qword [sym.imp.KERNEL32.dll_GetModuleFileNameA]
0x140001ffd      test eax, eax
0x140001fff      jne 0x14000201f
0x140002001      call qword [sym.imp.KERNEL32.dll_GetLastError]
0x140002007      mov edx, eax
0x140002009      lea rcx, str._Parent__Failed_to_get_executable_path._Error:__lu_n
0x140002010      call fcn.140001070
0x140002015      mov eax, 1
0x14000201a      jmp 0x1400026c3
0x14000201f      mov edx, 0x5c
0x140002024      mov qword [var_7b0h], rsi
0x14000202c      lea rcx, [lpFilename]
0x140002033      call qword [sym.imp.VCRUNTIME140.dll_strrchr]
0x140002039      mov rcx, rax
0x14000203c      test rax, rax
0x14000203f      je 0x140002046
0x140002041      inc rcx
0x140002044      jmp 0x14000204d
0x140002046      lea rcx, [lpFilename]
0x14000204d      mov rbx, 0xffffffffffffffff
0x140002054      mov rax, rbx
0x140002057      inc rax
0x14000205a      cmp byte [rcx + rax], 0
0x14000205e      jne 0x140002057
0x140002060      mov edx, 0x5c
0x140002065      imul esi, eax, 0x29f
0x14000206b      lea rcx, [lpFilename]
0x140002072      call qword [sym.imp.VCRUNTIME140.dll_strrchr]
0x140002078      test rax, rax
0x14000207b      je 0x140002081
0x14000207d      mov byte [rax + 1], 0
0x140002081      lea r9, [lpFilename]
0x140002088      mov qword [var_7b8h], r14
0x140002090      lea r8, str._sPolyjuicePotion.txt
0x140002097      mov edx, 0x104
0x14000209c      lea rcx, [lpFileName]
0x1400020a3      call fcn.1400010d0
0x1400020a8      lea rax, [var_28h]
0x1400020ac      mov qword [var_58h], 0x23
0x1400020b4      mov qword [lpParameter], rax
0x1400020b8      mov ecx, 0x10
0x1400020bd      lea rax, [var_590h]
0x1400020c4      mov qword [var_38h_2], 0x104
0x1400020cc      mov qword [var_50h], rax
0x1400020d0      lea rax, [lpFileName]
0x1400020d7      mov qword [var_48h_2], rax
0x1400020db      lea rax, [lpFilename]
0x1400020e2      mov qword [var_40h_2], rax
0x1400020e6      call qword [sym.imp.api_ms_win_crt_heap_l1_1_0.dll_malloc]
0x1400020ec      test rax, rax
0x1400020ef      je 0x1400026b1
0x1400020f5      lea rcx, [lpThreadAttributes]
0x1400020fc      mov qword [rax + 8], 0x100
0x140002104      xor r14d, r14d
0x140002107      mov qword [rax], rcx
0x14000210a      xor ecx, ecx
0x14000210c      mov qword [dwFlagsAndAttributes], r14
0x140002111      mov r9, rax
0x140002114      mov dword [dwCreationDisposition], r14d
0x140002119      lea r8, [0x140001ca0]
0x140002120      xor edx, edx
0x140002122      call qword [sym.imp.KERNEL32.dll_CreateThread]
0x140002128      mov ecx, 0x2710
0x14000212d      mov rdi, rax
0x140002130      call qword [sym.imp.KERNEL32.dll_Sleep]
0x140002136      test rdi, rdi
0x140002139      je 0x140002144
0x14000213b      mov rcx, rdi
0x14000213e      call qword [sym.imp.KERNEL32.dll_CloseHandle]
0x140002144      mov qword [dwFlagsAndAttributes], r14
0x140002149      lea r9, [lpParameter]
0x14000214d      lea r8, [0x140001860]
0x140002154      mov dword [dwCreationDisposition], r14d
0x140002159      xor edx, edx
0x14000215b      xor ecx, ecx
0x14000215d      call qword [sym.imp.KERNEL32.dll_CreateThread]
0x140002163      mov rdi, rax
0x140002166      test rax, rax
0x140002169      je 0x140002182
0x14000216b      mov edx, 0xffffffff
0x140002170      mov rcx, rax
0x140002173      call qword [sym.imp.KERNEL32.dll_WaitForSingleObject]
0x140002179      mov rcx, rdi
0x14000217c      call qword [sym.imp.KERNEL32.dll_CloseHandle]
0x140002182      lea rcx, str.ntdll.dll
0x140002189      call qword [sym.imp.KERNEL32.dll_GetModuleHandleA]
0x14000218f      xor edx, edx
0x140002191      lea rcx, [lpProcName]
0x140002195      mov r8d, 0x100
0x14000219b      mov rdi, rax
0x14000219e      call sub.VCRUNTIME140.dll_memset
0x1400021a3      lea r8, [lpProcName]
0x1400021a7      mov dword [var_60h], 0x4f65407a
0x1400021af      mov edx, 0x16
0x1400021b4      mov dword [var_64h], 0x525a7b40
0x1400021bc      lea rcx, [var_60h]
0x1400021c1      mov dword [var_68h], 0x53574659
0x1400021c9      mov dword [var_6ch], 0x5a595b40
0x1400021d1      mov dword [var_sp_70h], 0x4f465c60
0x1400021d9      mov word [var_74h], 0x5053
0x1400021e0      call fcn.140001130
0x1400021e5      test rdi, rdi
0x1400021e8      je 0x140002210
0x1400021ea      lea rdx, [lpProcName]
0x1400021ee      mov rcx, rdi
0x1400021f1      call qword [sym.imp.KERNEL32.dll_GetProcAddress]
0x1400021f7      test rax, rax
0x1400021fa      je 0x140002210
0x1400021fc      xor r9d, r9d
0x1400021ff      xor r8d, r8d
0x140002202      mov edx, 0x11
0x140002207      mov rcx, 0xfffffffffffffffe
0x14000220e      call rax
0x140002210      mov qword [hTemplateFile], r14
0x140002215      lea rcx, [lpFileName]
0x14000221c      mov dword [dwFlagsAndAttributes], 0x80
0x140002224      xor r9d, r9d
0x140002227      mov edx, 0x80000000
0x14000222c      mov dword [dwCreationDisposition], 3
0x140002234      mov r8d, 1
0x14000223a      add esi, 0xf
0x14000223d      call qword [sym.imp.KERNEL32.dll_CreateFileA]
0x140002243      mov rdi, rax
0x140002246      cmp rax, rbx
0x140002249      je 0x1400026ed
0x14000224f      lea r9, [lpNumberOfBytesWritten]
0x140002253      mov qword [dwCreationDisposition], r14
0x140002258      mov r8d, 0xff
0x14000225e      lea rdx, [lpThreadAttributes]
0x140002265      mov rcx, rax
0x140002268      call qword [sym.imp.KERNEL32.dll_ReadFile]
0x14000226e      mov rcx, rdi
0x140002271      test eax, eax
0x140002273      je 0x1400026e7
0x140002279      mov eax, dword [lpNumberOfBytesWritten]
0x14000227c      mov byte [rbp + rax + 0x170], r14b
0x140002284      call qword [sym.imp.KERNEL32.dll_CloseHandle]
0x14000228a      movdqa xmm0, xmmword [0x140004680]
0x140002292      movdqu xmmword [var_50h_2], xmm0
0x140002297      mov dword [rbp + 0x60], 0x3239392e
0x14000229e      mov word [var_bp_64h], 0x343b
0x1400022a4      mov byte [var_66h], 0x32
0x1400022a8      call fcn.140001680
0x1400022ad      xorps xmm0, xmm0
0x1400022b0      mov dword [var_bp_68h], r14d
0x1400022b4      xorps xmm1, xmm1
0x1400022b7      mov qword [lpModuleName], 0x50
0x1400022bf      lea rax, [lpThreadAttributes]
0x1400022c6      movdqa xmmword [rbp - 0x20], xmm0
0x1400022cb      mov qword [var_78h], rax
0x1400022d0      xor ecx, ecx
0x1400022d2      lea rax, [var_50h_2]
0x1400022d6      movdqa xmmword [var_10h], xmm1
0x1400022db      mov qword [var_80h], rax
0x1400022df      mov rax, qword [0x140006670]
0x1400022e6      mov qword [var_bp_78h], rax
0x1400022ea      movsxd rax, esi
0x1400022ed      mov qword [var_70h_2], rax
0x1400022f1      lea rax, [0x140001b20]
0x1400022f8      mov qword [var_28h_2], rax
0x1400022fc      movdqa xmmword [rbp], xmm0
0x140002301      movdqa xmmword [var_10h_2], xmm1
0x140002306      call qword [sym.imp.KERNEL32.dll_GetModuleHandleW]
0x14000230c      lea rsi, [0x1400045a0]
0x140002313      mov dword [var_60h], 0x5b514f66
0x14000231b      lea rcx, str.user32.dll
0x140002322      mov qword [var_bp_18h], rax
0x140002326      mov qword [var_10h_2], rsi
0x14000232a      mov dword [var_64h], 0x464f4045
0x140002332      mov dword [var_68h], 0x45535875
0x14000233a      mov dword [var_6ch], 0x734c6f45
0x140002342      call qword [sym.imp.KERNEL32.dll_GetModuleHandleA]
0x140002348      mov rdi, rax
0x14000234b      test rax, rax
0x14000234e      jne 0x14000236a
0x140002350      lea rcx, str.user32.dll
0x140002357      call qword [sym.imp.KERNEL32.dll_LoadLibraryA]
0x14000235d      mov rdi, rax
0x140002360      test rax, rax
0x140002363      jne 0x14000236a
0x140002365      mov rax, r14
0x140002368      jmp 0x14000239b
0x14000236a      xor edx, edx
0x14000236c      lea rcx, [lpProcName]
0x140002370      mov r8d, 0x100
0x140002376      call sub.VCRUNTIME140.dll_memset
0x14000237b      lea r8, [lpProcName]
0x14000237f      mov edx, 0x10
0x140002384      lea rcx, [var_60h]
0x140002389      call fcn.140001130
0x14000238e      lea rdx, [lpProcName]
0x140002392      mov rcx, rdi
0x140002395      call qword [sym.imp.KERNEL32.dll_GetProcAddress]
0x14000239b      lea rcx, [lpModuleName]
0x14000239f      call rax
0x1400023a1      lea rcx, str.user32.dll
0x1400023a8      mov dword [var_60h], 0x969aa778
0x1400023b0      mov dword [var_64h], 0x9e8c9aa9
0x1400023b8      mov dword [var_68h], 0xaca499a3
0x1400023c0      mov word [var_6ch], 0xad7a
0x1400023c7      mov byte [var_6eh], 0x76
0x1400023cc      call qword [sym.imp.KERNEL32.dll_GetModuleHandleA]
0x1400023d2      mov rdi, rax
0x1400023d5      test rax, rax
0x1400023d8      jne 0x1400023f4
0x1400023da      lea rcx, str.user32.dll
0x1400023e1      call qword [sym.imp.KERNEL32.dll_LoadLibraryA]
0x1400023e7      mov rdi, rax
0x1400023ea      test rax, rax
0x1400023ed      jne 0x1400023f4
0x1400023ef      mov rax, r14
0x1400023f2      jmp 0x140002425
0x1400023f4      xor edx, edx
0x1400023f6      lea rcx, [lpProcName]
0x1400023fa      mov r8d, 0x100
0x140002400      call sub.VCRUNTIME140.dll_memset
0x140002405      lea r8, [lpProcName]
0x140002409      mov edx, 0xf
0x14000240e      lea rcx, [var_60h]
0x140002413      call fcn.140001130
0x140002418      lea rdx, [lpProcName]
0x14000241c      mov rcx, rdi
0x14000241f      call qword [sym.imp.KERNEL32.dll_GetProcAddress]
0x140002425      lea rcx, [var_78h]
0x14000242a      mov r9d, 0xcf0000
0x140002430      mov qword [var_sp_58h], rcx
0x140002435      lea r8, [0x1400045a4]
0x14000243c      mov rcx, qword [var_bp_18h]
0x140002440      mov rdx, rsi
0x140002443      mov qword [var_sp_50h], rcx
0x140002448      xor ecx, ecx
0x14000244a      mov qword [var_sp_48h], r14
0x14000244f      mov qword [var_sp_40h], r14
0x140002454      mov dword [var_sp_38h], r14d
0x140002459      mov dword [hTemplateFile], r14d
0x14000245e      mov dword [dwFlagsAndAttributes], 0x80000000
0x140002466      mov dword [dwCreationDisposition], 0x80000000
0x14000246e      call rax
0x140002470      lea rcx, [lpThreadAttributes]
0x140002477      mov rax, rbx
0x14000247a      nop word [rax + rax]
0x140002480      inc rax
0x140002483      cmp byte [rcx + rax], r14b
0x140002487      jne 0x140002480
0x140002489      cmp eax, 0x14
0x14000248c      jle 0x140002497
0x14000248e      lea rcx, str._n___Try_harded_to_find_the_secrets._n
0x140002495      jmp 0x1400024a7
0x140002497      cmp byte [lpThreadAttributes], 0x41
0x14000249e      jne 0x1400024ac
0x1400024a0      lea rcx, str._n___The_Polyjuice_Potion_is_still_effective__preventing_the_true_identity_from_being_revealed._n
0x1400024a7      call fcn.140001070
0x1400024ac      xor edx, edx
0x1400024ae      lea rcx, [s]
0x1400024b5      mov r8d, 0x100
0x1400024bb      call sub.VCRUNTIME140.dll_memset
0x1400024c0      lea r8, [s]
0x1400024c7      mov dword [var_60h], 0x29fb2929
0x1400024cf      mov edx, 0x17
0x1400024d4      mov dword [var_64h], 0x323d363d
0x1400024dc      lea rcx, [var_60h]
0x1400024e1      mov dword [var_68h], 0x2e391329
0x1400024e9      mov dword [var_6ch], 0x3510323f
0x1400024f1      mov dword [var_sp_70h], 0x3239392e
0x1400024f9      mov word [var_74h], 0x343b
0x140002500      mov byte [var_76h], 0x32
0x140002505      call fcn.140001130
0x14000250a      lea rcx, str.kernel32.dll
0x140002511      mov dword [var_60h], 0x534f4675
0x140002519      mov dword [var_64h], 0x537a4f40
0x140002521      mov dword [var_68h], 0x64504f57
0x140002529      mov dword [var_6ch], 0x734f445b
0x140002531      call qword [sym.imp.KERNEL32.dll_GetModuleHandleA]
0x140002537      mov rdi, rax
0x14000253a      test rax, rax
0x14000253d      jne 0x140002558
0x14000253f      lea rcx, str.kernel32.dll
0x140002546      call qword [sym.imp.KERNEL32.dll_LoadLibraryA]
0x14000254c      mov rdi, rax
0x14000254f      test rax, rax
0x140002552      je 0x1400026b1
0x140002558      xor edx, edx
0x14000255a      lea rcx, [lpProcName]
0x14000255e      mov r8d, 0x100
0x140002564      call sub.VCRUNTIME140.dll_memset
0x140002569      lea r8, [lpProcName]
0x14000256d      mov edx, 0x10
0x140002572      lea rcx, [var_60h]
0x140002577      call fcn.140001130
0x14000257c      lea rdx, [lpProcName]
0x140002580      mov rcx, rdi
0x140002583      call qword [sym.imp.KERNEL32.dll_GetProcAddress]
0x140002589      test rax, rax
0x14000258c      je 0x1400026b1
0x140002592      mov qword [var_sp_38h], r14
0x140002597      lea rcx, [s]
0x14000259e      mov dword [hTemplateFile], r14d
0x1400025a3      mov edx, 2
0x1400025a8      mov dword [dwFlagsAndAttributes], 0x100
0x1400025b0      mov r9d, 1
0x1400025b6      mov r8d, 6
0x1400025bc      mov dword [dwCreationDisposition], 0x100
0x1400025c4      call rax
0x1400025c6      mov rsi, rax
0x1400025c9      cmp rax, rbx
0x1400025cc      je 0x1400026ed
0x1400025d2      call fcn.140001400
0x1400025d7      lea rcx, str.kernel32.dll
0x1400025de      mov dword [var_60h], 0x5a5a5975
0x1400025e6      mov dword [var_64h], 0x7a40554f
0x1400025ee      mov dword [var_68h], 0x504f5753
0x1400025f6      mov dword [var_6ch], 0x4f445b64
0x1400025fe      call qword [sym.imp.KERNEL32.dll_GetModuleHandleA]
0x140002604      mov rdi, rax
0x140002607      test rax, rax
0x14000260a      jne 0x140002626
0x14000260c      lea rcx, str.kernel32.dll
0x140002613      call qword [sym.imp.KERNEL32.dll_LoadLibraryA]
0x140002619      mov rdi, rax
0x14000261c      test rax, rax
0x14000261f      jne 0x140002626
0x140002621      mov rax, r14
0x140002624      jmp 0x140002657
0x140002626      xor edx, edx
0x140002628      lea rcx, [lpProcName]
0x14000262c      mov r8d, 0x100
0x140002632      call sub.VCRUNTIME140.dll_memset
0x140002637      lea r8, [lpProcName]
0x14000263b      mov edx, 0x10
0x140002640      lea rcx, [var_60h]
0x140002645      call fcn.140001130
0x14000264a      lea rdx, [lpProcName]
0x14000264e      mov rcx, rdi
0x140002651      call qword [sym.imp.KERNEL32.dll_GetProcAddress]
0x140002657      xor edx, edx
0x140002659      mov rcx, rsi
0x14000265c      call rax
0x14000265e      test rax, rax
0x140002661      jne 0x140002670
0x140002663      call qword [sym.imp.KERNEL32.dll_GetLastError]
0x140002669      cmp eax, 0x217
0x14000266e      jne 0x14000269c
0x140002670      lea rax, [lpThreadAttributes]
0x140002677      inc rbx
0x14000267a      cmp byte [rax + rbx], r14b
0x14000267e      jne 0x140002677
0x140002680      lea r9, [lpNumberOfBytesWritten]
0x140002684      mov qword [dwCreationDisposition], r14
0x140002689      mov r8d, ebx
0x14000268c      lea rdx, [lpThreadAttributes]
0x140002693      mov rcx, rsi
0x140002696      call qword [sym.imp.KERNEL32.dll_WriteFile]
0x14000269c      mov rcx, rsi
0x14000269f      call qword [sym.imp.KERNEL32.dll_CloseHandle]
0x1400026a5      lea rcx, str.___Execution_complete._n
0x1400026ac      call fcn.140001070
0x1400026b1      xor eax, eax
0x1400026b3      mov r14, qword [var_7b8h]
0x1400026bb      mov rsi, qword [var_7b0h]
0x1400026c3      mov rcx, qword [var_690h]
0x1400026ca      xor rcx, rsp
0x1400026cd      call fcn.140002710
0x1400026d2      lea r11, [var_7a0h]
0x1400026da      mov rbx, qword [r11 + 0x20]
0x1400026de      mov rdi, qword [r11 + 0x28]
0x1400026e2      mov rsp, r11
0x1400026e5      pop rbp
0x1400026e6      ret
0x1400026e7      call qword [sym.imp.KERNEL32.dll_CloseHandle]
0x1400026ed      mov eax, 1
0x1400026f2      jmp 0x1400026b3
