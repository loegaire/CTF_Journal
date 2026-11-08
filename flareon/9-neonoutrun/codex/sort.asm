
artifacts/neon_outrun:     file format elf64-x86-64


Disassembly of section .text:

000000000067deb2 <.text+0x1bb3f2>:
  67deb2:	55                   	push   rbp
  67deb3:	41 57                	push   r15
  67deb5:	41 56                	push   r14
  67deb7:	41 55                	push   r13
  67deb9:	41 54                	push   r12
  67debb:	53                   	push   rbx
  67debc:	48 81 ec 98 00 00 00 	sub    rsp,0x98
  67dec3:	48 89 fb             	mov    rbx,rdi
  67dec6:	e8 27 06 00 00       	call   67e4f2 <__cxa_finalize@plt-0xd3491e>
  67decb:	49 89 c5             	mov    r13,rax
  67dece:	4c 8d 74 24 68       	lea    r14,[rsp+0x68]
  67ded3:	49 89 06             	mov    QWORD PTR [r14],rax
  67ded6:	48 89 df             	mov    rdi,rbx
  67ded9:	ff 15 31 61 da 00    	call   QWORD PTR [rip+0xda6131]        # 1424010 <__memmove_chk@plt+0x70620>
  67dedf:	4c 8d 7c 24 70       	lea    r15,[rsp+0x70]
  67dee4:	49 89 1f             	mov    QWORD PTR [r15],rbx
  67dee7:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
  67deec:	48 89 df             	mov    rdi,rbx
  67deef:	e8 a0 a6 f9 ff       	call   618594 <__cxa_finalize@plt-0xd9a87c>
  67def4:	48 89 c3             	mov    rbx,rax
  67def7:	48 8d 35 73 08 00 00 	lea    rsi,[rip+0x873]        # 67e771 <__cxa_finalize@plt-0xd3469f>
  67defe:	4c 89 f7             	mov    rdi,r14
  67df01:	48 89 c2             	mov    rdx,rax
  67df04:	4c 89 f9             	mov    rcx,r15
  67df07:	e8 00 06 00 00       	call   67e50c <__cxa_finalize@plt-0xd34904>
  67df0c:	48 85 c0             	test   rax,rax
  67df0f:	0f 84 67 05 00 00    	je     67e47c <__cxa_finalize@plt-0xd34994>
  67df15:	48 8d 7c 24 60       	lea    rdi,[rsp+0x60]
  67df1a:	48 89 c6             	mov    rsi,rax
  67df1d:	ff 15 f5 60 da 00    	call   QWORD PTR [rip+0xda60f5]        # 1424018 <__memmove_chk@plt+0x70628>
  67df23:	48 89 df             	mov    rdi,rbx
  67df26:	ff 15 f4 60 da 00    	call   QWORD PTR [rip+0xda60f4]        # 1424020 <__memmove_chk@plt+0x70630>
  67df2c:	84 c0                	test   al,al
  67df2e:	0f 84 48 05 00 00    	je     67e47c <__cxa_finalize@plt-0xd34994>
  67df34:	48 89 5c 24 08       	mov    QWORD PTR [rsp+0x8],rbx
  67df39:	48 89 df             	mov    rdi,rbx
  67df3c:	ff 15 e6 60 da 00    	call   QWORD PTR [rip+0xda60e6]        # 1424028 <__memmove_chk@plt+0x70638>
  67df42:	41 89 c4             	mov    r12d,eax
  67df45:	31 ff                	xor    edi,edi
  67df47:	e8 64 86 fc ff       	call   6465b0 <__cxa_finalize@plt-0xd6c860>
  67df4c:	48 8d 74 24 78       	lea    rsi,[rsp+0x78]
  67df51:	48 89 06             	mov    QWORD PTR [rsi],rax
  67df54:	48 8d 84 24 88 00 00 	lea    rax,[rsp+0x88]
  67df5b:	00 
  67df5c:	48 83 20 00          	and    QWORD PTR [rax],0x0
  67df60:	89 56 08             	mov    DWORD PTR [rsi+0x8],edx
  67df63:	83 60 08 00          	and    DWORD PTR [rax+0x8],0x0
  67df67:	48 8d 5c 24 18       	lea    rbx,[rsp+0x18]
  67df6c:	48 89 df             	mov    rdi,rbx
  67df6f:	48 89 c2             	mov    rdx,rax
  67df72:	e8 59 85 fc ff       	call   6464d0 <__cxa_finalize@plt-0xd6c940>
  67df77:	8b 43 10             	mov    eax,DWORD PTR [rbx+0x10]
  67df7a:	48 69 4b 08 00 ca 9a 	imul   rcx,QWORD PTR [rbx+0x8],0x3b9aca00
  67df81:	3b 
  67df82:	48 01 c1             	add    rcx,rax
  67df85:	80 3b 00             	cmp    BYTE PTR [rbx],0x0
  67df88:	6a 2a                	push   0x2a
  67df8a:	58                   	pop    rax
  67df8b:	48 0f 44 c1          	cmove  rax,rcx
  67df8f:	64 80 3c 25 70 ff ff 	cmp    BYTE PTR fs:0xffffffffffffff70,0x0
  67df96:	ff 00 
  67df98:	0f 84 0e 05 00 00    	je     67e4ac <__cxa_finalize@plt-0xd34964>
  67df9e:	4c 89 6c 24 40       	mov    QWORD PTR [rsp+0x40],r13
  67dfa3:	64 48 03 04 25 68 ff 	add    rax,QWORD PTR fs:0xffffffffffffff68
  67dfaa:	ff ff 
  67dfac:	48 b9 2d 7f 95 4c 2d 	movabs rcx,0x5851f42d4c957f2d
  67dfb3:	f4 51 58 
  67dfb6:	48 0f af c8          	imul   rcx,rax
  67dfba:	48 b8 4f 81 67 f7 7e 	movabs rax,0x14057b7ef767814f
  67dfc1:	7b 05 14 
  67dfc4:	48 01 c8             	add    rax,rcx
  67dfc7:	66 48 0f 6e c8       	movq   xmm1,rax
  67dfcc:	66 0f 62 0d 1c 7a a8 	punpckldq xmm1,XMMWORD PTR [rip+0xffffffffffa87a1c]        # 1059f0 <__cxa_finalize@plt-0x12ad420>
  67dfd3:	ff 
  67dfd4:	64 48 89 04 25 68 ff 	mov    QWORD PTR fs:0xffffffffffffff68,rax
  67dfdb:	ff ff 
  67dfdd:	66 0f 5c 0d 5b 74 a8 	subpd  xmm1,XMMWORD PTR [rip+0xffffffffffa8745b]        # 105440 <__cxa_finalize@plt-0x12ad9d0>
  67dfe4:	ff 
  67dfe5:	66 0f 28 c1          	movapd xmm0,xmm1
  67dfe9:	66 0f 15 c1          	unpckhpd xmm0,xmm1
  67dfed:	f2 0f 58 c1          	addsd  xmm0,xmm1
  67dff1:	f2 0f 59 05 5f 9c a8 	mulsd  xmm0,QWORD PTR [rip+0xffffffffffa89c5f]        # 107c58 <__cxa_finalize@plt-0x12ab1b8>
  67dff8:	ff 
  67dff9:	f2 0f 59 05 37 aa a8 	mulsd  xmm0,QWORD PTR [rip+0xffffffffffa8aa37]        # 108a38 <__cxa_finalize@plt-0x12aa3d8>
  67e000:	ff 
  67e001:	f2 0f 58 05 cf 9f a8 	addsd  xmm0,QWORD PTR [rip+0xffffffffffa89fcf]        # 107fd8 <__cxa_finalize@plt-0x12aae38>
  67e008:	ff 
  67e009:	ff 15 61 53 da 00    	call   QWORD PTR [rip+0xda5361]        # 1423370 <__memmove_chk@plt+0x6f980>
  67e00f:	f2 0f 11 44 24 10    	movsd  QWORD PTR [rsp+0x10],xmm0
  67e015:	45 89 e7             	mov    r15d,r12d
  67e018:	6a 08                	push   0x8
  67e01a:	5a                   	pop    rdx
  67e01b:	4c 89 ff             	mov    rdi,r15
  67e01e:	48 89 d6             	mov    rsi,rdx
  67e021:	e8 4e fe ff ff       	call   67de74 <__cxa_finalize@plt-0xd34f9c>
  67e026:	48 89 44 24 18       	mov    QWORD PTR [rsp+0x18],rax
  67e02b:	48 89 54 24 20       	mov    QWORD PTR [rsp+0x20],rdx
  67e030:	48 83 64 24 28 00    	and    QWORD PTR [rsp+0x28],0x0
  67e036:	31 db                	xor    ebx,ebx
  67e038:	4c 39 f8             	cmp    rax,r15
  67e03b:	0f 82 8c 04 00 00    	jb     67e4cd <__cxa_finalize@plt-0xd34943>
  67e041:	49 89 d6             	mov    r14,rdx
  67e044:	45 31 ff             	xor    r15d,r15d
  67e047:	4c 8b 2d e2 5f da 00 	mov    r13,QWORD PTR [rip+0xda5fe2]        # 1424030 <__memmove_chk@plt+0x70640>
  67e04e:	48 8b 6c 24 40       	mov    rbp,QWORD PTR [rsp+0x40]
  67e053:	41 39 dc             	cmp    r12d,ebx
  67e056:	74 63                	je     67e0bb <__cxa_finalize@plt-0xd34d55>
  67e058:	48 89 ef             	mov    rdi,rbp
  67e05b:	e8 f7 99 f9 ff       	call   617a57 <__cxa_finalize@plt-0xd9b3b9>
  67e060:	48 89 ef             	mov    rdi,rbp
  67e063:	e8 e4 9e f9 ff       	call   617f4c <__cxa_finalize@plt-0xd9aec4>
  67e068:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
  67e06d:	48 89 c6             	mov    rsi,rax
  67e070:	89 da                	mov    edx,ebx
  67e072:	41 ff d5             	call   r13
  67e075:	66 0f 57 c9          	xorpd  xmm1,xmm1
  67e079:	48 85 c0             	test   rax,rax
  67e07c:	74 30                	je     67e0ae <__cxa_finalize@plt-0xd34d62>
  67e07e:	48 89 c7             	mov    rdi,rax
  67e081:	48 89 ee             	mov    rsi,rbp
  67e084:	e8 94 a1 f9 ff       	call   61821d <__cxa_finalize@plt-0xd9abf3>
  67e089:	66 0f 57 c9          	xorpd  xmm1,xmm1
  67e08d:	48 85 c0             	test   rax,rax
  67e090:	74 1c                	je     67e0ae <__cxa_finalize@plt-0xd34d62>
  67e092:	48 89 c7             	mov    rdi,rax
  67e095:	ff 15 9d 5f da 00    	call   QWORD PTR [rip+0xda5f9d]        # 1424038 <__memmove_chk@plt+0x70648>
  67e09b:	66 0f 28 c8          	movapd xmm1,xmm0
  67e09f:	f2 0f c2 c8 07       	cmpordsd xmm1,xmm0
  67e0a4:	66 0f 54 c8          	andpd  xmm1,xmm0
  67e0a8:	f2 0f 59 4c 24 10    	mulsd  xmm1,QWORD PTR [rsp+0x10]
  67e0ae:	f2 43 0f 11 0c fe    	movsd  QWORD PTR [r14+r15*8],xmm1
  67e0b4:	49 ff c7             	inc    r15
  67e0b7:	ff c3                	inc    ebx
  67e0b9:	eb 98                	jmp    67e053 <__cxa_finalize@plt-0xd34dbd>
  67e0bb:	48 8d 5c 24 18       	lea    rbx,[rsp+0x18]
  67e0c0:	48 8b 03             	mov    rax,QWORD PTR [rbx]
  67e0c3:	48 89 44 24 48       	mov    QWORD PTR [rsp+0x48],rax
  67e0c8:	66 0f 57 c0          	xorpd  xmm0,xmm0
  67e0cc:	31 c0                	xor    eax,eax
  67e0ce:	41 bd 8e a0 be 2f    	mov    r13d,0x2fbea08e
  67e0d4:	48 8d 2d b5 a4 db 00 	lea    rbp,[rip+0xdba4b5]        # 1438590 <__memmove_chk@plt+0x84ba0>
  67e0db:	41 81 fd 62 a0 27 c7 	cmp    r13d,0xc727a062
  67e0e2:	0f 84 a7 00 00 00    	je     67e18f <__cxa_finalize@plt-0xd34c81>
  67e0e8:	41 81 fd 8e a0 be 2f 	cmp    r13d,0x2fbea08e
  67e0ef:	0f 84 40 01 00 00    	je     67e235 <__cxa_finalize@plt-0xd34bdb>
  67e0f5:	41 81 fd 68 70 0d 4a 	cmp    r13d,0x4a0d7068
  67e0fc:	74 28                	je     67e126 <__cxa_finalize@plt-0xd34cea>
  67e0fe:	41 81 fd 81 ed d0 5d 	cmp    r13d,0x5dd0ed81
  67e105:	0f 84 b7 00 00 00    	je     67e1c2 <__cxa_finalize@plt-0xd34c4e>
  67e10b:	41 81 fd 48 d3 d5 74 	cmp    r13d,0x74d5d348
  67e112:	74 48                	je     67e15c <__cxa_finalize@plt-0xd34cb4>
  67e114:	41 81 fd a8 02 b9 f1 	cmp    r13d,0xf1b902a8
  67e11b:	0f 85 d5 02 00 00    	jne    67e3f6 <__cxa_finalize@plt-0xd34a1a>
  67e121:	e9 0b 03 00 00       	jmp    67e431 <__cxa_finalize@plt-0xd349df>
  67e126:	f2 0f 11 44 24 08    	movsd  QWORD PTR [rsp+0x8],xmm0
  67e12c:	48 89 df             	mov    rdi,rbx
  67e12f:	48 89 ee             	mov    rsi,rbp
  67e132:	e8 4b 69 f8 ff       	call   604a82 <__cxa_finalize@plt-0xdae38e>
  67e137:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
  67e13c:	80 7c 24 18 00       	cmp    BYTE PTR [rsp+0x18],0x0
  67e141:	75 05                	jne    67e148 <__cxa_finalize@plt-0xd34cc8>
  67e143:	48 83 67 08 00       	and    QWORD PTR [rdi+0x8],0x0
  67e148:	0f b6 74 24 28       	movzx  esi,BYTE PTR [rsp+0x28]
  67e14d:	e8 4e e3 01 00       	call   69c4a0 <__cxa_finalize@plt-0xd16970>
  67e152:	b8 20 a3 d8 3e       	mov    eax,0x3ed8a320
  67e157:	e9 94 02 00 00       	jmp    67e3f0 <__cxa_finalize@plt-0xd34a20>
  67e15c:	f2 0f 11 44 24 08    	movsd  QWORD PTR [rsp+0x8],xmm0
  67e162:	48 89 df             	mov    rdi,rbx
  67e165:	e8 c9 04 00 00       	call   67e633 <__cxa_finalize@plt-0xd347dd>
  67e16a:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
  67e16f:	80 7c 24 18 00       	cmp    BYTE PTR [rsp+0x18],0x0
  67e174:	75 05                	jne    67e17b <__cxa_finalize@plt-0xd34c95>
  67e176:	48 83 67 18 00       	and    QWORD PTR [rdi+0x18],0x0
  67e17b:	0f b6 74 24 28       	movzx  esi,BYTE PTR [rsp+0x28]
  67e180:	e8 1b e3 01 00       	call   69c4a0 <__cxa_finalize@plt-0xd16970>
  67e185:	b8 c9 3e 05 29       	mov    eax,0x29053ec9
  67e18a:	e9 61 02 00 00       	jmp    67e3f0 <__cxa_finalize@plt-0xd34a20>
  67e18f:	f2 0f 11 44 24 08    	movsd  QWORD PTR [rsp+0x8],xmm0
  67e195:	48 89 df             	mov    rdi,rbx
  67e198:	e8 94 1d f6 ff       	call   5dff31 <__cxa_finalize@plt-0xdd2edf>
  67e19d:	48 8b 7c 24 20       	mov    rdi,QWORD PTR [rsp+0x20]
  67e1a2:	80 7c 24 18 00       	cmp    BYTE PTR [rsp+0x18],0x0
  67e1a7:	75 05                	jne    67e1ae <__cxa_finalize@plt-0xd34c62>
  67e1a9:	48 83 67 08 00       	and    QWORD PTR [rdi+0x8],0x0
  67e1ae:	0f b6 74 24 28       	movzx  esi,BYTE PTR [rsp+0x28]
  67e1b3:	e8 e8 e2 01 00       	call   69c4a0 <__cxa_finalize@plt-0xd16970>
  67e1b8:	b8 0a d0 2a 8d       	mov    eax,0x8d2ad00a
  67e1bd:	e9 2e 02 00 00       	jmp    67e3f0 <__cxa_finalize@plt-0xd34a20>
  67e1c2:	f2 0f 11 44 24 08    	movsd  QWORD PTR [rsp+0x8],xmm0
  67e1c8:	48 89 df             	mov    rdi,rbx
  67e1cb:	e8 a9 04 00 00       	call   67e679 <__cxa_finalize@plt-0xd34797>
  67e1d0:	4c 8b 64 24 20       	mov    r12,QWORD PTR [rsp+0x20]
  67e1d5:	8a 44 24 28          	mov    al,BYTE PTR [rsp+0x28]
  67e1d9:	80 7c 24 18 00       	cmp    BYTE PTR [rsp+0x18],0x0
  67e1de:	0f 85 fc 01 00 00    	jne    67e3e0 <__cxa_finalize@plt-0xd34a30>
  67e1e4:	88 44 24 07          	mov    BYTE PTR [rsp+0x7],al
  67e1e8:	49 8b 7c 24 20       	mov    rdi,QWORD PTR [r12+0x20]
  67e1ed:	48 85 ff             	test   rdi,rdi
  67e1f0:	74 0b                	je     67e1fd <__cxa_finalize@plt-0xd34c13>
  67e1f2:	e8 60 79 f5 ff       	call   5d5b57 <__cxa_finalize@plt-0xddd2b9>
  67e1f7:	49 83 64 24 20 00    	and    QWORD PTR [r12+0x20],0x0
  67e1fd:	49 83 64 24 18 00    	and    QWORD PTR [r12+0x18],0x0
  67e203:	4c 89 ff             	mov    rdi,r15
  67e206:	6a 08                	push   0x8
  67e208:	5a                   	pop    rdx
  67e209:	48 89 d6             	mov    rsi,rdx
  67e20c:	e8 63 fc ff ff       	call   67de74 <__cxa_finalize@plt-0xd34f9c>
  67e211:	48 89 c3             	mov    rbx,rax
  67e214:	48 89 d5             	mov    rbp,rdx
  67e217:	4d 85 ff             	test   r15,r15
  67e21a:	74 4d                	je     67e269 <__cxa_finalize@plt-0xd34ba7>
  67e21c:	48 89 ef             	mov    rdi,rbp
  67e21f:	4c 89 f6             	mov    rsi,r14
  67e222:	4a 8d 14 fd 00 00 00 	lea    rdx,[r15*8+0x0]
  67e229:	00 
  67e22a:	ff 15 40 50 da 00    	call   QWORD PTR [rip+0xda5040]        # 1423270 <__memmove_chk@plt+0x6f880>
  67e230:	4c 89 f9             	mov    rcx,r15
  67e233:	eb 36                	jmp    67e26b <__cxa_finalize@plt-0xd34ba5>
  67e235:	b8 ec 00 99 e8       	mov    eax,0xe89900ec
  67e23a:	4d 85 ff             	test   r15,r15
  67e23d:	74 1d                	je     67e25c <__cxa_finalize@plt-0xd34bb4>
  67e23f:	31 c9                	xor    ecx,ecx
  67e241:	f2 0f 10 05 97 9f a8 	movsd  xmm0,QWORD PTR [rip+0xffffffffffa89f97]        # 1081e0 <__cxa_finalize@plt-0x12aac30>
  67e248:	ff 
  67e249:	f2 41 0f 58 04 ce    	addsd  xmm0,QWORD PTR [r14+rcx*8]
  67e24f:	48 ff c1             	inc    rcx
  67e252:	49 39 cf             	cmp    r15,rcx
  67e255:	75 f2                	jne    67e249 <__cxa_finalize@plt-0xd34bc7>
  67e257:	e9 9a 01 00 00       	jmp    67e3f6 <__cxa_finalize@plt-0xd34a1a>
  67e25c:	f2 0f 10 05 7c 9f a8 	movsd  xmm0,QWORD PTR [rip+0xffffffffffa89f7c]        # 1081e0 <__cxa_finalize@plt-0x12aac30>
  67e263:	ff 
  67e264:	e9 8d 01 00 00       	jmp    67e3f6 <__cxa_finalize@plt-0xd34a1a>
  67e269:	31 c9                	xor    ecx,ecx
  67e26b:	49 8b 74 24 20       	mov    rsi,QWORD PTR [r12+0x20]
  67e270:	48 89 f0             	mov    rax,rsi
  67e273:	48 01 c8             	add    rax,rcx
  67e276:	0f 82 1a 02 00 00    	jb     67e496 <__cxa_finalize@plt-0xd3497a>
  67e27c:	48 89 5c 24 58       	mov    QWORD PTR [rsp+0x58],rbx
  67e281:	49 8d 54 24 08       	lea    rdx,[r12+0x8]
  67e286:	48 8b 1a             	mov    rbx,QWORD PTR [rdx]
  67e289:	48 39 d8             	cmp    rax,rbx
  67e28c:	48 89 6c 24 38       	mov    QWORD PTR [rsp+0x38],rbp
  67e291:	76 5a                	jbe    67e2ed <__cxa_finalize@plt-0xd34b23>
  67e293:	48 89 d8             	mov    rax,rbx
  67e296:	48 29 f0             	sub    rax,rsi
  67e299:	48 39 c1             	cmp    rcx,rax
  67e29c:	0f 87 5c 01 00 00    	ja     67e3fe <__cxa_finalize@plt-0xd34a12>
  67e2a2:	48 89 df             	mov    rdi,rbx
  67e2a5:	49 8b 6c 24 18       	mov    rbp,QWORD PTR [r12+0x18]
  67e2aa:	48 39 c5             	cmp    rbp,rax
  67e2ad:	76 76                	jbe    67e325 <__cxa_finalize@plt-0xd34aeb>
  67e2af:	48 89 4c 24 30       	mov    QWORD PTR [rsp+0x30],rcx
  67e2b4:	48 89 da             	mov    rdx,rbx
  67e2b7:	48 29 ea             	sub    rdx,rbp
  67e2ba:	48 89 74 24 10       	mov    QWORD PTR [rsp+0x10],rsi
  67e2bf:	48 89 f0             	mov    rax,rsi
  67e2c2:	48 29 d0             	sub    rax,rdx
  67e2c5:	48 39 c2             	cmp    rdx,rax
  67e2c8:	76 2a                	jbe    67e2f4 <__cxa_finalize@plt-0xd34b1c>
  67e2ca:	48 89 f9             	mov    rcx,rdi
  67e2cd:	48 29 d9             	sub    rcx,rbx
  67e2d0:	48 39 c1             	cmp    rcx,rax
  67e2d3:	72 1f                	jb     67e2f4 <__cxa_finalize@plt-0xd34b1c>
  67e2d5:	49 8b 74 24 10       	mov    rsi,QWORD PTR [r12+0x10]
  67e2da:	48 8d 3c de          	lea    rdi,[rsi+rbx*8]
  67e2de:	48 c1 e0 03          	shl    rax,0x3
  67e2e2:	48 89 c2             	mov    rdx,rax
  67e2e5:	ff 15 85 4f da 00    	call   QWORD PTR [rip+0xda4f85]        # 1423270 <__memmove_chk@plt+0x6f880>
  67e2eb:	eb 29                	jmp    67e316 <__cxa_finalize@plt-0xd34afa>
  67e2ed:	49 8b 6c 24 18       	mov    rbp,QWORD PTR [r12+0x18]
  67e2f2:	eb 31                	jmp    67e325 <__cxa_finalize@plt-0xd34aeb>
  67e2f4:	48 29 d7             	sub    rdi,rdx
  67e2f7:	49 8b 44 24 10       	mov    rax,QWORD PTR [r12+0x10]
  67e2fc:	48 8d 34 e8          	lea    rsi,[rax+rbp*8]
  67e300:	48 89 fd             	mov    rbp,rdi
  67e303:	48 8d 3c f8          	lea    rdi,[rax+rdi*8]
  67e307:	48 c1 e2 03          	shl    rdx,0x3
  67e30b:	ff 15 6f 4f da 00    	call   QWORD PTR [rip+0xda4f6f]        # 1423280 <__memmove_chk@plt+0x6f890>
  67e311:	49 89 6c 24 18       	mov    QWORD PTR [r12+0x18],rbp
  67e316:	48 8b 4c 24 30       	mov    rcx,QWORD PTR [rsp+0x30]
  67e31b:	48 8b 74 24 10       	mov    rsi,QWORD PTR [rsp+0x10]
  67e320:	49 8d 54 24 08       	lea    rdx,[r12+0x8]
  67e325:	48 89 74 24 10       	mov    QWORD PTR [rsp+0x10],rsi
  67e32a:	48 01 f5             	add    rbp,rsi
  67e32d:	48 8b 12             	mov    rdx,QWORD PTR [rdx]
  67e330:	48 39 d5             	cmp    rbp,rdx
  67e333:	b8 00 00 00 00       	mov    eax,0x0
  67e338:	48 0f 43 c2          	cmovae rax,rdx
  67e33c:	48 29 c5             	sub    rbp,rax
  67e33f:	48 29 ea             	sub    rdx,rbp
  67e342:	48 89 cb             	mov    rbx,rcx
  67e345:	48 29 d3             	sub    rbx,rdx
  67e348:	76 47                	jbe    67e391 <__cxa_finalize@plt-0xd34a7f>
  67e34a:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
  67e34f:	48 8d 04 d6          	lea    rax,[rsi+rdx*8]
  67e353:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
  67e358:	48 c1 e2 03          	shl    rdx,0x3
  67e35c:	49 8b 44 24 10       	mov    rax,QWORD PTR [r12+0x10]
  67e361:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  67e366:	48 8d 3c e8          	lea    rdi,[rax+rbp*8]
  67e36a:	48 89 cd             	mov    rbp,rcx
  67e36d:	ff 15 fd 4e da 00    	call   QWORD PTR [rip+0xda4efd]        # 1423270 <__memmove_chk@plt+0x6f880>
  67e373:	48 c1 e3 03          	shl    rbx,0x3
  67e377:	48 8b 7c 24 50       	mov    rdi,QWORD PTR [rsp+0x50]
  67e37c:	48 8b 74 24 30       	mov    rsi,QWORD PTR [rsp+0x30]
  67e381:	48 89 da             	mov    rdx,rbx
  67e384:	ff 15 e6 4e da 00    	call   QWORD PTR [rip+0xda4ee6]        # 1423270 <__memmove_chk@plt+0x6f880>
  67e38a:	48 8b 5c 24 38       	mov    rbx,QWORD PTR [rsp+0x38]
  67e38f:	eb 25                	jmp    67e3b6 <__cxa_finalize@plt-0xd34a5a>
  67e391:	48 8d 14 cd 00 00 00 	lea    rdx,[rcx*8+0x0]
  67e398:	00 
  67e399:	48 c1 e5 03          	shl    rbp,0x3
  67e39d:	49 03 6c 24 10       	add    rbp,QWORD PTR [r12+0x10]
  67e3a2:	48 89 ef             	mov    rdi,rbp
  67e3a5:	48 8b 5c 24 38       	mov    rbx,QWORD PTR [rsp+0x38]
  67e3aa:	48 89 de             	mov    rsi,rbx
  67e3ad:	48 89 cd             	mov    rbp,rcx
  67e3b0:	ff 15 ba 4e da 00    	call   QWORD PTR [rip+0xda4eba]        # 1423270 <__memmove_chk@plt+0x6f880>
  67e3b6:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
  67e3bb:	48 01 e8             	add    rax,rbp
  67e3be:	49 89 44 24 20       	mov    QWORD PTR [r12+0x20],rax
  67e3c3:	48 8b 7c 24 58       	mov    rdi,QWORD PTR [rsp+0x58]
  67e3c8:	48 89 de             	mov    rsi,rbx
  67e3cb:	e8 2a 3d f9 ff       	call   6120fa <__cxa_finalize@plt-0xda0d16>
  67e3d0:	48 8d 5c 24 18       	lea    rbx,[rsp+0x18]
  67e3d5:	48 8d 2d b4 a1 db 00 	lea    rbp,[rip+0xdba1b4]        # 1438590 <__memmove_chk@plt+0x84ba0>
  67e3dc:	8a 44 24 07          	mov    al,BYTE PTR [rsp+0x7]
  67e3e0:	0f b6 f0             	movzx  esi,al
  67e3e3:	4c 89 e7             	mov    rdi,r12
  67e3e6:	e8 b5 e0 01 00       	call   69c4a0 <__cxa_finalize@plt-0xd16970>
  67e3eb:	b8 29 ef 69 ac       	mov    eax,0xac69ef29
  67e3f0:	f2 0f 10 44 24 08    	movsd  xmm0,QWORD PTR [rsp+0x8]
  67e3f6:	41 31 c5             	xor    r13d,eax
  67e3f9:	e9 dd fc ff ff       	jmp    67e0db <__cxa_finalize@plt-0xd34d35>
  67e3fe:	49 8d 7c 24 08       	lea    rdi,[r12+0x8]
  67e403:	48 89 ca             	mov    rdx,rcx
  67e406:	48 89 cd             	mov    rbp,rcx
  67e409:	6a 08                	push   0x8
  67e40b:	59                   	pop    rcx
  67e40c:	49 89 c8             	mov    r8,rcx
  67e40f:	e8 1b 10 f7 ff       	call   5ef42f <__cxa_finalize@plt-0xdc39e1>
  67e414:	49 8d 54 24 08       	lea    rdx,[r12+0x8]
  67e419:	48 89 e9             	mov    rcx,rbp
  67e41c:	49 8b 7c 24 08       	mov    rdi,QWORD PTR [r12+0x8]
  67e421:	49 8b 74 24 20       	mov    rsi,QWORD PTR [r12+0x20]
  67e426:	48 89 d8             	mov    rax,rbx
  67e429:	48 29 f0             	sub    rax,rsi
  67e42c:	e9 74 fe ff ff       	jmp    67e2a5 <__cxa_finalize@plt-0xd34b6b>
  67e431:	f2 0f 11 44 24 08    	movsd  QWORD PTR [rsp+0x8],xmm0
  67e437:	48 8d 35 42 a1 db 00 	lea    rsi,[rip+0xdba142]        # 1438580 <__memmove_chk@plt+0x84b90>
  67e43e:	48 8d 5c 24 18       	lea    rbx,[rsp+0x18]
  67e443:	48 89 df             	mov    rdi,rbx
  67e446:	e8 37 66 f8 ff       	call   604a82 <__cxa_finalize@plt-0xdae38e>
  67e44b:	48 8b 7b 08          	mov    rdi,QWORD PTR [rbx+0x8]
  67e44f:	8a 43 10             	mov    al,BYTE PTR [rbx+0x10]
  67e452:	80 3b 00             	cmp    BYTE PTR [rbx],0x0
  67e455:	75 0b                	jne    67e462 <__cxa_finalize@plt-0xd349ae>
  67e457:	f2 0f 10 44 24 08    	movsd  xmm0,QWORD PTR [rsp+0x8]
  67e45d:	f2 0f 11 47 08       	movsd  QWORD PTR [rdi+0x8],xmm0
  67e462:	0f b6 f0             	movzx  esi,al
  67e465:	e8 36 e0 01 00       	call   69c4a0 <__cxa_finalize@plt-0xd16970>
  67e46a:	48 8b 7c 24 48       	mov    rdi,QWORD PTR [rsp+0x48]
  67e46f:	4c 89 f6             	mov    rsi,r14
  67e472:	e8 83 3c f9 ff       	call   6120fa <__cxa_finalize@plt-0xda0d16>
  67e477:	4c 8b 6c 24 40       	mov    r13,QWORD PTR [rsp+0x40]
  67e47c:	4c 89 ef             	mov    rdi,r13
  67e47f:	e8 4a eb 00 00       	call   68cfce <__cxa_finalize@plt-0xd25e42>
  67e484:	48 81 c4 98 00 00 00 	add    rsp,0x98
  67e48b:	5b                   	pop    rbx
  67e48c:	41 5c                	pop    r12
  67e48e:	41 5d                	pop    r13
  67e490:	41 5e                	pop    r14
  67e492:	41 5f                	pop    r15
  67e494:	5d                   	pop    rbp
  67e495:	c3                   	ret
  67e496:	48 8d 3d c5 f6 b9 ff 	lea    rdi,[rip+0xffffffffffb9f6c5]        # 21db62 <__cxa_finalize@plt-0x11952ae>
  67e49d:	48 8d 15 3c 91 d4 00 	lea    rdx,[rip+0xd4913c]        # 13c75e0 <__memmove_chk@plt+0x13bf0>
  67e4a4:	6a 11                	push   0x11
  67e4a6:	5e                   	pop    rsi
  67e4a7:	e8 94 bd f5 ff       	call   5da240 <__cxa_finalize@plt-0xdd8bd0>
  67e4ac:	48 b9 f0 de bc 9a 78 	movabs rcx,0x123456789abcdef0
  67e4b3:	56 34 12 
  67e4b6:	64 48 89 0c 25 68 ff 	mov    QWORD PTR fs:0xffffffffffffff68,rcx
  67e4bd:	ff ff 
  67e4bf:	64 c6 04 25 70 ff ff 	mov    BYTE PTR fs:0xffffffffffffff70,0x1
  67e4c6:	ff 01 
  67e4c8:	e9 d1 fa ff ff       	jmp    67df9e <__cxa_finalize@plt-0xd34e72>
  67e4cd:	4c 8d 6c 24 18       	lea    r13,[rsp+0x18]
  67e4d2:	6a 08                	push   0x8
  67e4d4:	59                   	pop    rcx
  67e4d5:	4c 89 ef             	mov    rdi,r13
  67e4d8:	31 f6                	xor    esi,esi
  67e4da:	4c 89 fa             	mov    rdx,r15
  67e4dd:	49 89 c8             	mov    r8,rcx
  67e4e0:	e8 4a 0f f7 ff       	call   5ef42f <__cxa_finalize@plt-0xdc39e1>
  67e4e5:	4d 8b 75 08          	mov    r14,QWORD PTR [r13+0x8]
  67e4e9:	4d 8b 7d 10          	mov    r15,QWORD PTR [r13+0x10]
  67e4ed:	e9 55 fb ff ff       	jmp    67e047 <__cxa_finalize@plt-0xd34dc9>
