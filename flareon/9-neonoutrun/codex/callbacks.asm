
artifacts/neon_outrun:     file format elf64-x86-64


Disassembly of section .text:

000000000067e81e <.text+0x1bbd5e>:
  67e81e:	55                   	push   rbp
  67e81f:	41 57                	push   r15
  67e821:	41 56                	push   r14
  67e823:	41 55                	push   r13
  67e825:	41 54                	push   r12
  67e827:	53                   	push   rbx
  67e828:	48 81 ec b8 00 00 00 	sub    rsp,0xb8
  67e82f:	49 89 fe             	mov    r14,rdi
  67e832:	e8 bb fc ff ff       	call   67e4f2 <__cxa_finalize@plt-0xd3491e>
  67e837:	48 89 c3             	mov    rbx,rax
  67e83a:	4c 8d 7c 24 78       	lea    r15,[rsp+0x78]
  67e83f:	49 89 07             	mov    QWORD PTR [r15],rax
  67e842:	4c 89 f7             	mov    rdi,r14
  67e845:	ff 15 c5 57 da 00    	call   QWORD PTR [rip+0xda57c5]        # 1424010 <__memmove_chk@plt+0x70620>
  67e84b:	4c 8d a4 24 80 00 00 	lea    r12,[rsp+0x80]
  67e852:	00 
  67e853:	4d 89 34 24          	mov    QWORD PTR [r12],r14
  67e857:	48 89 44 24 08       	mov    QWORD PTR [rsp+0x8],rax
  67e85c:	4c 89 f7             	mov    rdi,r14
  67e85f:	e8 30 9d f9 ff       	call   618594 <__cxa_finalize@plt-0xd9a87c>
  67e864:	48 8d 35 9e 02 00 00 	lea    rsi,[rip+0x29e]        # 67eb09 <__cxa_finalize@plt-0xd34307>
  67e86b:	4c 89 ff             	mov    rdi,r15
  67e86e:	48 89 c2             	mov    rdx,rax
  67e871:	4c 89 e1             	mov    rcx,r12
  67e874:	e8 93 fc ff ff       	call   67e50c <__cxa_finalize@plt-0xd34904>
  67e879:	48 85 c0             	test   rax,rax
  67e87c:	0f 84 a8 00 00 00    	je     67e92a <__cxa_finalize@plt-0xd344e6>
  67e882:	49 89 c6             	mov    r14,rax
  67e885:	48 8d 7c 24 08       	lea    rdi,[rsp+0x8]
  67e88a:	48 89 c6             	mov    rsi,rax
  67e88d:	ff 15 85 57 da 00    	call   QWORD PTR [rip+0xda5785]        # 1424018 <__memmove_chk@plt+0x70628>
  67e893:	4c 89 f7             	mov    rdi,r14
  67e896:	ff 15 b4 57 da 00    	call   QWORD PTR [rip+0xda57b4]        # 1424050 <__memmove_chk@plt+0x70660>
  67e89c:	84 c0                	test   al,al
  67e89e:	0f 84 86 00 00 00    	je     67e92a <__cxa_finalize@plt-0xd344e6>
  67e8a4:	48 89 df             	mov    rdi,rbx
  67e8a7:	e8 9c 91 f9 ff       	call   617a48 <__cxa_finalize@plt-0xd9b3c8>
  67e8ac:	48 8d 7c 24 10       	lea    rdi,[rsp+0x10]
  67e8b1:	4c 89 f6             	mov    rsi,r14
  67e8b4:	48 89 c2             	mov    rdx,rax
  67e8b7:	e8 d0 98 f9 ff       	call   61818c <__cxa_finalize@plt-0xd9ac84>
  67e8bc:	48 8d 35 cd 9c db 00 	lea    rsi,[rip+0xdb9ccd]        # 1438590 <__memmove_chk@plt+0x84ba0>
  67e8c3:	4c 8d 74 24 28       	lea    r14,[rsp+0x28]
  67e8c8:	4c 89 f7             	mov    rdi,r14
  67e8cb:	e8 b2 61 f8 ff       	call   604a82 <__cxa_finalize@plt-0xdae38e>
  67e8d0:	49 8b 7e 08          	mov    rdi,QWORD PTR [r14+0x8]
  67e8d4:	41 8a 46 10          	mov    al,BYTE PTR [r14+0x10]
  67e8d8:	41 80 3e 00          	cmp    BYTE PTR [r14],0x0
  67e8dc:	75 35                	jne    67e913 <__cxa_finalize@plt-0xd344fd>
  67e8de:	f2 0f 10 47 08       	movsd  xmm0,QWORD PTR [rdi+0x8]
  67e8e3:	66 0f 29 44 24 60    	movapd XMMWORD PTR [rsp+0x60],xmm0
  67e8e9:	0f b6 f0             	movzx  esi,al
  67e8ec:	e8 af db 01 00       	call   69c4a0 <__cxa_finalize@plt-0xd16970>
  67e8f1:	48 8d 35 88 9c db 00 	lea    rsi,[rip+0xdb9c88]        # 1438580 <__memmove_chk@plt+0x84b90>
  67e8f8:	4c 8d 74 24 28       	lea    r14,[rsp+0x28]
  67e8fd:	4c 89 f7             	mov    rdi,r14
  67e900:	e8 7d 61 f8 ff       	call   604a82 <__cxa_finalize@plt-0xdae38e>
  67e905:	49 8b 7e 08          	mov    rdi,QWORD PTR [r14+0x8]
  67e909:	41 8a 46 10          	mov    al,BYTE PTR [r14+0x10]
  67e90d:	41 80 3e 00          	cmp    BYTE PTR [r14],0x0
  67e911:	74 31                	je     67e944 <__cxa_finalize@plt-0xd344cc>
  67e913:	0f b6 f0             	movzx  esi,al
  67e916:	e8 85 db 01 00       	call   69c4a0 <__cxa_finalize@plt-0xd16970>
  67e91b:	48 8b 7c 24 10       	mov    rdi,QWORD PTR [rsp+0x10]
  67e920:	48 8b 74 24 18       	mov    rsi,QWORD PTR [rsp+0x18]
  67e925:	e8 2a 32 f8 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  67e92a:	48 89 df             	mov    rdi,rbx
  67e92d:	e8 9c e6 00 00       	call   68cfce <__cxa_finalize@plt-0xd25e42>
  67e932:	48 81 c4 b8 00 00 00 	add    rsp,0xb8
  67e939:	5b                   	pop    rbx
  67e93a:	41 5c                	pop    r12
  67e93c:	41 5d                	pop    r13
  67e93e:	41 5e                	pop    r14
  67e940:	41 5f                	pop    r15
  67e942:	5d                   	pop    rbp
  67e943:	c3                   	ret
  67e944:	f2 0f 10 47 08       	movsd  xmm0,QWORD PTR [rdi+0x8]
  67e949:	0f 29 44 24 50       	movaps XMMWORD PTR [rsp+0x50],xmm0
  67e94e:	0f b6 f0             	movzx  esi,al
  67e951:	e8 4a db 01 00       	call   69c4a0 <__cxa_finalize@plt-0xd16970>
  67e956:	66 0f 28 5c 24 50    	movapd xmm3,XMMWORD PTR [rsp+0x50]
  67e95c:	66 0f 28 05 fc 6a a8 	movapd xmm0,XMMWORD PTR [rip+0xffffffffffa86afc]        # 105460 <__cxa_finalize@plt-0x12ad9b0>
  67e963:	ff 
  67e964:	66 0f 28 54 24 60    	movapd xmm2,XMMWORD PTR [rsp+0x60]
  67e96a:	66 0f 28 ca          	movapd xmm1,xmm2
  67e96e:	66 0f 54 c8          	andpd  xmm1,xmm0
  67e972:	66 0f 2e 0d ae 94 a8 	ucomisd xmm1,QWORD PTR [rip+0xffffffffffa894ae]        # 107e28 <__cxa_finalize@plt-0x12aafe8>
  67e979:	ff 
  67e97a:	76 9f                	jbe    67e91b <__cxa_finalize@plt-0xd344f5>
  67e97c:	66 0f 28 cb          	movapd xmm1,xmm3
  67e980:	66 0f 54 c8          	andpd  xmm1,xmm0
  67e984:	66 0f 2e 0d 9c 94 a8 	ucomisd xmm1,QWORD PTR [rip+0xffffffffffa8949c]        # 107e28 <__cxa_finalize@plt-0x12aafe8>
  67e98b:	ff 
  67e98c:	76 8d                	jbe    67e91b <__cxa_finalize@plt-0xd344f5>
  67e98e:	f2 0f 5c d3          	subsd  xmm2,xmm3
  67e992:	66 0f 54 d0          	andpd  xmm2,xmm0
  67e996:	f2 0f 10 05 8a 94 a8 	movsd  xmm0,QWORD PTR [rip+0xffffffffffa8948a]        # 107e28 <__cxa_finalize@plt-0x12aafe8>
  67e99d:	ff 
  67e99e:	66 0f 2e c2          	ucomisd xmm0,xmm2
  67e9a2:	0f 86 73 ff ff ff    	jbe    67e91b <__cxa_finalize@plt-0xd344f5>
  67e9a8:	4c 8d 7c 24 28       	lea    r15,[rsp+0x28]
  67e9ad:	4c 89 ff             	mov    rdi,r15
  67e9b0:	e8 7e fc ff ff       	call   67e633 <__cxa_finalize@plt-0xd347dd>
  67e9b5:	4d 8b 77 08          	mov    r14,QWORD PTR [r15+0x8]
  67e9b9:	41 8a 6f 10          	mov    bpl,BYTE PTR [r15+0x10]
  67e9bd:	41 80 3f 00          	cmp    BYTE PTR [r15],0x0
  67e9c1:	74 0c                	je     67e9cf <__cxa_finalize@plt-0xd34441>
  67e9c3:	40 0f b6 f5          	movzx  esi,bpl
  67e9c7:	4c 89 f7             	mov    rdi,r14
  67e9ca:	e9 47 ff ff ff       	jmp    67e916 <__cxa_finalize@plt-0xd344fa>
  67e9cf:	49 8b 76 10          	mov    rsi,QWORD PTR [r14+0x10]
  67e9d3:	49 8b 56 18          	mov    rdx,QWORD PTR [r14+0x18]
  67e9d7:	4c 8d bc 24 88 00 00 	lea    r15,[rsp+0x88]
  67e9de:	00 
  67e9df:	4c 89 ff             	mov    rdi,r15
  67e9e2:	e8 4b d9 f4 ff       	call   5cc332 <__cxa_finalize@plt-0xde6ade>
  67e9e7:	40 0f b6 f5          	movzx  esi,bpl
  67e9eb:	4c 89 f7             	mov    rdi,r14
  67e9ee:	e8 ad da 01 00       	call   69c4a0 <__cxa_finalize@plt-0xd16970>
  67e9f3:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
  67e9f8:	48 8b 4c 24 18       	mov    rcx,QWORD PTR [rsp+0x18]
  67e9fd:	48 8b 54 24 20       	mov    rdx,QWORD PTR [rsp+0x20]
  67ea02:	4d 8b 77 08          	mov    r14,QWORD PTR [r15+0x8]
  67ea06:	49 8b 77 10          	mov    rsi,QWORD PTR [r15+0x10]
  67ea0a:	48 39 f2             	cmp    rdx,rsi
  67ea0d:	48 89 f7             	mov    rdi,rsi
  67ea10:	48 0f 42 fa          	cmovb  rdi,rdx
  67ea14:	45 31 c9             	xor    r9d,r9d
  67ea17:	41 b8 24 de 7d 7f    	mov    r8d,0x7f7dde24
  67ea1d:	41 81 f8 73 ad 25 8a 	cmp    r8d,0x8a25ad73
  67ea24:	74 36                	je     67ea5c <__cxa_finalize@plt-0xd343b4>
  67ea26:	41 81 f8 24 de 7d 7f 	cmp    r8d,0x7f7dde24
  67ea2d:	74 0b                	je     67ea3a <__cxa_finalize@plt-0xd343d6>
  67ea2f:	41 81 f8 b5 a7 62 e3 	cmp    r8d,0xe362a7b5
  67ea36:	74 39                	je     67ea71 <__cxa_finalize@plt-0xd3439f>
  67ea38:	eb 32                	jmp    67ea6c <__cxa_finalize@plt-0xd343a4>
  67ea3a:	45 31 c9             	xor    r9d,r9d
  67ea3d:	4c 39 ce             	cmp    rsi,r9
  67ea40:	74 12                	je     67ea54 <__cxa_finalize@plt-0xd343bc>
  67ea42:	49 39 f9             	cmp    r9,rdi
  67ea45:	73 08                	jae    67ea4f <__cxa_finalize@plt-0xd343c1>
  67ea47:	47 8a 14 0e          	mov    r10b,BYTE PTR [r14+r9*1]
  67ea4b:	46 88 14 09          	mov    BYTE PTR [rcx+r9*1],r10b
  67ea4f:	49 ff c1             	inc    r9
  67ea52:	eb e9                	jmp    67ea3d <__cxa_finalize@plt-0xd343d3>
  67ea54:	41 b9 57 73 58 f5    	mov    r9d,0xf5587357
  67ea5a:	eb 10                	jmp    67ea6c <__cxa_finalize@plt-0xd343a4>
  67ea5c:	41 b9 c6 0a 47 69    	mov    r9d,0x69470ac6
  67ea62:	48 83 fa 1f          	cmp    rdx,0x1f
  67ea66:	72 04                	jb     67ea6c <__cxa_finalize@plt-0xd343a4>
  67ea68:	80 41 1e 3b          	add    BYTE PTR [rcx+0x1e],0x3b
  67ea6c:	45 31 c8             	xor    r8d,r9d
  67ea6f:	eb ac                	jmp    67ea1d <__cxa_finalize@plt-0xd343f3>
  67ea71:	48 bd 00 00 00 00 00 	movabs rbp,0x8000000000000000
  67ea78:	00 00 80 
  67ea7b:	48 8d b4 24 a0 00 00 	lea    rsi,[rsp+0xa0]
  67ea82:	00 
  67ea83:	48 89 06             	mov    QWORD PTR [rsi],rax
  67ea86:	48 89 4e 08          	mov    QWORD PTR [rsi+0x8],rcx
  67ea8a:	48 89 56 10          	mov    QWORD PTR [rsi+0x10],rdx
  67ea8e:	4c 8d 7c 24 28       	lea    r15,[rsp+0x28]
  67ea93:	4c 89 ff             	mov    rdi,r15
  67ea96:	e8 96 41 e4 ff       	call   4c2c31 <__cxa_finalize@plt-0xef01df>
  67ea9b:	49 8b 3f             	mov    rdi,QWORD PTR [r15]
  67ea9e:	48 89 f8             	mov    rax,rdi
  67eaa1:	48 f7 d8             	neg    rax
  67eaa4:	71 11                	jno    67eab7 <__cxa_finalize@plt-0xd34359>
  67eaa6:	4c 8b 64 24 30       	mov    r12,QWORD PTR [rsp+0x30]
  67eaab:	4c 8b 7c 24 38       	mov    r15,QWORD PTR [rsp+0x38]
  67eab0:	4c 8b 6c 24 40       	mov    r13,QWORD PTR [rsp+0x40]
  67eab5:	eb 0d                	jmp    67eac4 <__cxa_finalize@plt-0xd3434c>
  67eab7:	48 8b 74 24 30       	mov    rsi,QWORD PTR [rsp+0x30]
  67eabc:	e8 93 30 f8 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  67eac1:	49 89 ec             	mov    r12,rbp
  67eac4:	48 8b bc 24 88 00 00 	mov    rdi,QWORD PTR [rsp+0x88]
  67eacb:	00 
  67eacc:	4c 89 f6             	mov    rsi,r14
  67eacf:	e8 80 30 f8 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  67ead4:	49 39 ec             	cmp    r12,rbp
  67ead7:	0f 84 4d fe ff ff    	je     67e92a <__cxa_finalize@plt-0xd344e6>
  67eadd:	48 89 df             	mov    rdi,rbx
  67eae0:	4c 89 fe             	mov    rsi,r15
  67eae3:	4c 89 ea             	mov    rdx,r13
  67eae6:	e8 62 98 f9 ff       	call   61834d <__cxa_finalize@plt-0xd9aac3>
  67eaeb:	48 85 c0             	test   rax,rax
  67eaee:	74 0e                	je     67eafe <__cxa_finalize@plt-0xd34312>
  67eaf0:	48 8d 7c 24 08       	lea    rdi,[rsp+0x8]
  67eaf5:	48 89 c6             	mov    rsi,rax
  67eaf8:	ff 15 1a 55 da 00    	call   QWORD PTR [rip+0xda551a]        # 1424018 <__memmove_chk@plt+0x70628>
  67eafe:	4c 89 e7             	mov    rdi,r12
  67eb01:	4c 89 fe             	mov    rsi,r15
  67eb04:	e9 1c fe ff ff       	jmp    67e925 <__cxa_finalize@plt-0xd344eb>
  67eb09:	53                   	push   rbx
  67eb0a:	48 83 ec 20          	sub    rsp,0x20
  67eb0e:	64 48 8b 04 25 00 00 	mov    rax,QWORD PTR fs:0x0
  67eb15:	00 00 
  67eb17:	48 8d 98 48 ff ff ff 	lea    rbx,[rax-0xb8]
  67eb1e:	64 8a 04 25 60 ff ff 	mov    al,BYTE PTR fs:0xffffffffffffff60
  67eb25:	ff 
  67eb26:	3c 01                	cmp    al,0x1
  67eb28:	75 09                	jne    67eb33 <__cxa_finalize@plt-0xd342dd>
  67eb2a:	48 89 d8             	mov    rax,rbx
  67eb2d:	48 83 c4 20          	add    rsp,0x20
  67eb31:	5b                   	pop    rbx
  67eb32:	c3                   	ret
  67eb33:	84 c0                	test   al,al
  67eb35:	74 04                	je     67eb3b <__cxa_finalize@plt-0xd342d5>
  67eb37:	31 db                	xor    ebx,ebx
  67eb39:	eb ef                	jmp    67eb2a <__cxa_finalize@plt-0xd342e6>
  67eb3b:	48 85 ff             	test   rdi,rdi
  67eb3e:	74 19                	je     67eb59 <__cxa_finalize@plt-0xd342b7>
  67eb40:	8a 07                	mov    al,BYTE PTR [rdi]
  67eb42:	48 83 27 00          	and    QWORD PTR [rdi],0x0
  67eb46:	a8 01                	test   al,0x1
  67eb48:	74 0f                	je     67eb59 <__cxa_finalize@plt-0xd342b7>
  67eb4a:	48 8b 47 18          	mov    rax,QWORD PTR [rdi+0x18]
  67eb4e:	48 89 44 24 10       	mov    QWORD PTR [rsp+0x10],rax
  67eb53:	0f 10 47 08          	movups xmm0,XMMWORD PTR [rdi+0x8]
  67eb57:	eb 03                	jmp    67eb5c <__cxa_finalize@plt-0xd342b4>
  67eb59:	0f 57 c0             	xorps  xmm0,xmm0
  67eb5c:	0f 29 04 24          	movaps XMMWORD PTR [rsp],xmm0
  67eb60:	48 8b 44 24 10       	mov    rax,QWORD PTR [rsp+0x10]
  67eb65:	48 89 43 10          	mov    QWORD PTR [rbx+0x10],rax
  67eb69:	0f 28 04 24          	movaps xmm0,XMMWORD PTR [rsp]
  67eb6d:	0f 11 03             	movups XMMWORD PTR [rbx],xmm0
  67eb70:	64 c6 04 25 60 ff ff 	mov    BYTE PTR fs:0xffffffffffffff60,0x1
  67eb77:	ff 01 
  67eb79:	48 89 df             	mov    rdi,rbx
  67eb7c:	e8 6a fc ff ff       	call   67e7eb <__cxa_finalize@plt-0xd34625>
  67eb81:	eb a7                	jmp    67eb2a <__cxa_finalize@plt-0xd342e6>
  67eb83:	55                   	push   rbp
  67eb84:	41 57                	push   r15
  67eb86:	41 56                	push   r14
  67eb88:	41 55                	push   r13
  67eb8a:	41 54                	push   r12
  67eb8c:	53                   	push   rbx
  67eb8d:	48 83 ec 68          	sub    rsp,0x68
  67eb91:	49 89 fe             	mov    r14,rdi
  67eb94:	e8 59 f9 ff ff       	call   67e4f2 <__cxa_finalize@plt-0xd3491e>
  67eb99:	48 89 c3             	mov    rbx,rax
  67eb9c:	48 89 44 24 38       	mov    QWORD PTR [rsp+0x38],rax
  67eba1:	4c 89 f7             	mov    rdi,r14
  67eba4:	ff 15 66 54 da 00    	call   QWORD PTR [rip+0xda5466]        # 1424010 <__memmove_chk@plt+0x70620>
  67ebaa:	4c 89 74 24 40       	mov    QWORD PTR [rsp+0x40],r14
  67ebaf:	48 89 44 24 48       	mov    QWORD PTR [rsp+0x48],rax
  67ebb4:	31 ff                	xor    edi,edi
  67ebb6:	e8 c2 92 00 00       	call   687e7d <__cxa_finalize@plt-0xd2af93>
  67ebbb:	48 85 c0             	test   rax,rax
  67ebbe:	0f 84 08 0e 00 00    	je     67f9cc <__cxa_finalize@plt-0xd33444>
  67ebc4:	49 89 c7             	mov    r15,rax
  67ebc7:	48 8b 00             	mov    rax,QWORD PTR [rax]
  67ebca:	48 b9 ff ff ff ff ff 	movabs rcx,0x7fffffffffffffff
  67ebd1:	ff ff 7f 
  67ebd4:	48 39 c8             	cmp    rax,rcx
  67ebd7:	0f 83 d7 0d 00 00    	jae    67f9b4 <__cxa_finalize@plt-0xd3345c>
  67ebdd:	48 8d 48 01          	lea    rcx,[rax+0x1]
  67ebe1:	49 89 0f             	mov    QWORD PTR [r15],rcx
  67ebe4:	4d 8b 67 08          	mov    r12,QWORD PTR [r15+0x8]
  67ebe8:	4d 85 e4             	test   r12,r12
  67ebeb:	0f 84 15 01 00 00    	je     67ed06 <__cxa_finalize@plt-0xd3410a>
  67ebf1:	49 8b 47 10          	mov    rax,QWORD PTR [r15+0x10]
  67ebf5:	4c 8b 68 40          	mov    r13,QWORD PTR [rax+0x40]
  67ebf9:	31 ed                	xor    ebp,ebp
  67ebfb:	49 83 fd 01          	cmp    r13,0x1
  67ebff:	48 83 d5 01          	adc    rbp,0x1
  67ec03:	48 89 df             	mov    rdi,rbx
  67ec06:	e8 3d 8e f9 ff       	call   617a48 <__cxa_finalize@plt-0xd9b3c8>
  67ec0b:	48 89 ef             	mov    rdi,rbp
  67ec0e:	4c 89 ee             	mov    rsi,r13
  67ec11:	48 89 c2             	mov    rdx,rax
  67ec14:	e8 31 96 f9 ff       	call   61824a <__cxa_finalize@plt-0xd9abc6>
  67ec19:	48 89 df             	mov    rdi,rbx
  67ec1c:	e8 36 8e f9 ff       	call   617a57 <__cxa_finalize@plt-0xd9b3b9>
  67ec21:	48 8b 7b 38          	mov    rdi,QWORD PTR [rbx+0x38]
  67ec25:	4c 89 e6             	mov    rsi,r12
  67ec28:	ff 15 1a 54 da 00    	call   QWORD PTR [rip+0xda541a]        # 1424048 <__memmove_chk@plt+0x70658>
  67ec2e:	48 85 c0             	test   rax,rax
  67ec31:	0f 84 89 0d 00 00    	je     67f9c0 <__cxa_finalize@plt-0xd33450>
  67ec37:	49 ff 0f             	dec    QWORD PTR [r15]
  67ec3a:	48 8d 35 c2 91 00 00 	lea    rsi,[rip+0x91c2]        # 687e03 <__cxa_finalize@plt-0xd2b00d>
  67ec41:	48 8d 7c 24 38       	lea    rdi,[rsp+0x38]
  67ec46:	48 8d 4c 24 40       	lea    rcx,[rsp+0x40]
  67ec4b:	48 89 c2             	mov    rdx,rax
  67ec4e:	e8 b9 f8 ff ff       	call   67e50c <__cxa_finalize@plt-0xd34904>
  67ec53:	48 85 c0             	test   rax,rax
  67ec56:	0f 84 ad 00 00 00    	je     67ed09 <__cxa_finalize@plt-0xd34107>
  67ec5c:	48 8d 7c 24 48       	lea    rdi,[rsp+0x48]
  67ec61:	48 89 c6             	mov    rsi,rax
  67ec64:	ff 15 ae 53 da 00    	call   QWORD PTR [rip+0xda53ae]        # 1424018 <__memmove_chk@plt+0x70628>
  67ec6a:	41 83 7e 10 02       	cmp    DWORD PTR [r14+0x10],0x2
  67ec6f:	0f 8c 94 00 00 00    	jl     67ed09 <__cxa_finalize@plt-0xd34107>
  67ec75:	6a 01                	push   0x1
  67ec77:	5e                   	pop    rsi
  67ec78:	4c 89 f7             	mov    rdi,r14
  67ec7b:	e8 fa 98 f9 ff       	call   61857a <__cxa_finalize@plt-0xd9a896>
  67ec80:	48 89 c7             	mov    rdi,rax
  67ec83:	48 89 de             	mov    rsi,rbx
  67ec86:	e8 92 95 f9 ff       	call   61821d <__cxa_finalize@plt-0xd9abf3>
  67ec8b:	48 85 c0             	test   rax,rax
  67ec8e:	74 79                	je     67ed09 <__cxa_finalize@plt-0xd34107>
  67ec90:	48 89 c7             	mov    rdi,rax
  67ec93:	ff 15 9f 53 da 00    	call   QWORD PTR [rip+0xda539f]        # 1424038 <__memmove_chk@plt+0x70648>
  67ec99:	f2 0f 11 44 24 08    	movsd  QWORD PTR [rsp+0x8],xmm0
  67ec9f:	4c 8d 74 24 10       	lea    r14,[rsp+0x10]
  67eca4:	4c 89 f7             	mov    rdi,r14
  67eca7:	e8 cd f9 ff ff       	call   67e679 <__cxa_finalize@plt-0xd34797>
  67ecac:	49 8b 7e 08          	mov    rdi,QWORD PTR [r14+0x8]
  67ecb0:	41 80 3e 00          	cmp    BYTE PTR [r14],0x0
  67ecb4:	41 0f b6 76 10       	movzx  esi,BYTE PTR [r14+0x10]
  67ecb9:	0f 85 eb 0c 00 00    	jne    67f9aa <__cxa_finalize@plt-0xd33466>
  67ecbf:	4c 8b 77 20          	mov    r14,QWORD PTR [rdi+0x20]
  67ecc3:	4d 85 f6             	test   r14,r14
  67ecc6:	74 58                	je     67ed20 <__cxa_finalize@plt-0xd340f0>
  67ecc8:	48 8b 47 18          	mov    rax,QWORD PTR [rdi+0x18]
  67eccc:	48 8d 48 01          	lea    rcx,[rax+0x1]
  67ecd0:	48 8b 57 08          	mov    rdx,QWORD PTR [rdi+0x8]
  67ecd4:	4c 8b 47 10          	mov    r8,QWORD PTR [rdi+0x10]
  67ecd8:	45 31 c9             	xor    r9d,r9d
  67ecdb:	48 39 d1             	cmp    rcx,rdx
  67ecde:	4c 0f 43 ca          	cmovae r9,rdx
  67ece2:	49 f7 d9             	neg    r9
  67ece5:	4a 8d 0c 08          	lea    rcx,[rax+r9*1]
  67ece9:	48 ff c1             	inc    rcx
  67ecec:	48 89 4f 18          	mov    QWORD PTR [rdi+0x18],rcx
  67ecf0:	49 8d 4e ff          	lea    rcx,[r14-0x1]
  67ecf4:	48 89 4f 20          	mov    QWORD PTR [rdi+0x20],rcx
  67ecf8:	f2 41 0f 10 04 c0    	movsd  xmm0,QWORD PTR [r8+rax*8]
  67ecfe:	f2 0f 11 44 24 30    	movsd  QWORD PTR [rsp+0x30],xmm0
  67ed04:	eb 1a                	jmp    67ed20 <__cxa_finalize@plt-0xd340f0>
  67ed06:	49 89 07             	mov    QWORD PTR [r15],rax
  67ed09:	48 89 df             	mov    rdi,rbx
  67ed0c:	e8 bd e2 00 00       	call   68cfce <__cxa_finalize@plt-0xd25e42>
  67ed11:	48 83 c4 68          	add    rsp,0x68
  67ed15:	5b                   	pop    rbx
  67ed16:	41 5c                	pop    r12
  67ed18:	41 5d                	pop    r13
  67ed1a:	41 5e                	pop    r14
  67ed1c:	41 5f                	pop    r15
  67ed1e:	5d                   	pop    rbp
  67ed1f:	c3                   	ret
  67ed20:	e8 7b d7 01 00       	call   69c4a0 <__cxa_finalize@plt-0xd16970>
  67ed25:	4d 85 f6             	test   r14,r14
  67ed28:	74 df                	je     67ed09 <__cxa_finalize@plt-0xd34107>
  67ed2a:	4c 8d 74 24 10       	lea    r14,[rsp+0x10]
  67ed2f:	4c 89 f7             	mov    rdi,r14
  67ed32:	e8 fa 11 f6 ff       	call   5dff31 <__cxa_finalize@plt-0xdd2edf>
  67ed37:	49 8b 7e 08          	mov    rdi,QWORD PTR [r14+0x8]
  67ed3b:	41 80 3e 00          	cmp    BYTE PTR [r14],0x0
  67ed3f:	41 0f b6 76 10       	movzx  esi,BYTE PTR [r14+0x10]
  67ed44:	0f 85 60 0c 00 00    	jne    67f9aa <__cxa_finalize@plt-0xd33466>
  67ed4a:	4c 8b 77 08          	mov    r14,QWORD PTR [rdi+0x8]
  67ed4e:	49 8d 46 01          	lea    rax,[r14+0x1]
  67ed52:	48 89 47 08          	mov    QWORD PTR [rdi+0x8],rax
  67ed56:	e8 45 d7 01 00       	call   69c4a0 <__cxa_finalize@plt-0xd16970>
  67ed5b:	31 c0                	xor    eax,eax
  67ed5d:	b9 17 65 7b a5       	mov    ecx,0xa57b6517
  67ed62:	31 d2                	xor    edx,edx
  67ed64:	81 f9 ac 7b 87 86    	cmp    ecx,0x86877bac
  67ed6a:	0f 84 3f 01 00 00    	je     67eeaf <__cxa_finalize@plt-0xd33f61>
  67ed70:	81 f9 60 56 62 88    	cmp    ecx,0x88625660
  67ed76:	0f 84 3d 01 00 00    	je     67eeb9 <__cxa_finalize@plt-0xd33f57>
  67ed7c:	81 f9 a2 d7 21 a3    	cmp    ecx,0xa321d7a2
  67ed82:	0f 84 8d 00 00 00    	je     67ee15 <__cxa_finalize@plt-0xd33ffb>
  67ed88:	81 f9 17 65 7b a5    	cmp    ecx,0xa57b6517
  67ed8e:	0f 84 ec 00 00 00    	je     67ee80 <__cxa_finalize@plt-0xd33f90>
  67ed94:	81 f9 92 a2 7d d5    	cmp    ecx,0xd57da292
  67ed9a:	0f 84 06 01 00 00    	je     67eea6 <__cxa_finalize@plt-0xd33f6a>
  67eda0:	81 f9 6f b8 5d e3    	cmp    ecx,0xe35db86f
  67eda6:	74 7a                	je     67ee22 <__cxa_finalize@plt-0xd33fee>
  67eda8:	81 f9 8f a8 e1 0c    	cmp    ecx,0xce1a88f
  67edae:	74 7e                	je     67ee2e <__cxa_finalize@plt-0xd33fe2>
  67edb0:	81 f9 25 3d a7 0d    	cmp    ecx,0xda73d25
  67edb6:	0f 84 cd 00 00 00    	je     67ee89 <__cxa_finalize@plt-0xd33f87>
  67edbc:	81 f9 48 4d 26 11    	cmp    ecx,0x11264d48
  67edc2:	74 76                	je     67ee3a <__cxa_finalize@plt-0xd33fd6>
  67edc4:	81 f9 a1 87 5d 19    	cmp    ecx,0x195d87a1
  67edca:	0f 84 a9 00 00 00    	je     67ee79 <__cxa_finalize@plt-0xd33f97>
  67edd0:	81 f9 59 79 ce 1c    	cmp    ecx,0x1cce7959
  67edd6:	0f 84 94 00 00 00    	je     67ee70 <__cxa_finalize@plt-0xd33fa0>
  67eddc:	81 f9 f6 f6 51 3d    	cmp    ecx,0x3d51f6f6
  67ede2:	0f 84 ab 00 00 00    	je     67ee93 <__cxa_finalize@plt-0xd33f7d>
  67ede8:	81 f9 aa e6 1a 59    	cmp    ecx,0x591ae6aa
  67edee:	0f 84 a9 00 00 00    	je     67ee9d <__cxa_finalize@plt-0xd33f73>
  67edf4:	81 f9 63 d6 a0 5a    	cmp    ecx,0x5aa0d663
  67edfa:	74 64                	je     67ee60 <__cxa_finalize@plt-0xd33fb0>
  67edfc:	81 f9 0e 40 23 77    	cmp    ecx,0x7723400e
  67ee02:	74 65                	je     67ee69 <__cxa_finalize@plt-0xd33fa7>
  67ee04:	81 f9 ec 7c d3 0b    	cmp    ecx,0xbd37cec
  67ee0a:	0f 84 b7 00 00 00    	je     67eec7 <__cxa_finalize@plt-0xd33f49>
  67ee10:	e9 ab 00 00 00       	jmp    67eec0 <__cxa_finalize@plt-0xd33f50>
  67ee15:	c0 c0 04             	rol    al,0x4
  67ee18:	ba c1 01 81 f9       	mov    edx,0xf98101c1
  67ee1d:	e9 9e 00 00 00       	jmp    67eec0 <__cxa_finalize@plt-0xd33f50>
  67ee22:	04 33                	add    al,0x33
  67ee24:	ba ce 3f 00 fa       	mov    edx,0xfa003fce
  67ee29:	e9 92 00 00 00       	jmp    67eec0 <__cxa_finalize@plt-0xd33f50>
  67ee2e:	04 5e                	add    al,0x5e
  67ee30:	ba 63 d4 32 07       	mov    edx,0x732d463
  67ee35:	e9 86 00 00 00       	jmp    67eec0 <__cxa_finalize@plt-0xd33f50>
  67ee3a:	c0 c0 04             	rol    al,0x4
  67ee3d:	89 c2                	mov    edx,eax
  67ee3f:	80 e2 33             	and    dl,0x33
  67ee42:	c0 e2 02             	shl    dl,0x2
  67ee45:	c0 e8 02             	shr    al,0x2
  67ee48:	24 33                	and    al,0x33
  67ee4a:	08 d0                	or     al,dl
  67ee4c:	89 c2                	mov    edx,eax
  67ee4e:	80 e2 55             	and    dl,0x55
  67ee51:	00 d2                	add    dl,dl
  67ee53:	d0 e8                	shr    al,1
  67ee55:	24 55                	and    al,0x55
  67ee57:	08 d0                	or     al,dl
  67ee59:	ba 11 34 e8 0d       	mov    edx,0xde83411
  67ee5e:	eb 60                	jmp    67eec0 <__cxa_finalize@plt-0xd33f50>
  67ee60:	04 a3                	add    al,0xa3
  67ee62:	ba 95 20 f1 67       	mov    edx,0x67f12095
  67ee67:	eb 57                	jmp    67eec0 <__cxa_finalize@plt-0xd33f50>
  67ee69:	ba a4 a6 39 2e       	mov    edx,0x2e39a6a4
  67ee6e:	eb 50                	jmp    67eec0 <__cxa_finalize@plt-0xd33f50>
  67ee70:	d0 c0                	rol    al,1
  67ee72:	ba d6 d1 2f 10       	mov    edx,0x102fd1d6
  67ee77:	eb 47                	jmp    67eec0 <__cxa_finalize@plt-0xd33f50>
  67ee79:	ba af c7 7e 6e       	mov    edx,0x6e7ec7af
  67ee7e:	eb 40                	jmp    67eec0 <__cxa_finalize@plt-0xd33f50>
  67ee80:	ba b5 b2 5a 06       	mov    edx,0x65ab2b5
  67ee85:	b0 4b                	mov    al,0x4b
  67ee87:	eb 37                	jmp    67eec0 <__cxa_finalize@plt-0xd33f50>
  67ee89:	c0 c0 02             	rol    al,0x2
  67ee8c:	ba 4a 85 fa ee       	mov    edx,0xeefa854a
  67ee91:	eb 2d                	jmp    67eec0 <__cxa_finalize@plt-0xd33f50>
  67ee93:	c0 c0 02             	rol    al,0x2
  67ee96:	ba d3 cb f6 30       	mov    edx,0x30f6cbd3
  67ee9b:	eb 23                	jmp    67eec0 <__cxa_finalize@plt-0xd33f50>
  67ee9d:	d0 c8                	ror    al,1
  67ee9f:	ba ca b0 78 d1       	mov    edx,0xd178b0ca
  67eea4:	eb 1a                	jmp    67eec0 <__cxa_finalize@plt-0xd33f50>
  67eea6:	04 8e                	add    al,0x8e
  67eea8:	ba da ef 5b c4       	mov    edx,0xc45befda
  67eead:	eb 11                	jmp    67eec0 <__cxa_finalize@plt-0xd33f50>
  67eeaf:	c0 c0 03             	rol    al,0x3
  67eeb2:	ba 3e d9 fa 53       	mov    edx,0x53fad93e
  67eeb7:	eb 07                	jmp    67eec0 <__cxa_finalize@plt-0xd33f50>
  67eeb9:	04 ca                	add    al,0xca
  67eebb:	ba cc 2d e5 0e       	mov    edx,0xee52dcc
  67eec0:	31 d1                	xor    ecx,edx
  67eec2:	e9 9d fe ff ff       	jmp    67ed64 <__cxa_finalize@plt-0xd340ac>
  67eec7:	0f b6 f0             	movzx  esi,al
  67eeca:	44 89 f7             	mov    edi,r14d
  67eecd:	e8 06 0b 00 00       	call   67f9d8 <__cxa_finalize@plt-0xd33438>
  67eed2:	0f b6 f8             	movzx  edi,al
  67eed5:	e8 64 11 00 00       	call   68003e <__cxa_finalize@plt-0xd32dd2>
  67eeda:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
  67eedf:	88 54 24 07          	mov    BYTE PTR [rsp+0x7],dl
  67eee3:	f2 0f 10 44 24 08    	movsd  xmm0,QWORD PTR [rsp+0x8]
  67eee9:	ff 15 69 51 da 00    	call   QWORD PTR [rip+0xda5169]        # 1424058 <__memmove_chk@plt+0x70668>
  67eeef:	66 0f 57 d2          	xorpd  xmm2,xmm2
  67eef3:	f2 0f 5f d0          	maxsd  xmm2,xmm0
  67eef7:	f2 0f 10 0d c1 9a a8 	movsd  xmm1,QWORD PTR [rip+0xffffffffffa89ac1]        # 1089c0 <__cxa_finalize@plt-0x12aa450>
  67eefe:	ff 
  67eeff:	f2 0f 5d ca          	minsd  xmm1,xmm2
  67ef03:	f2 0f 2c c1          	cvttsd2si eax,xmm1
  67ef07:	44 0f b6 f8          	movzx  r15d,al
  67ef0b:	f2 41 0f 2a cf       	cvtsi2sd xmm1,r15d
  67ef10:	f2 0f 11 4c 24 08    	movsd  QWORD PTR [rsp+0x8],xmm1
  67ef16:	31 c0                	xor    eax,eax
  67ef18:	bd 78 e0 a9 f0       	mov    ebp,0xf0a9e078
  67ef1d:	4c 8d 64 24 10       	lea    r12,[rsp+0x10]
  67ef22:	66 0f 29 44 24 50    	movapd XMMWORD PTR [rsp+0x50],xmm0
  67ef28:	81 fd 78 e0 a9 f0    	cmp    ebp,0xf0a9e078
  67ef2e:	74 54                	je     67ef84 <__cxa_finalize@plt-0xd33e8c>
  67ef30:	81 fd 5d cc da 13    	cmp    ebp,0x13dacc5d
  67ef36:	74 0a                	je     67ef42 <__cxa_finalize@plt-0xd33ece>
  67ef38:	81 fd 41 01 11 b1    	cmp    ebp,0xb1110141
  67ef3e:	74 5f                	je     67ef9f <__cxa_finalize@plt-0xd33e71>
  67ef40:	eb 59                	jmp    67ef9b <__cxa_finalize@plt-0xd33e75>
  67ef42:	4c 89 e7             	mov    rdi,r12
  67ef45:	e8 e9 f6 ff ff       	call   67e633 <__cxa_finalize@plt-0xd347dd>
  67ef4a:	4c 8b 6c 24 18       	mov    r13,QWORD PTR [rsp+0x18]
  67ef4f:	80 7c 24 10 00       	cmp    BYTE PTR [rsp+0x10],0x0
  67ef54:	44 0f b6 74 24 20    	movzx  r14d,BYTE PTR [rsp+0x20]
  67ef5a:	0f 85 23 0a 00 00    	jne    67f983 <__cxa_finalize@plt-0xd3348d>
  67ef60:	49 8d 7d 08          	lea    rdi,[r13+0x8]
  67ef64:	44 89 fe             	mov    esi,r15d
  67ef67:	e8 e4 8d 00 00       	call   687d50 <__cxa_finalize@plt-0xd2b0c0>
  67ef6c:	4c 89 ef             	mov    rdi,r13
  67ef6f:	44 89 f6             	mov    esi,r14d
  67ef72:	e8 29 d5 01 00       	call   69c4a0 <__cxa_finalize@plt-0xd16970>
  67ef77:	b8 1c cd cb a2       	mov    eax,0xa2cbcd1c
  67ef7c:	66 0f 28 44 24 50    	movapd xmm0,XMMWORD PTR [rsp+0x50]
  67ef82:	eb 17                	jmp    67ef9b <__cxa_finalize@plt-0xd33e75>
  67ef84:	b8 25 2c 73 e3       	mov    eax,0xe3732c25
  67ef89:	66 0f 2e 44 24 08    	ucomisd xmm0,QWORD PTR [rsp+0x8]
  67ef8f:	0f 85 74 fd ff ff    	jne    67ed09 <__cxa_finalize@plt-0xd34107>
  67ef95:	0f 8a 6e fd ff ff    	jp     67ed09 <__cxa_finalize@plt-0xd34107>
  67ef9b:	31 c5                	xor    ebp,eax
  67ef9d:	eb 89                	jmp    67ef28 <__cxa_finalize@plt-0xd33ee8>
  67ef9f:	bf 37 6c 4a d1       	mov    edi,0xd14a6c37
  67efa4:	31 c0                	xor    eax,eax
  67efa6:	49 b8 0f 08 85 c7 c4 	movabs r8,0xd56a4ac4c785080f
  67efad:	4a 6a d5 
  67efb0:	49 b9 9a 86 14 fa ed 	movabs r9,0xa450fdedfa14869a
  67efb7:	fd 50 a4 
  67efba:	49 ba 24 a3 3b 4a 41 	movabs r10,0xff37b8414a3ba324
  67efc1:	b8 37 ff 
  67efc4:	48 b9 0f 0f 0f 0f 0f 	movabs rcx,0xf0f0f0f0f0f0f0f
  67efcb:	0f 0f 0f 
  67efce:	48 ba 33 33 33 33 33 	movabs rdx,0x3333333333333333
  67efd5:	33 33 33 
  67efd8:	48 be 55 55 55 55 55 	movabs rsi,0x5555555555555555
  67efdf:	55 55 55 
  67efe2:	45 31 db             	xor    r11d,r11d
  67efe5:	81 ff 80 09 9f c2    	cmp    edi,0xc29f0980
  67efeb:	0f 84 a8 00 00 00    	je     67f099 <__cxa_finalize@plt-0xd33d77>
  67eff1:	81 ff 37 6c 4a d1    	cmp    edi,0xd14a6c37
  67eff7:	0f 84 91 00 00 00    	je     67f08e <__cxa_finalize@plt-0xd33d82>
  67effd:	81 ff 04 b6 46 df    	cmp    edi,0xdf46b604
  67f003:	74 26                	je     67f02b <__cxa_finalize@plt-0xd33de5>
  67f005:	81 ff cd 9b b8 02    	cmp    edi,0x2b89bcd
  67f00b:	74 35                	je     67f042 <__cxa_finalize@plt-0xd33dce>
  67f00d:	81 ff 80 ad b2 36    	cmp    edi,0x36b2ad80
  67f013:	74 21                	je     67f036 <__cxa_finalize@plt-0xd33dda>
  67f015:	81 ff 80 35 15 52    	cmp    edi,0x52153580
  67f01b:	74 31                	je     67f04e <__cxa_finalize@plt-0xd33dc2>
  67f01d:	81 ff b7 11 24 0e    	cmp    edi,0xe2411b7
  67f023:	0f 84 81 00 00 00    	je     67f0aa <__cxa_finalize@plt-0xd33d66>
  67f029:	eb 77                	jmp    67f0a2 <__cxa_finalize@plt-0xd33d6e>
  67f02b:	4c 01 d0             	add    rax,r10
  67f02e:	41 bb c9 2d fe dd    	mov    r11d,0xddfe2dc9
  67f034:	eb 6c                	jmp    67f0a2 <__cxa_finalize@plt-0xd33d6e>
  67f036:	48 c1 c0 29          	rol    rax,0x29
  67f03a:	41 bb 37 bc 96 38    	mov    r11d,0x3896bc37
  67f040:	eb 60                	jmp    67f0a2 <__cxa_finalize@plt-0xd33d6e>
  67f042:	48 c1 c0 2b          	rol    rax,0x2b
  67f046:	41 bb 4d 92 27 c0    	mov    r11d,0xc027924d
  67f04c:	eb 54                	jmp    67f0a2 <__cxa_finalize@plt-0xd33d6e>
  67f04e:	48 0f c8             	bswap  rax
  67f051:	49 89 c3             	mov    r11,rax
  67f054:	49 c1 eb 04          	shr    r11,0x4
  67f058:	49 21 cb             	and    r11,rcx
  67f05b:	48 21 c8             	and    rax,rcx
  67f05e:	48 c1 e0 04          	shl    rax,0x4
  67f062:	4c 09 d8             	or     rax,r11
  67f065:	49 89 c3             	mov    r11,rax
  67f068:	49 21 d3             	and    r11,rdx
  67f06b:	48 c1 e8 02          	shr    rax,0x2
  67f06f:	48 21 d0             	and    rax,rdx
  67f072:	4a 8d 04 98          	lea    rax,[rax+r11*4]
  67f076:	49 89 c3             	mov    r11,rax
  67f079:	49 21 f3             	and    r11,rsi
  67f07c:	48 d1 e8             	shr    rax,1
  67f07f:	48 21 f0             	and    rax,rsi
  67f082:	4a 8d 04 58          	lea    rax,[rax+r11*2]
  67f086:	41 bb 84 83 53 8d    	mov    r11d,0x8d538384
  67f08c:	eb 14                	jmp    67f0a2 <__cxa_finalize@plt-0xd33d6e>
  67f08e:	41 bb b7 59 5f 83    	mov    r11d,0x835f59b7
  67f094:	4c 89 c8             	mov    rax,r9
  67f097:	eb 09                	jmp    67f0a2 <__cxa_finalize@plt-0xd33d6e>
  67f099:	4c 31 c0             	xor    rax,r8
  67f09c:	41 bb 00 a4 2d f4    	mov    r11d,0xf42da400
  67f0a2:	44 31 df             	xor    edi,r11d
  67f0a5:	e9 3b ff ff ff       	jmp    67efe5 <__cxa_finalize@plt-0xd33e2b>
  67f0aa:	41 b8 3b 5b 34 59    	mov    r8d,0x59345b3b
  67f0b0:	31 ff                	xor    edi,edi
  67f0b2:	49 b9 21 93 d1 dc 83 	movabs r9,0xdcce8683dcd19321
  67f0b9:	86 ce dc 
  67f0bc:	49 ba b7 c8 7d c7 d1 	movabs r10,0x340938d1c77dc8b7
  67f0c3:	38 09 34 
  67f0c6:	49 bb da a3 19 c1 7d 	movabs r11,0x1b97977dc119a3da
  67f0cd:	97 97 1b 
  67f0d0:	49 be d8 24 aa 9d ad 	movabs r14,0x45b45cad9daa24d8
  67f0d7:	5c b4 45 
  67f0da:	49 bf ca 56 05 ec 53 	movabs r15,0x7524dc53ec0556ca
  67f0e1:	dc 24 75 
  67f0e4:	49 bc b3 1e dd 49 1d 	movabs r12,0x63bf51d49dd1eb3
  67f0eb:	f5 3b 06 
  67f0ee:	31 ed                	xor    ebp,ebp
  67f0f0:	41 81 f8 24 2e ba 82 	cmp    r8d,0x82ba2e24
  67f0f7:	0f 84 5d 02 00 00    	je     67f35a <__cxa_finalize@plt-0xd33ab6>
  67f0fd:	41 81 f8 32 99 13 93 	cmp    r8d,0x93139932
  67f104:	0f 84 b0 00 00 00    	je     67f1ba <__cxa_finalize@plt-0xd33c56>
  67f10a:	41 81 f8 e8 66 e9 98 	cmp    r8d,0x98e966e8
  67f111:	0f 84 e8 01 00 00    	je     67f2ff <__cxa_finalize@plt-0xd33b11>
  67f117:	41 81 f8 c8 16 f5 a3 	cmp    r8d,0xa3f516c8
  67f11e:	0f 84 f7 01 00 00    	je     67f31b <__cxa_finalize@plt-0xd33af5>
  67f124:	41 81 f8 7f 49 23 b3 	cmp    r8d,0xb323497f
  67f12b:	0f 84 96 00 00 00    	je     67f1c7 <__cxa_finalize@plt-0xd33c49>
  67f131:	41 81 f8 be 61 55 b9 	cmp    r8d,0xb95561be
  67f138:	0f 84 96 00 00 00    	je     67f1d4 <__cxa_finalize@plt-0xd33c3c>
  67f13e:	41 81 f8 b7 28 af d7 	cmp    r8d,0xd7af28b7
  67f145:	0f 84 bf 01 00 00    	je     67f30a <__cxa_finalize@plt-0xd33b06>
  67f14b:	41 81 f8 4e 45 95 f1 	cmp    r8d,0xf195454e
  67f152:	0f 84 11 01 00 00    	je     67f269 <__cxa_finalize@plt-0xd33ba7>
  67f158:	41 81 f8 c2 16 32 f7 	cmp    r8d,0xf73216c2
  67f15f:	0f 84 85 01 00 00    	je     67f2ea <__cxa_finalize@plt-0xd33b26>
  67f165:	41 81 f8 dc 77 65 fc 	cmp    r8d,0xfc6577dc
  67f16c:	0f 84 39 01 00 00    	je     67f2ab <__cxa_finalize@plt-0xd33b65>
  67f172:	49 89 fd             	mov    r13,rdi
  67f175:	49 0f cd             	bswap  r13
  67f178:	41 81 f8 9b 34 16 39 	cmp    r8d,0x3916349b
  67f17f:	0f 84 8f 01 00 00    	je     67f314 <__cxa_finalize@plt-0xd33afc>
  67f185:	41 81 f8 3b 5b 34 59 	cmp    r8d,0x59345b3b
  67f18c:	0f 84 84 00 00 00    	je     67f216 <__cxa_finalize@plt-0xd33bfa>
  67f192:	41 81 f8 2e 79 45 61 	cmp    r8d,0x6145792e
  67f199:	0f 84 56 01 00 00    	je     67f2f5 <__cxa_finalize@plt-0xd33b1b>
  67f19f:	41 81 f8 b6 ab ff 64 	cmp    r8d,0x64ffabb6
  67f1a6:	74 7b                	je     67f223 <__cxa_finalize@plt-0xd33bed>
  67f1a8:	41 81 f8 dc 62 b1 26 	cmp    r8d,0x26b162dc
  67f1af:	0f 84 bb 01 00 00    	je     67f370 <__cxa_finalize@plt-0xd33aa0>
  67f1b5:	e9 a8 01 00 00       	jmp    67f362 <__cxa_finalize@plt-0xd33aae>
  67f1ba:	4c 01 d7             	add    rdi,r10
  67f1bd:	bd 85 b1 bc 44       	mov    ebp,0x44bcb185
  67f1c2:	e9 9b 01 00 00       	jmp    67f362 <__cxa_finalize@plt-0xd33aae>
  67f1c7:	4c 01 df             	add    rdi,r11
  67f1ca:	bd c9 e2 dc d7       	mov    ebp,0xd7dce2c9
  67f1cf:	e9 8e 01 00 00       	jmp    67f362 <__cxa_finalize@plt-0xd33aae>
  67f1d4:	48 0f cf             	bswap  rdi
  67f1d7:	49 89 fd             	mov    r13,rdi
  67f1da:	49 c1 ed 04          	shr    r13,0x4
  67f1de:	49 21 cd             	and    r13,rcx
  67f1e1:	48 21 cf             	and    rdi,rcx
  67f1e4:	48 c1 e7 04          	shl    rdi,0x4
  67f1e8:	4c 09 ef             	or     rdi,r13
  67f1eb:	49 89 fd             	mov    r13,rdi
  67f1ee:	49 21 d5             	and    r13,rdx
  67f1f1:	48 c1 ef 02          	shr    rdi,0x2
  67f1f5:	48 21 d7             	and    rdi,rdx
  67f1f8:	4a 8d 3c af          	lea    rdi,[rdi+r13*4]
  67f1fc:	49 89 fd             	mov    r13,rdi
  67f1ff:	49 21 f5             	and    r13,rsi
  67f202:	48 d1 ef             	shr    rdi,1
  67f205:	48 21 f7             	and    rdi,rsi
  67f208:	4e 8d 2c 6f          	lea    r13,[rdi+r13*2]
  67f20c:	bd 76 77 a0 1a       	mov    ebp,0x1aa07776
  67f211:	e9 4f 01 00 00       	jmp    67f365 <__cxa_finalize@plt-0xd33aab>
  67f216:	bd 09 c2 27 ca       	mov    ebp,0xca27c209
  67f21b:	4d 89 fd             	mov    r13,r15
  67f21e:	e9 42 01 00 00       	jmp    67f365 <__cxa_finalize@plt-0xd33aab>
  67f223:	4c 89 ef             	mov    rdi,r13
  67f226:	48 c1 ef 04          	shr    rdi,0x4
  67f22a:	48 21 cf             	and    rdi,rcx
  67f22d:	49 21 cd             	and    r13,rcx
  67f230:	49 c1 e5 04          	shl    r13,0x4
  67f234:	49 09 fd             	or     r13,rdi
  67f237:	4c 89 ef             	mov    rdi,r13
  67f23a:	48 21 d7             	and    rdi,rdx
  67f23d:	49 c1 ed 02          	shr    r13,0x2
  67f241:	49 21 d5             	and    r13,rdx
  67f244:	48 8d 3c bd 00 00 00 	lea    rdi,[rdi*4+0x0]
  67f24b:	00 
  67f24c:	4c 01 ef             	add    rdi,r13
  67f24f:	49 89 fd             	mov    r13,rdi
  67f252:	49 21 f5             	and    r13,rsi
  67f255:	48 d1 ef             	shr    rdi,1
  67f258:	48 21 f7             	and    rdi,rsi
  67f25b:	4e 8d 2c 6f          	lea    r13,[rdi+r13*2]
  67f25f:	bd 98 d2 ba 05       	mov    ebp,0x5bad298
  67f264:	e9 fc 00 00 00       	jmp    67f365 <__cxa_finalize@plt-0xd33aab>
  67f269:	48 0f cf             	bswap  rdi
  67f26c:	49 89 fd             	mov    r13,rdi
  67f26f:	49 c1 ed 04          	shr    r13,0x4
  67f273:	49 21 cd             	and    r13,rcx
  67f276:	48 21 cf             	and    rdi,rcx
  67f279:	48 c1 e7 04          	shl    rdi,0x4
  67f27d:	4c 09 ef             	or     rdi,r13
  67f280:	49 89 fd             	mov    r13,rdi
  67f283:	49 21 d5             	and    r13,rdx
  67f286:	48 c1 ef 02          	shr    rdi,0x2
  67f28a:	48 21 d7             	and    rdi,rdx
  67f28d:	4a 8d 3c af          	lea    rdi,[rdi+r13*4]
  67f291:	49 89 fd             	mov    r13,rdi
  67f294:	49 21 f5             	and    r13,rsi
  67f297:	48 d1 ef             	shr    rdi,1
  67f29a:	48 21 f7             	and    rdi,rsi
  67f29d:	4e 8d 2c 6f          	lea    r13,[rdi+r13*2]
  67f2a1:	bd 92 32 f0 0d       	mov    ebp,0xdf03292
  67f2a6:	e9 ba 00 00 00       	jmp    67f365 <__cxa_finalize@plt-0xd33aab>
  67f2ab:	48 0f cf             	bswap  rdi
  67f2ae:	49 89 fd             	mov    r13,rdi
  67f2b1:	49 c1 ed 04          	shr    r13,0x4
  67f2b5:	49 21 cd             	and    r13,rcx
  67f2b8:	48 21 cf             	and    rdi,rcx
  67f2bb:	48 c1 e7 04          	shl    rdi,0x4
  67f2bf:	4c 09 ef             	or     rdi,r13
  67f2c2:	49 89 fd             	mov    r13,rdi
  67f2c5:	49 21 d5             	and    r13,rdx
  67f2c8:	48 c1 ef 02          	shr    rdi,0x2
  67f2cc:	48 21 d7             	and    rdi,rdx
  67f2cf:	4a 8d 3c af          	lea    rdi,[rdi+r13*4]
  67f2d3:	49 89 fd             	mov    r13,rdi
  67f2d6:	49 21 f5             	and    r13,rsi
  67f2d9:	48 d1 ef             	shr    rdi,1
  67f2dc:	48 21 f7             	and    rdi,rsi
  67f2df:	4e 8d 2c 6f          	lea    r13,[rdi+r13*2]
  67f2e3:	bd 00 15 d4 da       	mov    ebp,0xdad41500
  67f2e8:	eb 7b                	jmp    67f365 <__cxa_finalize@plt-0xd33aab>
  67f2ea:	48 c1 c7 1c          	rol    rdi,0x1c
  67f2ee:	bd 8c 53 a7 06       	mov    ebp,0x6a7538c
  67f2f3:	eb 6d                	jmp    67f362 <__cxa_finalize@plt-0xd33aae>
  67f2f5:	4c 01 e7             	add    rdi,r12
  67f2f8:	bd ec 6f 77 96       	mov    ebp,0x96776fec
  67f2fd:	eb 63                	jmp    67f362 <__cxa_finalize@plt-0xd33aae>
  67f2ff:	48 c1 c7 1a          	rol    rdi,0x1a
  67f303:	bd cc 48 53 1a       	mov    ebp,0x1a5348cc
  67f308:	eb 58                	jmp    67f362 <__cxa_finalize@plt-0xd33aae>
  67f30a:	4c 31 f7             	xor    rdi,r14
  67f30d:	bd 2c 1c b9 ee       	mov    ebp,0xeeb91c2c
  67f312:	eb 4e                	jmp    67f362 <__cxa_finalize@plt-0xd33aae>
  67f314:	bd 25 55 43 80       	mov    ebp,0x80435525
  67f319:	eb 4a                	jmp    67f365 <__cxa_finalize@plt-0xd33aab>
  67f31b:	48 0f cf             	bswap  rdi
  67f31e:	49 89 fd             	mov    r13,rdi
  67f321:	49 c1 ed 04          	shr    r13,0x4
  67f325:	49 21 cd             	and    r13,rcx
  67f328:	48 21 cf             	and    rdi,rcx
  67f32b:	48 c1 e7 04          	shl    rdi,0x4
  67f32f:	4c 09 ef             	or     rdi,r13
  67f332:	49 89 fd             	mov    r13,rdi
  67f335:	49 21 d5             	and    r13,rdx
  67f338:	48 c1 ef 02          	shr    rdi,0x2
  67f33c:	48 21 d7             	and    rdi,rdx
  67f33f:	4a 8d 3c af          	lea    rdi,[rdi+r13*4]
  67f343:	49 89 fd             	mov    r13,rdi
  67f346:	49 21 f5             	and    r13,rsi
  67f349:	48 d1 ef             	shr    rdi,1
  67f34c:	48 21 f7             	and    rdi,rsi
  67f34f:	4e 8d 2c 6f          	lea    r13,[rdi+r13*2]
  67f353:	bd 20 70 1c 3b       	mov    ebp,0x3b1c7020
  67f358:	eb 0b                	jmp    67f365 <__cxa_finalize@plt-0xd33aab>
  67f35a:	4c 01 cf             	add    rdi,r9
  67f35d:	bd 5b 67 99 31       	mov    ebp,0x3199675b
  67f362:	49 89 fd             	mov    r13,rdi
  67f365:	41 31 e8             	xor    r8d,ebp
  67f368:	4c 89 ef             	mov    rdi,r13
  67f36b:	e9 80 fd ff ff       	jmp    67f0f0 <__cxa_finalize@plt-0xd33d20>
  67f370:	41 b9 ae ee 30 f4    	mov    r9d,0xf430eeae
  67f376:	45 31 f6             	xor    r14d,r14d
  67f379:	49 bc a3 a5 cb 80 20 	movabs r12,0x30bb5e2080cba5a3
  67f380:	5e bb 30 
  67f383:	49 ba cb 3e 11 0b 40 	movabs r10,0x3e3005400b113ecb
  67f38a:	05 30 3e 
  67f38d:	49 bb 46 cb 3b 63 5d 	movabs r11,0xe9c4755d633bcb46
  67f394:	75 c4 e9 
  67f397:	48 bd 95 f5 2f 56 dc 	movabs rbp,0xc935a5dc562ff595
  67f39e:	a5 35 c9 
  67f3a1:	49 bf 87 68 89 4d 2a 	movabs r15,0x6ac5612a4d896887
  67f3a8:	61 c5 6a 
  67f3ab:	45 31 ed             	xor    r13d,r13d
  67f3ae:	41 81 f9 ad 56 d5 80 	cmp    r9d,0x80d556ad
  67f3b5:	0f 84 a4 01 00 00    	je     67f55f <__cxa_finalize@plt-0xd338b1>
  67f3bb:	4d 89 f0             	mov    r8,r14
  67f3be:	49 0f c8             	bswap  r8
  67f3c1:	41 81 f9 62 eb a5 89 	cmp    r9d,0x89a5eb62
  67f3c8:	0f 84 d1 01 00 00    	je     67f59f <__cxa_finalize@plt-0xd33871>
  67f3ce:	41 81 f9 fb 9e 82 9a 	cmp    r9d,0x9a829efb
  67f3d5:	0f 84 a6 00 00 00    	je     67f481 <__cxa_finalize@plt-0xd3398f>
  67f3db:	41 81 f9 a1 66 82 a9 	cmp    r9d,0xa98266a1
  67f3e2:	0f 84 16 01 00 00    	je     67f4fe <__cxa_finalize@plt-0xd33912>
  67f3e8:	41 81 f9 d0 c7 85 ac 	cmp    r9d,0xac85c7d0
  67f3ef:	0f 84 49 01 00 00    	je     67f53e <__cxa_finalize@plt-0xd338d2>
  67f3f5:	41 81 f9 11 03 29 b3 	cmp    r9d,0xb3290311
  67f3fc:	0f 84 97 00 00 00    	je     67f499 <__cxa_finalize@plt-0xd33977>
  67f402:	41 81 f9 ae ee 30 f4 	cmp    r9d,0xf430eeae
  67f409:	0f 84 a2 00 00 00    	je     67f4b1 <__cxa_finalize@plt-0xd3395f>
  67f40f:	41 81 f9 8e 98 04 15 	cmp    r9d,0x1504988e
  67f416:	0f 84 f7 00 00 00    	je     67f513 <__cxa_finalize@plt-0xd338fd>
  67f41c:	41 81 f9 dd ea 49 33 	cmp    r9d,0x3349eadd
  67f423:	0f 84 96 00 00 00    	je     67f4bf <__cxa_finalize@plt-0xd33951>
  67f429:	41 81 f9 12 ce e6 41 	cmp    r9d,0x41e6ce12
  67f430:	0f 84 bd 00 00 00    	je     67f4f3 <__cxa_finalize@plt-0xd3391d>
  67f436:	41 81 f9 5b 84 41 4c 	cmp    r9d,0x4c41845b
  67f43d:	0f 84 a8 00 00 00    	je     67f4eb <__cxa_finalize@plt-0xd33925>
  67f443:	41 81 f9 1b 3d bb 52 	cmp    r9d,0x52bb3d1b
  67f44a:	0f 84 d8 00 00 00    	je     67f528 <__cxa_finalize@plt-0xd338e8>
  67f450:	41 81 f9 88 32 61 67 	cmp    r9d,0x67613288
  67f457:	0f 84 d6 00 00 00    	je     67f533 <__cxa_finalize@plt-0xd338dd>
  67f45d:	41 81 f9 5e 86 26 68 	cmp    r9d,0x6826865e
  67f464:	74 6e                	je     67f4d4 <__cxa_finalize@plt-0xd3393c>
  67f466:	41 81 f9 aa 40 de 6f 	cmp    r9d,0x6fde40aa
  67f46d:	74 70                	je     67f4df <__cxa_finalize@plt-0xd33931>
  67f46f:	41 81 f9 a9 00 0b 0b 	cmp    r9d,0xb0b00a9
  67f476:	0f 84 2b 01 00 00    	je     67f5a7 <__cxa_finalize@plt-0xd33869>
  67f47c:	e9 d0 00 00 00       	jmp    67f551 <__cxa_finalize@plt-0xd338bf>
  67f481:	49 b8 e8 48 2c 7d 61 	movabs r8,0x61712e617d2c48e8
  67f488:	2e 71 61 
  67f48b:	4d 31 c6             	xor    r14,r8
  67f48e:	41 bd 26 74 cb a9    	mov    r13d,0xa9cb7426
  67f494:	e9 b8 00 00 00       	jmp    67f551 <__cxa_finalize@plt-0xd338bf>
  67f499:	49 b8 96 92 77 ca 6c 	movabs r8,0x94d176cca779296
  67f4a0:	17 4d 09 
  67f4a3:	4d 31 c6             	xor    r14,r8
  67f4a6:	41 bd 03 cd cf f2    	mov    r13d,0xf2cfcd03
  67f4ac:	e9 a0 00 00 00       	jmp    67f551 <__cxa_finalize@plt-0xd338bf>
  67f4b1:	41 bd 7e 29 b5 58    	mov    r13d,0x58b5297e
  67f4b7:	4d 89 e0             	mov    r8,r12
  67f4ba:	e9 95 00 00 00       	jmp    67f554 <__cxa_finalize@plt-0xd338bc>
  67f4bf:	49 b8 b6 88 38 23 db 	movabs r8,0x1f2f93db233888b6
  67f4c6:	93 2f 1f 
  67f4c9:	4d 01 c6             	add    r14,r8
  67f4cc:	41 bd cc e9 60 80    	mov    r13d,0x8060e9cc
  67f4d2:	eb 7d                	jmp    67f551 <__cxa_finalize@plt-0xd338bf>
  67f4d4:	4d 01 fe             	add    r14,r15
  67f4d7:	41 bd f7 86 2d 63    	mov    r13d,0x632d86f7
  67f4dd:	eb 72                	jmp    67f551 <__cxa_finalize@plt-0xd338bf>
  67f4df:	49 c1 c6 22          	rol    r14,0x22
  67f4e3:	41 bd f4 c6 f8 07    	mov    r13d,0x7f8c6f4
  67f4e9:	eb 66                	jmp    67f551 <__cxa_finalize@plt-0xd338bf>
  67f4eb:	41 bd f1 c4 9f 23    	mov    r13d,0x239fc4f1
  67f4f1:	eb 61                	jmp    67f554 <__cxa_finalize@plt-0xd338bc>
  67f4f3:	4d 31 d6             	xor    r14,r10
  67f4f6:	41 bd 49 4a a7 0d    	mov    r13d,0xda74a49
  67f4fc:	eb 53                	jmp    67f551 <__cxa_finalize@plt-0xd338bf>
  67f4fe:	49 b8 f2 97 be 98 c1 	movabs r8,0x7d5851c198be97f2
  67f505:	51 58 7d 
  67f508:	4d 01 c6             	add    r14,r8
  67f50b:	41 bd 2f fe 86 bc    	mov    r13d,0xbc86fe2f
  67f511:	eb 3e                	jmp    67f551 <__cxa_finalize@plt-0xd338bf>
  67f513:	49 b8 c5 a9 8f 11 e6 	movabs r8,0xca2e8be6118fa9c5
  67f51a:	8b 2e ca 
  67f51d:	4d 01 c6             	add    r14,r8
  67f520:	41 bd ec 73 a1 9c    	mov    r13d,0x9ca173ec
  67f526:	eb 29                	jmp    67f551 <__cxa_finalize@plt-0xd338bf>
  67f528:	4d 01 de             	add    r14,r11
  67f52b:	41 bd e0 a3 39 c8    	mov    r13d,0xc839a3e0
  67f531:	eb 1e                	jmp    67f551 <__cxa_finalize@plt-0xd338bf>
  67f533:	49 01 ee             	add    r14,rbp
  67f536:	41 bd 29 54 e3 ce    	mov    r13d,0xcee35429
  67f53c:	eb 13                	jmp    67f551 <__cxa_finalize@plt-0xd338bf>
  67f53e:	49 b8 99 74 1b d9 55 	movabs r8,0x833ff155d91b7499
  67f545:	f1 3f 83 
  67f548:	4d 01 c6             	add    r14,r8
  67f54b:	41 bd 7d 91 50 2c    	mov    r13d,0x2c50917d
  67f551:	4d 89 f0             	mov    r8,r14
  67f554:	45 31 e9             	xor    r9d,r13d
  67f557:	4d 89 c6             	mov    r14,r8
  67f55a:	e9 4f fe ff ff       	jmp    67f3ae <__cxa_finalize@plt-0xd33a62>
  67f55f:	49 0f ce             	bswap  r14
  67f562:	4d 89 f0             	mov    r8,r14
  67f565:	49 c1 e8 04          	shr    r8,0x4
  67f569:	49 21 c8             	and    r8,rcx
  67f56c:	49 21 ce             	and    r14,rcx
  67f56f:	49 c1 e6 04          	shl    r14,0x4
  67f573:	4d 09 c6             	or     r14,r8
  67f576:	4d 89 f0             	mov    r8,r14
  67f579:	49 21 d0             	and    r8,rdx
  67f57c:	49 c1 ee 02          	shr    r14,0x2
  67f580:	49 21 d6             	and    r14,rdx
  67f583:	4f 8d 04 86          	lea    r8,[r14+r8*4]
  67f587:	4d 89 c6             	mov    r14,r8
  67f58a:	49 21 f6             	and    r14,rsi
  67f58d:	49 d1 e8             	shr    r8,1
  67f590:	49 21 f0             	and    r8,rsi
  67f593:	4f 8d 04 70          	lea    r8,[r8+r14*2]
  67f597:	41 bd 25 64 b4 e7    	mov    r13d,0xe7b46425
  67f59d:	eb b5                	jmp    67f554 <__cxa_finalize@plt-0xd338bc>
  67f59f:	41 bd 79 d6 1e db    	mov    r13d,0xdb1ed679
  67f5a5:	eb ad                	jmp    67f554 <__cxa_finalize@plt-0xd338bc>
  67f5a7:	41 ba 46 a9 fd 8c    	mov    r10d,0x8cfda946
  67f5ad:	45 31 c9             	xor    r9d,r9d
  67f5b0:	49 bb 60 70 ec 1e 27 	movabs r11,0xba2d50271eec7060
  67f5b7:	50 2d ba 
  67f5ba:	49 b8 bb 23 2d 1c ab 	movabs r8,0x2db212ab1c2d23bb
  67f5c1:	12 b2 2d 
  67f5c4:	49 bf 5a 72 4e 3b 9a 	movabs r15,0xadce6e9a3b4e725a
  67f5cb:	6e ce ad 
  67f5ce:	49 bc 50 51 01 ca 5d 	movabs r12,0xd13aa25dca015150
  67f5d5:	a2 3a d1 
  67f5d8:	31 ed                	xor    ebp,ebp
  67f5da:	41 81 fa 46 a9 fd 8c 	cmp    r10d,0x8cfda946
  67f5e1:	0f 84 8f 00 00 00    	je     67f676 <__cxa_finalize@plt-0xd3379a>
  67f5e7:	41 81 fa 14 e8 6f a4 	cmp    r10d,0xa46fe814
  67f5ee:	0f 84 97 00 00 00    	je     67f68b <__cxa_finalize@plt-0xd33785>
  67f5f4:	41 81 fa 46 a5 dd b1 	cmp    r10d,0xb1dda546
  67f5fb:	74 59                	je     67f656 <__cxa_finalize@plt-0xd337ba>
  67f5fd:	41 81 fa 2b f6 f8 c2 	cmp    r10d,0xc2f8f62b
  67f604:	74 5b                	je     67f661 <__cxa_finalize@plt-0xd337af>
  67f606:	41 81 fa e6 a2 57 cc 	cmp    r10d,0xcc57a2e6
  67f60d:	0f 84 8d 00 00 00    	je     67f6a0 <__cxa_finalize@plt-0xd33770>
  67f613:	41 81 fa e7 8f 19 00 	cmp    r10d,0x198fe7
  67f61a:	74 2f                	je     67f64b <__cxa_finalize@plt-0xd337c5>
  67f61c:	41 81 fa 5e 93 ed 1b 	cmp    r10d,0x1bed935e
  67f623:	74 47                	je     67f66c <__cxa_finalize@plt-0xd337a4>
  67f625:	41 81 fa 3c a1 c1 3f 	cmp    r10d,0x3fc1a13c
  67f62c:	74 68                	je     67f696 <__cxa_finalize@plt-0xd3377a>
  67f62e:	41 81 fa 15 c0 ee 60 	cmp    r10d,0x60eec015
  67f635:	74 73                	je     67f6aa <__cxa_finalize@plt-0xd33766>
  67f637:	41 81 fa e1 9f 41 77 	cmp    r10d,0x77419fe1
  67f63e:	74 40                	je     67f680 <__cxa_finalize@plt-0xd33790>
  67f640:	41 81 fa 9e fc cf 60 	cmp    r10d,0x60cffc9e
  67f647:	74 71                	je     67f6ba <__cxa_finalize@plt-0xd33756>
  67f649:	eb 67                	jmp    67f6b2 <__cxa_finalize@plt-0xd3375e>
  67f64b:	49 c1 c1 23          	rol    r9,0x23
  67f64f:	bd a1 2a c4 b1       	mov    ebp,0xb1c42aa1
  67f654:	eb 5c                	jmp    67f6b2 <__cxa_finalize@plt-0xd3375e>
  67f656:	49 c1 c1 34          	rol    r9,0x34
  67f65a:	bd 6d 53 25 73       	mov    ebp,0x7325536d
  67f65f:	eb 51                	jmp    67f6b2 <__cxa_finalize@plt-0xd3375e>
  67f661:	49 c1 c1 3b          	rol    r9,0x3b
  67f665:	bd 17 57 39 fd       	mov    ebp,0xfd395717
  67f66a:	eb 46                	jmp    67f6b2 <__cxa_finalize@plt-0xd3375e>
  67f66c:	4d 31 f9             	xor    r9,r15
  67f66f:	bd 4a 7b 82 bf       	mov    ebp,0xbf827b4a
  67f674:	eb 3c                	jmp    67f6b2 <__cxa_finalize@plt-0xd3375e>
  67f676:	bd a0 0b aa 40       	mov    ebp,0x40aa0ba0
  67f67b:	4d 89 d9             	mov    r9,r11
  67f67e:	eb 32                	jmp    67f6b2 <__cxa_finalize@plt-0xd3375e>
  67f680:	49 c1 c1 24          	rol    r9,0x24
  67f684:	bd 7f 63 8e 17       	mov    ebp,0x178e637f
  67f689:	eb 27                	jmp    67f6b2 <__cxa_finalize@plt-0xd3375e>
  67f68b:	49 c1 c1 1d          	rol    r9,0x1d
  67f68f:	bd f5 77 2e d3       	mov    ebp,0xd32e77f5
  67f694:	eb 1c                	jmp    67f6b2 <__cxa_finalize@plt-0xd3375e>
  67f696:	4d 31 e1             	xor    r9,r12
  67f699:	bd 29 61 2f 5f       	mov    ebp,0x5f2f6129
  67f69e:	eb 12                	jmp    67f6b2 <__cxa_finalize@plt-0xd3375e>
  67f6a0:	4d 01 c1             	add    r9,r8
  67f6a3:	bd 01 2d 4e cc       	mov    ebp,0xcc4e2d01
  67f6a8:	eb 08                	jmp    67f6b2 <__cxa_finalize@plt-0xd3375e>
  67f6aa:	49 0f c9             	bswap  r9
  67f6ad:	bd 4b 53 03 7b       	mov    ebp,0x7b03534b
  67f6b2:	41 31 ea             	xor    r10d,ebp
  67f6b5:	e9 20 ff ff ff       	jmp    67f5da <__cxa_finalize@plt-0xd33836>
  67f6ba:	41 ba ae 47 d9 ca    	mov    r10d,0xcad947ae
  67f6c0:	45 31 ed             	xor    r13d,r13d
  67f6c3:	49 bb f3 b4 dc e0 9c 	movabs r11,0x22e8d59ce0dcb4f3
  67f6ca:	d5 e8 22 
  67f6cd:	49 b8 e2 e1 7b 60 ff 	movabs r8,0x72df00ff607be1e2
  67f6d4:	00 df 72 
  67f6d7:	49 bc 56 98 1d 3b 5c 	movabs r12,0x31935c3b1d9856
  67f6de:	93 31 00 
  67f6e1:	31 ed                	xor    ebp,ebp
  67f6e3:	41 81 fa 81 c7 63 89 	cmp    r10d,0x8963c781
  67f6ea:	0f 84 a8 01 00 00    	je     67f898 <__cxa_finalize@plt-0xd33578>
  67f6f0:	41 81 fa 9a 8c 05 9d 	cmp    r10d,0x9d058c9a
  67f6f7:	0f 84 ac 00 00 00    	je     67f7a9 <__cxa_finalize@plt-0xd33667>
  67f6fd:	41 81 fa 47 ec 8a 9f 	cmp    r10d,0x9f8aec47
  67f704:	0f 84 5a 01 00 00    	je     67f864 <__cxa_finalize@plt-0xd335ac>
  67f70a:	41 81 fa ae 47 d9 ca 	cmp    r10d,0xcad947ae
  67f711:	0f 84 77 01 00 00    	je     67f88e <__cxa_finalize@plt-0xd33582>
  67f717:	41 81 fa 8a 88 14 e8 	cmp    r10d,0xe814888a
  67f71e:	0f 84 9c 00 00 00    	je     67f7c0 <__cxa_finalize@plt-0xd33650>
  67f724:	4d 89 ef             	mov    r15,r13
  67f727:	49 0f cf             	bswap  r15
  67f72a:	41 81 fa 36 06 2d 33 	cmp    r10d,0x332d0636
  67f731:	0f 84 97 00 00 00    	je     67f7ce <__cxa_finalize@plt-0xd33642>
  67f737:	41 81 fa ea 76 d8 35 	cmp    r10d,0x35d876ea
  67f73e:	0f 84 34 01 00 00    	je     67f878 <__cxa_finalize@plt-0xd33598>
  67f744:	41 81 fa 47 67 58 37 	cmp    r10d,0x37586747
  67f74b:	0f 84 ab 00 00 00    	je     67f7fc <__cxa_finalize@plt-0xd33614>
  67f751:	41 81 fa 0e ba 02 38 	cmp    r10d,0x3802ba0e
  67f758:	0f 84 f1 00 00 00    	je     67f84f <__cxa_finalize@plt-0xd335c1>
  67f75e:	41 81 fa ef 5d 82 41 	cmp    r10d,0x41825def
  67f765:	0f 84 a8 00 00 00    	je     67f813 <__cxa_finalize@plt-0xd335fd>
  67f76b:	41 81 fa 49 97 51 53 	cmp    r10d,0x53519749
  67f772:	0f 84 0b 01 00 00    	je     67f883 <__cxa_finalize@plt-0xd3358d>
  67f778:	41 81 fa 59 a9 dd 5f 	cmp    r10d,0x5fdda959
  67f77f:	74 57                	je     67f7d8 <__cxa_finalize@plt-0xd33638>
  67f781:	41 81 fa 1d 0a 17 6a 	cmp    r10d,0x6a170a1d
  67f788:	0f 84 cc 00 00 00    	je     67f85a <__cxa_finalize@plt-0xd335b6>
  67f78e:	41 81 fa 06 4a 69 7a 	cmp    r10d,0x7a694a06
  67f795:	74 58                	je     67f7ef <__cxa_finalize@plt-0xd33621>
  67f797:	41 81 fa 0f 94 3e 8a 	cmp    r10d,0x8a3e940f
  67f79e:	0f 84 14 01 00 00    	je     67f8b8 <__cxa_finalize@plt-0xd33558>
  67f7a4:	e9 01 01 00 00       	jmp    67f8aa <__cxa_finalize@plt-0xd33566>
  67f7a9:	49 bf 6a b1 f4 81 79 	movabs r15,0xbb96887981f4b16a
  67f7b0:	88 96 bb 
  67f7b3:	4d 31 fd             	xor    r13,r15
  67f7b6:	bd 10 04 11 75       	mov    ebp,0x75110410
  67f7bb:	e9 ea 00 00 00       	jmp    67f8aa <__cxa_finalize@plt-0xd33566>
  67f7c0:	49 c1 c5 26          	rol    r13,0x26
  67f7c4:	bd bc 8e 39 db       	mov    ebp,0xdb398ebc
  67f7c9:	e9 dc 00 00 00       	jmp    67f8aa <__cxa_finalize@plt-0xd33566>
  67f7ce:	bd 2b 0c 3a 59       	mov    ebp,0x593a0c2b
  67f7d3:	e9 d5 00 00 00       	jmp    67f8ad <__cxa_finalize@plt-0xd33563>
  67f7d8:	49 bf d5 18 b0 9d 36 	movabs r15,0xc1a4c7369db018d5
  67f7df:	c7 a4 c1 
  67f7e2:	4d 31 fd             	xor    r13,r15
  67f7e5:	bd 1e ce 85 68       	mov    ebp,0x6885ce1e
  67f7ea:	e9 bb 00 00 00       	jmp    67f8aa <__cxa_finalize@plt-0xd33566>
  67f7ef:	4d 31 e5             	xor    r13,r12
  67f7f2:	bd 87 8d 0a f3       	mov    ebp,0xf30a8d87
  67f7f7:	e9 ae 00 00 00       	jmp    67f8aa <__cxa_finalize@plt-0xd33566>
  67f7fc:	49 bf 21 51 e3 1d bd 	movabs r15,0x2b262ebd1de35121
  67f803:	2e 26 2b 
  67f806:	4d 01 fd             	add    r13,r15
  67f809:	bd 49 dd 5a 0f       	mov    ebp,0xf5add49
  67f80e:	e9 97 00 00 00       	jmp    67f8aa <__cxa_finalize@plt-0xd33566>
  67f813:	4d 89 fd             	mov    r13,r15
  67f816:	49 c1 ed 04          	shr    r13,0x4
  67f81a:	49 21 cd             	and    r13,rcx
  67f81d:	49 21 cf             	and    r15,rcx
  67f820:	49 c1 e7 04          	shl    r15,0x4
  67f824:	4d 09 ef             	or     r15,r13
  67f827:	4d 89 fd             	mov    r13,r15
  67f82a:	49 21 d5             	and    r13,rdx
  67f82d:	49 c1 ef 02          	shr    r15,0x2
  67f831:	49 21 d7             	and    r15,rdx
  67f834:	4f 8d 3c af          	lea    r15,[r15+r13*4]
  67f838:	4d 89 fd             	mov    r13,r15
  67f83b:	49 21 f5             	and    r13,rsi
  67f83e:	49 d1 ef             	shr    r15,1
  67f841:	49 21 f7             	and    r15,rsi
  67f844:	4f 8d 3c 6f          	lea    r15,[r15+r13*2]
  67f848:	bd a6 ca d3 12       	mov    ebp,0x12d3caa6
  67f84d:	eb 5e                	jmp    67f8ad <__cxa_finalize@plt-0xd33563>
  67f84f:	49 c1 c5 25          	rol    r13,0x25
  67f853:	bd e4 cc da 0d       	mov    ebp,0xddacce4
  67f858:	eb 50                	jmp    67f8aa <__cxa_finalize@plt-0xd33566>
  67f85a:	4d 31 c5             	xor    r13,r8
  67f85d:	bd 44 a3 ca 35       	mov    ebp,0x35caa344
  67f862:	eb 46                	jmp    67f8aa <__cxa_finalize@plt-0xd33566>
  67f864:	49 bf 29 06 7d ea b1 	movabs r15,0x996a7b1ea7d0629
  67f86b:	a7 96 09 
  67f86e:	4d 01 fd             	add    r13,r15
  67f871:	bd dd 60 8f 02       	mov    ebp,0x28f60dd
  67f876:	eb 32                	jmp    67f8aa <__cxa_finalize@plt-0xd33566>
  67f878:	49 c1 c5 03          	rol    r13,0x3
  67f87c:	bd e5 e2 e6 bf       	mov    ebp,0xbfe6e2e5
  67f881:	eb 27                	jmp    67f8aa <__cxa_finalize@plt-0xd33566>
  67f883:	49 c1 c5 3e          	rol    r13,0x3e
  67f887:	bd 4f dd 38 29       	mov    ebp,0x2938dd4f
  67f88c:	eb 1c                	jmp    67f8aa <__cxa_finalize@plt-0xd33566>
  67f88e:	bd 41 1a 5b 8b       	mov    ebp,0x8b5b1a41
  67f893:	4d 89 df             	mov    r15,r11
  67f896:	eb 15                	jmp    67f8ad <__cxa_finalize@plt-0xd33563>
  67f898:	49 bf 86 8a 61 3e a0 	movabs r15,0x84294da03e618a86
  67f89f:	4d 29 84 
  67f8a2:	4d 01 fd             	add    r13,r15
  67f8a5:	bd c6 2b e9 16       	mov    ebp,0x16e92bc6
  67f8aa:	4d 89 ef             	mov    r15,r13
  67f8ad:	41 31 ea             	xor    r10d,ebp
  67f8b0:	4d 89 fd             	mov    r13,r15
  67f8b3:	e9 2b fe ff ff       	jmp    67f6e3 <__cxa_finalize@plt-0xd3372d>
  67f8b8:	f6 44 24 07 01       	test   BYTE PTR [rsp+0x7],0x1
  67f8bd:	74 0c                	je     67f8cb <__cxa_finalize@plt-0xd33545>
  67f8bf:	66 0f 28 0d a9 78 a8 	movapd xmm1,XMMWORD PTR [rip+0xffffffffffa878a9]        # 107170 <__cxa_finalize@plt-0x12abca0>
  67f8c6:	ff 
  67f8c7:	66 0f 57 c1          	xorpd  xmm0,xmm1
  67f8cb:	f2 48 0f 2a 5c 24 28 	cvtsi2sd xmm3,QWORD PTR [rsp+0x28]
  67f8d2:	48 c1 e0 07          	shl    rax,0x7
  67f8d6:	48 c1 e7 05          	shl    rdi,0x5
  67f8da:	48 09 c7             	or     rdi,rax
  67f8dd:	49 c1 e6 04          	shl    r14,0x4
  67f8e1:	49 c1 e1 02          	shl    r9,0x2
  67f8e5:	4d 09 f1             	or     r9,r14
  67f8e8:	49 09 f9             	or     r9,rdi
  67f8eb:	66 49 0f 6e c9       	movq   xmm1,r9
  67f8f0:	66 0f 62 0d f8 60 a8 	punpckldq xmm1,XMMWORD PTR [rip+0xffffffffffa860f8]        # 1059f0 <__cxa_finalize@plt-0x12ad420>
  67f8f7:	ff 
  67f8f8:	f2 0f 58 d8          	addsd  xmm3,xmm0
  67f8fc:	66 0f 5c 0d 3c 5b a8 	subpd  xmm1,XMMWORD PTR [rip+0xffffffffffa85b3c]        # 105440 <__cxa_finalize@plt-0x12ad9d0>
  67f903:	ff 
  67f904:	66 0f 28 d1          	movapd xmm2,xmm1
  67f908:	66 0f 15 d1          	unpckhpd xmm2,xmm1
  67f90c:	f2 0f 58 d1          	addsd  xmm2,xmm1
  67f910:	f2 0f 10 05 90 91 a8 	movsd  xmm0,QWORD PTR [rip+0xffffffffffa89190]        # 108aa8 <__cxa_finalize@plt-0x12aa368>
  67f917:	ff 
  67f918:	f2 0f 5e c2          	divsd  xmm0,xmm2
  67f91c:	f2 0f 59 c3          	mulsd  xmm0,xmm3
  67f920:	f2 0f 11 44 24 08    	movsd  QWORD PTR [rsp+0x8],xmm0
  67f926:	f2 0f 5e 05 fa 8d a8 	divsd  xmm0,QWORD PTR [rip+0xffffffffffa88dfa]        # 108728 <__cxa_finalize@plt-0x12aa6e8>
  67f92d:	ff 
  67f92e:	ff 15 3c 3a da 00    	call   QWORD PTR [rip+0xda3a3c]        # 1423370 <__memmove_chk@plt+0x6f980>
  67f934:	f2 0f 59 05 ec 8d a8 	mulsd  xmm0,QWORD PTR [rip+0xffffffffffa88dec]        # 108728 <__cxa_finalize@plt-0x12aa6e8>
  67f93b:	ff 
  67f93c:	f2 0f 10 4c 24 08    	movsd  xmm1,QWORD PTR [rsp+0x8]
  67f942:	f2 0f 5c c8          	subsd  xmm1,xmm0
  67f946:	49 c1 e5 04          	shl    r13,0x4
  67f94a:	66 0f 28 c1          	movapd xmm0,xmm1
  67f94e:	31 ff                	xor    edi,edi
  67f950:	4c 89 ee             	mov    rsi,r13
  67f953:	e8 a7 83 00 00       	call   687cff <__cxa_finalize@plt-0xd2b111>
  67f958:	f2 0f 11 44 24 08    	movsd  QWORD PTR [rsp+0x8],xmm0
  67f95e:	48 8d 35 2b 8c db 00 	lea    rsi,[rip+0xdb8c2b]        # 1438590 <__memmove_chk@plt+0x84ba0>
  67f965:	4c 8d 74 24 10       	lea    r14,[rsp+0x10]
  67f96a:	4c 89 f7             	mov    rdi,r14
  67f96d:	e8 10 51 f8 ff       	call   604a82 <__cxa_finalize@plt-0xdae38e>
  67f972:	41 80 3e 00          	cmp    BYTE PTR [r14],0x0
  67f976:	74 13                	je     67f98b <__cxa_finalize@plt-0xd33485>
  67f978:	48 8b 7c 24 18       	mov    rdi,QWORD PTR [rsp+0x18]
  67f97d:	8b 74 24 20          	mov    esi,DWORD PTR [rsp+0x20]
  67f981:	eb 27                	jmp    67f9aa <__cxa_finalize@plt-0xd33466>
  67f983:	4c 89 ef             	mov    rdi,r13
  67f986:	44 89 f6             	mov    esi,r14d
  67f989:	eb 1f                	jmp    67f9aa <__cxa_finalize@plt-0xd33466>
  67f98b:	f2 0f 10 44 24 30    	movsd  xmm0,QWORD PTR [rsp+0x30]
  67f991:	f2 0f 59 44 24 08    	mulsd  xmm0,QWORD PTR [rsp+0x8]
  67f997:	48 8b 7c 24 18       	mov    rdi,QWORD PTR [rsp+0x18]
  67f99c:	f2 0f 58 47 08       	addsd  xmm0,QWORD PTR [rdi+0x8]
  67f9a1:	8b 74 24 20          	mov    esi,DWORD PTR [rsp+0x20]
  67f9a5:	f2 0f 11 47 08       	movsd  QWORD PTR [rdi+0x8],xmm0
  67f9aa:	e8 f1 ca 01 00       	call   69c4a0 <__cxa_finalize@plt-0xd16970>
  67f9af:	e9 55 f3 ff ff       	jmp    67ed09 <__cxa_finalize@plt-0xd34107>
  67f9b4:	48 8d 3d 4d 78 d4 00 	lea    rdi,[rip+0xd4784d]        # 13c7208 <__memmove_chk@plt+0x13818>
  67f9bb:	e8 30 a8 f5 ff       	call   5da1f0 <__cxa_finalize@plt-0xdd8c20>
  67f9c0:	48 8d 3d 91 7c d4 00 	lea    rdi,[rip+0xd47c91]        # 13c7658 <__memmove_chk@plt+0x13c68>
  67f9c7:	e8 64 89 f5 ff       	call   5d8330 <__cxa_finalize@plt-0xddaae0>
  67f9cc:	48 8d 3d 7d ad d4 00 	lea    rdi,[rip+0xd4ad7d]        # 13ca750 <__memmove_chk@plt+0x16d60>
  67f9d3:	e8 98 c6 fc ff       	call   64c070 <__cxa_finalize@plt-0xd66da0>
  67f9d8:	b9 e1 21 d2 c2       	mov    ecx,0xc2d221e1
  67f9dd:	31 c0                	xor    eax,eax
  67f9df:	31 d2                	xor    edx,edx
  67f9e1:	81 f9 87 10 3d 85    	cmp    ecx,0x853d1087
  67f9e7:	0f 84 19 01 00 00    	je     67fb06 <__cxa_finalize@plt-0xd3330a>
  67f9ed:	81 f9 05 71 be 8c    	cmp    ecx,0x8cbe7105
  67f9f3:	0f 84 14 01 00 00    	je     67fb0d <__cxa_finalize@plt-0xd33303>
  67f9f9:	81 f9 54 ac 2e 9d    	cmp    ecx,0x9d2eac54
  67f9ff:	0f 84 89 00 00 00    	je     67fa8e <__cxa_finalize@plt-0xd33382>
  67fa05:	81 f9 25 31 04 ab    	cmp    ecx,0xab043125
  67fa0b:	0f 84 c7 00 00 00    	je     67fad8 <__cxa_finalize@plt-0xd33338>
  67fa11:	81 f9 e1 21 d2 c2    	cmp    ecx,0xc2d221e1
  67fa17:	0f 84 e0 00 00 00    	je     67fafd <__cxa_finalize@plt-0xd33313>
  67fa1d:	81 f9 bf f8 71 cf    	cmp    ecx,0xcf71f8bf
  67fa23:	74 72                	je     67fa97 <__cxa_finalize@plt-0xd33379>
  67fa25:	81 f9 fb 6f d2 d1    	cmp    ecx,0xd1d26ffb
  67fa2b:	74 73                	je     67faa0 <__cxa_finalize@plt-0xd33370>
  67fa2d:	81 f9 85 86 89 dc    	cmp    ecx,0xdc898685
  67fa33:	0f 84 a8 00 00 00    	je     67fae1 <__cxa_finalize@plt-0xd3332f>
  67fa39:	81 f9 92 f8 7c e9    	cmp    ecx,0xe97cf892
  67fa3f:	74 69                	je     67faaa <__cxa_finalize@plt-0xd33366>
  67fa41:	81 f9 0b 84 d3 03    	cmp    ecx,0x3d3840b
  67fa47:	0f 84 81 00 00 00    	je     67face <__cxa_finalize@plt-0xd33342>
  67fa4d:	81 f9 ee 65 63 06    	cmp    ecx,0x66365ee
  67fa53:	74 70                	je     67fac5 <__cxa_finalize@plt-0xd3334b>
  67fa55:	81 f9 aa 1e 89 0a    	cmp    ecx,0xa891eaa
  67fa5b:	0f 84 89 00 00 00    	je     67faea <__cxa_finalize@plt-0xd33326>
  67fa61:	81 f9 96 fd 9c 44    	cmp    ecx,0x449cfd96
  67fa67:	0f 84 86 00 00 00    	je     67faf3 <__cxa_finalize@plt-0xd3331d>
  67fa6d:	81 f9 97 75 89 5e    	cmp    ecx,0x5e897597
  67fa73:	74 3e                	je     67fab3 <__cxa_finalize@plt-0xd3335d>
  67fa75:	81 f9 7b 0c 87 7c    	cmp    ecx,0x7c870c7b
  67fa7b:	74 3f                	je     67fabc <__cxa_finalize@plt-0xd33354>
  67fa7d:	81 f9 eb 1f bc 2d    	cmp    ecx,0x2dbc1feb
  67fa83:	0f 84 92 00 00 00    	je     67fb1b <__cxa_finalize@plt-0xd332f5>
  67fa89:	e9 86 00 00 00       	jmp    67fb14 <__cxa_finalize@plt-0xd332fc>
  67fa8e:	34 70                	xor    al,0x70
  67fa90:	ba af c3 fc 4c       	mov    edx,0x4cfcc3af
  67fa95:	eb 7d                	jmp    67fb14 <__cxa_finalize@plt-0xd332fc>
  67fa97:	04 bf                	add    al,0xbf
  67fa99:	ba 15 e6 f8 c5       	mov    edx,0xc5f8e615
  67fa9e:	eb 74                	jmp    67fb14 <__cxa_finalize@plt-0xd332fc>
  67faa0:	c0 c0 03             	rol    al,0x3
  67faa3:	ba 44 97 a3 1e       	mov    edx,0x1ea39744
  67faa8:	eb 6a                	jmp    67fb14 <__cxa_finalize@plt-0xd332fc>
  67faaa:	04 e2                	add    al,0xe2
  67faac:	ba c6 54 52 74       	mov    edx,0x745254c6
  67fab1:	eb 61                	jmp    67fb14 <__cxa_finalize@plt-0xd332fc>
  67fab3:	04 b9                	add    al,0xb9
  67fab5:	ba 12 f3 00 82       	mov    edx,0x8200f312
  67faba:	eb 58                	jmp    67fb14 <__cxa_finalize@plt-0xd332fc>
  67fabc:	04 fd                	add    al,0xfd
  67fabe:	ba ec 79 0e 22       	mov    edx,0x220e79ec
  67fac3:	eb 4f                	jmp    67fb14 <__cxa_finalize@plt-0xd332fc>
  67fac5:	34 d0                	xor    al,0xd0
  67fac7:	ba 95 69 e4 7a       	mov    edx,0x7ae46995
  67facc:	eb 46                	jmp    67fb14 <__cxa_finalize@plt-0xd332fc>
  67face:	c0 c0 02             	rol    al,0x2
  67fad1:	ba e5 e1 b0 05       	mov    edx,0x5b0e1e5
  67fad6:	eb 3c                	jmp    67fb14 <__cxa_finalize@plt-0xd332fc>
  67fad8:	04 c4                	add    al,0xc4
  67fada:	ba 20 40 ba 27       	mov    edx,0x27ba4020
  67fadf:	eb 33                	jmp    67fb14 <__cxa_finalize@plt-0xd332fc>
  67fae1:	04 e0                	add    al,0xe0
  67fae3:	ba a0 b7 8d 77       	mov    edx,0x778db7a0
  67fae8:	eb 2a                	jmp    67fb14 <__cxa_finalize@plt-0xd332fc>
  67faea:	34 96                	xor    al,0x96
  67faec:	ba 2d 0e b4 8f       	mov    edx,0x8fb40e2d
  67faf1:	eb 21                	jmp    67fb14 <__cxa_finalize@plt-0xd332fc>
  67faf3:	c0 c0 05             	rol    al,0x5
  67faf6:	ba 04 05 e0 ad       	mov    edx,0xade00504
  67fafb:	eb 17                	jmp    67fb14 <__cxa_finalize@plt-0xd332fc>
  67fafd:	b0 f2                	mov    al,0xf2
  67faff:	ba 77 dc 4e 86       	mov    edx,0x864edc77
  67fb04:	eb 0e                	jmp    67fb14 <__cxa_finalize@plt-0xd332fc>
  67fb06:	ba 8c 94 ee 86       	mov    edx,0x86ee948c
  67fb0b:	eb 07                	jmp    67fb14 <__cxa_finalize@plt-0xd332fc>
  67fb0d:	04 e8                	add    al,0xe8
  67fb0f:	ba ee 6e 02 a1       	mov    edx,0xa1026eee
  67fb14:	31 d1                	xor    ecx,edx
  67fb16:	e9 c6 fe ff ff       	jmp    67f9e1 <__cxa_finalize@plt-0xd3342f>
  67fb1b:	ba 0f 82 d1 2a       	mov    edx,0x2ad1820f
  67fb20:	31 c9                	xor    ecx,ecx
  67fb22:	45 31 c0             	xor    r8d,r8d
  67fb25:	81 fa c0 28 4a a1    	cmp    edx,0xa14a28c0
  67fb2b:	0f 84 2f 01 00 00    	je     67fc60 <__cxa_finalize@plt-0xd331b0>
  67fb31:	81 fa 54 c7 a4 e6    	cmp    edx,0xe6a4c754
  67fb37:	0f 84 89 00 00 00    	je     67fbc6 <__cxa_finalize@plt-0xd3324a>
  67fb3d:	81 fa 22 52 3e ed    	cmp    edx,0xed3e5222
  67fb43:	0f 84 b2 00 00 00    	je     67fbfb <__cxa_finalize@plt-0xd33215>
  67fb49:	81 fa cc ca d4 fe    	cmp    edx,0xfed4cacc
  67fb4f:	0f 84 67 01 00 00    	je     67fcbc <__cxa_finalize@plt-0xd33154>
  67fb55:	81 fa e3 ad 46 04    	cmp    edx,0x446ade3
  67fb5b:	0f 84 66 01 00 00    	je     67fcc7 <__cxa_finalize@plt-0xd33149>
  67fb61:	81 fa 9c 50 bb 14    	cmp    edx,0x14bb509c
  67fb67:	0f 84 09 01 00 00    	je     67fc76 <__cxa_finalize@plt-0xd3319a>
  67fb6d:	81 fa 0f 82 d1 2a    	cmp    edx,0x2ad1820f
  67fb73:	0f 84 39 01 00 00    	je     67fcb2 <__cxa_finalize@plt-0xd3315e>
  67fb79:	81 fa b0 f2 48 2f    	cmp    edx,0x2f48f2b0
  67fb7f:	74 53                	je     67fbd4 <__cxa_finalize@plt-0xd3323c>
  67fb81:	81 fa 50 eb ca 37    	cmp    edx,0x37caeb50
  67fb87:	0f 84 f4 00 00 00    	je     67fc81 <__cxa_finalize@plt-0xd3318f>
  67fb8d:	81 fa e8 1a a9 45    	cmp    edx,0x45a91ae8
  67fb93:	74 4d                	je     67fbe2 <__cxa_finalize@plt-0xd3322e>
  67fb95:	81 fa f8 3f e0 48    	cmp    edx,0x48e03ff8
  67fb9b:	0f 84 8e 00 00 00    	je     67fc2f <__cxa_finalize@plt-0xd331e1>
  67fba1:	81 fa 7a 71 13 5a    	cmp    edx,0x5a13717a
  67fba7:	74 44                	je     67fbed <__cxa_finalize@plt-0xd33223>
  67fba9:	81 fa 6b 1f 72 65    	cmp    edx,0x65721f6b
  67fbaf:	0f 84 b6 00 00 00    	je     67fc6b <__cxa_finalize@plt-0xd331a5>
  67fbb5:	81 fa 8d d4 cb f9    	cmp    edx,0xf9cbd48d
  67fbbb:	0f 84 14 01 00 00    	je     67fcd5 <__cxa_finalize@plt-0xd3313b>
  67fbc1:	e9 07 01 00 00       	jmp    67fccd <__cxa_finalize@plt-0xd33143>
  67fbc6:	80 c1 5f             	add    cl,0x5f
  67fbc9:	41 b8 bc dd 0d a3    	mov    r8d,0xa30dddbc
  67fbcf:	e9 f9 00 00 00       	jmp    67fccd <__cxa_finalize@plt-0xd33143>
  67fbd4:	c0 c1 06             	rol    cl,0x6
  67fbd7:	41 b8 ca 83 5b 75    	mov    r8d,0x755b83ca
  67fbdd:	e9 eb 00 00 00       	jmp    67fccd <__cxa_finalize@plt-0xd33143>
  67fbe2:	41 b8 0b b7 ef 41    	mov    r8d,0x41efb70b
  67fbe8:	e9 e0 00 00 00       	jmp    67fccd <__cxa_finalize@plt-0xd33143>
  67fbed:	c0 c1 06             	rol    cl,0x6
  67fbf0:	41 b8 82 4e f3 12    	mov    r8d,0x12f34e82
  67fbf6:	e9 d2 00 00 00       	jmp    67fccd <__cxa_finalize@plt-0xd33143>
  67fbfb:	c0 c1 04             	rol    cl,0x4
  67fbfe:	41 89 c8             	mov    r8d,ecx
  67fc01:	41 80 e0 33          	and    r8b,0x33
  67fc05:	41 c0 e0 02          	shl    r8b,0x2
  67fc09:	c0 e9 02             	shr    cl,0x2
  67fc0c:	80 e1 33             	and    cl,0x33
  67fc0f:	44 08 c1             	or     cl,r8b
  67fc12:	41 89 c8             	mov    r8d,ecx
  67fc15:	41 80 e0 55          	and    r8b,0x55
  67fc19:	45 00 c0             	add    r8b,r8b
  67fc1c:	d0 e9                	shr    cl,1
  67fc1e:	80 e1 55             	and    cl,0x55
  67fc21:	44 08 c1             	or     cl,r8b
  67fc24:	41 b8 e2 7a 74 4c    	mov    r8d,0x4c747ae2
  67fc2a:	e9 9e 00 00 00       	jmp    67fccd <__cxa_finalize@plt-0xd33143>
  67fc2f:	c0 c1 04             	rol    cl,0x4
  67fc32:	41 89 c8             	mov    r8d,ecx
  67fc35:	41 80 e0 33          	and    r8b,0x33
  67fc39:	41 c0 e0 02          	shl    r8b,0x2
  67fc3d:	c0 e9 02             	shr    cl,0x2
  67fc40:	80 e1 33             	and    cl,0x33
  67fc43:	44 08 c1             	or     cl,r8b
  67fc46:	41 89 c8             	mov    r8d,ecx
  67fc49:	41 80 e0 55          	and    r8b,0x55
  67fc4d:	45 00 c0             	add    r8b,r8b
  67fc50:	d0 e9                	shr    cl,1
  67fc52:	80 e1 55             	and    cl,0x55
  67fc55:	44 08 c1             	or     cl,r8b
  67fc58:	41 b8 a8 d4 2a 7f    	mov    r8d,0x7f2ad4a8
  67fc5e:	eb 6d                	jmp    67fccd <__cxa_finalize@plt-0xd33143>
  67fc60:	80 c1 cb             	add    cl,0xcb
  67fc63:	41 b8 5c 78 f1 b5    	mov    r8d,0xb5f1785c
  67fc69:	eb 62                	jmp    67fccd <__cxa_finalize@plt-0xd33143>
  67fc6b:	80 c1 78             	add    cl,0x78
  67fc6e:	41 b8 3f d8 d6 83    	mov    r8d,0x83d6d83f
  67fc74:	eb 57                	jmp    67fccd <__cxa_finalize@plt-0xd33143>
  67fc76:	80 c1 7e             	add    cl,0x7e
  67fc79:	41 b8 2c a2 f3 3b    	mov    r8d,0x3bf3a22c
  67fc7f:	eb 4c                	jmp    67fccd <__cxa_finalize@plt-0xd33143>
  67fc81:	c0 c1 04             	rol    cl,0x4
  67fc84:	41 89 c8             	mov    r8d,ecx
  67fc87:	41 80 e0 33          	and    r8b,0x33
  67fc8b:	41 c0 e0 02          	shl    r8b,0x2
  67fc8f:	c0 e9 02             	shr    cl,0x2
  67fc92:	80 e1 33             	and    cl,0x33
  67fc95:	44 08 c1             	or     cl,r8b
  67fc98:	41 89 c8             	mov    r8d,ecx
  67fc9b:	41 80 e0 55          	and    r8b,0x55
  67fc9f:	45 00 c0             	add    r8b,r8b
  67fca2:	d0 e9                	shr    cl,1
  67fca4:	80 e1 55             	and    cl,0x55
  67fca7:	44 08 c1             	or     cl,r8b
  67fcaa:	41 b8 9c 21 1e c9    	mov    r8d,0xc91e219c
  67fcb0:	eb 1b                	jmp    67fccd <__cxa_finalize@plt-0xd33143>
  67fcb2:	b1 ca                	mov    cl,0xca
  67fcb4:	41 b8 2d d0 ef c7    	mov    r8d,0xc7efd02d
  67fcba:	eb 11                	jmp    67fccd <__cxa_finalize@plt-0xd33143>
  67fcbc:	80 f1 8d             	xor    cl,0x8d
  67fcbf:	41 b8 a7 d5 a6 9b    	mov    r8d,0x9ba6d5a7
  67fcc5:	eb 06                	jmp    67fccd <__cxa_finalize@plt-0xd33143>
  67fcc7:	41 b8 6e 79 8d fd    	mov    r8d,0xfd8d796e
  67fccd:	44 31 c2             	xor    edx,r8d
  67fcd0:	e9 50 fe ff ff       	jmp    67fb25 <__cxa_finalize@plt-0xd332eb>
  67fcd5:	40 f6 e7             	mul    dil
  67fcd8:	89 c2                	mov    edx,eax
  67fcda:	c0 c2 03             	rol    dl,0x3
  67fcdd:	89 c8                	mov    eax,ecx
  67fcdf:	f6 e2                	mul    dl
  67fce1:	40 30 f0             	xor    al,sil
  67fce4:	ba b2 27 03 8c       	mov    edx,0x8c0327b2
  67fce9:	31 f6                	xor    esi,esi
  67fceb:	81 fa b2 27 03 8c    	cmp    edx,0x8c0327b2
  67fcf1:	74 36                	je     67fd29 <__cxa_finalize@plt-0xd330e7>
  67fcf3:	81 fa 33 a2 c9 07    	cmp    edx,0x7c9a233
  67fcf9:	74 1d                	je     67fd18 <__cxa_finalize@plt-0xd330f8>
  67fcfb:	81 fa c2 32 24 68    	cmp    edx,0x682432c2
  67fd01:	0f 84 85 01 00 00    	je     67fe8c <__cxa_finalize@plt-0xd32f84>
  67fd07:	81 fa 64 1f 8e 9c    	cmp    edx,0x9c8e1f64
  67fd0d:	0f 84 2a 03 00 00    	je     68003d <__cxa_finalize@plt-0xd32dd3>
  67fd13:	e9 1e 03 00 00       	jmp    680036 <__cxa_finalize@plt-0xd32dda>
  67fd18:	89 c1                	mov    ecx,eax
  67fd1a:	c0 e9 04             	shr    cl,0x4
  67fd1d:	30 c8                	xor    al,cl
  67fd1f:	be 57 bd 47 9b       	mov    esi,0x9b47bd57
  67fd24:	e9 0d 03 00 00       	jmp    680036 <__cxa_finalize@plt-0xd32dda>
  67fd29:	be e3 33 f6 f7       	mov    esi,0xf7f633e3
  67fd2e:	31 c9                	xor    ecx,ecx
  67fd30:	31 ff                	xor    edi,edi
  67fd32:	81 fe 31 9e 69 88    	cmp    esi,0x88699e31
  67fd38:	0f 84 2d 01 00 00    	je     67fe6b <__cxa_finalize@plt-0xd32fa5>
  67fd3e:	81 fe 52 14 7b a7    	cmp    esi,0xa77b1452
  67fd44:	74 75                	je     67fdbb <__cxa_finalize@plt-0xd33055>
  67fd46:	81 fe cb e8 45 b2    	cmp    esi,0xb245e8cb
  67fd4c:	74 7a                	je     67fdc8 <__cxa_finalize@plt-0xd33048>
  67fd4e:	81 fe 3e 7e 4f cb    	cmp    esi,0xcb4f7e3e
  67fd54:	0f 84 fe 00 00 00    	je     67fe58 <__cxa_finalize@plt-0xd32fb8>
  67fd5a:	81 fe 8b 60 67 ea    	cmp    esi,0xea67608b
  67fd60:	0f 84 9d 00 00 00    	je     67fe03 <__cxa_finalize@plt-0xd3300d>
  67fd66:	81 fe e3 33 f6 f7    	cmp    esi,0xf7f633e3
  67fd6c:	0f 84 c9 00 00 00    	je     67fe3b <__cxa_finalize@plt-0xd32fd5>
  67fd72:	81 fe cf ff 53 f8    	cmp    esi,0xf853ffcf
  67fd78:	0f 84 8f 00 00 00    	je     67fe0d <__cxa_finalize@plt-0xd33003>
  67fd7e:	81 fe f1 8b ce 11    	cmp    esi,0x11ce8bf1
  67fd84:	0f 84 d7 00 00 00    	je     67fe61 <__cxa_finalize@plt-0xd32faf>
  67fd8a:	81 fe 82 e0 85 28    	cmp    esi,0x2885e082
  67fd90:	74 43                	je     67fdd5 <__cxa_finalize@plt-0xd3303b>
  67fd92:	81 fe 38 75 7c 60    	cmp    esi,0x607c7538
  67fd98:	0f 84 a6 00 00 00    	je     67fe44 <__cxa_finalize@plt-0xd32fcc>
  67fd9e:	81 fe 2d 3f 01 70    	cmp    esi,0x70013f2d
  67fda4:	0f 84 a4 00 00 00    	je     67fe4e <__cxa_finalize@plt-0xd32fc2>
  67fdaa:	81 fe 7f b8 f9 e8    	cmp    esi,0xe8f9b87f
  67fdb0:	0f 84 c3 00 00 00    	je     67fe79 <__cxa_finalize@plt-0xd32f97>
  67fdb6:	e9 b7 00 00 00       	jmp    67fe72 <__cxa_finalize@plt-0xd32f9e>
  67fdbb:	80 c1 47             	add    cl,0x47
  67fdbe:	bf 99 fc 3e 15       	mov    edi,0x153efc99
  67fdc3:	e9 aa 00 00 00       	jmp    67fe72 <__cxa_finalize@plt-0xd32f9e>
  67fdc8:	c0 c1 02             	rol    cl,0x2
  67fdcb:	bf fa 76 2c 3a       	mov    edi,0x3a2c76fa
  67fdd0:	e9 9d 00 00 00       	jmp    67fe72 <__cxa_finalize@plt-0xd32f9e>
  67fdd5:	c0 c1 04             	rol    cl,0x4
  67fdd8:	89 cf                	mov    edi,ecx
  67fdda:	40 80 e7 33          	and    dil,0x33
  67fdde:	40 c0 e7 02          	shl    dil,0x2
  67fde2:	c0 e9 02             	shr    cl,0x2
  67fde5:	80 e1 33             	and    cl,0x33
  67fde8:	40 08 f9             	or     cl,dil
  67fdeb:	89 cf                	mov    edi,ecx
  67fded:	40 80 e7 55          	and    dil,0x55
  67fdf1:	40 00 ff             	add    dil,dil
  67fdf4:	d0 e9                	shr    cl,1
  67fdf6:	80 e1 55             	and    cl,0x55
  67fdf9:	40 08 f9             	or     cl,dil
  67fdfc:	bf af df 84 58       	mov    edi,0x5884dfaf
  67fe01:	eb 6f                	jmp    67fe72 <__cxa_finalize@plt-0xd32f9e>
  67fe03:	80 f1 19             	xor    cl,0x19
  67fe06:	bf b5 1e 28 21       	mov    edi,0x21281eb5
  67fe0b:	eb 65                	jmp    67fe72 <__cxa_finalize@plt-0xd32f9e>
  67fe0d:	c0 c1 04             	rol    cl,0x4
  67fe10:	89 cf                	mov    edi,ecx
  67fe12:	40 80 e7 33          	and    dil,0x33
  67fe16:	40 c0 e7 02          	shl    dil,0x2
  67fe1a:	c0 e9 02             	shr    cl,0x2
  67fe1d:	80 e1 33             	and    cl,0x33
  67fe20:	40 08 f9             	or     cl,dil
  67fe23:	89 cf                	mov    edi,ecx
  67fe25:	40 80 e7 55          	and    dil,0x55
  67fe29:	40 00 ff             	add    dil,dil
  67fe2c:	d0 e9                	shr    cl,1
  67fe2e:	80 e1 55             	and    cl,0x55
  67fe31:	40 08 f9             	or     cl,dil
  67fe34:	bf 44 9f 34 12       	mov    edi,0x12349f44
  67fe39:	eb 37                	jmp    67fe72 <__cxa_finalize@plt-0xd32f9e>
  67fe3b:	b1 28                	mov    cl,0x28
  67fe3d:	bf 2c cc a5 0f       	mov    edi,0xfa5cc2c
  67fe42:	eb 2e                	jmp    67fe72 <__cxa_finalize@plt-0xd32f9e>
  67fe44:	c0 c1 05             	rol    cl,0x5
  67fe47:	bf ba 95 f9 48       	mov    edi,0x48f995ba
  67fe4c:	eb 24                	jmp    67fe72 <__cxa_finalize@plt-0xd32f9e>
  67fe4e:	80 c1 81             	add    cl,0x81
  67fe51:	bf 7f 2b 7a d7       	mov    edi,0xd77a2b7f
  67fe56:	eb 1a                	jmp    67fe72 <__cxa_finalize@plt-0xd32f9e>
  67fe58:	d0 c9                	ror    cl,1
  67fe5a:	bf 06 0b 33 ab       	mov    edi,0xab330b06
  67fe5f:	eb 11                	jmp    67fe72 <__cxa_finalize@plt-0xd32f9e>
  67fe61:	80 c1 de             	add    cl,0xde
  67fe64:	bf 8e 33 37 f9       	mov    edi,0xf937338e
  67fe69:	eb 07                	jmp    67fe72 <__cxa_finalize@plt-0xd32f9e>
  67fe6b:	d0 c9                	ror    cl,1
  67fe6d:	bf c0 15 a7 99       	mov    edi,0x99a715c0
  67fe72:	31 fe                	xor    esi,edi
  67fe74:	e9 b9 fe ff ff       	jmp    67fd32 <__cxa_finalize@plt-0xd330de>
  67fe79:	89 c7                	mov    edi,eax
  67fe7b:	40 c0 ef 04          	shr    dil,0x4
  67fe7f:	40 30 c7             	xor    dil,al
  67fe82:	be 70 15 27 e4       	mov    esi,0xe4271570
  67fe87:	e9 a5 01 00 00       	jmp    680031 <__cxa_finalize@plt-0xd32ddf>
  67fe8c:	be 56 67 92 18       	mov    esi,0x18926756
  67fe91:	31 c9                	xor    ecx,ecx
  67fe93:	31 ff                	xor    edi,edi
  67fe95:	81 fe 57 6b 31 96    	cmp    esi,0x96316b57
  67fe9b:	0f 84 28 01 00 00    	je     67ffc9 <__cxa_finalize@plt-0xd32e47>
  67fea1:	81 fe 7b d2 2a bc    	cmp    esi,0xbc2ad27b
  67fea7:	0f 84 67 01 00 00    	je     680014 <__cxa_finalize@plt-0xd32dfc>
  67fead:	81 fe b4 f6 95 bc    	cmp    esi,0xbc95f6b4
  67feb3:	74 75                	je     67ff2a <__cxa_finalize@plt-0xd32ee6>
  67feb5:	81 fe cf 1d af e9    	cmp    esi,0xe9af1dcf
  67febb:	0f 84 9a 00 00 00    	je     67ff5b <__cxa_finalize@plt-0xd32eb5>
  67fec1:	81 fe 3b 50 b8 17    	cmp    esi,0x17b8503b
  67fec7:	0f 84 06 01 00 00    	je     67ffd3 <__cxa_finalize@plt-0xd32e3d>
  67fecd:	81 fe 56 67 92 18    	cmp    esi,0x18926756
  67fed3:	0f 84 8f 00 00 00    	je     67ff68 <__cxa_finalize@plt-0xd32ea8>
  67fed9:	81 fe 16 54 29 1d    	cmp    esi,0x1d295416
  67fedf:	0f 84 b6 00 00 00    	je     67ff9b <__cxa_finalize@plt-0xd32e75>
  67fee5:	81 fe 03 da ba 3f    	cmp    esi,0x3fbada03
  67feeb:	0f 84 9d 00 00 00    	je     67ff8e <__cxa_finalize@plt-0xd32e82>
  67fef1:	81 fe b1 43 8e 44    	cmp    esi,0x448e43b1
  67fef7:	0f 84 04 01 00 00    	je     680001 <__cxa_finalize@plt-0xd32e0f>
  67fefd:	81 fe 3d a7 23 56    	cmp    esi,0x5623a73d
  67ff03:	0f 84 02 01 00 00    	je     68000b <__cxa_finalize@plt-0xd32e05>
  67ff09:	81 fe d9 d9 fe 65    	cmp    esi,0x65fed9d9
  67ff0f:	74 63                	je     67ff74 <__cxa_finalize@plt-0xd32e9c>
  67ff11:	81 fe 32 8c d2 72    	cmp    esi,0x72d28c32
  67ff17:	74 68                	je     67ff81 <__cxa_finalize@plt-0xd32e8f>
  67ff19:	81 fe 7c c9 d7 73    	cmp    esi,0x73d7c97c
  67ff1f:	0f 84 fe 00 00 00    	je     680023 <__cxa_finalize@plt-0xd32ded>
  67ff25:	e9 f2 00 00 00       	jmp    68001c <__cxa_finalize@plt-0xd32df4>
  67ff2a:	c0 c1 04             	rol    cl,0x4
  67ff2d:	89 cf                	mov    edi,ecx
  67ff2f:	40 80 e7 33          	and    dil,0x33
  67ff33:	40 c0 e7 02          	shl    dil,0x2
  67ff37:	c0 e9 02             	shr    cl,0x2
  67ff3a:	80 e1 33             	and    cl,0x33
  67ff3d:	40 08 f9             	or     cl,dil
  67ff40:	89 cf                	mov    edi,ecx
  67ff42:	40 80 e7 55          	and    dil,0x55
  67ff46:	40 00 ff             	add    dil,dil
  67ff49:	d0 e9                	shr    cl,1
  67ff4b:	80 e1 55             	and    cl,0x55
  67ff4e:	40 08 f9             	or     cl,dil
  67ff51:	bf 8f a6 2d ab       	mov    edi,0xab2da68f
  67ff56:	e9 c1 00 00 00       	jmp    68001c <__cxa_finalize@plt-0xd32df4>
  67ff5b:	80 c1 cd             	add    cl,0xcd
  67ff5e:	bf 98 76 9e 7f       	mov    edi,0x7f9e7698
  67ff63:	e9 b4 00 00 00       	jmp    68001c <__cxa_finalize@plt-0xd32df4>
  67ff68:	b1 d1                	mov    cl,0xd1
  67ff6a:	bf e2 91 07 a4       	mov    edi,0xa40791e2
  67ff6f:	e9 a8 00 00 00       	jmp    68001c <__cxa_finalize@plt-0xd32df4>
  67ff74:	80 f1 15             	xor    cl,0x15
  67ff77:	bf a2 0b d4 d9       	mov    edi,0xd9d40ba2
  67ff7c:	e9 9b 00 00 00       	jmp    68001c <__cxa_finalize@plt-0xd32df4>
  67ff81:	80 f1 93             	xor    cl,0x93
  67ff84:	bf 4e 45 05 01       	mov    edi,0x105454e
  67ff89:	e9 8e 00 00 00       	jmp    68001c <__cxa_finalize@plt-0xd32df4>
  67ff8e:	80 c1 e6             	add    cl,0xe6
  67ff91:	bf 15 8e 93 22       	mov    edi,0x22938e15
  67ff96:	e9 81 00 00 00       	jmp    68001c <__cxa_finalize@plt-0xd32df4>
  67ff9b:	c0 c1 04             	rol    cl,0x4
  67ff9e:	89 cf                	mov    edi,ecx
  67ffa0:	40 80 e7 33          	and    dil,0x33
  67ffa4:	40 c0 e7 02          	shl    dil,0x2
  67ffa8:	c0 e9 02             	shr    cl,0x2
  67ffab:	80 e1 33             	and    cl,0x33
  67ffae:	40 08 f9             	or     cl,dil
  67ffb1:	89 cf                	mov    edi,ecx
  67ffb3:	40 80 e7 55          	and    dil,0x55
  67ffb7:	40 00 ff             	add    dil,dil
  67ffba:	d0 e9                	shr    cl,1
  67ffbc:	80 e1 55             	and    cl,0x55
  67ffbf:	40 08 f9             	or     cl,dil
  67ffc2:	bf d9 49 86 f4       	mov    edi,0xf48649d9
  67ffc7:	eb 53                	jmp    68001c <__cxa_finalize@plt-0xd32df4>
  67ffc9:	80 c1 92             	add    cl,0x92
  67ffcc:	bf 65 e7 e3 e4       	mov    edi,0xe4e3e765
  67ffd1:	eb 49                	jmp    68001c <__cxa_finalize@plt-0xd32df4>
  67ffd3:	c0 c1 04             	rol    cl,0x4
  67ffd6:	89 cf                	mov    edi,ecx
  67ffd8:	40 80 e7 33          	and    dil,0x33
  67ffdc:	40 c0 e7 02          	shl    dil,0x2
  67ffe0:	c0 e9 02             	shr    cl,0x2
  67ffe3:	80 e1 33             	and    cl,0x33
  67ffe6:	40 08 f9             	or     cl,dil
  67ffe9:	89 cf                	mov    edi,ecx
  67ffeb:	40 80 e7 55          	and    dil,0x55
  67ffef:	40 00 ff             	add    dil,dil
  67fff2:	d0 e9                	shr    cl,1
  67fff4:	80 e1 55             	and    cl,0x55
  67fff7:	40 08 f9             	or     cl,dil
  67fffa:	bf 06 f7 9b 41       	mov    edi,0x419bf706
  67ffff:	eb 1b                	jmp    68001c <__cxa_finalize@plt-0xd32df4>
  680001:	c0 c1 05             	rol    cl,0x5
  680004:	bf b2 99 34 7b       	mov    edi,0x7b3499b2
  680009:	eb 11                	jmp    68001c <__cxa_finalize@plt-0xd32df4>
  68000b:	d0 c1                	rol    cl,1
  68000d:	bf e4 7e dd 33       	mov    edi,0x33dd7ee4
  680012:	eb 08                	jmp    68001c <__cxa_finalize@plt-0xd32df4>
  680014:	80 c1 97             	add    cl,0x97
  680017:	bf ca 91 a4 f8       	mov    edi,0xf8a491ca
  68001c:	31 fe                	xor    esi,edi
  68001e:	e9 72 fe ff ff       	jmp    67fe95 <__cxa_finalize@plt-0xd32f7b>
  680023:	89 c7                	mov    edi,eax
  680025:	40 c0 ef 03          	shr    dil,0x3
  680029:	40 30 c7             	xor    dil,al
  68002c:	be f1 90 ed 6f       	mov    esi,0x6fed90f1
  680031:	89 c8                	mov    eax,ecx
  680033:	40 f6 e7             	mul    dil
  680036:	31 f2                	xor    edx,esi
  680038:	e9 ae fc ff ff       	jmp    67fceb <__cxa_finalize@plt-0xd33125>
  68003d:	c3                   	ret
  68003e:	55                   	push   rbp
  68003f:	41 57                	push   r15
  680041:	41 56                	push   r14
  680043:	41 55                	push   r13
  680045:	41 54                	push   r12
  680047:	53                   	push   rbx
  680048:	50                   	push   rax
  680049:	89 7c 24 04          	mov    DWORD PTR [rsp+0x4],edi
  68004d:	ba 2c 3c 4a 4f       	mov    edx,0x4f4a3c2c
  680052:	31 c0                	xor    eax,eax
  680054:	48 be 0e 82 e5 4e 81 	movabs rsi,0xda93db814ee5820e
  68005b:	db 93 da 
  68005e:	48 bf c1 d5 5f d3 d6 	movabs rdi,0x710d6dd6d35fd5c1
  680065:	6d 0d 71 
  680068:	49 b8 70 6a 95 76 38 	movabs r8,0xd543143876956a70
  68006f:	14 43 d5 
  680072:	49 b9 dd 65 47 1f cb 	movabs r9,0x316c04cb1f4765dd
  680079:	04 6c 31 
  68007c:	49 ba ae b2 03 b9 c8 	movabs r10,0xd701d7c8b903b2ae
  680083:	d7 01 d7 
  680086:	49 bb 88 a8 af 65 ef 	movabs r11,0x33aae2ef65afa888
  68008d:	e2 aa 33 
  680090:	48 bb 88 c2 81 4c 71 	movabs rbx,0xd1b740714c81c288
  680097:	40 b7 d1 
  68009a:	49 be de 59 b4 4a e0 	movabs r14,0xc78060e04ab459de
  6800a1:	60 80 c7 
  6800a4:	31 c9                	xor    ecx,ecx
  6800a6:	31 ed                	xor    ebp,ebp
  6800a8:	81 fa 1c e8 43 d3    	cmp    edx,0xd343e81c
  6800ae:	74 79                	je     680129 <__cxa_finalize@plt-0xd32ce7>
  6800b0:	81 fa 6a 44 c6 e4    	cmp    edx,0xe4c6446a
  6800b6:	74 64                	je     68011c <__cxa_finalize@plt-0xd32cf4>
  6800b8:	81 fa ca 32 e7 ef    	cmp    edx,0xefe732ca
  6800be:	74 22                	je     6800e2 <__cxa_finalize@plt-0xd32d2e>
  6800c0:	81 fa 10 d2 0a ff    	cmp    edx,0xff0ad210
  6800c6:	74 3a                	je     680102 <__cxa_finalize@plt-0xd32d0e>
  6800c8:	81 fa 75 a6 24 46    	cmp    edx,0x4624a675
  6800ce:	74 25                	je     6800f5 <__cxa_finalize@plt-0xd32d1b>
  6800d0:	81 fa 2c 3c 4a 4f    	cmp    edx,0x4f4a3c2c
  6800d6:	74 37                	je     68010f <__cxa_finalize@plt-0xd32d01>
  6800d8:	81 fa 46 72 df df    	cmp    edx,0xdfdf7246
  6800de:	75 5e                	jne    68013e <__cxa_finalize@plt-0xd32cd2>
  6800e0:	eb 63                	jmp    680145 <__cxa_finalize@plt-0xd32ccb>
  6800e2:	49 89 c7             	mov    r15,rax
  6800e5:	49 0f cf             	bswap  r15
  6800e8:	48 0f c9             	bswap  rcx
  6800eb:	bd bf 94 c3 a9       	mov    ebp,0xa9c394bf
  6800f0:	48 89 c8             	mov    rax,rcx
  6800f3:	eb 46                	jmp    68013b <__cxa_finalize@plt-0xd32cd5>
  6800f5:	4c 01 d0             	add    rax,r10
  6800f8:	4c 11 d9             	adc    rcx,r11
  6800fb:	bd 69 4e 67 95       	mov    ebp,0x95674e69
  680100:	eb 3c                	jmp    68013e <__cxa_finalize@plt-0xd32cd2>
  680102:	4c 01 c0             	add    rax,r8
  680105:	4c 11 c9             	adc    rcx,r9
  680108:	bd da e0 ed 10       	mov    ebp,0x10ede0da
  68010d:	eb 2f                	jmp    68013e <__cxa_finalize@plt-0xd32cd2>
  68010f:	bd 46 78 8c ab       	mov    ebp,0xab8c7846
  680114:	4c 89 f0             	mov    rax,r14
  680117:	48 89 d9             	mov    rcx,rbx
  68011a:	eb 22                	jmp    68013e <__cxa_finalize@plt-0xd32cd2>
  68011c:	48 01 f0             	add    rax,rsi
  68011f:	48 11 f9             	adc    rcx,rdi
  680122:	bd 7a 96 cc 1b       	mov    ebp,0x1bcc967a
  680127:	eb 15                	jmp    68013e <__cxa_finalize@plt-0xd32cd2>
  680129:	49 89 cf             	mov    r15,rcx
  68012c:	49 0f a4 c7 19       	shld   r15,rax,0x19
  680131:	48 0f a4 c8 19       	shld   rax,rcx,0x19
  680136:	bd 5a 9a 9c 0c       	mov    ebp,0xc9c9a5a
  68013b:	4c 89 f9             	mov    rcx,r15
  68013e:	31 ea                	xor    edx,ebp
  680140:	e9 63 ff ff ff       	jmp    6800a8 <__cxa_finalize@plt-0xd32d68>
  680145:	bb bc 2b 6d d8       	mov    ebx,0xd86d2bbc
  68014a:	31 d2                	xor    edx,edx
  68014c:	49 bc 0f 0f 0f 0f 0f 	movabs r12,0xf0f0f0f0f0f0f0f
  680153:	0f 0f 0f 
  680156:	49 bd 33 33 33 33 33 	movabs r13,0x3333333333333333
  68015d:	33 33 33 
  680160:	48 bd 55 55 55 55 55 	movabs rbp,0x5555555555555555
  680167:	55 55 55 
  68016a:	81 fb e7 6a c6 86    	cmp    ebx,0x86c66ae7
  680170:	0f 84 c3 34 00 00    	je     683639 <__cxa_finalize@plt-0xd2f7d7>
  680176:	81 fb b7 1b 24 90    	cmp    ebx,0x90241bb7
  68017c:	0f 84 49 6a 00 00    	je     686bcb <__cxa_finalize@plt-0xd2c245>
  680182:	81 fb 83 b2 d2 90    	cmp    ebx,0x90d2b283
  680188:	0f 84 25 4a 00 00    	je     684bb3 <__cxa_finalize@plt-0xd2e25d>
  68018e:	81 fb 66 1c cf 92    	cmp    ebx,0x92cf1c66
  680194:	0f 84 bb 19 00 00    	je     681b55 <__cxa_finalize@plt-0xd312bb>
  68019a:	81 fb 9b 9d 9f 98    	cmp    ebx,0x989f9d9b
  6801a0:	0f 84 01 30 00 00    	je     6831a7 <__cxa_finalize@plt-0xd2fc69>
  6801a6:	81 fb fb b5 7d ab    	cmp    ebx,0xab7db5fb
  6801ac:	0f 84 0d 01 00 00    	je     6802bf <__cxa_finalize@plt-0xd32b51>
  6801b2:	81 fb ab 7c 59 ae    	cmp    ebx,0xae597cab
  6801b8:	0f 84 2d 6f 00 00    	je     6870eb <__cxa_finalize@plt-0xd2bd25>
  6801be:	81 fb 26 64 50 ba    	cmp    ebx,0xba506426
  6801c4:	0f 84 55 1c 00 00    	je     681e1f <__cxa_finalize@plt-0xd30ff1>
  6801ca:	81 fb 34 f4 50 c2    	cmp    ebx,0xc250f434
  6801d0:	0f 84 d8 56 00 00    	je     6858ae <__cxa_finalize@plt-0xd2d562>
  6801d6:	81 fb a9 d8 cd cc    	cmp    ebx,0xcccdd8a9
  6801dc:	0f 84 aa 04 00 00    	je     68068c <__cxa_finalize@plt-0xd32784>
  6801e2:	81 fb 70 34 4d d0    	cmp    ebx,0xd04d3470
  6801e8:	0f 84 93 37 00 00    	je     683981 <__cxa_finalize@plt-0xd2f48f>
  6801ee:	81 fb bc 2b 6d d8    	cmp    ebx,0xd86d2bbc
  6801f4:	0f 84 7c 66 00 00    	je     686876 <__cxa_finalize@plt-0xd2c59a>
  6801fa:	81 fb b4 a0 bc e7    	cmp    ebx,0xe7bca0b4
  680200:	0f 84 53 5d 00 00    	je     685f59 <__cxa_finalize@plt-0xd2ceb7>
  680206:	81 fb d3 82 52 f1    	cmp    ebx,0xf15282d3
  68020c:	0f 84 e3 60 00 00    	je     6862f5 <__cxa_finalize@plt-0xd2cb1b>
  680212:	81 fb ce 1b 51 04    	cmp    ebx,0x4511bce
  680218:	0f 84 e3 07 00 00    	je     680a01 <__cxa_finalize@plt-0xd3240f>
  68021e:	81 fb 51 92 a6 18    	cmp    ebx,0x18a69251
  680224:	0f 84 01 4d 00 00    	je     684f2b <__cxa_finalize@plt-0xd2dee5>
  68022a:	81 fb 10 be bf 18    	cmp    ebx,0x18bfbe10
  680230:	0f 84 7c 5a 00 00    	je     685cb2 <__cxa_finalize@plt-0xd2d15e>
  680236:	81 fb e2 0b 8c 2b    	cmp    ebx,0x2b8c0be2
  68023c:	0f 84 9e 0c 00 00    	je     680ee0 <__cxa_finalize@plt-0xd31f30>
  680242:	81 fb df d0 fb 31    	cmp    ebx,0x31fbd0df
  680248:	0f 84 9c 13 00 00    	je     6815ea <__cxa_finalize@plt-0xd31826>
  68024e:	81 fb 37 77 09 3c    	cmp    ebx,0x3c097737
  680254:	0f 84 3d 51 00 00    	je     685397 <__cxa_finalize@plt-0xd2da79>
  68025a:	81 fb 4b 31 2f 47    	cmp    ebx,0x472f314b
  680260:	0f 84 f2 3b 00 00    	je     683e58 <__cxa_finalize@plt-0xd2efb8>
  680266:	81 fb 44 02 09 4c    	cmp    ebx,0x4c090244
  68026c:	0f 84 dd 43 00 00    	je     68464f <__cxa_finalize@plt-0xd2e7c1>
  680272:	81 fb 3c bb 6f 5a    	cmp    ebx,0x5a6fbb3c
  680278:	0f 84 31 41 00 00    	je     6843af <__cxa_finalize@plt-0xd2ea61>
  68027e:	81 fb 35 fc b7 66    	cmp    ebx,0x66b7fc35
  680284:	0f 84 8a 1f 00 00    	je     682214 <__cxa_finalize@plt-0xd30bfc>
  68028a:	81 fb 90 b2 59 67    	cmp    ebx,0x6759b290
  680290:	0f 84 c7 0f 00 00    	je     68125d <__cxa_finalize@plt-0xd31bb3>
  680296:	81 fb 36 a3 3c 6d    	cmp    ebx,0x6d3ca336
  68029c:	0f 84 f8 25 00 00    	je     68289a <__cxa_finalize@plt-0xd30576>
  6802a2:	81 fb cf c6 94 70    	cmp    ebx,0x7094c6cf
  6802a8:	0f 84 2f 2b 00 00    	je     682ddd <__cxa_finalize@plt-0xd30033>
  6802ae:	81 fb f6 0b d4 12    	cmp    ebx,0x12d40bf6
  6802b4:	0f 85 e4 73 00 00    	jne    68769e <__cxa_finalize@plt-0xd2b772>
  6802ba:	e9 e6 73 00 00       	jmp    6876a5 <__cxa_finalize@plt-0xd2b76b>
  6802bf:	ba c7 55 7d 23       	mov    edx,0x237d55c7
  6802c4:	31 ff                	xor    edi,edi
  6802c6:	45 31 c9             	xor    r9d,r9d
  6802c9:	31 f6                	xor    esi,esi
  6802cb:	81 fa da 2a 17 c3    	cmp    edx,0xc3172ada
  6802d1:	0f 84 f9 00 00 00    	je     6803d0 <__cxa_finalize@plt-0xd32a40>
  6802d7:	81 fa 5a ae 9f fd    	cmp    edx,0xfd9fae5a
  6802dd:	0f 84 3f 01 00 00    	je     680422 <__cxa_finalize@plt-0xd329ee>
  6802e3:	81 fa ca 3e d5 03    	cmp    edx,0x3d53eca
  6802e9:	0f 84 1b 01 00 00    	je     68040a <__cxa_finalize@plt-0xd32a06>
  6802ef:	81 fa c7 55 7d 23    	cmp    edx,0x237d55c7
  6802f5:	74 3d                	je     680334 <__cxa_finalize@plt-0xd32adc>
  6802f7:	49 89 f8             	mov    r8,rdi
  6802fa:	49 0f c8             	bswap  r8
  6802fd:	49 89 f2             	mov    r10,rsi
  680300:	49 0f ca             	bswap  r10
  680303:	81 fa 14 f6 08 24    	cmp    edx,0x2408f614
  680309:	0f 84 b9 00 00 00    	je     6803c8 <__cxa_finalize@plt-0xd32a48>
  68030f:	81 fa b9 3f 2a 34    	cmp    edx,0x342a3fb9
  680315:	74 3c                	je     680353 <__cxa_finalize@plt-0xd32abd>
  680317:	81 fa c4 ea c7 59    	cmp    edx,0x59c7eac4
  68031d:	0f 84 cf 00 00 00    	je     6803f2 <__cxa_finalize@plt-0xd32a1e>
  680323:	81 fa 49 aa 70 c9    	cmp    edx,0xc970aa49
  680329:	0f 85 13 01 00 00    	jne    680442 <__cxa_finalize@plt-0xd329ce>
  68032f:	e9 22 01 00 00       	jmp    680456 <__cxa_finalize@plt-0xd329ba>
  680334:	41 b9 d3 a3 75 07    	mov    r9d,0x775a3d3
  68033a:	49 ba 68 89 77 9c 38 	movabs r10,0xbbabef389c778968
  680341:	ef ab bb 
  680344:	49 b8 a8 bd 9e d3 d5 	movabs r8,0x163823d5d39ebda8
  68034b:	23 38 16 
  68034e:	e9 f5 00 00 00       	jmp    680448 <__cxa_finalize@plt-0xd329c8>
  680353:	4c 89 c6             	mov    rsi,r8
  680356:	48 c1 ee 04          	shr    rsi,0x4
  68035a:	4c 21 e6             	and    rsi,r12
  68035d:	4d 21 e0             	and    r8,r12
  680360:	49 c1 e0 04          	shl    r8,0x4
  680364:	49 09 f0             	or     r8,rsi
  680367:	4c 89 c6             	mov    rsi,r8
  68036a:	4c 21 ee             	and    rsi,r13
  68036d:	49 c1 e8 02          	shr    r8,0x2
  680371:	4d 21 e8             	and    r8,r13
  680374:	49 8d 34 b0          	lea    rsi,[r8+rsi*4]
  680378:	48 89 f7             	mov    rdi,rsi
  68037b:	48 21 ef             	and    rdi,rbp
  68037e:	48 d1 ee             	shr    rsi,1
  680381:	48 21 ee             	and    rsi,rbp
  680384:	4c 8d 04 7e          	lea    r8,[rsi+rdi*2]
  680388:	4c 89 d6             	mov    rsi,r10
  68038b:	48 c1 ee 04          	shr    rsi,0x4
  68038f:	4c 21 e6             	and    rsi,r12
  680392:	4d 21 e2             	and    r10,r12
  680395:	49 c1 e2 04          	shl    r10,0x4
  680399:	49 09 f2             	or     r10,rsi
  68039c:	4c 89 d6             	mov    rsi,r10
  68039f:	4c 21 ee             	and    rsi,r13
  6803a2:	49 c1 ea 02          	shr    r10,0x2
  6803a6:	4d 21 ea             	and    r10,r13
  6803a9:	49 8d 34 b2          	lea    rsi,[r10+rsi*4]
  6803ad:	48 89 f7             	mov    rdi,rsi
  6803b0:	48 21 ef             	and    rdi,rbp
  6803b3:	48 d1 ee             	shr    rsi,1
  6803b6:	48 21 ee             	and    rsi,rbp
  6803b9:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  6803bd:	41 b9 73 01 ff 37    	mov    r9d,0x37ff0173
  6803c3:	e9 80 00 00 00       	jmp    680448 <__cxa_finalize@plt-0xd329c8>
  6803c8:	41 b9 d0 1c cf 7d    	mov    r9d,0x7dcf1cd0
  6803ce:	eb 78                	jmp    680448 <__cxa_finalize@plt-0xd329c8>
  6803d0:	49 b8 61 e7 fd bd 88 	movabs r8,0xc745a988bdfde761
  6803d7:	a9 45 c7 
  6803da:	4c 01 c7             	add    rdi,r8
  6803dd:	49 b8 b2 f4 60 2e bc 	movabs r8,0x445b75bc2e60f4b2
  6803e4:	75 5b 44 
  6803e7:	4c 11 c6             	adc    rsi,r8
  6803ea:	41 b9 93 80 67 0a    	mov    r9d,0xa678093
  6803f0:	eb 50                	jmp    680442 <__cxa_finalize@plt-0xd329ce>
  6803f2:	49 89 f8             	mov    r8,rdi
  6803f5:	49 0f a4 f0 1a       	shld   r8,rsi,0x1a
  6803fa:	48 0f a4 fe 1a       	shld   rsi,rdi,0x1a
  6803ff:	41 b9 9e 44 58 a4    	mov    r9d,0xa458449e
  680405:	49 89 f2             	mov    r10,rsi
  680408:	eb 3e                	jmp    680448 <__cxa_finalize@plt-0xd329c8>
  68040a:	49 89 f0             	mov    r8,rsi
  68040d:	49 0f a4 f8 34       	shld   r8,rdi,0x34
  680412:	48 0f a4 f7 34       	shld   rdi,rsi,0x34
  680417:	41 b9 10 14 c2 c0    	mov    r9d,0xc0c21410
  68041d:	49 89 fa             	mov    r10,rdi
  680420:	eb 26                	jmp    680448 <__cxa_finalize@plt-0xd329c8>
  680422:	49 b8 55 57 bd 68 75 	movabs r8,0x2d36c67568bd5755
  680429:	c6 36 2d 
  68042c:	4c 31 c7             	xor    rdi,r8
  68042f:	49 b8 cc 00 1e c1 ef 	movabs r8,0x3dffa1efc11e00cc
  680436:	a1 ff 3d 
  680439:	4c 31 c6             	xor    rsi,r8
  68043c:	41 b9 e3 91 b5 c9    	mov    r9d,0xc9b591e3
  680442:	49 89 fa             	mov    r10,rdi
  680445:	49 89 f0             	mov    r8,rsi
  680448:	44 31 ca             	xor    edx,r9d
  68044b:	4c 89 d7             	mov    rdi,r10
  68044e:	4c 89 c6             	mov    rsi,r8
  680451:	e9 75 fe ff ff       	jmp    6802cb <__cxa_finalize@plt-0xd32b45>
  680456:	ba fd bb 9e 45       	mov    edx,0x459ebbfd
  68045b:	45 31 ff             	xor    r15d,r15d
  68045e:	45 31 d2             	xor    r10d,r10d
  680461:	45 31 f6             	xor    r14d,r14d
  680464:	81 fa 20 8e 51 aa    	cmp    edx,0xaa518e20
  68046a:	0f 84 dd 01 00 00    	je     68064d <__cxa_finalize@plt-0xd327c3>
  680470:	4d 89 f8             	mov    r8,r15
  680473:	49 0f c8             	bswap  r8
  680476:	4d 89 f1             	mov    r9,r14
  680479:	49 0f c9             	bswap  r9
  68047c:	81 fa 61 e0 63 d0    	cmp    edx,0xd063e061
  680482:	0f 84 0e 01 00 00    	je     680596 <__cxa_finalize@plt-0xd3287a>
  680488:	81 fa 71 28 0f fa    	cmp    edx,0xfa0f2871
  68048e:	0f 84 97 01 00 00    	je     68062b <__cxa_finalize@plt-0xd327e5>
  680494:	81 fa 97 e6 fc ff    	cmp    edx,0xfffce697
  68049a:	0f 84 73 01 00 00    	je     680613 <__cxa_finalize@plt-0xd327fd>
  6804a0:	81 fa d9 33 3d 24    	cmp    edx,0x243d33d9
  6804a6:	74 35                	je     6804dd <__cxa_finalize@plt-0xd32933>
  6804a8:	81 fa fd bb 9e 45    	cmp    edx,0x459ebbfd
  6804ae:	0f 84 c3 00 00 00    	je     680577 <__cxa_finalize@plt-0xd32899>
  6804b4:	81 fa 2f f1 0f 46    	cmp    edx,0x460ff12f
  6804ba:	0f 84 92 00 00 00    	je     680552 <__cxa_finalize@plt-0xd328be>
  6804c0:	81 fa 13 7d 3b 64    	cmp    edx,0x643b7d13
  6804c6:	0f 84 d5 00 00 00    	je     6805a1 <__cxa_finalize@plt-0xd3286f>
  6804cc:	81 fa 03 77 a3 4f    	cmp    edx,0x4fa37703
  6804d2:	0f 85 95 01 00 00    	jne    68066d <__cxa_finalize@plt-0xd327a3>
  6804d8:	e9 a4 01 00 00       	jmp    680681 <__cxa_finalize@plt-0xd3278f>
  6804dd:	4d 89 c2             	mov    r10,r8
  6804e0:	49 c1 ea 04          	shr    r10,0x4
  6804e4:	4d 21 e2             	and    r10,r12
  6804e7:	4d 21 e0             	and    r8,r12
  6804ea:	49 c1 e0 04          	shl    r8,0x4
  6804ee:	4d 09 d0             	or     r8,r10
  6804f1:	4d 89 c2             	mov    r10,r8
  6804f4:	4d 21 ea             	and    r10,r13
  6804f7:	49 c1 e8 02          	shr    r8,0x2
  6804fb:	4d 21 e8             	and    r8,r13
  6804fe:	4f 8d 04 90          	lea    r8,[r8+r10*4]
  680502:	4d 89 c2             	mov    r10,r8
  680505:	49 21 ea             	and    r10,rbp
  680508:	49 d1 e8             	shr    r8,1
  68050b:	49 21 e8             	and    r8,rbp
  68050e:	4f 8d 04 50          	lea    r8,[r8+r10*2]
  680512:	4d 89 ca             	mov    r10,r9
  680515:	49 c1 ea 04          	shr    r10,0x4
  680519:	4d 21 e2             	and    r10,r12
  68051c:	4d 21 e1             	and    r9,r12
  68051f:	49 c1 e1 04          	shl    r9,0x4
  680523:	4d 09 d1             	or     r9,r10
  680526:	4d 89 ca             	mov    r10,r9
  680529:	4d 21 ea             	and    r10,r13
  68052c:	49 c1 e9 02          	shr    r9,0x2
  680530:	4d 21 e9             	and    r9,r13
  680533:	4f 8d 0c 91          	lea    r9,[r9+r10*4]
  680537:	4d 89 ca             	mov    r10,r9
  68053a:	49 21 ea             	and    r10,rbp
  68053d:	49 d1 e9             	shr    r9,1
  680540:	49 21 e9             	and    r9,rbp
  680543:	4f 8d 0c 51          	lea    r9,[r9+r10*2]
  680547:	41 ba a8 1b 32 de    	mov    r10d,0xde321ba8
  68054d:	e9 21 01 00 00       	jmp    680673 <__cxa_finalize@plt-0xd3279d>
  680552:	49 b8 ac 4d e4 9a 0b 	movabs r8,0x7752820b9ae44dac
  680559:	82 52 77 
  68055c:	4d 01 c7             	add    r15,r8
  68055f:	49 b8 24 a5 53 51 c3 	movabs r8,0x63430c35153a524
  680566:	30 34 06 
  680569:	4d 11 c6             	adc    r14,r8
  68056c:	41 ba f6 c2 32 62    	mov    r10d,0x6232c2f6
  680572:	e9 f6 00 00 00       	jmp    68066d <__cxa_finalize@plt-0xd327a3>
  680577:	41 ba 9c 5b fd 95    	mov    r10d,0x95fd5b9c
  68057d:	49 b9 6a 99 fa 4b 50 	movabs r9,0x5d0f30504bfa996a
  680584:	30 0f 5d 
  680587:	49 b8 73 54 13 ee f3 	movabs r8,0x78bb07f3ee135473
  68058e:	07 bb 78 
  680591:	e9 dd 00 00 00       	jmp    680673 <__cxa_finalize@plt-0xd3279d>
  680596:	41 ba 72 9d 58 b4    	mov    r10d,0xb4589d72
  68059c:	e9 d2 00 00 00       	jmp    680673 <__cxa_finalize@plt-0xd3279d>
  6805a1:	4d 89 c2             	mov    r10,r8
  6805a4:	49 c1 ea 04          	shr    r10,0x4
  6805a8:	4d 21 e2             	and    r10,r12
  6805ab:	4d 21 e0             	and    r8,r12
  6805ae:	49 c1 e0 04          	shl    r8,0x4
  6805b2:	4d 09 d0             	or     r8,r10
  6805b5:	4d 89 c2             	mov    r10,r8
  6805b8:	4d 21 ea             	and    r10,r13
  6805bb:	49 c1 e8 02          	shr    r8,0x2
  6805bf:	4d 21 e8             	and    r8,r13
  6805c2:	4f 8d 04 90          	lea    r8,[r8+r10*4]
  6805c6:	4d 89 c2             	mov    r10,r8
  6805c9:	49 21 ea             	and    r10,rbp
  6805cc:	49 d1 e8             	shr    r8,1
  6805cf:	49 21 e8             	and    r8,rbp
  6805d2:	4f 8d 04 50          	lea    r8,[r8+r10*2]
  6805d6:	4d 89 ca             	mov    r10,r9
  6805d9:	49 c1 ea 04          	shr    r10,0x4
  6805dd:	4d 21 e2             	and    r10,r12
  6805e0:	4d 21 e1             	and    r9,r12
  6805e3:	49 c1 e1 04          	shl    r9,0x4
  6805e7:	4d 09 d1             	or     r9,r10
  6805ea:	4d 89 ca             	mov    r10,r9
  6805ed:	4d 21 ea             	and    r10,r13
  6805f0:	49 c1 e9 02          	shr    r9,0x2
  6805f4:	4d 21 e9             	and    r9,r13
  6805f7:	4f 8d 0c 91          	lea    r9,[r9+r10*4]
  6805fb:	4d 89 ca             	mov    r10,r9
  6805fe:	49 21 ea             	and    r10,rbp
  680601:	49 d1 e9             	shr    r9,1
  680604:	49 21 e9             	and    r9,rbp
  680607:	4f 8d 0c 51          	lea    r9,[r9+r10*2]
  68060b:	41 ba 84 9b c7 9b    	mov    r10d,0x9bc79b84
  680611:	eb 60                	jmp    680673 <__cxa_finalize@plt-0xd3279d>
  680613:	4d 89 f0             	mov    r8,r14
  680616:	4d 0f a4 f8 36       	shld   r8,r15,0x36
  68061b:	4d 0f a4 f7 36       	shld   r15,r14,0x36
  680620:	41 ba b7 68 ad 55    	mov    r10d,0x55ad68b7
  680626:	4d 89 f9             	mov    r9,r15
  680629:	eb 48                	jmp    680673 <__cxa_finalize@plt-0xd3279d>
  68062b:	49 b8 de 5f 44 a9 d4 	movabs r8,0x7b5baed4a9445fde
  680632:	ae 5b 7b 
  680635:	4d 31 c7             	xor    r15,r8
  680638:	49 b8 12 de 0d 7f 0e 	movabs r8,0x1e7d8d0e7f0dde12
  68063f:	8d 7d 1e 
  680642:	4d 31 c6             	xor    r14,r8
  680645:	41 ba 72 5f ac b5    	mov    r10d,0xb5ac5f72
  68064b:	eb 20                	jmp    68066d <__cxa_finalize@plt-0xd327a3>
  68064d:	49 b8 c2 7e ef a1 7a 	movabs r8,0x7ba1777aa1ef7ec2
  680654:	77 a1 7b 
  680657:	4d 01 c7             	add    r15,r8
  68065a:	49 b8 1b e8 81 80 a4 	movabs r8,0xca22f0a48081e81b
  680661:	f0 22 ca 
  680664:	4d 11 c6             	adc    r14,r8
  680667:	41 ba 0f 7f 5e ec    	mov    r10d,0xec5e7f0f
  68066d:	4d 89 f9             	mov    r9,r15
  680670:	4d 89 f0             	mov    r8,r14
  680673:	44 31 d2             	xor    edx,r10d
  680676:	4d 89 cf             	mov    r15,r9
  680679:	4d 89 c6             	mov    r14,r8
  68067c:	e9 e3 fd ff ff       	jmp    680464 <__cxa_finalize@plt-0xd329ac>
  680681:	41 b8 ce 49 ca cd    	mov    r8d,0xcdca49ce
  680687:	e9 85 6f 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  68068c:	ba 7b 45 40 52       	mov    edx,0x5240457b
  680691:	31 ff                	xor    edi,edi
  680693:	45 31 c0             	xor    r8d,r8d
  680696:	31 f6                	xor    esi,esi
  680698:	81 fa 8e 7f ff b4    	cmp    edx,0xb4ff7f8e
  68069e:	0f 84 f1 00 00 00    	je     680795 <__cxa_finalize@plt-0xd3267b>
  6806a4:	81 fa 77 1e 18 c9    	cmp    edx,0xc9181e77
  6806aa:	0f 84 c3 00 00 00    	je     680773 <__cxa_finalize@plt-0xd3269d>
  6806b0:	81 fa c2 5c 13 04    	cmp    edx,0x4135cc2
  6806b6:	74 2d                	je     6806e5 <__cxa_finalize@plt-0xd3272b>
  6806b8:	81 fa 59 74 fa 1b    	cmp    edx,0x1bfa7459
  6806be:	74 6f                	je     68072f <__cxa_finalize@plt-0xd326e1>
  6806c0:	81 fa 45 05 c9 40    	cmp    edx,0x40c90545
  6806c6:	74 42                	je     68070a <__cxa_finalize@plt-0xd32706>
  6806c8:	81 fa 7b 45 40 52    	cmp    edx,0x5240457b
  6806ce:	0f 84 80 00 00 00    	je     680754 <__cxa_finalize@plt-0xd326bc>
  6806d4:	81 fa 12 0d df 3e    	cmp    edx,0x3edf0d12
  6806da:	0f 85 2e 01 00 00    	jne    68080e <__cxa_finalize@plt-0xd32602>
  6806e0:	e9 31 01 00 00       	jmp    680816 <__cxa_finalize@plt-0xd325fa>
  6806e5:	49 b8 42 5e f3 8a a5 	movabs r8,0x19b632a58af35e42
  6806ec:	32 b6 19 
  6806ef:	4c 01 c7             	add    rdi,r8
  6806f2:	49 b8 1d 68 df 2c ee 	movabs r8,0x6276cfee2cdf681d
  6806f9:	cf 76 62 
  6806fc:	4c 11 c6             	adc    rsi,r8
  6806ff:	41 b8 b5 42 0b cd    	mov    r8d,0xcd0b42b5
  680705:	e9 04 01 00 00       	jmp    68080e <__cxa_finalize@plt-0xd32602>
  68070a:	49 b8 81 fb 07 2b 2c 	movabs r8,0x23b21b2c2b07fb81
  680711:	1b b2 23 
  680714:	4c 01 c7             	add    rdi,r8
  680717:	49 b8 b0 46 b0 cb 9d 	movabs r8,0x3090069dcbb046b0
  68071e:	06 90 30 
  680721:	4c 11 c6             	adc    rsi,r8
  680724:	41 b8 57 08 16 7e    	mov    r8d,0x7e160857
  68072a:	e9 df 00 00 00       	jmp    68080e <__cxa_finalize@plt-0xd32602>
  68072f:	49 b8 4b 8f 88 e9 31 	movabs r8,0x1dab9431e9888f4b
  680736:	94 ab 1d 
  680739:	4c 31 c7             	xor    rdi,r8
  68073c:	49 b8 29 ce 3a 4c ee 	movabs r8,0x70804cee4c3ace29
  680743:	4c 80 70 
  680746:	4c 31 c6             	xor    rsi,r8
  680749:	41 b8 1c 71 33 5b    	mov    r8d,0x5b33711c
  68074f:	e9 ba 00 00 00       	jmp    68080e <__cxa_finalize@plt-0xd32602>
  680754:	41 b8 f5 3a bf e6    	mov    r8d,0xe6bf3af5
  68075a:	48 bf 84 c6 84 d9 1c 	movabs rdi,0x46aae11cd984c684
  680761:	e1 aa 46 
  680764:	48 be 4f 7c cd cc 2f 	movabs rsi,0x7cccab2fcccd7c4f
  68076b:	ab cc 7c 
  68076e:	e9 9b 00 00 00       	jmp    68080e <__cxa_finalize@plt-0xd32602>
  680773:	49 b8 c1 91 8e 26 c1 	movabs r8,0xdae9c0c1268e91c1
  68077a:	c0 e9 da 
  68077d:	4c 01 c7             	add    rdi,r8
  680780:	49 b8 e6 b9 0e 13 03 	movabs r8,0x3c15c403130eb9e6
  680787:	c4 15 3c 
  68078a:	4c 11 c6             	adc    rsi,r8
  68078d:	41 b8 2e 6a e2 d2    	mov    r8d,0xd2e26a2e
  680793:	eb 79                	jmp    68080e <__cxa_finalize@plt-0xd32602>
  680795:	48 0f cf             	bswap  rdi
  680798:	49 89 f8             	mov    r8,rdi
  68079b:	49 c1 e8 04          	shr    r8,0x4
  68079f:	4d 21 e0             	and    r8,r12
  6807a2:	4c 21 e7             	and    rdi,r12
  6807a5:	48 c1 e7 04          	shl    rdi,0x4
  6807a9:	4c 09 c7             	or     rdi,r8
  6807ac:	49 89 f8             	mov    r8,rdi
  6807af:	4d 21 e8             	and    r8,r13
  6807b2:	48 c1 ef 02          	shr    rdi,0x2
  6807b6:	4c 21 ef             	and    rdi,r13
  6807b9:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  6807bd:	49 89 f8             	mov    r8,rdi
  6807c0:	49 21 e8             	and    r8,rbp
  6807c3:	48 d1 ef             	shr    rdi,1
  6807c6:	48 21 ef             	and    rdi,rbp
  6807c9:	4e 8d 0c 47          	lea    r9,[rdi+r8*2]
  6807cd:	48 0f ce             	bswap  rsi
  6807d0:	48 89 f7             	mov    rdi,rsi
  6807d3:	48 c1 ef 04          	shr    rdi,0x4
  6807d7:	4c 21 e7             	and    rdi,r12
  6807da:	4c 21 e6             	and    rsi,r12
  6807dd:	48 c1 e6 04          	shl    rsi,0x4
  6807e1:	48 09 fe             	or     rsi,rdi
  6807e4:	48 89 f7             	mov    rdi,rsi
  6807e7:	4c 21 ef             	and    rdi,r13
  6807ea:	48 c1 ee 02          	shr    rsi,0x2
  6807ee:	4c 21 ee             	and    rsi,r13
  6807f1:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  6807f5:	48 89 f7             	mov    rdi,rsi
  6807f8:	48 21 ef             	and    rdi,rbp
  6807fb:	48 d1 ee             	shr    rsi,1
  6807fe:	48 21 ee             	and    rsi,rbp
  680801:	48 8d 3c 7e          	lea    rdi,[rsi+rdi*2]
  680805:	41 b8 4c 23 ec b0    	mov    r8d,0xb0ec234c
  68080b:	4c 89 ce             	mov    rsi,r9
  68080e:	44 31 c2             	xor    edx,r8d
  680811:	e9 82 fe ff ff       	jmp    680698 <__cxa_finalize@plt-0xd32778>
  680816:	ba 86 5b 4f 00       	mov    edx,0x4f5b86
  68081b:	45 31 ff             	xor    r15d,r15d
  68081e:	45 31 c0             	xor    r8d,r8d
  680821:	45 31 f6             	xor    r14d,r14d
  680824:	81 fa 20 42 a0 bb    	cmp    edx,0xbba04220
  68082a:	0f 84 ab 00 00 00    	je     6808db <__cxa_finalize@plt-0xd32535>
  680830:	81 fa 21 1d 96 c8    	cmp    edx,0xc8961d21
  680836:	74 69                	je     6808a1 <__cxa_finalize@plt-0xd3256f>
  680838:	81 fa 34 d9 bc d5    	cmp    edx,0xd5bcd934
  68083e:	74 76                	je     6808b6 <__cxa_finalize@plt-0xd3255a>
  680840:	81 fa 86 5b 4f 00    	cmp    edx,0x4f5b86
  680846:	0f 84 cc 00 00 00    	je     680918 <__cxa_finalize@plt-0xd324f8>
  68084c:	4d 89 f9             	mov    r9,r15
  68084f:	49 0f c9             	bswap  r9
  680852:	4d 89 f2             	mov    r10,r14
  680855:	49 0f ca             	bswap  r10
  680858:	81 fa 28 21 0b 11    	cmp    edx,0x110b2128
  68085e:	0f 84 7e 01 00 00    	je     6809e2 <__cxa_finalize@plt-0xd3242e>
  680864:	81 fa 45 22 85 1a    	cmp    edx,0x1a852245
  68086a:	0f 84 d2 00 00 00    	je     680942 <__cxa_finalize@plt-0xd324ce>
  680870:	81 fa 3c 91 e1 1a    	cmp    edx,0x1ae1913c
  680876:	0f 84 ee 00 00 00    	je     68096a <__cxa_finalize@plt-0xd324a6>
  68087c:	81 fa 36 3d bf 38    	cmp    edx,0x38bf3d36
  680882:	74 72                	je     6808f6 <__cxa_finalize@plt-0xd3251a>
  680884:	81 fa be f1 ee 4a    	cmp    edx,0x4aeef1be
  68088a:	0f 84 a7 00 00 00    	je     680937 <__cxa_finalize@plt-0xd324d9>
  680890:	81 fa 21 37 58 e5    	cmp    edx,0xe5583721
  680896:	0f 85 c6 00 00 00    	jne    680962 <__cxa_finalize@plt-0xd324ae>
  68089c:	e9 55 01 00 00       	jmp    6809f6 <__cxa_finalize@plt-0xd3241a>
  6808a1:	4d 89 f1             	mov    r9,r14
  6808a4:	4d 0f a4 f9 1c       	shld   r9,r15,0x1c
  6808a9:	4d 0f a4 f7 1c       	shld   r15,r14,0x1c
  6808ae:	41 b8 64 3f 13 d2    	mov    r8d,0xd2133f64
  6808b4:	eb 38                	jmp    6808ee <__cxa_finalize@plt-0xd32522>
  6808b6:	49 b8 a5 04 6f 8d f6 	movabs r8,0xfb0cbf68d6f04a5
  6808bd:	cb b0 0f 
  6808c0:	4d 31 c7             	xor    r15,r8
  6808c3:	49 b8 b1 9f 20 20 d0 	movabs r8,0x7ea7b6d020209fb1
  6808ca:	b6 a7 7e 
  6808cd:	4d 31 c6             	xor    r14,r8
  6808d0:	41 b8 02 e4 03 ed    	mov    r8d,0xed03e402
  6808d6:	e9 87 00 00 00       	jmp    680962 <__cxa_finalize@plt-0xd324ae>
  6808db:	4d 89 f1             	mov    r9,r14
  6808de:	4d 0f a4 f9 23       	shld   r9,r15,0x23
  6808e3:	4d 0f a4 f7 23       	shld   r15,r14,0x23
  6808e8:	41 b8 9e b3 4e f1    	mov    r8d,0xf14eb39e
  6808ee:	4d 89 fa             	mov    r10,r15
  6808f1:	e9 f2 00 00 00       	jmp    6809e8 <__cxa_finalize@plt-0xd32428>
  6808f6:	49 b8 81 c2 46 99 cc 	movabs r8,0xcdaf0ecc9946c281
  6808fd:	0e af cd 
  680900:	4d 31 c7             	xor    r15,r8
  680903:	49 b8 5a 75 43 92 0d 	movabs r8,0x473a4c0d9243755a
  68090a:	4c 3a 47 
  68090d:	4d 31 c6             	xor    r14,r8
  680910:	41 b8 16 7f 1f 83    	mov    r8d,0x831f7f16
  680916:	eb 4a                	jmp    680962 <__cxa_finalize@plt-0xd324ae>
  680918:	41 b8 ae 7a 44 11    	mov    r8d,0x11447aae
  68091e:	49 ba 7a ed f0 30 e9 	movabs r10,0xbac643e930f0ed7a
  680925:	43 c6 ba 
  680928:	49 b9 f7 33 1a b4 9b 	movabs r9,0x2101de9bb41a33f7
  68092f:	de 01 21 
  680932:	e9 b1 00 00 00       	jmp    6809e8 <__cxa_finalize@plt-0xd32428>
  680937:	41 b8 82 60 0f 50    	mov    r8d,0x500f6082
  68093d:	e9 a6 00 00 00       	jmp    6809e8 <__cxa_finalize@plt-0xd32428>
  680942:	49 b8 d8 5a 87 f3 27 	movabs r8,0x7861e527f3875ad8
  680949:	e5 61 78 
  68094c:	4d 01 c7             	add    r15,r8
  68094f:	49 b8 40 b9 f0 a2 b6 	movabs r8,0xb7cdc8b6a2f0b940
  680956:	c8 cd b7 
  680959:	4d 11 c6             	adc    r14,r8
  68095c:	41 b8 71 fb 39 cf    	mov    r8d,0xcf39fb71
  680962:	4d 89 fa             	mov    r10,r15
  680965:	4d 89 f1             	mov    r9,r14
  680968:	eb 7e                	jmp    6809e8 <__cxa_finalize@plt-0xd32428>
  68096a:	49 0f cf             	bswap  r15
  68096d:	4d 89 f8             	mov    r8,r15
  680970:	49 c1 e8 04          	shr    r8,0x4
  680974:	4d 21 e0             	and    r8,r12
  680977:	4d 21 e7             	and    r15,r12
  68097a:	49 c1 e7 04          	shl    r15,0x4
  68097e:	4d 09 c7             	or     r15,r8
  680981:	4d 89 f8             	mov    r8,r15
  680984:	4d 21 e8             	and    r8,r13
  680987:	49 c1 ef 02          	shr    r15,0x2
  68098b:	4d 21 ef             	and    r15,r13
  68098e:	4f 8d 04 87          	lea    r8,[r15+r8*4]
  680992:	4d 89 c1             	mov    r9,r8
  680995:	49 21 e9             	and    r9,rbp
  680998:	49 d1 e8             	shr    r8,1
  68099b:	49 21 e8             	and    r8,rbp
  68099e:	4f 8d 0c 48          	lea    r9,[r8+r9*2]
  6809a2:	49 0f ce             	bswap  r14
  6809a5:	4d 89 f0             	mov    r8,r14
  6809a8:	49 c1 e8 04          	shr    r8,0x4
  6809ac:	4d 21 e0             	and    r8,r12
  6809af:	4d 21 e6             	and    r14,r12
  6809b2:	49 c1 e6 04          	shl    r14,0x4
  6809b6:	4d 09 c6             	or     r14,r8
  6809b9:	4d 89 f0             	mov    r8,r14
  6809bc:	4d 21 e8             	and    r8,r13
  6809bf:	49 c1 ee 02          	shr    r14,0x2
  6809c3:	4d 21 ee             	and    r14,r13
  6809c6:	4f 8d 04 86          	lea    r8,[r14+r8*4]
  6809ca:	4d 89 c2             	mov    r10,r8
  6809cd:	49 21 ea             	and    r10,rbp
  6809d0:	49 d1 e8             	shr    r8,1
  6809d3:	49 21 e8             	and    r8,rbp
  6809d6:	4f 8d 14 50          	lea    r10,[r8+r10*2]
  6809da:	41 b8 1d a6 b9 ff    	mov    r8d,0xffb9a61d
  6809e0:	eb 06                	jmp    6809e8 <__cxa_finalize@plt-0xd32428>
  6809e2:	41 b8 09 3c 9d d9    	mov    r8d,0xd99d3c09
  6809e8:	44 31 c2             	xor    edx,r8d
  6809eb:	4d 89 d7             	mov    r15,r10
  6809ee:	4d 89 ce             	mov    r14,r9
  6809f1:	e9 2e fe ff ff       	jmp    680824 <__cxa_finalize@plt-0xd325ec>
  6809f6:	41 b8 9e af c4 f0    	mov    r8d,0xf0c4af9e
  6809fc:	e9 10 6c 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  680a01:	ba 52 98 39 79       	mov    edx,0x79399852
  680a06:	31 ff                	xor    edi,edi
  680a08:	45 31 d2             	xor    r10d,r10d
  680a0b:	31 f6                	xor    esi,esi
  680a0d:	49 89 f8             	mov    r8,rdi
  680a10:	81 fa 8e fe de 85    	cmp    edx,0x85defe8e
  680a16:	0f 84 9e 00 00 00    	je     680aba <__cxa_finalize@plt-0xd32356>
  680a1c:	49 0f c8             	bswap  r8
  680a1f:	49 89 f1             	mov    r9,rsi
  680a22:	49 0f c9             	bswap  r9
  680a25:	81 fa a7 9d 95 f6    	cmp    edx,0xf6959da7
  680a2b:	74 5d                	je     680a8a <__cxa_finalize@plt-0xd32386>
  680a2d:	81 fa 76 c5 84 fe    	cmp    edx,0xfe84c576
  680a33:	74 60                	je     680a95 <__cxa_finalize@plt-0xd3237b>
  680a35:	81 fa f0 dc 7b 1c    	cmp    edx,0x1c7bdcf0
  680a3b:	0f 84 06 01 00 00    	je     680b47 <__cxa_finalize@plt-0xd322c9>
  680a41:	81 fa 4b 0f 3f 35    	cmp    edx,0x353f0f4b
  680a47:	0f 84 68 01 00 00    	je     680bb5 <__cxa_finalize@plt-0xd3225b>
  680a4d:	81 fa 5a a1 13 49    	cmp    edx,0x4913a15a
  680a53:	0f 84 1f 01 00 00    	je     680b78 <__cxa_finalize@plt-0xd32298>
  680a59:	81 fa 51 2f cc 59    	cmp    edx,0x59cc2f51
  680a5f:	0f 84 3b 01 00 00    	je     680ba0 <__cxa_finalize@plt-0xd32270>
  680a65:	81 fa c3 c0 b3 5f    	cmp    edx,0x5fb3c0c3
  680a6b:	74 65                	je     680ad2 <__cxa_finalize@plt-0xd3233e>
  680a6d:	81 fa 52 98 39 79    	cmp    edx,0x79399852
  680a73:	0f 84 e3 00 00 00    	je     680b5c <__cxa_finalize@plt-0xd322b4>
  680a79:	81 fa d5 82 03 66    	cmp    edx,0x660382d5
  680a7f:	0f 85 13 01 00 00    	jne    680b98 <__cxa_finalize@plt-0xd32278>
  680a85:	e9 4f 01 00 00       	jmp    680bd9 <__cxa_finalize@plt-0xd32237>
  680a8a:	41 ba 64 5d 26 a9    	mov    r10d,0xa9265d64
  680a90:	e9 36 01 00 00       	jmp    680bcb <__cxa_finalize@plt-0xd32245>
  680a95:	49 b8 c2 f2 db cd 7d 	movabs r8,0x1c2ebb7dcddbf2c2
  680a9c:	bb 2e 1c 
  680a9f:	4c 01 c7             	add    rdi,r8
  680aa2:	49 b8 e0 c2 da 92 30 	movabs r8,0x2ba0c13092dac2e0
  680aa9:	c1 a0 2b 
  680aac:	4c 11 c6             	adc    rsi,r8
  680aaf:	41 ba 27 ea 48 a7    	mov    r10d,0xa748ea27
  680ab5:	e9 de 00 00 00       	jmp    680b98 <__cxa_finalize@plt-0xd32278>
  680aba:	49 0f a4 f0 19       	shld   r8,rsi,0x19
  680abf:	48 0f a4 fe 19       	shld   rsi,rdi,0x19
  680ac4:	41 ba d4 5f cd cc    	mov    r10d,0xcccd5fd4
  680aca:	49 89 f1             	mov    r9,rsi
  680acd:	e9 f9 00 00 00       	jmp    680bcb <__cxa_finalize@plt-0xd32245>
  680ad2:	4c 89 c6             	mov    rsi,r8
  680ad5:	48 c1 ee 04          	shr    rsi,0x4
  680ad9:	4c 21 e6             	and    rsi,r12
  680adc:	4d 21 e0             	and    r8,r12
  680adf:	49 c1 e0 04          	shl    r8,0x4
  680ae3:	49 09 f0             	or     r8,rsi
  680ae6:	4c 89 c6             	mov    rsi,r8
  680ae9:	4c 21 ee             	and    rsi,r13
  680aec:	49 c1 e8 02          	shr    r8,0x2
  680af0:	4d 21 e8             	and    r8,r13
  680af3:	49 8d 34 b0          	lea    rsi,[r8+rsi*4]
  680af7:	48 89 f7             	mov    rdi,rsi
  680afa:	48 21 ef             	and    rdi,rbp
  680afd:	48 d1 ee             	shr    rsi,1
  680b00:	48 21 ee             	and    rsi,rbp
  680b03:	4c 8d 04 7e          	lea    r8,[rsi+rdi*2]
  680b07:	4c 89 ce             	mov    rsi,r9
  680b0a:	48 c1 ee 04          	shr    rsi,0x4
  680b0e:	4c 21 e6             	and    rsi,r12
  680b11:	4d 21 e1             	and    r9,r12
  680b14:	49 c1 e1 04          	shl    r9,0x4
  680b18:	49 09 f1             	or     r9,rsi
  680b1b:	4c 89 ce             	mov    rsi,r9
  680b1e:	4c 21 ee             	and    rsi,r13
  680b21:	49 c1 e9 02          	shr    r9,0x2
  680b25:	4d 21 e9             	and    r9,r13
  680b28:	49 8d 34 b1          	lea    rsi,[r9+rsi*4]
  680b2c:	48 89 f7             	mov    rdi,rsi
  680b2f:	48 21 ef             	and    rdi,rbp
  680b32:	48 d1 ee             	shr    rsi,1
  680b35:	48 21 ee             	and    rsi,rbp
  680b38:	4c 8d 0c 7e          	lea    r9,[rsi+rdi*2]
  680b3c:	41 ba 33 1c c8 43    	mov    r10d,0x43c81c33
  680b42:	e9 84 00 00 00       	jmp    680bcb <__cxa_finalize@plt-0xd32245>
  680b47:	49 89 f0             	mov    r8,rsi
  680b4a:	49 0f a4 f8 24       	shld   r8,rdi,0x24
  680b4f:	48 0f a4 f7 24       	shld   rdi,rsi,0x24
  680b54:	41 ba bb d3 44 29    	mov    r10d,0x2944d3bb
  680b5a:	eb 6c                	jmp    680bc8 <__cxa_finalize@plt-0xd32248>
  680b5c:	41 ba dc 66 e7 fc    	mov    r10d,0xfce766dc
  680b62:	49 b9 c4 89 c5 f0 2d 	movabs r9,0x18e9fc2df0c589c4
  680b69:	fc e9 18 
  680b6c:	49 b8 bf 8e 70 6e 28 	movabs r8,0x830ee5286e708ebf
  680b73:	e5 0e 83 
  680b76:	eb 53                	jmp    680bcb <__cxa_finalize@plt-0xd32245>
  680b78:	49 b8 08 68 da e1 00 	movabs r8,0xab0b4100e1da6808
  680b7f:	41 0b ab 
  680b82:	4c 01 c7             	add    rdi,r8
  680b85:	49 b8 55 1f 1f e4 bb 	movabs r8,0xf87db3bbe41f1f55
  680b8c:	b3 7d f8 
  680b8f:	4c 11 c6             	adc    rsi,r8
  680b92:	41 ba 2c 64 97 b7    	mov    r10d,0xb797642c
  680b98:	49 89 f9             	mov    r9,rdi
  680b9b:	49 89 f0             	mov    r8,rsi
  680b9e:	eb 2b                	jmp    680bcb <__cxa_finalize@plt-0xd32245>
  680ba0:	49 89 f0             	mov    r8,rsi
  680ba3:	49 0f a4 f8 23       	shld   r8,rdi,0x23
  680ba8:	48 0f a4 f7 23       	shld   rdi,rsi,0x23
  680bad:	41 ba f6 b2 59 af    	mov    r10d,0xaf59b2f6
  680bb3:	eb 13                	jmp    680bc8 <__cxa_finalize@plt-0xd32248>
  680bb5:	49 89 f0             	mov    r8,rsi
  680bb8:	49 0f a4 f8 3b       	shld   r8,rdi,0x3b
  680bbd:	48 0f a4 f7 3b       	shld   rdi,rsi,0x3b
  680bc2:	41 ba 9e 8d 3c 53    	mov    r10d,0x533c8d9e
  680bc8:	49 89 f9             	mov    r9,rdi
  680bcb:	44 31 d2             	xor    edx,r10d
  680bce:	4c 89 cf             	mov    rdi,r9
  680bd1:	4c 89 c6             	mov    rsi,r8
  680bd4:	e9 34 fe ff ff       	jmp    680a0d <__cxa_finalize@plt-0xd32403>
  680bd9:	ba b9 18 bc 2c       	mov    edx,0x2cbc18b9
  680bde:	45 31 ff             	xor    r15d,r15d
  680be1:	45 31 c9             	xor    r9d,r9d
  680be4:	45 31 f6             	xor    r14d,r14d
  680be7:	4d 89 f8             	mov    r8,r15
  680bea:	49 0f c8             	bswap  r8
  680bed:	4d 89 f2             	mov    r10,r14
  680bf0:	49 0f ca             	bswap  r10
  680bf3:	81 fa dd 57 12 89    	cmp    edx,0x891257dd
  680bf9:	0f 84 4a 02 00 00    	je     680e49 <__cxa_finalize@plt-0xd31fc7>
  680bff:	81 fa a0 c4 5f 91    	cmp    edx,0x915fc4a0
  680c05:	0f 84 46 02 00 00    	je     680e51 <__cxa_finalize@plt-0xd31fbf>
  680c0b:	81 fa 3f bf f6 9e    	cmp    edx,0x9ef6bf3f
  680c11:	0f 84 a1 00 00 00    	je     680cb8 <__cxa_finalize@plt-0xd32158>
  680c17:	81 fa b9 32 54 b9    	cmp    edx,0xb95432b9
  680c1d:	0f 84 b2 01 00 00    	je     680dd5 <__cxa_finalize@plt-0xd3203b>
  680c23:	81 fa 9f b1 77 d1    	cmp    edx,0xd177b19f
  680c29:	0f 84 12 02 00 00    	je     680e41 <__cxa_finalize@plt-0xd31fcf>
  680c2f:	81 fa c2 75 d3 d2    	cmp    edx,0xd2d375c2
  680c35:	0f 84 95 00 00 00    	je     680cd0 <__cxa_finalize@plt-0xd32140>
  680c3b:	81 fa 8b 4c 6a d4    	cmp    edx,0xd46a4c8b
  680c41:	0f 84 94 00 00 00    	je     680cdb <__cxa_finalize@plt-0xd32135>
  680c47:	81 fa 71 0d 36 d6    	cmp    edx,0xd6360d71
  680c4d:	0f 84 ad 01 00 00    	je     680e00 <__cxa_finalize@plt-0xd32010>
  680c53:	81 fa 5d 2e f7 09    	cmp    edx,0x9f72e5d
  680c59:	0f 84 a1 00 00 00    	je     680d00 <__cxa_finalize@plt-0xd32110>
  680c5f:	81 fa 85 a3 74 18    	cmp    edx,0x1874a385
  680c65:	0f 84 ef 00 00 00    	je     680d5a <__cxa_finalize@plt-0xd320b6>
  680c6b:	81 fa b9 18 bc 2c    	cmp    edx,0x2cbc18b9
  680c71:	0f 84 c4 00 00 00    	je     680d3b <__cxa_finalize@plt-0xd320d5>
  680c77:	81 fa 0b 1a d8 31    	cmp    edx,0x31d81a0b
  680c7d:	0f 84 98 01 00 00    	je     680e1b <__cxa_finalize@plt-0xd31ff5>
  680c83:	81 fa 81 8e 80 4c    	cmp    edx,0x4c808e81
  680c89:	0f 84 97 01 00 00    	je     680e26 <__cxa_finalize@plt-0xd31fea>
  680c8f:	81 fa 80 2e ce 54    	cmp    edx,0x54ce2e80
  680c95:	0f 84 8a 00 00 00    	je     680d25 <__cxa_finalize@plt-0xd320eb>
  680c9b:	81 fa 16 86 81 7f    	cmp    edx,0x7f818616
  680ca1:	0f 84 89 00 00 00    	je     680d30 <__cxa_finalize@plt-0xd320e0>
  680ca7:	81 fa 5b a5 d3 e4    	cmp    edx,0xe4d3a55b
  680cad:	0f 85 42 01 00 00    	jne    680df5 <__cxa_finalize@plt-0xd3201b>
  680cb3:	e9 1d 02 00 00       	jmp    680ed5 <__cxa_finalize@plt-0xd31f3b>
  680cb8:	4d 89 f0             	mov    r8,r14
  680cbb:	4d 0f a4 f8 35       	shld   r8,r15,0x35
  680cc0:	4d 0f a4 f7 35       	shld   r15,r14,0x35
  680cc5:	41 b9 64 1a 25 7a    	mov    r9d,0x7a251a64
  680ccb:	e9 69 01 00 00       	jmp    680e39 <__cxa_finalize@plt-0xd31fd7>
  680cd0:	41 b9 7b 47 87 6b    	mov    r9d,0x6b87477b
  680cd6:	e9 ec 01 00 00       	jmp    680ec7 <__cxa_finalize@plt-0xd31f49>
  680cdb:	49 b8 7e 76 0f 35 11 	movabs r8,0x28ae4911350f767e
  680ce2:	49 ae 28 
  680ce5:	4d 01 c7             	add    r15,r8
  680ce8:	49 b8 68 fe 96 0e 57 	movabs r8,0xa7bcf570e96fe68
  680cef:	cf 7b 0a 
  680cf2:	4d 11 c6             	adc    r14,r8
  680cf5:	41 b9 49 39 b9 06    	mov    r9d,0x6b93949
  680cfb:	e9 f5 00 00 00       	jmp    680df5 <__cxa_finalize@plt-0xd3201b>
  680d00:	49 b8 f7 b2 70 4b 5a 	movabs r8,0xa939c5a4b70b2f7
  680d07:	9c 93 0a 
  680d0a:	4d 31 c7             	xor    r15,r8
  680d0d:	49 b8 a0 e8 26 9a 52 	movabs r8,0x30d014529a26e8a0
  680d14:	14 d0 30 
  680d17:	4d 31 c6             	xor    r14,r8
  680d1a:	41 b9 fd ea a8 98    	mov    r9d,0x98a8eafd
  680d20:	e9 d0 00 00 00       	jmp    680df5 <__cxa_finalize@plt-0xd3201b>
  680d25:	41 b9 01 a0 4e 18    	mov    r9d,0x184ea001
  680d2b:	e9 97 01 00 00       	jmp    680ec7 <__cxa_finalize@plt-0xd31f49>
  680d30:	41 b9 cb d1 93 f6    	mov    r9d,0xf693d1cb
  680d36:	e9 8c 01 00 00       	jmp    680ec7 <__cxa_finalize@plt-0xd31f49>
  680d3b:	41 b9 39 36 72 78    	mov    r9d,0x78723639
  680d41:	49 ba eb 03 81 e3 b3 	movabs r10,0xc6ae5db3e38103eb
  680d48:	5d ae c6 
  680d4b:	49 b8 64 1f 49 b7 8d 	movabs r8,0x325cbe8db7491f64
  680d52:	be 5c 32 
  680d55:	e9 6d 01 00 00       	jmp    680ec7 <__cxa_finalize@plt-0xd31f49>
  680d5a:	49 0f cf             	bswap  r15
  680d5d:	4d 89 f8             	mov    r8,r15
  680d60:	49 c1 e8 04          	shr    r8,0x4
  680d64:	4d 21 e0             	and    r8,r12
  680d67:	4d 21 e7             	and    r15,r12
  680d6a:	49 c1 e7 04          	shl    r15,0x4
  680d6e:	4d 09 c7             	or     r15,r8
  680d71:	4d 89 f8             	mov    r8,r15
  680d74:	4d 21 e8             	and    r8,r13
  680d77:	49 c1 ef 02          	shr    r15,0x2
  680d7b:	4d 21 ef             	and    r15,r13
  680d7e:	4f 8d 04 87          	lea    r8,[r15+r8*4]
  680d82:	4d 89 c1             	mov    r9,r8
  680d85:	49 21 e9             	and    r9,rbp
  680d88:	49 d1 e8             	shr    r8,1
  680d8b:	49 21 e8             	and    r8,rbp
  680d8e:	4f 8d 04 48          	lea    r8,[r8+r9*2]
  680d92:	49 0f ce             	bswap  r14
  680d95:	4d 89 f1             	mov    r9,r14
  680d98:	49 c1 e9 04          	shr    r9,0x4
  680d9c:	4d 21 e1             	and    r9,r12
  680d9f:	4d 21 e6             	and    r14,r12
  680da2:	49 c1 e6 04          	shl    r14,0x4
  680da6:	4d 09 ce             	or     r14,r9
  680da9:	4d 89 f1             	mov    r9,r14
  680dac:	4d 21 e9             	and    r9,r13
  680daf:	49 c1 ee 02          	shr    r14,0x2
  680db3:	4d 21 ee             	and    r14,r13
  680db6:	4f 8d 0c 8e          	lea    r9,[r14+r9*4]
  680dba:	4d 89 ca             	mov    r10,r9
  680dbd:	49 21 ea             	and    r10,rbp
  680dc0:	49 d1 e9             	shr    r9,1
  680dc3:	49 21 e9             	and    r9,rbp
  680dc6:	4f 8d 14 51          	lea    r10,[r9+r10*2]
  680dca:	41 b9 1a 12 03 c9    	mov    r9d,0xc903121a
  680dd0:	e9 f2 00 00 00       	jmp    680ec7 <__cxa_finalize@plt-0xd31f49>
  680dd5:	49 b8 78 2f 13 2a cb 	movabs r8,0xb0d2becb2a132f78
  680ddc:	be d2 b0 
  680ddf:	4d 01 c7             	add    r15,r8
  680de2:	49 b8 fe 42 9d b7 fb 	movabs r8,0xa7265dfbb79d42fe
  680de9:	5d 26 a7 
  680dec:	4d 11 c6             	adc    r14,r8
  680def:	41 b9 3c 91 20 a1    	mov    r9d,0xa120913c
  680df5:	4d 89 fa             	mov    r10,r15
  680df8:	4d 89 f0             	mov    r8,r14
  680dfb:	e9 c7 00 00 00       	jmp    680ec7 <__cxa_finalize@plt-0xd31f49>
  680e00:	4d 89 f8             	mov    r8,r15
  680e03:	4d 0f a4 f0 3b       	shld   r8,r14,0x3b
  680e08:	4d 0f a4 fe 3b       	shld   r14,r15,0x3b
  680e0d:	41 b9 4e b2 c0 48    	mov    r9d,0x48c0b24e
  680e13:	4d 89 f2             	mov    r10,r14
  680e16:	e9 ac 00 00 00       	jmp    680ec7 <__cxa_finalize@plt-0xd31f49>
  680e1b:	41 b9 80 56 b2 e5    	mov    r9d,0xe5b25680
  680e21:	e9 a1 00 00 00       	jmp    680ec7 <__cxa_finalize@plt-0xd31f49>
  680e26:	4d 89 f0             	mov    r8,r14
  680e29:	4d 0f a4 f8 22       	shld   r8,r15,0x22
  680e2e:	4d 0f a4 f7 22       	shld   r15,r14,0x22
  680e33:	41 b9 8a 94 58 7d    	mov    r9d,0x7d58948a
  680e39:	4d 89 fa             	mov    r10,r15
  680e3c:	e9 86 00 00 00       	jmp    680ec7 <__cxa_finalize@plt-0xd31f49>
  680e41:	41 b9 c2 9f 80 d8    	mov    r9d,0xd8809fc2
  680e47:	eb 7e                	jmp    680ec7 <__cxa_finalize@plt-0xd31f49>
  680e49:	41 b9 ac 5a 24 5f    	mov    r9d,0x5f245aac
  680e4f:	eb 76                	jmp    680ec7 <__cxa_finalize@plt-0xd31f49>
  680e51:	49 0f cf             	bswap  r15
  680e54:	4d 89 f8             	mov    r8,r15
  680e57:	49 c1 e8 04          	shr    r8,0x4
  680e5b:	4d 21 e0             	and    r8,r12
  680e5e:	4d 21 e7             	and    r15,r12
  680e61:	49 c1 e7 04          	shl    r15,0x4
  680e65:	4d 09 c7             	or     r15,r8
  680e68:	4d 89 f8             	mov    r8,r15
  680e6b:	4d 21 e8             	and    r8,r13
  680e6e:	49 c1 ef 02          	shr    r15,0x2
  680e72:	4d 21 ef             	and    r15,r13
  680e75:	4f 8d 04 87          	lea    r8,[r15+r8*4]
  680e79:	4d 89 c1             	mov    r9,r8
  680e7c:	49 21 e9             	and    r9,rbp
  680e7f:	49 d1 e8             	shr    r8,1
  680e82:	49 21 e8             	and    r8,rbp
  680e85:	4f 8d 04 48          	lea    r8,[r8+r9*2]
  680e89:	49 0f ce             	bswap  r14
  680e8c:	4d 89 f1             	mov    r9,r14
  680e8f:	49 c1 e9 04          	shr    r9,0x4
  680e93:	4d 21 e1             	and    r9,r12
  680e96:	4d 21 e6             	and    r14,r12
  680e99:	49 c1 e6 04          	shl    r14,0x4
  680e9d:	4d 09 ce             	or     r14,r9
  680ea0:	4d 89 f1             	mov    r9,r14
  680ea3:	4d 21 e9             	and    r9,r13
  680ea6:	49 c1 ee 02          	shr    r14,0x2
  680eaa:	4d 21 ee             	and    r14,r13
  680ead:	4f 8d 0c 8e          	lea    r9,[r14+r9*4]
  680eb1:	4d 89 ca             	mov    r10,r9
  680eb4:	49 21 ea             	and    r10,rbp
  680eb7:	49 d1 e9             	shr    r9,1
  680eba:	49 21 e9             	and    r9,rbp
  680ebd:	4f 8d 14 51          	lea    r10,[r9+r10*2]
  680ec1:	41 b9 b6 42 de ee    	mov    r9d,0xeede42b6
  680ec7:	44 31 ca             	xor    edx,r9d
  680eca:	4d 89 d7             	mov    r15,r10
  680ecd:	4d 89 c6             	mov    r14,r8
  680ed0:	e9 12 fd ff ff       	jmp    680be7 <__cxa_finalize@plt-0xd32229>
  680ed5:	41 b8 11 cb aa 35    	mov    r8d,0x35aacb11
  680edb:	e9 31 67 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  680ee0:	ba cf 32 ad 7c       	mov    edx,0x7cad32cf
  680ee5:	31 ff                	xor    edi,edi
  680ee7:	45 31 c0             	xor    r8d,r8d
  680eea:	31 f6                	xor    esi,esi
  680eec:	81 fa c6 44 46 de    	cmp    edx,0xde4644c6
  680ef2:	0f 84 ba 00 00 00    	je     680fb2 <__cxa_finalize@plt-0xd31e5e>
  680ef8:	81 fa 95 2e 87 e2    	cmp    edx,0xe2872e95
  680efe:	0f 84 99 00 00 00    	je     680f9d <__cxa_finalize@plt-0xd31e73>
  680f04:	81 fa 8b 0d 6b 24    	cmp    edx,0x246b0d8b
  680f0a:	74 29                	je     680f35 <__cxa_finalize@plt-0xd31edb>
  680f0c:	81 fa 1a 66 05 5f    	cmp    edx,0x5f05661a
  680f12:	74 58                	je     680f6c <__cxa_finalize@plt-0xd31ea4>
  680f14:	81 fa c4 89 53 64    	cmp    edx,0x645389c4
  680f1a:	74 2e                	je     680f4a <__cxa_finalize@plt-0xd31ec6>
  680f1c:	81 fa cf 32 ad 7c    	cmp    edx,0x7cad32cf
  680f22:	74 5d                	je     680f81 <__cxa_finalize@plt-0xd31e8f>
  680f24:	81 fa 50 49 ee 92    	cmp    edx,0x92ee4950
  680f2a:	0f 85 97 00 00 00    	jne    680fc7 <__cxa_finalize@plt-0xd31e49>
  680f30:	e9 9a 00 00 00       	jmp    680fcf <__cxa_finalize@plt-0xd31e41>
  680f35:	49 89 f1             	mov    r9,rsi
  680f38:	49 0f a4 f9 35       	shld   r9,rdi,0x35
  680f3d:	48 0f a4 f7 35       	shld   rdi,rsi,0x35
  680f42:	41 b8 4d 49 2d fa    	mov    r8d,0xfa2d494d
  680f48:	eb 7a                	jmp    680fc4 <__cxa_finalize@plt-0xd31e4c>
  680f4a:	49 b8 0c f8 02 80 cc 	movabs r8,0x2c6b13cc8002f80c
  680f51:	13 6b 2c 
  680f54:	4c 31 c7             	xor    rdi,r8
  680f57:	49 b8 40 cf 31 df 10 	movabs r8,0xfe9a9f10df31cf40
  680f5e:	9f 9a fe 
  680f61:	4c 31 c6             	xor    rsi,r8
  680f64:	41 b8 4f 84 38 40    	mov    r8d,0x4038844f
  680f6a:	eb 5b                	jmp    680fc7 <__cxa_finalize@plt-0xd31e49>
  680f6c:	49 89 f1             	mov    r9,rsi
  680f6f:	49 0f a4 f9 18       	shld   r9,rdi,0x18
  680f74:	48 0f a4 f7 18       	shld   rdi,rsi,0x18
  680f79:	41 b8 4a 2f eb cd    	mov    r8d,0xcdeb2f4a
  680f7f:	eb 43                	jmp    680fc4 <__cxa_finalize@plt-0xd31e4c>
  680f81:	41 b8 0b bb fe 18    	mov    r8d,0x18febb0b
  680f87:	48 bf 0c f8 02 d8 a6 	movabs rdi,0xf28ce4a6d802f80c
  680f8e:	e4 8c f2 
  680f91:	48 be a3 2b 92 d8 10 	movabs rsi,0xfe9a9f10d8922ba3
  680f98:	9f 9a fe 
  680f9b:	eb 2a                	jmp    680fc7 <__cxa_finalize@plt-0xd31e49>
  680f9d:	49 89 f9             	mov    r9,rdi
  680fa0:	49 0f a4 f1 36       	shld   r9,rsi,0x36
  680fa5:	48 0f ac f7 0a       	shrd   rdi,rsi,0xa
  680faa:	41 b8 8f 48 82 bd    	mov    r8d,0xbd82488f
  680fb0:	eb 12                	jmp    680fc4 <__cxa_finalize@plt-0xd31e4c>
  680fb2:	49 89 f9             	mov    r9,rdi
  680fb5:	49 0f c9             	bswap  r9
  680fb8:	48 0f ce             	bswap  rsi
  680fbb:	41 b8 53 6a c1 3c    	mov    r8d,0x3cc16a53
  680fc1:	48 89 f7             	mov    rdi,rsi
  680fc4:	4c 89 ce             	mov    rsi,r9
  680fc7:	44 31 c2             	xor    edx,r8d
  680fca:	e9 1d ff ff ff       	jmp    680eec <__cxa_finalize@plt-0xd31f24>
  680fcf:	ba 0b 4c c1 f5       	mov    edx,0xf5c14c0b
  680fd4:	45 31 ff             	xor    r15d,r15d
  680fd7:	45 31 c9             	xor    r9d,r9d
  680fda:	45 31 f6             	xor    r14d,r14d
  680fdd:	81 fa 4d e8 39 83    	cmp    edx,0x8339e84d
  680fe3:	0f 84 31 01 00 00    	je     68111a <__cxa_finalize@plt-0xd31cf6>
  680fe9:	4d 89 f8             	mov    r8,r15
  680fec:	49 0f c8             	bswap  r8
  680fef:	4d 89 f2             	mov    r10,r14
  680ff2:	49 0f ca             	bswap  r10
  680ff5:	81 fa c2 4e d3 86    	cmp    edx,0x86d34ec2
  680ffb:	0f 84 89 00 00 00    	je     68108a <__cxa_finalize@plt-0xd31d86>
  681001:	81 fa 55 65 9d 9a    	cmp    edx,0x9a9d6555
  681007:	0f 84 cd 00 00 00    	je     6810da <__cxa_finalize@plt-0xd31d36>
  68100d:	81 fa 22 2f 84 b3    	cmp    edx,0xb3842f22
  681013:	0f 84 e3 01 00 00    	je     6811fc <__cxa_finalize@plt-0xd31c14>
  681019:	81 fa 3a 0c d2 c1    	cmp    edx,0xc1d20c3a
  68101f:	0f 84 f9 01 00 00    	je     68121e <__cxa_finalize@plt-0xd31bf2>
  681025:	81 fa 43 5b 8c c8    	cmp    edx,0xc88c5b43
  68102b:	0f 84 19 01 00 00    	je     68114a <__cxa_finalize@plt-0xd31cc6>
  681031:	81 fa 9b 67 51 e2    	cmp    edx,0xe251679b
  681037:	0f 84 47 01 00 00    	je     681184 <__cxa_finalize@plt-0xd31c8c>
  68103d:	81 fa bd d8 6f e7    	cmp    edx,0xe76fd8bd
  681043:	74 50                	je     681095 <__cxa_finalize@plt-0xd31d7b>
  681045:	81 fa 0b 4c c1 f5    	cmp    edx,0xf5c14c0b
  68104b:	0f 84 14 01 00 00    	je     681165 <__cxa_finalize@plt-0xd31cab>
  681051:	81 fa a9 f8 ac 29    	cmp    edx,0x29acf8a9
  681057:	74 61                	je     6810ba <__cxa_finalize@plt-0xd31d56>
  681059:	81 fa 2c 95 23 63    	cmp    edx,0x6323952c
  68105f:	0f 84 9a 00 00 00    	je     6810ff <__cxa_finalize@plt-0xd31d11>
  681065:	81 fa 89 0a d4 66    	cmp    edx,0x66d40a89
  68106b:	74 62                	je     6810cf <__cxa_finalize@plt-0xd31d41>
  68106d:	81 fa 8f 6d 54 79    	cmp    edx,0x79546d8f
  681073:	0f 84 c6 00 00 00    	je     68113f <__cxa_finalize@plt-0xd31cd1>
  681079:	81 fa cd 38 2b 16    	cmp    edx,0x162b38cd
  68107f:	0f 85 b9 01 00 00    	jne    68123e <__cxa_finalize@plt-0xd31bd2>
  681085:	e9 c8 01 00 00       	jmp    681252 <__cxa_finalize@plt-0xd31bbe>
  68108a:	41 b9 ee db f0 e5    	mov    r9d,0xe5f0dbee
  681090:	e9 af 01 00 00       	jmp    681244 <__cxa_finalize@plt-0xd31bcc>
  681095:	49 b8 3e da f0 22 52 	movabs r8,0x5048f65222f0da3e
  68109c:	f6 48 50 
  68109f:	4d 31 c7             	xor    r15,r8
  6810a2:	49 b8 9a ee ab 9b 6d 	movabs r8,0x752eb6d9babee9a
  6810a9:	eb 52 07 
  6810ac:	4d 31 c6             	xor    r14,r8
  6810af:	41 b9 e8 bd f2 7d    	mov    r9d,0x7df2bde8
  6810b5:	e9 84 01 00 00       	jmp    68123e <__cxa_finalize@plt-0xd31bd2>
  6810ba:	4d 89 f8             	mov    r8,r15
  6810bd:	4d 0f a4 f0 23       	shld   r8,r14,0x23
  6810c2:	4d 0f a4 fe 23       	shld   r14,r15,0x23
  6810c7:	41 b9 26 95 f8 50    	mov    r9d,0x50f89526
  6810cd:	eb 43                	jmp    681112 <__cxa_finalize@plt-0xd31cfe>
  6810cf:	41 b9 ab 25 50 d5    	mov    r9d,0xd55025ab
  6810d5:	e9 6a 01 00 00       	jmp    681244 <__cxa_finalize@plt-0xd31bcc>
  6810da:	49 b8 7a 9a 86 67 9d 	movabs r8,0xd441629d67869a7a
  6810e1:	62 41 d4 
  6810e4:	4d 01 c7             	add    r15,r8
  6810e7:	49 b8 6a 5f a4 a9 30 	movabs r8,0x33f57430a9a45f6a
  6810ee:	74 f5 33 
  6810f1:	4d 11 c6             	adc    r14,r8
  6810f4:	41 b9 97 2b 4e 1c    	mov    r9d,0x1c4e2b97
  6810fa:	e9 3f 01 00 00       	jmp    68123e <__cxa_finalize@plt-0xd31bd2>
  6810ff:	4d 89 f8             	mov    r8,r15
  681102:	4d 0f a4 f0 3b       	shld   r8,r14,0x3b
  681107:	4d 0f a4 fe 3b       	shld   r14,r15,0x3b
  68110c:	41 b9 61 7d 1a e0    	mov    r9d,0xe01a7d61
  681112:	4d 89 f2             	mov    r10,r14
  681115:	e9 2a 01 00 00       	jmp    681244 <__cxa_finalize@plt-0xd31bcc>
  68111a:	49 b8 40 ce 6f 26 13 	movabs r8,0x60988013266fce40
  681121:	80 98 60 
  681124:	4d 01 c7             	add    r15,r8
  681127:	49 b8 0f 31 6d 22 cd 	movabs r8,0xd88590cd226d310f
  68112e:	90 85 d8 
  681131:	4d 11 c6             	adc    r14,r8
  681134:	41 b9 0e b3 b5 4b    	mov    r9d,0x4bb5b30e
  68113a:	e9 ff 00 00 00       	jmp    68123e <__cxa_finalize@plt-0xd31bd2>
  68113f:	41 b9 06 67 80 1f    	mov    r9d,0x1f806706
  681145:	e9 fa 00 00 00       	jmp    681244 <__cxa_finalize@plt-0xd31bcc>
  68114a:	4d 89 f0             	mov    r8,r14
  68114d:	4d 0f a4 f8 33       	shld   r8,r15,0x33
  681152:	4d 0f a4 f7 33       	shld   r15,r14,0x33
  681157:	41 b9 79 57 5e 09    	mov    r9d,0x95e5779
  68115d:	4d 89 fa             	mov    r10,r15
  681160:	e9 df 00 00 00       	jmp    681244 <__cxa_finalize@plt-0xd31bcc>
  681165:	41 b9 a2 b4 6d dc    	mov    r9d,0xdc6db4a2
  68116b:	49 ba 3a cf 01 7f 99 	movabs r10,0x163f73997f01cf3a
  681172:	73 3f 16 
  681175:	49 b8 49 cd 81 02 b7 	movabs r8,0xb5937ab70281cd49
  68117c:	7a 93 b5 
  68117f:	e9 c0 00 00 00       	jmp    681244 <__cxa_finalize@plt-0xd31bcc>
  681184:	49 0f cf             	bswap  r15
  681187:	4d 89 f8             	mov    r8,r15
  68118a:	49 c1 e8 04          	shr    r8,0x4
  68118e:	4d 21 e0             	and    r8,r12
  681191:	4d 21 e7             	and    r15,r12
  681194:	49 c1 e7 04          	shl    r15,0x4
  681198:	4d 09 c7             	or     r15,r8
  68119b:	4d 89 f8             	mov    r8,r15
  68119e:	4d 21 e8             	and    r8,r13
  6811a1:	49 c1 ef 02          	shr    r15,0x2
  6811a5:	4d 21 ef             	and    r15,r13
  6811a8:	4f 8d 04 87          	lea    r8,[r15+r8*4]
  6811ac:	4d 89 c1             	mov    r9,r8
  6811af:	49 21 e9             	and    r9,rbp
  6811b2:	49 d1 e8             	shr    r8,1
  6811b5:	49 21 e8             	and    r8,rbp
  6811b8:	4f 8d 04 48          	lea    r8,[r8+r9*2]
  6811bc:	49 0f ce             	bswap  r14
  6811bf:	4d 89 f1             	mov    r9,r14
  6811c2:	49 c1 e9 04          	shr    r9,0x4
  6811c6:	4d 21 e1             	and    r9,r12
  6811c9:	4d 21 e6             	and    r14,r12
  6811cc:	49 c1 e6 04          	shl    r14,0x4
  6811d0:	4d 09 ce             	or     r14,r9
  6811d3:	4d 89 f1             	mov    r9,r14
  6811d6:	4d 21 e9             	and    r9,r13
  6811d9:	49 c1 ee 02          	shr    r14,0x2
  6811dd:	4d 21 ee             	and    r14,r13
  6811e0:	4f 8d 0c 8e          	lea    r9,[r14+r9*4]
  6811e4:	4d 89 ca             	mov    r10,r9
  6811e7:	49 21 ea             	and    r10,rbp
  6811ea:	49 d1 e9             	shr    r9,1
  6811ed:	49 21 e9             	and    r9,rbp
  6811f0:	4f 8d 14 51          	lea    r10,[r9+r10*2]
  6811f4:	41 b9 26 bf 3e 05    	mov    r9d,0x53ebf26
  6811fa:	eb 48                	jmp    681244 <__cxa_finalize@plt-0xd31bcc>
  6811fc:	49 b8 7e 84 f6 d2 8e 	movabs r8,0xf3fcbe8ed2f6847e
  681203:	be fc f3 
  681206:	4d 31 c7             	xor    r15,r8
  681209:	49 b8 73 4b 76 bc a6 	movabs r8,0xfea14fa6bc764b73
  681210:	4f a1 fe 
  681213:	4d 31 c6             	xor    r14,r8
  681216:	41 b9 b9 48 d5 51    	mov    r9d,0x51d548b9
  68121c:	eb 20                	jmp    68123e <__cxa_finalize@plt-0xd31bd2>
  68121e:	49 b8 6d ae 01 31 a1 	movabs r8,0xde0985a13101ae6d
  681225:	85 09 de 
  681228:	4d 01 c7             	add    r15,r8
  68122b:	49 b8 4d 15 fe f5 3b 	movabs r8,0x9aef013bf5fe154d
  681232:	01 ef 9a 
  681235:	4d 11 c6             	adc    r14,r8
  681238:	41 b9 f7 34 f9 d7    	mov    r9d,0xd7f934f7
  68123e:	4d 89 fa             	mov    r10,r15
  681241:	4d 89 f0             	mov    r8,r14
  681244:	44 31 ca             	xor    edx,r9d
  681247:	4d 89 d7             	mov    r15,r10
  68124a:	4d 89 c6             	mov    r14,r8
  68124d:	e9 8b fd ff ff       	jmp    680fdd <__cxa_finalize@plt-0xd31e33>
  681252:	41 b8 05 61 4a ad    	mov    r8d,0xad4a6105
  681258:	e9 b4 63 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  68125d:	ba df 7e 61 06       	mov    edx,0x6617edf
  681262:	31 ff                	xor    edi,edi
  681264:	45 31 c0             	xor    r8d,r8d
  681267:	31 f6                	xor    esi,esi
  681269:	81 fa d1 38 db a0    	cmp    edx,0xa0db38d1
  68126f:	0f 84 63 01 00 00    	je     6813d8 <__cxa_finalize@plt-0xd31a38>
  681275:	81 fa 2a da 84 a8    	cmp    edx,0xa884da2a
  68127b:	0f 84 ba 01 00 00    	je     68143b <__cxa_finalize@plt-0xd319d5>
  681281:	81 fa c5 42 8e b0    	cmp    edx,0xb08e42c5
  681287:	74 79                	je     681302 <__cxa_finalize@plt-0xd31b0e>
  681289:	81 fa 74 af 40 d1    	cmp    edx,0xd140af74
  68128f:	0f 84 85 00 00 00    	je     68131a <__cxa_finalize@plt-0xd31af6>
  681295:	81 fa df 7e 61 06    	cmp    edx,0x6617edf
  68129b:	0f 84 4b 01 00 00    	je     6813ec <__cxa_finalize@plt-0xd31a24>
  6812a1:	81 fa 9c b1 46 11    	cmp    edx,0x1146b19c
  6812a7:	0f 84 85 00 00 00    	je     681332 <__cxa_finalize@plt-0xd31ade>
  6812ad:	81 fa 44 04 71 12    	cmp    edx,0x12710444
  6812b3:	0f 84 fd 00 00 00    	je     6813b6 <__cxa_finalize@plt-0xd31a5a>
  6812b9:	81 fa 47 cd 6c 32    	cmp    edx,0x326ccd47
  6812bf:	0f 84 dc 00 00 00    	je     6813a1 <__cxa_finalize@plt-0xd31a6f>
  6812c5:	81 fa e2 69 11 35    	cmp    edx,0x351169e2
  6812cb:	0f 84 37 01 00 00    	je     681408 <__cxa_finalize@plt-0xd31a08>
  6812d1:	81 fa e3 e4 64 3e    	cmp    edx,0x3e64e4e3
  6812d7:	0f 84 40 01 00 00    	je     68141d <__cxa_finalize@plt-0xd319f3>
  6812dd:	81 fa f3 6c 9e 58    	cmp    edx,0x589e6cf3
  6812e3:	74 72                	je     681357 <__cxa_finalize@plt-0xd31ab9>
  6812e5:	81 fa 9b ae 58 65    	cmp    edx,0x6558ae9b
  6812eb:	0f 84 8b 00 00 00    	je     68137c <__cxa_finalize@plt-0xd31a94>
  6812f1:	81 fa f2 6b e5 a6    	cmp    edx,0xa6e56bf2
  6812f7:	0f 85 36 01 00 00    	jne    681433 <__cxa_finalize@plt-0xd319dd>
  6812fd:	e9 5b 01 00 00       	jmp    68145d <__cxa_finalize@plt-0xd319b3>
  681302:	49 89 f9             	mov    r9,rdi
  681305:	49 0f a4 f1 3e       	shld   r9,rsi,0x3e
  68130a:	48 0f ac f7 02       	shrd   rdi,rsi,0x2
  68130f:	41 b8 ef 98 0a 18    	mov    r8d,0x180a98ef
  681315:	e9 16 01 00 00       	jmp    681430 <__cxa_finalize@plt-0xd319e0>
  68131a:	49 89 f9             	mov    r9,rdi
  68131d:	49 0f a4 f1 3e       	shld   r9,rsi,0x3e
  681322:	48 0f ac f7 02       	shrd   rdi,rsi,0x2
  681327:	41 b8 b1 ed ce 61    	mov    r8d,0x61ceedb1
  68132d:	e9 fe 00 00 00       	jmp    681430 <__cxa_finalize@plt-0xd319e0>
  681332:	49 b8 ed 00 38 2e 9b 	movabs r8,0xa818439b2e3800ed
  681339:	43 18 a8 
  68133c:	4c 31 c7             	xor    rdi,r8
  68133f:	49 b8 dc e5 3a a1 4a 	movabs r8,0xf9d1f44aa13ae5dc
  681346:	f4 d1 f9 
  681349:	4c 31 c6             	xor    rsi,r8
  68134c:	41 b8 7e d8 57 24    	mov    r8d,0x2457d87e
  681352:	e9 dc 00 00 00       	jmp    681433 <__cxa_finalize@plt-0xd319dd>
  681357:	49 b8 84 fa a8 14 08 	movabs r8,0x5822a40814a8fa84
  68135e:	a4 22 58 
  681361:	4c 01 c7             	add    rdi,r8
  681364:	49 b8 ed bb b2 ff 72 	movabs r8,0x57bf4772ffb2bbed
  68136b:	47 bf 57 
  68136e:	4c 11 c6             	adc    rsi,r8
  681371:	41 b8 22 54 45 f8    	mov    r8d,0xf8455422
  681377:	e9 b7 00 00 00       	jmp    681433 <__cxa_finalize@plt-0xd319dd>
  68137c:	49 b8 fd a1 81 3e fa 	movabs r8,0x40edb7fa3e81a1fd
  681383:	b7 ed 40 
  681386:	4c 31 c7             	xor    rdi,r8
  681389:	49 b8 b1 2c 74 de da 	movabs r8,0x975d2ddade742cb1
  681390:	2d 5d 97 
  681393:	4c 31 c6             	xor    rsi,r8
  681396:	41 b8 07 1f 1e 74    	mov    r8d,0x741e1f07
  68139c:	e9 92 00 00 00       	jmp    681433 <__cxa_finalize@plt-0xd319dd>
  6813a1:	49 89 f9             	mov    r9,rdi
  6813a4:	49 0f a4 f1 0d       	shld   r9,rsi,0xd
  6813a9:	48 0f ac f7 33       	shrd   rdi,rsi,0x33
  6813ae:	41 b8 b5 a6 89 94    	mov    r8d,0x9489a6b5
  6813b4:	eb 7a                	jmp    681430 <__cxa_finalize@plt-0xd319e0>
  6813b6:	49 b8 6d 10 6b 4f e7 	movabs r8,0x8d9e0de74f6b106d
  6813bd:	0d 9e 8d 
  6813c0:	4c 31 c7             	xor    rdi,r8
  6813c3:	49 b8 ad 88 41 ed 4a 	movabs r8,0x822c514aed4188ad
  6813ca:	51 2c 82 
  6813cd:	4c 31 c6             	xor    rsi,r8
  6813d0:	41 b8 a7 e0 15 2c    	mov    r8d,0x2c15e0a7
  6813d6:	eb 5b                	jmp    681433 <__cxa_finalize@plt-0xd319dd>
  6813d8:	49 89 f9             	mov    r9,rdi
  6813db:	49 0f c9             	bswap  r9
  6813de:	48 0f ce             	bswap  rsi
  6813e1:	41 b8 96 f5 b7 92    	mov    r8d,0x92b7f596
  6813e7:	48 89 f7             	mov    rdi,rsi
  6813ea:	eb 44                	jmp    681430 <__cxa_finalize@plt-0xd319e0>
  6813ec:	41 b8 ab d1 21 d7    	mov    r8d,0xd721d1ab
  6813f2:	48 bf b0 3a cd 70 47 	movabs rdi,0x5b41964770cd3ab0
  6813f9:	96 41 5b 
  6813fc:	48 be 1c 0c 29 9e c8 	movabs rsi,0x6156afc89e290c1c
  681403:	af 56 61 
  681406:	eb 2b                	jmp    681433 <__cxa_finalize@plt-0xd319dd>
  681408:	49 89 f9             	mov    r9,rdi
  68140b:	49 0f a4 f1 05       	shld   r9,rsi,0x5
  681410:	48 0f ac f7 3b       	shrd   rdi,rsi,0x3b
  681415:	41 b8 11 05 8f 6d    	mov    r8d,0x6d8f0511
  68141b:	eb 13                	jmp    681430 <__cxa_finalize@plt-0xd319e0>
  68141d:	49 89 f9             	mov    r9,rdi
  681420:	49 0f a4 f1 36       	shld   r9,rsi,0x36
  681425:	48 0f ac f7 0a       	shrd   rdi,rsi,0xa
  68142a:	41 b8 78 4a 3c 5b    	mov    r8d,0x5b3c4a78
  681430:	4c 89 ce             	mov    rsi,r9
  681433:	44 31 c2             	xor    edx,r8d
  681436:	e9 2e fe ff ff       	jmp    681269 <__cxa_finalize@plt-0xd31ba7>
  68143b:	49 b8 d8 07 35 29 a1 	movabs r8,0x8ca47ea1293507d8
  681442:	7e a4 8c 
  681445:	4c 01 c7             	add    rdi,r8
  681448:	49 b8 d9 ff 81 4f 82 	movabs r8,0x272c93824f81ffd9
  68144f:	93 2c 27 
  681452:	4c 11 c6             	adc    rsi,r8
  681455:	41 b8 6e de f5 ba    	mov    r8d,0xbaf5de6e
  68145b:	eb d6                	jmp    681433 <__cxa_finalize@plt-0xd319dd>
  68145d:	ba 1d d2 b8 f6       	mov    edx,0xf6b8d21d
  681462:	45 31 ff             	xor    r15d,r15d
  681465:	45 31 c0             	xor    r8d,r8d
  681468:	45 31 f6             	xor    r14d,r14d
  68146b:	81 fa d9 59 9e b9    	cmp    edx,0xb99e59d9
  681471:	0f 84 40 01 00 00    	je     6815b7 <__cxa_finalize@plt-0xd31859>
  681477:	81 fa e9 cd 96 c9    	cmp    edx,0xc996cde9
  68147d:	0f 84 b6 00 00 00    	je     681539 <__cxa_finalize@plt-0xd318d7>
  681483:	81 fa 56 e4 7a db    	cmp    edx,0xdb7ae456
  681489:	0f 84 06 01 00 00    	je     681595 <__cxa_finalize@plt-0xd3187b>
  68148f:	81 fa b4 a3 0e e5    	cmp    edx,0xe50ea3b4
  681495:	0f 84 d8 00 00 00    	je     681573 <__cxa_finalize@plt-0xd3189d>
  68149b:	81 fa 1d d2 b8 f6    	cmp    edx,0xf6b8d21d
  6814a1:	74 2d                	je     6814d0 <__cxa_finalize@plt-0xd31940>
  6814a3:	81 fa 33 f8 0b 36    	cmp    edx,0x360bf833
  6814a9:	74 69                	je     681514 <__cxa_finalize@plt-0xd318fc>
  6814ab:	81 fa cf 37 6c 70    	cmp    edx,0x706c37cf
  6814b1:	74 3c                	je     6814ef <__cxa_finalize@plt-0xd31921>
  6814b3:	81 fa a4 da 0f 79    	cmp    edx,0x790fdaa4
  6814b9:	0f 84 9c 00 00 00    	je     68155b <__cxa_finalize@plt-0xd318b5>
  6814bf:	81 fa 91 70 81 39    	cmp    edx,0x39817091
  6814c5:	0f 85 0c 01 00 00    	jne    6815d7 <__cxa_finalize@plt-0xd31839>
  6814cb:	e9 0f 01 00 00       	jmp    6815df <__cxa_finalize@plt-0xd31831>
  6814d0:	41 b8 b9 08 b7 8f    	mov    r8d,0x8fb708b9
  6814d6:	49 bf ba 47 4f c9 0b 	movabs r15,0x1598950bc94f47ba
  6814dd:	95 98 15 
  6814e0:	49 be d1 71 1a 71 fc 	movabs r14,0x87483bfc711a71d1
  6814e7:	3b 48 87 
  6814ea:	e9 e8 00 00 00       	jmp    6815d7 <__cxa_finalize@plt-0xd31839>
  6814ef:	49 b8 67 34 f2 64 4c 	movabs r8,0x7402f64c64f23467
  6814f6:	f6 02 74 
  6814f9:	4d 31 c7             	xor    r15,r8
  6814fc:	49 b8 2d bc 51 1e 25 	movabs r8,0x851f86251e51bc2d
  681503:	86 1f 85 
  681506:	4d 31 c6             	xor    r14,r8
  681509:	41 b8 7b 94 62 95    	mov    r8d,0x9562947b
  68150f:	e9 c3 00 00 00       	jmp    6815d7 <__cxa_finalize@plt-0xd31839>
  681514:	49 b8 85 c8 80 d0 e3 	movabs r8,0x14b4de3d080c885
  68151b:	4d 4b 01 
  68151e:	4d 01 c7             	add    r15,r8
  681521:	49 b8 28 41 91 ec 35 	movabs r8,0xf270ae35ec914128
  681528:	ae 70 f2 
  68152b:	4d 11 c6             	adc    r14,r8
  68152e:	41 b8 a2 88 8a 0f    	mov    r8d,0xf8a88a2
  681534:	e9 9e 00 00 00       	jmp    6815d7 <__cxa_finalize@plt-0xd31839>
  681539:	49 b8 01 38 50 e6 7e 	movabs r8,0xa44ad7ee6503801
  681540:	ad 44 0a 
  681543:	4d 01 c7             	add    r15,r8
  681546:	49 b8 45 55 71 ab 79 	movabs r8,0xade1e179ab715545
  68154d:	e1 e1 ad 
  681550:	4d 11 c6             	adc    r14,r8
  681553:	41 b8 26 fa fa b9    	mov    r8d,0xb9fafa26
  681559:	eb 7c                	jmp    6815d7 <__cxa_finalize@plt-0xd31839>
  68155b:	4d 89 f1             	mov    r9,r14
  68155e:	4d 0f a4 f9 3e       	shld   r9,r15,0x3e
  681563:	4d 0f a4 f7 3e       	shld   r15,r14,0x3e
  681568:	41 b8 7d 83 91 c0    	mov    r8d,0xc091837d
  68156e:	4d 89 ce             	mov    r14,r9
  681571:	eb 64                	jmp    6815d7 <__cxa_finalize@plt-0xd31839>
  681573:	49 b8 c3 05 99 e8 ed 	movabs r8,0xb7352ede89905c3
  68157a:	52 73 0b 
  68157d:	4d 31 c7             	xor    r15,r8
  681580:	49 b8 7d d2 1d 02 bd 	movabs r8,0x3c4cd6bd021dd27d
  681587:	d6 4c 3c 
  68158a:	4d 31 c6             	xor    r14,r8
  68158d:	41 b8 e2 47 74 3e    	mov    r8d,0x3e7447e2
  681593:	eb 42                	jmp    6815d7 <__cxa_finalize@plt-0xd31839>
  681595:	49 b8 b1 43 bd 0b 66 	movabs r8,0x319705660bbd43b1
  68159c:	05 97 31 
  68159f:	4d 01 c7             	add    r15,r8
  6815a2:	49 b8 5e 85 fb 66 50 	movabs r8,0x87c4055066fb855e
  6815a9:	05 c4 87 
  6815ac:	4d 11 c6             	adc    r14,r8
  6815af:	41 b8 65 1c 71 ed    	mov    r8d,0xed711c65
  6815b5:	eb 20                	jmp    6815d7 <__cxa_finalize@plt-0xd31839>
  6815b7:	49 b8 f8 ed 13 ad 99 	movabs r8,0xe6554b99ad13edf8
  6815be:	4b 55 e6 
  6815c1:	4d 01 c7             	add    r15,r8
  6815c4:	49 b8 f5 2f 7a 12 25 	movabs r8,0x49501625127a2ff5
  6815cb:	16 50 49 
  6815ce:	4d 11 c6             	adc    r14,r8
  6815d1:	41 b8 30 94 08 70    	mov    r8d,0x70089430
  6815d7:	44 31 c2             	xor    edx,r8d
  6815da:	e9 8c fe ff ff       	jmp    68146b <__cxa_finalize@plt-0xd319a5>
  6815df:	41 b8 db 83 76 20    	mov    r8d,0x207683db
  6815e5:	e9 27 60 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  6815ea:	ba 6a 32 02 77       	mov    edx,0x7702326a
  6815ef:	31 ff                	xor    edi,edi
  6815f1:	45 31 c9             	xor    r9d,r9d
  6815f4:	31 f6                	xor    esi,esi
  6815f6:	81 fa a8 ba d0 96    	cmp    edx,0x96d0baa8
  6815fc:	0f 84 ed 02 00 00    	je     6818ef <__cxa_finalize@plt-0xd31521>
  681602:	81 fa 85 60 1a 97    	cmp    edx,0x971a6085
  681608:	0f 84 59 03 00 00    	je     681967 <__cxa_finalize@plt-0xd314a9>
  68160e:	81 fa b5 28 4d 9a    	cmp    edx,0x9a4d28b5
  681614:	0f 84 ad 00 00 00    	je     6816c7 <__cxa_finalize@plt-0xd31749>
  68161a:	81 fa d3 16 7e ab    	cmp    edx,0xab7e16d3
  681620:	0f 84 d5 01 00 00    	je     6817fb <__cxa_finalize@plt-0xd31615>
  681626:	81 fa 68 aa f7 ae    	cmp    edx,0xaef7aa68
  68162c:	0f 84 a2 02 00 00    	je     6818d4 <__cxa_finalize@plt-0xd3153c>
  681632:	81 fa 79 6a 88 c4    	cmp    edx,0xc4886a79
  681638:	0f 84 ae 00 00 00    	je     6816ec <__cxa_finalize@plt-0xd31724>
  68163e:	81 fa 87 e7 28 cc    	cmp    edx,0xcc28e787
  681644:	0f 84 c7 00 00 00    	je     681711 <__cxa_finalize@plt-0xd316ff>
  68164a:	81 fa 44 24 e3 cd    	cmp    edx,0xcde32444
  681650:	0f 84 bd 01 00 00    	je     681813 <__cxa_finalize@plt-0xd315fd>
  681656:	49 89 f8             	mov    r8,rdi
  681659:	81 fa e7 13 94 d1    	cmp    edx,0xd19413e7
  68165f:	0f 84 d1 00 00 00    	je     681736 <__cxa_finalize@plt-0xd316da>
  681665:	49 0f c8             	bswap  r8
  681668:	49 89 f2             	mov    r10,rsi
  68166b:	49 0f ca             	bswap  r10
  68166e:	81 fa 7b 27 fc fd    	cmp    edx,0xfdfc277b
  681674:	0f 84 76 01 00 00    	je     6817f0 <__cxa_finalize@plt-0xd31620>
  68167a:	81 fa 55 c2 ab 08    	cmp    edx,0x8abc255
  681680:	0f 84 ef 00 00 00    	je     681775 <__cxa_finalize@plt-0xd3169b>
  681686:	81 fa c7 1c ee 17    	cmp    edx,0x17ee1cc7
  68168c:	0f 84 fc 01 00 00    	je     68188e <__cxa_finalize@plt-0xd31582>
  681692:	81 fa 8f 96 70 31    	cmp    edx,0x3170968f
  681698:	0f 84 1b 02 00 00    	je     6818b9 <__cxa_finalize@plt-0xd31557>
  68169e:	81 fa f9 03 81 6f    	cmp    edx,0x6f8103f9
  6816a4:	0f 84 a1 00 00 00    	je     68174b <__cxa_finalize@plt-0xd316c5>
  6816aa:	81 fa 6a 32 02 77    	cmp    edx,0x7702326a
  6816b0:	0f 84 a0 00 00 00    	je     681756 <__cxa_finalize@plt-0xd316ba>
  6816b6:	81 fa 43 58 c2 41    	cmp    edx,0x41c25843
  6816bc:	0f 85 ec 01 00 00    	jne    6818ae <__cxa_finalize@plt-0xd31562>
  6816c2:	e9 24 03 00 00       	jmp    6819eb <__cxa_finalize@plt-0xd31425>
  6816c7:	49 b8 a7 90 25 61 12 	movabs r8,0xaecf912612590a7
  6816ce:	f9 ec 0a 
  6816d1:	4c 01 c7             	add    rdi,r8
  6816d4:	49 b8 30 f2 f4 ec 9c 	movabs r8,0x8fba449cecf4f230
  6816db:	44 ba 8f 
  6816de:	4c 11 c6             	adc    rsi,r8
  6816e1:	41 b9 e0 ea e6 92    	mov    r9d,0x92e6eae0
  6816e7:	e9 c2 01 00 00       	jmp    6818ae <__cxa_finalize@plt-0xd31562>
  6816ec:	49 b8 c6 ea ec 5f c2 	movabs r8,0xac75bdc25feceac6
  6816f3:	bd 75 ac 
  6816f6:	4c 31 c7             	xor    rdi,r8
  6816f9:	49 b8 7f 47 ec 11 02 	movabs r8,0x8eed310211ec477f
  681700:	31 ed 8e 
  681703:	4c 31 c6             	xor    rsi,r8
  681706:	41 b9 9e 79 1c 15    	mov    r9d,0x151c799e
  68170c:	e9 9d 01 00 00       	jmp    6818ae <__cxa_finalize@plt-0xd31562>
  681711:	49 b8 09 cf ea 07 4e 	movabs r8,0x967f414e07eacf09
  681718:	41 7f 96 
  68171b:	4c 01 c7             	add    rdi,r8
  68171e:	49 b8 bd a1 6e 67 e3 	movabs r8,0x950418e3676ea1bd
  681725:	18 04 95 
  681728:	4c 11 c6             	adc    rsi,r8
  68172b:	41 b9 40 fb c6 db    	mov    r9d,0xdbc6fb40
  681731:	e9 78 01 00 00       	jmp    6818ae <__cxa_finalize@plt-0xd31562>
  681736:	49 0f a4 f0 30       	shld   r8,rsi,0x30
  68173b:	48 0f a4 fe 30       	shld   rsi,rdi,0x30
  681740:	41 b9 1e 10 15 be    	mov    r9d,0xbe15101e
  681746:	e9 81 01 00 00       	jmp    6818cc <__cxa_finalize@plt-0xd31544>
  68174b:	41 b9 7e e4 a9 a3    	mov    r9d,0xa3a9e47e
  681751:	e9 87 02 00 00       	jmp    6819dd <__cxa_finalize@plt-0xd31433>
  681756:	41 b9 02 98 f5 d9    	mov    r9d,0xd9f59802
  68175c:	49 ba 9c 44 7e 05 83 	movabs r10,0x5ec91683057e449c
  681763:	16 c9 5e 
  681766:	49 b8 62 3a 9a 75 6a 	movabs r8,0xedfc186a759a3a62
  68176d:	18 fc ed 
  681770:	e9 68 02 00 00       	jmp    6819dd <__cxa_finalize@plt-0xd31433>
  681775:	48 0f cf             	bswap  rdi
  681778:	49 89 f8             	mov    r8,rdi
  68177b:	49 c1 e8 04          	shr    r8,0x4
  68177f:	4d 21 e0             	and    r8,r12
  681782:	4c 21 e7             	and    rdi,r12
  681785:	48 c1 e7 04          	shl    rdi,0x4
  681789:	4c 09 c7             	or     rdi,r8
  68178c:	49 89 f8             	mov    r8,rdi
  68178f:	4d 21 e8             	and    r8,r13
  681792:	48 c1 ef 02          	shr    rdi,0x2
  681796:	4c 21 ef             	and    rdi,r13
  681799:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  68179d:	49 89 f8             	mov    r8,rdi
  6817a0:	49 21 e8             	and    r8,rbp
  6817a3:	48 d1 ef             	shr    rdi,1
  6817a6:	48 21 ef             	and    rdi,rbp
  6817a9:	4e 8d 04 47          	lea    r8,[rdi+r8*2]
  6817ad:	48 0f ce             	bswap  rsi
  6817b0:	48 89 f7             	mov    rdi,rsi
  6817b3:	48 c1 ef 04          	shr    rdi,0x4
  6817b7:	4c 21 e7             	and    rdi,r12
  6817ba:	4c 21 e6             	and    rsi,r12
  6817bd:	48 c1 e6 04          	shl    rsi,0x4
  6817c1:	48 09 fe             	or     rsi,rdi
  6817c4:	48 89 f7             	mov    rdi,rsi
  6817c7:	4c 21 ef             	and    rdi,r13
  6817ca:	48 c1 ee 02          	shr    rsi,0x2
  6817ce:	4c 21 ee             	and    rsi,r13
  6817d1:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  6817d5:	48 89 f7             	mov    rdi,rsi
  6817d8:	48 21 ef             	and    rdi,rbp
  6817db:	48 d1 ee             	shr    rsi,1
  6817de:	48 21 ee             	and    rsi,rbp
  6817e1:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  6817e5:	41 b9 16 9a 69 49    	mov    r9d,0x49699a16
  6817eb:	e9 ed 01 00 00       	jmp    6819dd <__cxa_finalize@plt-0xd31433>
  6817f0:	41 b9 02 4d 74 39    	mov    r9d,0x39744d02
  6817f6:	e9 e2 01 00 00       	jmp    6819dd <__cxa_finalize@plt-0xd31433>
  6817fb:	49 89 f0             	mov    r8,rsi
  6817fe:	49 0f a4 f8 06       	shld   r8,rdi,0x6
  681803:	48 0f a4 f7 06       	shld   rdi,rsi,0x6
  681808:	41 b9 56 76 64 3c    	mov    r9d,0x3c647656
  68180e:	e9 d4 00 00 00       	jmp    6818e7 <__cxa_finalize@plt-0xd31529>
  681813:	48 0f cf             	bswap  rdi
  681816:	49 89 f8             	mov    r8,rdi
  681819:	49 c1 e8 04          	shr    r8,0x4
  68181d:	4d 21 e0             	and    r8,r12
  681820:	4c 21 e7             	and    rdi,r12
  681823:	48 c1 e7 04          	shl    rdi,0x4
  681827:	4c 09 c7             	or     rdi,r8
  68182a:	49 89 f8             	mov    r8,rdi
  68182d:	4d 21 e8             	and    r8,r13
  681830:	48 c1 ef 02          	shr    rdi,0x2
  681834:	4c 21 ef             	and    rdi,r13
  681837:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  68183b:	49 89 f8             	mov    r8,rdi
  68183e:	49 21 e8             	and    r8,rbp
  681841:	48 d1 ef             	shr    rdi,1
  681844:	48 21 ef             	and    rdi,rbp
  681847:	4e 8d 04 47          	lea    r8,[rdi+r8*2]
  68184b:	48 0f ce             	bswap  rsi
  68184e:	48 89 f7             	mov    rdi,rsi
  681851:	48 c1 ef 04          	shr    rdi,0x4
  681855:	4c 21 e7             	and    rdi,r12
  681858:	4c 21 e6             	and    rsi,r12
  68185b:	48 c1 e6 04          	shl    rsi,0x4
  68185f:	48 09 fe             	or     rsi,rdi
  681862:	48 89 f7             	mov    rdi,rsi
  681865:	4c 21 ef             	and    rdi,r13
  681868:	48 c1 ee 02          	shr    rsi,0x2
  68186c:	4c 21 ee             	and    rsi,r13
  68186f:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  681873:	48 89 f7             	mov    rdi,rsi
  681876:	48 21 ef             	and    rdi,rbp
  681879:	48 d1 ee             	shr    rsi,1
  68187c:	48 21 ee             	and    rsi,rbp
  68187f:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  681883:	41 b9 ec 9e 33 5b    	mov    r9d,0x5b339eec
  681889:	e9 4f 01 00 00       	jmp    6819dd <__cxa_finalize@plt-0xd31433>
  68188e:	49 b8 f3 a6 58 db ff 	movabs r8,0xb44669ffdb58a6f3
  681895:	69 46 b4 
  681898:	4c 01 c7             	add    rdi,r8
  68189b:	49 b8 dc c7 f3 6c f2 	movabs r8,0xe3049ff26cf3c7dc
  6818a2:	9f 04 e3 
  6818a5:	4c 11 c6             	adc    rsi,r8
  6818a8:	41 b9 72 34 a3 8d    	mov    r9d,0x8da33472
  6818ae:	49 89 fa             	mov    r10,rdi
  6818b1:	49 89 f0             	mov    r8,rsi
  6818b4:	e9 24 01 00 00       	jmp    6819dd <__cxa_finalize@plt-0xd31433>
  6818b9:	49 89 f8             	mov    r8,rdi
  6818bc:	49 0f a4 f0 12       	shld   r8,rsi,0x12
  6818c1:	48 0f a4 fe 12       	shld   rsi,rdi,0x12
  6818c6:	41 b9 5c 80 0e 9a    	mov    r9d,0x9a0e805c
  6818cc:	49 89 f2             	mov    r10,rsi
  6818cf:	e9 09 01 00 00       	jmp    6819dd <__cxa_finalize@plt-0xd31433>
  6818d4:	49 89 f0             	mov    r8,rsi
  6818d7:	49 0f a4 f8 38       	shld   r8,rdi,0x38
  6818dc:	48 0f a4 f7 38       	shld   rdi,rsi,0x38
  6818e1:	41 b9 2c 8e 14 63    	mov    r9d,0x63148e2c
  6818e7:	49 89 fa             	mov    r10,rdi
  6818ea:	e9 ee 00 00 00       	jmp    6819dd <__cxa_finalize@plt-0xd31433>
  6818ef:	48 0f cf             	bswap  rdi
  6818f2:	49 89 f8             	mov    r8,rdi
  6818f5:	49 c1 e8 04          	shr    r8,0x4
  6818f9:	4d 21 e0             	and    r8,r12
  6818fc:	4c 21 e7             	and    rdi,r12
  6818ff:	48 c1 e7 04          	shl    rdi,0x4
  681903:	4c 09 c7             	or     rdi,r8
  681906:	49 89 f8             	mov    r8,rdi
  681909:	4d 21 e8             	and    r8,r13
  68190c:	48 c1 ef 02          	shr    rdi,0x2
  681910:	4c 21 ef             	and    rdi,r13
  681913:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  681917:	49 89 f8             	mov    r8,rdi
  68191a:	49 21 e8             	and    r8,rbp
  68191d:	48 d1 ef             	shr    rdi,1
  681920:	48 21 ef             	and    rdi,rbp
  681923:	4e 8d 04 47          	lea    r8,[rdi+r8*2]
  681927:	48 0f ce             	bswap  rsi
  68192a:	48 89 f7             	mov    rdi,rsi
  68192d:	48 c1 ef 04          	shr    rdi,0x4
  681931:	4c 21 e7             	and    rdi,r12
  681934:	4c 21 e6             	and    rsi,r12
  681937:	48 c1 e6 04          	shl    rsi,0x4
  68193b:	48 09 fe             	or     rsi,rdi
  68193e:	48 89 f7             	mov    rdi,rsi
  681941:	4c 21 ef             	and    rdi,r13
  681944:	48 c1 ee 02          	shr    rsi,0x2
  681948:	4c 21 ee             	and    rsi,r13
  68194b:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  68194f:	48 89 f7             	mov    rdi,rsi
  681952:	48 21 ef             	and    rdi,rbp
  681955:	48 d1 ee             	shr    rsi,1
  681958:	48 21 ee             	and    rsi,rbp
  68195b:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  68195f:	41 b9 27 2c a0 a7    	mov    r9d,0xa7a02c27
  681965:	eb 76                	jmp    6819dd <__cxa_finalize@plt-0xd31433>
  681967:	48 0f cf             	bswap  rdi
  68196a:	49 89 f8             	mov    r8,rdi
  68196d:	49 c1 e8 04          	shr    r8,0x4
  681971:	4d 21 e0             	and    r8,r12
  681974:	4c 21 e7             	and    rdi,r12
  681977:	48 c1 e7 04          	shl    rdi,0x4
  68197b:	4c 09 c7             	or     rdi,r8
  68197e:	49 89 f8             	mov    r8,rdi
  681981:	4d 21 e8             	and    r8,r13
  681984:	48 c1 ef 02          	shr    rdi,0x2
  681988:	4c 21 ef             	and    rdi,r13
  68198b:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  68198f:	49 89 f8             	mov    r8,rdi
  681992:	49 21 e8             	and    r8,rbp
  681995:	48 d1 ef             	shr    rdi,1
  681998:	48 21 ef             	and    rdi,rbp
  68199b:	4e 8d 04 47          	lea    r8,[rdi+r8*2]
  68199f:	48 0f ce             	bswap  rsi
  6819a2:	48 89 f7             	mov    rdi,rsi
  6819a5:	48 c1 ef 04          	shr    rdi,0x4
  6819a9:	4c 21 e7             	and    rdi,r12
  6819ac:	4c 21 e6             	and    rsi,r12
  6819af:	48 c1 e6 04          	shl    rsi,0x4
  6819b3:	48 09 fe             	or     rsi,rdi
  6819b6:	48 89 f7             	mov    rdi,rsi
  6819b9:	4c 21 ef             	and    rdi,r13
  6819bc:	48 c1 ee 02          	shr    rsi,0x2
  6819c0:	4c 21 ee             	and    rsi,r13
  6819c3:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  6819c7:	48 89 f7             	mov    rdi,rsi
  6819ca:	48 21 ef             	and    rdi,rbp
  6819cd:	48 d1 ee             	shr    rsi,1
  6819d0:	48 21 ee             	and    rsi,rbp
  6819d3:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  6819d7:	41 b9 fe 47 e6 6a    	mov    r9d,0x6ae647fe
  6819dd:	44 31 ca             	xor    edx,r9d
  6819e0:	4c 89 d7             	mov    rdi,r10
  6819e3:	4c 89 c6             	mov    rsi,r8
  6819e6:	e9 0b fc ff ff       	jmp    6815f6 <__cxa_finalize@plt-0xd3181a>
  6819eb:	ba ad cb 93 28       	mov    edx,0x2893cbad
  6819f0:	45 31 ff             	xor    r15d,r15d
  6819f3:	45 31 c0             	xor    r8d,r8d
  6819f6:	45 31 f6             	xor    r14d,r14d
  6819f9:	81 fa db bb 36 0b    	cmp    edx,0xb36bbdb
  6819ff:	0f 84 23 01 00 00    	je     681b28 <__cxa_finalize@plt-0xd312e8>
  681a05:	81 fa ad cb 93 28    	cmp    edx,0x2893cbad
  681a0b:	0f 84 fb 00 00 00    	je     681b0c <__cxa_finalize@plt-0xd31304>
  681a11:	81 fa 96 88 de 45    	cmp    edx,0x45de8896
  681a17:	74 2d                	je     681a46 <__cxa_finalize@plt-0xd313ca>
  681a19:	81 fa 3d 1e 85 50    	cmp    edx,0x50851e3d
  681a1f:	74 55                	je     681a76 <__cxa_finalize@plt-0xd3139a>
  681a21:	81 fa bf 3f 22 5a    	cmp    edx,0x5a223fbf
  681a27:	74 35                	je     681a5e <__cxa_finalize@plt-0xd313b2>
  681a29:	81 fa 8a 20 c3 74    	cmp    edx,0x74c3208a
  681a2f:	0f 84 b9 00 00 00    	je     681aee <__cxa_finalize@plt-0xd31322>
  681a35:	81 fa 33 01 44 a3    	cmp    edx,0xa3440133
  681a3b:	0f 85 c3 00 00 00    	jne    681b04 <__cxa_finalize@plt-0xd3130c>
  681a41:	e9 04 01 00 00       	jmp    681b4a <__cxa_finalize@plt-0xd312c6>
  681a46:	4d 89 f9             	mov    r9,r15
  681a49:	4d 0f a4 f1 3e       	shld   r9,r14,0x3e
  681a4e:	4d 0f ac f7 02       	shrd   r15,r14,0x2
  681a53:	41 b8 a5 89 9a e6    	mov    r8d,0xe69a89a5
  681a59:	e9 a3 00 00 00       	jmp    681b01 <__cxa_finalize@plt-0xd3130f>
  681a5e:	4d 89 f1             	mov    r9,r14
  681a61:	4d 0f a4 f9 19       	shld   r9,r15,0x19
  681a66:	4d 0f a4 f7 19       	shld   r15,r14,0x19
  681a6b:	41 b8 29 b7 fc 1f    	mov    r8d,0x1ffcb729
  681a71:	e9 8b 00 00 00       	jmp    681b01 <__cxa_finalize@plt-0xd3130f>
  681a76:	49 0f cf             	bswap  r15
  681a79:	4d 89 f8             	mov    r8,r15
  681a7c:	49 c1 e8 04          	shr    r8,0x4
  681a80:	4d 21 e0             	and    r8,r12
  681a83:	4d 21 e7             	and    r15,r12
  681a86:	49 c1 e7 04          	shl    r15,0x4
  681a8a:	4d 09 c7             	or     r15,r8
  681a8d:	4d 89 f8             	mov    r8,r15
  681a90:	4d 21 e8             	and    r8,r13
  681a93:	49 c1 ef 02          	shr    r15,0x2
  681a97:	4d 21 ef             	and    r15,r13
  681a9a:	4f 8d 04 87          	lea    r8,[r15+r8*4]
  681a9e:	4d 89 c1             	mov    r9,r8
  681aa1:	49 21 e9             	and    r9,rbp
  681aa4:	49 d1 e8             	shr    r8,1
  681aa7:	49 21 e8             	and    r8,rbp
  681aaa:	4f 8d 0c 48          	lea    r9,[r8+r9*2]
  681aae:	49 0f ce             	bswap  r14
  681ab1:	4d 89 f0             	mov    r8,r14
  681ab4:	49 c1 e8 04          	shr    r8,0x4
  681ab8:	4d 21 e0             	and    r8,r12
  681abb:	4d 21 e6             	and    r14,r12
  681abe:	49 c1 e6 04          	shl    r14,0x4
  681ac2:	4d 09 c6             	or     r14,r8
  681ac5:	4d 89 f0             	mov    r8,r14
  681ac8:	4d 21 e8             	and    r8,r13
  681acb:	49 c1 ee 02          	shr    r14,0x2
  681acf:	4d 21 ee             	and    r14,r13
  681ad2:	4f 8d 04 86          	lea    r8,[r14+r8*4]
  681ad6:	4d 89 c2             	mov    r10,r8
  681ad9:	49 21 ea             	and    r10,rbp
  681adc:	49 d1 e8             	shr    r8,1
  681adf:	49 21 e8             	and    r8,rbp
  681ae2:	4f 8d 3c 50          	lea    r15,[r8+r10*2]
  681ae6:	41 b8 b7 3e 46 24    	mov    r8d,0x24463eb7
  681aec:	eb 13                	jmp    681b01 <__cxa_finalize@plt-0xd3130f>
  681aee:	4d 89 f9             	mov    r9,r15
  681af1:	4d 0f a4 f1 3b       	shld   r9,r14,0x3b
  681af6:	4d 0f ac f7 05       	shrd   r15,r14,0x5
  681afb:	41 b8 51 9b f5 7f    	mov    r8d,0x7ff59b51
  681b01:	4d 89 ce             	mov    r14,r9
  681b04:	44 31 c2             	xor    edx,r8d
  681b07:	e9 ed fe ff ff       	jmp    6819f9 <__cxa_finalize@plt-0xd31417>
  681b0c:	41 b8 90 d5 16 78    	mov    r8d,0x7816d590
  681b12:	49 bf 5f 33 11 11 54 	movabs r15,0x34f74d541111335f
  681b19:	4d f7 34 
  681b1c:	49 be 3d cd 77 d6 df 	movabs r14,0x70c6c5dfd677cd3d
  681b23:	c5 c6 70 
  681b26:	eb dc                	jmp    681b04 <__cxa_finalize@plt-0xd3130c>
  681b28:	49 b8 e7 e4 22 a0 cc 	movabs r8,0x9a1a60cca022e4e7
  681b2f:	60 1a 9a 
  681b32:	4d 01 c7             	add    r15,r8
  681b35:	49 b8 86 68 aa be bb 	movabs r8,0x882999bbbeaa6886
  681b3c:	99 29 88 
  681b3f:	4d 11 c6             	adc    r14,r8
  681b42:	41 b8 64 84 14 51    	mov    r8d,0x51148464
  681b48:	eb ba                	jmp    681b04 <__cxa_finalize@plt-0xd3130c>
  681b4a:	41 b8 29 db 2f 23    	mov    r8d,0x232fdb29
  681b50:	e9 bc 5a 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  681b55:	ba 17 a3 14 36       	mov    edx,0x3614a317
  681b5a:	31 ff                	xor    edi,edi
  681b5c:	45 31 c0             	xor    r8d,r8d
  681b5f:	31 f6                	xor    esi,esi
  681b61:	49 89 f9             	mov    r9,rdi
  681b64:	49 0f c9             	bswap  r9
  681b67:	49 89 f2             	mov    r10,rsi
  681b6a:	49 0f ca             	bswap  r10
  681b6d:	81 fa 6a ab 5e 93    	cmp    edx,0x935eab6a
  681b73:	0f 84 f7 00 00 00    	je     681c70 <__cxa_finalize@plt-0xd311a0>
  681b79:	81 fa 42 e1 b7 a5    	cmp    edx,0xa5b7e142
  681b7f:	0f 84 08 01 00 00    	je     681c8d <__cxa_finalize@plt-0xd31183>
  681b85:	81 fa c0 bd 8e bc    	cmp    edx,0xbc8ebdc0
  681b8b:	0f 84 86 00 00 00    	je     681c17 <__cxa_finalize@plt-0xd311f9>
  681b91:	81 fa 49 81 aa f0    	cmp    edx,0xf0aa8149
  681b97:	0f 84 9c 00 00 00    	je     681c39 <__cxa_finalize@plt-0xd311d7>
  681b9d:	81 fa 78 85 dd f9    	cmp    edx,0xf9dd8578
  681ba3:	0f 84 14 01 00 00    	je     681cbd <__cxa_finalize@plt-0xd31153>
  681ba9:	81 fa a9 75 83 fb    	cmp    edx,0xfb8375a9
  681baf:	74 41                	je     681bf2 <__cxa_finalize@plt-0xd3121e>
  681bb1:	81 fa 17 a3 14 36    	cmp    edx,0x3614a317
  681bb7:	0f 84 97 00 00 00    	je     681c54 <__cxa_finalize@plt-0xd311bc>
  681bbd:	81 fa 1e 46 73 55    	cmp    edx,0x5573461e
  681bc3:	0f 84 ec 00 00 00    	je     681cb5 <__cxa_finalize@plt-0xd3115b>
  681bc9:	81 fa 2d 2a 8c 6d    	cmp    edx,0x6d8c2a2d
  681bcf:	0f 84 f0 00 00 00    	je     681cc5 <__cxa_finalize@plt-0xd3114b>
  681bd5:	81 fa 73 88 7f 76    	cmp    edx,0x767f8873
  681bdb:	0f 84 97 00 00 00    	je     681c78 <__cxa_finalize@plt-0xd31198>
  681be1:	81 fa 8c b9 b0 0d    	cmp    edx,0xdb0b98c
  681be7:	0f 85 c0 00 00 00    	jne    681cad <__cxa_finalize@plt-0xd31163>
  681bed:	e9 f7 00 00 00       	jmp    681ce9 <__cxa_finalize@plt-0xd31127>
  681bf2:	49 b8 82 b6 a8 01 ae 	movabs r8,0x6edd5eae01a8b682
  681bf9:	5e dd 6e 
  681bfc:	4c 31 c7             	xor    rdi,r8
  681bff:	49 b8 7d b9 93 01 9b 	movabs r8,0x3f168b9b0193b97d
  681c06:	8b 16 3f 
  681c09:	4c 31 c6             	xor    rsi,r8
  681c0c:	41 b8 84 5f 0f 96    	mov    r8d,0x960f5f84
  681c12:	e9 96 00 00 00       	jmp    681cad <__cxa_finalize@plt-0xd31163>
  681c17:	49 b8 7d c8 c6 92 c2 	movabs r8,0xb2299dc292c6c87d
  681c1e:	9d 29 b2 
  681c21:	4c 01 c7             	add    rdi,r8
  681c24:	49 b8 5e 1b 26 6a ed 	movabs r8,0x2b3542ed6a261b5e
  681c2b:	42 35 2b 
  681c2e:	4c 11 c6             	adc    rsi,r8
  681c31:	41 b8 b8 38 53 45    	mov    r8d,0x455338b8
  681c37:	eb 74                	jmp    681cad <__cxa_finalize@plt-0xd31163>
  681c39:	49 89 f9             	mov    r9,rdi
  681c3c:	49 0f a4 f1 1f       	shld   r9,rsi,0x1f
  681c41:	48 0f a4 fe 1f       	shld   rsi,rdi,0x1f
  681c46:	41 b8 23 2a f4 63    	mov    r8d,0x63f42a23
  681c4c:	49 89 f2             	mov    r10,rsi
  681c4f:	e9 87 00 00 00       	jmp    681cdb <__cxa_finalize@plt-0xd31135>
  681c54:	41 b8 d7 1e 9a 8a    	mov    r8d,0x8a9a1ed7
  681c5a:	49 ba 82 62 fc 80 e4 	movabs r10,0xc2da9ae480fc6282
  681c61:	9a da c2 
  681c64:	49 b9 c4 ea ad 87 38 	movabs r9,0x58208b3887adeac4
  681c6b:	8b 20 58 
  681c6e:	eb 6b                	jmp    681cdb <__cxa_finalize@plt-0xd31135>
  681c70:	41 b8 c3 de dd 68    	mov    r8d,0x68dddec3
  681c76:	eb 63                	jmp    681cdb <__cxa_finalize@plt-0xd31135>
  681c78:	49 89 f1             	mov    r9,rsi
  681c7b:	49 0f a4 f9 27       	shld   r9,rdi,0x27
  681c80:	48 0f a4 f7 27       	shld   rdi,rsi,0x27
  681c85:	41 b8 6d ce 0c 23    	mov    r8d,0x230cce6d
  681c8b:	eb 4b                	jmp    681cd8 <__cxa_finalize@plt-0xd31138>
  681c8d:	49 b8 7a 9d 70 b4 1a 	movabs r8,0x7e3c211ab4709d7a
  681c94:	21 3c 7e 
  681c97:	4c 01 c7             	add    rdi,r8
  681c9a:	49 b8 dc 41 fb fa e2 	movabs r8,0x286d37e2fafb41dc
  681ca1:	37 6d 28 
  681ca4:	4c 11 c6             	adc    rsi,r8
  681ca7:	41 b8 ce 58 07 a8    	mov    r8d,0xa80758ce
  681cad:	49 89 fa             	mov    r10,rdi
  681cb0:	49 89 f1             	mov    r9,rsi
  681cb3:	eb 26                	jmp    681cdb <__cxa_finalize@plt-0xd31135>
  681cb5:	41 b8 5c a7 c4 f0    	mov    r8d,0xf0c4a75c
  681cbb:	eb 1e                	jmp    681cdb <__cxa_finalize@plt-0xd31135>
  681cbd:	41 b8 31 04 77 09    	mov    r8d,0x9770431
  681cc3:	eb 16                	jmp    681cdb <__cxa_finalize@plt-0xd31135>
  681cc5:	49 89 f1             	mov    r9,rsi
  681cc8:	49 0f a4 f9 18       	shld   r9,rdi,0x18
  681ccd:	48 0f a4 f7 18       	shld   rdi,rsi,0x18
  681cd2:	41 b8 5e a2 f3 1b    	mov    r8d,0x1bf3a25e
  681cd8:	49 89 fa             	mov    r10,rdi
  681cdb:	44 31 c2             	xor    edx,r8d
  681cde:	4c 89 d7             	mov    rdi,r10
  681ce1:	4c 89 ce             	mov    rsi,r9
  681ce4:	e9 78 fe ff ff       	jmp    681b61 <__cxa_finalize@plt-0xd312af>
  681ce9:	ba ce 2d 45 3a       	mov    edx,0x3a452dce
  681cee:	45 31 ff             	xor    r15d,r15d
  681cf1:	45 31 c0             	xor    r8d,r8d
  681cf4:	45 31 f6             	xor    r14d,r14d
  681cf7:	81 fa 5a 79 55 86    	cmp    edx,0x8655795a
  681cfd:	0f 84 a1 00 00 00    	je     681da4 <__cxa_finalize@plt-0xd3106c>
  681d03:	4d 89 f9             	mov    r9,r15
  681d06:	49 0f c9             	bswap  r9
  681d09:	4d 89 f2             	mov    r10,r14
  681d0c:	49 0f ca             	bswap  r10
  681d0f:	81 fa 33 aa 71 cb    	cmp    edx,0xcb71aa33
  681d15:	0f 84 f1 00 00 00    	je     681e0c <__cxa_finalize@plt-0xd31004>
  681d1b:	81 fa 1b 81 d0 cd    	cmp    edx,0xcdd0811b
  681d21:	0f 84 cd 00 00 00    	je     681df4 <__cxa_finalize@plt-0xd3101c>
  681d27:	81 fa ac 7a e5 fd    	cmp    edx,0xfde57aac
  681d2d:	74 29                	je     681d58 <__cxa_finalize@plt-0xd310b8>
  681d2f:	81 fa c9 39 54 04    	cmp    edx,0x45439c9
  681d35:	74 4b                	je     681d82 <__cxa_finalize@plt-0xd3108e>
  681d37:	81 fa 24 07 59 33    	cmp    edx,0x33590724
  681d3d:	74 21                	je     681d60 <__cxa_finalize@plt-0xd310b0>
  681d3f:	81 fa ce 2d 45 3a    	cmp    edx,0x3a452dce
  681d45:	0f 84 8d 00 00 00    	je     681dd8 <__cxa_finalize@plt-0xd31038>
  681d4b:	81 fa 4d 1d b7 a3    	cmp    edx,0xa3b71d4d
  681d51:	75 71                	jne    681dc4 <__cxa_finalize@plt-0xd3104c>
  681d53:	e9 bc 00 00 00       	jmp    681e14 <__cxa_finalize@plt-0xd30ffc>
  681d58:	41 b8 b7 fb 35 30    	mov    r8d,0x3035fbb7
  681d5e:	eb 6a                	jmp    681dca <__cxa_finalize@plt-0xd31046>
  681d60:	49 b8 a6 1b 8e a7 da 	movabs r8,0x244cd3daa78e1ba6
  681d67:	d3 4c 24 
  681d6a:	4d 01 c7             	add    r15,r8
  681d6d:	49 b8 6c 5e 7c 2f 88 	movabs r8,0x9343aa882f7c5e6c
  681d74:	aa 43 93 
  681d77:	4d 11 c6             	adc    r14,r8
  681d7a:	41 b8 17 ad 28 f8    	mov    r8d,0xf828ad17
  681d80:	eb 42                	jmp    681dc4 <__cxa_finalize@plt-0xd3104c>
  681d82:	49 b8 8e e7 75 45 bb 	movabs r8,0xaef57abb4575e78e
  681d89:	7a f5 ae 
  681d8c:	4d 01 c7             	add    r15,r8
  681d8f:	49 b8 48 26 0c 29 a6 	movabs r8,0xe8d3a7a6290c2648
  681d96:	a7 d3 e8 
  681d99:	4d 11 c6             	adc    r14,r8
  681d9c:	41 b8 93 40 01 82    	mov    r8d,0x82014093
  681da2:	eb 20                	jmp    681dc4 <__cxa_finalize@plt-0xd3104c>
  681da4:	49 b8 5e ea f5 c9 79 	movabs r8,0xcce48879c9f5ea5e
  681dab:	88 e4 cc 
  681dae:	4d 01 c7             	add    r15,r8
  681db1:	49 b8 c9 58 31 8a 03 	movabs r8,0x2d32a6038a3158c9
  681db8:	a6 32 2d 
  681dbb:	4d 11 c6             	adc    r14,r8
  681dbe:	41 b8 7e 7e 0c b5    	mov    r8d,0xb50c7e7e
  681dc4:	4d 89 fa             	mov    r10,r15
  681dc7:	4d 89 f1             	mov    r9,r14
  681dca:	44 31 c2             	xor    edx,r8d
  681dcd:	4d 89 d7             	mov    r15,r10
  681dd0:	4d 89 ce             	mov    r14,r9
  681dd3:	e9 1f ff ff ff       	jmp    681cf7 <__cxa_finalize@plt-0xd31119>
  681dd8:	41 b8 07 14 11 3e    	mov    r8d,0x3e111407
  681dde:	49 ba 6e 12 06 49 f0 	movabs r10,0x5f5928f04906126e
  681de5:	28 59 5f 
  681de8:	49 b9 81 22 46 1d ce 	movabs r9,0x56c607ce1d462281
  681def:	07 c6 56 
  681df2:	eb d6                	jmp    681dca <__cxa_finalize@plt-0xd31046>
  681df4:	4d 89 f9             	mov    r9,r15
  681df7:	4d 0f a4 f1 09       	shld   r9,r14,0x9
  681dfc:	4d 0f a4 fe 09       	shld   r14,r15,0x9
  681e01:	41 b8 56 9c 67 6e    	mov    r8d,0x6e679c56
  681e07:	4d 89 f2             	mov    r10,r14
  681e0a:	eb be                	jmp    681dca <__cxa_finalize@plt-0xd31046>
  681e0c:	41 b8 9f d0 94 36    	mov    r8d,0x3694d09f
  681e12:	eb b6                	jmp    681dca <__cxa_finalize@plt-0xd31046>
  681e14:	41 b8 b5 9e 9d 63    	mov    r8d,0x639d9eb5
  681e1a:	e9 f2 57 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  681e1f:	ba 9e 8e f8 c6       	mov    edx,0xc6f88e9e
  681e24:	31 ff                	xor    edi,edi
  681e26:	45 31 d2             	xor    r10d,r10d
  681e29:	31 f6                	xor    esi,esi
  681e2b:	81 fa 94 23 8f 91    	cmp    edx,0x918f2394
  681e31:	0f 84 14 01 00 00    	je     681f4b <__cxa_finalize@plt-0xd30ec5>
  681e37:	81 fa 57 6b 97 9a    	cmp    edx,0x9a976b57
  681e3d:	0f 84 9d 01 00 00    	je     681fe0 <__cxa_finalize@plt-0xd30e30>
  681e43:	49 89 f8             	mov    r8,rdi
  681e46:	49 0f c8             	bswap  r8
  681e49:	49 89 f1             	mov    r9,rsi
  681e4c:	49 0f c9             	bswap  r9
  681e4f:	81 fa 75 df 5e b3    	cmp    edx,0xb35edf75
  681e55:	0f 84 7d 01 00 00    	je     681fd8 <__cxa_finalize@plt-0xd30e38>
  681e5b:	81 fa 29 30 1a b5    	cmp    edx,0xb51a3029
  681e61:	74 29                	je     681e8c <__cxa_finalize@plt-0xd30f84>
  681e63:	81 fa 5e 8a 61 bf    	cmp    edx,0xbf618a5e
  681e69:	74 6b                	je     681ed6 <__cxa_finalize@plt-0xd30f3a>
  681e6b:	81 fa 9e 8e f8 c6    	cmp    edx,0xc6f88e9e
  681e71:	74 44                	je     681eb7 <__cxa_finalize@plt-0xd30f59>
  681e73:	81 fa 74 ab ec 08    	cmp    edx,0x8ecab74
  681e79:	0f 84 e7 00 00 00    	je     681f66 <__cxa_finalize@plt-0xd30eaa>
  681e7f:	81 fa e6 06 2b ce    	cmp    edx,0xce2b06e6
  681e85:	75 25                	jne    681eac <__cxa_finalize@plt-0xd30f64>
  681e87:	e9 d8 01 00 00       	jmp    682064 <__cxa_finalize@plt-0xd30dac>
  681e8c:	49 b8 f9 fc cb c2 5f 	movabs r8,0x1b8e3c5fc2cbfcf9
  681e93:	3c 8e 1b 
  681e96:	4c 31 c7             	xor    rdi,r8
  681e99:	49 b8 ce 2c 24 ac 09 	movabs r8,0xad4cf709ac242cce
  681ea0:	f7 4c ad 
  681ea3:	4c 31 c6             	xor    rsi,r8
  681ea6:	41 ba 5c ef 44 06    	mov    r10d,0x644ef5c
  681eac:	49 89 f9             	mov    r9,rdi
  681eaf:	49 89 f0             	mov    r8,rsi
  681eb2:	e9 9f 01 00 00       	jmp    682056 <__cxa_finalize@plt-0xd30dba>
  681eb7:	41 ba 0a ad 77 57    	mov    r10d,0x5777ad0a
  681ebd:	49 b9 fd a1 e9 9f cf 	movabs r9,0x14c632cf9fe9a1fd
  681ec4:	32 c6 14 
  681ec7:	49 b8 1b 9f 9d b2 2d 	movabs r8,0x1e38ec2db29d9f1b
  681ece:	ec 38 1e 
  681ed1:	e9 80 01 00 00       	jmp    682056 <__cxa_finalize@plt-0xd30dba>
  681ed6:	4c 89 c6             	mov    rsi,r8
  681ed9:	48 c1 ee 04          	shr    rsi,0x4
  681edd:	4c 21 e6             	and    rsi,r12
  681ee0:	4d 21 e0             	and    r8,r12
  681ee3:	49 c1 e0 04          	shl    r8,0x4
  681ee7:	49 09 f0             	or     r8,rsi
  681eea:	4c 89 c6             	mov    rsi,r8
  681eed:	4c 21 ee             	and    rsi,r13
  681ef0:	49 c1 e8 02          	shr    r8,0x2
  681ef4:	4d 21 e8             	and    r8,r13
  681ef7:	49 8d 34 b0          	lea    rsi,[r8+rsi*4]
  681efb:	48 89 f7             	mov    rdi,rsi
  681efe:	48 21 ef             	and    rdi,rbp
  681f01:	48 d1 ee             	shr    rsi,1
  681f04:	48 21 ee             	and    rsi,rbp
  681f07:	4c 8d 04 7e          	lea    r8,[rsi+rdi*2]
  681f0b:	4c 89 ce             	mov    rsi,r9
  681f0e:	48 c1 ee 04          	shr    rsi,0x4
  681f12:	4c 21 e6             	and    rsi,r12
  681f15:	4d 21 e1             	and    r9,r12
  681f18:	49 c1 e1 04          	shl    r9,0x4
  681f1c:	49 09 f1             	or     r9,rsi
  681f1f:	4c 89 ce             	mov    rsi,r9
  681f22:	4c 21 ee             	and    rsi,r13
  681f25:	49 c1 e9 02          	shr    r9,0x2
  681f29:	4d 21 e9             	and    r9,r13
  681f2c:	49 8d 34 b1          	lea    rsi,[r9+rsi*4]
  681f30:	48 89 f7             	mov    rdi,rsi
  681f33:	48 21 ef             	and    rdi,rbp
  681f36:	48 d1 ee             	shr    rsi,1
  681f39:	48 21 ee             	and    rsi,rbp
  681f3c:	4c 8d 0c 7e          	lea    r9,[rsi+rdi*2]
  681f40:	41 ba b8 8c 4a 71    	mov    r10d,0x714a8cb8
  681f46:	e9 0b 01 00 00       	jmp    682056 <__cxa_finalize@plt-0xd30dba>
  681f4b:	49 89 f8             	mov    r8,rdi
  681f4e:	49 0f a4 f0 19       	shld   r8,rsi,0x19
  681f53:	48 0f a4 fe 19       	shld   rsi,rdi,0x19
  681f58:	41 ba c3 48 18 0b    	mov    r10d,0xb1848c3
  681f5e:	49 89 f1             	mov    r9,rsi
  681f61:	e9 f0 00 00 00       	jmp    682056 <__cxa_finalize@plt-0xd30dba>
  681f66:	4c 89 c6             	mov    rsi,r8
  681f69:	48 c1 ee 04          	shr    rsi,0x4
  681f6d:	4c 21 e6             	and    rsi,r12
  681f70:	4d 21 e0             	and    r8,r12
  681f73:	49 c1 e0 04          	shl    r8,0x4
  681f77:	49 09 f0             	or     r8,rsi
  681f7a:	4c 89 c6             	mov    rsi,r8
  681f7d:	4c 21 ee             	and    rsi,r13
  681f80:	49 c1 e8 02          	shr    r8,0x2
  681f84:	4d 21 e8             	and    r8,r13
  681f87:	49 8d 34 b0          	lea    rsi,[r8+rsi*4]
  681f8b:	48 89 f7             	mov    rdi,rsi
  681f8e:	48 21 ef             	and    rdi,rbp
  681f91:	48 d1 ee             	shr    rsi,1
  681f94:	48 21 ee             	and    rsi,rbp
  681f97:	4c 8d 04 7e          	lea    r8,[rsi+rdi*2]
  681f9b:	4c 89 ce             	mov    rsi,r9
  681f9e:	48 c1 ee 04          	shr    rsi,0x4
  681fa2:	4c 21 e6             	and    rsi,r12
  681fa5:	4d 21 e1             	and    r9,r12
  681fa8:	49 c1 e1 04          	shl    r9,0x4
  681fac:	49 09 f1             	or     r9,rsi
  681faf:	4c 89 ce             	mov    rsi,r9
  681fb2:	4c 21 ee             	and    rsi,r13
  681fb5:	49 c1 e9 02          	shr    r9,0x2
  681fb9:	4d 21 e9             	and    r9,r13
  681fbc:	49 8d 34 b1          	lea    rsi,[r9+rsi*4]
  681fc0:	48 89 f7             	mov    rdi,rsi
  681fc3:	48 21 ef             	and    rdi,rbp
  681fc6:	48 d1 ee             	shr    rsi,1
  681fc9:	48 21 ee             	and    rsi,rbp
  681fcc:	4c 8d 0c 7e          	lea    r9,[rsi+rdi*2]
  681fd0:	41 ba 2a 21 8d b7    	mov    r10d,0xb78d212a
  681fd6:	eb 7e                	jmp    682056 <__cxa_finalize@plt-0xd30dba>
  681fd8:	41 ba 01 74 b2 bb    	mov    r10d,0xbbb27401
  681fde:	eb 76                	jmp    682056 <__cxa_finalize@plt-0xd30dba>
  681fe0:	48 0f cf             	bswap  rdi
  681fe3:	49 89 f8             	mov    r8,rdi
  681fe6:	49 c1 e8 04          	shr    r8,0x4
  681fea:	4d 21 e0             	and    r8,r12
  681fed:	4c 21 e7             	and    rdi,r12
  681ff0:	48 c1 e7 04          	shl    rdi,0x4
  681ff4:	4c 09 c7             	or     rdi,r8
  681ff7:	49 89 f8             	mov    r8,rdi
  681ffa:	4d 21 e8             	and    r8,r13
  681ffd:	48 c1 ef 02          	shr    rdi,0x2
  682001:	4c 21 ef             	and    rdi,r13
  682004:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  682008:	49 89 f8             	mov    r8,rdi
  68200b:	49 21 e8             	and    r8,rbp
  68200e:	48 d1 ef             	shr    rdi,1
  682011:	48 21 ef             	and    rdi,rbp
  682014:	4e 8d 04 47          	lea    r8,[rdi+r8*2]
  682018:	48 0f ce             	bswap  rsi
  68201b:	48 89 f7             	mov    rdi,rsi
  68201e:	48 c1 ef 04          	shr    rdi,0x4
  682022:	4c 21 e7             	and    rdi,r12
  682025:	4c 21 e6             	and    rsi,r12
  682028:	48 c1 e6 04          	shl    rsi,0x4
  68202c:	48 09 fe             	or     rsi,rdi
  68202f:	48 89 f7             	mov    rdi,rsi
  682032:	4c 21 ef             	and    rdi,r13
  682035:	48 c1 ee 02          	shr    rsi,0x2
  682039:	4c 21 ee             	and    rsi,r13
  68203c:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  682040:	48 89 f7             	mov    rdi,rsi
  682043:	48 21 ef             	and    rdi,rbp
  682046:	48 d1 ee             	shr    rsi,1
  682049:	48 21 ee             	and    rsi,rbp
  68204c:	4c 8d 0c 7e          	lea    r9,[rsi+rdi*2]
  682050:	41 ba 7e 5b 8d 2f    	mov    r10d,0x2f8d5b7e
  682056:	44 31 d2             	xor    edx,r10d
  682059:	4c 89 cf             	mov    rdi,r9
  68205c:	4c 89 c6             	mov    rsi,r8
  68205f:	e9 c7 fd ff ff       	jmp    681e2b <__cxa_finalize@plt-0xd30fe5>
  682064:	ba 08 28 ec ec       	mov    edx,0xecec2808
  682069:	45 31 ff             	xor    r15d,r15d
  68206c:	45 31 d2             	xor    r10d,r10d
  68206f:	45 31 f6             	xor    r14d,r14d
  682072:	81 fa 69 30 25 c0    	cmp    edx,0xc0253069
  682078:	0f 84 b8 00 00 00    	je     682136 <__cxa_finalize@plt-0xd30cda>
  68207e:	81 fa ed 84 06 c4    	cmp    edx,0xc40684ed
  682084:	0f 84 4b 01 00 00    	je     6821d5 <__cxa_finalize@plt-0xd30c3b>
  68208a:	4d 89 f8             	mov    r8,r15
  68208d:	49 0f c8             	bswap  r8
  682090:	4d 89 f1             	mov    r9,r14
  682093:	49 0f c9             	bswap  r9
  682096:	81 fa bd a1 64 d2    	cmp    edx,0xd264a1bd
  68209c:	0f 84 2b 01 00 00    	je     6821cd <__cxa_finalize@plt-0xd30c43>
  6820a2:	81 fa 08 28 ec ec    	cmp    edx,0xecec2808
  6820a8:	74 2d                	je     6820d7 <__cxa_finalize@plt-0xd30d39>
  6820aa:	81 fa 39 10 6e 0e    	cmp    edx,0xe6e1039
  6820b0:	74 5f                	je     682111 <__cxa_finalize@plt-0xd30cff>
  6820b2:	81 fa 53 de 98 28    	cmp    edx,0x2898de53
  6820b8:	74 3c                	je     6820f6 <__cxa_finalize@plt-0xd30d1a>
  6820ba:	81 fa c1 50 eb 5e    	cmp    edx,0x5eeb50c1
  6820c0:	0f 84 95 00 00 00    	je     68215b <__cxa_finalize@plt-0xd30cb5>
  6820c6:	81 fa 31 53 47 ee    	cmp    edx,0xee475331
  6820cc:	0f 85 23 01 00 00    	jne    6821f5 <__cxa_finalize@plt-0xd30c1b>
  6820d2:	e9 32 01 00 00       	jmp    682209 <__cxa_finalize@plt-0xd30c07>
  6820d7:	41 ba 61 18 c9 2c    	mov    r10d,0x2cc91861
  6820dd:	49 b9 0b 4f f6 df 1f 	movabs r9,0xc837521fdff64f0b
  6820e4:	52 37 c8 
  6820e7:	49 b8 96 d8 ec b9 63 	movabs r8,0x31c35663b9ecd896
  6820ee:	56 c3 31 
  6820f1:	e9 05 01 00 00       	jmp    6821fb <__cxa_finalize@plt-0xd30c15>
  6820f6:	4d 89 f0             	mov    r8,r14
  6820f9:	4d 0f a4 f8 0d       	shld   r8,r15,0xd
  6820fe:	4d 0f a4 f7 0d       	shld   r15,r14,0xd
  682103:	41 ba be 5a 9e ec    	mov    r10d,0xec9e5abe
  682109:	4d 89 f9             	mov    r9,r15
  68210c:	e9 ea 00 00 00       	jmp    6821fb <__cxa_finalize@plt-0xd30c15>
  682111:	49 b8 21 76 47 88 cb 	movabs r8,0xe78fddcb88477621
  682118:	dd 8f e7 
  68211b:	4d 01 c7             	add    r15,r8
  68211e:	49 b8 68 f3 8a 68 60 	movabs r8,0x3606da60688af368
  682125:	da 06 36 
  682128:	4d 11 c6             	adc    r14,r8
  68212b:	41 ba 6a ce f6 26    	mov    r10d,0x26f6ce6a
  682131:	e9 bf 00 00 00       	jmp    6821f5 <__cxa_finalize@plt-0xd30c1b>
  682136:	49 b8 11 94 63 53 6c 	movabs r8,0x8edc986c53639411
  68213d:	98 dc 8e 
  682140:	4d 31 c7             	xor    r15,r8
  682143:	49 b8 cd a2 fd b0 ba 	movabs r8,0xed430bab0fda2cd
  68214a:	30 d4 0e 
  68214d:	4d 31 c6             	xor    r14,r8
  682150:	41 ba d4 91 41 12    	mov    r10d,0x124191d4
  682156:	e9 9a 00 00 00       	jmp    6821f5 <__cxa_finalize@plt-0xd30c1b>
  68215b:	4d 89 c2             	mov    r10,r8
  68215e:	49 c1 ea 04          	shr    r10,0x4
  682162:	4d 21 e2             	and    r10,r12
  682165:	4d 21 e0             	and    r8,r12
  682168:	49 c1 e0 04          	shl    r8,0x4
  68216c:	4d 09 d0             	or     r8,r10
  68216f:	4d 89 c2             	mov    r10,r8
  682172:	4d 21 ea             	and    r10,r13
  682175:	49 c1 e8 02          	shr    r8,0x2
  682179:	4d 21 e8             	and    r8,r13
  68217c:	4f 8d 04 90          	lea    r8,[r8+r10*4]
  682180:	4d 89 c2             	mov    r10,r8
  682183:	49 21 ea             	and    r10,rbp
  682186:	49 d1 e8             	shr    r8,1
  682189:	49 21 e8             	and    r8,rbp
  68218c:	4f 8d 04 50          	lea    r8,[r8+r10*2]
  682190:	4d 89 ca             	mov    r10,r9
  682193:	49 c1 ea 04          	shr    r10,0x4
  682197:	4d 21 e2             	and    r10,r12
  68219a:	4d 21 e1             	and    r9,r12
  68219d:	49 c1 e1 04          	shl    r9,0x4
  6821a1:	4d 09 d1             	or     r9,r10
  6821a4:	4d 89 ca             	mov    r10,r9
  6821a7:	4d 21 ea             	and    r10,r13
  6821aa:	49 c1 e9 02          	shr    r9,0x2
  6821ae:	4d 21 e9             	and    r9,r13
  6821b1:	4f 8d 0c 91          	lea    r9,[r9+r10*4]
  6821b5:	4d 89 ca             	mov    r10,r9
  6821b8:	49 21 ea             	and    r10,rbp
  6821bb:	49 d1 e9             	shr    r9,1
  6821be:	49 21 e9             	and    r9,rbp
  6821c1:	4f 8d 0c 51          	lea    r9,[r9+r10*2]
  6821c5:	41 ba f0 03 ac b0    	mov    r10d,0xb0ac03f0
  6821cb:	eb 2e                	jmp    6821fb <__cxa_finalize@plt-0xd30c15>
  6821cd:	41 ba 84 b1 0a dc    	mov    r10d,0xdc0ab184
  6821d3:	eb 26                	jmp    6821fb <__cxa_finalize@plt-0xd30c15>
  6821d5:	49 b8 e4 f5 53 4e ca 	movabs r8,0xc22553ca4e53f5e4
  6821dc:	53 25 c2 
  6821df:	4d 01 c7             	add    r15,r8
  6821e2:	49 b8 96 17 2a 44 75 	movabs r8,0xb2026475442a1796
  6821e9:	64 02 b2 
  6821ec:	4d 11 c6             	adc    r14,r8
  6821ef:	41 ba 2c d4 ed 9a    	mov    r10d,0x9aedd42c
  6821f5:	4d 89 f9             	mov    r9,r15
  6821f8:	4d 89 f0             	mov    r8,r14
  6821fb:	44 31 d2             	xor    edx,r10d
  6821fe:	4d 89 cf             	mov    r15,r9
  682201:	4d 89 c6             	mov    r14,r8
  682204:	e9 69 fe ff ff       	jmp    682072 <__cxa_finalize@plt-0xd30d9e>
  682209:	41 b8 8d 18 09 14    	mov    r8d,0x1409188d
  68220f:	e9 fd 53 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  682214:	ba d2 f2 eb 33       	mov    edx,0x33ebf2d2
  682219:	31 ff                	xor    edi,edi
  68221b:	45 31 c9             	xor    r9d,r9d
  68221e:	31 f6                	xor    esi,esi
  682220:	81 fa 55 31 99 80    	cmp    edx,0x80993155
  682226:	0f 84 b2 02 00 00    	je     6824de <__cxa_finalize@plt-0xd30932>
  68222c:	81 fa 1c 92 5d 88    	cmp    edx,0x885d921c
  682232:	0f 84 1e 03 00 00    	je     682556 <__cxa_finalize@plt-0xd308ba>
  682238:	81 fa e5 a6 53 8e    	cmp    edx,0x8e53a6e5
  68223e:	0f 84 a9 00 00 00    	je     6822ed <__cxa_finalize@plt-0xd30b23>
  682244:	49 89 f8             	mov    r8,rdi
  682247:	49 0f c8             	bswap  r8
  68224a:	49 89 f2             	mov    r10,rsi
  68224d:	49 0f ca             	bswap  r10
  682250:	81 fa 68 50 31 af    	cmp    edx,0xaf315068
  682256:	0f 84 ad 01 00 00    	je     682409 <__cxa_finalize@plt-0xd30a07>
  68225c:	81 fa a9 fc 37 da    	cmp    edx,0xda37fca9
  682262:	0f 84 6b 02 00 00    	je     6824d3 <__cxa_finalize@plt-0xd3093d>
  682268:	81 fa 74 12 07 2f    	cmp    edx,0x2f071274
  68226e:	0f 84 91 00 00 00    	je     682305 <__cxa_finalize@plt-0xd30b0b>
  682274:	81 fa 1a db a0 31    	cmp    edx,0x31a0db1a
  68227a:	0f 84 9d 00 00 00    	je     68231d <__cxa_finalize@plt-0xd30af3>
  682280:	81 fa d2 f2 eb 33    	cmp    edx,0x33ebf2d2
  682286:	0f 84 88 01 00 00    	je     682414 <__cxa_finalize@plt-0xd309fc>
  68228c:	81 fa 94 20 5d 4a    	cmp    edx,0x4a5d2094
  682292:	0f 84 aa 00 00 00    	je     682342 <__cxa_finalize@plt-0xd30ace>
  682298:	81 fa ee dc 28 4f    	cmp    edx,0x4f28dcee
  68229e:	0f 84 4a 01 00 00    	je     6823ee <__cxa_finalize@plt-0xd30a22>
  6822a4:	81 fa b0 33 de 61    	cmp    edx,0x61de33b0
  6822aa:	0f 84 23 01 00 00    	je     6823d3 <__cxa_finalize@plt-0xd30a3d>
  6822b0:	81 fa 49 78 e0 69    	cmp    edx,0x69e07849
  6822b6:	0f 84 77 01 00 00    	je     682433 <__cxa_finalize@plt-0xd309dd>
  6822bc:	81 fa 3c cb f4 6c    	cmp    edx,0x6cf4cb3c
  6822c2:	0f 84 90 01 00 00    	je     682458 <__cxa_finalize@plt-0xd309b8>
  6822c8:	81 fa a4 b9 a3 70    	cmp    edx,0x70a3b9a4
  6822ce:	74 7d                	je     68234d <__cxa_finalize@plt-0xd30ac3>
  6822d0:	81 fa 18 81 b0 77    	cmp    edx,0x77b08118
  6822d6:	0f 84 ec 00 00 00    	je     6823c8 <__cxa_finalize@plt-0xd30a48>
  6822dc:	81 fa ec fc aa b9    	cmp    edx,0xb9aafcec
  6822e2:	0f 85 8e 02 00 00    	jne    682576 <__cxa_finalize@plt-0xd3089a>
  6822e8:	e9 9d 02 00 00       	jmp    68258a <__cxa_finalize@plt-0xd30886>
  6822ed:	49 89 f0             	mov    r8,rsi
  6822f0:	49 0f a4 f8 0d       	shld   r8,rdi,0xd
  6822f5:	48 0f a4 f7 0d       	shld   rdi,rsi,0xd
  6822fa:	41 b9 ac de b3 e7    	mov    r9d,0xe7b3deac
  682300:	e9 e1 00 00 00       	jmp    6823e6 <__cxa_finalize@plt-0xd30a2a>
  682305:	49 89 f8             	mov    r8,rdi
  682308:	49 0f a4 f0 37       	shld   r8,rsi,0x37
  68230d:	48 0f a4 fe 37       	shld   rsi,rdi,0x37
  682312:	41 b9 dd ee 30 f5    	mov    r9d,0xf530eedd
  682318:	e9 e4 00 00 00       	jmp    682401 <__cxa_finalize@plt-0xd30a0f>
  68231d:	49 b8 d6 da db 95 b8 	movabs r8,0x921a1b895dbdad6
  682324:	a1 21 09 
  682327:	4c 01 c7             	add    rdi,r8
  68232a:	49 b8 53 c6 d2 11 cc 	movabs r8,0x9c12d5cc11d2c653
  682331:	d5 12 9c 
  682334:	4c 11 c6             	adc    rsi,r8
  682337:	41 b9 06 49 fd b9    	mov    r9d,0xb9fd4906
  68233d:	e9 34 02 00 00       	jmp    682576 <__cxa_finalize@plt-0xd3089a>
  682342:	41 b9 e0 32 5a 65    	mov    r9d,0x655a32e0
  682348:	e9 2f 02 00 00       	jmp    68257c <__cxa_finalize@plt-0xd30894>
  68234d:	48 0f cf             	bswap  rdi
  682350:	49 89 f8             	mov    r8,rdi
  682353:	49 c1 e8 04          	shr    r8,0x4
  682357:	4d 21 e0             	and    r8,r12
  68235a:	4c 21 e7             	and    rdi,r12
  68235d:	48 c1 e7 04          	shl    rdi,0x4
  682361:	4c 09 c7             	or     rdi,r8
  682364:	49 89 f8             	mov    r8,rdi
  682367:	4d 21 e8             	and    r8,r13
  68236a:	48 c1 ef 02          	shr    rdi,0x2
  68236e:	4c 21 ef             	and    rdi,r13
  682371:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  682375:	49 89 f8             	mov    r8,rdi
  682378:	49 21 e8             	and    r8,rbp
  68237b:	48 d1 ef             	shr    rdi,1
  68237e:	48 21 ef             	and    rdi,rbp
  682381:	4e 8d 04 47          	lea    r8,[rdi+r8*2]
  682385:	48 0f ce             	bswap  rsi
  682388:	48 89 f7             	mov    rdi,rsi
  68238b:	48 c1 ef 04          	shr    rdi,0x4
  68238f:	4c 21 e7             	and    rdi,r12
  682392:	4c 21 e6             	and    rsi,r12
  682395:	48 c1 e6 04          	shl    rsi,0x4
  682399:	48 09 fe             	or     rsi,rdi
  68239c:	48 89 f7             	mov    rdi,rsi
  68239f:	4c 21 ef             	and    rdi,r13
  6823a2:	48 c1 ee 02          	shr    rsi,0x2
  6823a6:	4c 21 ee             	and    rsi,r13
  6823a9:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  6823ad:	48 89 f7             	mov    rdi,rsi
  6823b0:	48 21 ef             	and    rdi,rbp
  6823b3:	48 d1 ee             	shr    rsi,1
  6823b6:	48 21 ee             	and    rsi,rbp
  6823b9:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  6823bd:	41 b9 be 62 03 41    	mov    r9d,0x410362be
  6823c3:	e9 b4 01 00 00       	jmp    68257c <__cxa_finalize@plt-0xd30894>
  6823c8:	41 b9 f6 5d 98 38    	mov    r9d,0x38985df6
  6823ce:	e9 a9 01 00 00       	jmp    68257c <__cxa_finalize@plt-0xd30894>
  6823d3:	49 89 f0             	mov    r8,rsi
  6823d6:	49 0f a4 f8 2d       	shld   r8,rdi,0x2d
  6823db:	48 0f a4 f7 2d       	shld   rdi,rsi,0x2d
  6823e0:	41 b9 24 13 83 2b    	mov    r9d,0x2b831324
  6823e6:	49 89 fa             	mov    r10,rdi
  6823e9:	e9 8e 01 00 00       	jmp    68257c <__cxa_finalize@plt-0xd30894>
  6823ee:	49 89 f8             	mov    r8,rdi
  6823f1:	49 0f a4 f0 1e       	shld   r8,rsi,0x1e
  6823f6:	48 0f a4 fe 1e       	shld   rsi,rdi,0x1e
  6823fb:	41 b9 86 8c 19 e0    	mov    r9d,0xe0198c86
  682401:	49 89 f2             	mov    r10,rsi
  682404:	e9 73 01 00 00       	jmp    68257c <__cxa_finalize@plt-0xd30894>
  682409:	41 b9 54 9b c5 c3    	mov    r9d,0xc3c59b54
  68240f:	e9 68 01 00 00       	jmp    68257c <__cxa_finalize@plt-0xd30894>
  682414:	41 b9 ca 73 5b 44    	mov    r9d,0x445b73ca
  68241a:	49 ba 73 c5 e0 b0 82 	movabs r10,0x3de95a82b0e0c573
  682421:	5a e9 3d 
  682424:	49 b8 e4 6b 76 d7 3c 	movabs r8,0x78b1bd3cd7766be4
  68242b:	bd b1 78 
  68242e:	e9 49 01 00 00       	jmp    68257c <__cxa_finalize@plt-0xd30894>
  682433:	49 b8 12 2d e3 58 91 	movabs r8,0xbb9dd49158e32d12
  68243a:	d4 9d bb 
  68243d:	4c 31 c7             	xor    rdi,r8
  682440:	49 b8 b8 1e 55 ef 3f 	movabs r8,0xc04d23fef551eb8
  682447:	d2 04 0c 
  68244a:	4c 31 c6             	xor    rsi,r8
  68244d:	41 b9 1c 49 79 e9    	mov    r9d,0xe979491c
  682453:	e9 1e 01 00 00       	jmp    682576 <__cxa_finalize@plt-0xd3089a>
  682458:	48 0f cf             	bswap  rdi
  68245b:	49 89 f8             	mov    r8,rdi
  68245e:	49 c1 e8 04          	shr    r8,0x4
  682462:	4d 21 e0             	and    r8,r12
  682465:	4c 21 e7             	and    rdi,r12
  682468:	48 c1 e7 04          	shl    rdi,0x4
  68246c:	4c 09 c7             	or     rdi,r8
  68246f:	49 89 f8             	mov    r8,rdi
  682472:	4d 21 e8             	and    r8,r13
  682475:	48 c1 ef 02          	shr    rdi,0x2
  682479:	4c 21 ef             	and    rdi,r13
  68247c:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  682480:	49 89 f8             	mov    r8,rdi
  682483:	49 21 e8             	and    r8,rbp
  682486:	48 d1 ef             	shr    rdi,1
  682489:	48 21 ef             	and    rdi,rbp
  68248c:	4e 8d 04 47          	lea    r8,[rdi+r8*2]
  682490:	48 0f ce             	bswap  rsi
  682493:	48 89 f7             	mov    rdi,rsi
  682496:	48 c1 ef 04          	shr    rdi,0x4
  68249a:	4c 21 e7             	and    rdi,r12
  68249d:	4c 21 e6             	and    rsi,r12
  6824a0:	48 c1 e6 04          	shl    rsi,0x4
  6824a4:	48 09 fe             	or     rsi,rdi
  6824a7:	48 89 f7             	mov    rdi,rsi
  6824aa:	4c 21 ef             	and    rdi,r13
  6824ad:	48 c1 ee 02          	shr    rsi,0x2
  6824b1:	4c 21 ee             	and    rsi,r13
  6824b4:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  6824b8:	48 89 f7             	mov    rdi,rsi
  6824bb:	48 21 ef             	and    rdi,rbp
  6824be:	48 d1 ee             	shr    rsi,1
  6824c1:	48 21 ee             	and    rsi,rbp
  6824c4:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  6824c8:	41 b9 d9 6d a7 e2    	mov    r9d,0xe2a76dd9
  6824ce:	e9 a9 00 00 00       	jmp    68257c <__cxa_finalize@plt-0xd30894>
  6824d3:	41 b9 45 00 9d 63    	mov    r9d,0x639d0045
  6824d9:	e9 9e 00 00 00       	jmp    68257c <__cxa_finalize@plt-0xd30894>
  6824de:	48 0f cf             	bswap  rdi
  6824e1:	49 89 f8             	mov    r8,rdi
  6824e4:	49 c1 e8 04          	shr    r8,0x4
  6824e8:	4d 21 e0             	and    r8,r12
  6824eb:	4c 21 e7             	and    rdi,r12
  6824ee:	48 c1 e7 04          	shl    rdi,0x4
  6824f2:	4c 09 c7             	or     rdi,r8
  6824f5:	49 89 f8             	mov    r8,rdi
  6824f8:	4d 21 e8             	and    r8,r13
  6824fb:	48 c1 ef 02          	shr    rdi,0x2
  6824ff:	4c 21 ef             	and    rdi,r13
  682502:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  682506:	49 89 f8             	mov    r8,rdi
  682509:	49 21 e8             	and    r8,rbp
  68250c:	48 d1 ef             	shr    rdi,1
  68250f:	48 21 ef             	and    rdi,rbp
  682512:	4e 8d 04 47          	lea    r8,[rdi+r8*2]
  682516:	48 0f ce             	bswap  rsi
  682519:	48 89 f7             	mov    rdi,rsi
  68251c:	48 c1 ef 04          	shr    rdi,0x4
  682520:	4c 21 e7             	and    rdi,r12
  682523:	4c 21 e6             	and    rsi,r12
  682526:	48 c1 e6 04          	shl    rsi,0x4
  68252a:	48 09 fe             	or     rsi,rdi
  68252d:	48 89 f7             	mov    rdi,rsi
  682530:	4c 21 ef             	and    rdi,r13
  682533:	48 c1 ee 02          	shr    rsi,0x2
  682537:	4c 21 ee             	and    rsi,r13
  68253a:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  68253e:	48 89 f7             	mov    rdi,rsi
  682541:	48 21 ef             	and    rdi,rbp
  682544:	48 d1 ee             	shr    rsi,1
  682547:	48 21 ee             	and    rsi,rbp
  68254a:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  68254e:	41 b9 f1 88 3a f0    	mov    r9d,0xf03a88f1
  682554:	eb 26                	jmp    68257c <__cxa_finalize@plt-0xd30894>
  682556:	49 b8 85 6f 72 e5 12 	movabs r8,0x99452912e5726f85
  68255d:	29 45 99 
  682560:	4c 31 c7             	xor    rdi,r8
  682563:	49 b8 88 5c 76 f8 86 	movabs r8,0x96aac386f8765c88
  68256a:	c3 aa 96 
  68256d:	4c 31 c6             	xor    rsi,r8
  682570:	41 b9 ac a1 83 e9    	mov    r9d,0xe983a1ac
  682576:	49 89 fa             	mov    r10,rdi
  682579:	49 89 f0             	mov    r8,rsi
  68257c:	44 31 ca             	xor    edx,r9d
  68257f:	4c 89 d7             	mov    rdi,r10
  682582:	4c 89 c6             	mov    rsi,r8
  682585:	e9 96 fc ff ff       	jmp    682220 <__cxa_finalize@plt-0xd30bf0>
  68258a:	ba 6b 2c 9b 5e       	mov    edx,0x5e9b2c6b
  68258f:	45 31 ff             	xor    r15d,r15d
  682592:	45 31 c9             	xor    r9d,r9d
  682595:	45 31 f6             	xor    r14d,r14d
  682598:	81 fa 29 d9 ec da    	cmp    edx,0xdaecd929
  68259e:	0f 84 70 02 00 00    	je     682814 <__cxa_finalize@plt-0xd305fc>
  6825a4:	4d 89 f8             	mov    r8,r15
  6825a7:	49 0f c8             	bswap  r8
  6825aa:	4d 89 f2             	mov    r10,r14
  6825ad:	49 0f ca             	bswap  r10
  6825b0:	81 fa 49 e1 2e de    	cmp    edx,0xde2ee149
  6825b6:	0f 84 99 00 00 00    	je     682655 <__cxa_finalize@plt-0xd307bb>
  6825bc:	81 fa 60 14 0e df    	cmp    edx,0xdf0e1460
  6825c2:	0f 84 86 01 00 00    	je     68274e <__cxa_finalize@plt-0xd306c2>
  6825c8:	81 fa 9b 63 e6 e5    	cmp    edx,0xe5e6639b
  6825ce:	0f 84 1c 02 00 00    	je     6827f0 <__cxa_finalize@plt-0xd30620>
  6825d4:	81 fa 5a 8c 4b ec    	cmp    edx,0xec4b8c5a
  6825da:	0f 84 80 00 00 00    	je     682660 <__cxa_finalize@plt-0xd307b0>
  6825e0:	81 fa 3a 93 6e ff    	cmp    edx,0xff6e933a
  6825e6:	0f 84 8f 00 00 00    	je     68267b <__cxa_finalize@plt-0xd30795>
  6825ec:	81 fa cb 3e b3 07    	cmp    edx,0x7b33ecb
  6825f2:	0f 84 ce 01 00 00    	je     6827c6 <__cxa_finalize@plt-0xd3064a>
  6825f8:	81 fa f0 20 db 0b    	cmp    edx,0xbdb20f0
  6825fe:	0f 84 b9 00 00 00    	je     6826bd <__cxa_finalize@plt-0xd30753>
  682604:	81 fa 03 bb bc 26    	cmp    edx,0x26bcbb03
  68260a:	0f 84 f1 00 00 00    	je     682701 <__cxa_finalize@plt-0xd3070f>
  682610:	81 fa c9 11 62 2b    	cmp    edx,0x2b6211c9
  682616:	0f 84 c3 00 00 00    	je     6826df <__cxa_finalize@plt-0xd30731>
  68261c:	81 fa cc 60 b4 38    	cmp    edx,0x38b460cc
  682622:	0f 84 b3 01 00 00    	je     6827db <__cxa_finalize@plt-0xd30635>
  682628:	81 fa 6b 2c 9b 5e    	cmp    edx,0x5e9b2c6b
  68262e:	74 56                	je     682686 <__cxa_finalize@plt-0xd3078a>
  682630:	81 fa 7f 92 c9 67    	cmp    edx,0x67c9927f
  682636:	0f 84 e7 00 00 00    	je     682723 <__cxa_finalize@plt-0xd306ed>
  68263c:	81 fa 76 7d 30 6f    	cmp    edx,0x6f307d76
  682642:	74 61                	je     6826a5 <__cxa_finalize@plt-0xd3076b>
  682644:	81 fa 12 12 59 23    	cmp    edx,0x23591212
  68264a:	0f 85 f3 00 00 00    	jne    682743 <__cxa_finalize@plt-0xd306cd>
  682650:	e9 3a 02 00 00       	jmp    68288f <__cxa_finalize@plt-0xd30581>
  682655:	41 b9 60 38 c2 04    	mov    r9d,0x4c23860
  68265b:	e9 a6 01 00 00       	jmp    682806 <__cxa_finalize@plt-0xd3060a>
  682660:	4d 89 f8             	mov    r8,r15
  682663:	4d 0f a4 f0 27       	shld   r8,r14,0x27
  682668:	4d 0f a4 fe 27       	shld   r14,r15,0x27
  68266d:	41 b9 c1 ef ad 09    	mov    r9d,0x9adefc1
  682673:	4d 89 f2             	mov    r10,r14
  682676:	e9 8b 01 00 00       	jmp    682806 <__cxa_finalize@plt-0xd3060a>
  68267b:	41 b9 45 01 a7 98    	mov    r9d,0x98a70145
  682681:	e9 80 01 00 00       	jmp    682806 <__cxa_finalize@plt-0xd3060a>
  682686:	41 b9 22 cd b5 80    	mov    r9d,0x80b5cd22
  68268c:	49 ba 77 72 c7 f7 e5 	movabs r10,0x73d93ae5f7c77277
  682693:	3a d9 73 
  682696:	49 b8 14 d1 85 16 05 	movabs r8,0x8f35bd051685d114
  68269d:	bd 35 8f 
  6826a0:	e9 61 01 00 00       	jmp    682806 <__cxa_finalize@plt-0xd3060a>
  6826a5:	4d 89 f0             	mov    r8,r14
  6826a8:	4d 0f a4 f8 31       	shld   r8,r15,0x31
  6826ad:	4d 0f a4 f7 31       	shld   r15,r14,0x31
  6826b2:	41 b9 4c ee 5e 90    	mov    r9d,0x905eee4c
  6826b8:	e9 46 01 00 00       	jmp    682803 <__cxa_finalize@plt-0xd3060d>
  6826bd:	49 b8 32 cd b3 d8 4a 	movabs r8,0x7f3b6e4ad8b3cd32
  6826c4:	6e 3b 7f 
  6826c7:	4d 01 c7             	add    r15,r8
  6826ca:	49 b8 22 d9 db 7a ef 	movabs r8,0x890a17ef7adbd922
  6826d1:	17 0a 89 
  6826d4:	4d 11 c6             	adc    r14,r8
  6826d7:	41 b9 3c 40 6f 33    	mov    r9d,0x336f403c
  6826dd:	eb 64                	jmp    682743 <__cxa_finalize@plt-0xd306cd>
  6826df:	49 b8 ac cf ca 34 b8 	movabs r8,0x13ba7eb834cacfac
  6826e6:	7e ba 13 
  6826e9:	4d 01 c7             	add    r15,r8
  6826ec:	49 b8 44 ab 47 62 80 	movabs r8,0x694b1b806247ab44
  6826f3:	1b 4b 69 
  6826f6:	4d 11 c6             	adc    r14,r8
  6826f9:	41 b9 ca aa de 0d    	mov    r9d,0xddeaaca
  6826ff:	eb 42                	jmp    682743 <__cxa_finalize@plt-0xd306cd>
  682701:	49 b8 97 c1 6e fc 6f 	movabs r8,0x98e55a6ffc6ec197
  682708:	5a e5 98 
  68270b:	4d 01 c7             	add    r15,r8
  68270e:	49 b8 bd 74 ae c7 ab 	movabs r8,0x1ff45cabc7ae74bd
  682715:	5c f4 1f 
  682718:	4d 11 c6             	adc    r14,r8
  68271b:	41 b9 11 a9 e5 05    	mov    r9d,0x5e5a911
  682721:	eb 20                	jmp    682743 <__cxa_finalize@plt-0xd306cd>
  682723:	49 b8 93 fb 4a 46 ec 	movabs r8,0x695938ec464afb93
  68272a:	38 59 69 
  68272d:	4d 01 c7             	add    r15,r8
  682730:	49 b8 72 f8 73 72 48 	movabs r8,0x4fa46487273f872
  682737:	46 fa 04 
  68273a:	4d 11 c6             	adc    r14,r8
  68273d:	41 b9 b6 83 ab 4c    	mov    r9d,0x4cab83b6
  682743:	4d 89 fa             	mov    r10,r15
  682746:	4d 89 f0             	mov    r8,r14
  682749:	e9 b8 00 00 00       	jmp    682806 <__cxa_finalize@plt-0xd3060a>
  68274e:	49 0f cf             	bswap  r15
  682751:	4d 89 f8             	mov    r8,r15
  682754:	49 c1 e8 04          	shr    r8,0x4
  682758:	4d 21 e0             	and    r8,r12
  68275b:	4d 21 e7             	and    r15,r12
  68275e:	49 c1 e7 04          	shl    r15,0x4
  682762:	4d 09 c7             	or     r15,r8
  682765:	4d 89 f8             	mov    r8,r15
  682768:	4d 21 e8             	and    r8,r13
  68276b:	49 c1 ef 02          	shr    r15,0x2
  68276f:	4d 21 ef             	and    r15,r13
  682772:	4f 8d 04 87          	lea    r8,[r15+r8*4]
  682776:	4d 89 c1             	mov    r9,r8
  682779:	49 21 e9             	and    r9,rbp
  68277c:	49 d1 e8             	shr    r8,1
  68277f:	49 21 e8             	and    r8,rbp
  682782:	4f 8d 04 48          	lea    r8,[r8+r9*2]
  682786:	49 0f ce             	bswap  r14
  682789:	4d 89 f1             	mov    r9,r14
  68278c:	49 c1 e9 04          	shr    r9,0x4
  682790:	4d 21 e1             	and    r9,r12
  682793:	4d 21 e6             	and    r14,r12
  682796:	49 c1 e6 04          	shl    r14,0x4
  68279a:	4d 09 ce             	or     r14,r9
  68279d:	4d 89 f1             	mov    r9,r14
  6827a0:	4d 21 e9             	and    r9,r13
  6827a3:	49 c1 ee 02          	shr    r14,0x2
  6827a7:	4d 21 ee             	and    r14,r13
  6827aa:	4f 8d 0c 8e          	lea    r9,[r14+r9*4]
  6827ae:	4d 89 ca             	mov    r10,r9
  6827b1:	49 21 ea             	and    r10,rbp
  6827b4:	49 d1 e9             	shr    r9,1
  6827b7:	49 21 e9             	and    r9,rbp
  6827ba:	4f 8d 14 51          	lea    r10,[r9+r10*2]
  6827be:	41 b9 ab 2a bd d8    	mov    r9d,0xd8bd2aab
  6827c4:	eb 40                	jmp    682806 <__cxa_finalize@plt-0xd3060a>
  6827c6:	4d 89 f0             	mov    r8,r14
  6827c9:	4d 0f a4 f8 0f       	shld   r8,r15,0xf
  6827ce:	4d 0f a4 f7 0f       	shld   r15,r14,0xf
  6827d3:	41 b9 3b 1e 68 0c    	mov    r9d,0xc681e3b
  6827d9:	eb 28                	jmp    682803 <__cxa_finalize@plt-0xd3060d>
  6827db:	4d 89 f0             	mov    r8,r14
  6827de:	4d 0f a4 f8 23       	shld   r8,r15,0x23
  6827e3:	4d 0f a4 f7 23       	shld   r15,r14,0x23
  6827e8:	41 b9 96 ec ff d4    	mov    r9d,0xd4ffec96
  6827ee:	eb 13                	jmp    682803 <__cxa_finalize@plt-0xd3060d>
  6827f0:	4d 89 f0             	mov    r8,r14
  6827f3:	4d 0f a4 f8 1d       	shld   r8,r15,0x1d
  6827f8:	4d 0f a4 f7 1d       	shld   r15,r14,0x1d
  6827fd:	41 b9 ed 1e d6 8a    	mov    r9d,0x8ad61eed
  682803:	4d 89 fa             	mov    r10,r15
  682806:	44 31 ca             	xor    edx,r9d
  682809:	4d 89 d7             	mov    r15,r10
  68280c:	4d 89 c6             	mov    r14,r8
  68280f:	e9 84 fd ff ff       	jmp    682598 <__cxa_finalize@plt-0xd30878>
  682814:	49 0f cf             	bswap  r15
  682817:	4d 89 f8             	mov    r8,r15
  68281a:	49 c1 e8 04          	shr    r8,0x4
  68281e:	4d 21 e0             	and    r8,r12
  682821:	4d 21 e7             	and    r15,r12
  682824:	49 c1 e7 04          	shl    r15,0x4
  682828:	4d 09 c7             	or     r15,r8
  68282b:	4d 89 f8             	mov    r8,r15
  68282e:	4d 21 e8             	and    r8,r13
  682831:	49 c1 ef 02          	shr    r15,0x2
  682835:	4d 21 ef             	and    r15,r13
  682838:	4f 8d 04 87          	lea    r8,[r15+r8*4]
  68283c:	4d 89 c1             	mov    r9,r8
  68283f:	49 21 e9             	and    r9,rbp
  682842:	49 d1 e8             	shr    r8,1
  682845:	49 21 e8             	and    r8,rbp
  682848:	4f 8d 04 48          	lea    r8,[r8+r9*2]
  68284c:	49 0f ce             	bswap  r14
  68284f:	4d 89 f1             	mov    r9,r14
  682852:	49 c1 e9 04          	shr    r9,0x4
  682856:	4d 21 e1             	and    r9,r12
  682859:	4d 21 e6             	and    r14,r12
  68285c:	49 c1 e6 04          	shl    r14,0x4
  682860:	4d 09 ce             	or     r14,r9
  682863:	4d 89 f1             	mov    r9,r14
  682866:	4d 21 e9             	and    r9,r13
  682869:	49 c1 ee 02          	shr    r14,0x2
  68286d:	4d 21 ee             	and    r14,r13
  682870:	4f 8d 0c 8e          	lea    r9,[r14+r9*4]
  682874:	4d 89 ca             	mov    r10,r9
  682877:	49 21 ea             	and    r10,rbp
  68287a:	49 d1 e9             	shr    r9,1
  68287d:	49 21 e9             	and    r9,rbp
  682880:	4f 8d 14 51          	lea    r10,[r9+r10*2]
  682884:	41 b9 49 cd e2 05    	mov    r9d,0x5e2cd49
  68288a:	e9 77 ff ff ff       	jmp    682806 <__cxa_finalize@plt-0xd3060a>
  68288f:	41 b8 01 08 e7 a4    	mov    r8d,0xa4e70801
  682895:	e9 77 4d 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  68289a:	ba ee 79 5b e6       	mov    edx,0xe65b79ee
  68289f:	31 ff                	xor    edi,edi
  6828a1:	45 31 d2             	xor    r10d,r10d
  6828a4:	31 f6                	xor    esi,esi
  6828a6:	81 fa 37 4f 5c 99    	cmp    edx,0x995c4f37
  6828ac:	0f 84 d0 01 00 00    	je     682a82 <__cxa_finalize@plt-0xd3038e>
  6828b2:	49 89 f8             	mov    r8,rdi
  6828b5:	49 0f c8             	bswap  r8
  6828b8:	49 89 f1             	mov    r9,rsi
  6828bb:	49 0f c9             	bswap  r9
  6828be:	81 fa 46 bc cf 9f    	cmp    edx,0x9fcfbc46
  6828c4:	0f 84 84 02 00 00    	je     682b4e <__cxa_finalize@plt-0xd302c2>
  6828ca:	81 fa 42 d2 44 a8    	cmp    edx,0xa844d242
  6828d0:	74 7d                	je     68294f <__cxa_finalize@plt-0xd304c1>
  6828d2:	81 fa 41 b0 d7 b2    	cmp    edx,0xb2d7b041
  6828d8:	0f 84 96 00 00 00    	je     682974 <__cxa_finalize@plt-0xd3049c>
  6828de:	81 fa 67 02 78 c9    	cmp    edx,0xc9780267
  6828e4:	0f 84 10 02 00 00    	je     682afa <__cxa_finalize@plt-0xd30316>
  6828ea:	81 fa c4 21 32 dc    	cmp    edx,0xdc3221c4
  6828f0:	0f 84 a3 00 00 00    	je     682999 <__cxa_finalize@plt-0xd30477>
  6828f6:	81 fa ee 79 5b e6    	cmp    edx,0xe65b79ee
  6828fc:	0f 84 61 01 00 00    	je     682a63 <__cxa_finalize@plt-0xd303ad>
  682902:	81 fa 28 86 43 02    	cmp    edx,0x2438628
  682908:	0f 84 3a 01 00 00    	je     682a48 <__cxa_finalize@plt-0xd303c8>
  68290e:	81 fa e3 b9 be 13    	cmp    edx,0x13beb9e3
  682914:	0f 84 14 02 00 00    	je     682b2e <__cxa_finalize@plt-0xd302e2>
  68291a:	81 fa 94 10 c1 3e    	cmp    edx,0x3ec11094
  682920:	0f 84 10 02 00 00    	je     682b36 <__cxa_finalize@plt-0xd302da>
  682926:	81 fa 0a eb a2 6e    	cmp    edx,0x6ea2eb0a
  68292c:	0f 84 8c 00 00 00    	je     6829be <__cxa_finalize@plt-0xd30452>
  682932:	81 fa 60 bc 00 6f    	cmp    edx,0x6f00bc60
  682938:	0f 84 f5 00 00 00    	je     682a33 <__cxa_finalize@plt-0xd303dd>
  68293e:	81 fa 9f ad 15 f9    	cmp    edx,0xf915ad9f
  682944:	0f 85 d0 01 00 00    	jne    682b1a <__cxa_finalize@plt-0xd302f6>
  68294a:	e9 07 02 00 00       	jmp    682b56 <__cxa_finalize@plt-0xd302ba>
  68294f:	49 b8 8d b0 c2 ac 74 	movabs r8,0x8a97f474acc2b08d
  682956:	f4 97 8a 
  682959:	4c 31 c7             	xor    rdi,r8
  68295c:	49 b8 8f 2f 1f 30 fc 	movabs r8,0xf83183fc301f2f8f
  682963:	83 31 f8 
  682966:	4c 31 c6             	xor    rsi,r8
  682969:	41 ba 6a 54 07 aa    	mov    r10d,0xaa07546a
  68296f:	e9 a6 01 00 00       	jmp    682b1a <__cxa_finalize@plt-0xd302f6>
  682974:	49 b8 43 cf a2 fd 02 	movabs r8,0x7976a602fda2cf43
  68297b:	a6 76 79 
  68297e:	4c 31 c7             	xor    rdi,r8
  682981:	49 b8 bc e7 52 d1 e0 	movabs r8,0xada4f6e0d152e7bc
  682988:	f6 a4 ad 
  68298b:	4c 31 c6             	xor    rsi,r8
  68298e:	41 ba 03 62 93 1a    	mov    r10d,0x1a936203
  682994:	e9 81 01 00 00       	jmp    682b1a <__cxa_finalize@plt-0xd302f6>
  682999:	49 b8 f3 84 97 c4 7d 	movabs r8,0x4c4a5a7dc49784f3
  6829a0:	5a 4a 4c 
  6829a3:	4c 31 c7             	xor    rdi,r8
  6829a6:	49 b8 c8 64 66 8b 12 	movabs r8,0xe20184128b6664c8
  6829ad:	84 01 e2 
  6829b0:	4c 31 c6             	xor    rsi,r8
  6829b3:	41 ba a3 23 4a 15    	mov    r10d,0x154a23a3
  6829b9:	e9 5c 01 00 00       	jmp    682b1a <__cxa_finalize@plt-0xd302f6>
  6829be:	4c 89 c6             	mov    rsi,r8
  6829c1:	48 c1 ee 04          	shr    rsi,0x4
  6829c5:	4c 21 e6             	and    rsi,r12
  6829c8:	4d 21 e0             	and    r8,r12
  6829cb:	49 c1 e0 04          	shl    r8,0x4
  6829cf:	49 09 f0             	or     r8,rsi
  6829d2:	4c 89 c6             	mov    rsi,r8
  6829d5:	4c 21 ee             	and    rsi,r13
  6829d8:	49 c1 e8 02          	shr    r8,0x2
  6829dc:	4d 21 e8             	and    r8,r13
  6829df:	49 8d 34 b0          	lea    rsi,[r8+rsi*4]
  6829e3:	48 89 f7             	mov    rdi,rsi
  6829e6:	48 21 ef             	and    rdi,rbp
  6829e9:	48 d1 ee             	shr    rsi,1
  6829ec:	48 21 ee             	and    rsi,rbp
  6829ef:	4c 8d 04 7e          	lea    r8,[rsi+rdi*2]
  6829f3:	4c 89 ce             	mov    rsi,r9
  6829f6:	48 c1 ee 04          	shr    rsi,0x4
  6829fa:	4c 21 e6             	and    rsi,r12
  6829fd:	4d 21 e1             	and    r9,r12
  682a00:	49 c1 e1 04          	shl    r9,0x4
  682a04:	49 09 f1             	or     r9,rsi
  682a07:	4c 89 ce             	mov    rsi,r9
  682a0a:	4c 21 ee             	and    rsi,r13
  682a0d:	49 c1 e9 02          	shr    r9,0x2
  682a11:	4d 21 e9             	and    r9,r13
  682a14:	49 8d 34 b1          	lea    rsi,[r9+rsi*4]
  682a18:	48 89 f7             	mov    rdi,rsi
  682a1b:	48 21 ef             	and    rdi,rbp
  682a1e:	48 d1 ee             	shr    rsi,1
  682a21:	48 21 ee             	and    rsi,rbp
  682a24:	4c 8d 0c 7e          	lea    r9,[rsi+rdi*2]
  682a28:	41 ba ce ca 90 b2    	mov    r10d,0xb290cace
  682a2e:	e9 ed 00 00 00       	jmp    682b20 <__cxa_finalize@plt-0xd302f0>
  682a33:	49 89 f8             	mov    r8,rdi
  682a36:	49 0f a4 f0 11       	shld   r8,rsi,0x11
  682a3b:	48 0f a4 fe 11       	shld   rsi,rdi,0x11
  682a40:	41 ba 21 0c d7 dd    	mov    r10d,0xddd70c21
  682a46:	eb 13                	jmp    682a5b <__cxa_finalize@plt-0xd303b5>
  682a48:	49 89 f8             	mov    r8,rdi
  682a4b:	49 0f a4 f0 3e       	shld   r8,rsi,0x3e
  682a50:	48 0f a4 fe 3e       	shld   rsi,rdi,0x3e
  682a55:	41 ba bc 96 82 3c    	mov    r10d,0x3c8296bc
  682a5b:	49 89 f1             	mov    r9,rsi
  682a5e:	e9 bd 00 00 00       	jmp    682b20 <__cxa_finalize@plt-0xd302f0>
  682a63:	41 ba 8e c5 5b 89    	mov    r10d,0x895bc58e
  682a69:	49 b9 83 9a 8d 12 08 	movabs r9,0x486de408128d9a83
  682a70:	e4 6d 48 
  682a73:	49 b8 af 53 d7 95 e2 	movabs r8,0x3e5e86e295d753af
  682a7a:	86 5e 3e 
  682a7d:	e9 9e 00 00 00       	jmp    682b20 <__cxa_finalize@plt-0xd302f0>
  682a82:	48 0f cf             	bswap  rdi
  682a85:	49 89 f8             	mov    r8,rdi
  682a88:	49 c1 e8 04          	shr    r8,0x4
  682a8c:	4d 21 e0             	and    r8,r12
  682a8f:	4c 21 e7             	and    rdi,r12
  682a92:	48 c1 e7 04          	shl    rdi,0x4
  682a96:	4c 09 c7             	or     rdi,r8
  682a99:	49 89 f8             	mov    r8,rdi
  682a9c:	4d 21 e8             	and    r8,r13
  682a9f:	48 c1 ef 02          	shr    rdi,0x2
  682aa3:	4c 21 ef             	and    rdi,r13
  682aa6:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  682aaa:	49 89 f8             	mov    r8,rdi
  682aad:	49 21 e8             	and    r8,rbp
  682ab0:	48 d1 ef             	shr    rdi,1
  682ab3:	48 21 ef             	and    rdi,rbp
  682ab6:	4e 8d 04 47          	lea    r8,[rdi+r8*2]
  682aba:	48 0f ce             	bswap  rsi
  682abd:	48 89 f7             	mov    rdi,rsi
  682ac0:	48 c1 ef 04          	shr    rdi,0x4
  682ac4:	4c 21 e7             	and    rdi,r12
  682ac7:	4c 21 e6             	and    rsi,r12
  682aca:	48 c1 e6 04          	shl    rsi,0x4
  682ace:	48 09 fe             	or     rsi,rdi
  682ad1:	48 89 f7             	mov    rdi,rsi
  682ad4:	4c 21 ef             	and    rdi,r13
  682ad7:	48 c1 ee 02          	shr    rsi,0x2
  682adb:	4c 21 ee             	and    rsi,r13
  682ade:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  682ae2:	48 89 f7             	mov    rdi,rsi
  682ae5:	48 21 ef             	and    rdi,rbp
  682ae8:	48 d1 ee             	shr    rsi,1
  682aeb:	48 21 ee             	and    rsi,rbp
  682aee:	4c 8d 0c 7e          	lea    r9,[rsi+rdi*2]
  682af2:	41 ba 3d a4 fe f7    	mov    r10d,0xf7fea43d
  682af8:	eb 26                	jmp    682b20 <__cxa_finalize@plt-0xd302f0>
  682afa:	49 b8 5d 7c bc 70 36 	movabs r8,0x974b2b3670bc7c5d
  682b01:	2b 4b 97 
  682b04:	4c 01 c7             	add    rdi,r8
  682b07:	49 b8 5e e3 1b 84 b4 	movabs r8,0xac7f2eb4841be35e
  682b0e:	2e 7f ac 
  682b11:	4c 11 c6             	adc    rsi,r8
  682b14:	41 ba 21 be b7 56    	mov    r10d,0x56b7be21
  682b1a:	49 89 f9             	mov    r9,rdi
  682b1d:	49 89 f0             	mov    r8,rsi
  682b20:	44 31 d2             	xor    edx,r10d
  682b23:	4c 89 cf             	mov    rdi,r9
  682b26:	4c 89 c6             	mov    rsi,r8
  682b29:	e9 78 fd ff ff       	jmp    6828a6 <__cxa_finalize@plt-0xd3056a>
  682b2e:	41 ba d4 f6 e2 8a    	mov    r10d,0x8ae2f6d4
  682b34:	eb ea                	jmp    682b20 <__cxa_finalize@plt-0xd302f0>
  682b36:	49 89 f0             	mov    r8,rsi
  682b39:	49 0f a4 f8 12       	shld   r8,rdi,0x12
  682b3e:	48 0f a4 f7 12       	shld   rdi,rsi,0x12
  682b43:	41 ba 77 a9 7f 2d    	mov    r10d,0x2d7fa977
  682b49:	49 89 f9             	mov    r9,rdi
  682b4c:	eb d2                	jmp    682b20 <__cxa_finalize@plt-0xd302f0>
  682b4e:	41 ba d9 11 da 66    	mov    r10d,0x66da11d9
  682b54:	eb ca                	jmp    682b20 <__cxa_finalize@plt-0xd302f0>
  682b56:	ba 74 da db 66       	mov    edx,0x66dbda74
  682b5b:	45 31 ff             	xor    r15d,r15d
  682b5e:	45 31 c0             	xor    r8d,r8d
  682b61:	45 31 f6             	xor    r14d,r14d
  682b64:	81 fa d6 56 84 9e    	cmp    edx,0x9e8456d6
  682b6a:	0f 84 d0 01 00 00    	je     682d40 <__cxa_finalize@plt-0xd300d0>
  682b70:	4d 89 f9             	mov    r9,r15
  682b73:	49 0f c9             	bswap  r9
  682b76:	4d 89 f2             	mov    r10,r14
  682b79:	49 0f ca             	bswap  r10
  682b7c:	81 fa 65 8c ff 9e    	cmp    edx,0x9eff8c65
  682b82:	0f 84 36 02 00 00    	je     682dbe <__cxa_finalize@plt-0xd30052>
  682b88:	81 fa 47 b8 86 aa    	cmp    edx,0xaa86b847
  682b8e:	74 7d                	je     682c0d <__cxa_finalize@plt-0xd30203>
  682b90:	81 fa 40 8c c3 c3    	cmp    edx,0xc3c38c40
  682b96:	0f 84 e6 00 00 00    	je     682c82 <__cxa_finalize@plt-0xd3018e>
  682b9c:	81 fa 63 b0 e5 d1    	cmp    edx,0xd1e5b063
  682ba2:	0f 84 ba 01 00 00    	je     682d62 <__cxa_finalize@plt-0xd300ae>
  682ba8:	81 fa 31 71 2e 09    	cmp    edx,0x92e7131
  682bae:	0f 84 f3 00 00 00    	je     682ca7 <__cxa_finalize@plt-0xd30169>
  682bb4:	81 fa dc 00 28 13    	cmp    edx,0x132800dc
  682bba:	0f 84 5e 01 00 00    	je     682d1e <__cxa_finalize@plt-0xd300f2>
  682bc0:	81 fa e0 c5 99 43    	cmp    edx,0x4399c5e0
  682bc6:	0f 84 30 01 00 00    	je     682cfc <__cxa_finalize@plt-0xd30114>
  682bcc:	81 fa 91 8c 58 59    	cmp    edx,0x59588c91
  682bd2:	0f 84 b2 01 00 00    	je     682d8a <__cxa_finalize@plt-0xd30086>
  682bd8:	81 fa 74 da db 66    	cmp    edx,0x66dbda74
  682bde:	0f 84 be 01 00 00    	je     682da2 <__cxa_finalize@plt-0xd3006e>
  682be4:	81 fa 43 46 e4 7b    	cmp    edx,0x7be44643
  682bea:	0f 84 cf 00 00 00    	je     682cbf <__cxa_finalize@plt-0xd30151>
  682bf0:	81 fa 6a 30 30 7c    	cmp    edx,0x7c30306a
  682bf6:	0f 84 e8 00 00 00    	je     682ce4 <__cxa_finalize@plt-0xd3012c>
  682bfc:	81 fa 27 22 13 4d    	cmp    edx,0x4d132227
  682c02:	0f 85 7a 01 00 00    	jne    682d82 <__cxa_finalize@plt-0xd3008e>
  682c08:	e9 c5 01 00 00       	jmp    682dd2 <__cxa_finalize@plt-0xd3003e>
  682c0d:	4d 89 c8             	mov    r8,r9
  682c10:	49 c1 e8 04          	shr    r8,0x4
  682c14:	4d 21 e0             	and    r8,r12
  682c17:	4d 21 e1             	and    r9,r12
  682c1a:	49 c1 e1 04          	shl    r9,0x4
  682c1e:	4d 09 c1             	or     r9,r8
  682c21:	4d 89 c8             	mov    r8,r9
  682c24:	4d 21 e8             	and    r8,r13
  682c27:	49 c1 e9 02          	shr    r9,0x2
  682c2b:	4d 21 e9             	and    r9,r13
  682c2e:	4f 8d 04 81          	lea    r8,[r9+r8*4]
  682c32:	4d 89 c1             	mov    r9,r8
  682c35:	49 21 e9             	and    r9,rbp
  682c38:	49 d1 e8             	shr    r8,1
  682c3b:	49 21 e8             	and    r8,rbp
  682c3e:	4f 8d 0c 48          	lea    r9,[r8+r9*2]
  682c42:	4d 89 d0             	mov    r8,r10
  682c45:	49 c1 e8 04          	shr    r8,0x4
  682c49:	4d 21 e0             	and    r8,r12
  682c4c:	4d 21 e2             	and    r10,r12
  682c4f:	49 c1 e2 04          	shl    r10,0x4
  682c53:	4d 09 c2             	or     r10,r8
  682c56:	4d 89 d0             	mov    r8,r10
  682c59:	4d 21 e8             	and    r8,r13
  682c5c:	49 c1 ea 02          	shr    r10,0x2
  682c60:	4d 21 ea             	and    r10,r13
  682c63:	4f 8d 04 82          	lea    r8,[r10+r8*4]
  682c67:	4d 89 c2             	mov    r10,r8
  682c6a:	49 21 ea             	and    r10,rbp
  682c6d:	49 d1 e8             	shr    r8,1
  682c70:	49 21 e8             	and    r8,rbp
  682c73:	4f 8d 14 50          	lea    r10,[r8+r10*2]
  682c77:	41 b8 76 c9 a8 a3    	mov    r8d,0xa3a8c976
  682c7d:	e9 42 01 00 00       	jmp    682dc4 <__cxa_finalize@plt-0xd3004c>
  682c82:	49 b8 dd af fb 6a f6 	movabs r8,0xd2d693f66afbafdd
  682c89:	93 d6 d2 
  682c8c:	4d 31 c7             	xor    r15,r8
  682c8f:	49 b8 06 30 80 96 46 	movabs r8,0x31136e4696803006
  682c96:	6e 13 31 
  682c99:	4d 31 c6             	xor    r14,r8
  682c9c:	41 b8 9c 8c eb d0    	mov    r8d,0xd0eb8c9c
  682ca2:	e9 db 00 00 00       	jmp    682d82 <__cxa_finalize@plt-0xd3008e>
  682ca7:	4d 89 f9             	mov    r9,r15
  682caa:	4d 0f a4 f1 31       	shld   r9,r14,0x31
  682caf:	4d 0f a4 fe 31       	shld   r14,r15,0x31
  682cb4:	41 b8 5b 41 1e 75    	mov    r8d,0x751e415b
  682cba:	e9 de 00 00 00       	jmp    682d9d <__cxa_finalize@plt-0xd30073>
  682cbf:	49 b8 72 18 32 9c c0 	movabs r8,0x6ca1a7c09c321872
  682cc6:	a7 a1 6c 
  682cc9:	4d 31 c7             	xor    r15,r8
  682ccc:	49 b8 83 31 62 63 7c 	movabs r8,0x701cb17c63623183
  682cd3:	b1 1c 70 
  682cd6:	4d 31 c6             	xor    r14,r8
  682cd9:	41 b8 d2 ca bc 22    	mov    r8d,0x22bccad2
  682cdf:	e9 9e 00 00 00       	jmp    682d82 <__cxa_finalize@plt-0xd3008e>
  682ce4:	4d 89 f9             	mov    r9,r15
  682ce7:	4d 0f a4 f1 17       	shld   r9,r14,0x17
  682cec:	4d 0f a4 fe 17       	shld   r14,r15,0x17
  682cf1:	41 b8 29 76 d4 07    	mov    r8d,0x7d47629
  682cf7:	e9 a1 00 00 00       	jmp    682d9d <__cxa_finalize@plt-0xd30073>
  682cfc:	49 b8 18 35 02 f2 7f 	movabs r8,0xb2a2c67ff2023518
  682d03:	c6 a2 b2 
  682d06:	4d 01 c7             	add    r15,r8
  682d09:	49 b8 f9 21 8d 56 a0 	movabs r8,0x7ee046a0568d21f9
  682d10:	46 e0 7e 
  682d13:	4d 11 c6             	adc    r14,r8
  682d16:	41 b8 36 93 1d dd    	mov    r8d,0xdd1d9336
  682d1c:	eb 64                	jmp    682d82 <__cxa_finalize@plt-0xd3008e>
  682d1e:	49 b8 b9 e1 b3 2a 5d 	movabs r8,0xc9998c5d2ab3e1b9
  682d25:	8c 99 c9 
  682d28:	4d 01 c7             	add    r15,r8
  682d2b:	49 b8 86 22 50 d8 e6 	movabs r8,0x318b12e6d8502286
  682d32:	12 8b 31 
  682d35:	4d 11 c6             	adc    r14,r8
  682d38:	41 b8 bf b0 cd c2    	mov    r8d,0xc2cdb0bf
  682d3e:	eb 42                	jmp    682d82 <__cxa_finalize@plt-0xd3008e>
  682d40:	49 b8 c1 58 6f 1e db 	movabs r8,0x7d69c3db1e6f58c1
  682d47:	c3 69 7d 
  682d4a:	4d 31 c7             	xor    r15,r8
  682d4d:	49 b8 14 ef 52 47 44 	movabs r8,0xdb62eb444752ef14
  682d54:	eb 62 db 
  682d57:	4d 31 c6             	xor    r14,r8
  682d5a:	41 b8 f1 74 97 d3    	mov    r8d,0xd39774f1
  682d60:	eb 20                	jmp    682d82 <__cxa_finalize@plt-0xd3008e>
  682d62:	49 b8 d9 a9 84 72 87 	movabs r8,0xb7bb40877284a9d9
  682d69:	40 bb b7 
  682d6c:	4d 01 c7             	add    r15,r8
  682d6f:	49 b8 87 1f c0 89 d8 	movabs r8,0x5b56fcd889c01f87
  682d76:	fc 56 5b 
  682d79:	4d 11 c6             	adc    r14,r8
  682d7c:	41 b8 24 08 63 7b    	mov    r8d,0x7b630824
  682d82:	4d 89 fa             	mov    r10,r15
  682d85:	4d 89 f1             	mov    r9,r14
  682d88:	eb 3a                	jmp    682dc4 <__cxa_finalize@plt-0xd3004c>
  682d8a:	4d 89 f9             	mov    r9,r15
  682d8d:	4d 0f a4 f1 22       	shld   r9,r14,0x22
  682d92:	4d 0f a4 fe 22       	shld   r14,r15,0x22
  682d97:	41 b8 f4 00 a7 c7    	mov    r8d,0xc7a700f4
  682d9d:	4d 89 f2             	mov    r10,r14
  682da0:	eb 22                	jmp    682dc4 <__cxa_finalize@plt-0xd3004c>
  682da2:	41 b8 34 56 18 a5    	mov    r8d,0xa5185634
  682da8:	49 ba b0 38 22 29 f0 	movabs r10,0x8ef64ef0292238b0
  682daf:	4e f6 8e 
  682db2:	49 b9 83 67 f0 c7 6c 	movabs r9,0x44baf86cc7f06783
  682db9:	f8 ba 44 
  682dbc:	eb 06                	jmp    682dc4 <__cxa_finalize@plt-0xd3004c>
  682dbe:	41 b8 85 49 66 dd    	mov    r8d,0xdd664985
  682dc4:	44 31 c2             	xor    edx,r8d
  682dc7:	4d 89 d7             	mov    r15,r10
  682dca:	4d 89 ce             	mov    r14,r9
  682dcd:	e9 92 fd ff ff       	jmp    682b64 <__cxa_finalize@plt-0xd302ac>
  682dd2:	41 b8 d4 a8 b0 46    	mov    r8d,0x46b0a8d4
  682dd8:	e9 34 48 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  682ddd:	ba 79 56 53 63       	mov    edx,0x63535679
  682de2:	31 ff                	xor    edi,edi
  682de4:	45 31 c0             	xor    r8d,r8d
  682de7:	31 f6                	xor    esi,esi
  682de9:	81 fa e4 38 81 d1    	cmp    edx,0xd18138e4
  682def:	0f 84 d7 00 00 00    	je     682ecc <__cxa_finalize@plt-0xd2ff44>
  682df5:	81 fa 61 8f e9 1f    	cmp    edx,0x1fe98f61
  682dfb:	0f 84 a9 00 00 00    	je     682eaa <__cxa_finalize@plt-0xd2ff66>
  682e01:	81 fa 50 05 b4 48    	cmp    edx,0x48b40550
  682e07:	74 29                	je     682e32 <__cxa_finalize@plt-0xd2ffde>
  682e09:	81 fa bc a6 58 58    	cmp    edx,0x5858a6bc
  682e0f:	74 62                	je     682e73 <__cxa_finalize@plt-0xd2ff9d>
  682e11:	81 fa 79 56 53 63    	cmp    edx,0x63535679
  682e17:	74 3e                	je     682e57 <__cxa_finalize@plt-0xd2ffb9>
  682e19:	81 fa 61 78 62 7f    	cmp    edx,0x7f627861
  682e1f:	74 67                	je     682e88 <__cxa_finalize@plt-0xd2ff88>
  682e21:	81 fa 15 f3 85 30    	cmp    edx,0x3085f315
  682e27:	0f 85 b5 00 00 00    	jne    682ee2 <__cxa_finalize@plt-0xd2ff2e>
  682e2d:	e9 b8 00 00 00       	jmp    682eea <__cxa_finalize@plt-0xd2ff26>
  682e32:	49 b8 b4 68 fd f1 56 	movabs r8,0xd560bb56f1fd68b4
  682e39:	bb 60 d5 
  682e3c:	4c 31 c7             	xor    rdi,r8
  682e3f:	49 b8 58 0b a0 d7 f5 	movabs r8,0x2082cdf5d7a00b58
  682e46:	cd 82 20 
  682e49:	4c 31 c6             	xor    rsi,r8
  682e4c:	41 b8 31 8a 5d 57    	mov    r8d,0x575d8a31
  682e52:	e9 8b 00 00 00       	jmp    682ee2 <__cxa_finalize@plt-0xd2ff2e>
  682e57:	41 b8 29 53 e7 2b    	mov    r8d,0x2be75329
  682e5d:	48 bf af ac d8 fb 33 	movabs rdi,0xec279833fbd8acaf
  682e64:	98 27 ec 
  682e67:	48 be 58 db 18 65 49 	movabs rsi,0x4b2e0e496518db58
  682e6e:	0e 2e 4b 
  682e71:	eb 6f                	jmp    682ee2 <__cxa_finalize@plt-0xd2ff2e>
  682e73:	49 89 f9             	mov    r9,rdi
  682e76:	49 0f a4 f1 2f       	shld   r9,rsi,0x2f
  682e7b:	48 0f ac f7 11       	shrd   rdi,rsi,0x11
  682e80:	41 b8 a9 55 dd 68    	mov    r8d,0x68dd55a9
  682e86:	eb 57                	jmp    682edf <__cxa_finalize@plt-0xd2ff31>
  682e88:	49 b8 bc 88 62 54 bb 	movabs r8,0x25781fbb546288bc
  682e8f:	1f 78 25 
  682e92:	4c 31 c7             	xor    rdi,r8
  682e95:	49 b8 00 45 08 4b 05 	movabs r8,0xf962f2054b084500
  682e9c:	f2 62 f9 
  682e9f:	4c 31 c6             	xor    rsi,r8
  682ea2:	41 b8 dd de 3a 27    	mov    r8d,0x273adedd
  682ea8:	eb 38                	jmp    682ee2 <__cxa_finalize@plt-0xd2ff2e>
  682eaa:	49 b8 94 f3 a1 af 67 	movabs r8,0x45f65a67afa1f394
  682eb1:	5a f6 45 
  682eb4:	4c 31 c7             	xor    rdi,r8
  682eb7:	49 b8 5e 94 e0 d0 a2 	movabs r8,0xc3bd8fa2d0e0945e
  682ebe:	8f bd c3 
  682ec1:	4c 31 c6             	xor    rsi,r8
  682ec4:	41 b8 85 b7 68 ce    	mov    r8d,0xce68b785
  682eca:	eb 16                	jmp    682ee2 <__cxa_finalize@plt-0xd2ff2e>
  682ecc:	49 89 f9             	mov    r9,rdi
  682ecf:	49 0f a4 f1 01       	shld   r9,rsi,0x1
  682ed4:	48 0f ac f7 3f       	shrd   rdi,rsi,0x3f
  682ed9:	41 b8 85 40 e3 ae    	mov    r8d,0xaee34085
  682edf:	4c 89 ce             	mov    rsi,r9
  682ee2:	44 31 c2             	xor    edx,r8d
  682ee5:	e9 ff fe ff ff       	jmp    682de9 <__cxa_finalize@plt-0xd30027>
  682eea:	ba 4e 6f 38 28       	mov    edx,0x28386f4e
  682eef:	45 31 ff             	xor    r15d,r15d
  682ef2:	45 31 d2             	xor    r10d,r10d
  682ef5:	45 31 f6             	xor    r14d,r14d
  682ef8:	4d 89 f8             	mov    r8,r15
  682efb:	49 0f c8             	bswap  r8
  682efe:	4d 89 f1             	mov    r9,r14
  682f01:	49 0f c9             	bswap  r9
  682f04:	81 fa 9d 25 46 87    	cmp    edx,0x8746259d
  682f0a:	0f 84 60 02 00 00    	je     683170 <__cxa_finalize@plt-0xd2fca0>
  682f10:	81 fa 70 d5 4e ae    	cmp    edx,0xae4ed570
  682f16:	0f 84 5c 02 00 00    	je     683178 <__cxa_finalize@plt-0xd2fc98>
  682f1c:	81 fa de 93 80 c6    	cmp    edx,0xc68093de
  682f22:	0f 84 a1 00 00 00    	je     682fc9 <__cxa_finalize@plt-0xd2fe47>
  682f28:	81 fa b4 28 f4 d9    	cmp    edx,0xd9f428b4
  682f2e:	0f 84 e4 01 00 00    	je     683118 <__cxa_finalize@plt-0xd2fcf8>
  682f34:	81 fa 2a 51 d6 dc    	cmp    edx,0xdcd6512a
  682f3a:	0f 84 28 02 00 00    	je     683168 <__cxa_finalize@plt-0xd2fca8>
  682f40:	81 fa 97 8b 60 de    	cmp    edx,0xde608b97
  682f46:	0f 84 95 00 00 00    	je     682fe1 <__cxa_finalize@plt-0xd2fe2f>
  682f4c:	81 fa 1f 3c d4 ea    	cmp    edx,0xead43c1f
  682f52:	0f 84 ae 00 00 00    	je     683006 <__cxa_finalize@plt-0xd2fe0a>
  682f58:	81 fa f8 3a b3 f7    	cmp    edx,0xf7b33af8
  682f5e:	0f 84 cc 01 00 00    	je     683130 <__cxa_finalize@plt-0xd2fce0>
  682f64:	81 fa 07 2f 76 16    	cmp    edx,0x16762f07
  682f6a:	0f 84 ae 00 00 00    	je     68301e <__cxa_finalize@plt-0xd2fdf2>
  682f70:	81 fa 4e 6f 38 28    	cmp    edx,0x28386f4e
  682f76:	0f 84 80 01 00 00    	je     6830fc <__cxa_finalize@plt-0xd2fd14>
  682f7c:	81 fa 80 7b 7a 32    	cmp    edx,0x327a7b80
  682f82:	0f 84 52 01 00 00    	je     6830da <__cxa_finalize@plt-0xd2fd36>
  682f88:	81 fa e6 22 39 60    	cmp    edx,0x603922e6
  682f8e:	0f 84 a4 01 00 00    	je     683138 <__cxa_finalize@plt-0xd2fcd8>
  682f94:	81 fa 4d 27 2c 6a    	cmp    edx,0x6a2c274d
  682f9a:	0f 84 c0 01 00 00    	je     683160 <__cxa_finalize@plt-0xd2fcb0>
  682fa0:	81 fa 62 95 1f 6e    	cmp    edx,0x6e1f9562
  682fa6:	0f 84 97 00 00 00    	je     683043 <__cxa_finalize@plt-0xd2fdcd>
  682fac:	81 fa 67 5c 79 74    	cmp    edx,0x74795c67
  682fb2:	0f 84 00 01 00 00    	je     6830b8 <__cxa_finalize@plt-0xd2fd58>
  682fb8:	81 fa 26 a1 05 19    	cmp    edx,0x1905a126
  682fbe:	0f 85 94 01 00 00    	jne    683158 <__cxa_finalize@plt-0xd2fcb8>
  682fc4:	e9 d3 01 00 00       	jmp    68319c <__cxa_finalize@plt-0xd2fc74>
  682fc9:	4d 89 f0             	mov    r8,r14
  682fcc:	4d 0f a4 f8 1f       	shld   r8,r15,0x1f
  682fd1:	4d 0f a4 f7 1f       	shld   r15,r14,0x1f
  682fd6:	41 ba c1 af 54 2c    	mov    r10d,0x2c54afc1
  682fdc:	e9 aa 01 00 00       	jmp    68318b <__cxa_finalize@plt-0xd2fc85>
  682fe1:	49 b8 7d a2 c7 1a f8 	movabs r8,0x531268f81ac7a27d
  682fe8:	68 12 53 
  682feb:	4d 31 c7             	xor    r15,r8
  682fee:	49 b8 35 8b f6 e2 69 	movabs r8,0x44a9f069e2f68b35
  682ff5:	f0 a9 44 
  682ff8:	4d 31 c6             	xor    r14,r8
  682ffb:	41 ba bd da b6 02    	mov    r10d,0x2b6dabd
  683001:	e9 52 01 00 00       	jmp    683158 <__cxa_finalize@plt-0xd2fcb8>
  683006:	4d 89 f0             	mov    r8,r14
  683009:	4d 0f a4 f8 03       	shld   r8,r15,0x3
  68300e:	4d 0f a4 f7 03       	shld   r15,r14,0x3
  683013:	41 ba 52 1b f8 80    	mov    r10d,0x80f81b52
  683019:	e9 6d 01 00 00       	jmp    68318b <__cxa_finalize@plt-0xd2fc85>
  68301e:	49 b8 b2 c4 2d d2 82 	movabs r8,0xea78ca82d22dc4b2
  683025:	ca 78 ea 
  683028:	4d 01 c7             	add    r15,r8
  68302b:	49 b8 42 7b d2 fa e2 	movabs r8,0xa53045e2fad27b42
  683032:	45 30 a5 
  683035:	4d 11 c6             	adc    r14,r8
  683038:	41 ba 65 ba 69 78    	mov    r10d,0x7869ba65
  68303e:	e9 15 01 00 00       	jmp    683158 <__cxa_finalize@plt-0xd2fcb8>
  683043:	4d 89 c2             	mov    r10,r8
  683046:	49 c1 ea 04          	shr    r10,0x4
  68304a:	4d 21 e2             	and    r10,r12
  68304d:	4d 21 e0             	and    r8,r12
  683050:	49 c1 e0 04          	shl    r8,0x4
  683054:	4d 09 d0             	or     r8,r10
  683057:	4d 89 c2             	mov    r10,r8
  68305a:	4d 21 ea             	and    r10,r13
  68305d:	49 c1 e8 02          	shr    r8,0x2
  683061:	4d 21 e8             	and    r8,r13
  683064:	4f 8d 04 90          	lea    r8,[r8+r10*4]
  683068:	4d 89 c2             	mov    r10,r8
  68306b:	49 21 ea             	and    r10,rbp
  68306e:	49 d1 e8             	shr    r8,1
  683071:	49 21 e8             	and    r8,rbp
  683074:	4f 8d 04 50          	lea    r8,[r8+r10*2]
  683078:	4d 89 ca             	mov    r10,r9
  68307b:	49 c1 ea 04          	shr    r10,0x4
  68307f:	4d 21 e2             	and    r10,r12
  683082:	4d 21 e1             	and    r9,r12
  683085:	49 c1 e1 04          	shl    r9,0x4
  683089:	4d 09 d1             	or     r9,r10
  68308c:	4d 89 ca             	mov    r10,r9
  68308f:	4d 21 ea             	and    r10,r13
  683092:	49 c1 e9 02          	shr    r9,0x2
  683096:	4d 21 e9             	and    r9,r13
  683099:	4f 8d 0c 91          	lea    r9,[r9+r10*4]
  68309d:	4d 89 ca             	mov    r10,r9
  6830a0:	49 21 ea             	and    r10,rbp
  6830a3:	49 d1 e9             	shr    r9,1
  6830a6:	49 21 e9             	and    r9,rbp
  6830a9:	4f 8d 0c 51          	lea    r9,[r9+r10*2]
  6830ad:	41 ba 9a af ac 99    	mov    r10d,0x99acaf9a
  6830b3:	e9 d6 00 00 00       	jmp    68318e <__cxa_finalize@plt-0xd2fc82>
  6830b8:	49 b8 1a d3 36 8f dc 	movabs r8,0x2e6ca6dc8f36d31a
  6830bf:	a6 6c 2e 
  6830c2:	4d 01 c7             	add    r15,r8
  6830c5:	49 b8 d1 5e 48 38 04 	movabs r8,0x5899f00438485ed1
  6830cc:	f0 99 58 
  6830cf:	4d 11 c6             	adc    r14,r8
  6830d2:	41 ba f0 d7 19 aa    	mov    r10d,0xaa19d7f0
  6830d8:	eb 7e                	jmp    683158 <__cxa_finalize@plt-0xd2fcb8>
  6830da:	49 b8 c5 74 f6 ef f0 	movabs r8,0xbb162bf0eff674c5
  6830e1:	2b 16 bb 
  6830e4:	4d 31 c7             	xor    r15,r8
  6830e7:	49 b8 d8 b9 08 91 28 	movabs r8,0x896948289108b9d8
  6830ee:	48 69 89 
  6830f1:	4d 31 c6             	xor    r14,r8
  6830f4:	41 ba 5e e8 fa f4    	mov    r10d,0xf4fae85e
  6830fa:	eb 5c                	jmp    683158 <__cxa_finalize@plt-0xd2fcb8>
  6830fc:	41 ba fa 47 cc f1    	mov    r10d,0xf1cc47fa
  683102:	49 b9 01 cb 46 1d f2 	movabs r9,0xd67cd0f21d46cb01
  683109:	d0 7c d6 
  68310c:	49 b8 ec 4b cf ff b7 	movabs r8,0x38d5b7b7ffcf4bec
  683113:	b7 d5 38 
  683116:	eb 76                	jmp    68318e <__cxa_finalize@plt-0xd2fc82>
  683118:	4d 89 f8             	mov    r8,r15
  68311b:	4d 0f a4 f0 26       	shld   r8,r14,0x26
  683120:	4d 0f a4 fe 26       	shld   r14,r15,0x26
  683125:	41 ba 34 53 8e eb    	mov    r10d,0xeb8e5334
  68312b:	4d 89 f1             	mov    r9,r14
  68312e:	eb 5e                	jmp    68318e <__cxa_finalize@plt-0xd2fc82>
  683130:	41 ba 88 ef fd 59    	mov    r10d,0x59fdef88
  683136:	eb 56                	jmp    68318e <__cxa_finalize@plt-0xd2fc82>
  683138:	49 b8 7c 09 e5 da fc 	movabs r8,0xaae68bfcdae5097c
  68313f:	8b e6 aa 
  683142:	4d 01 c7             	add    r15,r8
  683145:	49 b8 8c 34 49 5c dd 	movabs r8,0x17d6c3dd5c49348c
  68314c:	c3 d6 17 
  68314f:	4d 11 c6             	adc    r14,r8
  683152:	41 ba 81 7e 40 14    	mov    r10d,0x14407e81
  683158:	4d 89 f9             	mov    r9,r15
  68315b:	4d 89 f0             	mov    r8,r14
  68315e:	eb 2e                	jmp    68318e <__cxa_finalize@plt-0xd2fc82>
  683160:	41 ba ab 05 15 0a    	mov    r10d,0xa1505ab
  683166:	eb 26                	jmp    68318e <__cxa_finalize@plt-0xd2fc82>
  683168:	41 ba 2d 7e a0 ca    	mov    r10d,0xcaa07e2d
  68316e:	eb 1e                	jmp    68318e <__cxa_finalize@plt-0xd2fc82>
  683170:	41 ba bb 84 43 9e    	mov    r10d,0x9e4384bb
  683176:	eb 16                	jmp    68318e <__cxa_finalize@plt-0xd2fc82>
  683178:	4d 89 f0             	mov    r8,r14
  68317b:	4d 0f a4 f8 14       	shld   r8,r15,0x14
  683180:	4d 0f a4 f7 14       	shld   r15,r14,0x14
  683185:	41 ba ed f0 08 29    	mov    r10d,0x2908f0ed
  68318b:	4d 89 f9             	mov    r9,r15
  68318e:	44 31 d2             	xor    edx,r10d
  683191:	4d 89 cf             	mov    r15,r9
  683194:	4d 89 c6             	mov    r14,r8
  683197:	e9 5c fd ff ff       	jmp    682ef8 <__cxa_finalize@plt-0xd2ff18>
  68319c:	41 b8 8b c4 9d 3c    	mov    r8d,0x3c9dc48b
  6831a2:	e9 6a 44 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  6831a7:	ba 0e 6f be 4c       	mov    edx,0x4cbe6f0e
  6831ac:	31 ff                	xor    edi,edi
  6831ae:	45 31 c0             	xor    r8d,r8d
  6831b1:	31 f6                	xor    esi,esi
  6831b3:	49 89 fa             	mov    r10,rdi
  6831b6:	49 0f ca             	bswap  r10
  6831b9:	49 89 f1             	mov    r9,rsi
  6831bc:	49 0f c9             	bswap  r9
  6831bf:	81 fa fa 03 6b 97    	cmp    edx,0x976b03fa
  6831c5:	0f 84 a9 01 00 00    	je     683374 <__cxa_finalize@plt-0xd2fa9c>
  6831cb:	81 fa 3d 2d 5a b4    	cmp    edx,0xb45a2d3d
  6831d1:	0f 84 78 02 00 00    	je     68344f <__cxa_finalize@plt-0xd2f9c1>
  6831d7:	81 fa 2b ca 40 e2    	cmp    edx,0xe240ca2b
  6831dd:	74 79                	je     683258 <__cxa_finalize@plt-0xd2fbb8>
  6831df:	81 fa 83 aa cf eb    	cmp    edx,0xebcfaa83
  6831e5:	0f 84 92 00 00 00    	je     68327d <__cxa_finalize@plt-0xd2fb93>
  6831eb:	81 fa ed 4b f2 f7    	cmp    edx,0xf7f24bed
  6831f1:	0f 84 ef 01 00 00    	je     6833e6 <__cxa_finalize@plt-0xd2fa2a>
  6831f7:	81 fa db 5b 00 fc    	cmp    edx,0xfc005bdb
  6831fd:	0f 84 92 00 00 00    	je     683295 <__cxa_finalize@plt-0xd2fb7b>
  683203:	81 fa 1d 23 a8 05    	cmp    edx,0x5a8231d
  683209:	0f 84 47 01 00 00    	je     683356 <__cxa_finalize@plt-0xd2faba>
  68320f:	81 fa 3d d7 1c 0c    	cmp    edx,0xc1cd73d
  683215:	0f 84 19 01 00 00    	je     683334 <__cxa_finalize@plt-0xd2fadc>
  68321b:	81 fa 59 b0 d1 0e    	cmp    edx,0xed1b059
  683221:	0f 84 e4 01 00 00    	je     68340b <__cxa_finalize@plt-0xd2fa05>
  683227:	81 fa 0e 6f be 4c    	cmp    edx,0x4cbe6f0e
  68322d:	0f 84 fd 01 00 00    	je     683430 <__cxa_finalize@plt-0xd2f9e0>
  683233:	81 fa 58 17 11 60    	cmp    edx,0x60111758
  683239:	74 72                	je     6832ad <__cxa_finalize@plt-0xd2fb63>
  68323b:	81 fa af 5b c4 79    	cmp    edx,0x79c45baf
  683241:	0f 84 d8 00 00 00    	je     68331f <__cxa_finalize@plt-0xd2faf1>
  683247:	81 fa 93 37 bb 99    	cmp    edx,0x99bb3793
  68324d:	0f 85 19 01 00 00    	jne    68336c <__cxa_finalize@plt-0xd2faa4>
  683253:	e9 1c 02 00 00       	jmp    683474 <__cxa_finalize@plt-0xd2f99c>
  683258:	49 b8 52 31 c3 81 f7 	movabs r8,0x4d28b1f781c33152
  68325f:	b1 28 4d 
  683262:	4c 01 c7             	add    rdi,r8
  683265:	49 b8 4e cf a6 5c 21 	movabs r8,0x55437e215ca6cf4e
  68326c:	7e 43 55 
  68326f:	4c 11 c6             	adc    rsi,r8
  683272:	41 b8 a8 60 8f 09    	mov    r8d,0x98f60a8
  683278:	e9 ef 00 00 00       	jmp    68336c <__cxa_finalize@plt-0xd2faa4>
  68327d:	49 89 f9             	mov    r9,rdi
  683280:	49 0f a4 f1 3d       	shld   r9,rsi,0x3d
  683285:	48 0f ac f7 03       	shrd   rdi,rsi,0x3
  68328a:	41 b8 be 7d d3 e7    	mov    r8d,0xe7d37dbe
  683290:	e9 d4 00 00 00       	jmp    683369 <__cxa_finalize@plt-0xd2faa7>
  683295:	49 89 f1             	mov    r9,rsi
  683298:	49 0f a4 f9 17       	shld   r9,rdi,0x17
  68329d:	48 0f a4 f7 17       	shld   rdi,rsi,0x17
  6832a2:	41 b8 e6 76 5a 48    	mov    r8d,0x485a76e6
  6832a8:	e9 bc 00 00 00       	jmp    683369 <__cxa_finalize@plt-0xd2faa7>
  6832ad:	4c 89 d6             	mov    rsi,r10
  6832b0:	48 c1 ee 04          	shr    rsi,0x4
  6832b4:	4c 21 e6             	and    rsi,r12
  6832b7:	4d 21 e2             	and    r10,r12
  6832ba:	49 c1 e2 04          	shl    r10,0x4
  6832be:	49 09 f2             	or     r10,rsi
  6832c1:	4c 89 d6             	mov    rsi,r10
  6832c4:	4c 21 ee             	and    rsi,r13
  6832c7:	49 c1 ea 02          	shr    r10,0x2
  6832cb:	4d 21 ea             	and    r10,r13
  6832ce:	49 8d 34 b2          	lea    rsi,[r10+rsi*4]
  6832d2:	48 89 f7             	mov    rdi,rsi
  6832d5:	48 21 ef             	and    rdi,rbp
  6832d8:	48 d1 ee             	shr    rsi,1
  6832db:	48 21 ee             	and    rsi,rbp
  6832de:	48 8d 34 7e          	lea    rsi,[rsi+rdi*2]
  6832e2:	4c 89 cf             	mov    rdi,r9
  6832e5:	48 c1 ef 04          	shr    rdi,0x4
  6832e9:	4c 21 e7             	and    rdi,r12
  6832ec:	4d 21 e1             	and    r9,r12
  6832ef:	49 c1 e1 04          	shl    r9,0x4
  6832f3:	49 09 f9             	or     r9,rdi
  6832f6:	4c 89 cf             	mov    rdi,r9
  6832f9:	4c 21 ef             	and    rdi,r13
  6832fc:	49 c1 e9 02          	shr    r9,0x2
  683300:	4d 21 e9             	and    r9,r13
  683303:	49 8d 3c b9          	lea    rdi,[r9+rdi*4]
  683307:	49 89 f8             	mov    r8,rdi
  68330a:	49 21 e8             	and    r8,rbp
  68330d:	48 d1 ef             	shr    rdi,1
  683310:	48 21 ef             	and    rdi,rbp
  683313:	4a 8d 3c 47          	lea    rdi,[rdi+r8*2]
  683317:	41 b8 cb 20 aa f9    	mov    r8d,0xf9aa20cb
  68331d:	eb 4d                	jmp    68336c <__cxa_finalize@plt-0xd2faa4>
  68331f:	49 89 f9             	mov    r9,rdi
  683322:	49 0f a4 f1 0a       	shld   r9,rsi,0xa
  683327:	48 0f ac f7 36       	shrd   rdi,rsi,0x36
  68332c:	41 b8 84 91 84 9b    	mov    r8d,0x9b849184
  683332:	eb 35                	jmp    683369 <__cxa_finalize@plt-0xd2faa7>
  683334:	49 b8 3a 0c 99 44 b9 	movabs r8,0x90252eb944990c3a
  68333b:	2e 25 90 
  68333e:	4c 31 c7             	xor    rdi,r8
  683341:	49 b8 85 21 40 ba 85 	movabs r8,0x2cd6b85ba402185
  683348:	6b cd 02 
  68334b:	4c 31 c6             	xor    rsi,r8
  68334e:	41 b8 20 f4 b4 09    	mov    r8d,0x9b4f420
  683354:	eb 16                	jmp    68336c <__cxa_finalize@plt-0xd2faa4>
  683356:	49 89 f9             	mov    r9,rdi
  683359:	49 0f a4 f1 1b       	shld   r9,rsi,0x1b
  68335e:	48 0f ac f7 25       	shrd   rdi,rsi,0x25
  683363:	41 b8 45 34 b9 65    	mov    r8d,0x65b93445
  683369:	4c 89 ce             	mov    rsi,r9
  68336c:	44 31 c2             	xor    edx,r8d
  68336f:	e9 3f fe ff ff       	jmp    6831b3 <__cxa_finalize@plt-0xd2fc5d>
  683374:	4c 89 d6             	mov    rsi,r10
  683377:	48 c1 ee 04          	shr    rsi,0x4
  68337b:	4c 21 e6             	and    rsi,r12
  68337e:	4d 21 e2             	and    r10,r12
  683381:	49 c1 e2 04          	shl    r10,0x4
  683385:	49 09 f2             	or     r10,rsi
  683388:	4c 89 d6             	mov    rsi,r10
  68338b:	4c 21 ee             	and    rsi,r13
  68338e:	49 c1 ea 02          	shr    r10,0x2
  683392:	4d 21 ea             	and    r10,r13
  683395:	49 8d 34 b2          	lea    rsi,[r10+rsi*4]
  683399:	48 89 f7             	mov    rdi,rsi
  68339c:	48 21 ef             	and    rdi,rbp
  68339f:	48 d1 ee             	shr    rsi,1
  6833a2:	48 21 ee             	and    rsi,rbp
  6833a5:	48 8d 34 7e          	lea    rsi,[rsi+rdi*2]
  6833a9:	4c 89 cf             	mov    rdi,r9
  6833ac:	48 c1 ef 04          	shr    rdi,0x4
  6833b0:	4c 21 e7             	and    rdi,r12
  6833b3:	4d 21 e1             	and    r9,r12
  6833b6:	49 c1 e1 04          	shl    r9,0x4
  6833ba:	49 09 f9             	or     r9,rdi
  6833bd:	4c 89 cf             	mov    rdi,r9
  6833c0:	4c 21 ef             	and    rdi,r13
  6833c3:	49 c1 e9 02          	shr    r9,0x2
  6833c7:	4d 21 e9             	and    r9,r13
  6833ca:	49 8d 3c b9          	lea    rdi,[r9+rdi*4]
  6833ce:	49 89 f8             	mov    r8,rdi
  6833d1:	49 21 e8             	and    r8,rbp
  6833d4:	48 d1 ef             	shr    rdi,1
  6833d7:	48 21 ef             	and    rdi,rbp
  6833da:	4a 8d 3c 47          	lea    rdi,[rdi+r8*2]
  6833de:	41 b8 21 58 6b 6b    	mov    r8d,0x6b6b5821
  6833e4:	eb 86                	jmp    68336c <__cxa_finalize@plt-0xd2faa4>
  6833e6:	49 b8 a4 ec 18 3f 9a 	movabs r8,0x32c6a39a3f18eca4
  6833ed:	a3 c6 32 
  6833f0:	4c 01 c7             	add    rdi,r8
  6833f3:	49 b8 b7 83 18 ab 69 	movabs r8,0x2b163369ab1883b7
  6833fa:	33 16 2b 
  6833fd:	4c 11 c6             	adc    rsi,r8
  683400:	41 b8 42 10 36 8e    	mov    r8d,0x8e361042
  683406:	e9 61 ff ff ff       	jmp    68336c <__cxa_finalize@plt-0xd2faa4>
  68340b:	49 b8 57 44 d1 ae fb 	movabs r8,0x26c28ffbaed14457
  683412:	8f c2 26 
  683415:	4c 01 c7             	add    rdi,r8
  683418:	49 b8 9c 68 fa 12 98 	movabs r8,0x8009a89812fa689c
  68341f:	a8 09 80 
  683422:	4c 11 c6             	adc    rsi,r8
  683425:	41 b8 b4 fb 23 f9    	mov    r8d,0xf923fbb4
  68342b:	e9 3c ff ff ff       	jmp    68336c <__cxa_finalize@plt-0xd2faa4>
  683430:	41 b8 f4 6c d5 db    	mov    r8d,0xdbd56cf4
  683436:	48 bf 67 fa 79 cf 19 	movabs rdi,0x1b3d8319cf79fa67
  68343d:	83 3d 1b 
  683440:	48 be 07 38 f4 19 4a 	movabs rsi,0xbe4b8e4a19f43807
  683447:	8e 4b be 
  68344a:	e9 1d ff ff ff       	jmp    68336c <__cxa_finalize@plt-0xd2faa4>
  68344f:	49 b8 c5 f5 3f 56 fc 	movabs r8,0x2f825cfc563ff5c5
  683456:	5c 82 2f 
  683459:	4c 01 c7             	add    rdi,r8
  68345c:	49 b8 fa c6 88 c9 50 	movabs r8,0x12a0c350c988c6fa
  683463:	c3 a0 12 
  683466:	4c 11 c6             	adc    rsi,r8
  683469:	41 b8 64 9d 8b ba    	mov    r8d,0xba8b9d64
  68346f:	e9 f8 fe ff ff       	jmp    68336c <__cxa_finalize@plt-0xd2faa4>
  683474:	ba af ca 85 44       	mov    edx,0x4485caaf
  683479:	45 31 ff             	xor    r15d,r15d
  68347c:	45 31 c0             	xor    r8d,r8d
  68347f:	45 31 f6             	xor    r14d,r14d
  683482:	81 fa f0 77 46 80    	cmp    edx,0x804677f0
  683488:	0f 84 b6 00 00 00    	je     683544 <__cxa_finalize@plt-0xd2f8cc>
  68348e:	81 fa 2d 08 dd ee    	cmp    edx,0xeedd082d
  683494:	0f 84 6c 01 00 00    	je     683606 <__cxa_finalize@plt-0xd2f80a>
  68349a:	81 fa 94 fa 62 1a    	cmp    edx,0x1a62fa94
  6834a0:	0f 84 3e 01 00 00    	je     6835e4 <__cxa_finalize@plt-0xd2f82c>
  6834a6:	81 fa b8 74 38 35    	cmp    edx,0x353874b8
  6834ac:	74 2d                	je     6834db <__cxa_finalize@plt-0xd2f935>
  6834ae:	81 fa af ca 85 44    	cmp    edx,0x4485caaf
  6834b4:	74 6f                	je     683525 <__cxa_finalize@plt-0xd2f8eb>
  6834b6:	81 fa 5c 9b 76 4c    	cmp    edx,0x4c769b5c
  6834bc:	74 42                	je     683500 <__cxa_finalize@plt-0xd2f910>
  6834be:	81 fa 8b 33 57 62    	cmp    edx,0x6257338b
  6834c4:	0f 84 9f 00 00 00    	je     683569 <__cxa_finalize@plt-0xd2f8a7>
  6834ca:	81 fa cf 6c 8d 5b    	cmp    edx,0x5b8d6ccf
  6834d0:	0f 85 50 01 00 00    	jne    683626 <__cxa_finalize@plt-0xd2f7ea>
  6834d6:	e9 53 01 00 00       	jmp    68362e <__cxa_finalize@plt-0xd2f7e2>
  6834db:	49 b8 2a 91 b8 e4 e0 	movabs r8,0x61687e0e4b8912a
  6834e2:	87 16 06 
  6834e5:	4d 01 c7             	add    r15,r8
  6834e8:	49 b8 f8 07 79 89 9f 	movabs r8,0x5968d29f897907f8
  6834ef:	d2 68 59 
  6834f2:	4d 11 c6             	adc    r14,r8
  6834f5:	41 b8 e4 ef 4e 79    	mov    r8d,0x794eefe4
  6834fb:	e9 26 01 00 00       	jmp    683626 <__cxa_finalize@plt-0xd2f7ea>
  683500:	49 b8 cf 82 58 1c 08 	movabs r8,0x77df5081c5882cf
  683507:	f5 7d 07 
  68350a:	4d 31 c7             	xor    r15,r8
  68350d:	49 b8 e4 69 55 57 88 	movabs r8,0x19d2e788575569e4
  683514:	e7 d2 19 
  683517:	4d 31 c6             	xor    r14,r8
  68351a:	41 b8 71 93 ab a2    	mov    r8d,0xa2ab9371
  683520:	e9 01 01 00 00       	jmp    683626 <__cxa_finalize@plt-0xd2f7ea>
  683525:	41 b8 5f bd c3 c4    	mov    r8d,0xc4c3bd5f
  68352b:	49 bf 3a 7d 8a 98 ef 	movabs r15,0x8c9adcef988a7d3a
  683532:	dc 9a 8c 
  683535:	49 be 6f ae bb a7 c4 	movabs r14,0xd15742c4a7bbae6f
  68353c:	42 57 d1 
  68353f:	e9 e2 00 00 00       	jmp    683626 <__cxa_finalize@plt-0xd2f7ea>
  683544:	49 b8 f0 f9 8c 4f 3e 	movabs r8,0xe29ae53e4f8cf9f0
  68354b:	e5 9a e2 
  68354e:	4d 01 c7             	add    r15,r8
  683551:	49 b8 c6 38 02 ff a9 	movabs r8,0xfa3e8fa9ff0238c6
  683558:	8f 3e fa 
  68355b:	4d 11 c6             	adc    r14,r8
  68355e:	41 b8 48 03 7e b5    	mov    r8d,0xb57e0348
  683564:	e9 bd 00 00 00       	jmp    683626 <__cxa_finalize@plt-0xd2f7ea>
  683569:	49 0f cf             	bswap  r15
  68356c:	4d 89 f8             	mov    r8,r15
  68356f:	49 c1 e8 04          	shr    r8,0x4
  683573:	4d 21 e0             	and    r8,r12
  683576:	4d 21 e7             	and    r15,r12
  683579:	49 c1 e7 04          	shl    r15,0x4
  68357d:	4d 09 c7             	or     r15,r8
  683580:	4d 89 f8             	mov    r8,r15
  683583:	4d 21 e8             	and    r8,r13
  683586:	49 c1 ef 02          	shr    r15,0x2
  68358a:	4d 21 ef             	and    r15,r13
  68358d:	4f 8d 04 87          	lea    r8,[r15+r8*4]
  683591:	4d 89 c1             	mov    r9,r8
  683594:	49 21 e9             	and    r9,rbp
  683597:	49 d1 e8             	shr    r8,1
  68359a:	49 21 e8             	and    r8,rbp
  68359d:	4f 8d 0c 48          	lea    r9,[r8+r9*2]
  6835a1:	49 0f ce             	bswap  r14
  6835a4:	4d 89 f0             	mov    r8,r14
  6835a7:	49 c1 e8 04          	shr    r8,0x4
  6835ab:	4d 21 e0             	and    r8,r12
  6835ae:	4d 21 e6             	and    r14,r12
  6835b1:	49 c1 e6 04          	shl    r14,0x4
  6835b5:	4d 09 c6             	or     r14,r8
  6835b8:	4d 89 f0             	mov    r8,r14
  6835bb:	4d 21 e8             	and    r8,r13
  6835be:	49 c1 ee 02          	shr    r14,0x2
  6835c2:	4d 21 ee             	and    r14,r13
  6835c5:	4f 8d 04 86          	lea    r8,[r14+r8*4]
  6835c9:	4d 89 c2             	mov    r10,r8
  6835cc:	49 21 ea             	and    r10,rbp
  6835cf:	49 d1 e8             	shr    r8,1
  6835d2:	49 21 e8             	and    r8,rbp
  6835d5:	4f 8d 3c 50          	lea    r15,[r8+r10*2]
  6835d9:	41 b8 1f c9 35 78    	mov    r8d,0x7835c91f
  6835df:	4d 89 ce             	mov    r14,r9
  6835e2:	eb 42                	jmp    683626 <__cxa_finalize@plt-0xd2f7ea>
  6835e4:	49 b8 6d c0 e8 0c 9e 	movabs r8,0xe0f2649e0ce8c06d
  6835eb:	64 f2 e0 
  6835ee:	4d 01 c7             	add    r15,r8
  6835f1:	49 b8 10 ee b7 de b5 	movabs r8,0xa0a241b5deb7ee10
  6835f8:	41 a2 a0 
  6835fb:	4d 11 c6             	adc    r14,r8
  6835fe:	41 b8 5b 96 ef 41    	mov    r8d,0x41ef965b
  683604:	eb 20                	jmp    683626 <__cxa_finalize@plt-0xd2f7ea>
  683606:	49 b8 5f 30 f5 81 7d 	movabs r8,0x8556537d81f5305f
  68360d:	53 56 85 
  683610:	4d 01 c7             	add    r15,r8
  683613:	49 b8 32 2a 76 1f 49 	movabs r8,0xcd0a6491f762a32
  68361a:	a6 d0 0c 
  68361d:	4d 11 c6             	adc    r14,r8
  683620:	41 b8 a6 3b 8a 8c    	mov    r8d,0x8c8a3ba6
  683626:	44 31 c2             	xor    edx,r8d
  683629:	e9 54 fe ff ff       	jmp    683482 <__cxa_finalize@plt-0xd2f98e>
  68362e:	41 b8 60 28 e2 33    	mov    r8d,0x33e22860
  683634:	e9 d8 3f 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  683639:	ba 13 d0 b7 26       	mov    edx,0x26b7d013
  68363e:	31 ff                	xor    edi,edi
  683640:	45 31 c0             	xor    r8d,r8d
  683643:	31 f6                	xor    esi,esi
  683645:	81 fa 14 31 5d 94    	cmp    edx,0x945d3114
  68364b:	0f 84 ca 00 00 00    	je     68371b <__cxa_finalize@plt-0xd2f6f5>
  683651:	81 fa de fd fe 9e    	cmp    edx,0x9efefdde
  683657:	0f 84 a9 00 00 00    	je     683706 <__cxa_finalize@plt-0xd2f70a>
  68365d:	81 fa 77 98 8a c8    	cmp    edx,0xc88a9877
  683663:	74 29                	je     68368e <__cxa_finalize@plt-0xd2f782>
  683665:	81 fa ea 76 17 ec    	cmp    edx,0xec1776ea
  68366b:	74 55                	je     6836c2 <__cxa_finalize@plt-0xd2f74e>
  68366d:	81 fa 13 d0 b7 26    	cmp    edx,0x26b7d013
  683673:	74 31                	je     6836a6 <__cxa_finalize@plt-0xd2f76a>
  683675:	81 fa 19 cc 9b 31    	cmp    edx,0x319bcc19
  68367b:	74 67                	je     6836e4 <__cxa_finalize@plt-0xd2f72c>
  68367d:	81 fa 39 eb 3d 88    	cmp    edx,0x883deb39
  683683:	0f 85 a8 00 00 00    	jne    683731 <__cxa_finalize@plt-0xd2f6df>
  683689:	e9 ab 00 00 00       	jmp    683739 <__cxa_finalize@plt-0xd2f6d7>
  68368e:	49 89 f1             	mov    r9,rsi
  683691:	49 0f a4 f9 1b       	shld   r9,rdi,0x1b
  683696:	48 0f a4 f7 1b       	shld   rdi,rsi,0x1b
  68369b:	41 b8 6e 54 11 f9    	mov    r8d,0xf911546e
  6836a1:	e9 88 00 00 00       	jmp    68372e <__cxa_finalize@plt-0xd2f6e2>
  6836a6:	41 b8 64 48 3d ee    	mov    r8d,0xee3d4864
  6836ac:	48 bf 3d 5d c3 24 6d 	movabs rdi,0x9600196d24c35d3d
  6836b3:	19 00 96 
  6836b6:	48 be 70 c6 84 06 9c 	movabs rsi,0xfa25cf9c0684c670
  6836bd:	cf 25 fa 
  6836c0:	eb 6f                	jmp    683731 <__cxa_finalize@plt-0xd2f6df>
  6836c2:	49 b8 54 b3 30 67 64 	movabs r8,0x171a52646730b354
  6836c9:	52 1a 17 
  6836cc:	4c 01 c7             	add    rdi,r8
  6836cf:	49 b8 70 72 95 a6 79 	movabs r8,0x468d8e79a6957270
  6836d6:	8e 8d 46 
  6836d9:	4c 11 c6             	adc    rsi,r8
  6836dc:	41 b8 fe 47 4a 78    	mov    r8d,0x784a47fe
  6836e2:	eb 4d                	jmp    683731 <__cxa_finalize@plt-0xd2f6df>
  6836e4:	49 b8 4a eb c0 76 6b 	movabs r8,0xfae1ef6b76c0eb4a
  6836eb:	ef e1 fa 
  6836ee:	4c 01 c7             	add    rdi,r8
  6836f1:	49 b8 41 96 f3 ba 02 	movabs r8,0x39318402baf39641
  6836f8:	84 31 39 
  6836fb:	4c 11 c6             	adc    rsi,r8
  6836fe:	41 b8 c7 31 65 af    	mov    r8d,0xaf6531c7
  683704:	eb 2b                	jmp    683731 <__cxa_finalize@plt-0xd2f6df>
  683706:	49 89 f9             	mov    r9,rdi
  683709:	49 0f a4 f1 26       	shld   r9,rsi,0x26
  68370e:	48 0f ac f7 1a       	shrd   rdi,rsi,0x1a
  683713:	41 b8 34 8b e9 72    	mov    r8d,0x72e98b34
  683719:	eb 13                	jmp    68372e <__cxa_finalize@plt-0xd2f6e2>
  68371b:	49 89 f1             	mov    r9,rsi
  68371e:	49 0f a4 f9 0e       	shld   r9,rdi,0xe
  683723:	48 0f a4 f7 0e       	shld   rdi,rsi,0xe
  683728:	41 b8 2d da 60 1c    	mov    r8d,0x1c60da2d
  68372e:	4c 89 ce             	mov    rsi,r9
  683731:	44 31 c2             	xor    edx,r8d
  683734:	e9 0c ff ff ff       	jmp    683645 <__cxa_finalize@plt-0xd2f7cb>
  683739:	ba b3 1c 70 29       	mov    edx,0x29701cb3
  68373e:	45 31 ff             	xor    r15d,r15d
  683741:	45 31 c0             	xor    r8d,r8d
  683744:	45 31 f6             	xor    r14d,r14d
  683747:	81 fa c3 9e 2f 94    	cmp    edx,0x942f9ec3
  68374d:	0f 84 ff 01 00 00    	je     683952 <__cxa_finalize@plt-0xd2f4be>
  683753:	81 fa 69 09 09 10    	cmp    edx,0x10090969
  683759:	0f 84 85 00 00 00    	je     6837e4 <__cxa_finalize@plt-0xd2f62c>
  68375f:	81 fa e7 d8 b0 10    	cmp    edx,0x10b0d8e7
  683765:	0f 84 9e 00 00 00    	je     683809 <__cxa_finalize@plt-0xd2f607>
  68376b:	4d 89 f9             	mov    r9,r15
  68376e:	49 0f c9             	bswap  r9
  683771:	4d 89 f2             	mov    r10,r14
  683774:	49 0f ca             	bswap  r10
  683777:	81 fa 0c ed 1b 1c    	cmp    edx,0x1c1bed0c
  68377d:	0f 84 b2 01 00 00    	je     683935 <__cxa_finalize@plt-0xd2f4db>
  683783:	81 fa b3 1c 70 29    	cmp    edx,0x29701cb3
  683789:	0f 84 a0 00 00 00    	je     68382f <__cxa_finalize@plt-0xd2f5e1>
  68378f:	81 fa b8 c9 bd 2b    	cmp    edx,0x2bbdc9b8
  683795:	0f 84 d8 00 00 00    	je     683873 <__cxa_finalize@plt-0xd2f59d>
  68379b:	81 fa 5e 68 df 30    	cmp    edx,0x30df685e
  6837a1:	0f 84 a7 00 00 00    	je     68384e <__cxa_finalize@plt-0xd2f5c2>
  6837a7:	81 fa fc 0a a3 56    	cmp    edx,0x56a30afc
  6837ad:	0f 84 8a 01 00 00    	je     68393d <__cxa_finalize@plt-0xd2f4d3>
  6837b3:	81 fa 4e aa 41 5b    	cmp    edx,0x5b41aa4e
  6837b9:	74 69                	je     683824 <__cxa_finalize@plt-0xd2f5ec>
  6837bb:	81 fa 94 cc 0a 62    	cmp    edx,0x620acc94
  6837c1:	0f 84 24 01 00 00    	je     6838eb <__cxa_finalize@plt-0xd2f525>
  6837c7:	81 fa 63 41 a8 69    	cmp    edx,0x69a84163
  6837cd:	0f 84 3a 01 00 00    	je     68390d <__cxa_finalize@plt-0xd2f503>
  6837d3:	81 fa 62 25 48 73    	cmp    edx,0x73482562
  6837d9:	0f 85 4e 01 00 00    	jne    68392d <__cxa_finalize@plt-0xd2f4e3>
  6837df:	e9 92 01 00 00       	jmp    683976 <__cxa_finalize@plt-0xd2f49a>
  6837e4:	49 b8 32 fc 8c 33 64 	movabs r8,0x94871a64338cfc32
  6837eb:	1a 87 94 
  6837ee:	4d 01 c7             	add    r15,r8
  6837f1:	49 b8 ce f0 44 54 cb 	movabs r8,0xb36af9cb5444f0ce
  6837f8:	f9 6a b3 
  6837fb:	4d 11 c6             	adc    r14,r8
  6837fe:	41 b8 65 e4 12 0c    	mov    r8d,0xc12e465
  683804:	e9 24 01 00 00       	jmp    68392d <__cxa_finalize@plt-0xd2f4e3>
  683809:	4d 89 f1             	mov    r9,r14
  68380c:	4d 0f a4 f9 02       	shld   r9,r15,0x2
  683811:	4d 0f a4 f7 02       	shld   r15,r14,0x2
  683816:	41 b8 8e d1 b9 00    	mov    r8d,0xb9d18e
  68381c:	4d 89 fa             	mov    r10,r15
  68381f:	e9 44 01 00 00       	jmp    683968 <__cxa_finalize@plt-0xd2f4a8>
  683824:	41 b8 2c 8f 09 28    	mov    r8d,0x28098f2c
  68382a:	e9 39 01 00 00       	jmp    683968 <__cxa_finalize@plt-0xd2f4a8>
  68382f:	41 b8 27 d0 7a 4b    	mov    r8d,0x4b7ad027
  683835:	49 ba 51 3f 7d 58 10 	movabs r10,0x3d08be10587d3f51
  68383c:	be 08 3d 
  68383f:	49 b9 65 14 dd 8a 61 	movabs r9,0xb21ae9618add1465
  683846:	e9 1a b2 
  683849:	e9 1a 01 00 00       	jmp    683968 <__cxa_finalize@plt-0xd2f4a8>
  68384e:	49 b8 5c 76 6b ee 9b 	movabs r8,0x6f8aaf9bee6b765c
  683855:	af 8a 6f 
  683858:	4d 01 c7             	add    r15,r8
  68385b:	49 b8 5c d2 4e df 1e 	movabs r8,0x2447611edf4ed25c
  683862:	61 47 24 
  683865:	4d 11 c6             	adc    r14,r8
  683868:	41 b8 3d 29 77 59    	mov    r8d,0x5977293d
  68386e:	e9 ba 00 00 00       	jmp    68392d <__cxa_finalize@plt-0xd2f4e3>
  683873:	49 0f cf             	bswap  r15
  683876:	4d 89 f8             	mov    r8,r15
  683879:	49 c1 e8 04          	shr    r8,0x4
  68387d:	4d 21 e0             	and    r8,r12
  683880:	4d 21 e7             	and    r15,r12
  683883:	49 c1 e7 04          	shl    r15,0x4
  683887:	4d 09 c7             	or     r15,r8
  68388a:	4d 89 f8             	mov    r8,r15
  68388d:	4d 21 e8             	and    r8,r13
  683890:	49 c1 ef 02          	shr    r15,0x2
  683894:	4d 21 ef             	and    r15,r13
  683897:	4f 8d 04 87          	lea    r8,[r15+r8*4]
  68389b:	4d 89 c1             	mov    r9,r8
  68389e:	49 21 e9             	and    r9,rbp
  6838a1:	49 d1 e8             	shr    r8,1
  6838a4:	49 21 e8             	and    r8,rbp
  6838a7:	4f 8d 0c 48          	lea    r9,[r8+r9*2]
  6838ab:	49 0f ce             	bswap  r14
  6838ae:	4d 89 f0             	mov    r8,r14
  6838b1:	49 c1 e8 04          	shr    r8,0x4
  6838b5:	4d 21 e0             	and    r8,r12
  6838b8:	4d 21 e6             	and    r14,r12
  6838bb:	49 c1 e6 04          	shl    r14,0x4
  6838bf:	4d 09 c6             	or     r14,r8
  6838c2:	4d 89 f0             	mov    r8,r14
  6838c5:	4d 21 e8             	and    r8,r13
  6838c8:	49 c1 ee 02          	shr    r14,0x2
  6838cc:	4d 21 ee             	and    r14,r13
  6838cf:	4f 8d 04 86          	lea    r8,[r14+r8*4]
  6838d3:	4d 89 c2             	mov    r10,r8
  6838d6:	49 21 ea             	and    r10,rbp
  6838d9:	49 d1 e8             	shr    r8,1
  6838dc:	49 21 e8             	and    r8,rbp
  6838df:	4f 8d 14 50          	lea    r10,[r8+r10*2]
  6838e3:	41 b8 44 c3 1e 7d    	mov    r8d,0x7d1ec344
  6838e9:	eb 7d                	jmp    683968 <__cxa_finalize@plt-0xd2f4a8>
  6838eb:	49 b8 e3 2e 4c 29 12 	movabs r8,0x3eabb112294c2ee3
  6838f2:	b1 ab 3e 
  6838f5:	4d 01 c7             	add    r15,r8
  6838f8:	49 b8 0d 2b b1 18 93 	movabs r8,0x286f559318b12b0d
  6838ff:	55 6f 28 
  683902:	4d 11 c6             	adc    r14,r8
  683905:	41 b8 2c 05 b7 49    	mov    r8d,0x49b7052c
  68390b:	eb 20                	jmp    68392d <__cxa_finalize@plt-0xd2f4e3>
  68390d:	49 b8 fe 56 86 88 1e 	movabs r8,0x1017ca1e888656fe
  683914:	ca 17 10 
  683917:	4d 01 c7             	add    r15,r8
  68391a:	49 b8 35 58 91 a8 d4 	movabs r8,0x6e3fd6d4a8915835
  683921:	d6 3f 6e 
  683924:	4d 11 c6             	adc    r14,r8
  683927:	41 b8 a0 df 87 fd    	mov    r8d,0xfd87dfa0
  68392d:	4d 89 fa             	mov    r10,r15
  683930:	4d 89 f1             	mov    r9,r14
  683933:	eb 33                	jmp    683968 <__cxa_finalize@plt-0xd2f4a8>
  683935:	41 b8 52 85 c4 2c    	mov    r8d,0x2cc48552
  68393b:	eb 2b                	jmp    683968 <__cxa_finalize@plt-0xd2f4a8>
  68393d:	4d 89 f9             	mov    r9,r15
  683940:	4d 0f a4 f1 08       	shld   r9,r14,0x8
  683945:	4d 0f a4 fe 08       	shld   r14,r15,0x8
  68394a:	41 b8 1b d2 13 46    	mov    r8d,0x4613d21b
  683950:	eb 13                	jmp    683965 <__cxa_finalize@plt-0xd2f4ab>
  683952:	4d 89 f9             	mov    r9,r15
  683955:	4d 0f a4 f1 16       	shld   r9,r14,0x16
  68395a:	4d 0f a4 fe 16       	shld   r14,r15,0x16
  68395f:	41 b8 8d 34 6e cf    	mov    r8d,0xcf6e348d
  683965:	4d 89 f2             	mov    r10,r14
  683968:	44 31 c2             	xor    edx,r8d
  68396b:	4d 89 d7             	mov    r15,r10
  68396e:	4d 89 ce             	mov    r14,r9
  683971:	e9 d1 fd ff ff       	jmp    683747 <__cxa_finalize@plt-0xd2f6c9>
  683976:	41 b8 c1 0e 96 3c    	mov    r8d,0x3c960ec1
  68397c:	e9 90 3c 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  683981:	ba f3 f1 72 ba       	mov    edx,0xba72f1f3
  683986:	31 ff                	xor    edi,edi
  683988:	45 31 c9             	xor    r9d,r9d
  68398b:	31 f6                	xor    esi,esi
  68398d:	49 89 f8             	mov    r8,rdi
  683990:	49 0f c8             	bswap  r8
  683993:	49 89 f2             	mov    r10,rsi
  683996:	49 0f ca             	bswap  r10
  683999:	81 fa 16 23 4f 89    	cmp    edx,0x894f2316
  68399f:	0f 84 9c 00 00 00    	je     683a41 <__cxa_finalize@plt-0xd2f3cf>
  6839a5:	81 fa b5 70 5e ac    	cmp    edx,0xac5e70b5
  6839ab:	74 5d                	je     683a0a <__cxa_finalize@plt-0xd2f406>
  6839ad:	81 fa f3 f1 72 ba    	cmp    edx,0xba72f1f3
  6839b3:	74 6d                	je     683a22 <__cxa_finalize@plt-0xd2f3ee>
  6839b5:	81 fa 6e 0b 87 ed    	cmp    edx,0xed870b6e
  6839bb:	0f 84 ad 00 00 00    	je     683a6e <__cxa_finalize@plt-0xd2f3a2>
  6839c1:	81 fa 73 c3 5c fd    	cmp    edx,0xfd5cc373
  6839c7:	0f 84 14 01 00 00    	je     683ae1 <__cxa_finalize@plt-0xd2f32f>
  6839cd:	81 fa 35 30 2d 01    	cmp    edx,0x12d3035
  6839d3:	0f 84 db 00 00 00    	je     683ab4 <__cxa_finalize@plt-0xd2f35c>
  6839d9:	81 fa 13 25 e1 19    	cmp    edx,0x19e12513
  6839df:	0f 84 e4 00 00 00    	je     683ac9 <__cxa_finalize@plt-0xd2f347>
  6839e5:	81 fa 2b bb 72 6c    	cmp    edx,0x6c72bb2b
  6839eb:	74 5f                	je     683a4c <__cxa_finalize@plt-0xd2f3c4>
  6839ed:	81 fa 80 2f 07 6e    	cmp    edx,0x6e072f80
  6839f3:	0f 84 90 00 00 00    	je     683a89 <__cxa_finalize@plt-0xd2f387>
  6839f9:	81 fa da 4d 1a ca    	cmp    edx,0xca1a4dda
  6839ff:	0f 85 a4 00 00 00    	jne    683aa9 <__cxa_finalize@plt-0xd2f367>
  683a05:	e9 55 01 00 00       	jmp    683b5f <__cxa_finalize@plt-0xd2f2b1>
  683a0a:	49 89 f8             	mov    r8,rdi
  683a0d:	49 0f a4 f0 17       	shld   r8,rsi,0x17
  683a12:	48 0f a4 fe 17       	shld   rsi,rdi,0x17
  683a17:	41 b9 a3 53 11 25    	mov    r9d,0x251153a3
  683a1d:	e9 ba 00 00 00       	jmp    683adc <__cxa_finalize@plt-0xd2f334>
  683a22:	41 b9 c6 c1 5f bb    	mov    r9d,0xbb5fc1c6
  683a28:	49 ba e8 53 31 f5 27 	movabs r10,0xac9f8a27f53153e8
  683a2f:	8a 9f ac 
  683a32:	49 b8 fa 97 c0 a8 28 	movabs r8,0x4b7d2b28a8c097fa
  683a39:	2b 7d 4b 
  683a3c:	e9 10 01 00 00       	jmp    683b51 <__cxa_finalize@plt-0xd2f2bf>
  683a41:	41 b9 96 0c 48 e7    	mov    r9d,0xe7480c96
  683a47:	e9 05 01 00 00       	jmp    683b51 <__cxa_finalize@plt-0xd2f2bf>
  683a4c:	49 b8 44 e1 21 3d a0 	movabs r8,0xe247bea03d21e144
  683a53:	be 47 e2 
  683a56:	4c 01 c7             	add    rdi,r8
  683a59:	49 b8 69 89 3f 91 56 	movabs r8,0x9035e456913f8969
  683a60:	e4 35 90 
  683a63:	4c 11 c6             	adc    rsi,r8
  683a66:	41 b9 45 b0 f5 81    	mov    r9d,0x81f5b045
  683a6c:	eb 3b                	jmp    683aa9 <__cxa_finalize@plt-0xd2f367>
  683a6e:	49 89 f0             	mov    r8,rsi
  683a71:	49 0f a4 f8 3c       	shld   r8,rdi,0x3c
  683a76:	48 0f a4 f7 3c       	shld   rdi,rsi,0x3c
  683a7b:	41 b9 1d c8 db 10    	mov    r9d,0x10dbc81d
  683a81:	49 89 fa             	mov    r10,rdi
  683a84:	e9 c8 00 00 00       	jmp    683b51 <__cxa_finalize@plt-0xd2f2bf>
  683a89:	49 b8 b5 20 32 9b 7d 	movabs r8,0xd0bab77d9b3220b5
  683a90:	b7 ba d0 
  683a93:	4c 01 c7             	add    rdi,r8
  683a96:	49 b8 41 f4 aa 83 16 	movabs r8,0xbf0f0b1683aaf441
  683a9d:	0b 0f bf 
  683aa0:	4c 11 c6             	adc    rsi,r8
  683aa3:	41 b9 ab 94 75 02    	mov    r9d,0x27594ab
  683aa9:	49 89 fa             	mov    r10,rdi
  683aac:	49 89 f0             	mov    r8,rsi
  683aaf:	e9 9d 00 00 00       	jmp    683b51 <__cxa_finalize@plt-0xd2f2bf>
  683ab4:	49 89 f8             	mov    r8,rdi
  683ab7:	49 0f a4 f0 17       	shld   r8,rsi,0x17
  683abc:	48 0f a4 fe 17       	shld   rsi,rdi,0x17
  683ac1:	41 b9 80 40 73 ad    	mov    r9d,0xad734080
  683ac7:	eb 13                	jmp    683adc <__cxa_finalize@plt-0xd2f334>
  683ac9:	49 89 f8             	mov    r8,rdi
  683acc:	49 0f a4 f0 02       	shld   r8,rsi,0x2
  683ad1:	48 0f a4 fe 02       	shld   rsi,rdi,0x2
  683ad6:	41 b9 c9 68 fb d3    	mov    r9d,0xd3fb68c9
  683adc:	49 89 f2             	mov    r10,rsi
  683adf:	eb 70                	jmp    683b51 <__cxa_finalize@plt-0xd2f2bf>
  683ae1:	4c 89 c6             	mov    rsi,r8
  683ae4:	48 c1 ee 04          	shr    rsi,0x4
  683ae8:	4c 21 e6             	and    rsi,r12
  683aeb:	4d 21 e0             	and    r8,r12
  683aee:	49 c1 e0 04          	shl    r8,0x4
  683af2:	49 09 f0             	or     r8,rsi
  683af5:	4c 89 c6             	mov    rsi,r8
  683af8:	4c 21 ee             	and    rsi,r13
  683afb:	49 c1 e8 02          	shr    r8,0x2
  683aff:	4d 21 e8             	and    r8,r13
  683b02:	49 8d 34 b0          	lea    rsi,[r8+rsi*4]
  683b06:	48 89 f7             	mov    rdi,rsi
  683b09:	48 21 ef             	and    rdi,rbp
  683b0c:	48 d1 ee             	shr    rsi,1
  683b0f:	48 21 ee             	and    rsi,rbp
  683b12:	4c 8d 04 7e          	lea    r8,[rsi+rdi*2]
  683b16:	4c 89 d6             	mov    rsi,r10
  683b19:	48 c1 ee 04          	shr    rsi,0x4
  683b1d:	4c 21 e6             	and    rsi,r12
  683b20:	4d 21 e2             	and    r10,r12
  683b23:	49 c1 e2 04          	shl    r10,0x4
  683b27:	49 09 f2             	or     r10,rsi
  683b2a:	4c 89 d6             	mov    rsi,r10
  683b2d:	4c 21 ee             	and    rsi,r13
  683b30:	49 c1 ea 02          	shr    r10,0x2
  683b34:	4d 21 ea             	and    r10,r13
  683b37:	49 8d 34 b2          	lea    rsi,[r10+rsi*4]
  683b3b:	48 89 f7             	mov    rdi,rsi
  683b3e:	48 21 ef             	and    rdi,rbp
  683b41:	48 d1 ee             	shr    rsi,1
  683b44:	48 21 ee             	and    rsi,rbp
  683b47:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  683b4b:	41 b9 60 e6 bd e4    	mov    r9d,0xe4bde660
  683b51:	44 31 ca             	xor    edx,r9d
  683b54:	4c 89 d7             	mov    rdi,r10
  683b57:	4c 89 c6             	mov    rsi,r8
  683b5a:	e9 2e fe ff ff       	jmp    68398d <__cxa_finalize@plt-0xd2f483>
  683b5f:	ba 46 46 4d d8       	mov    edx,0xd84d4646
  683b64:	45 31 ff             	xor    r15d,r15d
  683b67:	45 31 c0             	xor    r8d,r8d
  683b6a:	45 31 f6             	xor    r14d,r14d
  683b6d:	4d 89 f9             	mov    r9,r15
  683b70:	49 0f c9             	bswap  r9
  683b73:	4d 89 f2             	mov    r10,r14
  683b76:	49 0f ca             	bswap  r10
  683b79:	81 fa 36 58 dc a0    	cmp    edx,0xa0dc5836
  683b7f:	0f 84 8c 02 00 00    	je     683e11 <__cxa_finalize@plt-0xd2efff>
  683b85:	81 fa ca 7d 0b ad    	cmp    edx,0xad0b7dca
  683b8b:	0f 84 88 02 00 00    	je     683e19 <__cxa_finalize@plt-0xd2eff7>
  683b91:	81 fa ee 7a 68 d1    	cmp    edx,0xd1687aee
  683b97:	0f 84 a1 00 00 00    	je     683c3e <__cxa_finalize@plt-0xd2f1d2>
  683b9d:	81 fa 46 46 4d d8    	cmp    edx,0xd84d4646
  683ba3:	0f 84 d2 01 00 00    	je     683d7b <__cxa_finalize@plt-0xd2f095>
  683ba9:	81 fa 33 e2 52 e3    	cmp    edx,0xe352e233
  683baf:	0f 84 44 02 00 00    	je     683df9 <__cxa_finalize@plt-0xd2f017>
  683bb5:	81 fa 75 0a 6a e6    	cmp    edx,0xe66a0a75
  683bbb:	0f 84 a2 00 00 00    	je     683c63 <__cxa_finalize@plt-0xd2f1ad>
  683bc1:	81 fa 13 ff b6 f7    	cmp    edx,0xf7b6ff13
  683bc7:	0f 84 a1 00 00 00    	je     683c6e <__cxa_finalize@plt-0xd2f1a2>
  683bcd:	81 fa ce af f3 0b    	cmp    edx,0xbf3afce
  683bd3:	0f 84 c1 01 00 00    	je     683d9a <__cxa_finalize@plt-0xd2f076>
  683bd9:	81 fa d1 39 c7 2b    	cmp    edx,0x2bc739d1
  683bdf:	0f 84 04 01 00 00    	je     683ce9 <__cxa_finalize@plt-0xd2f127>
  683be5:	81 fa 07 f5 67 39    	cmp    edx,0x3967f507
  683beb:	0f 84 65 01 00 00    	je     683d56 <__cxa_finalize@plt-0xd2f0ba>
  683bf1:	81 fa 21 f2 cd 3f    	cmp    edx,0x3fcdf221
  683bf7:	0f 84 34 01 00 00    	je     683d31 <__cxa_finalize@plt-0xd2f0df>
  683bfd:	81 fa 5e f2 c9 56    	cmp    edx,0x56c9f25e
  683c03:	0f 84 ac 01 00 00    	je     683db5 <__cxa_finalize@plt-0xd2f05b>
  683c09:	81 fa 14 d3 ea 5b    	cmp    edx,0x5bead314
  683c0f:	0f 84 c2 01 00 00    	je     683dd7 <__cxa_finalize@plt-0xd2f039>
  683c15:	81 fa 87 6a b6 70    	cmp    edx,0x70b66a87
  683c1b:	0f 84 ed 00 00 00    	je     683d0e <__cxa_finalize@plt-0xd2f102>
  683c21:	81 fa 75 38 f5 7a    	cmp    edx,0x7af53875
  683c27:	0f 84 f9 00 00 00    	je     683d26 <__cxa_finalize@plt-0xd2f0ea>
  683c2d:	81 fa 27 af 92 7f    	cmp    edx,0x7f92af27
  683c33:	0f 85 00 02 00 00    	jne    683e39 <__cxa_finalize@plt-0xd2efd7>
  683c39:	e9 0f 02 00 00       	jmp    683e4d <__cxa_finalize@plt-0xd2efc3>
  683c3e:	49 b8 2b 5b 8b 9d ec 	movabs r8,0xc39489ec9d8b5b2b
  683c45:	89 94 c3 
  683c48:	4d 01 c7             	add    r15,r8
  683c4b:	49 b8 89 1a d1 a0 99 	movabs r8,0xc3469899a0d11a89
  683c52:	98 46 c3 
  683c55:	4d 11 c6             	adc    r14,r8
  683c58:	41 b8 cf 88 a5 ee    	mov    r8d,0xeea588cf
  683c5e:	e9 d6 01 00 00       	jmp    683e39 <__cxa_finalize@plt-0xd2efd7>
  683c63:	41 b8 46 e8 38 05    	mov    r8d,0x538e846
  683c69:	e9 d1 01 00 00       	jmp    683e3f <__cxa_finalize@plt-0xd2efd1>
  683c6e:	49 0f cf             	bswap  r15
  683c71:	4d 89 f8             	mov    r8,r15
  683c74:	49 c1 e8 04          	shr    r8,0x4
  683c78:	4d 21 e0             	and    r8,r12
  683c7b:	4d 21 e7             	and    r15,r12
  683c7e:	49 c1 e7 04          	shl    r15,0x4
  683c82:	4d 09 c7             	or     r15,r8
  683c85:	4d 89 f8             	mov    r8,r15
  683c88:	4d 21 e8             	and    r8,r13
  683c8b:	49 c1 ef 02          	shr    r15,0x2
  683c8f:	4d 21 ef             	and    r15,r13
  683c92:	4f 8d 04 87          	lea    r8,[r15+r8*4]
  683c96:	4d 89 c1             	mov    r9,r8
  683c99:	49 21 e9             	and    r9,rbp
  683c9c:	49 d1 e8             	shr    r8,1
  683c9f:	49 21 e8             	and    r8,rbp
  683ca2:	4f 8d 0c 48          	lea    r9,[r8+r9*2]
  683ca6:	49 0f ce             	bswap  r14
  683ca9:	4d 89 f0             	mov    r8,r14
  683cac:	49 c1 e8 04          	shr    r8,0x4
  683cb0:	4d 21 e0             	and    r8,r12
  683cb3:	4d 21 e6             	and    r14,r12
  683cb6:	49 c1 e6 04          	shl    r14,0x4
  683cba:	4d 09 c6             	or     r14,r8
  683cbd:	4d 89 f0             	mov    r8,r14
  683cc0:	4d 21 e8             	and    r8,r13
  683cc3:	49 c1 ee 02          	shr    r14,0x2
  683cc7:	4d 21 ee             	and    r14,r13
  683cca:	4f 8d 04 86          	lea    r8,[r14+r8*4]
  683cce:	4d 89 c2             	mov    r10,r8
  683cd1:	49 21 ea             	and    r10,rbp
  683cd4:	49 d1 e8             	shr    r8,1
  683cd7:	49 21 e8             	and    r8,rbp
  683cda:	4f 8d 14 50          	lea    r10,[r8+r10*2]
  683cde:	41 b8 66 c7 43 8d    	mov    r8d,0x8d43c766
  683ce4:	e9 56 01 00 00       	jmp    683e3f <__cxa_finalize@plt-0xd2efd1>
  683ce9:	49 b8 ef e9 2b e4 11 	movabs r8,0x9f98ea11e42be9ef
  683cf0:	ea 98 9f 
  683cf3:	4d 01 c7             	add    r15,r8
  683cf6:	49 b8 c5 e4 d4 43 2a 	movabs r8,0x86fb882a43d4e4c5
  683cfd:	88 fb 86 
  683d00:	4d 11 c6             	adc    r14,r8
  683d03:	41 b8 1b 44 cc 86    	mov    r8d,0x86cc441b
  683d09:	e9 2b 01 00 00       	jmp    683e39 <__cxa_finalize@plt-0xd2efd7>
  683d0e:	4d 89 f1             	mov    r9,r14
  683d11:	4d 0f a4 f9 2b       	shld   r9,r15,0x2b
  683d16:	4d 0f a4 f7 2b       	shld   r15,r14,0x2b
  683d1b:	41 b8 f2 60 dc 96    	mov    r8d,0x96dc60f2
  683d21:	e9 87 00 00 00       	jmp    683dad <__cxa_finalize@plt-0xd2f063>
  683d26:	41 b8 2b ca 3c 2c    	mov    r8d,0x2c3cca2b
  683d2c:	e9 0e 01 00 00       	jmp    683e3f <__cxa_finalize@plt-0xd2efd1>
  683d31:	49 b8 bc 52 f2 e4 7d 	movabs r8,0xc02c257de4f252bc
  683d38:	25 2c c0 
  683d3b:	4d 31 c7             	xor    r15,r8
  683d3e:	49 b8 7e fd b5 d2 b9 	movabs r8,0xdd4532b9d2b5fd7e
  683d45:	32 45 dd 
  683d48:	4d 31 c6             	xor    r14,r8
  683d4b:	41 b8 35 21 27 64    	mov    r8d,0x64272135
  683d51:	e9 e3 00 00 00       	jmp    683e39 <__cxa_finalize@plt-0xd2efd7>
  683d56:	49 b8 a4 e2 49 b9 fb 	movabs r8,0xff31c1fbb949e2a4
  683d5d:	c1 31 ff 
  683d60:	4d 01 c7             	add    r15,r8
  683d63:	49 b8 6e 4a 81 07 18 	movabs r8,0xc4e6aa1807814a6e
  683d6a:	aa e6 c4 
  683d6d:	4d 11 c6             	adc    r14,r8
  683d70:	41 b8 e9 8f 0f e8    	mov    r8d,0xe80f8fe9
  683d76:	e9 be 00 00 00       	jmp    683e39 <__cxa_finalize@plt-0xd2efd7>
  683d7b:	41 b8 70 1e 91 78    	mov    r8d,0x78911e70
  683d81:	49 ba e0 c9 73 dc 23 	movabs r10,0x42025923dc73c9e0
  683d88:	59 02 42 
  683d8b:	49 b9 9b 12 12 45 54 	movabs r9,0xe791d7544512129b
  683d92:	d7 91 e7 
  683d95:	e9 a5 00 00 00       	jmp    683e3f <__cxa_finalize@plt-0xd2efd1>
  683d9a:	4d 89 f1             	mov    r9,r14
  683d9d:	4d 0f a4 f9 04       	shld   r9,r15,0x4
  683da2:	4d 0f a4 f7 04       	shld   r15,r14,0x4
  683da7:	41 b8 e9 00 61 74    	mov    r8d,0x746100e9
  683dad:	4d 89 fa             	mov    r10,r15
  683db0:	e9 8a 00 00 00       	jmp    683e3f <__cxa_finalize@plt-0xd2efd1>
  683db5:	49 b8 a2 8a 4b d5 76 	movabs r8,0xab56f676d54b8aa2
  683dbc:	f6 56 ab 
  683dbf:	4d 31 c7             	xor    r15,r8
  683dc2:	49 b8 4c 00 8c e7 98 	movabs r8,0x8ec90398e78c004c
  683dc9:	03 c9 8e 
  683dcc:	4d 31 c6             	xor    r14,r8
  683dcf:	41 b8 90 5d 3a 5d    	mov    r8d,0x5d3a5d90
  683dd5:	eb 62                	jmp    683e39 <__cxa_finalize@plt-0xd2efd7>
  683dd7:	49 b8 9f d6 2e 3a cd 	movabs r8,0x33a72ecd3a2ed69f
  683dde:	2e a7 33 
  683de1:	4d 01 c7             	add    r15,r8
  683de4:	49 b8 80 5a 54 11 05 	movabs r8,0x1955e20511545a80
  683deb:	e2 55 19 
  683dee:	4d 11 c6             	adc    r14,r8
  683df1:	41 b8 93 b9 5c 2b    	mov    r8d,0x2b5cb993
  683df7:	eb 40                	jmp    683e39 <__cxa_finalize@plt-0xd2efd7>
  683df9:	4d 89 f9             	mov    r9,r15
  683dfc:	4d 0f a4 f1 03       	shld   r9,r14,0x3
  683e01:	4d 0f a4 fe 03       	shld   r14,r15,0x3
  683e06:	41 b8 e2 db 95 c8    	mov    r8d,0xc895dbe2
  683e0c:	4d 89 f2             	mov    r10,r14
  683e0f:	eb 2e                	jmp    683e3f <__cxa_finalize@plt-0xd2efd1>
  683e11:	41 b8 31 ad bb 99    	mov    r8d,0x99bbad31
  683e17:	eb 26                	jmp    683e3f <__cxa_finalize@plt-0xd2efd1>
  683e19:	49 b8 71 d9 8c ad 23 	movabs r8,0x17b31c23ad8cd971
  683e20:	1c b3 17 
  683e23:	4d 01 c7             	add    r15,r8
  683e26:	49 b8 b2 e6 e6 41 03 	movabs r8,0x9035b10341e6e6b2
  683e2d:	b1 35 90 
  683e30:	4d 11 c6             	adc    r14,r8
  683e33:	41 b8 d9 82 bd 5a    	mov    r8d,0x5abd82d9
  683e39:	4d 89 fa             	mov    r10,r15
  683e3c:	4d 89 f1             	mov    r9,r14
  683e3f:	44 31 c2             	xor    edx,r8d
  683e42:	4d 89 d7             	mov    r15,r10
  683e45:	4d 89 ce             	mov    r14,r9
  683e48:	e9 20 fd ff ff       	jmp    683b6d <__cxa_finalize@plt-0xd2f2a3>
  683e4d:	41 b8 16 28 82 42    	mov    r8d,0x42822816
  683e53:	e9 b9 37 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  683e58:	ba 14 84 b1 b7       	mov    edx,0xb7b18414
  683e5d:	31 ff                	xor    edi,edi
  683e5f:	45 31 c0             	xor    r8d,r8d
  683e62:	31 f6                	xor    esi,esi
  683e64:	81 fa a8 06 a6 81    	cmp    edx,0x81a606a8
  683e6a:	0f 84 21 03 00 00    	je     684191 <__cxa_finalize@plt-0xd2ec7f>
  683e70:	81 fa 14 84 b1 b7    	cmp    edx,0xb7b18414
  683e76:	0f 84 37 03 00 00    	je     6841b3 <__cxa_finalize@plt-0xd2ec5d>
  683e7c:	81 fa da 06 e0 b9    	cmp    edx,0xb9e006da
  683e82:	0f 84 a1 00 00 00    	je     683f29 <__cxa_finalize@plt-0xd2eee7>
  683e88:	81 fa 01 07 0f c3    	cmp    edx,0xc30f0701
  683e8e:	0f 84 b0 01 00 00    	je     684044 <__cxa_finalize@plt-0xd2edcc>
  683e94:	81 fa a2 e3 63 cd    	cmp    edx,0xcd63e3a2
  683e9a:	0f 84 70 02 00 00    	je     684110 <__cxa_finalize@plt-0xd2ed00>
  683ea0:	81 fa 08 bb 65 f8    	cmp    edx,0xf865bb08
  683ea6:	0f 84 a2 00 00 00    	je     683f4e <__cxa_finalize@plt-0xd2eec2>
  683eac:	81 fa cd f9 e1 fa    	cmp    edx,0xfae1f9cd
  683eb2:	0f 84 bb 00 00 00    	je     683f73 <__cxa_finalize@plt-0xd2ee9d>
  683eb8:	81 fa 41 24 12 06    	cmp    edx,0x6122441
  683ebe:	0f 84 fb 01 00 00    	je     6840bf <__cxa_finalize@plt-0xd2ed51>
  683ec4:	81 fa 0a 26 9d 0a    	cmp    edx,0xa9d260a
  683eca:	0f 84 c8 00 00 00    	je     683f98 <__cxa_finalize@plt-0xd2ee78>
  683ed0:	81 fa 10 a7 2a 13    	cmp    edx,0x132aa710
  683ed6:	0f 84 43 01 00 00    	je     68401f <__cxa_finalize@plt-0xd2edf1>
  683edc:	81 fa 2f 9c bf 2a    	cmp    edx,0x2abf9c2f
  683ee2:	0f 84 12 01 00 00    	je     683ffa <__cxa_finalize@plt-0xd2ee16>
  683ee8:	81 fa 79 79 be 2b    	cmp    edx,0x2bbe7979
  683eee:	0f 84 f0 01 00 00    	je     6840e4 <__cxa_finalize@plt-0xd2ed2c>
  683ef4:	81 fa 59 b3 47 3a    	cmp    edx,0x3a47b359
  683efa:	0f 84 fb 01 00 00    	je     6840fb <__cxa_finalize@plt-0xd2ed15>
  683f00:	81 fa 09 ae 90 57    	cmp    edx,0x5790ae09
  683f06:	0f 84 b1 00 00 00    	je     683fbd <__cxa_finalize@plt-0xd2ee53>
  683f0c:	81 fa 74 63 c4 6b    	cmp    edx,0x6bc46374
  683f12:	0f 84 ca 00 00 00    	je     683fe2 <__cxa_finalize@plt-0xd2ee2e>
  683f18:	81 fa 44 fa 7e dc    	cmp    edx,0xdc7efa44
  683f1e:	0f 85 65 02 00 00    	jne    684189 <__cxa_finalize@plt-0xd2ec87>
  683f24:	e9 a6 02 00 00       	jmp    6841cf <__cxa_finalize@plt-0xd2ec41>
  683f29:	49 b8 28 35 5c f0 63 	movabs r8,0xe6a5b63f05c3528
  683f30:	5b 6a 0e 
  683f33:	4c 01 c7             	add    rdi,r8
  683f36:	49 b8 90 96 34 35 b6 	movabs r8,0x760ac9b635349690
  683f3d:	c9 0a 76 
  683f40:	4c 11 c6             	adc    rsi,r8
  683f43:	41 b8 9e fc 9e 65    	mov    r8d,0x659efc9e
  683f49:	e9 3b 02 00 00       	jmp    684189 <__cxa_finalize@plt-0xd2ec87>
  683f4e:	49 b8 2b d7 f0 71 fe 	movabs r8,0x52f145fe71f0d72b
  683f55:	45 f1 52 
  683f58:	4c 31 c7             	xor    rdi,r8
  683f5b:	49 b8 cc 07 c9 9d 02 	movabs r8,0xaef9b2029dc907cc
  683f62:	b2 f9 ae 
  683f65:	4c 31 c6             	xor    rsi,r8
  683f68:	41 b8 18 1c 4f eb    	mov    r8d,0xeb4f1c18
  683f6e:	e9 16 02 00 00       	jmp    684189 <__cxa_finalize@plt-0xd2ec87>
  683f73:	49 b8 1b d2 a9 35 fe 	movabs r8,0x9ca733fe35a9d21b
  683f7a:	33 a7 9c 
  683f7d:	4c 01 c7             	add    rdi,r8
  683f80:	49 b8 80 58 a7 4b f4 	movabs r8,0x9b4a8f44ba75880
  683f87:	a8 b4 09 
  683f8a:	4c 11 c6             	adc    rsi,r8
  683f8d:	41 b8 94 4a a6 c0    	mov    r8d,0xc0a64a94
  683f93:	e9 f1 01 00 00       	jmp    684189 <__cxa_finalize@plt-0xd2ec87>
  683f98:	49 b8 bc ef fd 2c 1a 	movabs r8,0xf1edb1a2cfdefbc
  683f9f:	db 1e 0f 
  683fa2:	4c 01 c7             	add    rdi,r8
  683fa5:	49 b8 b7 a1 f2 0c 9c 	movabs r8,0x8cd939c0cf2a1b7
  683fac:	93 cd 08 
  683faf:	4c 11 c6             	adc    rsi,r8
  683fb2:	41 b8 c7 df 7c f0    	mov    r8d,0xf07cdfc7
  683fb8:	e9 cc 01 00 00       	jmp    684189 <__cxa_finalize@plt-0xd2ec87>
  683fbd:	49 b8 49 7b 66 0b 66 	movabs r8,0xa5d13660b667b49
  683fc4:	13 5d 0a 
  683fc7:	4c 01 c7             	add    rdi,r8
  683fca:	49 b8 26 45 0c 6e d7 	movabs r8,0x2ecfd5d76e0c4526
  683fd1:	d5 cf 2e 
  683fd4:	4c 11 c6             	adc    rsi,r8
  683fd7:	41 b8 a1 a8 36 d6    	mov    r8d,0xd636a8a1
  683fdd:	e9 a7 01 00 00       	jmp    684189 <__cxa_finalize@plt-0xd2ec87>
  683fe2:	49 89 f1             	mov    r9,rsi
  683fe5:	49 0f a4 f9 3a       	shld   r9,rdi,0x3a
  683fea:	48 0f a4 f7 3a       	shld   rdi,rsi,0x3a
  683fef:	41 b8 7d cd 54 3c    	mov    r8d,0x3c54cd7d
  683ff5:	e9 8c 01 00 00       	jmp    684186 <__cxa_finalize@plt-0xd2ec8a>
  683ffa:	49 b8 6d 50 4e 6e 26 	movabs r8,0xe57d7b266e4e506d
  684001:	7b 7d e5 
  684004:	4c 01 c7             	add    rdi,r8
  684007:	49 b8 fb 60 87 9c a8 	movabs r8,0x67cc93a89c8760fb
  68400e:	93 cc 67 
  684011:	4c 11 c6             	adc    rsi,r8
  684014:	41 b8 2e 9b b0 e9    	mov    r8d,0xe9b09b2e
  68401a:	e9 6a 01 00 00       	jmp    684189 <__cxa_finalize@plt-0xd2ec87>
  68401f:	49 b8 d7 fb b1 52 c2 	movabs r8,0xf312e9c252b1fbd7
  684026:	e9 12 f3 
  684029:	4c 31 c7             	xor    rdi,r8
  68402c:	49 b8 db e6 d9 34 c3 	movabs r8,0x1a31eac334d9e6db
  684033:	ea 31 1a 
  684036:	4c 31 c6             	xor    rsi,r8
  684039:	41 b8 b2 44 49 de    	mov    r8d,0xde4944b2
  68403f:	e9 45 01 00 00       	jmp    684189 <__cxa_finalize@plt-0xd2ec87>
  684044:	48 0f cf             	bswap  rdi
  684047:	49 89 f8             	mov    r8,rdi
  68404a:	49 c1 e8 04          	shr    r8,0x4
  68404e:	4d 21 e0             	and    r8,r12
  684051:	4c 21 e7             	and    rdi,r12
  684054:	48 c1 e7 04          	shl    rdi,0x4
  684058:	4c 09 c7             	or     rdi,r8
  68405b:	49 89 f8             	mov    r8,rdi
  68405e:	4d 21 e8             	and    r8,r13
  684061:	48 c1 ef 02          	shr    rdi,0x2
  684065:	4c 21 ef             	and    rdi,r13
  684068:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  68406c:	49 89 f8             	mov    r8,rdi
  68406f:	49 21 e8             	and    r8,rbp
  684072:	48 d1 ef             	shr    rdi,1
  684075:	48 21 ef             	and    rdi,rbp
  684078:	4e 8d 0c 47          	lea    r9,[rdi+r8*2]
  68407c:	48 0f ce             	bswap  rsi
  68407f:	48 89 f7             	mov    rdi,rsi
  684082:	48 c1 ef 04          	shr    rdi,0x4
  684086:	4c 21 e7             	and    rdi,r12
  684089:	4c 21 e6             	and    rsi,r12
  68408c:	48 c1 e6 04          	shl    rsi,0x4
  684090:	48 09 fe             	or     rsi,rdi
  684093:	48 89 f7             	mov    rdi,rsi
  684096:	4c 21 ef             	and    rdi,r13
  684099:	48 c1 ee 02          	shr    rsi,0x2
  68409d:	4c 21 ee             	and    rsi,r13
  6840a0:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  6840a4:	48 89 f7             	mov    rdi,rsi
  6840a7:	48 21 ef             	and    rdi,rbp
  6840aa:	48 d1 ee             	shr    rsi,1
  6840ad:	48 21 ee             	and    rsi,rbp
  6840b0:	48 8d 3c 7e          	lea    rdi,[rsi+rdi*2]
  6840b4:	41 b8 78 7e b1 e8    	mov    r8d,0xe8b17e78
  6840ba:	e9 c7 00 00 00       	jmp    684186 <__cxa_finalize@plt-0xd2ec8a>
  6840bf:	49 b8 41 04 b4 ed 4d 	movabs r8,0xdcd914dedb40441
  6840c6:	91 cd 0d 
  6840c9:	4c 01 c7             	add    rdi,r8
  6840cc:	49 b8 33 3f 54 0f d1 	movabs r8,0x4ba5ffd10f543f33
  6840d3:	ff a5 4b 
  6840d6:	4c 11 c6             	adc    rsi,r8
  6840d9:	41 b8 35 47 d6 6d    	mov    r8d,0x6dd64735
  6840df:	e9 a5 00 00 00       	jmp    684189 <__cxa_finalize@plt-0xd2ec87>
  6840e4:	49 89 f9             	mov    r9,rdi
  6840e7:	49 0f c9             	bswap  r9
  6840ea:	48 0f ce             	bswap  rsi
  6840ed:	41 b8 71 c2 db d3    	mov    r8d,0xd3dbc271
  6840f3:	48 89 f7             	mov    rdi,rsi
  6840f6:	e9 8b 00 00 00       	jmp    684186 <__cxa_finalize@plt-0xd2ec8a>
  6840fb:	49 89 f1             	mov    r9,rsi
  6840fe:	49 0f a4 f9 24       	shld   r9,rdi,0x24
  684103:	48 0f a4 f7 24       	shld   rdi,rsi,0x24
  684108:	41 b8 18 97 55 3c    	mov    r8d,0x3c559718
  68410e:	eb 76                	jmp    684186 <__cxa_finalize@plt-0xd2ec8a>
  684110:	48 0f cf             	bswap  rdi
  684113:	49 89 f8             	mov    r8,rdi
  684116:	49 c1 e8 04          	shr    r8,0x4
  68411a:	4d 21 e0             	and    r8,r12
  68411d:	4c 21 e7             	and    rdi,r12
  684120:	48 c1 e7 04          	shl    rdi,0x4
  684124:	4c 09 c7             	or     rdi,r8
  684127:	49 89 f8             	mov    r8,rdi
  68412a:	4d 21 e8             	and    r8,r13
  68412d:	48 c1 ef 02          	shr    rdi,0x2
  684131:	4c 21 ef             	and    rdi,r13
  684134:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  684138:	49 89 f8             	mov    r8,rdi
  68413b:	49 21 e8             	and    r8,rbp
  68413e:	48 d1 ef             	shr    rdi,1
  684141:	48 21 ef             	and    rdi,rbp
  684144:	4e 8d 0c 47          	lea    r9,[rdi+r8*2]
  684148:	48 0f ce             	bswap  rsi
  68414b:	48 89 f7             	mov    rdi,rsi
  68414e:	48 c1 ef 04          	shr    rdi,0x4
  684152:	4c 21 e7             	and    rdi,r12
  684155:	4c 21 e6             	and    rsi,r12
  684158:	48 c1 e6 04          	shl    rsi,0x4
  68415c:	48 09 fe             	or     rsi,rdi
  68415f:	48 89 f7             	mov    rdi,rsi
  684162:	4c 21 ef             	and    rdi,r13
  684165:	48 c1 ee 02          	shr    rsi,0x2
  684169:	4c 21 ee             	and    rsi,r13
  68416c:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  684170:	48 89 f7             	mov    rdi,rsi
  684173:	48 21 ef             	and    rdi,rbp
  684176:	48 d1 ee             	shr    rsi,1
  684179:	48 21 ee             	and    rsi,rbp
  68417c:	48 8d 3c 7e          	lea    rdi,[rsi+rdi*2]
  684180:	41 b8 a8 c5 fe c7    	mov    r8d,0xc7fec5a8
  684186:	4c 89 ce             	mov    rsi,r9
  684189:	44 31 c2             	xor    edx,r8d
  68418c:	e9 d3 fc ff ff       	jmp    683e64 <__cxa_finalize@plt-0xd2efac>
  684191:	49 b8 47 c3 26 ea fe 	movabs r8,0x59397efeea26c347
  684198:	7e 39 59 
  68419b:	4c 31 c7             	xor    rdi,r8
  68419e:	49 b8 8a e3 42 d6 f7 	movabs r8,0x4680a5f7d642e38a
  6841a5:	a5 80 46 
  6841a8:	4c 31 c6             	xor    rsi,r8
  6841ab:	41 b8 72 00 46 38    	mov    r8d,0x38460072
  6841b1:	eb d6                	jmp    684189 <__cxa_finalize@plt-0xd2ec87>
  6841b3:	41 b8 3b 18 0e 9d    	mov    r8d,0x9d0e183b
  6841b9:	48 bf 8a 53 ca 7f e5 	movabs rdi,0x320ee4e57fca538a
  6841c0:	e4 0e 32 
  6841c3:	48 be 89 53 de 4e c4 	movabs rsi,0x1b8274c44ede5389
  6841ca:	74 82 1b 
  6841cd:	eb ba                	jmp    684189 <__cxa_finalize@plt-0xd2ec87>
  6841cf:	ba 05 10 7a f8       	mov    edx,0xf87a1005
  6841d4:	45 31 ff             	xor    r15d,r15d
  6841d7:	45 31 c0             	xor    r8d,r8d
  6841da:	45 31 f6             	xor    r14d,r14d
  6841dd:	81 fa f0 af 97 e4    	cmp    edx,0xe497aff0
  6841e3:	0f 84 3a 01 00 00    	je     684323 <__cxa_finalize@plt-0xd2eaed>
  6841e9:	81 fa 4d d8 d0 ed    	cmp    edx,0xedd0d84d
  6841ef:	0f 84 8b 01 00 00    	je     684380 <__cxa_finalize@plt-0xd2ea90>
  6841f5:	81 fa 05 10 7a f8    	cmp    edx,0xf87a1005
  6841fb:	74 7d                	je     68427a <__cxa_finalize@plt-0xd2eb96>
  6841fd:	4d 89 f9             	mov    r9,r15
  684200:	49 0f c9             	bswap  r9
  684203:	4d 89 f2             	mov    r10,r14
  684206:	49 0f ca             	bswap  r10
  684209:	81 fa aa ea 22 06    	cmp    edx,0x622eaaa
  68420f:	0f 84 84 00 00 00    	je     684299 <__cxa_finalize@plt-0xd2eb77>
  684215:	81 fa 65 94 50 11    	cmp    edx,0x11509465
  68421b:	0f 84 17 01 00 00    	je     684338 <__cxa_finalize@plt-0xd2ead8>
  684221:	81 fa cd 9d 6a 13    	cmp    edx,0x136a9dcd
  684227:	74 7b                	je     6842a4 <__cxa_finalize@plt-0xd2eb6c>
  684229:	81 fa 8d e8 0a 1e    	cmp    edx,0x1e0ae88d
  68422f:	0f 84 cc 00 00 00    	je     684301 <__cxa_finalize@plt-0xd2eb0f>
  684235:	81 fa 01 41 75 2e    	cmp    edx,0x2e754101
  68423b:	0f 84 9e 00 00 00    	je     6842df <__cxa_finalize@plt-0xd2eb31>
  684241:	81 fa f5 3f 4f 40    	cmp    edx,0x404f3ff5
  684247:	0f 84 13 01 00 00    	je     684360 <__cxa_finalize@plt-0xd2eab0>
  68424d:	81 fa 76 fc 09 49    	cmp    edx,0x4909fc76
  684253:	0f 84 0f 01 00 00    	je     684368 <__cxa_finalize@plt-0xd2eaa8>
  684259:	81 fa 48 66 3b 63    	cmp    edx,0x633b6648
  68425f:	74 5b                	je     6842bc <__cxa_finalize@plt-0xd2eb54>
  684261:	81 fa b8 cd a3 70    	cmp    edx,0x70a3cdb8
  684267:	74 5e                	je     6842c7 <__cxa_finalize@plt-0xd2eb49>
  684269:	81 fa 47 99 52 f1    	cmp    edx,0xf1529947
  68426f:	0f 85 e3 00 00 00    	jne    684358 <__cxa_finalize@plt-0xd2eab8>
  684275:	e9 2a 01 00 00       	jmp    6843a4 <__cxa_finalize@plt-0xd2ea6c>
  68427a:	41 b8 88 f8 70 e6    	mov    r8d,0xe670f888
  684280:	49 ba b6 e4 85 5b 92 	movabs r10,0xe4e4b2925b85e4b6
  684287:	b2 e4 e4 
  68428a:	49 b9 83 00 37 03 7e 	movabs r9,0xac44977e03370083
  684291:	97 44 ac 
  684294:	e9 fd 00 00 00       	jmp    684396 <__cxa_finalize@plt-0xd2ea7a>
  684299:	41 b8 ed 73 70 f7    	mov    r8d,0xf77073ed
  68429f:	e9 f2 00 00 00       	jmp    684396 <__cxa_finalize@plt-0xd2ea7a>
  6842a4:	4d 89 f1             	mov    r9,r14
  6842a7:	4d 0f a4 f9 02       	shld   r9,r15,0x2
  6842ac:	4d 0f a4 f7 02       	shld   r15,r14,0x2
  6842b1:	41 b8 cc dc 1f 3d    	mov    r8d,0x3d1fdccc
  6842b7:	e9 d7 00 00 00       	jmp    684393 <__cxa_finalize@plt-0xd2ea7d>
  6842bc:	41 b8 2d f2 6b 72    	mov    r8d,0x726bf22d
  6842c2:	e9 cf 00 00 00       	jmp    684396 <__cxa_finalize@plt-0xd2ea7a>
  6842c7:	4d 89 f1             	mov    r9,r14
  6842ca:	4d 0f a4 f9 35       	shld   r9,r15,0x35
  6842cf:	4d 0f a4 f7 35       	shld   r15,r14,0x35
  6842d4:	41 b8 75 50 c9 63    	mov    r8d,0x63c95075
  6842da:	e9 b4 00 00 00       	jmp    684393 <__cxa_finalize@plt-0xd2ea7d>
  6842df:	49 b8 8b b1 fa 65 ab 	movabs r8,0xaaf6c1ab65fab18b
  6842e6:	c1 f6 aa 
  6842e9:	4d 01 c7             	add    r15,r8
  6842ec:	49 b8 1d 6c d5 0a df 	movabs r8,0xe4a1b3df0ad56c1d
  6842f3:	b3 a1 e4 
  6842f6:	4d 11 c6             	adc    r14,r8
  6842f9:	41 b8 77 bd 7c 67    	mov    r8d,0x677cbd77
  6842ff:	eb 57                	jmp    684358 <__cxa_finalize@plt-0xd2eab8>
  684301:	49 b8 55 34 39 7c d7 	movabs r8,0xfe6e1fd77c393455
  684308:	1f 6e fe 
  68430b:	4d 31 c7             	xor    r15,r8
  68430e:	49 b8 c8 58 58 9d 79 	movabs r8,0x19ce31799d5858c8
  684315:	31 ce 19 
  684318:	4d 31 c6             	xor    r14,r8
  68431b:	41 b8 c0 30 da f3    	mov    r8d,0xf3da30c0
  684321:	eb 35                	jmp    684358 <__cxa_finalize@plt-0xd2eab8>
  684323:	4d 89 f9             	mov    r9,r15
  684326:	4d 0f a4 f1 1c       	shld   r9,r14,0x1c
  68432b:	4d 0f a4 fe 1c       	shld   r14,r15,0x1c
  684330:	41 b8 05 90 d8 a4    	mov    r8d,0xa4d89005
  684336:	eb 43                	jmp    68437b <__cxa_finalize@plt-0xd2ea95>
  684338:	49 b8 17 a8 09 2f 3b 	movabs r8,0x2e721d3b2f09a817
  68433f:	1d 72 2e 
  684342:	4d 01 c7             	add    r15,r8
  684345:	49 b8 fc 78 f2 56 d9 	movabs r8,0x2247fd956f278fc
  68434c:	7f 24 02 
  68434f:	4d 11 c6             	adc    r14,r8
  684352:	41 b8 cf 7e 72 17    	mov    r8d,0x17727ecf
  684358:	4d 89 fa             	mov    r10,r15
  68435b:	4d 89 f1             	mov    r9,r14
  68435e:	eb 36                	jmp    684396 <__cxa_finalize@plt-0xd2ea7a>
  684360:	41 b8 4d f2 ec 30    	mov    r8d,0x30ecf24d
  684366:	eb 2e                	jmp    684396 <__cxa_finalize@plt-0xd2ea7a>
  684368:	4d 89 f9             	mov    r9,r15
  68436b:	4d 0f a4 f1 34       	shld   r9,r14,0x34
  684370:	4d 0f a4 fe 34       	shld   r14,r15,0x34
  684375:	41 b8 3e 9a 32 2a    	mov    r8d,0x2a329a3e
  68437b:	4d 89 f2             	mov    r10,r14
  68437e:	eb 16                	jmp    684396 <__cxa_finalize@plt-0xd2ea7a>
  684380:	4d 89 f1             	mov    r9,r14
  684383:	4d 0f a4 f9 25       	shld   r9,r15,0x25
  684388:	4d 0f a4 f7 25       	shld   r15,r14,0x25
  68438d:	41 b8 bd 77 47 09    	mov    r8d,0x94777bd
  684393:	4d 89 fa             	mov    r10,r15
  684396:	44 31 c2             	xor    edx,r8d
  684399:	4d 89 d7             	mov    r15,r10
  68439c:	4d 89 ce             	mov    r14,r9
  68439f:	e9 39 fe ff ff       	jmp    6841dd <__cxa_finalize@plt-0xd2ec33>
  6843a4:	41 b8 5b 8f 90 5f    	mov    r8d,0x5f908f5b
  6843aa:	e9 62 32 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  6843af:	ba dd 9f 61 d8       	mov    edx,0xd8619fdd
  6843b4:	31 ff                	xor    edi,edi
  6843b6:	45 31 c0             	xor    r8d,r8d
  6843b9:	31 f6                	xor    esi,esi
  6843bb:	81 fa 97 e2 21 8a    	cmp    edx,0x8a21e297
  6843c1:	0f 84 9c 00 00 00    	je     684463 <__cxa_finalize@plt-0xd2e9ad>
  6843c7:	81 fa dd 9f 61 d8    	cmp    edx,0xd8619fdd
  6843cd:	0f 84 ec 00 00 00    	je     6844bf <__cxa_finalize@plt-0xd2e951>
  6843d3:	81 fa 76 0e 5b f5    	cmp    edx,0xf55b0e76
  6843d9:	0f 84 c8 00 00 00    	je     6844a7 <__cxa_finalize@plt-0xd2e969>
  6843df:	81 fa ad 6f 1a 03    	cmp    edx,0x31a6fad
  6843e5:	74 2d                	je     684414 <__cxa_finalize@plt-0xd2e9fc>
  6843e7:	81 fa 51 47 a7 19    	cmp    edx,0x19a74751
  6843ed:	74 52                	je     684441 <__cxa_finalize@plt-0xd2e9cf>
  6843ef:	81 fa a9 1b e8 34    	cmp    edx,0x34e81ba9
  6843f5:	74 35                	je     68442c <__cxa_finalize@plt-0xd2e9e4>
  6843f7:	81 fa a5 86 ca 72    	cmp    edx,0x72ca86a5
  6843fd:	0f 84 82 00 00 00    	je     684485 <__cxa_finalize@plt-0xd2e98b>
  684403:	81 fa 4b 0c 2e 11    	cmp    edx,0x112e0c4b
  684409:	0f 85 ca 00 00 00    	jne    6844d9 <__cxa_finalize@plt-0xd2e937>
  68440f:	e9 cd 00 00 00       	jmp    6844e1 <__cxa_finalize@plt-0xd2e92f>
  684414:	49 89 f9             	mov    r9,rdi
  684417:	49 0f a4 f1 3f       	shld   r9,rsi,0x3f
  68441c:	48 0f ac f7 01       	shrd   rdi,rsi,0x1
  684421:	41 b8 e6 63 34 12    	mov    r8d,0x123463e6
  684427:	e9 8e 00 00 00       	jmp    6844ba <__cxa_finalize@plt-0xd2e956>
  68442c:	49 89 f1             	mov    r9,rsi
  68442f:	49 0f a4 f9 32       	shld   r9,rdi,0x32
  684434:	48 0f a4 f7 32       	shld   rdi,rsi,0x32
  684439:	41 b8 f8 5c 4f 2d    	mov    r8d,0x2d4f5cf8
  68443f:	eb 79                	jmp    6844ba <__cxa_finalize@plt-0xd2e956>
  684441:	49 b8 58 01 ec dd 32 	movabs r8,0xe4403132ddec0158
  684448:	31 40 e4 
  68444b:	4c 01 c7             	add    rdi,r8
  68444e:	49 b8 57 30 e8 50 3f 	movabs r8,0x8540293f50e83057
  684455:	29 40 85 
  684458:	4c 11 c6             	adc    rsi,r8
  68445b:	41 b8 c6 a5 86 93    	mov    r8d,0x9386a5c6
  684461:	eb 76                	jmp    6844d9 <__cxa_finalize@plt-0xd2e937>
  684463:	49 b8 9e 88 e0 15 f4 	movabs r8,0xdc5d1df415e0889e
  68446a:	1d 5d dc 
  68446d:	4c 31 c7             	xor    rdi,r8
  684470:	49 b8 20 d8 94 f1 6a 	movabs r8,0x710cfe6af194d820
  684477:	fe 0c 71 
  68447a:	4c 31 c6             	xor    rsi,r8
  68447d:	41 b8 e1 ec 7a 7f    	mov    r8d,0x7f7aece1
  684483:	eb 54                	jmp    6844d9 <__cxa_finalize@plt-0xd2e937>
  684485:	49 b8 1b 1b 46 5e 27 	movabs r8,0x8273a0275e461b1b
  68448c:	a0 73 82 
  68448f:	4c 01 c7             	add    rdi,r8
  684492:	49 b8 53 c5 8d ec 10 	movabs r8,0x65725d10ec8dc553
  684499:	5d 72 65 
  68449c:	4c 11 c6             	adc    rsi,r8
  68449f:	41 b8 08 e9 d0 71    	mov    r8d,0x71d0e908
  6844a5:	eb 32                	jmp    6844d9 <__cxa_finalize@plt-0xd2e937>
  6844a7:	49 89 f1             	mov    r9,rsi
  6844aa:	49 0f a4 f9 3f       	shld   r9,rdi,0x3f
  6844af:	48 0f a4 f7 3f       	shld   rdi,rsi,0x3f
  6844b4:	41 b8 d3 88 91 87    	mov    r8d,0x879188d3
  6844ba:	4c 89 ce             	mov    rsi,r9
  6844bd:	eb 1a                	jmp    6844d9 <__cxa_finalize@plt-0xd2e937>
  6844bf:	41 b8 74 84 89 ec    	mov    r8d,0xec898474
  6844c5:	48 bf 41 01 d1 4c 4b 	movabs rdi,0xc5f2e84b4cd10141
  6844cc:	e8 f2 c5 
  6844cf:	48 be 24 f2 1b 3f 46 	movabs rsi,0x89bdd5463f1bf224
  6844d6:	d5 bd 89 
  6844d9:	44 31 c2             	xor    edx,r8d
  6844dc:	e9 da fe ff ff       	jmp    6843bb <__cxa_finalize@plt-0xd2ea55>
  6844e1:	ba 82 8d be 0d       	mov    edx,0xdbe8d82
  6844e6:	45 31 ff             	xor    r15d,r15d
  6844e9:	45 31 c0             	xor    r8d,r8d
  6844ec:	45 31 f6             	xor    r14d,r14d
  6844ef:	81 fa ea ff 1e 9c    	cmp    edx,0x9c1effea
  6844f5:	0f 84 8e 00 00 00    	je     684589 <__cxa_finalize@plt-0xd2e887>
  6844fb:	4d 89 f9             	mov    r9,r15
  6844fe:	81 fa 71 e3 3b cd    	cmp    edx,0xcd3be371
  684504:	74 66                	je     68456c <__cxa_finalize@plt-0xd2e8a4>
  684506:	49 0f c9             	bswap  r9
  684509:	4d 89 f2             	mov    r10,r14
  68450c:	49 0f ca             	bswap  r10
  68450f:	81 fa df 47 d3 e4    	cmp    edx,0xe4d347df
  684515:	74 67                	je     68457e <__cxa_finalize@plt-0xd2e892>
  684517:	81 fa 82 8d be 0d    	cmp    edx,0xdbe8d82
  68451d:	0f 84 a3 00 00 00    	je     6845c6 <__cxa_finalize@plt-0xd2e84a>
  684523:	81 fa 88 87 19 33    	cmp    edx,0x33198788
  684529:	0f 84 e1 00 00 00    	je     684610 <__cxa_finalize@plt-0xd2e800>
  68452f:	81 fa 69 ee cf 64    	cmp    edx,0x64cfee69
  684535:	0f 84 bf 00 00 00    	je     6845fa <__cxa_finalize@plt-0xd2e816>
  68453b:	81 fa 76 db 5f 69    	cmp    edx,0x695fdb76
  684541:	0f 84 bb 00 00 00    	je     684602 <__cxa_finalize@plt-0xd2e80e>
  684547:	81 fa 50 76 72 6c    	cmp    edx,0x6c727650
  68454d:	74 5f                	je     6845ae <__cxa_finalize@plt-0xd2e862>
  68454f:	81 fa 6c e6 29 71    	cmp    edx,0x7129e66c
  684555:	0f 84 87 00 00 00    	je     6845e2 <__cxa_finalize@plt-0xd2e82e>
  68455b:	81 fa 36 4f 4f 62    	cmp    edx,0x624f4f36
  684561:	0f 85 c9 00 00 00    	jne    684630 <__cxa_finalize@plt-0xd2e7e0>
  684567:	e9 d8 00 00 00       	jmp    684644 <__cxa_finalize@plt-0xd2e7cc>
  68456c:	4d 0f a4 f1 0e       	shld   r9,r14,0xe
  684571:	4d 0f a4 fe 0e       	shld   r14,r15,0xe
  684576:	41 b8 f9 64 22 fe    	mov    r8d,0xfe2264f9
  68457c:	eb 43                	jmp    6845c1 <__cxa_finalize@plt-0xd2e84f>
  68457e:	41 b8 8f 31 a1 88    	mov    r8d,0x88a1318f
  684584:	e9 ad 00 00 00       	jmp    684636 <__cxa_finalize@plt-0xd2e7da>
  684589:	49 b8 05 b1 91 79 b2 	movabs r8,0xd4dad6b27991b105
  684590:	d6 da d4 
  684593:	4d 31 c7             	xor    r15,r8
  684596:	49 b8 c2 1f 19 23 ff 	movabs r8,0x69f108ff23191fc2
  68459d:	08 f1 69 
  6845a0:	4d 31 c6             	xor    r14,r8
  6845a3:	41 b8 9b 1c 25 51    	mov    r8d,0x51251c9b
  6845a9:	e9 82 00 00 00       	jmp    684630 <__cxa_finalize@plt-0xd2e7e0>
  6845ae:	4d 89 f9             	mov    r9,r15
  6845b1:	4d 0f a4 f1 01       	shld   r9,r14,0x1
  6845b6:	4d 0f a4 fe 01       	shld   r14,r15,0x1
  6845bb:	41 b8 3c 90 5b 1d    	mov    r8d,0x1d5b903c
  6845c1:	4d 89 f2             	mov    r10,r14
  6845c4:	eb 70                	jmp    684636 <__cxa_finalize@plt-0xd2e7da>
  6845c6:	41 b8 eb 63 71 69    	mov    r8d,0x697163eb
  6845cc:	49 ba 36 12 c5 37 96 	movabs r10,0x8d28a79637c51236
  6845d3:	a7 28 8d 
  6845d6:	49 b9 58 41 8e 81 57 	movabs r9,0x95c02857818e4158
  6845dd:	28 c0 95 
  6845e0:	eb 54                	jmp    684636 <__cxa_finalize@plt-0xd2e7da>
  6845e2:	4d 89 f1             	mov    r9,r14
  6845e5:	4d 0f a4 f9 1f       	shld   r9,r15,0x1f
  6845ea:	4d 0f a4 f7 1f       	shld   r15,r14,0x1f
  6845ef:	41 b8 5a a9 66 13    	mov    r8d,0x1366a95a
  6845f5:	4d 89 fa             	mov    r10,r15
  6845f8:	eb 3c                	jmp    684636 <__cxa_finalize@plt-0xd2e7da>
  6845fa:	41 b8 1f 35 90 0d    	mov    r8d,0xd90351f
  684600:	eb 34                	jmp    684636 <__cxa_finalize@plt-0xd2e7da>
  684602:	41 b8 9c 24 41 f5    	mov    r8d,0xf541249c
  684608:	4d 89 f2             	mov    r10,r14
  68460b:	4d 89 f9             	mov    r9,r15
  68460e:	eb 26                	jmp    684636 <__cxa_finalize@plt-0xd2e7da>
  684610:	49 b8 b2 f8 d5 77 13 	movabs r8,0xde60621377d5f8b2
  684617:	62 60 de 
  68461a:	4d 31 c7             	xor    r15,r8
  68461d:	49 b8 93 f3 9d 59 cd 	movabs r8,0x4e17bcd599df393
  684624:	7b e1 04 
  684627:	4d 31 c6             	xor    r14,r8
  68462a:	41 b8 57 c0 ca d7    	mov    r8d,0xd7cac057
  684630:	4d 89 fa             	mov    r10,r15
  684633:	4d 89 f1             	mov    r9,r14
  684636:	44 31 c2             	xor    edx,r8d
  684639:	4d 89 d7             	mov    r15,r10
  68463c:	4d 89 ce             	mov    r14,r9
  68463f:	e9 ab fe ff ff       	jmp    6844ef <__cxa_finalize@plt-0xd2e921>
  684644:	41 b8 8b a0 4b ca    	mov    r8d,0xca4ba08b
  68464a:	e9 c2 2f 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  68464f:	ba c9 d7 30 3b       	mov    edx,0x3b30d7c9
  684654:	31 ff                	xor    edi,edi
  684656:	45 31 d2             	xor    r10d,r10d
  684659:	31 f6                	xor    esi,esi
  68465b:	49 89 f8             	mov    r8,rdi
  68465e:	49 0f c8             	bswap  r8
  684661:	49 89 f1             	mov    r9,rsi
  684664:	49 0f c9             	bswap  r9
  684667:	81 fa 45 14 ca 88    	cmp    edx,0x88ca1445
  68466d:	0f 84 95 00 00 00    	je     684708 <__cxa_finalize@plt-0xd2e708>
  684673:	81 fa 30 17 27 9d    	cmp    edx,0x9d271730
  684679:	74 5d                	je     6846d8 <__cxa_finalize@plt-0xd2e738>
  68467b:	81 fa 93 28 61 da    	cmp    edx,0xda612893
  684681:	74 60                	je     6846e3 <__cxa_finalize@plt-0xd2e72d>
  684683:	81 fa 49 40 4b 09    	cmp    edx,0x94b4049
  684689:	0f 84 f9 00 00 00    	je     684788 <__cxa_finalize@plt-0xd2e688>
  68468f:	81 fa 6f 97 15 15    	cmp    edx,0x1515976f
  684695:	0f 84 be 01 00 00    	je     684859 <__cxa_finalize@plt-0xd2e5b7>
  68469b:	81 fa c9 d7 30 3b    	cmp    edx,0x3b30d7c9
  6846a1:	0f 84 6e 01 00 00    	je     684815 <__cxa_finalize@plt-0xd2e5fb>
  6846a7:	81 fa 1c ea dd 41    	cmp    edx,0x41ddea1c
  6846ad:	0f 84 7e 01 00 00    	je     684831 <__cxa_finalize@plt-0xd2e5df>
  6846b3:	81 fa 60 ef ea 42    	cmp    edx,0x42eaef60
  6846b9:	74 58                	je     684713 <__cxa_finalize@plt-0xd2e6fd>
  6846bb:	81 fa d3 ef 89 60    	cmp    edx,0x6089efd3
  6846c1:	0f 84 dc 00 00 00    	je     6847a3 <__cxa_finalize@plt-0xd2e66d>
  6846c7:	81 fa 4d 2d 4b 13    	cmp    edx,0x134b2d4d
  6846cd:	0f 85 7e 01 00 00    	jne    684851 <__cxa_finalize@plt-0xd2e5bf>
  6846d3:	e9 95 01 00 00       	jmp    68486d <__cxa_finalize@plt-0xd2e5a3>
  6846d8:	41 ba e3 f8 ae fd    	mov    r10d,0xfdaef8e3
  6846de:	e9 7c 01 00 00       	jmp    68485f <__cxa_finalize@plt-0xd2e5b1>
  6846e3:	49 b8 d9 0a 4e 1a 7d 	movabs r8,0xeb3c3b7d1a4e0ad9
  6846ea:	3b 3c eb 
  6846ed:	4c 31 c7             	xor    rdi,r8
  6846f0:	49 b8 5a e4 84 c2 30 	movabs r8,0x3cf2fd30c284e45a
  6846f7:	fd f2 3c 
  6846fa:	4c 31 c6             	xor    rsi,r8
  6846fd:	41 ba 8f c2 bc 9b    	mov    r10d,0x9bbcc28f
  684703:	e9 49 01 00 00       	jmp    684851 <__cxa_finalize@plt-0xd2e5bf>
  684708:	41 ba 0c 54 81 81    	mov    r10d,0x8181540c
  68470e:	e9 4c 01 00 00       	jmp    68485f <__cxa_finalize@plt-0xd2e5b1>
  684713:	4c 89 c6             	mov    rsi,r8
  684716:	48 c1 ee 04          	shr    rsi,0x4
  68471a:	4c 21 e6             	and    rsi,r12
  68471d:	4d 21 e0             	and    r8,r12
  684720:	49 c1 e0 04          	shl    r8,0x4
  684724:	49 09 f0             	or     r8,rsi
  684727:	4c 89 c6             	mov    rsi,r8
  68472a:	4c 21 ee             	and    rsi,r13
  68472d:	49 c1 e8 02          	shr    r8,0x2
  684731:	4d 21 e8             	and    r8,r13
  684734:	49 8d 34 b0          	lea    rsi,[r8+rsi*4]
  684738:	48 89 f7             	mov    rdi,rsi
  68473b:	48 21 ef             	and    rdi,rbp
  68473e:	48 d1 ee             	shr    rsi,1
  684741:	48 21 ee             	and    rsi,rbp
  684744:	4c 8d 04 7e          	lea    r8,[rsi+rdi*2]
  684748:	4c 89 ce             	mov    rsi,r9
  68474b:	48 c1 ee 04          	shr    rsi,0x4
  68474f:	4c 21 e6             	and    rsi,r12
  684752:	4d 21 e1             	and    r9,r12
  684755:	49 c1 e1 04          	shl    r9,0x4
  684759:	49 09 f1             	or     r9,rsi
  68475c:	4c 89 ce             	mov    rsi,r9
  68475f:	4c 21 ee             	and    rsi,r13
  684762:	49 c1 e9 02          	shr    r9,0x2
  684766:	4d 21 e9             	and    r9,r13
  684769:	49 8d 34 b1          	lea    rsi,[r9+rsi*4]
  68476d:	48 89 f7             	mov    rdi,rsi
  684770:	48 21 ef             	and    rdi,rbp
  684773:	48 d1 ee             	shr    rsi,1
  684776:	48 21 ee             	and    rsi,rbp
  684779:	4c 8d 0c 7e          	lea    r9,[rsi+rdi*2]
  68477d:	41 ba 2d c2 a1 51    	mov    r10d,0x51a1c22d
  684783:	e9 d7 00 00 00       	jmp    68485f <__cxa_finalize@plt-0xd2e5b1>
  684788:	49 89 f8             	mov    r8,rdi
  68478b:	49 0f a4 f0 2d       	shld   r8,rsi,0x2d
  684790:	48 0f a4 fe 2d       	shld   rsi,rdi,0x2d
  684795:	41 ba 26 d7 5e 1c    	mov    r10d,0x1c5ed726
  68479b:	49 89 f1             	mov    r9,rsi
  68479e:	e9 bc 00 00 00       	jmp    68485f <__cxa_finalize@plt-0xd2e5b1>
  6847a3:	4c 89 c6             	mov    rsi,r8
  6847a6:	48 c1 ee 04          	shr    rsi,0x4
  6847aa:	4c 21 e6             	and    rsi,r12
  6847ad:	4d 21 e0             	and    r8,r12
  6847b0:	49 c1 e0 04          	shl    r8,0x4
  6847b4:	49 09 f0             	or     r8,rsi
  6847b7:	4c 89 c6             	mov    rsi,r8
  6847ba:	4c 21 ee             	and    rsi,r13
  6847bd:	49 c1 e8 02          	shr    r8,0x2
  6847c1:	4d 21 e8             	and    r8,r13
  6847c4:	49 8d 34 b0          	lea    rsi,[r8+rsi*4]
  6847c8:	48 89 f7             	mov    rdi,rsi
  6847cb:	48 21 ef             	and    rdi,rbp
  6847ce:	48 d1 ee             	shr    rsi,1
  6847d1:	48 21 ee             	and    rsi,rbp
  6847d4:	4c 8d 04 7e          	lea    r8,[rsi+rdi*2]
  6847d8:	4c 89 ce             	mov    rsi,r9
  6847db:	48 c1 ee 04          	shr    rsi,0x4
  6847df:	4c 21 e6             	and    rsi,r12
  6847e2:	4d 21 e1             	and    r9,r12
  6847e5:	49 c1 e1 04          	shl    r9,0x4
  6847e9:	49 09 f1             	or     r9,rsi
  6847ec:	4c 89 ce             	mov    rsi,r9
  6847ef:	4c 21 ee             	and    rsi,r13
  6847f2:	49 c1 e9 02          	shr    r9,0x2
  6847f6:	4d 21 e9             	and    r9,r13
  6847f9:	49 8d 34 b1          	lea    rsi,[r9+rsi*4]
  6847fd:	48 89 f7             	mov    rdi,rsi
  684800:	48 21 ef             	and    rdi,rbp
  684803:	48 d1 ee             	shr    rsi,1
  684806:	48 21 ee             	and    rsi,rbp
  684809:	4c 8d 0c 7e          	lea    r9,[rsi+rdi*2]
  68480d:	41 ba b3 00 63 22    	mov    r10d,0x226300b3
  684813:	eb 4a                	jmp    68485f <__cxa_finalize@plt-0xd2e5b1>
  684815:	41 ba 5a ff 51 e1    	mov    r10d,0xe151ff5a
  68481b:	49 b9 f6 4f 04 07 2a 	movabs r9,0xf3ce3b2a07044ff6
  684822:	3b ce f3 
  684825:	49 b8 62 9d e6 52 23 	movabs r8,0xb6d75a2352e69d62
  68482c:	5a d7 b6 
  68482f:	eb 2e                	jmp    68485f <__cxa_finalize@plt-0xd2e5b1>
  684831:	49 b8 d1 ba b5 e2 a8 	movabs r8,0xd574ffa8e2b5bad1
  684838:	ff 74 d5 
  68483b:	4c 01 c7             	add    rdi,r8
  68483e:	49 b8 fe 9c 6d 8d 81 	movabs r8,0x75da79818d6d9cfe
  684845:	79 da 75 
  684848:	4c 11 c6             	adc    rsi,r8
  68484b:	41 ba 59 fe 17 c9    	mov    r10d,0xc917fe59
  684851:	49 89 f9             	mov    r9,rdi
  684854:	49 89 f0             	mov    r8,rsi
  684857:	eb 06                	jmp    68485f <__cxa_finalize@plt-0xd2e5b1>
  684859:	41 ba 5f 80 32 88    	mov    r10d,0x8832805f
  68485f:	44 31 d2             	xor    edx,r10d
  684862:	4c 89 cf             	mov    rdi,r9
  684865:	4c 89 c6             	mov    rsi,r8
  684868:	e9 ee fd ff ff       	jmp    68465b <__cxa_finalize@plt-0xd2e7b5>
  68486d:	ba 5b 63 5e 0d       	mov    edx,0xd5e635b
  684872:	45 31 ff             	xor    r15d,r15d
  684875:	45 31 d2             	xor    r10d,r10d
  684878:	45 31 f6             	xor    r14d,r14d
  68487b:	81 fa a2 cf e4 97    	cmp    edx,0x97e4cfa2
  684881:	0f 84 09 03 00 00    	je     684b90 <__cxa_finalize@plt-0xd2e280>
  684887:	81 fa 91 d5 e9 ae    	cmp    edx,0xaee9d591
  68488d:	0f 84 ad 00 00 00    	je     684940 <__cxa_finalize@plt-0xd2e4d0>
  684893:	81 fa ea f4 0a ba    	cmp    edx,0xba0af4ea
  684899:	0f 84 5d 02 00 00    	je     684afc <__cxa_finalize@plt-0xd2e314>
  68489f:	81 fa a6 2b db d0    	cmp    edx,0xd0db2ba6
  6848a5:	0f 84 b1 02 00 00    	je     684b5c <__cxa_finalize@plt-0xd2e2b4>
  6848ab:	81 fa c9 db 09 dd    	cmp    edx,0xdd09dbc9
  6848b1:	0f 84 a4 00 00 00    	je     68495b <__cxa_finalize@plt-0xd2e4b5>
  6848b7:	81 fa c9 25 cb f3    	cmp    edx,0xf3cb25c9
  6848bd:	0f 84 bd 00 00 00    	je     684980 <__cxa_finalize@plt-0xd2e490>
  6848c3:	81 fa 5b 63 5e 0d    	cmp    edx,0xd5e635b
  6848c9:	0f 84 4f 02 00 00    	je     684b1e <__cxa_finalize@plt-0xd2e2f2>
  6848cf:	81 fa 3a 18 73 1d    	cmp    edx,0x1d73183a
  6848d5:	0f 84 64 01 00 00    	je     684a3f <__cxa_finalize@plt-0xd2e3d1>
  6848db:	81 fa 4d e6 c8 27    	cmp    edx,0x27c8e64d
  6848e1:	0f 84 88 01 00 00    	je     684a6f <__cxa_finalize@plt-0xd2e3a1>
  6848e7:	4d 89 f8             	mov    r8,r15
  6848ea:	49 0f c8             	bswap  r8
  6848ed:	4d 89 f1             	mov    r9,r14
  6848f0:	49 0f c9             	bswap  r9
  6848f3:	81 fa f3 2b d1 35    	cmp    edx,0x35d12bf3
  6848f9:	0f 84 65 01 00 00    	je     684a64 <__cxa_finalize@plt-0xd2e3ac>
  6848ff:	81 fa f8 f5 24 3b    	cmp    edx,0x3b24f5f8
  684905:	0f 84 2f 02 00 00    	je     684b3a <__cxa_finalize@plt-0xd2e2d6>
  68490b:	81 fa 5b 21 70 3b    	cmp    edx,0x3b70215b
  684911:	0f 84 8e 00 00 00    	je     6849a5 <__cxa_finalize@plt-0xd2e46b>
  684917:	81 fa c7 8c 2e 59    	cmp    edx,0x592e8cc7
  68491d:	0f 84 64 01 00 00    	je     684a87 <__cxa_finalize@plt-0xd2e389>
  684923:	81 fa bc 37 dd 7c    	cmp    edx,0x7cdd37bc
  684929:	0f 84 eb 00 00 00    	je     684a1a <__cxa_finalize@plt-0xd2e3f6>
  68492f:	81 fa 73 db 58 b7    	cmp    edx,0xb758db73
  684935:	0f 85 41 02 00 00    	jne    684b7c <__cxa_finalize@plt-0xd2e294>
  68493b:	e9 68 02 00 00       	jmp    684ba8 <__cxa_finalize@plt-0xd2e268>
  684940:	4d 89 f8             	mov    r8,r15
  684943:	4d 0f a4 f0 30       	shld   r8,r14,0x30
  684948:	4d 0f a4 fe 30       	shld   r14,r15,0x30
  68494d:	41 ba 33 1a 0d 39    	mov    r10d,0x390d1a33
  684953:	4d 89 f1             	mov    r9,r14
  684956:	e9 27 02 00 00       	jmp    684b82 <__cxa_finalize@plt-0xd2e28e>
  68495b:	49 b8 b3 3a 28 eb a5 	movabs r8,0xdaa206a5eb283ab3
  684962:	06 a2 da 
  684965:	4d 31 c7             	xor    r15,r8
  684968:	49 b8 91 3c d6 be 67 	movabs r8,0x15690867bed63c91
  68496f:	08 69 15 
  684972:	4d 31 c6             	xor    r14,r8
  684975:	41 ba 0e 57 27 84    	mov    r10d,0x8427570e
  68497b:	e9 fc 01 00 00       	jmp    684b7c <__cxa_finalize@plt-0xd2e294>
  684980:	49 b8 38 d3 b1 43 f4 	movabs r8,0x3c1cdf443b1d338
  684987:	cd c1 03 
  68498a:	4d 01 c7             	add    r15,r8
  68498d:	49 b8 dd af a0 55 59 	movabs r8,0xa20c4f5955a0afdd
  684994:	4f 0c a2 
  684997:	4d 11 c6             	adc    r14,r8
  68499a:	41 ba ba fe 93 44    	mov    r10d,0x4493feba
  6849a0:	e9 d7 01 00 00       	jmp    684b7c <__cxa_finalize@plt-0xd2e294>
  6849a5:	4d 89 c2             	mov    r10,r8
  6849a8:	49 c1 ea 04          	shr    r10,0x4
  6849ac:	4d 21 e2             	and    r10,r12
  6849af:	4d 21 e0             	and    r8,r12
  6849b2:	49 c1 e0 04          	shl    r8,0x4
  6849b6:	4d 09 d0             	or     r8,r10
  6849b9:	4d 89 c2             	mov    r10,r8
  6849bc:	4d 21 ea             	and    r10,r13
  6849bf:	49 c1 e8 02          	shr    r8,0x2
  6849c3:	4d 21 e8             	and    r8,r13
  6849c6:	4f 8d 04 90          	lea    r8,[r8+r10*4]
  6849ca:	4d 89 c2             	mov    r10,r8
  6849cd:	49 21 ea             	and    r10,rbp
  6849d0:	49 d1 e8             	shr    r8,1
  6849d3:	49 21 e8             	and    r8,rbp
  6849d6:	4f 8d 04 50          	lea    r8,[r8+r10*2]
  6849da:	4d 89 ca             	mov    r10,r9
  6849dd:	49 c1 ea 04          	shr    r10,0x4
  6849e1:	4d 21 e2             	and    r10,r12
  6849e4:	4d 21 e1             	and    r9,r12
  6849e7:	49 c1 e1 04          	shl    r9,0x4
  6849eb:	4d 09 d1             	or     r9,r10
  6849ee:	4d 89 ca             	mov    r10,r9
  6849f1:	4d 21 ea             	and    r10,r13
  6849f4:	49 c1 e9 02          	shr    r9,0x2
  6849f8:	4d 21 e9             	and    r9,r13
  6849fb:	4f 8d 0c 91          	lea    r9,[r9+r10*4]
  6849ff:	4d 89 ca             	mov    r10,r9
  684a02:	49 21 ea             	and    r10,rbp
  684a05:	49 d1 e9             	shr    r9,1
  684a08:	49 21 e9             	and    r9,rbp
  684a0b:	4f 8d 0c 51          	lea    r9,[r9+r10*2]
  684a0f:	41 ba a3 d4 54 00    	mov    r10d,0x54d4a3
  684a15:	e9 68 01 00 00       	jmp    684b82 <__cxa_finalize@plt-0xd2e28e>
  684a1a:	49 b8 13 06 63 36 1d 	movabs r8,0x8ed6511d36630613
  684a21:	51 d6 8e 
  684a24:	4d 01 c7             	add    r15,r8
  684a27:	49 b8 b0 03 7e c5 2c 	movabs r8,0x361a692cc57e03b0
  684a2e:	69 1a 36 
  684a31:	4d 11 c6             	adc    r14,r8
  684a34:	41 ba 2d e2 34 d2    	mov    r10d,0xd234e22d
  684a3a:	e9 3d 01 00 00       	jmp    684b7c <__cxa_finalize@plt-0xd2e294>
  684a3f:	49 b8 14 9a be 9d 79 	movabs r8,0xe90f52799dbe9a14
  684a46:	52 0f e9 
  684a49:	4d 31 c7             	xor    r15,r8
  684a4c:	49 b8 dd db 91 6e 5a 	movabs r8,0x676e3a5a6e91dbdd
  684a53:	3a 6e 67 
  684a56:	4d 31 c6             	xor    r14,r8
  684a59:	41 ba 86 2f ae 61    	mov    r10d,0x61ae2f86
  684a5f:	e9 18 01 00 00       	jmp    684b7c <__cxa_finalize@plt-0xd2e294>
  684a64:	41 ba 55 00 0a e5    	mov    r10d,0xe50a0055
  684a6a:	e9 13 01 00 00       	jmp    684b82 <__cxa_finalize@plt-0xd2e28e>
  684a6f:	4d 89 f0             	mov    r8,r14
  684a72:	4d 0f a4 f8 39       	shld   r8,r15,0x39
  684a77:	4d 0f a4 f7 39       	shld   r15,r14,0x39
  684a7c:	41 ba a7 12 c2 9d    	mov    r10d,0x9dc212a7
  684a82:	e9 1c 01 00 00       	jmp    684ba3 <__cxa_finalize@plt-0xd2e26d>
  684a87:	4d 89 c2             	mov    r10,r8
  684a8a:	49 c1 ea 04          	shr    r10,0x4
  684a8e:	4d 21 e2             	and    r10,r12
  684a91:	4d 21 e0             	and    r8,r12
  684a94:	49 c1 e0 04          	shl    r8,0x4
  684a98:	4d 09 d0             	or     r8,r10
  684a9b:	4d 89 c2             	mov    r10,r8
  684a9e:	4d 21 ea             	and    r10,r13
  684aa1:	49 c1 e8 02          	shr    r8,0x2
  684aa5:	4d 21 e8             	and    r8,r13
  684aa8:	4f 8d 04 90          	lea    r8,[r8+r10*4]
  684aac:	4d 89 c2             	mov    r10,r8
  684aaf:	49 21 ea             	and    r10,rbp
  684ab2:	49 d1 e8             	shr    r8,1
  684ab5:	49 21 e8             	and    r8,rbp
  684ab8:	4f 8d 04 50          	lea    r8,[r8+r10*2]
  684abc:	4d 89 ca             	mov    r10,r9
  684abf:	49 c1 ea 04          	shr    r10,0x4
  684ac3:	4d 21 e2             	and    r10,r12
  684ac6:	4d 21 e1             	and    r9,r12
  684ac9:	49 c1 e1 04          	shl    r9,0x4
  684acd:	4d 09 d1             	or     r9,r10
  684ad0:	4d 89 ca             	mov    r10,r9
  684ad3:	4d 21 ea             	and    r10,r13
  684ad6:	49 c1 e9 02          	shr    r9,0x2
  684ada:	4d 21 e9             	and    r9,r13
  684add:	4f 8d 0c 91          	lea    r9,[r9+r10*4]
  684ae1:	4d 89 ca             	mov    r10,r9
  684ae4:	49 21 ea             	and    r10,rbp
  684ae7:	49 d1 e9             	shr    r9,1
  684aea:	49 21 e9             	and    r9,rbp
  684aed:	4f 8d 0c 51          	lea    r9,[r9+r10*2]
  684af1:	41 ba fd 94 5d 44    	mov    r10d,0x445d94fd
  684af7:	e9 86 00 00 00       	jmp    684b82 <__cxa_finalize@plt-0xd2e28e>
  684afc:	49 b8 18 fb 7e 0f fa 	movabs r8,0x3d11d0fa0f7efb18
  684b03:	d0 11 3d 
  684b06:	4d 01 c7             	add    r15,r8
  684b09:	49 b8 ef b3 a5 d0 cc 	movabs r8,0x1a6882ccd0a5b3ef
  684b10:	82 68 1a 
  684b13:	4d 11 c6             	adc    r14,r8
  684b16:	41 ba b1 d5 7a 81    	mov    r10d,0x817ad5b1
  684b1c:	eb 5e                	jmp    684b7c <__cxa_finalize@plt-0xd2e294>
  684b1e:	41 ba 92 b8 57 d0    	mov    r10d,0xd057b892
  684b24:	49 b9 ea aa 40 e4 b2 	movabs r9,0x531f17b2e440aaea
  684b2b:	17 1f 53 
  684b2e:	49 b8 ec 39 8b 72 51 	movabs r8,0xe9918251728b39ec
  684b35:	82 91 e9 
  684b38:	eb 48                	jmp    684b82 <__cxa_finalize@plt-0xd2e28e>
  684b3a:	49 b8 1c d5 84 b9 0d 	movabs r8,0xc3ad270db984d51c
  684b41:	27 ad c3 
  684b44:	4d 01 c7             	add    r15,r8
  684b47:	49 b8 91 78 79 68 30 	movabs r8,0x4a5ed03068797891
  684b4e:	d0 5e 4a 
  684b51:	4d 11 c6             	adc    r14,r8
  684b54:	41 ba 0b de f5 0e    	mov    r10d,0xef5de0b
  684b5a:	eb 20                	jmp    684b7c <__cxa_finalize@plt-0xd2e294>
  684b5c:	49 b8 7e 7b 21 56 75 	movabs r8,0xef4cba7556217b7e
  684b63:	ba 4c ef 
  684b66:	4d 01 c7             	add    r15,r8
  684b69:	49 b8 57 f2 db d3 7c 	movabs r8,0xcfc4b97cd3dbf257
  684b70:	b9 c4 cf 
  684b73:	4d 11 c6             	adc    r14,r8
  684b76:	41 ba 6f 0e 10 23    	mov    r10d,0x23100e6f
  684b7c:	4d 89 f9             	mov    r9,r15
  684b7f:	4d 89 f0             	mov    r8,r14
  684b82:	44 31 d2             	xor    edx,r10d
  684b85:	4d 89 cf             	mov    r15,r9
  684b88:	4d 89 c6             	mov    r14,r8
  684b8b:	e9 eb fc ff ff       	jmp    68487b <__cxa_finalize@plt-0xd2e595>
  684b90:	4d 89 f0             	mov    r8,r14
  684b93:	4d 0f a4 f8 1a       	shld   r8,r15,0x1a
  684b98:	4d 0f a4 f7 1a       	shld   r15,r14,0x1a
  684b9d:	41 ba ef 29 2c b0    	mov    r10d,0xb02c29ef
  684ba3:	4d 89 f9             	mov    r9,r15
  684ba6:	eb da                	jmp    684b82 <__cxa_finalize@plt-0xd2e28e>
  684ba8:	41 b8 34 36 44 9c    	mov    r8d,0x9c443634
  684bae:	e9 5e 2a 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  684bb3:	ba 01 43 af e5       	mov    edx,0xe5af4301
  684bb8:	31 ff                	xor    edi,edi
  684bba:	45 31 c9             	xor    r9d,r9d
  684bbd:	31 f6                	xor    esi,esi
  684bbf:	81 fa 67 02 bf 82    	cmp    edx,0x82bf0267
  684bc5:	0f 84 e0 01 00 00    	je     684dab <__cxa_finalize@plt-0xd2e065>
  684bcb:	81 fa d6 88 9b c4    	cmp    edx,0xc49b88d6
  684bd1:	0f 84 89 00 00 00    	je     684c60 <__cxa_finalize@plt-0xd2e1b0>
  684bd7:	49 89 f8             	mov    r8,rdi
  684bda:	49 0f c8             	bswap  r8
  684bdd:	49 89 f2             	mov    r10,rsi
  684be0:	49 0f ca             	bswap  r10
  684be3:	81 fa 3c c3 e3 d1    	cmp    edx,0xd1e3c33c
  684be9:	0f 84 ec 00 00 00    	je     684cdb <__cxa_finalize@plt-0xd2e135>
  684bef:	81 fa 01 43 af e5    	cmp    edx,0xe5af4301
  684bf5:	0f 84 7f 01 00 00    	je     684d7a <__cxa_finalize@plt-0xd2e096>
  684bfb:	81 fa 89 80 20 ee    	cmp    edx,0xee208089
  684c01:	0f 84 01 01 00 00    	je     684d08 <__cxa_finalize@plt-0xd2e108>
  684c07:	81 fa 68 93 89 fc    	cmp    edx,0xfc899368
  684c0d:	0f 84 2f 01 00 00    	je     684d42 <__cxa_finalize@plt-0xd2e0ce>
  684c13:	81 fa ea d7 1b 0e    	cmp    edx,0xe1bd7ea
  684c19:	0f 84 0b 01 00 00    	je     684d2a <__cxa_finalize@plt-0xd2e0e6>
  684c1f:	81 fa 6a d7 a4 5c    	cmp    edx,0x5ca4d76a
  684c25:	0f 84 6b 01 00 00    	je     684d96 <__cxa_finalize@plt-0xd2e07a>
  684c2b:	81 fa f4 0b ac 5c    	cmp    edx,0x5cac0bf4
  684c31:	0f 84 af 00 00 00    	je     684ce6 <__cxa_finalize@plt-0xd2e12a>
  684c37:	81 fa bf 5b 2a 6a    	cmp    edx,0x6a2a5bbf
  684c3d:	0f 84 27 01 00 00    	je     684d6a <__cxa_finalize@plt-0xd2e0a6>
  684c43:	81 fa 5a af bf 7a    	cmp    edx,0x7abfaf5a
  684c49:	0f 84 23 01 00 00    	je     684d72 <__cxa_finalize@plt-0xd2e09e>
  684c4f:	81 fa 64 99 ae 2a    	cmp    edx,0x2aae9964
  684c55:	0f 85 07 01 00 00    	jne    684d62 <__cxa_finalize@plt-0xd2e0ae>
  684c5b:	e9 6f 01 00 00       	jmp    684dcf <__cxa_finalize@plt-0xd2e041>
  684c60:	48 0f cf             	bswap  rdi
  684c63:	49 89 f8             	mov    r8,rdi
  684c66:	49 c1 e8 04          	shr    r8,0x4
  684c6a:	4d 21 e0             	and    r8,r12
  684c6d:	4c 21 e7             	and    rdi,r12
  684c70:	48 c1 e7 04          	shl    rdi,0x4
  684c74:	4c 09 c7             	or     rdi,r8
  684c77:	49 89 f8             	mov    r8,rdi
  684c7a:	4d 21 e8             	and    r8,r13
  684c7d:	48 c1 ef 02          	shr    rdi,0x2
  684c81:	4c 21 ef             	and    rdi,r13
  684c84:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  684c88:	49 89 f8             	mov    r8,rdi
  684c8b:	49 21 e8             	and    r8,rbp
  684c8e:	48 d1 ef             	shr    rdi,1
  684c91:	48 21 ef             	and    rdi,rbp
  684c94:	4e 8d 04 47          	lea    r8,[rdi+r8*2]
  684c98:	48 0f ce             	bswap  rsi
  684c9b:	48 89 f7             	mov    rdi,rsi
  684c9e:	48 c1 ef 04          	shr    rdi,0x4
  684ca2:	4c 21 e7             	and    rdi,r12
  684ca5:	4c 21 e6             	and    rsi,r12
  684ca8:	48 c1 e6 04          	shl    rsi,0x4
  684cac:	48 09 fe             	or     rsi,rdi
  684caf:	48 89 f7             	mov    rdi,rsi
  684cb2:	4c 21 ef             	and    rdi,r13
  684cb5:	48 c1 ee 02          	shr    rsi,0x2
  684cb9:	4c 21 ee             	and    rsi,r13
  684cbc:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  684cc0:	48 89 f7             	mov    rdi,rsi
  684cc3:	48 21 ef             	and    rdi,rbp
  684cc6:	48 d1 ee             	shr    rsi,1
  684cc9:	48 21 ee             	and    rsi,rbp
  684ccc:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  684cd0:	41 b9 69 d3 b1 ae    	mov    r9d,0xaeb1d369
  684cd6:	e9 e6 00 00 00       	jmp    684dc1 <__cxa_finalize@plt-0xd2e04f>
  684cdb:	41 b9 ea 4b 78 15    	mov    r9d,0x15784bea
  684ce1:	e9 db 00 00 00       	jmp    684dc1 <__cxa_finalize@plt-0xd2e04f>
  684ce6:	49 b8 15 8b 34 1d 1d 	movabs r8,0x5c5aa81d1d348b15
  684ced:	a8 5a 5c 
  684cf0:	4c 31 c7             	xor    rdi,r8
  684cf3:	49 b8 f3 79 87 46 cd 	movabs r8,0x760968cd468779f3
  684cfa:	68 09 76 
  684cfd:	4c 31 c6             	xor    rsi,r8
  684d00:	41 b9 9c 98 25 a0    	mov    r9d,0xa025989c
  684d06:	eb 5a                	jmp    684d62 <__cxa_finalize@plt-0xd2e0ae>
  684d08:	49 b8 13 68 15 89 99 	movabs r8,0xe4e0a59989156813
  684d0f:	a5 e0 e4 
  684d12:	4c 01 c7             	add    rdi,r8
  684d15:	49 b8 a4 51 fb 9c c2 	movabs r8,0xb2e088c29cfb51a4
  684d1c:	88 e0 b2 
  684d1f:	4c 11 c6             	adc    rsi,r8
  684d22:	41 b9 e3 57 84 b2    	mov    r9d,0xb28457e3
  684d28:	eb 38                	jmp    684d62 <__cxa_finalize@plt-0xd2e0ae>
  684d2a:	49 89 f8             	mov    r8,rdi
  684d2d:	49 0f a4 f0 37       	shld   r8,rsi,0x37
  684d32:	48 0f a4 fe 37       	shld   rsi,rdi,0x37
  684d37:	41 b9 8d d5 a4 8c    	mov    r9d,0x8ca4d58d
  684d3d:	49 89 f2             	mov    r10,rsi
  684d40:	eb 7f                	jmp    684dc1 <__cxa_finalize@plt-0xd2e04f>
  684d42:	49 b8 c3 16 1c 9e 26 	movabs r8,0xddff269e1c16c3
  684d49:	ff dd 00 
  684d4c:	4c 01 c7             	add    rdi,r8
  684d4f:	49 b8 cf f3 74 ba 34 	movabs r8,0xeb661b34ba74f3cf
  684d56:	1b 66 eb 
  684d59:	4c 11 c6             	adc    rsi,r8
  684d5c:	41 b9 0c 0a 27 d6    	mov    r9d,0xd6270a0c
  684d62:	49 89 fa             	mov    r10,rdi
  684d65:	49 89 f0             	mov    r8,rsi
  684d68:	eb 57                	jmp    684dc1 <__cxa_finalize@plt-0xd2e04f>
  684d6a:	41 b9 e5 f4 95 10    	mov    r9d,0x1095f4e5
  684d70:	eb 4f                	jmp    684dc1 <__cxa_finalize@plt-0xd2e04f>
  684d72:	41 b9 d3 2f 9f 94    	mov    r9d,0x949f2fd3
  684d78:	eb 47                	jmp    684dc1 <__cxa_finalize@plt-0xd2e04f>
  684d7a:	41 b9 3d 80 4c 34    	mov    r9d,0x344c803d
  684d80:	49 ba 9f 59 0f 40 ef 	movabs r10,0x4c943def400f599f
  684d87:	3d 94 4c 
  684d8a:	49 b8 7c cc 20 7a 19 	movabs r8,0x43878b197a20cc7c
  684d91:	8b 87 43 
  684d94:	eb 2b                	jmp    684dc1 <__cxa_finalize@plt-0xd2e04f>
  684d96:	49 89 f0             	mov    r8,rsi
  684d99:	49 0f a4 f8 3a       	shld   r8,rdi,0x3a
  684d9e:	48 0f a4 f7 3a       	shld   rdi,rsi,0x3a
  684da3:	41 b9 80 00 bf 52    	mov    r9d,0x52bf0080
  684da9:	eb 13                	jmp    684dbe <__cxa_finalize@plt-0xd2e052>
  684dab:	49 89 f0             	mov    r8,rsi
  684dae:	49 0f a4 f8 1f       	shld   r8,rdi,0x1f
  684db3:	48 0f a4 f7 1f       	shld   rdi,rsi,0x1f
  684db8:	41 b9 93 09 13 de    	mov    r9d,0xde130993
  684dbe:	49 89 fa             	mov    r10,rdi
  684dc1:	44 31 ca             	xor    edx,r9d
  684dc4:	4c 89 d7             	mov    rdi,r10
  684dc7:	4c 89 c6             	mov    rsi,r8
  684dca:	e9 f0 fd ff ff       	jmp    684bbf <__cxa_finalize@plt-0xd2e251>
  684dcf:	ba 13 72 b5 e7       	mov    edx,0xe7b57213
  684dd4:	45 31 ff             	xor    r15d,r15d
  684dd7:	45 31 c0             	xor    r8d,r8d
  684dda:	45 31 f6             	xor    r14d,r14d
  684ddd:	81 fa ea 74 1d a0    	cmp    edx,0xa01d74ea
  684de3:	0f 84 b3 00 00 00    	je     684e9c <__cxa_finalize@plt-0xd2df74>
  684de9:	81 fa af c8 bb a5    	cmp    edx,0xa5bbc8af
  684def:	0f 84 03 01 00 00    	je     684ef8 <__cxa_finalize@plt-0xd2df18>
  684df5:	81 fa ba a1 e7 a5    	cmp    edx,0xa5e7a1ba
  684dfb:	0f 84 d5 00 00 00    	je     684ed6 <__cxa_finalize@plt-0xd2df3a>
  684e01:	81 fa 76 ec 90 d9    	cmp    edx,0xd990ec76
  684e07:	74 2d                	je     684e36 <__cxa_finalize@plt-0xd2dfda>
  684e09:	81 fa 13 72 b5 e7    	cmp    edx,0xe7b57213
  684e0f:	74 6f                	je     684e80 <__cxa_finalize@plt-0xd2df90>
  684e11:	81 fa bb 46 b6 68    	cmp    edx,0x68b646bb
  684e17:	74 42                	je     684e5b <__cxa_finalize@plt-0xd2dfb5>
  684e19:	81 fa 69 41 d9 79    	cmp    edx,0x79d94169
  684e1f:	0f 84 8f 00 00 00    	je     684eb4 <__cxa_finalize@plt-0xd2df5c>
  684e25:	81 fa 42 81 73 d1    	cmp    edx,0xd1738142
  684e2b:	0f 85 e7 00 00 00    	jne    684f18 <__cxa_finalize@plt-0xd2def8>
  684e31:	e9 ea 00 00 00       	jmp    684f20 <__cxa_finalize@plt-0xd2def0>
  684e36:	49 b8 3b af 38 e6 71 	movabs r8,0xb3260371e638af3b
  684e3d:	03 26 b3 
  684e40:	4d 01 c7             	add    r15,r8
  684e43:	49 b8 d8 76 8e 52 8c 	movabs r8,0xdc90898c528e76d8
  684e4a:	89 90 dc 
  684e4d:	4d 11 c6             	adc    r14,r8
  684e50:	41 b8 34 6d e3 08    	mov    r8d,0x8e36d34
  684e56:	e9 bd 00 00 00       	jmp    684f18 <__cxa_finalize@plt-0xd2def8>
  684e5b:	49 b8 b2 6a 1f e6 0f 	movabs r8,0x7e56c60fe61f6ab2
  684e62:	c6 56 7e 
  684e65:	4d 01 c7             	add    r15,r8
  684e68:	49 b8 58 53 2c a2 c0 	movabs r8,0xcb404cc0a22c5358
  684e6f:	4c 40 cb 
  684e72:	4d 11 c6             	adc    r14,r8
  684e75:	41 b8 14 8e 0d cd    	mov    r8d,0xcd0d8e14
  684e7b:	e9 98 00 00 00       	jmp    684f18 <__cxa_finalize@plt-0xd2def8>
  684e80:	41 b8 a9 d3 52 42    	mov    r8d,0x4252d3a9
  684e86:	49 bf fe 39 80 04 b3 	movabs r15,0x7b9ca1b3048039fe
  684e8d:	a1 9c 7b 
  684e90:	49 be 49 7d 05 21 d5 	movabs r14,0xd8f56ed521057d49
  684e97:	6e f5 d8 
  684e9a:	eb 7c                	jmp    684f18 <__cxa_finalize@plt-0xd2def8>
  684e9c:	4d 89 f1             	mov    r9,r14
  684e9f:	4d 0f a4 f9 32       	shld   r9,r15,0x32
  684ea4:	4d 0f a4 f7 32       	shld   r15,r14,0x32
  684ea9:	41 b8 51 32 ab c8    	mov    r8d,0xc8ab3251
  684eaf:	4d 89 ce             	mov    r14,r9
  684eb2:	eb 64                	jmp    684f18 <__cxa_finalize@plt-0xd2def8>
  684eb4:	49 b8 60 83 ae 01 33 	movabs r8,0x4f334e3301ae8360
  684ebb:	4e 33 4f 
  684ebe:	4d 31 c7             	xor    r15,r8
  684ec1:	49 b8 2c 62 c1 7a 0c 	movabs r8,0x21a18b0c7ac1622c
  684ec8:	8b a1 21 
  684ecb:	4d 31 c6             	xor    r14,r8
  684ece:	41 b8 1f ad 49 a0    	mov    r8d,0xa049ad1f
  684ed4:	eb 42                	jmp    684f18 <__cxa_finalize@plt-0xd2def8>
  684ed6:	49 b8 65 40 5d ae 4f 	movabs r8,0x8cd1b94fae5d4065
  684edd:	b9 d1 8c 
  684ee0:	4d 31 c7             	xor    r15,r8
  684ee3:	49 b8 54 9f 86 91 04 	movabs r8,0x19fe920491869f54
  684eea:	92 fe 19 
  684eed:	4d 31 c6             	xor    r14,r8
  684ef0:	41 b8 50 d5 fa 05    	mov    r8d,0x5fad550
  684ef6:	eb 20                	jmp    684f18 <__cxa_finalize@plt-0xd2def8>
  684ef8:	49 b8 65 ff 0f c1 82 	movabs r8,0x472f7882c10fff65
  684eff:	78 2f 47 
  684f02:	4d 31 c7             	xor    r15,r8
  684f05:	49 b8 c5 15 ae d1 8a 	movabs r8,0x5176d48ad1ae15c5
  684f0c:	d4 76 51 
  684f0f:	4d 31 c6             	xor    r14,r8
  684f12:	41 b8 c6 89 62 dc    	mov    r8d,0xdc6289c6
  684f18:	44 31 c2             	xor    edx,r8d
  684f1b:	e9 bd fe ff ff       	jmp    684ddd <__cxa_finalize@plt-0xd2e033>
  684f20:	41 b8 bf 09 bd ca    	mov    r8d,0xcabd09bf
  684f26:	e9 e6 26 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  684f2b:	ba e6 cf 86 90       	mov    edx,0x9086cfe6
  684f30:	31 ff                	xor    edi,edi
  684f32:	45 31 c0             	xor    r8d,r8d
  684f35:	31 f6                	xor    esi,esi
  684f37:	81 fa 67 db 9c 82    	cmp    edx,0x829cdb67
  684f3d:	0f 84 11 02 00 00    	je     685154 <__cxa_finalize@plt-0xd2dcbc>
  684f43:	81 fa 77 4d 11 8e    	cmp    edx,0x8e114d77
  684f49:	74 7d                	je     684fc8 <__cxa_finalize@plt-0xd2de48>
  684f4b:	81 fa e6 cf 86 90    	cmp    edx,0x9086cfe6
  684f51:	0f 84 e9 00 00 00    	je     685040 <__cxa_finalize@plt-0xd2ddd0>
  684f57:	81 fa 56 c9 37 b2    	cmp    edx,0xb237c956
  684f5d:	0f 84 a7 01 00 00    	je     68510a <__cxa_finalize@plt-0xd2dd06>
  684f63:	81 fa 3d 3d d9 b6    	cmp    edx,0xb6d93d3d
  684f69:	0f 84 02 01 00 00    	je     685071 <__cxa_finalize@plt-0xd2dd9f>
  684f6f:	81 fa 2f 3a d0 ce    	cmp    edx,0xced03a2f
  684f75:	0f 84 29 01 00 00    	je     6850a4 <__cxa_finalize@plt-0xd2dd6c>
  684f7b:	81 fa af f9 93 d8    	cmp    edx,0xd893f9af
  684f81:	0f 84 ff 00 00 00    	je     685086 <__cxa_finalize@plt-0xd2dd8a>
  684f87:	81 fa ae 17 17 f3    	cmp    edx,0xf31717ae
  684f8d:	0f 84 9c 01 00 00    	je     68512f <__cxa_finalize@plt-0xd2dce1>
  684f93:	81 fa 94 f3 5c 09    	cmp    edx,0x95cf394
  684f99:	0f 84 bd 00 00 00    	je     68505c <__cxa_finalize@plt-0xd2ddb4>
  684f9f:	81 fa 29 7e f9 56    	cmp    edx,0x56f97e29
  684fa5:	0f 84 1b 01 00 00    	je     6850c6 <__cxa_finalize@plt-0xd2dd4a>
  684fab:	81 fa fe 32 85 7e    	cmp    edx,0x7e8532fe
  684fb1:	0f 84 31 01 00 00    	je     6850e8 <__cxa_finalize@plt-0xd2dd28>
  684fb7:	81 fa cc bd c4 fd    	cmp    edx,0xfdc4bdcc
  684fbd:	0f 85 d9 00 00 00    	jne    68509c <__cxa_finalize@plt-0xd2dd74>
  684fc3:	e9 b1 01 00 00       	jmp    685179 <__cxa_finalize@plt-0xd2dc97>
  684fc8:	48 0f cf             	bswap  rdi
  684fcb:	49 89 f8             	mov    r8,rdi
  684fce:	49 c1 e8 04          	shr    r8,0x4
  684fd2:	4d 21 e0             	and    r8,r12
  684fd5:	4c 21 e7             	and    rdi,r12
  684fd8:	48 c1 e7 04          	shl    rdi,0x4
  684fdc:	4c 09 c7             	or     rdi,r8
  684fdf:	49 89 f8             	mov    r8,rdi
  684fe2:	4d 21 e8             	and    r8,r13
  684fe5:	48 c1 ef 02          	shr    rdi,0x2
  684fe9:	4c 21 ef             	and    rdi,r13
  684fec:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  684ff0:	49 89 f8             	mov    r8,rdi
  684ff3:	49 21 e8             	and    r8,rbp
  684ff6:	48 d1 ef             	shr    rdi,1
  684ff9:	48 21 ef             	and    rdi,rbp
  684ffc:	4e 8d 0c 47          	lea    r9,[rdi+r8*2]
  685000:	48 0f ce             	bswap  rsi
  685003:	48 89 f7             	mov    rdi,rsi
  685006:	48 c1 ef 04          	shr    rdi,0x4
  68500a:	4c 21 e7             	and    rdi,r12
  68500d:	4c 21 e6             	and    rsi,r12
  685010:	48 c1 e6 04          	shl    rsi,0x4
  685014:	48 09 fe             	or     rsi,rdi
  685017:	48 89 f7             	mov    rdi,rsi
  68501a:	4c 21 ef             	and    rdi,r13
  68501d:	48 c1 ee 02          	shr    rsi,0x2
  685021:	4c 21 ee             	and    rsi,r13
  685024:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  685028:	48 89 f7             	mov    rdi,rsi
  68502b:	48 21 ef             	and    rdi,rbp
  68502e:	48 d1 ee             	shr    rsi,1
  685031:	48 21 ee             	and    rsi,rbp
  685034:	48 8d 3c 7e          	lea    rdi,[rsi+rdi*2]
  685038:	41 b8 e3 be 4d 87    	mov    r8d,0x874dbee3
  68503e:	eb 59                	jmp    685099 <__cxa_finalize@plt-0xd2dd77>
  685040:	41 b8 91 82 97 1e    	mov    r8d,0x1e978291
  685046:	48 bf 76 85 5b c2 f6 	movabs rdi,0xbfda5af6c25b8576
  68504d:	5a da bf 
  685050:	48 be 8b c3 40 e7 20 	movabs rsi,0x23956420e740c38b
  685057:	64 95 23 
  68505a:	eb 40                	jmp    68509c <__cxa_finalize@plt-0xd2dd74>
  68505c:	49 89 f9             	mov    r9,rdi
  68505f:	49 0f a4 f1 26       	shld   r9,rsi,0x26
  685064:	48 0f ac f7 1a       	shrd   rdi,rsi,0x1a
  685069:	41 b8 3b 0a cf d1    	mov    r8d,0xd1cf0a3b
  68506f:	eb 28                	jmp    685099 <__cxa_finalize@plt-0xd2dd77>
  685071:	49 89 f1             	mov    r9,rsi
  685074:	49 0f a4 f9 1d       	shld   r9,rdi,0x1d
  685079:	48 0f a4 f7 1d       	shld   rdi,rsi,0x1d
  68507e:	41 b8 6b f4 ee 04    	mov    r8d,0x4eef46b
  685084:	eb 13                	jmp    685099 <__cxa_finalize@plt-0xd2dd77>
  685086:	49 89 f9             	mov    r9,rdi
  685089:	49 0f a4 f1 09       	shld   r9,rsi,0x9
  68508e:	48 0f ac f7 37       	shrd   rdi,rsi,0x37
  685093:	41 b8 c8 22 0f 5a    	mov    r8d,0x5a0f22c8
  685099:	4c 89 ce             	mov    rsi,r9
  68509c:	44 31 c2             	xor    edx,r8d
  68509f:	e9 93 fe ff ff       	jmp    684f37 <__cxa_finalize@plt-0xd2ded9>
  6850a4:	49 b8 30 62 dc ca 0f 	movabs r8,0x67cb980fcadc6230
  6850ab:	98 cb 67 
  6850ae:	4c 01 c7             	add    rdi,r8
  6850b1:	49 b8 00 14 7b 11 37 	movabs r8,0xe1397537117b1400
  6850b8:	75 39 e1 
  6850bb:	4c 11 c6             	adc    rsi,r8
  6850be:	41 b8 e3 87 14 33    	mov    r8d,0x331487e3
  6850c4:	eb d6                	jmp    68509c <__cxa_finalize@plt-0xd2dd74>
  6850c6:	49 b8 c0 27 fd b4 55 	movabs r8,0xc8b5ba55b4fd27c0
  6850cd:	ba b5 c8 
  6850d0:	4c 01 c7             	add    rdi,r8
  6850d3:	49 b8 53 68 3d 2c c4 	movabs r8,0x1e38acc42c3d6853
  6850da:	ac 38 1e 
  6850dd:	4c 11 c6             	adc    rsi,r8
  6850e0:	41 b8 14 43 20 e0    	mov    r8d,0xe0204314
  6850e6:	eb b4                	jmp    68509c <__cxa_finalize@plt-0xd2dd74>
  6850e8:	49 b8 e0 e0 63 94 f7 	movabs r8,0x41ae00f79463e0e0
  6850ef:	00 ae 41 
  6850f2:	4c 01 c7             	add    rdi,r8
  6850f5:	49 b8 cd d2 c9 5e 6a 	movabs r8,0x25c06d6a5ec9d2cd
  6850fc:	6d c0 25 
  6850ff:	4c 11 c6             	adc    rsi,r8
  685102:	41 b8 d7 4c 7c 28    	mov    r8d,0x287c4cd7
  685108:	eb 92                	jmp    68509c <__cxa_finalize@plt-0xd2dd74>
  68510a:	49 b8 b7 8a 28 f2 21 	movabs r8,0xa5d91021f2288ab7
  685111:	10 d9 a5 
  685114:	4c 01 c7             	add    rdi,r8
  685117:	49 b8 b6 67 01 68 34 	movabs r8,0xa4606f34680167b6
  68511e:	6f 60 a4 
  685121:	4c 11 c6             	adc    rsi,r8
  685124:	41 b8 79 f3 e7 7c    	mov    r8d,0x7ce7f379
  68512a:	e9 6d ff ff ff       	jmp    68509c <__cxa_finalize@plt-0xd2dd74>
  68512f:	49 b8 db e8 d0 da 92 	movabs r8,0x6f044692dad0e8db
  685136:	46 04 6f 
  685139:	4c 31 c7             	xor    rdi,r8
  68513c:	49 b8 ea f1 7c 6b ce 	movabs r8,0xbdf16ace6b7cf1ea
  685143:	6a f1 bd 
  685146:	4c 31 c6             	xor    rsi,r8
  685149:	41 b8 50 25 92 8d    	mov    r8d,0x8d922550
  68514f:	e9 48 ff ff ff       	jmp    68509c <__cxa_finalize@plt-0xd2dd74>
  685154:	49 b8 e6 ab 36 2c 17 	movabs r8,0xf1d9e9172c36abe6
  68515b:	e9 d9 f1 
  68515e:	4c 01 c7             	add    rdi,r8
  685161:	49 b8 55 ce e1 a1 59 	movabs r8,0x895bcc59a1e1ce55
  685168:	cc 5b 89 
  68516b:	4c 11 c6             	adc    rsi,r8
  68516e:	41 b8 c9 cc 8b 71    	mov    r8d,0x718bccc9
  685174:	e9 23 ff ff ff       	jmp    68509c <__cxa_finalize@plt-0xd2dd74>
  685179:	ba d8 ff af f4       	mov    edx,0xf4afffd8
  68517e:	45 31 ff             	xor    r15d,r15d
  685181:	45 31 c0             	xor    r8d,r8d
  685184:	45 31 f6             	xor    r14d,r14d
  685187:	4d 89 f9             	mov    r9,r15
  68518a:	49 0f c9             	bswap  r9
  68518d:	4d 89 f2             	mov    r10,r14
  685190:	49 0f ca             	bswap  r10
  685193:	81 fa 86 1a c9 81    	cmp    edx,0x81c91a86
  685199:	0f 84 5a 01 00 00    	je     6852f9 <__cxa_finalize@plt-0xd2db17>
  68519f:	81 fa d4 f4 e0 8b    	cmp    edx,0x8be0f4d4
  6851a5:	0f 84 78 01 00 00    	je     685323 <__cxa_finalize@plt-0xd2daed>
  6851ab:	81 fa ca 1a 7e 97    	cmp    edx,0x977e1aca
  6851b1:	0f 84 86 00 00 00    	je     68523d <__cxa_finalize@plt-0xd2dbd3>
  6851b7:	81 fa bd 23 a4 a4    	cmp    edx,0xa4a423bd
  6851bd:	0f 84 f5 00 00 00    	je     6852b8 <__cxa_finalize@plt-0xd2db58>
  6851c3:	81 fa 0d aa e7 d3    	cmp    edx,0xd3e7aa0d
  6851c9:	0f 84 84 01 00 00    	je     685353 <__cxa_finalize@plt-0xd2dabd>
  6851cf:	81 fa 92 3d 09 ef    	cmp    edx,0xef093d92
  6851d5:	74 41                	je     685218 <__cxa_finalize@plt-0xd2dbf8>
  6851d7:	81 fa d8 ff af f4    	cmp    edx,0xf4afffd8
  6851dd:	0f 84 f7 00 00 00    	je     6852da <__cxa_finalize@plt-0xd2db36>
  6851e3:	81 fa 92 1b 92 2e    	cmp    edx,0x2e921b92
  6851e9:	0f 84 5c 01 00 00    	je     68534b <__cxa_finalize@plt-0xd2dac5>
  6851ef:	81 fa 9c 36 2a 59    	cmp    edx,0x592a369c
  6851f5:	0f 84 6d 01 00 00    	je     685368 <__cxa_finalize@plt-0xd2daa8>
  6851fb:	81 fa 8b d0 35 6b    	cmp    edx,0x6b35d08b
  685201:	0f 84 fa 00 00 00    	je     685301 <__cxa_finalize@plt-0xd2db0f>
  685207:	81 fa 9d 0c 58 a4    	cmp    edx,0xa4580c9d
  68520d:	0f 85 30 01 00 00    	jne    685343 <__cxa_finalize@plt-0xd2dacd>
  685213:	e9 74 01 00 00       	jmp    68538c <__cxa_finalize@plt-0xd2da84>
  685218:	49 b8 86 dd e4 8d 35 	movabs r8,0xac266358de4dd86
  68521f:	66 c2 0a 
  685222:	4d 01 c7             	add    r15,r8
  685225:	49 b8 d8 87 db ab 7c 	movabs r8,0x8b31fb7cabdb87d8
  68522c:	fb 31 8b 
  68522f:	4d 11 c6             	adc    r14,r8
  685232:	41 b8 19 ed 3c 84    	mov    r8d,0x843ced19
  685238:	e9 06 01 00 00       	jmp    685343 <__cxa_finalize@plt-0xd2dacd>
  68523d:	49 0f cf             	bswap  r15
  685240:	4d 89 f8             	mov    r8,r15
  685243:	49 c1 e8 04          	shr    r8,0x4
  685247:	4d 21 e0             	and    r8,r12
  68524a:	4d 21 e7             	and    r15,r12
  68524d:	49 c1 e7 04          	shl    r15,0x4
  685251:	4d 09 c7             	or     r15,r8
  685254:	4d 89 f8             	mov    r8,r15
  685257:	4d 21 e8             	and    r8,r13
  68525a:	49 c1 ef 02          	shr    r15,0x2
  68525e:	4d 21 ef             	and    r15,r13
  685261:	4f 8d 04 87          	lea    r8,[r15+r8*4]
  685265:	4d 89 c1             	mov    r9,r8
  685268:	49 21 e9             	and    r9,rbp
  68526b:	49 d1 e8             	shr    r8,1
  68526e:	49 21 e8             	and    r8,rbp
  685271:	4f 8d 0c 48          	lea    r9,[r8+r9*2]
  685275:	49 0f ce             	bswap  r14
  685278:	4d 89 f0             	mov    r8,r14
  68527b:	49 c1 e8 04          	shr    r8,0x4
  68527f:	4d 21 e0             	and    r8,r12
  685282:	4d 21 e6             	and    r14,r12
  685285:	49 c1 e6 04          	shl    r14,0x4
  685289:	4d 09 c6             	or     r14,r8
  68528c:	4d 89 f0             	mov    r8,r14
  68528f:	4d 21 e8             	and    r8,r13
  685292:	49 c1 ee 02          	shr    r14,0x2
  685296:	4d 21 ee             	and    r14,r13
  685299:	4f 8d 04 86          	lea    r8,[r14+r8*4]
  68529d:	4d 89 c2             	mov    r10,r8
  6852a0:	49 21 ea             	and    r10,rbp
  6852a3:	49 d1 e8             	shr    r8,1
  6852a6:	49 21 e8             	and    r8,rbp
  6852a9:	4f 8d 14 50          	lea    r10,[r8+r10*2]
  6852ad:	41 b8 77 39 da 33    	mov    r8d,0x33da3977
  6852b3:	e9 c6 00 00 00       	jmp    68537e <__cxa_finalize@plt-0xd2da92>
  6852b8:	49 b8 17 f4 74 c8 f8 	movabs r8,0xe28102f8c874f417
  6852bf:	02 81 e2 
  6852c2:	4d 01 c7             	add    r15,r8
  6852c5:	49 b8 2f 66 76 68 9c 	movabs r8,0x9c35ab9c6876662f
  6852cc:	ab 35 9c 
  6852cf:	4d 11 c6             	adc    r14,r8
  6852d2:	41 b8 69 d7 44 2f    	mov    r8d,0x2f44d769
  6852d8:	eb 69                	jmp    685343 <__cxa_finalize@plt-0xd2dacd>
  6852da:	41 b8 44 c9 85 ad    	mov    r8d,0xad85c944
  6852e0:	49 ba 01 8d f5 1b 12 	movabs r10,0xbdb9cd121bf58d01
  6852e7:	cd b9 bd 
  6852ea:	49 b9 0b b4 2c 3c ce 	movabs r9,0x2b74f5ce3c2cb40b
  6852f1:	f5 74 2b 
  6852f4:	e9 85 00 00 00       	jmp    68537e <__cxa_finalize@plt-0xd2da92>
  6852f9:	41 b8 4c 00 b7 16    	mov    r8d,0x16b7004c
  6852ff:	eb 7d                	jmp    68537e <__cxa_finalize@plt-0xd2da92>
  685301:	49 b8 48 3b a4 1c 5a 	movabs r8,0x4e021b5a1ca43b48
  685308:	1b 02 4e 
  68530b:	4d 31 c7             	xor    r15,r8
  68530e:	49 b8 5f 6e da 24 31 	movabs r8,0x13bd3e3124da6e5f
  685315:	3e bd 13 
  685318:	4d 31 c6             	xor    r14,r8
  68531b:	41 b8 19 cb a7 45    	mov    r8d,0x45a7cb19
  685321:	eb 20                	jmp    685343 <__cxa_finalize@plt-0xd2dacd>
  685323:	49 b8 fa 31 21 c7 dd 	movabs r8,0x5443addc72131fa
  68532a:	3a 44 05 
  68532d:	4d 31 c7             	xor    r15,r8
  685330:	49 b8 48 c0 70 4c 1d 	movabs r8,0x5ae2481d4c70c048
  685337:	48 e2 5a 
  68533a:	4d 31 c6             	xor    r14,r8
  68533d:	41 b8 d9 5e 07 58    	mov    r8d,0x58075ed9
  685343:	4d 89 fa             	mov    r10,r15
  685346:	4d 89 f1             	mov    r9,r14
  685349:	eb 33                	jmp    68537e <__cxa_finalize@plt-0xd2da92>
  68534b:	41 b8 0f 17 ca 8a    	mov    r8d,0x8aca170f
  685351:	eb 2b                	jmp    68537e <__cxa_finalize@plt-0xd2da92>
  685353:	4d 89 f1             	mov    r9,r14
  685356:	4d 0f a4 f9 2e       	shld   r9,r15,0x2e
  68535b:	4d 0f a4 f7 2e       	shld   r15,r14,0x2e
  685360:	41 b8 9f 97 ee 3c    	mov    r8d,0x3cee979f
  685366:	eb 13                	jmp    68537b <__cxa_finalize@plt-0xd2da95>
  685368:	4d 89 f1             	mov    r9,r14
  68536b:	4d 0f a4 f9 0c       	shld   r9,r15,0xc
  685370:	4d 0f a4 f7 0c       	shld   r15,r14,0xc
  685375:	41 b8 1a 2c e3 d8    	mov    r8d,0xd8e32c1a
  68537b:	4d 89 fa             	mov    r10,r15
  68537e:	44 31 c2             	xor    edx,r8d
  685381:	4d 89 d7             	mov    r15,r10
  685384:	4d 89 ce             	mov    r14,r9
  685387:	e9 fb fd ff ff       	jmp    685187 <__cxa_finalize@plt-0xd2dc89>
  68538c:	41 b8 9f 89 f7 1c    	mov    r8d,0x1cf7899f
  685392:	e9 7a 22 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  685397:	ba 9f 73 31 aa       	mov    edx,0xaa31739f
  68539c:	31 ff                	xor    edi,edi
  68539e:	45 31 c0             	xor    r8d,r8d
  6853a1:	31 f6                	xor    esi,esi
  6853a3:	81 fa 99 20 1d 9c    	cmp    edx,0x9c1d2099
  6853a9:	0f 84 66 01 00 00    	je     685515 <__cxa_finalize@plt-0xd2d8fb>
  6853af:	81 fa 74 1e 69 a9    	cmp    edx,0xa9691e74
  6853b5:	0f 84 2e 02 00 00    	je     6855e9 <__cxa_finalize@plt-0xd2d827>
  6853bb:	81 fa 9f 73 31 aa    	cmp    edx,0xaa31739f
  6853c1:	0f 84 85 00 00 00    	je     68544c <__cxa_finalize@plt-0xd2d9c4>
  6853c7:	81 fa 61 ad 52 bf    	cmp    edx,0xbf52ad61
  6853cd:	0f 84 98 00 00 00    	je     68546b <__cxa_finalize@plt-0xd2d9a5>
  6853d3:	49 89 f9             	mov    r9,rdi
  6853d6:	81 fa 8c ad d7 ce    	cmp    edx,0xced7ad8c
  6853dc:	0f 84 ab 01 00 00    	je     68558d <__cxa_finalize@plt-0xd2d883>
  6853e2:	49 0f c9             	bswap  r9
  6853e5:	49 89 f2             	mov    r10,rsi
  6853e8:	49 0f ca             	bswap  r10
  6853eb:	81 fa d2 9e 0f d8    	cmp    edx,0xd80f9ed2
  6853f1:	0f 84 99 00 00 00    	je     685490 <__cxa_finalize@plt-0xd2d980>
  6853f7:	81 fa d6 99 7b e6    	cmp    edx,0xe67b99d6
  6853fd:	0f 84 07 01 00 00    	je     68550a <__cxa_finalize@plt-0xd2d906>
  685403:	81 fa e9 ee 0b 0c    	cmp    edx,0xc0beee9
  685409:	0f 84 d6 00 00 00    	je     6854e5 <__cxa_finalize@plt-0xd2d92b>
  68540f:	81 fa d1 ed e0 1a    	cmp    edx,0x1ae0edd1
  685415:	0f 84 84 01 00 00    	je     68559f <__cxa_finalize@plt-0xd2d871>
  68541b:	81 fa 14 58 4a 31    	cmp    edx,0x314a5814
  685421:	0f 84 9a 01 00 00    	je     6855c1 <__cxa_finalize@plt-0xd2d84f>
  685427:	81 fa 55 8e cb 38    	cmp    edx,0x38cb8e55
  68542d:	74 6c                	je     68549b <__cxa_finalize@plt-0xd2d975>
  68542f:	81 fa 78 e1 2b 5e    	cmp    edx,0x5e2be178
  685435:	0f 84 85 00 00 00    	je     6854c0 <__cxa_finalize@plt-0xd2d950>
  68543b:	81 fa 15 e5 a5 a9    	cmp    edx,0xa9a5e515
  685441:	0f 85 9a 01 00 00    	jne    6855e1 <__cxa_finalize@plt-0xd2d82f>
  685447:	e9 c1 01 00 00       	jmp    68560d <__cxa_finalize@plt-0xd2d803>
  68544c:	41 b8 49 ea 4a 4c    	mov    r8d,0x4c4aea49
  685452:	49 ba 01 3e 49 1a 44 	movabs r10,0x2b7c2e441a493e01
  685459:	2e 7c 2b 
  68545c:	49 b9 70 b6 eb b2 45 	movabs r9,0xc44d7f45b2ebb670
  685463:	7f 4d c4 
  685466:	e9 94 01 00 00       	jmp    6855ff <__cxa_finalize@plt-0xd2d811>
  68546b:	49 b8 69 db b1 2d 65 	movabs r8,0xdbfc28652db1db69
  685472:	28 fc db 
  685475:	4c 31 c7             	xor    rdi,r8
  685478:	49 b8 b9 53 ff f5 a8 	movabs r8,0x2b5f72a8f5ff53b9
  68547f:	72 5f 2b 
  685482:	4c 31 c6             	xor    rsi,r8
  685485:	41 b8 88 43 59 b3    	mov    r8d,0xb3594388
  68548b:	e9 51 01 00 00       	jmp    6855e1 <__cxa_finalize@plt-0xd2d82f>
  685490:	41 b8 c6 c6 45 e9    	mov    r8d,0xe945c6c6
  685496:	e9 64 01 00 00       	jmp    6855ff <__cxa_finalize@plt-0xd2d811>
  68549b:	49 b8 5c 8d 04 3e 48 	movabs r8,0x8009b7483e048d5c
  6854a2:	b7 09 80 
  6854a5:	4c 01 c7             	add    rdi,r8
  6854a8:	49 b8 44 56 69 54 db 	movabs r8,0xa5d1b3db54695644
  6854af:	b3 d1 a5 
  6854b2:	4c 11 c6             	adc    rsi,r8
  6854b5:	41 b8 2d 6f e0 66    	mov    r8d,0x66e06f2d
  6854bb:	e9 21 01 00 00       	jmp    6855e1 <__cxa_finalize@plt-0xd2d82f>
  6854c0:	49 b8 c1 dc 30 2f 32 	movabs r8,0x727712322f30dcc1
  6854c7:	12 77 72 
  6854ca:	4c 31 c7             	xor    rdi,r8
  6854cd:	49 b8 8d a5 80 d9 41 	movabs r8,0x27789941d980a58d
  6854d4:	99 78 27 
  6854d7:	4c 31 c6             	xor    rsi,r8
  6854da:	41 b8 19 4c 79 e1    	mov    r8d,0xe1794c19
  6854e0:	e9 fc 00 00 00       	jmp    6855e1 <__cxa_finalize@plt-0xd2d82f>
  6854e5:	49 b8 46 de 89 ab 9b 	movabs r8,0x116fd79bab89de46
  6854ec:	d7 6f 11 
  6854ef:	4c 01 c7             	add    rdi,r8
  6854f2:	49 b8 bd 41 0f 72 cf 	movabs r8,0x44265dcf720f41bd
  6854f9:	5d 26 44 
  6854fc:	4c 11 c6             	adc    rsi,r8
  6854ff:	41 b8 38 03 eb 16    	mov    r8d,0x16eb0338
  685505:	e9 d7 00 00 00       	jmp    6855e1 <__cxa_finalize@plt-0xd2d82f>
  68550a:	41 b8 a2 87 12 4f    	mov    r8d,0x4f1287a2
  685510:	e9 ea 00 00 00       	jmp    6855ff <__cxa_finalize@plt-0xd2d811>
  685515:	48 0f cf             	bswap  rdi
  685518:	49 89 f8             	mov    r8,rdi
  68551b:	49 c1 e8 04          	shr    r8,0x4
  68551f:	4d 21 e0             	and    r8,r12
  685522:	4c 21 e7             	and    rdi,r12
  685525:	48 c1 e7 04          	shl    rdi,0x4
  685529:	4c 09 c7             	or     rdi,r8
  68552c:	49 89 f8             	mov    r8,rdi
  68552f:	4d 21 e8             	and    r8,r13
  685532:	48 c1 ef 02          	shr    rdi,0x2
  685536:	4c 21 ef             	and    rdi,r13
  685539:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  68553d:	49 89 f8             	mov    r8,rdi
  685540:	49 21 e8             	and    r8,rbp
  685543:	48 d1 ef             	shr    rdi,1
  685546:	48 21 ef             	and    rdi,rbp
  685549:	4e 8d 0c 47          	lea    r9,[rdi+r8*2]
  68554d:	48 0f ce             	bswap  rsi
  685550:	48 89 f7             	mov    rdi,rsi
  685553:	48 c1 ef 04          	shr    rdi,0x4
  685557:	4c 21 e7             	and    rdi,r12
  68555a:	4c 21 e6             	and    rsi,r12
  68555d:	48 c1 e6 04          	shl    rsi,0x4
  685561:	48 09 fe             	or     rsi,rdi
  685564:	48 89 f7             	mov    rdi,rsi
  685567:	4c 21 ef             	and    rdi,r13
  68556a:	48 c1 ee 02          	shr    rsi,0x2
  68556e:	4c 21 ee             	and    rsi,r13
  685571:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  685575:	48 89 f7             	mov    rdi,rsi
  685578:	48 21 ef             	and    rdi,rbp
  68557b:	48 d1 ee             	shr    rsi,1
  68557e:	48 21 ee             	and    rsi,rbp
  685581:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  685585:	41 b8 4b be 12 44    	mov    r8d,0x4412be4b
  68558b:	eb 72                	jmp    6855ff <__cxa_finalize@plt-0xd2d811>
  68558d:	49 0f a4 f1 3d       	shld   r9,rsi,0x3d
  685592:	48 0f a4 fe 3d       	shld   rsi,rdi,0x3d
  685597:	41 b8 15 8d ca 52    	mov    r8d,0x52ca8d15
  68559d:	eb 5d                	jmp    6855fc <__cxa_finalize@plt-0xd2d814>
  68559f:	49 b8 98 86 08 52 5e 	movabs r8,0x351ef35e52088698
  6855a6:	f3 1e 35 
  6855a9:	4c 01 c7             	add    rdi,r8
  6855ac:	49 b8 8b 2c d6 77 c6 	movabs r8,0x5d13e5c677d62c8b
  6855b3:	e5 13 5d 
  6855b6:	4c 11 c6             	adc    rsi,r8
  6855b9:	41 b8 c4 08 45 b3    	mov    r8d,0xb34508c4
  6855bf:	eb 20                	jmp    6855e1 <__cxa_finalize@plt-0xd2d82f>
  6855c1:	49 b8 b9 34 d6 63 5b 	movabs r8,0x95b4605b63d634b9
  6855c8:	60 b4 95 
  6855cb:	4c 01 c7             	add    rdi,r8
  6855ce:	49 b8 b0 45 01 5c 70 	movabs r8,0x715c46705c0145b0
  6855d5:	46 5c 71 
  6855d8:	4c 11 c6             	adc    rsi,r8
  6855db:	41 b8 41 d6 81 09    	mov    r8d,0x981d641
  6855e1:	49 89 fa             	mov    r10,rdi
  6855e4:	49 89 f1             	mov    r9,rsi
  6855e7:	eb 16                	jmp    6855ff <__cxa_finalize@plt-0xd2d811>
  6855e9:	49 89 f9             	mov    r9,rdi
  6855ec:	49 0f a4 f1 01       	shld   r9,rsi,0x1
  6855f1:	48 0f a4 fe 01       	shld   rsi,rdi,0x1
  6855f6:	41 b8 f8 b3 be 67    	mov    r8d,0x67beb3f8
  6855fc:	49 89 f2             	mov    r10,rsi
  6855ff:	44 31 c2             	xor    edx,r8d
  685602:	4c 89 d7             	mov    rdi,r10
  685605:	4c 89 ce             	mov    rsi,r9
  685608:	e9 96 fd ff ff       	jmp    6853a3 <__cxa_finalize@plt-0xd2da6d>
  68560d:	ba 0c 5a 4a c5       	mov    edx,0xc54a5a0c
  685612:	45 31 ff             	xor    r15d,r15d
  685615:	45 31 d2             	xor    r10d,r10d
  685618:	45 31 f6             	xor    r14d,r14d
  68561b:	4d 89 f8             	mov    r8,r15
  68561e:	49 0f c8             	bswap  r8
  685621:	4d 89 f1             	mov    r9,r14
  685624:	49 0f c9             	bswap  r9
  685627:	81 fa a5 ab 6e 8d    	cmp    edx,0x8d6eaba5
  68562d:	0f 84 68 02 00 00    	je     68589b <__cxa_finalize@plt-0xd2d575>
  685633:	81 fa 78 a1 48 af    	cmp    edx,0xaf48a178
  685639:	74 79                	je     6856b4 <__cxa_finalize@plt-0xd2d75c>
  68563b:	81 fa 0c 5a 4a c5    	cmp    edx,0xc54a5a0c
  685641:	0f 84 92 00 00 00    	je     6856d9 <__cxa_finalize@plt-0xd2d737>
  685647:	81 fa d8 c2 48 ca    	cmp    edx,0xca48c2d8
  68564d:	0f 84 0c 02 00 00    	je     68585f <__cxa_finalize@plt-0xd2d5b1>
  685653:	81 fa 07 63 cb 05    	cmp    edx,0x5cb6307
  685659:	0f 84 b4 00 00 00    	je     685713 <__cxa_finalize@plt-0xd2d6fd>
  68565f:	81 fa 97 5a c9 12    	cmp    edx,0x12c95a97
  685665:	0f 84 f2 00 00 00    	je     68575d <__cxa_finalize@plt-0xd2d6b3>
  68566b:	81 fa 9a a8 3e 1f    	cmp    edx,0x1f3ea89a
  685671:	0f 84 c1 00 00 00    	je     685738 <__cxa_finalize@plt-0xd2d6d8>
  685677:	81 fa 68 cc 3c 27    	cmp    edx,0x273ccc68
  68567d:	0f 84 e4 01 00 00    	je     685867 <__cxa_finalize@plt-0xd2d5a9>
  685683:	81 fa 31 4d 62 30    	cmp    edx,0x30624d31
  685689:	74 6d                	je     6856f8 <__cxa_finalize@plt-0xd2d718>
  68568b:	81 fa 02 82 89 4b    	cmp    edx,0x4b898202
  685691:	0f 84 e1 00 00 00    	je     685778 <__cxa_finalize@plt-0xd2d698>
  685697:	81 fa 02 ce c4 65    	cmp    edx,0x65c4ce02
  68569d:	0f 84 4a 01 00 00    	je     6857ed <__cxa_finalize@plt-0xd2d623>
  6856a3:	81 fa 8c c6 61 81    	cmp    edx,0x8161c68c
  6856a9:	0f 85 d8 01 00 00    	jne    685887 <__cxa_finalize@plt-0xd2d589>
  6856af:	e9 ef 01 00 00       	jmp    6858a3 <__cxa_finalize@plt-0xd2d56d>
  6856b4:	49 b8 7a 01 4b 6a c0 	movabs r8,0x8c852fc06a4b017a
  6856bb:	2f 85 8c 
  6856be:	4d 01 c7             	add    r15,r8
  6856c1:	49 b8 96 d5 65 9e 86 	movabs r8,0x9d0830869e65d596
  6856c8:	30 08 9d 
  6856cb:	4d 11 c6             	adc    r14,r8
  6856ce:	41 ba ef fb 81 bd    	mov    r10d,0xbd81fbef
  6856d4:	e9 ae 01 00 00       	jmp    685887 <__cxa_finalize@plt-0xd2d589>
  6856d9:	41 ba d4 98 02 0f    	mov    r10d,0xf0298d4
  6856df:	49 b9 32 2d 03 63 af 	movabs r9,0x986430af63032d32
  6856e6:	30 64 98 
  6856e9:	49 b8 63 a4 26 c4 c9 	movabs r8,0x530c14c9c426a463
  6856f0:	14 0c 53 
  6856f3:	e9 95 01 00 00       	jmp    68588d <__cxa_finalize@plt-0xd2d583>
  6856f8:	4d 89 f0             	mov    r8,r14
  6856fb:	4d 0f a4 f8 21       	shld   r8,r15,0x21
  685700:	4d 0f a4 f7 21       	shld   r15,r14,0x21
  685705:	41 ba 33 cf eb 7b    	mov    r10d,0x7bebcf33
  68570b:	4d 89 f9             	mov    r9,r15
  68570e:	e9 7a 01 00 00       	jmp    68588d <__cxa_finalize@plt-0xd2d583>
  685713:	49 b8 1b 0a fe 84 8e 	movabs r8,0x466238e84fe0a1b
  68571a:	23 66 04 
  68571d:	4d 31 c7             	xor    r15,r8
  685720:	49 b8 e0 b7 fd bb c2 	movabs r8,0xbca6d5c2bbfdb7e0
  685727:	d5 a6 bc 
  68572a:	4d 31 c6             	xor    r14,r8
  68572d:	41 ba 8b a5 aa 84    	mov    r10d,0x84aaa58b
  685733:	e9 4f 01 00 00       	jmp    685887 <__cxa_finalize@plt-0xd2d589>
  685738:	49 b8 3e 00 91 c9 11 	movabs r8,0x38861111c991003e
  68573f:	11 86 38 
  685742:	4d 01 c7             	add    r15,r8
  685745:	49 b8 a3 5c d0 6c 36 	movabs r8,0x4e7071366cd05ca3
  68574c:	71 70 4e 
  68574f:	4d 11 c6             	adc    r14,r8
  685752:	41 ba 98 66 fa 7a    	mov    r10d,0x7afa6698
  685758:	e9 2a 01 00 00       	jmp    685887 <__cxa_finalize@plt-0xd2d589>
  68575d:	4d 89 f8             	mov    r8,r15
  685760:	4d 0f a4 f0 13       	shld   r8,r14,0x13
  685765:	4d 0f a4 fe 13       	shld   r14,r15,0x13
  68576a:	41 ba ff 96 f5 35    	mov    r10d,0x35f596ff
  685770:	4d 89 f1             	mov    r9,r14
  685773:	e9 15 01 00 00       	jmp    68588d <__cxa_finalize@plt-0xd2d583>
  685778:	4d 89 c2             	mov    r10,r8
  68577b:	49 c1 ea 04          	shr    r10,0x4
  68577f:	4d 21 e2             	and    r10,r12
  685782:	4d 21 e0             	and    r8,r12
  685785:	49 c1 e0 04          	shl    r8,0x4
  685789:	4d 09 d0             	or     r8,r10
  68578c:	4d 89 c2             	mov    r10,r8
  68578f:	4d 21 ea             	and    r10,r13
  685792:	49 c1 e8 02          	shr    r8,0x2
  685796:	4d 21 e8             	and    r8,r13
  685799:	4f 8d 04 90          	lea    r8,[r8+r10*4]
  68579d:	4d 89 c2             	mov    r10,r8
  6857a0:	49 21 ea             	and    r10,rbp
  6857a3:	49 d1 e8             	shr    r8,1
  6857a6:	49 21 e8             	and    r8,rbp
  6857a9:	4f 8d 04 50          	lea    r8,[r8+r10*2]
  6857ad:	4d 89 ca             	mov    r10,r9
  6857b0:	49 c1 ea 04          	shr    r10,0x4
  6857b4:	4d 21 e2             	and    r10,r12
  6857b7:	4d 21 e1             	and    r9,r12
  6857ba:	49 c1 e1 04          	shl    r9,0x4
  6857be:	4d 09 d1             	or     r9,r10
  6857c1:	4d 89 ca             	mov    r10,r9
  6857c4:	4d 21 ea             	and    r10,r13
  6857c7:	49 c1 e9 02          	shr    r9,0x2
  6857cb:	4d 21 e9             	and    r9,r13
  6857ce:	4f 8d 0c 91          	lea    r9,[r9+r10*4]
  6857d2:	4d 89 ca             	mov    r10,r9
  6857d5:	49 21 ea             	and    r10,rbp
  6857d8:	49 d1 e9             	shr    r9,1
  6857db:	49 21 e9             	and    r9,rbp
  6857de:	4f 8d 0c 51          	lea    r9,[r9+r10*2]
  6857e2:	41 ba 7a 23 c1 e4    	mov    r10d,0xe4c1237a
  6857e8:	e9 a0 00 00 00       	jmp    68588d <__cxa_finalize@plt-0xd2d583>
  6857ed:	4d 89 c2             	mov    r10,r8
  6857f0:	49 c1 ea 04          	shr    r10,0x4
  6857f4:	4d 21 e2             	and    r10,r12
  6857f7:	4d 21 e0             	and    r8,r12
  6857fa:	49 c1 e0 04          	shl    r8,0x4
  6857fe:	4d 09 d0             	or     r8,r10
  685801:	4d 89 c2             	mov    r10,r8
  685804:	4d 21 ea             	and    r10,r13
  685807:	49 c1 e8 02          	shr    r8,0x2
  68580b:	4d 21 e8             	and    r8,r13
  68580e:	4f 8d 04 90          	lea    r8,[r8+r10*4]
  685812:	4d 89 c2             	mov    r10,r8
  685815:	49 21 ea             	and    r10,rbp
  685818:	49 d1 e8             	shr    r8,1
  68581b:	49 21 e8             	and    r8,rbp
  68581e:	4f 8d 04 50          	lea    r8,[r8+r10*2]
  685822:	4d 89 ca             	mov    r10,r9
  685825:	49 c1 ea 04          	shr    r10,0x4
  685829:	4d 21 e2             	and    r10,r12
  68582c:	4d 21 e1             	and    r9,r12
  68582f:	49 c1 e1 04          	shl    r9,0x4
  685833:	4d 09 d1             	or     r9,r10
  685836:	4d 89 ca             	mov    r10,r9
  685839:	4d 21 ea             	and    r10,r13
  68583c:	49 c1 e9 02          	shr    r9,0x2
  685840:	4d 21 e9             	and    r9,r13
  685843:	4f 8d 0c 91          	lea    r9,[r9+r10*4]
  685847:	4d 89 ca             	mov    r10,r9
  68584a:	49 21 ea             	and    r10,rbp
  68584d:	49 d1 e9             	shr    r9,1
  685850:	49 21 e9             	and    r9,rbp
  685853:	4f 8d 0c 51          	lea    r9,[r9+r10*2]
  685857:	41 ba 05 ad 0f 60    	mov    r10d,0x600fad05
  68585d:	eb 2e                	jmp    68588d <__cxa_finalize@plt-0xd2d583>
  68585f:	41 ba e9 8f 2a fa    	mov    r10d,0xfa2a8fe9
  685865:	eb 26                	jmp    68588d <__cxa_finalize@plt-0xd2d583>
  685867:	49 b8 63 ce 0f e7 ce 	movabs r8,0x615570cee70fce63
  68586e:	70 55 61 
  685871:	4d 31 c7             	xor    r15,r8
  685874:	49 b8 8b 64 0a f4 8a 	movabs r8,0xea7fac8af40a648b
  68587b:	ac 7f ea 
  68587e:	4d 31 c6             	xor    r14,r8
  685881:	41 ba cd 67 52 aa    	mov    r10d,0xaa5267cd
  685887:	4d 89 f9             	mov    r9,r15
  68588a:	4d 89 f0             	mov    r8,r14
  68588d:	44 31 d2             	xor    edx,r10d
  685890:	4d 89 cf             	mov    r15,r9
  685893:	4d 89 c6             	mov    r14,r8
  685896:	e9 80 fd ff ff       	jmp    68561b <__cxa_finalize@plt-0xd2d7f5>
  68589b:	41 ba 3f 03 50 92    	mov    r10d,0x9250033f
  6858a1:	eb ea                	jmp    68588d <__cxa_finalize@plt-0xd2d583>
  6858a3:	41 b8 83 d7 b5 db    	mov    r8d,0xdbb5d783
  6858a9:	e9 63 1d 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  6858ae:	ba d9 d1 b2 12       	mov    edx,0x12b2d1d9
  6858b3:	31 ff                	xor    edi,edi
  6858b5:	45 31 c0             	xor    r8d,r8d
  6858b8:	31 f6                	xor    esi,esi
  6858ba:	81 fa fa 54 ee 81    	cmp    edx,0x81ee54fa
  6858c0:	0f 84 b0 01 00 00    	je     685a76 <__cxa_finalize@plt-0xd2d39a>
  6858c6:	81 fa 43 c2 a4 89    	cmp    edx,0x89a4c243
  6858cc:	0f 84 85 00 00 00    	je     685957 <__cxa_finalize@plt-0xd2d4b9>
  6858d2:	81 fa 2c 85 9f b3    	cmp    edx,0xb39f852c
  6858d8:	0f 84 94 00 00 00    	je     685972 <__cxa_finalize@plt-0xd2d49e>
  6858de:	81 fa c5 a4 65 e5    	cmp    edx,0xe565a4c5
  6858e4:	0f 84 62 01 00 00    	je     685a4c <__cxa_finalize@plt-0xd2d3c4>
  6858ea:	81 fa d9 d1 b2 12    	cmp    edx,0x12b2d1d9
  6858f0:	0f 84 c6 00 00 00    	je     6859bc <__cxa_finalize@plt-0xd2d454>
  6858f6:	81 fa e4 0a 88 21    	cmp    edx,0x21880ae4
  6858fc:	0f 84 fe 00 00 00    	je     685a00 <__cxa_finalize@plt-0xd2d410>
  685902:	81 fa ab 3b 69 24    	cmp    edx,0x24693bab
  685908:	0f 84 cd 00 00 00    	je     6859db <__cxa_finalize@plt-0xd2d435>
  68590e:	49 89 fa             	mov    r10,rdi
  685911:	49 0f ca             	bswap  r10
  685914:	49 89 f1             	mov    r9,rsi
  685917:	49 0f c9             	bswap  r9
  68591a:	81 fa e8 6b 7f 2a    	cmp    edx,0x2a7f6be8
  685920:	0f 84 48 01 00 00    	je     685a6e <__cxa_finalize@plt-0xd2d3a2>
  685926:	81 fa 99 78 7a 34    	cmp    edx,0x347a7899
  68592c:	74 69                	je     685997 <__cxa_finalize@plt-0xd2d479>
  68592e:	81 fa a9 90 5d 48    	cmp    edx,0x485d90a9
  685934:	0f 84 e8 00 00 00    	je     685a22 <__cxa_finalize@plt-0xd2d3ee>
  68593a:	81 fa 67 7a 04 6f    	cmp    edx,0x6f047a67
  685940:	0f 84 e4 00 00 00    	je     685a2a <__cxa_finalize@plt-0xd2d3e6>
  685946:	81 fa f9 d1 d3 6a    	cmp    edx,0x6ad3d1f9
  68594c:	0f 85 44 01 00 00    	jne    685a96 <__cxa_finalize@plt-0xd2d37a>
  685952:	e9 53 01 00 00       	jmp    685aaa <__cxa_finalize@plt-0xd2d366>
  685957:	49 89 f2             	mov    r10,rsi
  68595a:	49 0f a4 fa 39       	shld   r10,rdi,0x39
  68595f:	48 0f a4 f7 39       	shld   rdi,rsi,0x39
  685964:	41 b8 a7 c8 2c a8    	mov    r8d,0xa82cc8a7
  68596a:	49 89 f9             	mov    r9,rdi
  68596d:	e9 2a 01 00 00       	jmp    685a9c <__cxa_finalize@plt-0xd2d374>
  685972:	49 b8 81 39 fb c6 b5 	movabs r8,0x1a6fab5c6fb3981
  685979:	fa a6 01 
  68597c:	4c 31 c7             	xor    rdi,r8
  68597f:	49 b8 22 18 72 e2 af 	movabs r8,0xb5da0aafe2721822
  685986:	0a da b5 
  685989:	4c 31 c6             	xor    rsi,r8
  68598c:	41 b8 6f 47 3b 3a    	mov    r8d,0x3a3b476f
  685992:	e9 ff 00 00 00       	jmp    685a96 <__cxa_finalize@plt-0xd2d37a>
  685997:	49 b8 f8 7d 57 3d 51 	movabs r8,0x5897e2513d577df8
  68599e:	e2 97 58 
  6859a1:	4c 31 c7             	xor    rdi,r8
  6859a4:	49 b8 f2 01 5a ed 18 	movabs r8,0xc669b218ed5a01f2
  6859ab:	b2 69 c6 
  6859ae:	4c 31 c6             	xor    rsi,r8
  6859b1:	41 b8 63 2c 94 b5    	mov    r8d,0xb5942c63
  6859b7:	e9 da 00 00 00       	jmp    685a96 <__cxa_finalize@plt-0xd2d37a>
  6859bc:	41 b8 f5 54 2d a1    	mov    r8d,0xa12d54f5
  6859c2:	49 b9 0a 63 65 23 00 	movabs r9,0xbb3548002365630a
  6859c9:	48 35 bb 
  6859cc:	49 ba 20 f1 e4 0d 05 	movabs r10,0x77747a050de4f120
  6859d3:	7a 74 77 
  6859d6:	e9 c1 00 00 00       	jmp    685a9c <__cxa_finalize@plt-0xd2d374>
  6859db:	49 b8 fa fc dd 10 40 	movabs r8,0x651f904010ddfcfa
  6859e2:	90 1f 65 
  6859e5:	4c 01 c7             	add    rdi,r8
  6859e8:	49 b8 90 a6 93 a4 b2 	movabs r8,0x2981d2b2a493a690
  6859ef:	d2 81 29 
  6859f2:	4c 11 c6             	adc    rsi,r8
  6859f5:	41 b8 02 ab 34 6c    	mov    r8d,0x6c34ab02
  6859fb:	e9 96 00 00 00       	jmp    685a96 <__cxa_finalize@plt-0xd2d37a>
  685a00:	49 b8 f2 8d b1 d1 97 	movabs r8,0x83566997d1b18df2
  685a07:	69 56 83 
  685a0a:	4c 01 c7             	add    rdi,r8
  685a0d:	49 b8 79 86 a8 ff 9e 	movabs r8,0x1d6e159effa88679
  685a14:	15 6e 1d 
  685a17:	4c 11 c6             	adc    rsi,r8
  685a1a:	41 b8 4f 31 e1 05    	mov    r8d,0x5e1314f
  685a20:	eb 74                	jmp    685a96 <__cxa_finalize@plt-0xd2d37a>
  685a22:	41 b8 30 e8 27 7c    	mov    r8d,0x7c27e830
  685a28:	eb 72                	jmp    685a9c <__cxa_finalize@plt-0xd2d374>
  685a2a:	49 b8 38 30 ed 7f db 	movabs r8,0xbca6cbdb7fed3038
  685a31:	cb a6 bc 
  685a34:	4c 31 c7             	xor    rdi,r8
  685a37:	49 b8 cf e1 54 c3 87 	movabs r8,0x33770d87c354e1cf
  685a3e:	0d 77 33 
  685a41:	4c 31 c6             	xor    rsi,r8
  685a44:	41 b8 a2 de 61 8a    	mov    r8d,0x8a61dea2
  685a4a:	eb 4a                	jmp    685a96 <__cxa_finalize@plt-0xd2d37a>
  685a4c:	49 b8 14 ef f1 95 9e 	movabs r8,0x99efcc9e95f1ef14
  685a53:	cc ef 99 
  685a56:	4c 01 c7             	add    rdi,r8
  685a59:	49 b8 34 37 8c 7b 85 	movabs r8,0x94531a857b8c3734
  685a60:	1a 53 94 
  685a63:	4c 11 c6             	adc    rsi,r8
  685a66:	41 b8 2d cf 1a cf    	mov    r8d,0xcf1acf2d
  685a6c:	eb 28                	jmp    685a96 <__cxa_finalize@plt-0xd2d37a>
  685a6e:	41 b8 11 ba ac 40    	mov    r8d,0x40acba11
  685a74:	eb 26                	jmp    685a9c <__cxa_finalize@plt-0xd2d374>
  685a76:	49 b8 20 08 8b 8b 78 	movabs r8,0xf3b813788b8b0820
  685a7d:	13 b8 f3 
  685a80:	4c 01 c7             	add    rdi,r8
  685a83:	49 b8 17 ba f9 ca f4 	movabs r8,0x665f17f4caf9ba17
  685a8a:	17 5f 66 
  685a8d:	4c 11 c6             	adc    rsi,r8
  685a90:	41 b8 9d 2e ea ee    	mov    r8d,0xeeea2e9d
  685a96:	49 89 f9             	mov    r9,rdi
  685a99:	49 89 f2             	mov    r10,rsi
  685a9c:	44 31 c2             	xor    edx,r8d
  685a9f:	4c 89 cf             	mov    rdi,r9
  685aa2:	4c 89 d6             	mov    rsi,r10
  685aa5:	e9 10 fe ff ff       	jmp    6858ba <__cxa_finalize@plt-0xd2d556>
  685aaa:	ba 3a 36 f3 c0       	mov    edx,0xc0f3363a
  685aaf:	45 31 ff             	xor    r15d,r15d
  685ab2:	45 31 c0             	xor    r8d,r8d
  685ab5:	45 31 f6             	xor    r14d,r14d
  685ab8:	81 fa 19 41 20 89    	cmp    edx,0x89204119
  685abe:	0f 84 3b 01 00 00    	je     685bff <__cxa_finalize@plt-0xd2d211>
  685ac4:	81 fa 3a 36 f3 c0    	cmp    edx,0xc0f3363a
  685aca:	0f 84 95 00 00 00    	je     685b65 <__cxa_finalize@plt-0xd2d2ab>
  685ad0:	81 fa 1e 72 fa c8    	cmp    edx,0xc8fa721e
  685ad6:	0f 84 d9 00 00 00    	je     685bb5 <__cxa_finalize@plt-0xd2d25b>
  685adc:	4d 89 f9             	mov    r9,r15
  685adf:	49 0f c9             	bswap  r9
  685ae2:	4d 89 f2             	mov    r10,r14
  685ae5:	49 0f ca             	bswap  r10
  685ae8:	81 fa 11 c0 ec f1    	cmp    edx,0xf1ecc011
  685aee:	0f 84 a3 01 00 00    	je     685c97 <__cxa_finalize@plt-0xd2d179>
  685af4:	81 fa 58 00 66 06    	cmp    edx,0x6660058
  685afa:	0f 84 9f 01 00 00    	je     685c9f <__cxa_finalize@plt-0xd2d171>
  685b00:	81 fa dd 6e 51 0b    	cmp    edx,0xb516edd
  685b06:	0f 84 2d 01 00 00    	je     685c39 <__cxa_finalize@plt-0xd2d1d7>
  685b0c:	81 fa 6e 67 6f 28    	cmp    edx,0x286f676e
  685b12:	0f 84 4b 01 00 00    	je     685c63 <__cxa_finalize@plt-0xd2d1ad>
  685b18:	81 fa 9b c5 2f 50    	cmp    edx,0x502fc59b
  685b1e:	74 64                	je     685b84 <__cxa_finalize@plt-0xd2d28c>
  685b20:	81 fa 0e 0e 09 5d    	cmp    edx,0x5d090e0e
  685b26:	0f 84 2f 01 00 00    	je     685c5b <__cxa_finalize@plt-0xd2d1b5>
  685b2c:	81 fa a2 c2 a6 65    	cmp    edx,0x65a6c2a2
  685b32:	74 5b                	je     685b8f <__cxa_finalize@plt-0xd2d281>
  685b34:	81 fa 99 29 d4 66    	cmp    edx,0x66d42999
  685b3a:	0f 84 9a 00 00 00    	je     685bda <__cxa_finalize@plt-0xd2d236>
  685b40:	81 fa e8 9b 26 70    	cmp    edx,0x70269be8
  685b46:	74 52                	je     685b9a <__cxa_finalize@plt-0xd2d276>
  685b48:	81 fa a2 94 f3 72    	cmp    edx,0x72f394a2
  685b4e:	0f 84 cd 00 00 00    	je     685c21 <__cxa_finalize@plt-0xd2d1ef>
  685b54:	81 fa aa d8 01 fb    	cmp    edx,0xfb01d8aa
  685b5a:	0f 85 23 01 00 00    	jne    685c83 <__cxa_finalize@plt-0xd2d18d>
  685b60:	e9 42 01 00 00       	jmp    685ca7 <__cxa_finalize@plt-0xd2d169>
  685b65:	41 b8 a3 1f 27 a6    	mov    r8d,0xa6271fa3
  685b6b:	49 ba 1c 1e 83 4e 84 	movabs r10,0x533f43844e831e1c
  685b72:	43 3f 53 
  685b75:	49 b9 96 13 b5 4c 37 	movabs r9,0xea1dbd374cb51396
  685b7c:	bd 1d ea 
  685b7f:	e9 05 01 00 00       	jmp    685c89 <__cxa_finalize@plt-0xd2d187>
  685b84:	41 b8 39 07 89 35    	mov    r8d,0x35890739
  685b8a:	e9 fa 00 00 00       	jmp    685c89 <__cxa_finalize@plt-0xd2d187>
  685b8f:	41 b8 cc a5 c9 4d    	mov    r8d,0x4dc9a5cc
  685b95:	e9 ef 00 00 00       	jmp    685c89 <__cxa_finalize@plt-0xd2d187>
  685b9a:	4d 89 f9             	mov    r9,r15
  685b9d:	4d 0f a4 f1 1c       	shld   r9,r14,0x1c
  685ba2:	4d 0f a4 fe 1c       	shld   r14,r15,0x1c
  685ba7:	41 b8 e6 95 2f 2d    	mov    r8d,0x2d2f95e6
  685bad:	4d 89 f2             	mov    r10,r14
  685bb0:	e9 d4 00 00 00       	jmp    685c89 <__cxa_finalize@plt-0xd2d187>
  685bb5:	49 b8 4f 28 80 97 3e 	movabs r8,0xbd45313e9780284f
  685bbc:	31 45 bd 
  685bbf:	4d 31 c7             	xor    r15,r8
  685bc2:	49 b8 49 bf 20 dc c4 	movabs r8,0xf34652c4dc20bf49
  685bc9:	52 46 f3 
  685bcc:	4d 31 c6             	xor    r14,r8
  685bcf:	41 b8 85 b7 d5 98    	mov    r8d,0x98d5b785
  685bd5:	e9 a9 00 00 00       	jmp    685c83 <__cxa_finalize@plt-0xd2d18d>
  685bda:	49 b8 60 7c 37 4e bc 	movabs r8,0x35e4afbc4e377c60
  685be1:	af e4 35 
  685be4:	4d 31 c7             	xor    r15,r8
  685be7:	49 b8 8f dc 77 a1 42 	movabs r8,0x61473542a177dc8f
  685bee:	35 47 61 
  685bf1:	4d 31 c6             	xor    r14,r8
  685bf4:	41 b8 87 5b 2e ae    	mov    r8d,0xae2e5b87
  685bfa:	e9 84 00 00 00       	jmp    685c83 <__cxa_finalize@plt-0xd2d18d>
  685bff:	49 b8 44 cb 84 b4 c5 	movabs r8,0xa73593c5b484cb44
  685c06:	93 35 a7 
  685c09:	4d 01 c7             	add    r15,r8
  685c0c:	49 b8 ed a8 28 45 57 	movabs r8,0x8502fe574528a8ed
  685c13:	fe 02 85 
  685c16:	4d 11 c6             	adc    r14,r8
  685c19:	41 b8 c4 2f 71 82    	mov    r8d,0x82712fc4
  685c1f:	eb 62                	jmp    685c83 <__cxa_finalize@plt-0xd2d18d>
  685c21:	4d 89 f1             	mov    r9,r14
  685c24:	4d 0f a4 f9 23       	shld   r9,r15,0x23
  685c29:	4d 0f a4 f7 23       	shld   r15,r14,0x23
  685c2e:	41 b8 fa 94 95 74    	mov    r8d,0x749594fa
  685c34:	4d 89 fa             	mov    r10,r15
  685c37:	eb 50                	jmp    685c89 <__cxa_finalize@plt-0xd2d187>
  685c39:	49 b8 ad 6e 4b e3 73 	movabs r8,0xd8c6ce73e34b6ead
  685c40:	ce c6 d8 
  685c43:	4d 01 c7             	add    r15,r8
  685c46:	49 b8 5c 25 ac 88 ec 	movabs r8,0xa0c2e1ec88ac255c
  685c4d:	e1 c2 a0 
  685c50:	4d 11 c6             	adc    r14,r8
  685c53:	41 b8 cc ae bd fa    	mov    r8d,0xfabdaecc
  685c59:	eb 28                	jmp    685c83 <__cxa_finalize@plt-0xd2d18d>
  685c5b:	41 b8 17 4f 29 d4    	mov    r8d,0xd4294f17
  685c61:	eb 26                	jmp    685c89 <__cxa_finalize@plt-0xd2d187>
  685c63:	49 b8 5b ac 2e 65 9a 	movabs r8,0xf664d09a652eac5b
  685c6a:	d0 64 f6 
  685c6d:	4d 01 c7             	add    r15,r8
  685c70:	49 b8 18 41 30 21 5a 	movabs r8,0xe1a35d5a21304118
  685c77:	5d a3 e1 
  685c7a:	4d 11 c6             	adc    r14,r8
  685c7d:	41 b8 86 fc 49 58    	mov    r8d,0x5849fc86
  685c83:	4d 89 fa             	mov    r10,r15
  685c86:	4d 89 f1             	mov    r9,r14
  685c89:	44 31 c2             	xor    edx,r8d
  685c8c:	4d 89 d7             	mov    r15,r10
  685c8f:	4d 89 ce             	mov    r14,r9
  685c92:	e9 21 fe ff ff       	jmp    685ab8 <__cxa_finalize@plt-0xd2d358>
  685c97:	41 b8 b3 54 1f 83    	mov    r8d,0x831f54b3
  685c9d:	eb ea                	jmp    685c89 <__cxa_finalize@plt-0xd2d187>
  685c9f:	41 b8 f2 d8 67 fd    	mov    r8d,0xfd67d8f2
  685ca5:	eb e2                	jmp    685c89 <__cxa_finalize@plt-0xd2d187>
  685ca7:	41 b8 b7 46 82 52    	mov    r8d,0x528246b7
  685cad:	e9 5f 19 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  685cb2:	ba b9 47 9f 0f       	mov    edx,0xf9f47b9
  685cb7:	31 ff                	xor    edi,edi
  685cb9:	45 31 c0             	xor    r8d,r8d
  685cbc:	31 f6                	xor    esi,esi
  685cbe:	81 fa f6 df 4f af    	cmp    edx,0xaf4fdff6
  685cc4:	0f 84 23 01 00 00    	je     685ded <__cxa_finalize@plt-0xd2d023>
  685cca:	81 fa 9e 84 c7 b3    	cmp    edx,0xb3c7849e
  685cd0:	0f 84 a9 00 00 00    	je     685d7f <__cxa_finalize@plt-0xd2d091>
  685cd6:	81 fa b3 a8 13 c0    	cmp    edx,0xc013a8b3
  685cdc:	0f 84 e9 00 00 00    	je     685dcb <__cxa_finalize@plt-0xd2d045>
  685ce2:	81 fa 67 cb 26 d4    	cmp    edx,0xd426cb67
  685ce8:	0f 84 bb 00 00 00    	je     685da9 <__cxa_finalize@plt-0xd2d067>
  685cee:	81 fa b9 47 9f 0f    	cmp    edx,0xf9f47b9
  685cf4:	74 2d                	je     685d23 <__cxa_finalize@plt-0xd2d0ed>
  685cf6:	81 fa d9 d7 16 1c    	cmp    edx,0x1c16d7d9
  685cfc:	74 5c                	je     685d5a <__cxa_finalize@plt-0xd2d0b6>
  685cfe:	81 fa 07 17 bd 69    	cmp    edx,0x69bd1707
  685d04:	74 3c                	je     685d42 <__cxa_finalize@plt-0xd2d0ce>
  685d06:	81 fa 0d a3 56 73    	cmp    edx,0x7356a30d
  685d0c:	0f 84 82 00 00 00    	je     685d94 <__cxa_finalize@plt-0xd2d07c>
  685d12:	81 fa 38 6d 77 23    	cmp    edx,0x23776d38
  685d18:	0f 85 e5 00 00 00    	jne    685e03 <__cxa_finalize@plt-0xd2d00d>
  685d1e:	e9 e8 00 00 00       	jmp    685e0b <__cxa_finalize@plt-0xd2d005>
  685d23:	41 b8 b4 e4 c9 7c    	mov    r8d,0x7cc9e4b4
  685d29:	48 bf 9c d4 36 dc 98 	movabs rdi,0xd549ca98dc36d49c
  685d30:	ca 49 d5 
  685d33:	48 be cf 4d 87 ce b2 	movabs rsi,0x30d1bbb2ce874dcf
  685d3a:	bb d1 30 
  685d3d:	e9 c1 00 00 00       	jmp    685e03 <__cxa_finalize@plt-0xd2d00d>
  685d42:	49 89 f1             	mov    r9,rsi
  685d45:	49 0f a4 f9 14       	shld   r9,rdi,0x14
  685d4a:	48 0f a4 f7 14       	shld   rdi,rsi,0x14
  685d4f:	41 b8 99 93 7a da    	mov    r8d,0xda7a9399
  685d55:	e9 a6 00 00 00       	jmp    685e00 <__cxa_finalize@plt-0xd2d010>
  685d5a:	49 b8 cc 28 7f 3d 8e 	movabs r8,0x2212688e3d7f28cc
  685d61:	68 12 22 
  685d64:	4c 01 c7             	add    rdi,r8
  685d67:	49 b8 a2 97 cc 35 bb 	movabs r8,0xe326bebb35cc97a2
  685d6e:	be 26 e3 
  685d71:	4c 11 c6             	adc    rsi,r8
  685d74:	41 b8 be 1c 30 c8    	mov    r8d,0xc8301cbe
  685d7a:	e9 84 00 00 00       	jmp    685e03 <__cxa_finalize@plt-0xd2d00d>
  685d7f:	49 89 f9             	mov    r9,rdi
  685d82:	49 0f a4 f1 15       	shld   r9,rsi,0x15
  685d87:	48 0f ac f7 2b       	shrd   rdi,rsi,0x2b
  685d8c:	41 b8 2d 2c d4 73    	mov    r8d,0x73d42c2d
  685d92:	eb 6c                	jmp    685e00 <__cxa_finalize@plt-0xd2d010>
  685d94:	49 89 f1             	mov    r9,rsi
  685d97:	49 0f a4 f9 01       	shld   r9,rdi,0x1
  685d9c:	48 0f a4 f7 01       	shld   rdi,rsi,0x1
  685da1:	41 b8 fb 7c 19 dc    	mov    r8d,0xdc197cfb
  685da7:	eb 57                	jmp    685e00 <__cxa_finalize@plt-0xd2d010>
  685da9:	49 b8 97 d6 0c 3e 8b 	movabs r8,0xe2fe7a8b3e0cd697
  685db0:	7a fe e2 
  685db3:	4c 01 c7             	add    rdi,r8
  685db6:	49 b8 9b 98 4c 1f 52 	movabs r8,0xd9bbab521f4c989b
  685dbd:	ab bb d9 
  685dc0:	4c 11 c6             	adc    rsi,r8
  685dc3:	41 b8 5f a6 51 f7    	mov    r8d,0xf751a65f
  685dc9:	eb 38                	jmp    685e03 <__cxa_finalize@plt-0xd2d00d>
  685dcb:	49 b8 06 f8 cb 8e 02 	movabs r8,0x5a22b5028ecbf806
  685dd2:	b5 22 5a 
  685dd5:	4c 01 c7             	add    rdi,r8
  685dd8:	49 b8 a6 c2 23 61 85 	movabs r8,0x998fd2856123c2a6
  685ddf:	d2 8f 99 
  685de2:	4c 11 c6             	adc    rsi,r8
  685de5:	41 b8 6a 7f 05 dc    	mov    r8d,0xdc057f6a
  685deb:	eb 16                	jmp    685e03 <__cxa_finalize@plt-0xd2d00d>
  685ded:	49 89 f9             	mov    r9,rdi
  685df0:	49 0f a4 f1 2a       	shld   r9,rsi,0x2a
  685df5:	48 0f ac f7 16       	shrd   rdi,rsi,0x16
  685dfa:	41 b8 f1 c8 f2 c6    	mov    r8d,0xc6f2c8f1
  685e00:	4c 89 ce             	mov    rsi,r9
  685e03:	44 31 c2             	xor    edx,r8d
  685e06:	e9 b3 fe ff ff       	jmp    685cbe <__cxa_finalize@plt-0xd2d152>
  685e0b:	ba 5b cb f0 09       	mov    edx,0x9f0cb5b
  685e10:	45 31 ff             	xor    r15d,r15d
  685e13:	45 31 c0             	xor    r8d,r8d
  685e16:	45 31 f6             	xor    r14d,r14d
  685e19:	81 fa f4 ce e2 9b    	cmp    edx,0x9be2cef4
  685e1f:	0f 84 b3 00 00 00    	je     685ed8 <__cxa_finalize@plt-0xd2cf38>
  685e25:	81 fa 43 e6 e8 bb    	cmp    edx,0xbbe8e643
  685e2b:	0f 84 ff 00 00 00    	je     685f30 <__cxa_finalize@plt-0xd2cee0>
  685e31:	81 fa 29 53 92 e9    	cmp    edx,0xe9925329
  685e37:	0f 84 df 00 00 00    	je     685f1c <__cxa_finalize@plt-0xd2cef4>
  685e3d:	81 fa 5b cb f0 09    	cmp    edx,0x9f0cb5b
  685e43:	74 2d                	je     685e72 <__cxa_finalize@plt-0xd2cf9e>
  685e45:	81 fa c5 27 a5 1a    	cmp    edx,0x1aa527c5
  685e4b:	74 69                	je     685eb6 <__cxa_finalize@plt-0xd2cf5a>
  685e4d:	81 fa d7 7d 1e 44    	cmp    edx,0x441e7dd7
  685e53:	74 3c                	je     685e91 <__cxa_finalize@plt-0xd2cf7f>
  685e55:	81 fa 23 07 33 55    	cmp    edx,0x55330723
  685e5b:	0f 84 99 00 00 00    	je     685efa <__cxa_finalize@plt-0xd2cf16>
  685e61:	81 fa 39 c8 05 63    	cmp    edx,0x6305c839
  685e67:	0f 85 d9 00 00 00    	jne    685f46 <__cxa_finalize@plt-0xd2ceca>
  685e6d:	e9 dc 00 00 00       	jmp    685f4e <__cxa_finalize@plt-0xd2cec2>
  685e72:	41 b8 9e ec 55 13    	mov    r8d,0x1355ec9e
  685e78:	49 bf a8 07 32 2b 8e 	movabs r15,0x93a4868e2b3207a8
  685e7f:	86 a4 93 
  685e82:	49 be 4c 4e ae e7 95 	movabs r14,0x156f1895e7ae4e4c
  685e89:	18 6f 15 
  685e8c:	e9 b5 00 00 00       	jmp    685f46 <__cxa_finalize@plt-0xd2ceca>
  685e91:	49 b8 01 1d 8d 4e 71 	movabs r8,0xd9109a714e8d1d01
  685e98:	9a 10 d9 
  685e9b:	4d 01 c7             	add    r15,r8
  685e9e:	49 b8 3f d4 ce 66 67 	movabs r8,0x78236e6766ced43f
  685ea5:	6e 23 78 
  685ea8:	4d 11 c6             	adc    r14,r8
  685eab:	41 b8 fe 2e 8c ad    	mov    r8d,0xad8c2efe
  685eb1:	e9 90 00 00 00       	jmp    685f46 <__cxa_finalize@plt-0xd2ceca>
  685eb6:	49 b8 1f 47 b1 5a c1 	movabs r8,0xd1a629c15ab1471f
  685ebd:	29 a6 d1 
  685ec0:	4d 01 c7             	add    r15,r8
  685ec3:	49 b8 2b 1b 67 fc ce 	movabs r8,0x662d0ecefc671b2b
  685eca:	0e 2d 66 
  685ecd:	4d 11 c6             	adc    r14,r8
  685ed0:	41 b8 e6 20 96 4f    	mov    r8d,0x4f9620e6
  685ed6:	eb 6e                	jmp    685f46 <__cxa_finalize@plt-0xd2ceca>
  685ed8:	49 b8 46 4b 2a e6 b3 	movabs r8,0x79373db3e62a4b46
  685edf:	3d 37 79 
  685ee2:	4d 01 c7             	add    r15,r8
  685ee5:	49 b8 c9 fc e5 3f bf 	movabs r8,0x172887bf3fe5fcc9
  685eec:	87 28 17 
  685eef:	4d 11 c6             	adc    r14,r8
  685ef2:	41 b8 23 b3 fc df    	mov    r8d,0xdffcb323
  685ef8:	eb 4c                	jmp    685f46 <__cxa_finalize@plt-0xd2ceca>
  685efa:	49 b8 ca 47 d2 c9 20 	movabs r8,0xf6e0ab20c9d247ca
  685f01:	ab e0 f6 
  685f04:	4d 01 c7             	add    r15,r8
  685f07:	49 b8 1d 49 9d 2f 03 	movabs r8,0xb3d6ba032f9d491d
  685f0e:	ba d6 b3 
  685f11:	4d 11 c6             	adc    r14,r8
  685f14:	41 b8 60 e1 db ee    	mov    r8d,0xeedbe160
  685f1a:	eb 2a                	jmp    685f46 <__cxa_finalize@plt-0xd2ceca>
  685f1c:	4d 89 f9             	mov    r9,r15
  685f1f:	49 0f c9             	bswap  r9
  685f22:	49 0f ce             	bswap  r14
  685f25:	41 b8 10 9b 97 8a    	mov    r8d,0x8a979b10
  685f2b:	4d 89 f7             	mov    r15,r14
  685f2e:	eb 13                	jmp    685f43 <__cxa_finalize@plt-0xd2cecd>
  685f30:	4d 89 f1             	mov    r9,r14
  685f33:	4d 0f a4 f9 0f       	shld   r9,r15,0xf
  685f38:	4d 0f a4 f7 0f       	shld   r15,r14,0xf
  685f3d:	41 b8 b7 28 0a 20    	mov    r8d,0x200a28b7
  685f43:	4d 89 ce             	mov    r14,r9
  685f46:	44 31 c2             	xor    edx,r8d
  685f49:	e9 cb fe ff ff       	jmp    685e19 <__cxa_finalize@plt-0xd2cff7>
  685f4e:	41 b8 df 78 2b 68    	mov    r8d,0x682b78df
  685f54:	e9 b8 16 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  685f59:	ba 72 2b a6 2d       	mov    edx,0x2da62b72
  685f5e:	31 ff                	xor    edi,edi
  685f60:	45 31 c0             	xor    r8d,r8d
  685f63:	31 f6                	xor    esi,esi
  685f65:	81 fa a8 68 7b cf    	cmp    edx,0xcf7b68a8
  685f6b:	0f 84 4c 01 00 00    	je     6860bd <__cxa_finalize@plt-0xd2cd53>
  685f71:	81 fa d1 80 39 0f    	cmp    edx,0xf3980d1
  685f77:	0f 84 1e 01 00 00    	je     68609b <__cxa_finalize@plt-0xd2cd75>
  685f7d:	81 fa 50 40 8a 16    	cmp    edx,0x168a4050
  685f83:	74 35                	je     685fba <__cxa_finalize@plt-0xd2ce56>
  685f85:	81 fa 72 2b a6 2d    	cmp    edx,0x2da62b72
  685f8b:	0f 84 cc 00 00 00    	je     68605d <__cxa_finalize@plt-0xd2cdb3>
  685f91:	81 fa d9 6c bd 5f    	cmp    edx,0x5fbd6cd9
  685f97:	0f 84 9b 00 00 00    	je     686038 <__cxa_finalize@plt-0xd2cdd8>
  685f9d:	81 fa d5 a0 42 62    	cmp    edx,0x6242a0d5
  685fa3:	0f 84 d0 00 00 00    	je     686079 <__cxa_finalize@plt-0xd2cd97>
  685fa9:	81 fa 49 ab d6 85    	cmp    edx,0x85d6ab49
  685faf:	0f 85 28 01 00 00    	jne    6860dd <__cxa_finalize@plt-0xd2cd33>
  685fb5:	e9 2b 01 00 00       	jmp    6860e5 <__cxa_finalize@plt-0xd2cd2b>
  685fba:	48 0f cf             	bswap  rdi
  685fbd:	49 89 f8             	mov    r8,rdi
  685fc0:	49 c1 e8 04          	shr    r8,0x4
  685fc4:	4d 21 e0             	and    r8,r12
  685fc7:	4c 21 e7             	and    rdi,r12
  685fca:	48 c1 e7 04          	shl    rdi,0x4
  685fce:	4c 09 c7             	or     rdi,r8
  685fd1:	49 89 f8             	mov    r8,rdi
  685fd4:	4d 21 e8             	and    r8,r13
  685fd7:	48 c1 ef 02          	shr    rdi,0x2
  685fdb:	4c 21 ef             	and    rdi,r13
  685fde:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  685fe2:	49 89 f8             	mov    r8,rdi
  685fe5:	49 21 e8             	and    r8,rbp
  685fe8:	48 d1 ef             	shr    rdi,1
  685feb:	48 21 ef             	and    rdi,rbp
  685fee:	4e 8d 0c 47          	lea    r9,[rdi+r8*2]
  685ff2:	48 0f ce             	bswap  rsi
  685ff5:	48 89 f7             	mov    rdi,rsi
  685ff8:	48 c1 ef 04          	shr    rdi,0x4
  685ffc:	4c 21 e7             	and    rdi,r12
  685fff:	4c 21 e6             	and    rsi,r12
  686002:	48 c1 e6 04          	shl    rsi,0x4
  686006:	48 09 fe             	or     rsi,rdi
  686009:	48 89 f7             	mov    rdi,rsi
  68600c:	4c 21 ef             	and    rdi,r13
  68600f:	48 c1 ee 02          	shr    rsi,0x2
  686013:	4c 21 ee             	and    rsi,r13
  686016:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  68601a:	48 89 f7             	mov    rdi,rsi
  68601d:	48 21 ef             	and    rdi,rbp
  686020:	48 d1 ee             	shr    rsi,1
  686023:	48 21 ee             	and    rsi,rbp
  686026:	48 8d 3c 7e          	lea    rdi,[rsi+rdi*2]
  68602a:	41 b8 89 2c 37 49    	mov    r8d,0x49372c89
  686030:	4c 89 ce             	mov    rsi,r9
  686033:	e9 a5 00 00 00       	jmp    6860dd <__cxa_finalize@plt-0xd2cd33>
  686038:	49 b8 76 7b db 77 86 	movabs r8,0xf6b27c8677db7b76
  68603f:	7c b2 f6 
  686042:	4c 31 c7             	xor    rdi,r8
  686045:	49 b8 d3 6e fc 0f 69 	movabs r8,0x1426e8690ffc6ed3
  68604c:	e8 26 14 
  68604f:	4c 31 c6             	xor    rsi,r8
  686052:	41 b8 71 04 c6 90    	mov    r8d,0x90c60471
  686058:	e9 80 00 00 00       	jmp    6860dd <__cxa_finalize@plt-0xd2cd33>
  68605d:	41 b8 a3 ab 9f 22    	mov    r8d,0x229faba3
  686063:	48 bf 5e 83 49 a1 96 	movabs rdi,0x9f0ea196a149835e
  68606a:	a1 0e 9f 
  68606d:	48 be f6 5f 18 8b 3e 	movabs rsi,0xe722c13e8b185ff6
  686074:	c1 22 e7 
  686077:	eb 64                	jmp    6860dd <__cxa_finalize@plt-0xd2cd33>
  686079:	49 b8 2f 1c f6 30 a3 	movabs r8,0x76c86a330f61c2f
  686080:	86 6c 07 
  686083:	4c 01 c7             	add    rdi,r8
  686086:	49 b8 7e e9 11 08 b1 	movabs r8,0x295365b10811e97e
  68608d:	65 53 29 
  686090:	4c 11 c6             	adc    rsi,r8
  686093:	41 b8 85 e0 c8 74    	mov    r8d,0x74c8e085
  686099:	eb 42                	jmp    6860dd <__cxa_finalize@plt-0xd2cd33>
  68609b:	49 b8 11 61 44 81 99 	movabs r8,0x359b239981446111
  6860a2:	23 9b 35 
  6860a5:	4c 31 c7             	xor    rdi,r8
  6860a8:	49 b8 29 b6 d9 ac 8b 	movabs r8,0xf350bd8bacd9b629
  6860af:	bd 50 f3 
  6860b2:	4c 31 c6             	xor    rsi,r8
  6860b5:	41 b8 04 20 7b 6d    	mov    r8d,0x6d7b2004
  6860bb:	eb 20                	jmp    6860dd <__cxa_finalize@plt-0xd2cd33>
  6860bd:	49 b8 3d 12 09 fe ab 	movabs r8,0x4e2c93abfe09123d
  6860c4:	93 2c 4e 
  6860c7:	4c 31 c7             	xor    rdi,r8
  6860ca:	49 b8 9e 2e ec 42 e3 	movabs r8,0x6a5928e342ec2e9e
  6860d1:	28 59 6a 
  6860d4:	4c 31 c6             	xor    rsi,r8
  6860d7:	41 b8 e1 c3 ad 4a    	mov    r8d,0x4aadc3e1
  6860dd:	44 31 c2             	xor    edx,r8d
  6860e0:	e9 80 fe ff ff       	jmp    685f65 <__cxa_finalize@plt-0xd2ceab>
  6860e5:	ba 54 a2 db da       	mov    edx,0xdadba254
  6860ea:	45 31 ff             	xor    r15d,r15d
  6860ed:	45 31 c0             	xor    r8d,r8d
  6860f0:	45 31 f6             	xor    r14d,r14d
  6860f3:	4d 89 f9             	mov    r9,r15
  6860f6:	81 fa 7a 9a 27 97    	cmp    edx,0x97279a7a
  6860fc:	0f 84 59 01 00 00    	je     68625b <__cxa_finalize@plt-0xd2cbb5>
  686102:	49 0f c9             	bswap  r9
  686105:	4d 89 f2             	mov    r10,r14
  686108:	49 0f ca             	bswap  r10
  68610b:	81 fa 07 96 76 9d    	cmp    edx,0x9d769607
  686111:	0f 84 cb 01 00 00    	je     6862e2 <__cxa_finalize@plt-0xd2cb2e>
  686117:	81 fa b2 19 98 b0    	cmp    edx,0xb09819b2
  68611d:	74 7d                	je     68619c <__cxa_finalize@plt-0xd2cc74>
  68611f:	81 fa 54 2e 65 ba    	cmp    edx,0xba652e54
  686125:	0f 84 96 00 00 00    	je     6861c1 <__cxa_finalize@plt-0xd2cc4f>
  68612b:	81 fa 54 a2 db da    	cmp    edx,0xdadba254
  686131:	0f 84 39 01 00 00    	je     686270 <__cxa_finalize@plt-0xd2cba0>
  686137:	81 fa 89 3a 0c e7    	cmp    edx,0xe70c3a89
  68613d:	0f 84 a3 00 00 00    	je     6861e6 <__cxa_finalize@plt-0xd2cc2a>
  686143:	81 fa 45 b1 6d 0b    	cmp    edx,0xb6db145
  686149:	0f 84 f7 00 00 00    	je     686246 <__cxa_finalize@plt-0xd2cbca>
  68614f:	81 fa c3 06 cf 0c    	cmp    edx,0xccf06c3
  686155:	0f 84 e0 00 00 00    	je     68623b <__cxa_finalize@plt-0xd2cbd5>
  68615b:	81 fa 4b 3a 5a 12    	cmp    edx,0x125a3a4b
  686161:	0f 84 25 01 00 00    	je     68628c <__cxa_finalize@plt-0xd2cb84>
  686167:	81 fa 3c 6d c8 3e    	cmp    edx,0x3ec86d3c
  68616d:	0f 84 3b 01 00 00    	je     6862ae <__cxa_finalize@plt-0xd2cb62>
  686173:	81 fa 9f 8b 41 4d    	cmp    edx,0x4d418b9f
  686179:	0f 84 8c 00 00 00    	je     68620b <__cxa_finalize@plt-0xd2cc05>
  68617f:	81 fa 40 68 10 72    	cmp    edx,0x72106840
  686185:	0f 84 a5 00 00 00    	je     686230 <__cxa_finalize@plt-0xd2cbe0>
  68618b:	81 fa 9a 77 d1 33    	cmp    edx,0x33d1779a
  686191:	0f 85 37 01 00 00    	jne    6862ce <__cxa_finalize@plt-0xd2cb42>
  686197:	e9 4e 01 00 00       	jmp    6862ea <__cxa_finalize@plt-0xd2cb26>
  68619c:	49 b8 f0 36 9e 21 62 	movabs r8,0xb201862219e36f0
  6861a3:	18 20 0b 
  6861a6:	4d 31 c7             	xor    r15,r8
  6861a9:	49 b8 f2 1f 4e d5 58 	movabs r8,0xdc672658d54e1ff2
  6861b0:	26 67 dc 
  6861b3:	4d 31 c6             	xor    r14,r8
  6861b6:	41 b8 71 1f 57 bc    	mov    r8d,0xbc571f71
  6861bc:	e9 0d 01 00 00       	jmp    6862ce <__cxa_finalize@plt-0xd2cb42>
  6861c1:	49 b8 ae f7 ea f5 bd 	movabs r8,0x8c5d49bdf5eaf7ae
  6861c8:	49 5d 8c 
  6861cb:	4d 31 c7             	xor    r15,r8
  6861ce:	49 b8 ef e2 2e 27 3b 	movabs r8,0x8e91ff3b272ee2ef
  6861d5:	ff 91 8e 
  6861d8:	4d 31 c6             	xor    r14,r8
  6861db:	41 b8 68 43 ad 84    	mov    r8d,0x84ad4368
  6861e1:	e9 e8 00 00 00       	jmp    6862ce <__cxa_finalize@plt-0xd2cb42>
  6861e6:	49 b8 49 d6 34 11 50 	movabs r8,0x44b4b5501134d649
  6861ed:	b5 b4 44 
  6861f0:	4d 01 c7             	add    r15,r8
  6861f3:	49 b8 b0 87 cf 0a 4c 	movabs r8,0xebc24c4c0acf87b0
  6861fa:	4c c2 eb 
  6861fd:	4d 11 c6             	adc    r14,r8
  686200:	41 b8 c9 52 1c 95    	mov    r8d,0x951c52c9
  686206:	e9 c3 00 00 00       	jmp    6862ce <__cxa_finalize@plt-0xd2cb42>
  68620b:	49 b8 18 4c 07 29 7b 	movabs r8,0xaf74a87b29074c18
  686212:	a8 74 af 
  686215:	4d 01 c7             	add    r15,r8
  686218:	49 b8 a0 ec c3 43 29 	movabs r8,0x3cba6c2943c3eca0
  68621f:	6c ba 3c 
  686222:	4d 11 c6             	adc    r14,r8
  686225:	41 b8 d4 b1 1b 5f    	mov    r8d,0x5f1bb1d4
  68622b:	e9 9e 00 00 00       	jmp    6862ce <__cxa_finalize@plt-0xd2cb42>
  686230:	41 b8 3a f2 37 e5    	mov    r8d,0xe537f23a
  686236:	e9 99 00 00 00       	jmp    6862d4 <__cxa_finalize@plt-0xd2cb3c>
  68623b:	41 b8 4a 3c c3 eb    	mov    r8d,0xebc33c4a
  686241:	e9 8e 00 00 00       	jmp    6862d4 <__cxa_finalize@plt-0xd2cb3c>
  686246:	4d 89 f9             	mov    r9,r15
  686249:	4d 0f a4 f1 37       	shld   r9,r14,0x37
  68624e:	4d 0f a4 fe 37       	shld   r14,r15,0x37
  686253:	41 b8 11 9f 08 b1    	mov    r8d,0xb1089f11
  686259:	eb 10                	jmp    68626b <__cxa_finalize@plt-0xd2cba5>
  68625b:	4d 0f a4 f1 1f       	shld   r9,r14,0x1f
  686260:	4d 0f a4 fe 1f       	shld   r14,r15,0x1f
  686265:	41 b8 7d 0c 51 0a    	mov    r8d,0xa510c7d
  68626b:	4d 89 f2             	mov    r10,r14
  68626e:	eb 64                	jmp    6862d4 <__cxa_finalize@plt-0xd2cb3c>
  686270:	41 b8 cb 29 9a 97    	mov    r8d,0x979a29cb
  686276:	49 ba 60 c7 f9 29 0a 	movabs r10,0x7da1090a29f9c760
  68627d:	09 a1 7d 
  686280:	49 b9 45 de 40 84 7b 	movabs r9,0x3f9a597b8440de45
  686287:	59 9a 3f 
  68628a:	eb 48                	jmp    6862d4 <__cxa_finalize@plt-0xd2cb3c>
  68628c:	49 b8 4b ab f0 29 ae 	movabs r8,0x96b8d2ae29f0ab4b
  686293:	d2 b8 96 
  686296:	4d 01 c7             	add    r15,r8
  686299:	49 b8 8d 33 2c 68 c8 	movabs r8,0x21e252c8682c338d
  6862a0:	52 e2 21 
  6862a3:	4d 11 c6             	adc    r14,r8
  6862a6:	41 b8 0e 8b 37 19    	mov    r8d,0x19378b0e
  6862ac:	eb 20                	jmp    6862ce <__cxa_finalize@plt-0xd2cb42>
  6862ae:	49 b8 73 7c d8 a6 94 	movabs r8,0x8e9b7994a6d87c73
  6862b5:	79 9b 8e 
  6862b8:	4d 01 c7             	add    r15,r8
  6862bb:	49 b8 b8 59 4d 53 be 	movabs r8,0x7af007be534d59b8
  6862c2:	07 f0 7a 
  6862c5:	4d 11 c6             	adc    r14,r8
  6862c8:	41 b8 8e 74 50 8e    	mov    r8d,0x8e50748e
  6862ce:	4d 89 fa             	mov    r10,r15
  6862d1:	4d 89 f1             	mov    r9,r14
  6862d4:	44 31 c2             	xor    edx,r8d
  6862d7:	4d 89 d7             	mov    r15,r10
  6862da:	4d 89 ce             	mov    r14,r9
  6862dd:	e9 11 fe ff ff       	jmp    6860f3 <__cxa_finalize@plt-0xd2cd1d>
  6862e2:	41 b8 9d e1 a7 ae    	mov    r8d,0xaea7e19d
  6862e8:	eb ea                	jmp    6862d4 <__cxa_finalize@plt-0xd2cb3c>
  6862ea:	41 b8 24 12 e5 80    	mov    r8d,0x80e51224
  6862f0:	e9 1c 13 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  6862f5:	ba 76 53 85 d8       	mov    edx,0xd8855376
  6862fa:	31 ff                	xor    edi,edi
  6862fc:	45 31 c9             	xor    r9d,r9d
  6862ff:	31 f6                	xor    esi,esi
  686301:	81 fa 34 2d 0b ae    	cmp    edx,0xae0b2d34
  686307:	0f 84 d3 03 00 00    	je     6866e0 <__cxa_finalize@plt-0xd2c730>
  68630d:	81 fa 8d 96 85 c6    	cmp    edx,0xc685968d
  686313:	0f 84 ad 00 00 00    	je     6863c6 <__cxa_finalize@plt-0xd2ca4a>
  686319:	81 fa 10 a9 74 cc    	cmp    edx,0xcc74a910
  68631f:	0f 84 82 02 00 00    	je     6865a7 <__cxa_finalize@plt-0xd2c869>
  686325:	81 fa 70 42 03 d6    	cmp    edx,0xd6034270
  68632b:	0f 84 97 03 00 00    	je     6866c8 <__cxa_finalize@plt-0xd2c748>
  686331:	81 fa 76 53 85 d8    	cmp    edx,0xd8855376
  686337:	0f 84 04 01 00 00    	je     686441 <__cxa_finalize@plt-0xd2c9cf>
  68633d:	49 89 f8             	mov    r8,rdi
  686340:	49 0f c8             	bswap  r8
  686343:	49 89 f2             	mov    r10,rsi
  686346:	49 0f ca             	bswap  r10
  686349:	81 fa 9b c1 b6 dc    	cmp    edx,0xdcb6c19b
  68634f:	0f 84 0b 01 00 00    	je     686460 <__cxa_finalize@plt-0xd2c9b0>
  686355:	81 fa d8 29 5d e4    	cmp    edx,0xe45d29d8
  68635b:	0f 84 71 02 00 00    	je     6865d2 <__cxa_finalize@plt-0xd2c83e>
  686361:	81 fa c7 cf e0 e4    	cmp    edx,0xe4e0cfc7
  686367:	0f 84 2e 01 00 00    	je     68649b <__cxa_finalize@plt-0xd2c975>
  68636d:	81 fa 33 13 b1 e8    	cmp    edx,0xe8b11333
  686373:	0f 84 a8 01 00 00    	je     686521 <__cxa_finalize@plt-0xd2c8ef>
  686379:	81 fa 74 22 48 f9    	cmp    edx,0xf9482274
  68637f:	0f 84 21 01 00 00    	je     6864a6 <__cxa_finalize@plt-0xd2c96a>
  686385:	81 fa a4 f2 54 fd    	cmp    edx,0xfd54f2a4
  68638b:	0f 84 bc 02 00 00    	je     68664d <__cxa_finalize@plt-0xd2c7c3>
  686391:	81 fa 77 a6 12 fe    	cmp    edx,0xfe12a677
  686397:	0f 84 ce 00 00 00    	je     68646b <__cxa_finalize@plt-0xd2c9a5>
  68639d:	81 fa a1 3d 17 20    	cmp    edx,0x20173da1
  6863a3:	0f 84 83 01 00 00    	je     68652c <__cxa_finalize@plt-0xd2c8e4>
  6863a9:	81 fa 00 f2 a7 63    	cmp    edx,0x63a7f200
  6863af:	0f 84 db 00 00 00    	je     686490 <__cxa_finalize@plt-0xd2c980>
  6863b5:	81 fa c3 c5 c0 81    	cmp    edx,0x81c0c5c3
  6863bb:	0f 85 06 02 00 00    	jne    6865c7 <__cxa_finalize@plt-0xd2c849>
  6863c1:	e9 9e 03 00 00       	jmp    686764 <__cxa_finalize@plt-0xd2c6ac>
  6863c6:	48 0f cf             	bswap  rdi
  6863c9:	49 89 f8             	mov    r8,rdi
  6863cc:	49 c1 e8 04          	shr    r8,0x4
  6863d0:	4d 21 e0             	and    r8,r12
  6863d3:	4c 21 e7             	and    rdi,r12
  6863d6:	48 c1 e7 04          	shl    rdi,0x4
  6863da:	4c 09 c7             	or     rdi,r8
  6863dd:	49 89 f8             	mov    r8,rdi
  6863e0:	4d 21 e8             	and    r8,r13
  6863e3:	48 c1 ef 02          	shr    rdi,0x2
  6863e7:	4c 21 ef             	and    rdi,r13
  6863ea:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  6863ee:	49 89 f8             	mov    r8,rdi
  6863f1:	49 21 e8             	and    r8,rbp
  6863f4:	48 d1 ef             	shr    rdi,1
  6863f7:	48 21 ef             	and    rdi,rbp
  6863fa:	4e 8d 04 47          	lea    r8,[rdi+r8*2]
  6863fe:	48 0f ce             	bswap  rsi
  686401:	48 89 f7             	mov    rdi,rsi
  686404:	48 c1 ef 04          	shr    rdi,0x4
  686408:	4c 21 e7             	and    rdi,r12
  68640b:	4c 21 e6             	and    rsi,r12
  68640e:	48 c1 e6 04          	shl    rsi,0x4
  686412:	48 09 fe             	or     rsi,rdi
  686415:	48 89 f7             	mov    rdi,rsi
  686418:	4c 21 ef             	and    rdi,r13
  68641b:	48 c1 ee 02          	shr    rsi,0x2
  68641f:	4c 21 ee             	and    rsi,r13
  686422:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  686426:	48 89 f7             	mov    rdi,rsi
  686429:	48 21 ef             	and    rdi,rbp
  68642c:	48 d1 ee             	shr    rsi,1
  68642f:	48 21 ee             	and    rsi,rbp
  686432:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  686436:	41 b9 be 85 34 2e    	mov    r9d,0x2e3485be
  68643c:	e9 15 03 00 00       	jmp    686756 <__cxa_finalize@plt-0xd2c6ba>
  686441:	41 b9 01 f5 97 26    	mov    r9d,0x2697f501
  686447:	49 ba 6f 44 8d 27 59 	movabs r10,0xb639159278d446f
  68644e:	91 63 0b 
  686451:	49 b8 c2 62 dc 5d 06 	movabs r8,0x18e402065ddc62c2
  686458:	02 e4 18 
  68645b:	e9 f6 02 00 00       	jmp    686756 <__cxa_finalize@plt-0xd2c6ba>
  686460:	41 b9 ef e3 fe 25    	mov    r9d,0x25fee3ef
  686466:	e9 eb 02 00 00       	jmp    686756 <__cxa_finalize@plt-0xd2c6ba>
  68646b:	49 b8 94 60 51 3a 24 	movabs r8,0x174bb8243a516094
  686472:	b8 4b 17 
  686475:	4c 31 c7             	xor    rdi,r8
  686478:	49 b8 2a 04 08 6a fd 	movabs r8,0xc5be26fd6a08042a
  68647f:	26 be c5 
  686482:	4c 31 c6             	xor    rsi,r8
  686485:	41 b9 fa 30 97 38    	mov    r9d,0x389730fa
  68648b:	e9 37 01 00 00       	jmp    6865c7 <__cxa_finalize@plt-0xd2c849>
  686490:	41 b9 9b 33 11 bf    	mov    r9d,0xbf11339b
  686496:	e9 bb 02 00 00       	jmp    686756 <__cxa_finalize@plt-0xd2c6ba>
  68649b:	41 b9 f3 e2 eb 4a    	mov    r9d,0x4aebe2f3
  6864a1:	e9 b0 02 00 00       	jmp    686756 <__cxa_finalize@plt-0xd2c6ba>
  6864a6:	48 0f cf             	bswap  rdi
  6864a9:	49 89 f8             	mov    r8,rdi
  6864ac:	49 c1 e8 04          	shr    r8,0x4
  6864b0:	4d 21 e0             	and    r8,r12
  6864b3:	4c 21 e7             	and    rdi,r12
  6864b6:	48 c1 e7 04          	shl    rdi,0x4
  6864ba:	4c 09 c7             	or     rdi,r8
  6864bd:	49 89 f8             	mov    r8,rdi
  6864c0:	4d 21 e8             	and    r8,r13
  6864c3:	48 c1 ef 02          	shr    rdi,0x2
  6864c7:	4c 21 ef             	and    rdi,r13
  6864ca:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  6864ce:	49 89 f8             	mov    r8,rdi
  6864d1:	49 21 e8             	and    r8,rbp
  6864d4:	48 d1 ef             	shr    rdi,1
  6864d7:	48 21 ef             	and    rdi,rbp
  6864da:	4e 8d 04 47          	lea    r8,[rdi+r8*2]
  6864de:	48 0f ce             	bswap  rsi
  6864e1:	48 89 f7             	mov    rdi,rsi
  6864e4:	48 c1 ef 04          	shr    rdi,0x4
  6864e8:	4c 21 e7             	and    rdi,r12
  6864eb:	4c 21 e6             	and    rsi,r12
  6864ee:	48 c1 e6 04          	shl    rsi,0x4
  6864f2:	48 09 fe             	or     rsi,rdi
  6864f5:	48 89 f7             	mov    rdi,rsi
  6864f8:	4c 21 ef             	and    rdi,r13
  6864fb:	48 c1 ee 02          	shr    rsi,0x2
  6864ff:	4c 21 ee             	and    rsi,r13
  686502:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  686506:	48 89 f7             	mov    rdi,rsi
  686509:	48 21 ef             	and    rdi,rbp
  68650c:	48 d1 ee             	shr    rsi,1
  68650f:	48 21 ee             	and    rsi,rbp
  686512:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  686516:	41 b9 04 60 4b 2f    	mov    r9d,0x2f4b6004
  68651c:	e9 35 02 00 00       	jmp    686756 <__cxa_finalize@plt-0xd2c6ba>
  686521:	41 b9 23 ba c5 24    	mov    r9d,0x24c5ba23
  686527:	e9 2a 02 00 00       	jmp    686756 <__cxa_finalize@plt-0xd2c6ba>
  68652c:	48 0f cf             	bswap  rdi
  68652f:	49 89 f8             	mov    r8,rdi
  686532:	49 c1 e8 04          	shr    r8,0x4
  686536:	4d 21 e0             	and    r8,r12
  686539:	4c 21 e7             	and    rdi,r12
  68653c:	48 c1 e7 04          	shl    rdi,0x4
  686540:	4c 09 c7             	or     rdi,r8
  686543:	49 89 f8             	mov    r8,rdi
  686546:	4d 21 e8             	and    r8,r13
  686549:	48 c1 ef 02          	shr    rdi,0x2
  68654d:	4c 21 ef             	and    rdi,r13
  686550:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  686554:	49 89 f8             	mov    r8,rdi
  686557:	49 21 e8             	and    r8,rbp
  68655a:	48 d1 ef             	shr    rdi,1
  68655d:	48 21 ef             	and    rdi,rbp
  686560:	4e 8d 04 47          	lea    r8,[rdi+r8*2]
  686564:	48 0f ce             	bswap  rsi
  686567:	48 89 f7             	mov    rdi,rsi
  68656a:	48 c1 ef 04          	shr    rdi,0x4
  68656e:	4c 21 e7             	and    rdi,r12
  686571:	4c 21 e6             	and    rsi,r12
  686574:	48 c1 e6 04          	shl    rsi,0x4
  686578:	48 09 fe             	or     rsi,rdi
  68657b:	48 89 f7             	mov    rdi,rsi
  68657e:	4c 21 ef             	and    rdi,r13
  686581:	48 c1 ee 02          	shr    rsi,0x2
  686585:	4c 21 ee             	and    rsi,r13
  686588:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  68658c:	48 89 f7             	mov    rdi,rsi
  68658f:	48 21 ef             	and    rdi,rbp
  686592:	48 d1 ee             	shr    rsi,1
  686595:	48 21 ee             	and    rsi,rbp
  686598:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  68659c:	41 b9 66 f2 f7 c4    	mov    r9d,0xc4f7f266
  6865a2:	e9 af 01 00 00       	jmp    686756 <__cxa_finalize@plt-0xd2c6ba>
  6865a7:	49 b8 77 64 97 48 41 	movabs r8,0xc7eb6b4148976477
  6865ae:	6b eb c7 
  6865b1:	4c 01 c7             	add    rdi,r8
  6865b4:	49 b8 e8 99 d4 3a 06 	movabs r8,0xa03d1d063ad499e8
  6865bb:	1d 3d a0 
  6865be:	4c 11 c6             	adc    rsi,r8
  6865c1:	41 b9 c8 80 29 28    	mov    r9d,0x282980c8
  6865c7:	49 89 fa             	mov    r10,rdi
  6865ca:	49 89 f0             	mov    r8,rsi
  6865cd:	e9 84 01 00 00       	jmp    686756 <__cxa_finalize@plt-0xd2c6ba>
  6865d2:	48 0f cf             	bswap  rdi
  6865d5:	49 89 f8             	mov    r8,rdi
  6865d8:	49 c1 e8 04          	shr    r8,0x4
  6865dc:	4d 21 e0             	and    r8,r12
  6865df:	4c 21 e7             	and    rdi,r12
  6865e2:	48 c1 e7 04          	shl    rdi,0x4
  6865e6:	4c 09 c7             	or     rdi,r8
  6865e9:	49 89 f8             	mov    r8,rdi
  6865ec:	4d 21 e8             	and    r8,r13
  6865ef:	48 c1 ef 02          	shr    rdi,0x2
  6865f3:	4c 21 ef             	and    rdi,r13
  6865f6:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  6865fa:	49 89 f8             	mov    r8,rdi
  6865fd:	49 21 e8             	and    r8,rbp
  686600:	48 d1 ef             	shr    rdi,1
  686603:	48 21 ef             	and    rdi,rbp
  686606:	4e 8d 04 47          	lea    r8,[rdi+r8*2]
  68660a:	48 0f ce             	bswap  rsi
  68660d:	48 89 f7             	mov    rdi,rsi
  686610:	48 c1 ef 04          	shr    rdi,0x4
  686614:	4c 21 e7             	and    rdi,r12
  686617:	4c 21 e6             	and    rsi,r12
  68661a:	48 c1 e6 04          	shl    rsi,0x4
  68661e:	48 09 fe             	or     rsi,rdi
  686621:	48 89 f7             	mov    rdi,rsi
  686624:	4c 21 ef             	and    rdi,r13
  686627:	48 c1 ee 02          	shr    rsi,0x2
  68662b:	4c 21 ee             	and    rsi,r13
  68662e:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  686632:	48 89 f7             	mov    rdi,rsi
  686635:	48 21 ef             	and    rdi,rbp
  686638:	48 d1 ee             	shr    rsi,1
  68663b:	48 21 ee             	and    rsi,rbp
  68663e:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  686642:	41 b9 79 14 4a c4    	mov    r9d,0xc44a1479
  686648:	e9 09 01 00 00       	jmp    686756 <__cxa_finalize@plt-0xd2c6ba>
  68664d:	48 0f cf             	bswap  rdi
  686650:	49 89 f8             	mov    r8,rdi
  686653:	49 c1 e8 04          	shr    r8,0x4
  686657:	4d 21 e0             	and    r8,r12
  68665a:	4c 21 e7             	and    rdi,r12
  68665d:	48 c1 e7 04          	shl    rdi,0x4
  686661:	4c 09 c7             	or     rdi,r8
  686664:	49 89 f8             	mov    r8,rdi
  686667:	4d 21 e8             	and    r8,r13
  68666a:	48 c1 ef 02          	shr    rdi,0x2
  68666e:	4c 21 ef             	and    rdi,r13
  686671:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  686675:	49 89 f8             	mov    r8,rdi
  686678:	49 21 e8             	and    r8,rbp
  68667b:	48 d1 ef             	shr    rdi,1
  68667e:	48 21 ef             	and    rdi,rbp
  686681:	4e 8d 04 47          	lea    r8,[rdi+r8*2]
  686685:	48 0f ce             	bswap  rsi
  686688:	48 89 f7             	mov    rdi,rsi
  68668b:	48 c1 ef 04          	shr    rdi,0x4
  68668f:	4c 21 e7             	and    rdi,r12
  686692:	4c 21 e6             	and    rsi,r12
  686695:	48 c1 e6 04          	shl    rsi,0x4
  686699:	48 09 fe             	or     rsi,rdi
  68669c:	48 89 f7             	mov    rdi,rsi
  68669f:	4c 21 ef             	and    rdi,r13
  6866a2:	48 c1 ee 02          	shr    rsi,0x2
  6866a6:	4c 21 ee             	and    rsi,r13
  6866a9:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  6866ad:	48 89 f7             	mov    rdi,rsi
  6866b0:	48 21 ef             	and    rdi,rbp
  6866b3:	48 d1 ee             	shr    rsi,1
  6866b6:	48 21 ee             	and    rsi,rbp
  6866b9:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  6866bd:	41 b9 a4 00 f3 9e    	mov    r9d,0x9ef300a4
  6866c3:	e9 8e 00 00 00       	jmp    686756 <__cxa_finalize@plt-0xd2c6ba>
  6866c8:	49 89 f0             	mov    r8,rsi
  6866cb:	49 0f a4 f8 26       	shld   r8,rdi,0x26
  6866d0:	48 0f a4 f7 26       	shld   rdi,rsi,0x26
  6866d5:	41 b9 b3 87 c3 57    	mov    r9d,0x57c387b3
  6866db:	49 89 fa             	mov    r10,rdi
  6866de:	eb 76                	jmp    686756 <__cxa_finalize@plt-0xd2c6ba>
  6866e0:	48 0f cf             	bswap  rdi
  6866e3:	49 89 f8             	mov    r8,rdi
  6866e6:	49 c1 e8 04          	shr    r8,0x4
  6866ea:	4d 21 e0             	and    r8,r12
  6866ed:	4c 21 e7             	and    rdi,r12
  6866f0:	48 c1 e7 04          	shl    rdi,0x4
  6866f4:	4c 09 c7             	or     rdi,r8
  6866f7:	49 89 f8             	mov    r8,rdi
  6866fa:	4d 21 e8             	and    r8,r13
  6866fd:	48 c1 ef 02          	shr    rdi,0x2
  686701:	4c 21 ef             	and    rdi,r13
  686704:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  686708:	49 89 f8             	mov    r8,rdi
  68670b:	49 21 e8             	and    r8,rbp
  68670e:	48 d1 ef             	shr    rdi,1
  686711:	48 21 ef             	and    rdi,rbp
  686714:	4e 8d 04 47          	lea    r8,[rdi+r8*2]
  686718:	48 0f ce             	bswap  rsi
  68671b:	48 89 f7             	mov    rdi,rsi
  68671e:	48 c1 ef 04          	shr    rdi,0x4
  686722:	4c 21 e7             	and    rdi,r12
  686725:	4c 21 e6             	and    rsi,r12
  686728:	48 c1 e6 04          	shl    rsi,0x4
  68672c:	48 09 fe             	or     rsi,rdi
  68672f:	48 89 f7             	mov    rdi,rsi
  686732:	4c 21 ef             	and    rdi,r13
  686735:	48 c1 ee 02          	shr    rsi,0x2
  686739:	4c 21 ee             	and    rsi,r13
  68673c:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  686740:	48 89 f7             	mov    rdi,rsi
  686743:	48 21 ef             	and    rdi,rbp
  686746:	48 d1 ee             	shr    rsi,1
  686749:	48 21 ee             	and    rsi,rbp
  68674c:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  686750:	41 b9 90 df 5f 53    	mov    r9d,0x535fdf90
  686756:	44 31 ca             	xor    edx,r9d
  686759:	4c 89 d7             	mov    rdi,r10
  68675c:	4c 89 c6             	mov    rsi,r8
  68675f:	e9 9d fb ff ff       	jmp    686301 <__cxa_finalize@plt-0xd2cb0f>
  686764:	ba 09 6b b9 d6       	mov    edx,0xd6b96b09
  686769:	45 31 ff             	xor    r15d,r15d
  68676c:	45 31 c0             	xor    r8d,r8d
  68676f:	45 31 f6             	xor    r14d,r14d
  686772:	4d 89 f9             	mov    r9,r15
  686775:	49 0f c9             	bswap  r9
  686778:	4d 89 f2             	mov    r10,r14
  68677b:	49 0f ca             	bswap  r10
  68677e:	81 fa 5d 66 46 99    	cmp    edx,0x9946665d
  686784:	0f 84 91 00 00 00    	je     68681b <__cxa_finalize@plt-0xd2c5f5>
  68678a:	81 fa 09 6b b9 d6    	cmp    edx,0xd6b96b09
  686790:	0f 84 ad 00 00 00    	je     686843 <__cxa_finalize@plt-0xd2c5cd>
  686796:	81 fa f9 cc 94 00    	cmp    edx,0x94ccf9
  68679c:	0f 84 99 00 00 00    	je     68683b <__cxa_finalize@plt-0xd2c5d5>
  6867a2:	81 fa 60 52 4b 11    	cmp    edx,0x114b5260
  6867a8:	74 2f                	je     6867d9 <__cxa_finalize@plt-0xd2c637>
  6867aa:	81 fa a2 13 f6 1a    	cmp    edx,0x1af613a2
  6867b0:	74 51                	je     686803 <__cxa_finalize@plt-0xd2c60d>
  6867b2:	81 fa d3 24 45 23    	cmp    edx,0x234524d3
  6867b8:	74 34                	je     6867ee <__cxa_finalize@plt-0xd2c622>
  6867ba:	81 fa e8 a3 19 3d    	cmp    edx,0x3d19a3e8
  6867c0:	74 61                	je     686823 <__cxa_finalize@plt-0xd2c5ed>
  6867c2:	81 fa f6 4d 86 5f    	cmp    edx,0x5f864df6
  6867c8:	0f 84 9d 00 00 00    	je     68686b <__cxa_finalize@plt-0xd2c5a5>
  6867ce:	4d 89 fa             	mov    r10,r15
  6867d1:	4d 89 f1             	mov    r9,r14
  6867d4:	e9 84 00 00 00       	jmp    68685d <__cxa_finalize@plt-0xd2c5b3>
  6867d9:	4d 89 f1             	mov    r9,r14
  6867dc:	4d 0f a4 f9 0b       	shld   r9,r15,0xb
  6867e1:	4d 0f a4 f7 0b       	shld   r15,r14,0xb
  6867e6:	41 b8 88 f1 52 2c    	mov    r8d,0x2c52f188
  6867ec:	eb 28                	jmp    686816 <__cxa_finalize@plt-0xd2c5fa>
  6867ee:	4d 89 f9             	mov    r9,r15
  6867f1:	4d 0f a4 f1 12       	shld   r9,r14,0x12
  6867f6:	4d 0f a4 fe 12       	shld   r14,r15,0x12
  6867fb:	41 b8 2a e8 d1 23    	mov    r8d,0x23d1e82a
  686801:	eb 33                	jmp    686836 <__cxa_finalize@plt-0xd2c5da>
  686803:	4d 89 f1             	mov    r9,r14
  686806:	4d 0f a4 f9 30       	shld   r9,r15,0x30
  68680b:	4d 0f a4 f7 30       	shld   r15,r14,0x30
  686810:	41 b8 71 37 b3 39    	mov    r8d,0x39b33771
  686816:	4d 89 fa             	mov    r10,r15
  686819:	eb 42                	jmp    68685d <__cxa_finalize@plt-0xd2c5b3>
  68681b:	41 b8 ff 75 b0 83    	mov    r8d,0x83b075ff
  686821:	eb 3a                	jmp    68685d <__cxa_finalize@plt-0xd2c5b3>
  686823:	4d 89 f9             	mov    r9,r15
  686826:	4d 0f a4 f1 3c       	shld   r9,r14,0x3c
  68682b:	4d 0f a4 fe 3c       	shld   r14,r15,0x3c
  686830:	41 b8 b5 c5 5f a4    	mov    r8d,0xa45fc5b5
  686836:	4d 89 f2             	mov    r10,r14
  686839:	eb 22                	jmp    68685d <__cxa_finalize@plt-0xd2c5b3>
  68683b:	41 b8 0f 81 12 5f    	mov    r8d,0x5f12810f
  686841:	eb 1a                	jmp    68685d <__cxa_finalize@plt-0xd2c5b3>
  686843:	41 b8 69 39 f2 c7    	mov    r8d,0xc7f23969
  686849:	49 ba fe ff ff ff ff 	movabs r10,0x818ffffffffffffe
  686850:	ff 8f 81 
  686853:	49 b9 01 00 00 00 00 	movabs r9,0x7e00000000000001
  68685a:	00 00 7e 
  68685d:	44 31 c2             	xor    edx,r8d
  686860:	4d 89 d7             	mov    r15,r10
  686863:	4d 89 ce             	mov    r14,r9
  686866:	e9 07 ff ff ff       	jmp    686772 <__cxa_finalize@plt-0xd2c69e>
  68686b:	41 b8 e5 21 6e 9c    	mov    r8d,0x9c6e21e5
  686871:	e9 9b 0d 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  686876:	ba be a9 cd 64       	mov    edx,0x64cda9be
  68687b:	31 ff                	xor    edi,edi
  68687d:	45 31 c0             	xor    r8d,r8d
  686880:	31 f6                	xor    esi,esi
  686882:	81 fa bc f1 85 8d    	cmp    edx,0x8d85f1bc
  686888:	0f 84 d7 00 00 00    	je     686965 <__cxa_finalize@plt-0xd2c4ab>
  68688e:	81 fa f3 e3 9b 91    	cmp    edx,0x919be3f3
  686894:	0f 84 a9 00 00 00    	je     686943 <__cxa_finalize@plt-0xd2c4cd>
  68689a:	81 fa d7 c6 bc 97    	cmp    edx,0x97bcc6d7
  6868a0:	74 29                	je     6868cb <__cxa_finalize@plt-0xd2c545>
  6868a2:	81 fa 10 20 a9 d4    	cmp    edx,0xd4a92010
  6868a8:	74 5b                	je     686905 <__cxa_finalize@plt-0xd2c50b>
  6868aa:	81 fa d9 b6 e7 db    	cmp    edx,0xdbe7b6d9
  6868b0:	74 3e                	je     6868f0 <__cxa_finalize@plt-0xd2c520>
  6868b2:	81 fa be a9 cd 64    	cmp    edx,0x64cda9be
  6868b8:	74 6d                	je     686927 <__cxa_finalize@plt-0xd2c4e9>
  6868ba:	81 fa e3 36 8c 8a    	cmp    edx,0x8a8c36e3
  6868c0:	0f 85 b5 00 00 00    	jne    68697b <__cxa_finalize@plt-0xd2c495>
  6868c6:	e9 b8 00 00 00       	jmp    686983 <__cxa_finalize@plt-0xd2c48d>
  6868cb:	49 b8 3b c9 d0 c8 65 	movabs r8,0x64665565c8d0c93b
  6868d2:	55 66 64 
  6868d5:	4c 01 c7             	add    rdi,r8
  6868d8:	49 b8 a4 54 40 82 b1 	movabs r8,0xf82f16b1824054a4
  6868df:	16 2f f8 
  6868e2:	4c 11 c6             	adc    rsi,r8
  6868e5:	41 b8 0e 70 5b 4c    	mov    r8d,0x4c5b700e
  6868eb:	e9 8b 00 00 00       	jmp    68697b <__cxa_finalize@plt-0xd2c495>
  6868f0:	49 89 f1             	mov    r9,rsi
  6868f3:	49 0f a4 f9 2a       	shld   r9,rdi,0x2a
  6868f8:	48 0f a4 f7 2a       	shld   rdi,rsi,0x2a
  6868fd:	41 b8 65 47 62 56    	mov    r8d,0x56624765
  686903:	eb 73                	jmp    686978 <__cxa_finalize@plt-0xd2c498>
  686905:	49 b8 28 32 9b a0 4a 	movabs r8,0x343ac74aa09b3228
  68690c:	c7 3a 34 
  68690f:	4c 01 c7             	add    rdi,r8
  686912:	49 b8 a9 9b 55 c0 20 	movabs r8,0x29b9fb20c0559ba9
  686919:	fb b9 29 
  68691c:	4c 11 c6             	adc    rsi,r8
  68691f:	41 b8 f3 16 25 5e    	mov    r8d,0x5e2516f3
  686925:	eb 54                	jmp    68697b <__cxa_finalize@plt-0xd2c495>
  686927:	41 b8 4d 4a 56 f5    	mov    r8d,0xf5564a4d
  68692d:	48 bf 39 e3 ae 84 c8 	movabs rdi,0xbb5659c884aee339
  686934:	59 56 bb 
  686937:	48 be b6 c3 fd 55 00 	movabs rsi,0xcb28fa0055fdc3b6
  68693e:	fa 28 cb 
  686941:	eb 38                	jmp    68697b <__cxa_finalize@plt-0xd2c495>
  686943:	49 b8 39 1c d5 31 90 	movabs r8,0x8ccf5a9031d51c39
  68694a:	5a cf 8c 
  68694d:	4c 01 c7             	add    rdi,r8
  686950:	49 b8 2a 86 b3 df da 	movabs r8,0xe82702dadfb3862a
  686957:	02 27 e8 
  68695a:	4c 11 c6             	adc    rsi,r8
  68695d:	41 b8 24 25 27 06    	mov    r8d,0x6272524
  686963:	eb 16                	jmp    68697b <__cxa_finalize@plt-0xd2c495>
  686965:	49 89 f1             	mov    r9,rsi
  686968:	49 0f a4 f9 15       	shld   r9,rdi,0x15
  68696d:	48 0f a4 f7 15       	shld   rdi,rsi,0x15
  686972:	41 b8 ac d1 2c 59    	mov    r8d,0x592cd1ac
  686978:	4c 89 ce             	mov    rsi,r9
  68697b:	44 31 c2             	xor    edx,r8d
  68697e:	e9 ff fe ff ff       	jmp    686882 <__cxa_finalize@plt-0xd2c58e>
  686983:	ba 76 7b 22 02       	mov    edx,0x2227b76
  686988:	45 31 ff             	xor    r15d,r15d
  68698b:	45 31 d2             	xor    r10d,r10d
  68698e:	45 31 f6             	xor    r14d,r14d
  686991:	81 fa bd c0 87 9b    	cmp    edx,0x9b87c0bd
  686997:	0f 84 97 00 00 00    	je     686a34 <__cxa_finalize@plt-0xd2c3dc>
  68699d:	81 fa 88 d6 b6 9f    	cmp    edx,0x9fb6d688
  6869a3:	74 69                	je     686a0e <__cxa_finalize@plt-0xd2c402>
  6869a5:	4d 89 f8             	mov    r8,r15
  6869a8:	49 0f c8             	bswap  r8
  6869ab:	4d 89 f1             	mov    r9,r14
  6869ae:	49 0f c9             	bswap  r9
  6869b1:	81 fa b3 47 8e ca    	cmp    edx,0xca8e47b3
  6869b7:	74 70                	je     686a29 <__cxa_finalize@plt-0xd2c3e7>
  6869b9:	81 fa 7c be b6 e6    	cmp    edx,0xe6b6be7c
  6869bf:	0f 84 fc 00 00 00    	je     686ac1 <__cxa_finalize@plt-0xd2c34f>
  6869c5:	81 fa 76 7b 22 02    	cmp    edx,0x2227b76
  6869cb:	0f 84 c7 01 00 00    	je     686b98 <__cxa_finalize@plt-0xd2c278>
  6869d1:	81 fa e3 bd f6 30    	cmp    edx,0x30f6bde3
  6869d7:	0f 84 7b 01 00 00    	je     686b58 <__cxa_finalize@plt-0xd2c2b8>
  6869dd:	81 fa 2b 4e 9c 41    	cmp    edx,0x419c4e2b
  6869e3:	0f 84 97 01 00 00    	je     686b80 <__cxa_finalize@plt-0xd2c290>
  6869e9:	81 fa 4c 7f ba 69    	cmp    edx,0x69ba7f4c
  6869ef:	74 5b                	je     686a4c <__cxa_finalize@plt-0xd2c3c4>
  6869f1:	81 fa d4 7c dc 73    	cmp    edx,0x73dc7cd4
  6869f7:	0f 84 e9 00 00 00    	je     686ae6 <__cxa_finalize@plt-0xd2c32a>
  6869fd:	81 fa cc 0a b5 98    	cmp    edx,0x98b50acc
  686a03:	0f 85 6f 01 00 00    	jne    686b78 <__cxa_finalize@plt-0xd2c298>
  686a09:	e9 b2 01 00 00       	jmp    686bc0 <__cxa_finalize@plt-0xd2c250>
  686a0e:	4d 89 f0             	mov    r8,r14
  686a11:	4d 0f a4 f8 3c       	shld   r8,r15,0x3c
  686a16:	4d 0f a4 f7 3c       	shld   r15,r14,0x3c
  686a1b:	41 ba f4 68 00 79    	mov    r10d,0x790068f4
  686a21:	4d 89 f9             	mov    r9,r15
  686a24:	e9 89 01 00 00       	jmp    686bb2 <__cxa_finalize@plt-0xd2c25e>
  686a29:	41 ba 67 3b 52 b9    	mov    r10d,0xb9523b67
  686a2f:	e9 7e 01 00 00       	jmp    686bb2 <__cxa_finalize@plt-0xd2c25e>
  686a34:	4d 89 f8             	mov    r8,r15
  686a37:	4d 0f a4 f0 20       	shld   r8,r14,0x20
  686a3c:	4d 0f a4 fe 20       	shld   r14,r15,0x20
  686a41:	41 ba 96 8e 1b da    	mov    r10d,0xda1b8e96
  686a47:	e9 47 01 00 00       	jmp    686b93 <__cxa_finalize@plt-0xd2c27d>
  686a4c:	4d 89 c2             	mov    r10,r8
  686a4f:	49 c1 ea 04          	shr    r10,0x4
  686a53:	4d 21 e2             	and    r10,r12
  686a56:	4d 21 e0             	and    r8,r12
  686a59:	49 c1 e0 04          	shl    r8,0x4
  686a5d:	4d 09 d0             	or     r8,r10
  686a60:	4d 89 c2             	mov    r10,r8
  686a63:	4d 21 ea             	and    r10,r13
  686a66:	49 c1 e8 02          	shr    r8,0x2
  686a6a:	4d 21 e8             	and    r8,r13
  686a6d:	4f 8d 04 90          	lea    r8,[r8+r10*4]
  686a71:	4d 89 c2             	mov    r10,r8
  686a74:	49 21 ea             	and    r10,rbp
  686a77:	49 d1 e8             	shr    r8,1
  686a7a:	49 21 e8             	and    r8,rbp
  686a7d:	4f 8d 04 50          	lea    r8,[r8+r10*2]
  686a81:	4d 89 ca             	mov    r10,r9
  686a84:	49 c1 ea 04          	shr    r10,0x4
  686a88:	4d 21 e2             	and    r10,r12
  686a8b:	4d 21 e1             	and    r9,r12
  686a8e:	49 c1 e1 04          	shl    r9,0x4
  686a92:	4d 09 d1             	or     r9,r10
  686a95:	4d 89 ca             	mov    r10,r9
  686a98:	4d 21 ea             	and    r10,r13
  686a9b:	49 c1 e9 02          	shr    r9,0x2
  686a9f:	4d 21 e9             	and    r9,r13
  686aa2:	4f 8d 0c 91          	lea    r9,[r9+r10*4]
  686aa6:	4d 89 ca             	mov    r10,r9
  686aa9:	49 21 ea             	and    r10,rbp
  686aac:	49 d1 e9             	shr    r9,1
  686aaf:	49 21 e9             	and    r9,rbp
  686ab2:	4f 8d 0c 51          	lea    r9,[r9+r10*2]
  686ab6:	41 ba f1 bf 3d f2    	mov    r10d,0xf23dbff1
  686abc:	e9 f1 00 00 00       	jmp    686bb2 <__cxa_finalize@plt-0xd2c25e>
  686ac1:	49 b8 c7 c1 c8 a4 d6 	movabs r8,0x4af17bd6a4c8c1c7
  686ac8:	7b f1 4a 
  686acb:	4d 31 c7             	xor    r15,r8
  686ace:	49 b8 ee 8c 9f f1 83 	movabs r8,0xfddee583f19f8cee
  686ad5:	e5 de fd 
  686ad8:	4d 31 c6             	xor    r14,r8
  686adb:	41 ba 9f 03 40 d6    	mov    r10d,0xd640039f
  686ae1:	e9 92 00 00 00       	jmp    686b78 <__cxa_finalize@plt-0xd2c298>
  686ae6:	4d 89 c2             	mov    r10,r8
  686ae9:	49 c1 ea 04          	shr    r10,0x4
  686aed:	4d 21 e2             	and    r10,r12
  686af0:	4d 21 e0             	and    r8,r12
  686af3:	49 c1 e0 04          	shl    r8,0x4
  686af7:	4d 09 d0             	or     r8,r10
  686afa:	4d 89 c2             	mov    r10,r8
  686afd:	4d 21 ea             	and    r10,r13
  686b00:	49 c1 e8 02          	shr    r8,0x2
  686b04:	4d 21 e8             	and    r8,r13
  686b07:	4f 8d 04 90          	lea    r8,[r8+r10*4]
  686b0b:	4d 89 c2             	mov    r10,r8
  686b0e:	49 21 ea             	and    r10,rbp
  686b11:	49 d1 e8             	shr    r8,1
  686b14:	49 21 e8             	and    r8,rbp
  686b17:	4f 8d 04 50          	lea    r8,[r8+r10*2]
  686b1b:	4d 89 ca             	mov    r10,r9
  686b1e:	49 c1 ea 04          	shr    r10,0x4
  686b22:	4d 21 e2             	and    r10,r12
  686b25:	4d 21 e1             	and    r9,r12
  686b28:	49 c1 e1 04          	shl    r9,0x4
  686b2c:	4d 09 d1             	or     r9,r10
  686b2f:	4d 89 ca             	mov    r10,r9
  686b32:	4d 21 ea             	and    r10,r13
  686b35:	49 c1 e9 02          	shr    r9,0x2
  686b39:	4d 21 e9             	and    r9,r13
  686b3c:	4f 8d 0c 91          	lea    r9,[r9+r10*4]
  686b40:	4d 89 ca             	mov    r10,r9
  686b43:	49 21 ea             	and    r10,rbp
  686b46:	49 d1 e9             	shr    r9,1
  686b49:	49 21 e9             	and    r9,rbp
  686b4c:	4f 8d 0c 51          	lea    r9,[r9+r10*2]
  686b50:	41 ba 18 76 69 eb    	mov    r10d,0xeb697618
  686b56:	eb 5a                	jmp    686bb2 <__cxa_finalize@plt-0xd2c25e>
  686b58:	49 b8 ea 0f d8 69 c4 	movabs r8,0xbc934c469d80fea
  686b5f:	34 c9 0b 
  686b62:	4d 31 c7             	xor    r15,r8
  686b65:	49 b8 22 9b 54 c4 96 	movabs r8,0xf0c37796c4549b22
  686b6c:	77 c3 f0 
  686b6f:	4d 31 c6             	xor    r14,r8
  686b72:	41 ba 50 fa 78 fa    	mov    r10d,0xfa78fa50
  686b78:	4d 89 f9             	mov    r9,r15
  686b7b:	4d 89 f0             	mov    r8,r14
  686b7e:	eb 32                	jmp    686bb2 <__cxa_finalize@plt-0xd2c25e>
  686b80:	4d 89 f8             	mov    r8,r15
  686b83:	4d 0f a4 f0 21       	shld   r8,r14,0x21
  686b88:	4d 0f a4 fe 21       	shld   r14,r15,0x21
  686b8d:	41 ba a3 98 2a de    	mov    r10d,0xde2a98a3
  686b93:	4d 89 f1             	mov    r9,r14
  686b96:	eb 1a                	jmp    686bb2 <__cxa_finalize@plt-0xd2c25e>
  686b98:	41 ba 3a 04 98 6b    	mov    r10d,0x6b98043a
  686b9e:	49 b9 16 37 09 95 75 	movabs r9,0xa67d1a7595093716
  686ba5:	1a 7d a6 
  686ba8:	49 b8 73 bc e1 96 e9 	movabs r8,0x9719ee996e1bc73
  686baf:	9e 71 09 
  686bb2:	44 31 d2             	xor    edx,r10d
  686bb5:	4d 89 cf             	mov    r15,r9
  686bb8:	4d 89 c6             	mov    r14,r8
  686bbb:	e9 d1 fd ff ff       	jmp    686991 <__cxa_finalize@plt-0xd2c47f>
  686bc0:	41 b8 15 f3 a0 14    	mov    r8d,0x14a0f315
  686bc6:	e9 46 0a 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  686bcb:	ba 19 d7 73 98       	mov    edx,0x9873d719
  686bd0:	31 ff                	xor    edi,edi
  686bd2:	45 31 c0             	xor    r8d,r8d
  686bd5:	31 f6                	xor    esi,esi
  686bd7:	81 fa fe 68 ed 8a    	cmp    edx,0x8aed68fe
  686bdd:	0f 84 f7 00 00 00    	je     686cda <__cxa_finalize@plt-0xd2c136>
  686be3:	81 fa 14 c1 c0 94    	cmp    edx,0x94c0c114
  686be9:	0f 84 15 01 00 00    	je     686d04 <__cxa_finalize@plt-0xd2c10c>
  686bef:	81 fa 19 d7 73 98    	cmp    edx,0x9873d719
  686bf5:	0f 84 86 00 00 00    	je     686c81 <__cxa_finalize@plt-0xd2c18f>
  686bfb:	81 fa 33 d7 c2 b8    	cmp    edx,0xb8c2d733
  686c01:	0f 84 99 00 00 00    	je     686ca0 <__cxa_finalize@plt-0xd2c170>
  686c07:	81 fa 44 16 04 db    	cmp    edx,0xdb041644
  686c0d:	0f 84 28 01 00 00    	je     686d3b <__cxa_finalize@plt-0xd2c0d5>
  686c13:	81 fa f4 fd 0d e2    	cmp    edx,0xe20dfdf4
  686c19:	74 41                	je     686c5c <__cxa_finalize@plt-0xd2c1b4>
  686c1b:	81 fa bd af e1 e3    	cmp    edx,0xe3e1afbd
  686c21:	0f 84 91 00 00 00    	je     686cb8 <__cxa_finalize@plt-0xd2c158>
  686c27:	81 fa de c6 7f 11    	cmp    edx,0x117fc6de
  686c2d:	0f 84 f3 00 00 00    	je     686d26 <__cxa_finalize@plt-0xd2c0ea>
  686c33:	81 fa 1a e4 70 40    	cmp    edx,0x4070e41a
  686c39:	0f 84 1a 01 00 00    	je     686d59 <__cxa_finalize@plt-0xd2c0b7>
  686c3f:	81 fa 1e 2f 35 55    	cmp    edx,0x55352f1e
  686c45:	0f 84 a4 00 00 00    	je     686cef <__cxa_finalize@plt-0xd2c121>
  686c4b:	81 fa 67 ac aa 80    	cmp    edx,0x80aaac67
  686c51:	0f 85 fa 00 00 00    	jne    686d51 <__cxa_finalize@plt-0xd2c0bf>
  686c57:	e9 1f 01 00 00       	jmp    686d7b <__cxa_finalize@plt-0xd2c095>
  686c5c:	49 b8 c9 54 6b 08 00 	movabs r8,0xc6983d00086b54c9
  686c63:	3d 98 c6 
  686c66:	4c 01 c7             	add    rdi,r8
  686c69:	49 b8 c4 db b2 41 61 	movabs r8,0x72e8c26141b2dbc4
  686c70:	c2 e8 72 
  686c73:	4c 11 c6             	adc    rsi,r8
  686c76:	41 b8 ea d2 38 b7    	mov    r8d,0xb738d2ea
  686c7c:	e9 d0 00 00 00       	jmp    686d51 <__cxa_finalize@plt-0xd2c0bf>
  686c81:	41 b8 0d 16 b3 0c    	mov    r8d,0xcb3160d
  686c87:	48 bf a7 6b 9c 58 a7 	movabs rdi,0x902c2da7589c6ba7
  686c8e:	2d 2c 90 
  686c91:	48 be 45 58 01 88 1b 	movabs rsi,0xdbca5a1b88015845
  686c98:	5a ca db 
  686c9b:	e9 b1 00 00 00       	jmp    686d51 <__cxa_finalize@plt-0xd2c0bf>
  686ca0:	49 89 f9             	mov    r9,rdi
  686ca3:	49 0f a4 f1 3a       	shld   r9,rsi,0x3a
  686ca8:	48 0f ac f7 06       	shrd   rdi,rsi,0x6
  686cad:	41 b8 c7 2a cf 5a    	mov    r8d,0x5acf2ac7
  686cb3:	e9 96 00 00 00       	jmp    686d4e <__cxa_finalize@plt-0xd2c0c2>
  686cb8:	49 b8 fb 4b 65 83 76 	movabs r8,0x846ed87683654bfb
  686cbf:	d8 6e 84 
  686cc2:	4c 01 c7             	add    rdi,r8
  686cc5:	49 b8 5e 9d 41 1e d3 	movabs r8,0xc6e758d31e419d5e
  686ccc:	58 e7 c6 
  686ccf:	4c 11 c6             	adc    rsi,r8
  686cd2:	41 b8 43 c7 0c 69    	mov    r8d,0x690cc743
  686cd8:	eb 77                	jmp    686d51 <__cxa_finalize@plt-0xd2c0bf>
  686cda:	49 89 f9             	mov    r9,rdi
  686cdd:	49 0f a4 f1 17       	shld   r9,rsi,0x17
  686ce2:	48 0f ac f7 29       	shrd   rdi,rsi,0x29
  686ce7:	41 b8 20 ae 92 9b    	mov    r8d,0x9b92ae20
  686ced:	eb 5f                	jmp    686d4e <__cxa_finalize@plt-0xd2c0c2>
  686cef:	49 89 f1             	mov    r9,rsi
  686cf2:	49 0f a4 f9 05       	shld   r9,rdi,0x5
  686cf7:	48 0f a4 f7 05       	shld   rdi,rsi,0x5
  686cfc:	41 b8 a3 80 d4 b6    	mov    r8d,0xb6d480a3
  686d02:	eb 4a                	jmp    686d4e <__cxa_finalize@plt-0xd2c0c2>
  686d04:	49 b8 a7 d6 41 56 d2 	movabs r8,0xc3c5e3d25641d6a7
  686d0b:	e3 c5 c3 
  686d0e:	4c 01 c7             	add    rdi,r8
  686d11:	49 b8 ee ce 8b 85 3f 	movabs r8,0x654cff3f858bceee
  686d18:	ff 4c 65 
  686d1b:	4c 11 c6             	adc    rsi,r8
  686d1e:	41 b8 50 d7 c4 4f    	mov    r8d,0x4fc4d750
  686d24:	eb 2b                	jmp    686d51 <__cxa_finalize@plt-0xd2c0bf>
  686d26:	49 89 f1             	mov    r9,rsi
  686d29:	49 0f a4 f9 25       	shld   r9,rdi,0x25
  686d2e:	48 0f a4 f7 25       	shld   rdi,rsi,0x25
  686d33:	41 b8 b9 6a d5 91    	mov    r8d,0x91d56ab9
  686d39:	eb 13                	jmp    686d4e <__cxa_finalize@plt-0xd2c0c2>
  686d3b:	49 89 f9             	mov    r9,rdi
  686d3e:	49 0f a4 f1 39       	shld   r9,rsi,0x39
  686d43:	48 0f ac f7 07       	shrd   rdi,rsi,0x7
  686d48:	41 b8 5e f2 74 9b    	mov    r8d,0x9b74f25e
  686d4e:	4c 89 ce             	mov    rsi,r9
  686d51:	44 31 c2             	xor    edx,r8d
  686d54:	e9 7e fe ff ff       	jmp    686bd7 <__cxa_finalize@plt-0xd2c239>
  686d59:	49 b8 c9 1c 84 54 e7 	movabs r8,0x56ae56e754841cc9
  686d60:	56 ae 56 
  686d63:	4c 01 c7             	add    rdi,r8
  686d66:	49 b8 c4 b9 aa a0 56 	movabs r8,0x1b7e8756a0aab9c4
  686d6d:	87 7e 1b 
  686d70:	4c 11 c6             	adc    rsi,r8
  686d73:	41 b8 29 33 b2 f8    	mov    r8d,0xf8b23329
  686d79:	eb d6                	jmp    686d51 <__cxa_finalize@plt-0xd2c0bf>
  686d7b:	ba cd 2c bf 1f       	mov    edx,0x1fbf2ccd
  686d80:	45 31 ff             	xor    r15d,r15d
  686d83:	45 31 c0             	xor    r8d,r8d
  686d86:	45 31 f6             	xor    r14d,r14d
  686d89:	81 fa 4e 1f 2e 82    	cmp    edx,0x822e1f4e
  686d8f:	0f 84 b5 02 00 00    	je     68704a <__cxa_finalize@plt-0xd2bdc6>
  686d95:	81 fa 26 21 c2 82    	cmp    edx,0x82c22126
  686d9b:	0f 84 be 02 00 00    	je     68705f <__cxa_finalize@plt-0xd2bdb1>
  686da1:	81 fa 50 1a 13 8e    	cmp    edx,0x8e131a50
  686da7:	0f 84 a1 00 00 00    	je     686e4e <__cxa_finalize@plt-0xd2bfc2>
  686dad:	81 fa e4 6e 9e b4    	cmp    edx,0xb49e6ee4
  686db3:	0f 84 82 01 00 00    	je     686f3b <__cxa_finalize@plt-0xd2bed5>
  686db9:	81 fa b8 a0 ca bf    	cmp    edx,0xbfcaa0b8
  686dbf:	0f 84 0a 02 00 00    	je     686fcf <__cxa_finalize@plt-0xd2be41>
  686dc5:	81 fa 65 f7 49 c6    	cmp    edx,0xc649f765
  686dcb:	0f 84 a2 00 00 00    	je     686e73 <__cxa_finalize@plt-0xd2bf9d>
  686dd1:	81 fa 63 34 5e c8    	cmp    edx,0xc85e3463
  686dd7:	0f 84 bb 00 00 00    	je     686e98 <__cxa_finalize@plt-0xd2bf78>
  686ddd:	81 fa b6 1e 0a ca    	cmp    edx,0xca0a1eb6
  686de3:	0f 84 77 01 00 00    	je     686f60 <__cxa_finalize@plt-0xd2beb0>
  686de9:	81 fa 9b 5a 36 fb    	cmp    edx,0xfb365a9b
  686def:	0f 84 ba 00 00 00    	je     686eaf <__cxa_finalize@plt-0xd2bf61>
  686df5:	81 fa 79 c5 1b 17    	cmp    edx,0x171bc579
  686dfb:	0f 84 22 01 00 00    	je     686f23 <__cxa_finalize@plt-0xd2beed>
  686e01:	81 fa cd 2c bf 1f    	cmp    edx,0x1fbf2ccd
  686e07:	0f 84 f7 00 00 00    	je     686f04 <__cxa_finalize@plt-0xd2bf0c>
  686e0d:	81 fa f4 0b e2 2d    	cmp    edx,0x2de20bf4
  686e13:	0f 84 6c 01 00 00    	je     686f85 <__cxa_finalize@plt-0xd2be8b>
  686e19:	81 fa 09 53 d3 3a    	cmp    edx,0x3ad35309
  686e1f:	0f 84 85 01 00 00    	je     686faa <__cxa_finalize@plt-0xd2be66>
  686e25:	81 fa 05 95 d6 5a    	cmp    edx,0x5ad69505
  686e2b:	0f 84 96 00 00 00    	je     686ec7 <__cxa_finalize@plt-0xd2bf49>
  686e31:	81 fa 37 19 4f 66    	cmp    edx,0x664f1937
  686e37:	0f 84 af 00 00 00    	je     686eec <__cxa_finalize@plt-0xd2bf24>
  686e3d:	81 fa a1 62 2e 96    	cmp    edx,0x962e62a1
  686e43:	0f 85 8f 02 00 00    	jne    6870d8 <__cxa_finalize@plt-0xd2bd38>
  686e49:	e9 92 02 00 00       	jmp    6870e0 <__cxa_finalize@plt-0xd2bd30>
  686e4e:	49 b8 8d 17 49 24 f5 	movabs r8,0x7214d6f52449178d
  686e55:	d6 14 72 
  686e58:	4d 01 c7             	add    r15,r8
  686e5b:	49 b8 28 2a 93 d0 8b 	movabs r8,0x84af178bd0932a28
  686e62:	17 af 84 
  686e65:	4d 11 c6             	adc    r14,r8
  686e68:	41 b8 f1 78 3d 18    	mov    r8d,0x183d78f1
  686e6e:	e9 65 02 00 00       	jmp    6870d8 <__cxa_finalize@plt-0xd2bd38>
  686e73:	49 b8 3e d5 de ce 17 	movabs r8,0xb2ac1c17ceded53e
  686e7a:	1c ac b2 
  686e7d:	4d 01 c7             	add    r15,r8
  686e80:	49 b8 58 93 11 65 6a 	movabs r8,0xc875876a65119358
  686e87:	87 75 c8 
  686e8a:	4d 11 c6             	adc    r14,r8
  686e8d:	41 b8 35 ed 5a 48    	mov    r8d,0x485aed35
  686e93:	e9 40 02 00 00       	jmp    6870d8 <__cxa_finalize@plt-0xd2bd38>
  686e98:	4d 89 f9             	mov    r9,r15
  686e9b:	49 0f c9             	bswap  r9
  686e9e:	49 0f ce             	bswap  r14
  686ea1:	41 b8 6a 67 8d f2    	mov    r8d,0xf28d676a
  686ea7:	4d 89 f7             	mov    r15,r14
  686eaa:	e9 26 02 00 00       	jmp    6870d5 <__cxa_finalize@plt-0xd2bd3b>
  686eaf:	4d 89 f1             	mov    r9,r14
  686eb2:	4d 0f a4 f9 39       	shld   r9,r15,0x39
  686eb7:	4d 0f a4 f7 39       	shld   r15,r14,0x39
  686ebc:	41 b8 ac 43 79 9d    	mov    r8d,0x9d7943ac
  686ec2:	e9 0e 02 00 00       	jmp    6870d5 <__cxa_finalize@plt-0xd2bd3b>
  686ec7:	49 b8 f6 65 d7 9d 54 	movabs r8,0xa5f573549dd765f6
  686ece:	73 f5 a5 
  686ed1:	4d 01 c7             	add    r15,r8
  686ed4:	49 b8 15 d7 94 9c a2 	movabs r8,0x41d437a29c94d715
  686edb:	37 d4 41 
  686ede:	4d 11 c6             	adc    r14,r8
  686ee1:	41 b8 bd 35 1c e5    	mov    r8d,0xe51c35bd
  686ee7:	e9 ec 01 00 00       	jmp    6870d8 <__cxa_finalize@plt-0xd2bd38>
  686eec:	4d 89 f1             	mov    r9,r14
  686eef:	4d 0f a4 f9 0f       	shld   r9,r15,0xf
  686ef4:	4d 0f a4 f7 0f       	shld   r15,r14,0xf
  686ef9:	41 b8 81 07 45 ac    	mov    r8d,0xac450781
  686eff:	e9 d1 01 00 00       	jmp    6870d5 <__cxa_finalize@plt-0xd2bd3b>
  686f04:	41 b8 eb 0d 7d 9d    	mov    r8d,0x9d7d0deb
  686f0a:	49 bf 93 b8 0e d2 ec 	movabs r15,0xe23db2ecd20eb893
  686f11:	b2 3d e2 
  686f14:	49 be 45 0a f1 ca 0d 	movabs r14,0x61d40a0dcaf10a45
  686f1b:	0a d4 61 
  686f1e:	e9 b5 01 00 00       	jmp    6870d8 <__cxa_finalize@plt-0xd2bd38>
  686f23:	4d 89 f1             	mov    r9,r14
  686f26:	4d 0f a4 f9 28       	shld   r9,r15,0x28
  686f2b:	4d 0f a4 f7 28       	shld   r15,r14,0x28
  686f30:	41 b8 7c 50 cd 4d    	mov    r8d,0x4dcd507c
  686f36:	e9 9a 01 00 00       	jmp    6870d5 <__cxa_finalize@plt-0xd2bd3b>
  686f3b:	49 b8 e7 09 5c f6 6c 	movabs r8,0xbc3d166cf65c09e7
  686f42:	16 3d bc 
  686f45:	4d 01 c7             	add    r15,r8
  686f48:	49 b8 65 4b 64 a6 33 	movabs r8,0x5268f833a6644b65
  686f4f:	f8 68 52 
  686f52:	4d 11 c6             	adc    r14,r8
  686f55:	41 b8 87 5a c0 7c    	mov    r8d,0x7cc05a87
  686f5b:	e9 78 01 00 00       	jmp    6870d8 <__cxa_finalize@plt-0xd2bd38>
  686f60:	49 b8 d7 21 bc cd ad 	movabs r8,0x664e09adcdbc21d7
  686f67:	09 4e 66 
  686f6a:	4d 01 c7             	add    r15,r8
  686f6d:	49 b8 b4 da b1 26 bb 	movabs r8,0xa42125bb26b1dab4
  686f74:	25 21 a4 
  686f77:	4d 11 c6             	adc    r14,r8
  686f7a:	41 b8 d3 e9 43 0c    	mov    r8d,0xc43e9d3
  686f80:	e9 53 01 00 00       	jmp    6870d8 <__cxa_finalize@plt-0xd2bd38>
  686f85:	49 b8 2e 42 32 6a 6f 	movabs r8,0xc5ba4f6f6a32422e
  686f8c:	4f ba c5 
  686f8f:	4d 01 c7             	add    r15,r8
  686f92:	49 b8 c1 ad 5b b4 33 	movabs r8,0xfac3c533b45badc1
  686f99:	c5 c3 fa 
  686f9c:	4d 11 c6             	adc    r14,r8
  686f9f:	41 b8 8d ce f9 3a    	mov    r8d,0x3af9ce8d
  686fa5:	e9 2e 01 00 00       	jmp    6870d8 <__cxa_finalize@plt-0xd2bd38>
  686faa:	49 b8 2d 05 35 73 a7 	movabs r8,0x84f87ea77335052d
  686fb1:	7e f8 84 
  686fb4:	4d 01 c7             	add    r15,r8
  686fb7:	49 b8 f7 95 f9 97 4a 	movabs r8,0x82cca94a97f995f7
  686fbe:	a9 cc 82 
  686fc1:	4d 11 c6             	adc    r14,r8
  686fc4:	41 b8 fd 58 31 17    	mov    r8d,0x173158fd
  686fca:	e9 09 01 00 00       	jmp    6870d8 <__cxa_finalize@plt-0xd2bd38>
  686fcf:	49 0f cf             	bswap  r15
  686fd2:	4d 89 f8             	mov    r8,r15
  686fd5:	49 c1 e8 04          	shr    r8,0x4
  686fd9:	4d 21 e0             	and    r8,r12
  686fdc:	4d 21 e7             	and    r15,r12
  686fdf:	49 c1 e7 04          	shl    r15,0x4
  686fe3:	4d 09 c7             	or     r15,r8
  686fe6:	4d 89 f8             	mov    r8,r15
  686fe9:	4d 21 e8             	and    r8,r13
  686fec:	49 c1 ef 02          	shr    r15,0x2
  686ff0:	4d 21 ef             	and    r15,r13
  686ff3:	4f 8d 04 87          	lea    r8,[r15+r8*4]
  686ff7:	4d 89 c1             	mov    r9,r8
  686ffa:	49 21 e9             	and    r9,rbp
  686ffd:	49 d1 e8             	shr    r8,1
  687000:	49 21 e8             	and    r8,rbp
  687003:	4f 8d 0c 48          	lea    r9,[r8+r9*2]
  687007:	49 0f ce             	bswap  r14
  68700a:	4d 89 f0             	mov    r8,r14
  68700d:	49 c1 e8 04          	shr    r8,0x4
  687011:	4d 21 e0             	and    r8,r12
  687014:	4d 21 e6             	and    r14,r12
  687017:	49 c1 e6 04          	shl    r14,0x4
  68701b:	4d 09 c6             	or     r14,r8
  68701e:	4d 89 f0             	mov    r8,r14
  687021:	4d 21 e8             	and    r8,r13
  687024:	49 c1 ee 02          	shr    r14,0x2
  687028:	4d 21 ee             	and    r14,r13
  68702b:	4f 8d 04 86          	lea    r8,[r14+r8*4]
  68702f:	4d 89 c2             	mov    r10,r8
  687032:	49 21 ea             	and    r10,rbp
  687035:	49 d1 e8             	shr    r8,1
  687038:	49 21 e8             	and    r8,rbp
  68703b:	4f 8d 3c 50          	lea    r15,[r8+r10*2]
  68703f:	41 b8 f6 bf e4 3d    	mov    r8d,0x3de4bff6
  687045:	e9 8b 00 00 00       	jmp    6870d5 <__cxa_finalize@plt-0xd2bd3b>
  68704a:	4d 89 f9             	mov    r9,r15
  68704d:	4d 0f a4 f1 2a       	shld   r9,r14,0x2a
  687052:	4d 0f ac f7 16       	shrd   r15,r14,0x16
  687057:	41 b8 d5 45 18 79    	mov    r8d,0x791845d5
  68705d:	eb 76                	jmp    6870d5 <__cxa_finalize@plt-0xd2bd3b>
  68705f:	49 0f cf             	bswap  r15
  687062:	4d 89 f8             	mov    r8,r15
  687065:	49 c1 e8 04          	shr    r8,0x4
  687069:	4d 21 e0             	and    r8,r12
  68706c:	4d 21 e7             	and    r15,r12
  68706f:	49 c1 e7 04          	shl    r15,0x4
  687073:	4d 09 c7             	or     r15,r8
  687076:	4d 89 f8             	mov    r8,r15
  687079:	4d 21 e8             	and    r8,r13
  68707c:	49 c1 ef 02          	shr    r15,0x2
  687080:	4d 21 ef             	and    r15,r13
  687083:	4f 8d 04 87          	lea    r8,[r15+r8*4]
  687087:	4d 89 c1             	mov    r9,r8
  68708a:	49 21 e9             	and    r9,rbp
  68708d:	49 d1 e8             	shr    r8,1
  687090:	49 21 e8             	and    r8,rbp
  687093:	4f 8d 0c 48          	lea    r9,[r8+r9*2]
  687097:	49 0f ce             	bswap  r14
  68709a:	4d 89 f0             	mov    r8,r14
  68709d:	49 c1 e8 04          	shr    r8,0x4
  6870a1:	4d 21 e0             	and    r8,r12
  6870a4:	4d 21 e6             	and    r14,r12
  6870a7:	49 c1 e6 04          	shl    r14,0x4
  6870ab:	4d 09 c6             	or     r14,r8
  6870ae:	4d 89 f0             	mov    r8,r14
  6870b1:	4d 21 e8             	and    r8,r13
  6870b4:	49 c1 ee 02          	shr    r14,0x2
  6870b8:	4d 21 ee             	and    r14,r13
  6870bb:	4f 8d 04 86          	lea    r8,[r14+r8*4]
  6870bf:	4d 89 c2             	mov    r10,r8
  6870c2:	49 21 ea             	and    r10,rbp
  6870c5:	49 d1 e8             	shr    r8,1
  6870c8:	49 21 e8             	and    r8,rbp
  6870cb:	4f 8d 3c 50          	lea    r15,[r8+r10*2]
  6870cf:	41 b8 c2 4f 5c 36    	mov    r8d,0x365c4fc2
  6870d5:	4d 89 ce             	mov    r14,r9
  6870d8:	44 31 c2             	xor    edx,r8d
  6870db:	e9 a9 fc ff ff       	jmp    686d89 <__cxa_finalize@plt-0xd2c087>
  6870e0:	41 b8 e6 89 82 88    	mov    r8d,0x888289e6
  6870e6:	e9 26 05 00 00       	jmp    687611 <__cxa_finalize@plt-0xd2b7ff>
  6870eb:	ba 08 2e 42 cc       	mov    edx,0xcc422e08
  6870f0:	31 ff                	xor    edi,edi
  6870f2:	45 31 c0             	xor    r8d,r8d
  6870f5:	31 f6                	xor    esi,esi
  6870f7:	81 fa 76 f0 8f 87    	cmp    edx,0x878ff076
  6870fd:	0f 84 a9 01 00 00    	je     6872ac <__cxa_finalize@plt-0xd2bb64>
  687103:	49 89 f9             	mov    r9,rdi
  687106:	81 fa fa a5 27 98    	cmp    edx,0x9827a5fa
  68710c:	0f 84 9a 00 00 00    	je     6871ac <__cxa_finalize@plt-0xd2bc64>
  687112:	49 0f c9             	bswap  r9
  687115:	49 89 f2             	mov    r10,rsi
  687118:	49 0f ca             	bswap  r10
  68711b:	81 fa b2 23 d1 99    	cmp    edx,0x99d123b2
  687121:	0f 84 5f 01 00 00    	je     687286 <__cxa_finalize@plt-0xd2bb8a>
  687127:	81 fa fd 41 bd c2    	cmp    edx,0xc2bd41fd
  68712d:	0f 84 ef 01 00 00    	je     687322 <__cxa_finalize@plt-0xd2baee>
  687133:	81 fa 08 2e 42 cc    	cmp    edx,0xcc422e08
  687139:	0f 84 17 02 00 00    	je     687356 <__cxa_finalize@plt-0xd2baba>
  68713f:	81 fa a9 ec d8 e6    	cmp    edx,0xe6d8eca9
  687145:	0f 84 8b 01 00 00    	je     6872d6 <__cxa_finalize@plt-0xd2bb3a>
  68714b:	81 fa 4f 52 07 e8    	cmp    edx,0xe807524f
  687151:	0f 84 c3 01 00 00    	je     68731a <__cxa_finalize@plt-0xd2baf6>
  687157:	81 fa c1 b7 3c ee    	cmp    edx,0xee3cb7c1
  68715d:	74 62                	je     6871c1 <__cxa_finalize@plt-0xd2bc4f>
  68715f:	81 fa 93 be 8d ef    	cmp    edx,0xef8dbe93
  687165:	0f 84 8d 01 00 00    	je     6872f8 <__cxa_finalize@plt-0xd2bb18>
  68716b:	81 fa 2a ad d3 19    	cmp    edx,0x19d3ad2a
  687171:	0f 84 c5 00 00 00    	je     68723c <__cxa_finalize@plt-0xd2bbd4>
  687177:	81 fa 9a 45 21 50    	cmp    edx,0x5021459a
  68717d:	0f 84 0e 01 00 00    	je     687291 <__cxa_finalize@plt-0xd2bb7f>
  687183:	81 fa 44 42 ff 6b    	cmp    edx,0x6bff4244
  687189:	0f 84 d2 00 00 00    	je     687261 <__cxa_finalize@plt-0xd2bbaf>
  68718f:	81 fa ba 75 4e 7c    	cmp    edx,0x7c4e75ba
  687195:	0f 84 33 01 00 00    	je     6872ce <__cxa_finalize@plt-0xd2bb42>
  68719b:	81 fa 28 3d 2a 7d    	cmp    edx,0x7d2a3d28
  6871a1:	0f 85 9b 01 00 00    	jne    687342 <__cxa_finalize@plt-0xd2bace>
  6871a7:	e9 c6 01 00 00       	jmp    687372 <__cxa_finalize@plt-0xd2ba9e>
  6871ac:	49 0f a4 f1 1c       	shld   r9,rsi,0x1c
  6871b1:	48 0f a4 fe 1c       	shld   rsi,rdi,0x1c
  6871b6:	41 b8 be e7 d8 f3    	mov    r8d,0xf3d8e7be
  6871bc:	e9 e3 00 00 00       	jmp    6872a4 <__cxa_finalize@plt-0xd2bb6c>
  6871c1:	48 0f cf             	bswap  rdi
  6871c4:	49 89 f8             	mov    r8,rdi
  6871c7:	49 c1 e8 04          	shr    r8,0x4
  6871cb:	4d 21 e0             	and    r8,r12
  6871ce:	4c 21 e7             	and    rdi,r12
  6871d1:	48 c1 e7 04          	shl    rdi,0x4
  6871d5:	4c 09 c7             	or     rdi,r8
  6871d8:	49 89 f8             	mov    r8,rdi
  6871db:	4d 21 e8             	and    r8,r13
  6871de:	48 c1 ef 02          	shr    rdi,0x2
  6871e2:	4c 21 ef             	and    rdi,r13
  6871e5:	4a 8d 3c 87          	lea    rdi,[rdi+r8*4]
  6871e9:	49 89 f8             	mov    r8,rdi
  6871ec:	49 21 e8             	and    r8,rbp
  6871ef:	48 d1 ef             	shr    rdi,1
  6871f2:	48 21 ef             	and    rdi,rbp
  6871f5:	4e 8d 0c 47          	lea    r9,[rdi+r8*2]
  6871f9:	48 0f ce             	bswap  rsi
  6871fc:	48 89 f7             	mov    rdi,rsi
  6871ff:	48 c1 ef 04          	shr    rdi,0x4
  687203:	4c 21 e7             	and    rdi,r12
  687206:	4c 21 e6             	and    rsi,r12
  687209:	48 c1 e6 04          	shl    rsi,0x4
  68720d:	48 09 fe             	or     rsi,rdi
  687210:	48 89 f7             	mov    rdi,rsi
  687213:	4c 21 ef             	and    rdi,r13
  687216:	48 c1 ee 02          	shr    rsi,0x2
  68721a:	4c 21 ee             	and    rsi,r13
  68721d:	48 8d 34 be          	lea    rsi,[rsi+rdi*4]
  687221:	48 89 f7             	mov    rdi,rsi
  687224:	48 21 ef             	and    rdi,rbp
  687227:	48 d1 ee             	shr    rsi,1
  68722a:	48 21 ee             	and    rsi,rbp
  68722d:	4c 8d 14 7e          	lea    r10,[rsi+rdi*2]
  687231:	41 b8 5b f2 1d be    	mov    r8d,0xbe1df25b
  687237:	e9 0c 01 00 00       	jmp    687348 <__cxa_finalize@plt-0xd2bac8>
  68723c:	49 b8 a6 c4 a7 d5 d3 	movabs r8,0x911e3bd3d5a7c4a6
  687243:	3b 1e 91 
  687246:	4c 31 c7             	xor    rdi,r8
  687249:	49 b8 38 11 c6 cb db 	movabs r8,0xec3ab2dbcbc61138
  687250:	b2 3a ec 
  687253:	4c 31 c6             	xor    rsi,r8
  687256:	41 b8 98 8e 02 80    	mov    r8d,0x80028e98
  68725c:	e9 e1 00 00 00       	jmp    687342 <__cxa_finalize@plt-0xd2bace>
  687261:	49 b8 76 01 ab ca 49 	movabs r8,0x25ccbc49caab0176
  687268:	bc cc 25 
  68726b:	4c 01 c7             	add    rdi,r8
  68726e:	49 b8 44 6c 24 81 7d 	movabs r8,0x5347907d81246c44
  687275:	90 47 53 
  687278:	4c 11 c6             	adc    rsi,r8
  68727b:	41 b8 85 f5 c3 85    	mov    r8d,0x85c3f585
  687281:	e9 bc 00 00 00       	jmp    687342 <__cxa_finalize@plt-0xd2bace>
  687286:	41 b8 1b cf 09 7f    	mov    r8d,0x7f09cf1b
  68728c:	e9 b7 00 00 00       	jmp    687348 <__cxa_finalize@plt-0xd2bac8>
  687291:	49 89 f9             	mov    r9,rdi
  687294:	49 0f a4 f1 13       	shld   r9,rsi,0x13
  687299:	48 0f a4 fe 13       	shld   rsi,rdi,0x13
  68729e:	41 b8 67 04 9c 92    	mov    r8d,0x929c0467
  6872a4:	49 89 f2             	mov    r10,rsi
  6872a7:	e9 9c 00 00 00       	jmp    687348 <__cxa_finalize@plt-0xd2bac8>
  6872ac:	49 b8 a3 c1 a8 85 88 	movabs r8,0xec7f698885a8c1a3
  6872b3:	69 7f ec 
  6872b6:	4c 01 c7             	add    rdi,r8
  6872b9:	49 b8 86 f1 3e ee 57 	movabs r8,0xa7fff957ee3ef186
  6872c0:	f9 ff a7 
  6872c3:	4c 11 c6             	adc    rsi,r8
  6872c6:	41 b8 8c 55 a8 1f    	mov    r8d,0x1fa8558c
  6872cc:	eb 74                	jmp    687342 <__cxa_finalize@plt-0xd2bace>
  6872ce:	41 b8 90 d8 9d 65    	mov    r8d,0x659dd890
  6872d4:	eb 72                	jmp    687348 <__cxa_finalize@plt-0xd2bac8>
  6872d6:	49 b8 ec 67 ee ee b4 	movabs r8,0xbe03aeb4eeee67ec
  6872dd:	ae 03 be 
  6872e0:	4c 01 c7             	add    rdi,r8
  6872e3:	49 b8 1a 2e a7 dc ad 	movabs r8,0x853019addca72e1a
  6872ea:	19 30 85 
  6872ed:	4c 11 c6             	adc    rsi,r8
  6872f0:	41 b8 e6 be df 0e    	mov    r8d,0xedfbee6
  6872f6:	eb 4a                	jmp    687342 <__cxa_finalize@plt-0xd2bace>
  6872f8:	49 b8 12 8f 6f de ac 	movabs r8,0xbaf8bacde6f8f12
  6872ff:	8b af 0b 
  687302:	4c 01 c7             	add    rdi,r8
  687305:	49 b8 69 12 4b 4c 8f 	movabs r8,0x4611428f4c4b1269
  68730c:	42 11 46 
  68730f:	4c 11 c6             	adc    rsi,r8
  687312:	41 b8 e5 4e 02 68    	mov    r8d,0x68024ee5
  687318:	eb 28                	jmp    687342 <__cxa_finalize@plt-0xd2bace>
  68731a:	41 b8 67 6f 2d 95    	mov    r8d,0x952d6f67
  687320:	eb 26                	jmp    687348 <__cxa_finalize@plt-0xd2bac8>
  687322:	49 b8 8a 8f c2 a3 3a 	movabs r8,0x5b5b1f3aa3c28f8a
  687329:	1f 5b 5b 
  68732c:	4c 01 c7             	add    rdi,r8
  68732f:	49 b8 3e 54 e7 04 c3 	movabs r8,0x8868e1c304e7543e
  687336:	e1 68 88 
  687339:	4c 11 c6             	adc    rsi,r8
  68733c:	41 b8 47 34 f3 be    	mov    r8d,0xbef33447
  687342:	49 89 fa             	mov    r10,rdi
  687345:	49 89 f1             	mov    r9,rsi
  687348:	44 31 c2             	xor    edx,r8d
  68734b:	4c 89 d7             	mov    rdi,r10
  68734e:	4c 89 ce             	mov    rsi,r9
  687351:	e9 a1 fd ff ff       	jmp    6870f7 <__cxa_finalize@plt-0xd2bd19>
  687356:	41 b8 9b 90 cf 23    	mov    r8d,0x23cf909b
  68735c:	49 ba 62 b3 47 94 0b 	movabs r10,0x1967480b9447b362
  687363:	48 67 19 
  687366:	49 b9 98 46 db 1a 1a 	movabs r9,0x6263641a1adb4698
  68736d:	64 63 62 
  687370:	eb d6                	jmp    687348 <__cxa_finalize@plt-0xd2bac8>
  687372:	ba f2 66 81 c1       	mov    edx,0xc18166f2
  687377:	45 31 ff             	xor    r15d,r15d
  68737a:	45 31 c9             	xor    r9d,r9d
  68737d:	45 31 f6             	xor    r14d,r14d
  687380:	81 fa 8f a2 9d 9b    	cmp    edx,0x9b9da28f
  687386:	0f 84 67 02 00 00    	je     6875f3 <__cxa_finalize@plt-0xd2b81d>
  68738c:	81 fa 75 18 be 9f    	cmp    edx,0x9fbe1875
  687392:	0f 84 85 00 00 00    	je     68741d <__cxa_finalize@plt-0xd2b9f3>
  687398:	81 fa f2 66 81 c1    	cmp    edx,0xc18166f2
  68739e:	0f 84 9e 00 00 00    	je     687442 <__cxa_finalize@plt-0xd2b9ce>
  6873a4:	81 fa e1 3c 2f 02    	cmp    edx,0x22f3ce1
  6873aa:	0f 84 97 01 00 00    	je     687547 <__cxa_finalize@plt-0xd2b8c9>
  6873b0:	4d 89 f8             	mov    r8,r15
  6873b3:	49 0f c8             	bswap  r8
  6873b6:	4d 89 f2             	mov    r10,r14
  6873b9:	49 0f ca             	bswap  r10
  6873bc:	81 fa 53 a8 4a 06    	cmp    edx,0x64aa853
  6873c2:	0f 84 14 01 00 00    	je     6874dc <__cxa_finalize@plt-0xd2b934>
  6873c8:	81 fa 02 a4 18 07    	cmp    edx,0x718a402
  6873ce:	0f 84 28 01 00 00    	je     6874fc <__cxa_finalize@plt-0xd2b914>
  6873d4:	81 fa 46 be 22 0b    	cmp    edx,0xb22be46
  6873da:	0f 84 07 01 00 00    	je     6874e7 <__cxa_finalize@plt-0xd2b929>
  6873e0:	81 fa e5 df 82 13    	cmp    edx,0x1382dfe5
  6873e6:	0f 84 d3 01 00 00    	je     6875bf <__cxa_finalize@plt-0xd2b851>
  6873ec:	81 fa 9e 4f 13 23    	cmp    edx,0x23134f9e
  6873f2:	74 6d                	je     687461 <__cxa_finalize@plt-0xd2b9af>
  6873f4:	81 fa 08 2f 58 35    	cmp    edx,0x35582f08
  6873fa:	0f 84 21 01 00 00    	je     687521 <__cxa_finalize@plt-0xd2b8ef>
  687400:	81 fa 1a b6 5d 3b    	cmp    edx,0x3b5db61a
  687406:	0f 84 20 01 00 00    	je     68752c <__cxa_finalize@plt-0xd2b8e4>
  68740c:	81 fa 01 3a aa 62    	cmp    edx,0x62aa3a01
  687412:	0f 85 c7 01 00 00    	jne    6875df <__cxa_finalize@plt-0xd2b831>
  687418:	e9 ee 01 00 00       	jmp    68760b <__cxa_finalize@plt-0xd2b805>
  68741d:	49 b8 b6 fc 1a a8 07 	movabs r8,0x3cf18d07a81afcb6
  687424:	8d f1 3c 
  687427:	4d 01 c7             	add    r15,r8
  68742a:	49 b8 c9 3f cb b4 47 	movabs r8,0x5732b947b4cb3fc9
  687431:	b9 32 57 
  687434:	4d 11 c6             	adc    r14,r8
  687437:	41 b9 7d 37 e6 aa    	mov    r9d,0xaae6377d
  68743d:	e9 9d 01 00 00       	jmp    6875df <__cxa_finalize@plt-0xd2b831>
  687442:	41 b9 b4 d8 a3 ca    	mov    r9d,0xcaa3d8b4
  687448:	49 ba 24 2f f6 39 09 	movabs r10,0x29a3e70939f62f24
  68744f:	e7 a3 29 
  687452:	49 b8 ab 4b 43 c1 9a 	movabs r8,0xbfbcec9ac1434bab
  687459:	ec bc bf 
  68745c:	e9 84 01 00 00       	jmp    6875e5 <__cxa_finalize@plt-0xd2b82b>
  687461:	49 0f cf             	bswap  r15
  687464:	4d 89 f8             	mov    r8,r15
  687467:	49 c1 e8 04          	shr    r8,0x4
  68746b:	4d 21 e0             	and    r8,r12
  68746e:	4d 21 e7             	and    r15,r12
  687471:	49 c1 e7 04          	shl    r15,0x4
  687475:	4d 09 c7             	or     r15,r8
  687478:	4d 89 f8             	mov    r8,r15
  68747b:	4d 21 e8             	and    r8,r13
  68747e:	49 c1 ef 02          	shr    r15,0x2
  687482:	4d 21 ef             	and    r15,r13
  687485:	4f 8d 04 87          	lea    r8,[r15+r8*4]
  687489:	4d 89 c1             	mov    r9,r8
  68748c:	49 21 e9             	and    r9,rbp
  68748f:	49 d1 e8             	shr    r8,1
  687492:	49 21 e8             	and    r8,rbp
  687495:	4f 8d 04 48          	lea    r8,[r8+r9*2]
  687499:	49 0f ce             	bswap  r14
  68749c:	4d 89 f1             	mov    r9,r14
  68749f:	49 c1 e9 04          	shr    r9,0x4
  6874a3:	4d 21 e1             	and    r9,r12
  6874a6:	4d 21 e6             	and    r14,r12
  6874a9:	49 c1 e6 04          	shl    r14,0x4
  6874ad:	4d 09 ce             	or     r14,r9
  6874b0:	4d 89 f1             	mov    r9,r14
  6874b3:	4d 21 e9             	and    r9,r13
  6874b6:	49 c1 ee 02          	shr    r14,0x2
  6874ba:	4d 21 ee             	and    r14,r13
  6874bd:	4f 8d 0c 8e          	lea    r9,[r14+r9*4]
  6874c1:	4d 89 ca             	mov    r10,r9
  6874c4:	49 21 ea             	and    r10,rbp
  6874c7:	49 d1 e9             	shr    r9,1
  6874ca:	49 21 e9             	and    r9,rbp
  6874cd:	4f 8d 14 51          	lea    r10,[r9+r10*2]
  6874d1:	41 b9 84 f9 4e 18    	mov    r9d,0x184ef984
  6874d7:	e9 09 01 00 00       	jmp    6875e5 <__cxa_finalize@plt-0xd2b82b>
  6874dc:	41 b9 52 92 e0 64    	mov    r9d,0x64e09252
  6874e2:	e9 fe 00 00 00       	jmp    6875e5 <__cxa_finalize@plt-0xd2b82b>
  6874e7:	4d 89 f8             	mov    r8,r15
  6874ea:	4d 0f a4 f0 13       	shld   r8,r14,0x13
  6874ef:	4d 0f a4 fe 13       	shld   r14,r15,0x13
  6874f4:	41 b9 33 a6 9c 94    	mov    r9d,0x949ca633
  6874fa:	eb 43                	jmp    68753f <__cxa_finalize@plt-0xd2b8d1>
  6874fc:	49 b8 d2 93 3d 80 46 	movabs r8,0xb2249246803d93d2
  687503:	92 24 b2 
  687506:	4d 01 c7             	add    r15,r8
  687509:	49 b8 49 82 1b bd ba 	movabs r8,0xf0c07cbabd1b8249
  687510:	7c c0 f0 
  687513:	4d 11 c6             	adc    r14,r8
  687516:	41 b9 8d 06 85 9c    	mov    r9d,0x9c85068d
  68751c:	e9 be 00 00 00       	jmp    6875df <__cxa_finalize@plt-0xd2b831>
  687521:	41 b9 0a 8b 40 32    	mov    r9d,0x32408b0a
  687527:	e9 b9 00 00 00       	jmp    6875e5 <__cxa_finalize@plt-0xd2b82b>
  68752c:	4d 89 f8             	mov    r8,r15
  68752f:	4d 0f a4 f0 02       	shld   r8,r14,0x2
  687534:	4d 0f a4 fe 02       	shld   r14,r15,0x2
  687539:	41 b9 fb 8a 72 39    	mov    r9d,0x39728afb
  68753f:	4d 89 f2             	mov    r10,r14
  687542:	e9 9e 00 00 00       	jmp    6875e5 <__cxa_finalize@plt-0xd2b82b>
  687547:	49 0f cf             	bswap  r15
  68754a:	4d 89 f8             	mov    r8,r15
  68754d:	49 c1 e8 04          	shr    r8,0x4
  687551:	4d 21 e0             	and    r8,r12
  687554:	4d 21 e7             	and    r15,r12
  687557:	49 c1 e7 04          	shl    r15,0x4
  68755b:	4d 09 c7             	or     r15,r8
  68755e:	4d 89 f8             	mov    r8,r15
  687561:	4d 21 e8             	and    r8,r13
  687564:	49 c1 ef 02          	shr    r15,0x2
  687568:	4d 21 ef             	and    r15,r13
  68756b:	4f 8d 04 87          	lea    r8,[r15+r8*4]
  68756f:	4d 89 c1             	mov    r9,r8
  687572:	49 21 e9             	and    r9,rbp
  687575:	49 d1 e8             	shr    r8,1
  687578:	49 21 e8             	and    r8,rbp
  68757b:	4f 8d 04 48          	lea    r8,[r8+r9*2]
  68757f:	49 0f ce             	bswap  r14
  687582:	4d 89 f1             	mov    r9,r14
  687585:	49 c1 e9 04          	shr    r9,0x4
  687589:	4d 21 e1             	and    r9,r12
  68758c:	4d 21 e6             	and    r14,r12
  68758f:	49 c1 e6 04          	shl    r14,0x4
  687593:	4d 09 ce             	or     r14,r9
  687596:	4d 89 f1             	mov    r9,r14
  687599:	4d 21 e9             	and    r9,r13
  68759c:	49 c1 ee 02          	shr    r14,0x2
  6875a0:	4d 21 ee             	and    r14,r13
  6875a3:	4f 8d 0c 8e          	lea    r9,[r14+r9*4]
  6875a7:	4d 89 ca             	mov    r10,r9
  6875aa:	49 21 ea             	and    r10,rbp
  6875ad:	49 d1 e9             	shr    r9,1
  6875b0:	49 21 e9             	and    r9,rbp
  6875b3:	4f 8d 14 51          	lea    r10,[r9+r10*2]
  6875b7:	41 b9 04 e3 ad 11    	mov    r9d,0x11ade304
  6875bd:	eb 26                	jmp    6875e5 <__cxa_finalize@plt-0xd2b82b>
  6875bf:	49 b8 5d e4 eb ec a4 	movabs r8,0x265b0a4ecebe45d
  6875c6:	b0 65 02 
  6875c9:	4d 01 c7             	add    r15,r8
  6875cc:	49 b8 20 79 b0 cf f1 	movabs r8,0x31cf7cf1cfb07920
  6875d3:	7c cf 31 
  6875d6:	4d 11 c6             	adc    r14,r8
  6875d9:	41 b9 b6 77 c8 15    	mov    r9d,0x15c877b6
  6875df:	4d 89 fa             	mov    r10,r15
  6875e2:	4d 89 f0             	mov    r8,r14
  6875e5:	44 31 ca             	xor    edx,r9d
  6875e8:	4d 89 d7             	mov    r15,r10
  6875eb:	4d 89 c6             	mov    r14,r8
  6875ee:	e9 8d fd ff ff       	jmp    687380 <__cxa_finalize@plt-0xd2ba90>
  6875f3:	4d 89 f0             	mov    r8,r14
  6875f6:	4d 0f a4 f8 25       	shld   r8,r15,0x25
  6875fb:	4d 0f a4 f7 25       	shld   r15,r14,0x25
  687600:	41 b9 11 ed 8e b8    	mov    r9d,0xb88eed11
  687606:	4d 89 fa             	mov    r10,r15
  687609:	eb da                	jmp    6875e5 <__cxa_finalize@plt-0xd2b82b>
  68760b:	41 b8 30 e1 c6 36    	mov    r8d,0x36c6e130
  687611:	0f b6 54 24 04       	movzx  edx,BYTE PTR [rsp+0x4]
  687616:	48 0f af ca          	imul   rcx,rdx
  68761a:	48 f7 e2             	mul    rdx
  68761d:	48 01 ca             	add    rdx,rcx
  687620:	48 01 f8             	add    rax,rdi
  687623:	48 11 f2             	adc    rdx,rsi
  687626:	4c 89 f9             	mov    rcx,r15
  687629:	4c 09 f1             	or     rcx,r14
  68762c:	0f 84 bc 06 00 00    	je     687cee <__cxa_finalize@plt-0xd2b122>
  687632:	48 89 d1             	mov    rcx,rdx
  687635:	48 0f ba f9 3f       	btc    rcx,0x3f
  68763a:	48 09 c1             	or     rcx,rax
  68763d:	75 10                	jne    68764f <__cxa_finalize@plt-0xd2b7c1>
  68763f:	4c 89 f9             	mov    rcx,r15
  687642:	4c 21 f1             	and    rcx,r14
  687645:	48 83 f9 ff          	cmp    rcx,0xffffffffffffffff
  687649:	0f 84 ab 06 00 00    	je     687cfa <__cxa_finalize@plt-0xd2b116>
  68764f:	4c 89 ed             	mov    rbp,r13
  687652:	4d 89 e5             	mov    r13,r12
  687655:	45 89 c4             	mov    r12d,r8d
  687658:	48 89 c7             	mov    rdi,rax
  68765b:	48 89 d6             	mov    rsi,rdx
  68765e:	4c 89 fa             	mov    rdx,r15
  687661:	4c 89 f1             	mov    rcx,r14
  687664:	ff 15 f6 c9 d9 00    	call   QWORD PTR [rip+0xd9c9f6]        # 1424060 <__memmove_chk@plt+0x70670>
  68766a:	48 89 d1             	mov    rcx,rdx
  68766d:	48 85 d2             	test   rdx,rdx
  687670:	79 19                	jns    68768b <__cxa_finalize@plt-0xd2b785>
  687672:	4c 89 f2             	mov    rdx,r14
  687675:	48 c1 fa 3f          	sar    rdx,0x3f
  687679:	49 31 d6             	xor    r14,rdx
  68767c:	49 31 d7             	xor    r15,rdx
  68767f:	49 29 d7             	sub    r15,rdx
  687682:	49 19 d6             	sbb    r14,rdx
  687685:	4c 01 f8             	add    rax,r15
  687688:	4c 11 f1             	adc    rcx,r14
  68768b:	44 89 e2             	mov    edx,r12d
  68768e:	4d 89 ec             	mov    r12,r13
  687691:	49 89 ed             	mov    r13,rbp
  687694:	48 bd 55 55 55 55 55 	movabs rbp,0x5555555555555555
  68769b:	55 55 55 
  68769e:	31 d3                	xor    ebx,edx
  6876a0:	e9 c5 8a ff ff       	jmp    68016a <__cxa_finalize@plt-0xd32ca6>
  6876a5:	ba 4e 4f bc 61       	mov    edx,0x61bc4f4e
  6876aa:	45 31 c0             	xor    r8d,r8d
  6876ad:	49 ba 6d 42 a7 21 4f 	movabs r10,0x7834344f21a7426d
  6876b4:	34 34 78 
  6876b7:	49 be b0 70 e6 b8 77 	movabs r14,0x4946b077b8e670b0
  6876be:	b0 46 49 
  6876c1:	49 bf 53 c0 6a 54 0f 	movabs r15,0xf3e0080f546ac053
  6876c8:	08 e0 f3 
  6876cb:	48 be 3a bc 21 70 db 	movabs rsi,0x2c84ebdb7021bc3a
  6876d2:	eb 84 2c 
  6876d5:	48 bf a5 8a 9f 10 f4 	movabs rdi,0x56f455f4109f8aa5
  6876dc:	55 f4 56 
  6876df:	45 31 c9             	xor    r9d,r9d
  6876e2:	45 31 db             	xor    r11d,r11d
  6876e5:	81 fa 7c 5b b4 a2    	cmp    edx,0xa2b45b7c
  6876eb:	0f 84 80 00 00 00    	je     687771 <__cxa_finalize@plt-0xd2b69f>
  6876f1:	81 fa 16 b3 9a 44    	cmp    edx,0x449ab316
  6876f7:	0f 84 bc 00 00 00    	je     6877b9 <__cxa_finalize@plt-0xd2b657>
  6876fd:	81 fa 94 d3 62 55    	cmp    edx,0x5562d394
  687703:	0f 84 8e 00 00 00    	je     687797 <__cxa_finalize@plt-0xd2b679>
  687709:	81 fa 22 da 67 58    	cmp    edx,0x5867da22
  68770f:	74 29                	je     68773a <__cxa_finalize@plt-0xd2b6d6>
  687711:	81 fa 4e 4f bc 61    	cmp    edx,0x61bc4f4e
  687717:	74 43                	je     68775c <__cxa_finalize@plt-0xd2b6b4>
  687719:	81 fa 85 c4 d5 67    	cmp    edx,0x67d5c485
  68771f:	74 2d                	je     68774e <__cxa_finalize@plt-0xd2b6c2>
  687721:	81 fa c0 0b 01 72    	cmp    edx,0x72010bc0
  687727:	74 60                	je     687789 <__cxa_finalize@plt-0xd2b687>
  687729:	81 fa 7f 5d 53 ed    	cmp    edx,0xed535d7f
  68772f:	0f 85 a4 00 00 00    	jne    6877d9 <__cxa_finalize@plt-0xd2b637>
  687735:	e9 a7 00 00 00       	jmp    6877e1 <__cxa_finalize@plt-0xd2b62f>
  68773a:	4c 89 c3             	mov    rbx,r8
  68773d:	48 0f cb             	bswap  rbx
  687740:	49 0f cb             	bswap  r11
  687743:	41 b9 5d 87 34 b5    	mov    r9d,0xb534875d
  687749:	4d 89 d8             	mov    r8,r11
  68774c:	eb 36                	jmp    687784 <__cxa_finalize@plt-0xd2b68c>
  68774e:	4d 01 f0             	add    r8,r14
  687751:	4d 11 fb             	adc    r11,r15
  687754:	41 b9 45 cf d4 15    	mov    r9d,0x15d4cf45
  68775a:	eb 7d                	jmp    6877d9 <__cxa_finalize@plt-0xd2b637>
  68775c:	41 b9 cb 8b 69 06    	mov    r9d,0x6698bcb
  687762:	4d 89 d0             	mov    r8,r10
  687765:	49 bb 80 b2 72 f6 e8 	movabs r11,0xa4cdc9e8f672b280
  68776c:	c9 cd a4 
  68776f:	eb 68                	jmp    6877d9 <__cxa_finalize@plt-0xd2b637>
  687771:	4c 89 db             	mov    rbx,r11
  687774:	4c 0f a4 c3 27       	shld   rbx,r8,0x27
  687779:	4d 0f a4 d8 27       	shld   r8,r11,0x27
  68777e:	41 b9 e8 88 d6 f7    	mov    r9d,0xf7d688e8
  687784:	49 89 db             	mov    r11,rbx
  687787:	eb 50                	jmp    6877d9 <__cxa_finalize@plt-0xd2b637>
  687789:	49 01 f0             	add    r8,rsi
  68778c:	49 11 fb             	adc    r11,rdi
  68778f:	41 b9 d6 b8 9b 36    	mov    r9d,0x369bb8d6
  687795:	eb 42                	jmp    6877d9 <__cxa_finalize@plt-0xd2b637>
  687797:	49 b9 18 81 6c 4e 6f 	movabs r9,0xa2fa4e6f4e6c8118
  68779e:	4e fa a2 
  6877a1:	4d 01 c8             	add    r8,r9
  6877a4:	49 b9 e3 27 87 03 76 	movabs r9,0x166cde76038727e3
  6877ab:	de 6c 16 
  6877ae:	4d 11 cb             	adc    r11,r9
  6877b1:	41 b9 b6 09 05 0d    	mov    r9d,0xd0509b6
  6877b7:	eb 20                	jmp    6877d9 <__cxa_finalize@plt-0xd2b637>
  6877b9:	49 b9 0c 9c 0a 0c 0c 	movabs r9,0x25f9210c0c0a9c0c
  6877c0:	21 f9 25 
  6877c3:	4d 01 c8             	add    r8,r9
  6877c6:	49 b9 ca 28 56 76 11 	movabs r9,0x31c0ff11765628ca
  6877cd:	ff c0 31 
  6877d0:	4d 11 cb             	adc    r11,r9
  6877d3:	41 b9 6a e8 2e e6    	mov    r9d,0xe62ee86a
  6877d9:	44 31 ca             	xor    edx,r9d
  6877dc:	e9 04 ff ff ff       	jmp    6876e5 <__cxa_finalize@plt-0xd2b72b>
  6877e1:	4c 39 c0             	cmp    rax,r8
  6877e4:	4c 19 d9             	sbb    rcx,r11
  6877e7:	0f 8c 5a 02 00 00    	jl     687a47 <__cxa_finalize@plt-0xd2b3c9>
  6877ed:	b9 f7 26 a6 54       	mov    ecx,0x54a626f7
  6877f2:	45 31 d2             	xor    r10d,r10d
  6877f5:	48 ba ca 3c 61 01 8d 	movabs rdx,0x7339968d01613cca
  6877fc:	96 39 73 
  6877ff:	48 be ce d0 6b 12 fb 	movabs rsi,0x5fe5e5fb126bd0ce
  687806:	e5 e5 5f 
  687809:	48 bf 4f f1 1c 02 c2 	movabs rdi,0xc275a2c2021cf14f
  687810:	a2 75 c2 
  687813:	49 b8 34 d6 a3 d8 86 	movabs r8,0xeee16486d8a3d634
  68781a:	64 e1 ee 
  68781d:	45 31 db             	xor    r11d,r11d
  687820:	45 31 c9             	xor    r9d,r9d
  687823:	81 f9 dc c0 9d 93    	cmp    ecx,0x939dc0dc
  687829:	0f 84 ca 00 00 00    	je     6878f9 <__cxa_finalize@plt-0xd2b517>
  68782f:	81 f9 0d 45 ff b2    	cmp    ecx,0xb2ff450d
  687835:	0f 84 4a 01 00 00    	je     687985 <__cxa_finalize@plt-0xd2b48b>
  68783b:	81 f9 70 b8 86 c3    	cmp    ecx,0xc386b870
  687841:	74 75                	je     6878b8 <__cxa_finalize@plt-0xd2b558>
  687843:	81 f9 70 71 6a ea    	cmp    ecx,0xea6a7170
  687849:	0f 84 81 00 00 00    	je     6878d0 <__cxa_finalize@plt-0xd2b540>
  68784f:	81 f9 c5 a7 62 f1    	cmp    ecx,0xf162a7c5
  687855:	0f 84 b6 01 00 00    	je     687a11 <__cxa_finalize@plt-0xd2b3ff>
  68785b:	81 f9 67 92 1a 28    	cmp    ecx,0x281a9267
  687861:	74 3d                	je     6878a0 <__cxa_finalize@plt-0xd2b570>
  687863:	81 f9 f7 26 a6 54    	cmp    ecx,0x54a626f7
  687869:	74 7d                	je     6878e8 <__cxa_finalize@plt-0xd2b528>
  68786b:	81 f9 26 2c b3 66    	cmp    ecx,0x66b32c26
  687871:	0f 84 86 01 00 00    	je     6879fd <__cxa_finalize@plt-0xd2b413>
  687877:	81 f9 85 93 27 7e    	cmp    ecx,0x7e279385
  68787d:	0f 84 a3 01 00 00    	je     687a26 <__cxa_finalize@plt-0xd2b3ea>
  687883:	81 f9 72 8a de 7e    	cmp    ecx,0x7ede8a72
  687889:	0f 84 e5 00 00 00    	je     687974 <__cxa_finalize@plt-0xd2b49c>
  68788f:	81 f9 a7 af 58 cd    	cmp    ecx,0xcd58afa7
  687895:	0f 85 a1 01 00 00    	jne    687a3c <__cxa_finalize@plt-0xd2b3d4>
  68789b:	e9 a4 01 00 00       	jmp    687a44 <__cxa_finalize@plt-0xd2b3cc>
  6878a0:	4c 89 cb             	mov    rbx,r9
  6878a3:	4c 0f a4 d3 35       	shld   rbx,r10,0x35
  6878a8:	4d 0f a4 ca 35       	shld   r10,r9,0x35
  6878ad:	41 bb 41 be a9 4e    	mov    r11d,0x4ea9be41
  6878b3:	e9 81 01 00 00       	jmp    687a39 <__cxa_finalize@plt-0xd2b3d7>
  6878b8:	4c 89 d3             	mov    rbx,r10
  6878bb:	4c 0f a4 cb 3b       	shld   rbx,r9,0x3b
  6878c0:	4d 0f ac ca 05       	shrd   r10,r9,0x5
  6878c5:	41 bb 02 32 58 bd    	mov    r11d,0xbd583202
  6878cb:	e9 69 01 00 00       	jmp    687a39 <__cxa_finalize@plt-0xd2b3d7>
  6878d0:	4c 89 d3             	mov    rbx,r10
  6878d3:	4c 0f a4 cb 2c       	shld   rbx,r9,0x2c
  6878d8:	4d 0f ac ca 14       	shrd   r10,r9,0x14
  6878dd:	41 bb b5 d6 08 1b    	mov    r11d,0x1b08d6b5
  6878e3:	e9 51 01 00 00       	jmp    687a39 <__cxa_finalize@plt-0xd2b3d7>
  6878e8:	41 bb 72 b5 81 2a    	mov    r11d,0x2a81b572
  6878ee:	49 89 f2             	mov    r10,rsi
  6878f1:	49 89 d1             	mov    r9,rdx
  6878f4:	e9 43 01 00 00       	jmp    687a3c <__cxa_finalize@plt-0xd2b3d4>
  6878f9:	49 0f ca             	bswap  r10
  6878fc:	4d 89 d3             	mov    r11,r10
  6878ff:	49 c1 eb 04          	shr    r11,0x4
  687903:	4d 21 e3             	and    r11,r12
  687906:	4d 21 e2             	and    r10,r12
  687909:	49 c1 e2 04          	shl    r10,0x4
  68790d:	4d 09 da             	or     r10,r11
  687910:	4d 89 d3             	mov    r11,r10
  687913:	4d 21 eb             	and    r11,r13
  687916:	49 c1 ea 02          	shr    r10,0x2
  68791a:	4d 21 ea             	and    r10,r13
  68791d:	4f 8d 14 9a          	lea    r10,[r10+r11*4]
  687921:	4d 89 d3             	mov    r11,r10
  687924:	49 21 eb             	and    r11,rbp
  687927:	49 d1 ea             	shr    r10,1
  68792a:	49 21 ea             	and    r10,rbp
  68792d:	4b 8d 1c 5a          	lea    rbx,[r10+r11*2]
  687931:	49 0f c9             	bswap  r9
  687934:	4d 89 ca             	mov    r10,r9
  687937:	49 c1 ea 04          	shr    r10,0x4
  68793b:	4d 21 e2             	and    r10,r12
  68793e:	4d 21 e1             	and    r9,r12
  687941:	49 c1 e1 04          	shl    r9,0x4
  687945:	4d 09 d1             	or     r9,r10
  687948:	4d 89 ca             	mov    r10,r9
  68794b:	4d 21 ea             	and    r10,r13
  68794e:	49 c1 e9 02          	shr    r9,0x2
  687952:	4d 21 e9             	and    r9,r13
  687955:	4f 8d 0c 91          	lea    r9,[r9+r10*4]
  687959:	4d 89 ca             	mov    r10,r9
  68795c:	49 21 ea             	and    r10,rbp
  68795f:	49 d1 e9             	shr    r9,1
  687962:	49 21 e9             	and    r9,rbp
  687965:	4f 8d 14 51          	lea    r10,[r9+r10*2]
  687969:	41 bb ac 78 1b 50    	mov    r11d,0x501b78ac
  68796f:	e9 c5 00 00 00       	jmp    687a39 <__cxa_finalize@plt-0xd2b3d7>
  687974:	49 31 fa             	xor    r10,rdi
  687977:	4d 31 c1             	xor    r9,r8
  68797a:	41 bb 02 fb b4 94    	mov    r11d,0x94b4fb02
  687980:	e9 b7 00 00 00       	jmp    687a3c <__cxa_finalize@plt-0xd2b3d4>
  687985:	49 0f ca             	bswap  r10
  687988:	4d 89 d3             	mov    r11,r10
  68798b:	49 c1 eb 04          	shr    r11,0x4
  68798f:	4d 21 e3             	and    r11,r12
  687992:	4d 21 e2             	and    r10,r12
  687995:	49 c1 e2 04          	shl    r10,0x4
  687999:	4d 09 da             	or     r10,r11
  68799c:	4d 89 d3             	mov    r11,r10
  68799f:	4d 21 eb             	and    r11,r13
  6879a2:	49 c1 ea 02          	shr    r10,0x2
  6879a6:	4d 21 ea             	and    r10,r13
  6879a9:	4f 8d 14 9a          	lea    r10,[r10+r11*4]
  6879ad:	4d 89 d3             	mov    r11,r10
  6879b0:	49 21 eb             	and    r11,rbp
  6879b3:	49 d1 ea             	shr    r10,1
  6879b6:	49 21 ea             	and    r10,rbp
  6879b9:	4b 8d 1c 5a          	lea    rbx,[r10+r11*2]
  6879bd:	49 0f c9             	bswap  r9
  6879c0:	4d 89 ca             	mov    r10,r9
  6879c3:	49 c1 ea 04          	shr    r10,0x4
  6879c7:	4d 21 e2             	and    r10,r12
  6879ca:	4d 21 e1             	and    r9,r12
  6879cd:	49 c1 e1 04          	shl    r9,0x4
  6879d1:	4d 09 d1             	or     r9,r10
  6879d4:	4d 89 ca             	mov    r10,r9
  6879d7:	4d 21 ea             	and    r10,r13
  6879da:	49 c1 e9 02          	shr    r9,0x2
  6879de:	4d 21 e9             	and    r9,r13
  6879e1:	4f 8d 0c 91          	lea    r9,[r9+r10*4]
  6879e5:	4d 89 ca             	mov    r10,r9
  6879e8:	49 21 ea             	and    r10,rbp
  6879eb:	49 d1 e9             	shr    r9,1
  6879ee:	49 21 e9             	and    r9,rbp
  6879f1:	4f 8d 14 51          	lea    r10,[r9+r10*2]
  6879f5:	41 bb aa ea a7 7f    	mov    r11d,0x7fa7eaaa
  6879fb:	eb 3c                	jmp    687a39 <__cxa_finalize@plt-0xd2b3d7>
  6879fd:	4c 89 d3             	mov    rbx,r10
  687a00:	48 0f cb             	bswap  rbx
  687a03:	49 0f c9             	bswap  r9
  687a06:	41 bb fa ec 2e f5    	mov    r11d,0xf52eecfa
  687a0c:	4d 89 ca             	mov    r10,r9
  687a0f:	eb 28                	jmp    687a39 <__cxa_finalize@plt-0xd2b3d7>
  687a11:	4c 89 cb             	mov    rbx,r9
  687a14:	4c 0f a4 d3 1d       	shld   rbx,r10,0x1d
  687a19:	4d 0f a4 ca 1d       	shld   r10,r9,0x1d
  687a1e:	41 bb c8 e2 9d 43    	mov    r11d,0x439de2c8
  687a24:	eb 13                	jmp    687a39 <__cxa_finalize@plt-0xd2b3d7>
  687a26:	4c 89 cb             	mov    rbx,r9
  687a29:	4c 0f a4 d3 14       	shld   rbx,r10,0x14
  687a2e:	4d 0f a4 ca 14       	shld   r10,r9,0x14
  687a33:	41 bb e2 01 3d 56    	mov    r11d,0x563d01e2
  687a39:	49 89 d9             	mov    r9,rbx
  687a3c:	44 31 d9             	xor    ecx,r11d
  687a3f:	e9 df fd ff ff       	jmp    687823 <__cxa_finalize@plt-0xd2b5ed>
  687a44:	4c 29 d0             	sub    rax,r10
  687a47:	ba bc 75 87 ae       	mov    edx,0xae8775bc
  687a4c:	31 c9                	xor    ecx,ecx
  687a4e:	48 be 5b 76 61 92 f1 	movabs rsi,0x5eaa3bf19261765b
  687a55:	3b aa 5e 
  687a58:	48 bf b3 82 6d 3a 89 	movabs rdi,0x716ebf893a6d82b3
  687a5f:	bf 6e 71 
  687a62:	49 b8 b2 dd 03 e6 b4 	movabs r8,0xb2e6f9b4e603ddb2
  687a69:	f9 e6 b2 
  687a6c:	49 b9 57 6b ad b4 fa 	movabs r9,0xec4c83fab4ad6b57
  687a73:	83 4c ec 
  687a76:	49 ba 72 83 81 9b 77 	movabs r10,0x89fec4779b818372
  687a7d:	c4 fe 89 
  687a80:	49 bb d4 69 f1 9d 0a 	movabs r11,0x5209c80a9df169d4
  687a87:	c8 09 52 
  687a8a:	31 db                	xor    ebx,ebx
  687a8c:	81 fa cc fd 54 94    	cmp    edx,0x9454fdcc
  687a92:	0f 84 ca 00 00 00    	je     687b62 <__cxa_finalize@plt-0xd2b2ae>
  687a98:	81 fa fd 36 53 a0    	cmp    edx,0xa05336fd
  687a9e:	74 5a                	je     687afa <__cxa_finalize@plt-0xd2b316>
  687aa0:	81 fa bc 75 87 ae    	cmp    edx,0xae8775bc
  687aa6:	74 5c                	je     687b04 <__cxa_finalize@plt-0xd2b30c>
  687aa8:	81 fa 74 07 5d b0    	cmp    edx,0xb05d0774
  687aae:	0f 84 99 00 00 00    	je     687b4d <__cxa_finalize@plt-0xd2b2c3>
  687ab4:	81 fa 96 50 75 ec    	cmp    edx,0xec755096
  687aba:	74 5d                	je     687b19 <__cxa_finalize@plt-0xd2b2f7>
  687abc:	81 fa 08 80 75 f2    	cmp    edx,0xf2758008
  687ac2:	74 69                	je     687b2d <__cxa_finalize@plt-0xd2b2e3>
  687ac4:	81 fa 77 33 8a 29    	cmp    edx,0x298a3377
  687aca:	74 57                	je     687b23 <__cxa_finalize@plt-0xd2b2ed>
  687acc:	81 fa b8 8e 03 50    	cmp    edx,0x50038eb8
  687ad2:	0f 84 80 00 00 00    	je     687b58 <__cxa_finalize@plt-0xd2b2b8>
  687ad8:	81 fa 58 87 7f 5e    	cmp    edx,0x5e7f8758
  687ade:	74 2e                	je     687b0e <__cxa_finalize@plt-0xd2b302>
  687ae0:	81 fa 00 ab b5 67    	cmp    edx,0x67b5ab00
  687ae6:	74 50                	je     687b38 <__cxa_finalize@plt-0xd2b2d8>
  687ae8:	81 fa 16 d3 fd 75    	cmp    edx,0x75fdd316
  687aee:	74 53                	je     687b43 <__cxa_finalize@plt-0xd2b2cd>
  687af0:	81 fa cf e6 d1 42    	cmp    edx,0x42d1e6cf
  687af6:	75 72                	jne    687b6a <__cxa_finalize@plt-0xd2b2a6>
  687af8:	eb 77                	jmp    687b71 <__cxa_finalize@plt-0xd2b29f>
  687afa:	48 31 f1             	xor    rcx,rsi
  687afd:	bb eb e5 ae d5       	mov    ebx,0xd5aee5eb
  687b02:	eb 66                	jmp    687b6a <__cxa_finalize@plt-0xd2b2a6>
  687b04:	bb cb 46 0d 87       	mov    ebx,0x870d46cb
  687b09:	48 89 f9             	mov    rcx,rdi
  687b0c:	eb 5c                	jmp    687b6a <__cxa_finalize@plt-0xd2b2a6>
  687b0e:	48 c1 c1 28          	rol    rcx,0x28
  687b12:	bb 58 2c ca 39       	mov    ebx,0x39ca2c58
  687b17:	eb 51                	jmp    687b6a <__cxa_finalize@plt-0xd2b2a6>
  687b19:	4c 01 c1             	add    rcx,r8
  687b1c:	bb 6b 66 26 4c       	mov    ebx,0x4c26666b
  687b21:	eb 47                	jmp    687b6a <__cxa_finalize@plt-0xd2b2a6>
  687b23:	4c 31 c9             	xor    rcx,r9
  687b26:	bb 7f b3 ff db       	mov    ebx,0xdbffb37f
  687b2b:	eb 3d                	jmp    687b6a <__cxa_finalize@plt-0xd2b2a6>
  687b2d:	48 c1 c1 19          	rol    rcx,0x19
  687b31:	bb 7c 87 28 42       	mov    ebx,0x4228877c
  687b36:	eb 32                	jmp    687b6a <__cxa_finalize@plt-0xd2b2a6>
  687b38:	48 c1 c1 32          	rol    rcx,0x32
  687b3c:	bb cf 4d 64 25       	mov    ebx,0x25644dcf
  687b41:	eb 27                	jmp    687b6a <__cxa_finalize@plt-0xd2b2a6>
  687b43:	4c 01 d9             	add    rcx,r11
  687b46:	bb 4e 54 82 2b       	mov    ebx,0x2b82544e
  687b4b:	eb 1d                	jmp    687b6a <__cxa_finalize@plt-0xd2b2a6>
  687b4d:	48 c1 c1 09          	rol    rcx,0x9
  687b51:	bb cc 89 5e e0       	mov    ebx,0xe05e89cc
  687b56:	eb 12                	jmp    687b6a <__cxa_finalize@plt-0xd2b2a6>
  687b58:	4c 01 d1             	add    rcx,r10
  687b5b:	bb 74 73 57 c4       	mov    ebx,0xc4577374
  687b60:	eb 08                	jmp    687b6a <__cxa_finalize@plt-0xd2b2a6>
  687b62:	48 0f c9             	bswap  rcx
  687b65:	bb 5a ad 21 78       	mov    ebx,0x7821ad5a
  687b6a:	31 da                	xor    edx,ebx
  687b6c:	e9 1b ff ff ff       	jmp    687a8c <__cxa_finalize@plt-0xd2b384>
  687b71:	ba 53 6a c3 c5       	mov    edx,0xc5c36a53
  687b76:	45 31 d2             	xor    r10d,r10d
  687b79:	48 be 33 63 0f 1d 84 	movabs rsi,0x2897ca841d0f6333
  687b80:	ca 97 28 
  687b83:	48 bf fa 83 44 ed 77 	movabs rdi,0x52a2d377ed4483fa
  687b8a:	d3 a2 52 
  687b8d:	49 b8 ad 4e 1a 55 48 	movabs r8,0x2852c648551a4ead
  687b94:	c6 52 28 
  687b97:	49 b9 69 d9 64 70 0b 	movabs r9,0x5eb2340b7064d969
  687b9e:	34 b2 5e 
  687ba1:	45 31 db             	xor    r11d,r11d
  687ba4:	81 fa 3f bf 11 bf    	cmp    edx,0xbf11bf3f
  687baa:	0f 84 d9 00 00 00    	je     687c89 <__cxa_finalize@plt-0xd2b187>
  687bb0:	81 fa 53 6a c3 c5    	cmp    edx,0xc5c36a53
  687bb6:	0f 84 e4 00 00 00    	je     687ca0 <__cxa_finalize@plt-0xd2b170>
  687bbc:	81 fa 94 19 82 d3    	cmp    edx,0xd3821994
  687bc2:	74 72                	je     687c36 <__cxa_finalize@plt-0xd2b1da>
  687bc4:	4c 89 d3             	mov    rbx,r10
  687bc7:	48 0f cb             	bswap  rbx
  687bca:	81 fa 29 08 34 e4    	cmp    edx,0xe4340829
  687bd0:	0f 84 a0 00 00 00    	je     687c76 <__cxa_finalize@plt-0xd2b19a>
  687bd6:	81 fa b4 7b f2 f1    	cmp    edx,0xf1f27bb4
  687bdc:	0f 84 d1 00 00 00    	je     687cb3 <__cxa_finalize@plt-0xd2b15d>
  687be2:	81 fa 01 5d bd 02    	cmp    edx,0x2bd5d01
  687be8:	74 3d                	je     687c27 <__cxa_finalize@plt-0xd2b1e9>
  687bea:	81 fa 3f c7 00 1a    	cmp    edx,0x1a00c73f
  687bf0:	0f 84 88 00 00 00    	je     687c7e <__cxa_finalize@plt-0xd2b192>
  687bf6:	81 fa 46 3e d4 23    	cmp    edx,0x23d43e46
  687bfc:	0f 84 a9 00 00 00    	je     687cab <__cxa_finalize@plt-0xd2b165>
  687c02:	81 fa 67 e9 56 5d    	cmp    edx,0x5d56e967
  687c08:	0f 84 b0 00 00 00    	je     687cbe <__cxa_finalize@plt-0xd2b152>
  687c0e:	81 fa 0c d1 88 60    	cmp    edx,0x6088d10c
  687c14:	74 7e                	je     687c94 <__cxa_finalize@plt-0xd2b17c>
  687c16:	81 fa dc bd c9 fb    	cmp    edx,0xfbc9bddc
  687c1c:	0f 85 a6 00 00 00    	jne    687cc8 <__cxa_finalize@plt-0xd2b148>
  687c22:	e9 af 00 00 00       	jmp    687cd6 <__cxa_finalize@plt-0xd2b13a>
  687c27:	49 c1 c2 0a          	rol    r10,0xa
  687c2b:	41 bb 28 55 89 e6    	mov    r11d,0xe6895528
  687c31:	e9 92 00 00 00       	jmp    687cc8 <__cxa_finalize@plt-0xd2b148>
  687c36:	49 0f ca             	bswap  r10
  687c39:	4d 89 d3             	mov    r11,r10
  687c3c:	49 c1 eb 04          	shr    r11,0x4
  687c40:	4d 21 e3             	and    r11,r12
  687c43:	4d 21 e2             	and    r10,r12
  687c46:	49 c1 e2 04          	shl    r10,0x4
  687c4a:	4d 09 da             	or     r10,r11
  687c4d:	4d 89 d3             	mov    r11,r10
  687c50:	4d 21 eb             	and    r11,r13
  687c53:	49 c1 ea 02          	shr    r10,0x2
  687c57:	4d 21 ea             	and    r10,r13
  687c5a:	4f 8d 14 9a          	lea    r10,[r10+r11*4]
  687c5e:	4d 89 d3             	mov    r11,r10
  687c61:	49 21 eb             	and    r11,rbp
  687c64:	49 d1 ea             	shr    r10,1
  687c67:	49 21 ea             	and    r10,rbp
  687c6a:	4b 8d 1c 5a          	lea    rbx,[r10+r11*2]
  687c6e:	41 bb d2 27 56 f0    	mov    r11d,0xf05627d2
  687c74:	eb 55                	jmp    687ccb <__cxa_finalize@plt-0xd2b145>
  687c76:	41 bb bd 11 b6 37    	mov    r11d,0x37b611bd
  687c7c:	eb 4d                	jmp    687ccb <__cxa_finalize@plt-0xd2b145>
  687c7e:	4d 31 ca             	xor    r10,r9
  687c81:	41 bb 00 78 11 a5    	mov    r11d,0xa5117800
  687c87:	eb 3f                	jmp    687cc8 <__cxa_finalize@plt-0xd2b148>
  687c89:	49 01 f2             	add    r10,rsi
  687c8c:	41 bb e3 02 d8 44    	mov    r11d,0x44d802e3
  687c92:	eb 34                	jmp    687cc8 <__cxa_finalize@plt-0xd2b148>
  687c94:	49 c1 c2 02          	rol    r10,0x2
  687c98:	41 bb b8 aa 7a 91    	mov    r11d,0x917aaab8
  687c9e:	eb 28                	jmp    687cc8 <__cxa_finalize@plt-0xd2b148>
  687ca0:	41 bb 34 83 95 98    	mov    r11d,0x98958334
  687ca6:	48 89 fb             	mov    rbx,rdi
  687ca9:	eb 20                	jmp    687ccb <__cxa_finalize@plt-0xd2b145>
  687cab:	41 bb 79 f9 d4 39    	mov    r11d,0x39d4f979
  687cb1:	eb 18                	jmp    687ccb <__cxa_finalize@plt-0xd2b145>
  687cb3:	4d 01 c2             	add    r10,r8
  687cb6:	41 bb b5 26 4f f3    	mov    r11d,0xf34f26b5
  687cbc:	eb 0a                	jmp    687cc8 <__cxa_finalize@plt-0xd2b148>
  687cbe:	49 c1 c2 15          	rol    r10,0x15
  687cc2:	41 bb 6b 38 de 3d    	mov    r11d,0x3dde386b
  687cc8:	4c 89 d3             	mov    rbx,r10
  687ccb:	44 31 da             	xor    edx,r11d
  687cce:	49 89 da             	mov    r10,rbx
  687cd1:	e9 ce fe ff ff       	jmp    687ba4 <__cxa_finalize@plt-0xd2b26c>
  687cd6:	48 21 c1             	and    rcx,rax
  687cd9:	4c 39 d1             	cmp    rcx,r10
  687cdc:	0f 94 c2             	sete   dl
  687cdf:	48 83 c4 08          	add    rsp,0x8
  687ce3:	5b                   	pop    rbx
  687ce4:	41 5c                	pop    r12
  687ce6:	41 5d                	pop    r13
  687ce8:	41 5e                	pop    r14
  687cea:	41 5f                	pop    r15
  687cec:	5d                   	pop    rbp
  687ced:	c3                   	ret
  687cee:	48 8d 3d 2b f5 d3 00 	lea    rdi,[rip+0xd3f52b]        # 13c7220 <__memmove_chk@plt+0x13830>
  687cf5:	e8 26 29 f5 ff       	call   5da620 <__cxa_finalize@plt-0xdd87f0>
  687cfa:	e8 41 29 f5 ff       	call   5da640 <__cxa_finalize@plt-0xdd87d0>
  687cff:	66 0f 28 c8          	movapd xmm1,xmm0
  687d03:	66 0f 57 c0          	xorpd  xmm0,xmm0
  687d07:	48 39 f7             	cmp    rdi,rsi
  687d0a:	73 43                	jae    687d4f <__cxa_finalize@plt-0xd2b0c1>
  687d0c:	41 56                	push   r14
  687d0e:	53                   	push   rbx
  687d0f:	48 83 ec 18          	sub    rsp,0x18
  687d13:	48 89 f3             	mov    rbx,rsi
  687d16:	49 89 fe             	mov    r14,rdi
  687d19:	66 0f 28 c1          	movapd xmm0,xmm1
  687d1d:	f2 0f 11 4c 24 08    	movsd  QWORD PTR [rsp+0x8],xmm1
  687d23:	e8 58 00 00 00       	call   687d80 <__cxa_finalize@plt-0xd2b090>
  687d28:	f2 0f 11 44 24 10    	movsd  QWORD PTR [rsp+0x10],xmm0
  687d2e:	49 ff c6             	inc    r14
  687d31:	f2 0f 10 44 24 08    	movsd  xmm0,QWORD PTR [rsp+0x8]
  687d37:	4c 89 f7             	mov    rdi,r14
  687d3a:	48 89 de             	mov    rsi,rbx
  687d3d:	e8 bd ff ff ff       	call   687cff <__cxa_finalize@plt-0xd2b111>
  687d42:	f2 0f 58 44 24 10    	addsd  xmm0,QWORD PTR [rsp+0x10]
  687d48:	48 83 c4 18          	add    rsp,0x18
  687d4c:	5b                   	pop    rbx
  687d4d:	41 5e                	pop    r14
  687d4f:	c3                   	ret
  687d50:	55                   	push   rbp
  687d51:	41 56                	push   r14
  687d53:	53                   	push   rbx
  687d54:	89 f5                	mov    ebp,esi
  687d56:	48 89 fb             	mov    rbx,rdi
  687d59:	4c 8b 77 10          	mov    r14,QWORD PTR [rdi+0x10]
  687d5d:	4c 3b 37             	cmp    r14,QWORD PTR [rdi]
  687d60:	74 14                	je     687d76 <__cxa_finalize@plt-0xd2b09a>
  687d62:	48 8b 43 08          	mov    rax,QWORD PTR [rbx+0x8]
  687d66:	42 88 2c 30          	mov    BYTE PTR [rax+r14*1],bpl
  687d6a:	49 ff c6             	inc    r14
  687d6d:	4c 89 73 10          	mov    QWORD PTR [rbx+0x10],r14
  687d71:	5b                   	pop    rbx
  687d72:	41 5e                	pop    r14
  687d74:	5d                   	pop    rbp
  687d75:	c3                   	ret
  687d76:	48 89 df             	mov    rdi,rbx
  687d79:	e8 12 63 f4 ff       	call   5ce090 <__cxa_finalize@plt-0xde4d80>
  687d7e:	eb e2                	jmp    687d62 <__cxa_finalize@plt-0xd2b0ae>
  687d80:	66 0f 28 c8          	movapd xmm1,xmm0
  687d84:	48 85 ff             	test   rdi,rdi
  687d87:	74 75                	je     687dfe <__cxa_finalize@plt-0xd2b012>
  687d89:	48 83 ec 28          	sub    rsp,0x28
  687d8d:	66 48 0f 6e c7       	movq   xmm0,rdi
  687d92:	66 0f d4 c0          	paddq  xmm0,xmm0
  687d96:	66 0f 62 05 52 dc a7 	punpckldq xmm0,XMMWORD PTR [rip+0xffffffffffa7dc52]        # 1059f0 <__cxa_finalize@plt-0x12ad420>
  687d9d:	ff 
  687d9e:	66 0f 5c 05 9a d6 a7 	subpd  xmm0,XMMWORD PTR [rip+0xffffffffffa7d69a]        # 105440 <__cxa_finalize@plt-0x12ad9d0>
  687da5:	ff 
  687da6:	66 0f 28 d0          	movapd xmm2,xmm0
  687daa:	66 0f 15 d0          	unpckhpd xmm2,xmm0
  687dae:	f2 0f 58 d0          	addsd  xmm2,xmm0
  687db2:	66 0f 29 54 24 10    	movapd XMMWORD PTR [rsp+0x10],xmm2
  687db8:	48 ff cf             	dec    rdi
  687dbb:	66 0f 28 c1          	movapd xmm0,xmm1
  687dbf:	f2 0f 11 4c 24 08    	movsd  QWORD PTR [rsp+0x8],xmm1
  687dc5:	e8 b6 ff ff ff       	call   687d80 <__cxa_finalize@plt-0xd2b090>
  687dca:	f2 0f 10 4c 24 08    	movsd  xmm1,QWORD PTR [rsp+0x8]
  687dd0:	66 0f 57 05 98 f3 a7 	xorpd  xmm0,XMMWORD PTR [rip+0xffffffffffa7f398]        # 107170 <__cxa_finalize@plt-0x12abca0>
  687dd7:	ff 
  687dd8:	f2 0f 59 c9          	mulsd  xmm1,xmm1
  687ddc:	f2 0f 59 c8          	mulsd  xmm1,xmm0
  687de0:	f2 0f 10 05 f0 01 a8 	movsd  xmm0,QWORD PTR [rip+0xffffffffffa801f0]        # 107fd8 <__cxa_finalize@plt-0x12aae38>
  687de7:	ff 
  687de8:	66 0f 28 54 24 10    	movapd xmm2,XMMWORD PTR [rsp+0x10]
  687dee:	f2 0f 58 c2          	addsd  xmm0,xmm2
  687df2:	f2 0f 59 c2          	mulsd  xmm0,xmm2
  687df6:	f2 0f 5e c8          	divsd  xmm1,xmm0
  687dfa:	48 83 c4 28          	add    rsp,0x28
  687dfe:	66 0f 28 c1          	movapd xmm0,xmm1
  687e02:	c3                   	ret
