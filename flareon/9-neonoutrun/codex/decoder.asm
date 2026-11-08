
artifacts/neon_outrun:     file format elf64-x86-64


Disassembly of section .text:

0000000000688c00 <.text+0x1c6140>:
  688c00:	eb 21                	jmp    688c23 <__cxa_finalize@plt-0xd2a1ed>
  688c02:	40 80 e7 3f          	and    dil,0x3f
  688c06:	40 80 cf 80          	or     dil,0x80
  688c0a:	c1 ed 12             	shr    ebp,0x12
  688c0d:	40 80 cd f0          	or     bpl,0xf0
  688c11:	40 88 2c 08          	mov    BYTE PTR [rax+rcx*1],bpl
  688c15:	40 88 7c 08 01       	mov    BYTE PTR [rax+rcx*1+0x1],dil
  688c1a:	40 88 74 08 02       	mov    BYTE PTR [rax+rcx*1+0x2],sil
  688c1f:	88 54 08 03          	mov    BYTE PTR [rax+rcx*1+0x3],dl
  688c23:	4d 01 fe             	add    r14,r15
  688c26:	4c 89 73 10          	mov    QWORD PTR [rbx+0x10],r14
  688c2a:	31 c0                	xor    eax,eax
  688c2c:	48 83 c4 08          	add    rsp,0x8
  688c30:	5b                   	pop    rbx
  688c31:	41 5e                	pop    r14
  688c33:	41 5f                	pop    r15
  688c35:	5d                   	pop    rbp
  688c36:	c3                   	ret
  688c37:	41 56                	push   r14
  688c39:	53                   	push   rbx
  688c3a:	50                   	push   rax
  688c3b:	48 89 f3             	mov    rbx,rsi
  688c3e:	49 89 fe             	mov    r14,rdi
  688c41:	48 89 f7             	mov    rdi,rsi
  688c44:	4c 89 f6             	mov    rsi,r14
  688c47:	e8 58 73 f4 ff       	call   5cffa4 <__cxa_finalize@plt-0xde2e6c>
  688c4c:	48 85 c0             	test   rax,rax
  688c4f:	74 08                	je     688c59 <__cxa_finalize@plt-0xd2a1b7>
  688c51:	48 83 c4 08          	add    rsp,0x8
  688c55:	5b                   	pop    rbx
  688c56:	41 5e                	pop    r14
  688c58:	c3                   	ret
  688c59:	4c 89 f7             	mov    rdi,r14
  688c5c:	48 89 de             	mov    rsi,rbx
  688c5f:	e8 4d 38 f4 ff       	call   5cc4b1 <__cxa_finalize@plt-0xde695f>
  688c64:	55                   	push   rbp
  688c65:	41 57                	push   r15
  688c67:	41 56                	push   r14
  688c69:	41 55                	push   r13
  688c6b:	41 54                	push   r12
  688c6d:	53                   	push   rbx
  688c6e:	49 89 e3             	mov    r11,rsp
  688c71:	49 81 eb 00 d0 00 00 	sub    r11,0xd000
  688c78:	48 81 ec 00 10 00 00 	sub    rsp,0x1000
  688c7f:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
  688c86:	00 
  688c87:	4c 39 dc             	cmp    rsp,r11
  688c8a:	75 ec                	jne    688c78 <__cxa_finalize@plt-0xd2a198>
  688c8c:	48 81 ec 48 03 00 00 	sub    rsp,0x348
  688c93:	48 89 f3             	mov    rbx,rsi
  688c96:	48 89 bc 24 60 01 00 	mov    QWORD PTR [rsp+0x160],rdi
  688c9d:	00 
  688c9e:	8b 05 9c f8 d9 00    	mov    eax,DWORD PTR [rip+0xd9f89c]        # 1428540 <__memmove_chk@plt+0x74b50>
  688ca4:	85 c0                	test   eax,eax
  688ca6:	0f 85 0d 3d 00 00    	jne    68c9b9 <__cxa_finalize@plt-0xd26457>
  688cac:	ff 15 be b3 d9 00    	call   QWORD PTR [rip+0xd9b3be]        # 1424070 <__memmove_chk@plt+0x70680>
  688cb2:	48 3d c9 00 00 00    	cmp    rax,0xc9
  688cb8:	0f 83 32 3d 00 00    	jae    68c9f0 <__cxa_finalize@plt-0xd26420>
  688cbe:	4c 8d b4 24 c8 01 00 	lea    r14,[rsp+0x1c8]
  688cc5:	00 
  688cc6:	4c 89 f7             	mov    rdi,r14
  688cc9:	ff 15 a9 b3 d9 00    	call   QWORD PTR [rip+0xd9b3a9]        # 1424078 <__memmove_chk@plt+0x70688>
  688ccf:	6a 06                	push   0x6
  688cd1:	58                   	pop    rax
  688cd2:	49 89 46 b8          	mov    QWORD PTR [r14-0x48],rax
  688cd6:	49 89 46 d0          	mov    QWORD PTR [r14-0x30],rax
  688cda:	49 89 46 e8          	mov    QWORD PTR [r14-0x18],rax
  688cde:	e8 e8 f0 f8 ff       	call   617dcb <__cxa_finalize@plt-0xd9b045>
  688ce3:	4c 8d a4 24 40 2a 00 	lea    r12,[rsp+0x2a40]
  688cea:	00 
  688ceb:	4c 89 e7             	mov    rdi,r12
  688cee:	e8 03 ef f8 ff       	call   617bf6 <__cxa_finalize@plt-0xd9b21a>
  688cf3:	41 83 3c 24 01       	cmp    DWORD PTR [r12],0x1
  688cf8:	0f 84 04 3d 00 00    	je     68ca02 <__cxa_finalize@plt-0xd2640e>
  688cfe:	48 8b bc 24 48 2a 00 	mov    rdi,QWORD PTR [rsp+0x2a48]
  688d05:	00 
  688d06:	83 7f 08 02          	cmp    DWORD PTR [rdi+0x8],0x2
  688d0a:	0f 85 26 3d 00 00    	jne    68ca36 <__cxa_finalize@plt-0xd263da>
  688d10:	0f b6 b4 24 50 2a 00 	movzx  esi,BYTE PTR [rsp+0x2a50]
  688d17:	00 
  688d18:	e8 6a d3 e8 ff       	call   516087 <__cxa_finalize@plt-0xe9cd89>
  688d1d:	48 8d bc 24 28 02 00 	lea    rdi,[rsp+0x228]
  688d24:	00 
  688d25:	ff 15 55 b3 d9 00    	call   QWORD PTR [rip+0xd9b355]        # 1424080 <__memmove_chk@plt+0x70690>
  688d2b:	48 85 c0             	test   rax,rax
  688d2e:	48 89 9c 24 d0 00 00 	mov    QWORD PTR [rsp+0xd0],rbx
  688d35:	00 
  688d36:	75 65                	jne    688d9d <__cxa_finalize@plt-0xd2a073>
  688d38:	48 8d bc 24 40 2a 00 	lea    rdi,[rsp+0x2a40]
  688d3f:	00 
  688d40:	48 8d b4 24 80 01 00 	lea    rsi,[rsp+0x180]
  688d47:	00 
  688d48:	b9 10 01 00 00       	mov    ecx,0x110
  688d4d:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
  688d4f:	ff 15 33 b3 d9 00    	call   QWORD PTR [rip+0xd9b333]        # 1424088 <__memmove_chk@plt+0x70698>
  688d55:	48 85 c0             	test   rax,rax
  688d58:	0f 84 b7 3e 00 00    	je     68cc15 <__cxa_finalize@plt-0xd261fb>
  688d5e:	48 89 c7             	mov    rdi,rax
  688d61:	ff 15 29 b3 d9 00    	call   QWORD PTR [rip+0xd9b329]        # 1424090 <__memmove_chk@plt+0x706a0>
  688d67:	49 89 c4             	mov    r12,rax
  688d6a:	49 89 d5             	mov    r13,rdx
  688d6d:	48 8d ac 24 e8 2a 00 	lea    rbp,[rsp+0x2ae8]
  688d74:	00 
  688d75:	48 89 ef             	mov    rdi,rbp
  688d78:	ff 15 1a b3 d9 00    	call   QWORD PTR [rip+0xd9b31a]        # 1424098 <__memmove_chk@plt+0x706a8>
  688d7e:	4c 89 65 00          	mov    QWORD PTR [rbp+0x0],r12
  688d82:	4c 89 6d 08          	mov    QWORD PTR [rbp+0x8],r13
  688d86:	48 8d bc 24 80 01 00 	lea    rdi,[rsp+0x180]
  688d8d:	00 
  688d8e:	48 8d b4 24 40 2a 00 	lea    rsi,[rsp+0x2a40]
  688d95:	00 
  688d96:	b9 10 01 00 00       	mov    ecx,0x110
  688d9b:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
  688d9d:	4c 8d ac 24 40 2a 00 	lea    r13,[rsp+0x2a40]
  688da4:	00 
  688da5:	b9 c8 00 00 00       	mov    ecx,0xc8
  688daa:	4c 89 ef             	mov    rdi,r13
  688dad:	4c 89 f6             	mov    rsi,r14
  688db0:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
  688db2:	6a 48                	push   0x48
  688db4:	5d                   	pop    rbp
  688db5:	48 89 ef             	mov    rdi,rbp
  688db8:	e8 ad f1 f8 ff       	call   617f6a <__cxa_finalize@plt-0xd9aea6>
  688dbd:	49 89 c4             	mov    r12,rax
  688dc0:	4c 8d b4 24 80 01 00 	lea    r14,[rsp+0x180]
  688dc7:	00 
  688dc8:	48 89 e9             	mov    rcx,rbp
  688dcb:	48 89 c7             	mov    rdi,rax
  688dce:	4c 89 f6             	mov    rsi,r14
  688dd1:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
  688dd3:	4c 89 ef             	mov    rdi,r13
  688dd6:	ff 15 c4 b2 d9 00    	call   QWORD PTR [rip+0xd9b2c4]        # 14240a0 <__memmove_chk@plt+0x706b0>
  688ddc:	48 85 c0             	test   rax,rax
  688ddf:	0f 84 67 3c 00 00    	je     68ca4c <__cxa_finalize@plt-0xd263c4>
  688de5:	49 89 c7             	mov    r15,rax
  688de8:	48 89 c7             	mov    rdi,rax
  688deb:	e8 52 f2 f8 ff       	call   618042 <__cxa_finalize@plt-0xd9adce>
  688df0:	66 c7 40 68 01 00    	mov    WORD PTR [rax+0x68],0x1
  688df6:	4c 89 ff             	mov    rdi,r15
  688df9:	48 89 c6             	mov    rsi,rax
  688dfc:	e8 dd ed f8 ff       	call   617bde <__cxa_finalize@plt-0xd9b232>
  688e01:	6a 50                	push   0x50
  688e03:	5f                   	pop    rdi
  688e04:	e8 61 f1 f8 ff       	call   617f6a <__cxa_finalize@plt-0xd9aea6>
  688e09:	49 89 c5             	mov    r13,rax
  688e0c:	6a 01                	push   0x1
  688e0e:	58                   	pop    rax
  688e0f:	49 89 45 00          	mov    QWORD PTR [r13+0x0],rax
  688e13:	49 89 45 08          	mov    QWORD PTR [r13+0x8],rax
  688e17:	4d 89 65 10          	mov    QWORD PTR [r13+0x10],r12
  688e1b:	48 8d 05 1e af d3 00 	lea    rax,[rip+0xd3af1e]        # 13c3d40 <__memmove_chk@plt+0x10350>
  688e22:	49 89 45 18          	mov    QWORD PTR [r13+0x18],rax
  688e26:	0f 10 05 3b 17 d4 00 	movups xmm0,XMMWORD PTR [rip+0xd4173b]        # 13ca568 <__memmove_chk@plt+0x16b78>
  688e2d:	41 0f 11 45 20       	movups XMMWORD PTR [r13+0x20],xmm0
  688e32:	0f 10 05 3f 17 d4 00 	movups xmm0,XMMWORD PTR [rip+0xd4173f]        # 13ca578 <__memmove_chk@plt+0x16b88>
  688e39:	41 0f 11 45 30       	movups XMMWORD PTR [r13+0x30],xmm0
  688e3e:	4d 89 7d 40          	mov    QWORD PTR [r13+0x40],r15
  688e42:	49 83 65 48 00       	and    QWORD PTR [r13+0x48],0x0
  688e47:	4c 89 ff             	mov    rdi,r15
  688e4a:	31 f6                	xor    esi,esi
  688e4c:	ff 15 ae ac d9 00    	call   QWORD PTR [rip+0xd9acae]        # 1423b00 <__memmove_chk@plt+0x70110>
  688e52:	48 85 c0             	test   rax,rax
  688e55:	0f 85 fd 3b 00 00    	jne    68ca58 <__cxa_finalize@plt-0xd263b8>
  688e5b:	49 83 c5 10          	add    r13,0x10
  688e5f:	4c 89 ff             	mov    rdi,r15
  688e62:	31 f6                	xor    esi,esi
  688e64:	4c 89 ea             	mov    rdx,r13
  688e67:	ff 15 8b ac d9 00    	call   QWORD PTR [rip+0xd9ac8b]        # 1423af8 <__memmove_chk@plt+0x70108>
  688e6d:	4c 89 ff             	mov    rdi,r15
  688e70:	ff 15 32 b2 d9 00    	call   QWORD PTR [rip+0xd9b232]        # 14240a8 <__memmove_chk@plt+0x706b8>
  688e76:	48 8d bc 24 a0 2a 00 	lea    rdi,[rsp+0x2aa0]
  688e7d:	00 
  688e7e:	ff 15 14 b2 d9 00    	call   QWORD PTR [rip+0xd9b214]        # 1424098 <__memmove_chk@plt+0x706a8>
  688e84:	4c 89 ff             	mov    rdi,r15
  688e87:	e8 cb ef f8 ff       	call   617e57 <__cxa_finalize@plt-0xd9afb9>
  688e8c:	48 89 c7             	mov    rdi,rax
  688e8f:	e8 d4 f1 f8 ff       	call   618068 <__cxa_finalize@plt-0xd9ada8>
  688e94:	49 89 c4             	mov    r12,rax
  688e97:	48 89 c7             	mov    rdi,rax
  688e9a:	e8 b8 eb f8 ff       	call   617a57 <__cxa_finalize@plt-0xd9b3b9>
  688e9f:	49 8b 7c 24 38       	mov    rdi,QWORD PTR [r12+0x38]
  688ea4:	31 f6                	xor    esi,esi
  688ea6:	31 d2                	xor    edx,edx
  688ea8:	ff 15 02 b2 d9 00    	call   QWORD PTR [rip+0xd9b202]        # 14240b0 <__memmove_chk@plt+0x706c0>
  688eae:	48 85 c0             	test   rax,rax
  688eb1:	0f 84 b6 3b 00 00    	je     68ca6d <__cxa_finalize@plt-0xd263a3>
  688eb7:	49 89 c5             	mov    r13,rax
  688eba:	4c 89 e7             	mov    rdi,r12
  688ebd:	e8 95 eb f8 ff       	call   617a57 <__cxa_finalize@plt-0xd9b3b9>
  688ec2:	49 8b 5c 24 38       	mov    rbx,QWORD PTR [r12+0x38]
  688ec7:	4c 89 ef             	mov    rdi,r13
  688eca:	ff 15 48 ac d9 00    	call   QWORD PTR [rip+0xd9ac48]        # 1423b18 <__memmove_chk@plt+0x70128>
  688ed0:	48 39 c3             	cmp    rbx,rax
  688ed3:	0f 85 a0 3b 00 00    	jne    68ca79 <__cxa_finalize@plt-0xd26397>
  688ed9:	4c 89 bc 24 48 01 00 	mov    QWORD PTR [rsp+0x148],r15
  688ee0:	00 
  688ee1:	4c 89 a4 24 68 01 00 	mov    QWORD PTR [rsp+0x168],r12
  688ee8:	00 
  688ee9:	4c 89 e7             	mov    rdi,r12
  688eec:	4c 89 ee             	mov    rsi,r13
  688eef:	e8 05 f2 f8 ff       	call   6180f9 <__cxa_finalize@plt-0xd9ad17>
  688ef4:	4c 89 ac 24 28 01 00 	mov    QWORD PTR [rsp+0x128],r13
  688efb:	00 
  688efc:	4c 89 ef             	mov    rdi,r13
  688eff:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
  688f04:	48 89 c6             	mov    rsi,rax
  688f07:	e8 a3 f4 f8 ff       	call   6183af <__cxa_finalize@plt-0xd9aa61>
  688f0c:	48 89 44 24 10       	mov    QWORD PTR [rsp+0x10],rax
  688f11:	6a 01                	push   0x1
  688f13:	41 5e                	pop    r14
  688f15:	4c 89 f7             	mov    rdi,r14
  688f18:	6a 06                	push   0x6
  688f1a:	5b                   	pop    rbx
  688f1b:	48 89 de             	mov    rsi,rbx
  688f1e:	e8 14 fd ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  688f23:	c7 00 aa a1 49 53    	mov    DWORD PTR [rax],0x5349a1aa
  688f29:	48 89 04 24          	mov    QWORD PTR [rsp],rax
  688f2d:	66 c7 40 04 39 0d    	mov    WORD PTR [rax+0x4],0xd39
  688f33:	4c 89 f7             	mov    rdi,r14
  688f36:	48 89 de             	mov    rsi,rbx
  688f39:	e8 f9 fc ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  688f3e:	49 89 c5             	mov    r13,rax
  688f41:	c7 00 f9 d5 3b 3a    	mov    DWORD PTR [rax],0x3a3bd5f9
  688f47:	66 c7 40 04 57 6a    	mov    WORD PTR [rax+0x4],0x6a57
  688f4d:	48 89 9c 24 90 00 00 	mov    QWORD PTR [rsp+0x90],rbx
  688f54:	00 
  688f55:	48 89 84 24 98 00 00 	mov    QWORD PTR [rsp+0x98],rax
  688f5c:	00 
  688f5d:	48 89 9c 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],rbx
  688f64:	00 
  688f65:	45 31 f6             	xor    r14d,r14d
  688f68:	48 8d 2d e9 e3 d3 00 	lea    rbp,[rip+0xd3e3e9]        # 13c7358 <__memmove_chk@plt+0x13968>
  688f6f:	6a 06                	push   0x6
  688f71:	41 5c                	pop    r12
  688f73:	49 83 fe 06          	cmp    r14,0x6
  688f77:	74 32                	je     688fab <__cxa_finalize@plt-0xd29e65>
  688f79:	49 8d 5e 01          	lea    rbx,[r14+0x1]
  688f7d:	48 8b 3c 24          	mov    rdi,QWORD PTR [rsp]
  688f81:	4c 89 e6             	mov    rsi,r12
  688f84:	4c 89 f2             	mov    rdx,r14
  688f87:	48 89 e9             	mov    rcx,rbp
  688f8a:	e8 a5 3e 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  688f8f:	44 8a 38             	mov    r15b,BYTE PTR [rax]
  688f92:	4c 89 ef             	mov    rdi,r13
  688f95:	4c 89 e6             	mov    rsi,r12
  688f98:	4c 89 f2             	mov    rdx,r14
  688f9b:	48 89 e9             	mov    rcx,rbp
  688f9e:	e8 91 3e 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  688fa3:	44 30 38             	xor    BYTE PTR [rax],r15b
  688fa6:	49 89 de             	mov    r14,rbx
  688fa9:	eb c8                	jmp    688f73 <__cxa_finalize@plt-0xd29e9d>
  688fab:	4c 8d b4 24 80 01 00 	lea    r14,[rsp+0x180]
  688fb2:	00 
  688fb3:	48 8d b4 24 90 00 00 	lea    rsi,[rsp+0x90]
  688fba:	00 
  688fbb:	4c 89 f7             	mov    rdi,r14
  688fbe:	e8 6e 9c e3 ff       	call   4c2c31 <__cxa_finalize@plt-0xef01df>
  688fc3:	31 c0                	xor    eax,eax
  688fc5:	49 3b 06             	cmp    rax,QWORD PTR [r14]
  688fc8:	0f 81 d6 3a 00 00    	jno    68caa4 <__cxa_finalize@plt-0xd2636c>
  688fce:	4c 8b bc 24 88 01 00 	mov    r15,QWORD PTR [rsp+0x188]
  688fd5:	00 
  688fd6:	4c 8b ac 24 90 01 00 	mov    r13,QWORD PTR [rsp+0x190]
  688fdd:	00 
  688fde:	4c 8b b4 24 98 01 00 	mov    r14,QWORD PTR [rsp+0x198]
  688fe5:	00 
  688fe6:	6a 06                	push   0x6
  688fe8:	5f                   	pop    rdi
  688fe9:	48 8b 34 24          	mov    rsi,QWORD PTR [rsp]
  688fed:	e8 62 8b f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  688ff2:	48 8b 5c 24 70       	mov    rbx,QWORD PTR [rsp+0x70]
  688ff7:	48 89 df             	mov    rdi,rbx
  688ffa:	4c 89 ee             	mov    rsi,r13
  688ffd:	4c 89 f2             	mov    rdx,r14
  689000:	e8 48 f3 f8 ff       	call   61834d <__cxa_finalize@plt-0xd9aac3>
  689005:	49 89 c6             	mov    r14,rax
  689008:	4c 89 ff             	mov    rdi,r15
  68900b:	4c 89 ee             	mov    rsi,r13
  68900e:	e8 41 8b f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  689013:	4d 85 f6             	test   r14,r14
  689016:	0f 84 63 03 00 00    	je     68937f <__cxa_finalize@plt-0xd29a91>
  68901c:	48 8b 7c 24 10       	mov    rdi,QWORD PTR [rsp+0x10]
  689021:	48 89 de             	mov    rsi,rbx
  689024:	4c 89 f2             	mov    rdx,r14
  689027:	e8 59 f2 f8 ff       	call   618285 <__cxa_finalize@plt-0xd9ab8b>
  68902c:	48 85 c0             	test   rax,rax
  68902f:	0f 84 4a 03 00 00    	je     68937f <__cxa_finalize@plt-0xd29a91>
  689035:	48 89 c3             	mov    rbx,rax
  689038:	48 89 c7             	mov    rdi,rax
  68903b:	ff 15 77 b0 d9 00    	call   QWORD PTR [rip+0xd9b077]        # 14240b8 <__memmove_chk@plt+0x706c8>
  689041:	84 c0                	test   al,al
  689043:	0f 84 36 03 00 00    	je     68937f <__cxa_finalize@plt-0xd29a91>
  689049:	48 89 5c 24 08       	mov    QWORD PTR [rsp+0x8],rbx
  68904e:	6a 01                	push   0x1
  689050:	41 5e                	pop    r14
  689052:	4c 89 f7             	mov    rdi,r14
  689055:	6a 09                	push   0x9
  689057:	5b                   	pop    rbx
  689058:	48 89 de             	mov    rsi,rbx
  68905b:	e8 d7 fb ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  689060:	48 b9 ea ca f6 48 fc 	movabs rcx,0xd2102cfc48f6caea
  689067:	2c 10 d2 
  68906a:	48 89 08             	mov    QWORD PTR [rax],rcx
  68906d:	48 89 04 24          	mov    QWORD PTR [rsp],rax
  689071:	c6 40 08 98          	mov    BYTE PTR [rax+0x8],0x98
  689075:	4c 89 f7             	mov    rdi,r14
  689078:	48 89 de             	mov    rsi,rbx
  68907b:	e8 b7 fb ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  689080:	48 89 c5             	mov    rbp,rax
  689083:	48 b8 9a b8 99 3c 93 	movabs rax,0xa26958933c99b89a
  68908a:	58 69 a2 
  68908d:	48 89 45 00          	mov    QWORD PTR [rbp+0x0],rax
  689091:	c6 45 08 fd          	mov    BYTE PTR [rbp+0x8],0xfd
  689095:	48 89 5c 24 48       	mov    QWORD PTR [rsp+0x48],rbx
  68909a:	48 89 6c 24 50       	mov    QWORD PTR [rsp+0x50],rbp
  68909f:	48 89 5c 24 58       	mov    QWORD PTR [rsp+0x58],rbx
  6890a4:	45 31 e4             	xor    r12d,r12d
  6890a7:	4c 8d 35 c2 e2 d3 00 	lea    r14,[rip+0xd3e2c2]        # 13c7370 <__memmove_chk@plt+0x13980>
  6890ae:	6a 09                	push   0x9
  6890b0:	41 5d                	pop    r13
  6890b2:	49 83 fc 09          	cmp    r12,0x9
  6890b6:	74 33                	je     6890eb <__cxa_finalize@plt-0xd29d25>
  6890b8:	49 8d 5c 24 01       	lea    rbx,[r12+0x1]
  6890bd:	48 8b 3c 24          	mov    rdi,QWORD PTR [rsp]
  6890c1:	4c 89 ee             	mov    rsi,r13
  6890c4:	4c 89 e2             	mov    rdx,r12
  6890c7:	4c 89 f1             	mov    rcx,r14
  6890ca:	e8 65 3d 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  6890cf:	44 8a 38             	mov    r15b,BYTE PTR [rax]
  6890d2:	48 89 ef             	mov    rdi,rbp
  6890d5:	4c 89 ee             	mov    rsi,r13
  6890d8:	4c 89 e2             	mov    rdx,r12
  6890db:	4c 89 f1             	mov    rcx,r14
  6890de:	e8 51 3d 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  6890e3:	44 30 38             	xor    BYTE PTR [rax],r15b
  6890e6:	49 89 dc             	mov    r12,rbx
  6890e9:	eb c7                	jmp    6890b2 <__cxa_finalize@plt-0xd29d5e>
  6890eb:	4c 8d b4 24 80 01 00 	lea    r14,[rsp+0x180]
  6890f2:	00 
  6890f3:	48 8d 74 24 48       	lea    rsi,[rsp+0x48]
  6890f8:	4c 89 f7             	mov    rdi,r14
  6890fb:	e8 31 9b e3 ff       	call   4c2c31 <__cxa_finalize@plt-0xef01df>
  689100:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  689107:	00 00 80 
  68910a:	49 39 06             	cmp    QWORD PTR [r14],rax
  68910d:	0f 85 23 3b 00 00    	jne    68cc36 <__cxa_finalize@plt-0xd261da>
  689113:	4c 8b bc 24 88 01 00 	mov    r15,QWORD PTR [rsp+0x188]
  68911a:	00 
  68911b:	4c 8b a4 24 90 01 00 	mov    r12,QWORD PTR [rsp+0x190]
  689122:	00 
  689123:	4c 8b b4 24 98 01 00 	mov    r14,QWORD PTR [rsp+0x198]
  68912a:	00 
  68912b:	6a 09                	push   0x9
  68912d:	5f                   	pop    rdi
  68912e:	48 8b 34 24          	mov    rsi,QWORD PTR [rsp]
  689132:	e8 1d 8a f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  689137:	48 8b 5c 24 70       	mov    rbx,QWORD PTR [rsp+0x70]
  68913c:	48 89 df             	mov    rdi,rbx
  68913f:	4c 89 e6             	mov    rsi,r12
  689142:	4c 89 f2             	mov    rdx,r14
  689145:	e8 03 f2 f8 ff       	call   61834d <__cxa_finalize@plt-0xd9aac3>
  68914a:	49 89 c6             	mov    r14,rax
  68914d:	4c 89 ff             	mov    rdi,r15
  689150:	4c 89 e6             	mov    rsi,r12
  689153:	e8 fc 89 f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  689158:	4d 85 f6             	test   r14,r14
  68915b:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
  689160:	0f 84 19 02 00 00    	je     68937f <__cxa_finalize@plt-0xd29a91>
  689166:	48 89 de             	mov    rsi,rbx
  689169:	4c 89 f2             	mov    rdx,r14
  68916c:	e8 14 f1 f8 ff       	call   618285 <__cxa_finalize@plt-0xd9ab8b>
  689171:	48 85 c0             	test   rax,rax
  689174:	0f 84 05 02 00 00    	je     68937f <__cxa_finalize@plt-0xd29a91>
  68917a:	48 89 c3             	mov    rbx,rax
  68917d:	48 89 c7             	mov    rdi,rax
  689180:	ff 15 32 af d9 00    	call   QWORD PTR [rip+0xd9af32]        # 14240b8 <__memmove_chk@plt+0x706c8>
  689186:	84 c0                	test   al,al
  689188:	0f 84 f1 01 00 00    	je     68937f <__cxa_finalize@plt-0xd29a91>
  68918e:	48 89 5c 24 08       	mov    QWORD PTR [rsp+0x8],rbx
  689193:	6a 01                	push   0x1
  689195:	41 5e                	pop    r14
  689197:	6a 0a                	push   0xa
  689199:	5d                   	pop    rbp
  68919a:	4c 89 f7             	mov    rdi,r14
  68919d:	48 89 ee             	mov    rsi,rbp
  6891a0:	e8 92 fa ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  6891a5:	48 b9 f3 46 8e 29 00 	movabs rcx,0x7f2c0300298e46f3
  6891ac:	03 2c 7f 
  6891af:	48 89 08             	mov    QWORD PTR [rax],rcx
  6891b2:	48 89 04 24          	mov    QWORD PTR [rsp],rax
  6891b6:	66 c7 40 08 b6 3e    	mov    WORD PTR [rax+0x8],0x3eb6
  6891bc:	4c 89 f7             	mov    rdi,r14
  6891bf:	48 89 ee             	mov    rsi,rbp
  6891c2:	e8 70 fa ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  6891c7:	49 89 c4             	mov    r12,rax
  6891ca:	48 b8 81 23 fe 45 61 	movabs rax,0x3e49606145fe2381
  6891d1:	60 49 3e 
  6891d4:	49 89 04 24          	mov    QWORD PTR [r12],rax
  6891d8:	66 41 c7 44 24 08 da 	mov    WORD PTR [r12+0x8],0x52da
  6891df:	52 
  6891e0:	48 89 6c 24 20       	mov    QWORD PTR [rsp+0x20],rbp
  6891e5:	4c 89 64 24 28       	mov    QWORD PTR [rsp+0x28],r12
  6891ea:	48 89 6c 24 30       	mov    QWORD PTR [rsp+0x30],rbp
  6891ef:	45 31 ed             	xor    r13d,r13d
  6891f2:	4c 8d 35 8f e1 d3 00 	lea    r14,[rip+0xd3e18f]        # 13c7388 <__memmove_chk@plt+0x13998>
  6891f9:	49 83 fd 0a          	cmp    r13,0xa
  6891fd:	74 32                	je     689231 <__cxa_finalize@plt-0xd29bdf>
  6891ff:	49 8d 5d 01          	lea    rbx,[r13+0x1]
  689203:	48 8b 3c 24          	mov    rdi,QWORD PTR [rsp]
  689207:	48 89 ee             	mov    rsi,rbp
  68920a:	4c 89 ea             	mov    rdx,r13
  68920d:	4c 89 f1             	mov    rcx,r14
  689210:	e8 1f 3c 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  689215:	44 8a 38             	mov    r15b,BYTE PTR [rax]
  689218:	4c 89 e7             	mov    rdi,r12
  68921b:	48 89 ee             	mov    rsi,rbp
  68921e:	4c 89 ea             	mov    rdx,r13
  689221:	4c 89 f1             	mov    rcx,r14
  689224:	e8 0b 3c 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  689229:	44 30 38             	xor    BYTE PTR [rax],r15b
  68922c:	49 89 dd             	mov    r13,rbx
  68922f:	eb c8                	jmp    6891f9 <__cxa_finalize@plt-0xd29c17>
  689231:	4c 8d b4 24 80 01 00 	lea    r14,[rsp+0x180]
  689238:	00 
  689239:	48 8d 74 24 20       	lea    rsi,[rsp+0x20]
  68923e:	4c 89 f7             	mov    rdi,r14
  689241:	e8 eb 99 e3 ff       	call   4c2c31 <__cxa_finalize@plt-0xef01df>
  689246:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  68924d:	00 00 80 
  689250:	49 39 06             	cmp    QWORD PTR [r14],rax
  689253:	0f 85 0a 3b 00 00    	jne    68cd63 <__cxa_finalize@plt-0xd260ad>
  689259:	4c 8b b4 24 88 01 00 	mov    r14,QWORD PTR [rsp+0x188]
  689260:	00 
  689261:	4c 8b bc 24 90 01 00 	mov    r15,QWORD PTR [rsp+0x190]
  689268:	00 
  689269:	4c 8b a4 24 98 01 00 	mov    r12,QWORD PTR [rsp+0x198]
  689270:	00 
  689271:	6a 0a                	push   0xa
  689273:	5f                   	pop    rdi
  689274:	48 8b 34 24          	mov    rsi,QWORD PTR [rsp]
  689278:	e8 d7 88 f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  68927d:	48 8b 5c 24 70       	mov    rbx,QWORD PTR [rsp+0x70]
  689282:	48 89 df             	mov    rdi,rbx
  689285:	4c 89 fe             	mov    rsi,r15
  689288:	4c 89 e2             	mov    rdx,r12
  68928b:	e8 bd f0 f8 ff       	call   61834d <__cxa_finalize@plt-0xd9aac3>
  689290:	49 89 c5             	mov    r13,rax
  689293:	4c 89 f7             	mov    rdi,r14
  689296:	4c 89 fe             	mov    rsi,r15
  689299:	e8 b6 88 f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  68929e:	4d 85 ed             	test   r13,r13
  6892a1:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
  6892a6:	0f 84 d3 00 00 00    	je     68937f <__cxa_finalize@plt-0xd29a91>
  6892ac:	48 89 de             	mov    rsi,rbx
  6892af:	4c 89 ea             	mov    rdx,r13
  6892b2:	e8 ce ef f8 ff       	call   618285 <__cxa_finalize@plt-0xd9ab8b>
  6892b7:	48 85 c0             	test   rax,rax
  6892ba:	0f 84 bf 00 00 00    	je     68937f <__cxa_finalize@plt-0xd29a91>
  6892c0:	49 89 c6             	mov    r14,rax
  6892c3:	48 89 c7             	mov    rdi,rax
  6892c6:	ff 15 f4 ad d9 00    	call   QWORD PTR [rip+0xd9adf4]        # 14240c0 <__memmove_chk@plt+0x706d0>
  6892cc:	84 c0                	test   al,al
  6892ce:	0f 84 ab 00 00 00    	je     68937f <__cxa_finalize@plt-0xd29a91>
  6892d4:	48 89 df             	mov    rdi,rbx
  6892d7:	e8 6c e7 f8 ff       	call   617a48 <__cxa_finalize@plt-0xd9b3c8>
  6892dc:	48 89 c7             	mov    rdi,rax
  6892df:	4c 89 f6             	mov    rsi,r14
  6892e2:	e8 65 3b 00 00       	call   68ce4c <__cxa_finalize@plt-0xd25fc4>
  6892e7:	49 89 c4             	mov    r12,rax
  6892ea:	48 89 d5             	mov    rbp,rdx
  6892ed:	48 89 84 24 40 2a 00 	mov    QWORD PTR [rsp+0x2a40],rax
  6892f4:	00 
  6892f5:	48 89 94 24 48 2a 00 	mov    QWORD PTR [rsp+0x2a48],rdx
  6892fc:	00 
  6892fd:	31 ff                	xor    edi,edi
  6892ff:	e8 05 58 ff ff       	call   67eb09 <__cxa_finalize@plt-0xd34307>
  689304:	48 85 c0             	test   rax,rax
  689307:	0f 84 01 3b 00 00    	je     68ce0e <__cxa_finalize@plt-0xd26002>
  68930d:	48 8d 35 8c e0 d3 00 	lea    rsi,[rip+0xd3e08c]        # 13c73a0 <__memmove_chk@plt+0x139b0>
  689314:	48 89 c7             	mov    rdi,rax
  689317:	e8 b0 62 e9 ff       	call   51f5cc <__cxa_finalize@plt-0xe93844>
  68931c:	49 89 c6             	mov    r14,rax
  68931f:	49 89 d7             	mov    r15,rdx
  689322:	48 89 c7             	mov    rdi,rax
  689325:	e8 d4 eb ff ff       	call   687efe <__cxa_finalize@plt-0xd2af12>
  68932a:	4d 89 26             	mov    QWORD PTR [r14],r12
  68932d:	49 89 6e 08          	mov    QWORD PTR [r14+0x8],rbp
  689331:	49 ff 07             	inc    QWORD PTR [r15]
  689334:	48 8d 05 e3 54 ff ff 	lea    rax,[rip+0xffffffffffff54e3]        # 67e81e <__cxa_finalize@plt-0xd345f2>
  68933b:	48 8d bc 24 40 2a 00 	lea    rdi,[rsp+0x2a40]
  689342:	00 
  689343:	48 89 47 10          	mov    QWORD PTR [rdi+0x10],rax
  689347:	83 67 18 00          	and    DWORD PTR [rdi+0x18],0x0
  68934b:	0f 57 c0             	xorps  xmm0,xmm0
  68934e:	0f 29 07             	movaps XMMWORD PTR [rdi],xmm0
  689351:	48 b8 00 00 00 00 01 	movabs rax,0x100000000
  689358:	00 00 00 
  68935b:	48 89 47 1c          	mov    QWORD PTR [rdi+0x1c],rax
  68935f:	48 89 de             	mov    rsi,rbx
  689362:	e8 c0 f2 f8 ff       	call   618627 <__cxa_finalize@plt-0xd9a7e9>
  689367:	48 85 c0             	test   rax,rax
  68936a:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
  68936f:	74 0e                	je     68937f <__cxa_finalize@plt-0xd29a91>
  689371:	48 89 de             	mov    rsi,rbx
  689374:	4c 89 ea             	mov    rdx,r13
  689377:	48 89 c1             	mov    rcx,rax
  68937a:	e8 38 ef f8 ff       	call   6182b7 <__cxa_finalize@plt-0xd9ab59>
  68937f:	6a 01                	push   0x1
  689381:	41 5e                	pop    r14
  689383:	6a 04                	push   0x4
  689385:	41 5d                	pop    r13
  689387:	4c 89 f7             	mov    rdi,r14
  68938a:	4c 89 ee             	mov    rsi,r13
  68938d:	e8 a5 f8 ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  689392:	48 89 04 24          	mov    QWORD PTR [rsp],rax
  689396:	c7 00 a2 d4 47 06    	mov    DWORD PTR [rax],0x647d4a2
  68939c:	4c 89 f7             	mov    rdi,r14
  68939f:	4c 89 ee             	mov    rsi,r13
  6893a2:	e8 90 f8 ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  6893a7:	48 89 c5             	mov    rbp,rax
  6893aa:	c7 00 ef b5 33 6e    	mov    DWORD PTR [rax],0x6e33b5ef
  6893b0:	4c 89 6c 24 48       	mov    QWORD PTR [rsp+0x48],r13
  6893b5:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
  6893ba:	4c 89 6c 24 58       	mov    QWORD PTR [rsp+0x58],r13
  6893bf:	45 31 ff             	xor    r15d,r15d
  6893c2:	4c 8d 35 6f de d3 00 	lea    r14,[rip+0xd3de6f]        # 13c7238 <__memmove_chk@plt+0x13848>
  6893c9:	49 83 ff 04          	cmp    r15,0x4
  6893cd:	74 32                	je     689401 <__cxa_finalize@plt-0xd29a0f>
  6893cf:	49 8d 5f 01          	lea    rbx,[r15+0x1]
  6893d3:	48 8b 3c 24          	mov    rdi,QWORD PTR [rsp]
  6893d7:	4c 89 ee             	mov    rsi,r13
  6893da:	4c 89 fa             	mov    rdx,r15
  6893dd:	4c 89 f1             	mov    rcx,r14
  6893e0:	e8 4f 3a 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  6893e5:	44 8a 20             	mov    r12b,BYTE PTR [rax]
  6893e8:	48 89 ef             	mov    rdi,rbp
  6893eb:	4c 89 ee             	mov    rsi,r13
  6893ee:	4c 89 fa             	mov    rdx,r15
  6893f1:	4c 89 f1             	mov    rcx,r14
  6893f4:	e8 3b 3a 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  6893f9:	44 30 20             	xor    BYTE PTR [rax],r12b
  6893fc:	49 89 df             	mov    r15,rbx
  6893ff:	eb c8                	jmp    6893c9 <__cxa_finalize@plt-0xd29a47>
  689401:	4c 8d b4 24 80 01 00 	lea    r14,[rsp+0x180]
  689408:	00 
  689409:	48 8d 74 24 48       	lea    rsi,[rsp+0x48]
  68940e:	4c 89 f7             	mov    rdi,r14
  689411:	e8 1b 98 e3 ff       	call   4c2c31 <__cxa_finalize@plt-0xef01df>
  689416:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  68941d:	00 00 80 
  689420:	49 39 06             	cmp    QWORD PTR [r14],rax
  689423:	0f 85 c0 36 00 00    	jne    68cae9 <__cxa_finalize@plt-0xd26327>
  689429:	4c 8b bc 24 88 01 00 	mov    r15,QWORD PTR [rsp+0x188]
  689430:	00 
  689431:	4c 8b ac 24 90 01 00 	mov    r13,QWORD PTR [rsp+0x190]
  689438:	00 
  689439:	4c 8b b4 24 98 01 00 	mov    r14,QWORD PTR [rsp+0x198]
  689440:	00 
  689441:	6a 04                	push   0x4
  689443:	5f                   	pop    rdi
  689444:	48 8b 34 24          	mov    rsi,QWORD PTR [rsp]
  689448:	e8 07 87 f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  68944d:	48 8b 5c 24 70       	mov    rbx,QWORD PTR [rsp+0x70]
  689452:	48 89 df             	mov    rdi,rbx
  689455:	4c 89 ee             	mov    rsi,r13
  689458:	4c 89 f2             	mov    rdx,r14
  68945b:	e8 ed ee f8 ff       	call   61834d <__cxa_finalize@plt-0xd9aac3>
  689460:	49 89 c6             	mov    r14,rax
  689463:	4c 89 ff             	mov    rdi,r15
  689466:	4c 89 ee             	mov    rsi,r13
  689469:	e8 e6 86 f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  68946e:	4d 85 f6             	test   r14,r14
  689471:	0f 84 7e 02 00 00    	je     6896f5 <__cxa_finalize@plt-0xd2971b>
  689477:	48 8b 7c 24 10       	mov    rdi,QWORD PTR [rsp+0x10]
  68947c:	48 89 de             	mov    rsi,rbx
  68947f:	4c 89 f2             	mov    rdx,r14
  689482:	e8 fe ed f8 ff       	call   618285 <__cxa_finalize@plt-0xd9ab8b>
  689487:	48 85 c0             	test   rax,rax
  68948a:	0f 84 65 02 00 00    	je     6896f5 <__cxa_finalize@plt-0xd2971b>
  689490:	49 89 c7             	mov    r15,rax
  689493:	48 89 df             	mov    rdi,rbx
  689496:	e8 ad e5 f8 ff       	call   617a48 <__cxa_finalize@plt-0xd9b3c8>
  68949b:	49 89 c6             	mov    r14,rax
  68949e:	48 89 c7             	mov    rdi,rax
  6894a1:	4c 89 fe             	mov    rsi,r15
  6894a4:	ff 15 1e ac d9 00    	call   QWORD PTR [rip+0xd9ac1e]        # 14240c8 <__memmove_chk@plt+0x706d8>
  6894aa:	49 89 c5             	mov    r13,rax
  6894ad:	4c 89 f7             	mov    rdi,r14
  6894b0:	e8 22 ef f8 ff       	call   6183d7 <__cxa_finalize@plt-0xd9aa39>
  6894b5:	48 89 c5             	mov    rbp,rax
  6894b8:	4c 89 ac 24 40 2a 00 	mov    QWORD PTR [rsp+0x2a40],r13
  6894bf:	00 
  6894c0:	48 89 84 24 48 2a 00 	mov    QWORD PTR [rsp+0x2a48],rax
  6894c7:	00 
  6894c8:	31 ff                	xor    edi,edi
  6894ca:	e8 ae e9 ff ff       	call   687e7d <__cxa_finalize@plt-0xd2af93>
  6894cf:	48 85 c0             	test   rax,rax
  6894d2:	0f 84 36 39 00 00    	je     68ce0e <__cxa_finalize@plt-0xd26002>
  6894d8:	49 89 c6             	mov    r14,rax
  6894db:	48 83 38 00          	cmp    QWORD PTR [rax],0x0
  6894df:	0f 85 24 37 00 00    	jne    68cc09 <__cxa_finalize@plt-0xd26207>
  6894e5:	49 83 0e ff          	or     QWORD PTR [r14],0xffffffffffffffff
  6894e9:	4c 89 f7             	mov    rdi,r14
  6894ec:	48 83 c7 08          	add    rdi,0x8
  6894f0:	e8 09 ea ff ff       	call   687efe <__cxa_finalize@plt-0xd2af12>
  6894f5:	4d 89 6e 08          	mov    QWORD PTR [r14+0x8],r13
  6894f9:	49 89 6e 10          	mov    QWORD PTR [r14+0x10],rbp
  6894fd:	49 ff 06             	inc    QWORD PTR [r14]
  689500:	4c 89 ff             	mov    rdi,r15
  689503:	ff 15 af ab d9 00    	call   QWORD PTR [rip+0xd9abaf]        # 14240b8 <__memmove_chk@plt+0x706c8>
  689509:	84 c0                	test   al,al
  68950b:	0f 84 e4 01 00 00    	je     6896f5 <__cxa_finalize@plt-0xd2971b>
  689511:	4c 89 7c 24 08       	mov    QWORD PTR [rsp+0x8],r15
  689516:	6a 01                	push   0x1
  689518:	41 5e                	pop    r14
  68951a:	4c 89 f7             	mov    rdi,r14
  68951d:	6a 03                	push   0x3
  68951f:	5b                   	pop    rbx
  689520:	48 89 de             	mov    rsi,rbx
  689523:	e8 0f f7 ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  689528:	66 c7 00 16 91       	mov    WORD PTR [rax],0x9116
  68952d:	48 89 04 24          	mov    QWORD PTR [rsp],rax
  689531:	c6 40 02 c0          	mov    BYTE PTR [rax+0x2],0xc0
  689535:	4c 89 f7             	mov    rdi,r14
  689538:	48 89 de             	mov    rsi,rbx
  68953b:	e8 f7 f6 ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  689540:	48 89 c5             	mov    rbp,rax
  689543:	66 c7 00 7b f8       	mov    WORD PTR [rax],0xf87b
  689548:	c6 40 02 ae          	mov    BYTE PTR [rax+0x2],0xae
  68954c:	48 89 5c 24 20       	mov    QWORD PTR [rsp+0x20],rbx
  689551:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
  689556:	48 89 5c 24 30       	mov    QWORD PTR [rsp+0x30],rbx
  68955b:	45 31 ff             	xor    r15d,r15d
  68955e:	4c 8d 35 eb dc d3 00 	lea    r14,[rip+0xd3dceb]        # 13c7250 <__memmove_chk@plt+0x13860>
  689565:	6a 03                	push   0x3
  689567:	41 5d                	pop    r13
  689569:	49 83 ff 03          	cmp    r15,0x3
  68956d:	74 32                	je     6895a1 <__cxa_finalize@plt-0xd2986f>
  68956f:	49 8d 5f 01          	lea    rbx,[r15+0x1]
  689573:	48 8b 3c 24          	mov    rdi,QWORD PTR [rsp]
  689577:	4c 89 ee             	mov    rsi,r13
  68957a:	4c 89 fa             	mov    rdx,r15
  68957d:	4c 89 f1             	mov    rcx,r14
  689580:	e8 af 38 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  689585:	44 8a 20             	mov    r12b,BYTE PTR [rax]
  689588:	48 89 ef             	mov    rdi,rbp
  68958b:	4c 89 ee             	mov    rsi,r13
  68958e:	4c 89 fa             	mov    rdx,r15
  689591:	4c 89 f1             	mov    rcx,r14
  689594:	e8 9b 38 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  689599:	44 30 20             	xor    BYTE PTR [rax],r12b
  68959c:	49 89 df             	mov    r15,rbx
  68959f:	eb c8                	jmp    689569 <__cxa_finalize@plt-0xd298a7>
  6895a1:	4c 8d b4 24 80 01 00 	lea    r14,[rsp+0x180]
  6895a8:	00 
  6895a9:	48 8d 74 24 20       	lea    rsi,[rsp+0x20]
  6895ae:	4c 89 f7             	mov    rdi,r14
  6895b1:	e8 7b 96 e3 ff       	call   4c2c31 <__cxa_finalize@plt-0xef01df>
  6895b6:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  6895bd:	00 00 80 
  6895c0:	49 39 06             	cmp    QWORD PTR [r14],rax
  6895c3:	4c 8b 64 24 08       	mov    r12,QWORD PTR [rsp+0x8]
  6895c8:	0f 85 ad 36 00 00    	jne    68cc7b <__cxa_finalize@plt-0xd26195>
  6895ce:	4c 8b b4 24 88 01 00 	mov    r14,QWORD PTR [rsp+0x188]
  6895d5:	00 
  6895d6:	4c 8b bc 24 90 01 00 	mov    r15,QWORD PTR [rsp+0x190]
  6895dd:	00 
  6895de:	48 8b ac 24 98 01 00 	mov    rbp,QWORD PTR [rsp+0x198]
  6895e5:	00 
  6895e6:	6a 03                	push   0x3
  6895e8:	5f                   	pop    rdi
  6895e9:	48 8b 34 24          	mov    rsi,QWORD PTR [rsp]
  6895ed:	e8 62 85 f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  6895f2:	48 8b 5c 24 70       	mov    rbx,QWORD PTR [rsp+0x70]
  6895f7:	48 89 df             	mov    rdi,rbx
  6895fa:	4c 89 fe             	mov    rsi,r15
  6895fd:	48 89 ea             	mov    rdx,rbp
  689600:	e8 48 ed f8 ff       	call   61834d <__cxa_finalize@plt-0xd9aac3>
  689605:	49 89 c5             	mov    r13,rax
  689608:	4c 89 f7             	mov    rdi,r14
  68960b:	4c 89 fe             	mov    rsi,r15
  68960e:	e8 41 85 f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  689613:	4d 85 ed             	test   r13,r13
  689616:	0f 84 d9 00 00 00    	je     6896f5 <__cxa_finalize@plt-0xd2971b>
  68961c:	4c 89 e7             	mov    rdi,r12
  68961f:	48 89 de             	mov    rsi,rbx
  689622:	4c 89 ea             	mov    rdx,r13
  689625:	e8 5b ec f8 ff       	call   618285 <__cxa_finalize@plt-0xd9ab8b>
  68962a:	48 85 c0             	test   rax,rax
  68962d:	0f 84 c2 00 00 00    	je     6896f5 <__cxa_finalize@plt-0xd2971b>
  689633:	49 89 c6             	mov    r14,rax
  689636:	48 89 c7             	mov    rdi,rax
  689639:	ff 15 81 aa d9 00    	call   QWORD PTR [rip+0xd9aa81]        # 14240c0 <__memmove_chk@plt+0x706d0>
  68963f:	84 c0                	test   al,al
  689641:	0f 84 ae 00 00 00    	je     6896f5 <__cxa_finalize@plt-0xd2971b>
  689647:	48 89 df             	mov    rdi,rbx
  68964a:	e8 f9 e3 f8 ff       	call   617a48 <__cxa_finalize@plt-0xd9b3c8>
  68964f:	48 89 c7             	mov    rdi,rax
  689652:	4c 89 f6             	mov    rsi,r14
  689655:	e8 f2 37 00 00       	call   68ce4c <__cxa_finalize@plt-0xd25fc4>
  68965a:	48 89 c5             	mov    rbp,rax
  68965d:	48 89 84 24 40 2a 00 	mov    QWORD PTR [rsp+0x2a40],rax
  689664:	00 
  689665:	48 89 14 24          	mov    QWORD PTR [rsp],rdx
  689669:	48 89 94 24 48 2a 00 	mov    QWORD PTR [rsp+0x2a48],rdx
  689670:	00 
  689671:	31 ff                	xor    edi,edi
  689673:	e8 8b e7 ff ff       	call   687e03 <__cxa_finalize@plt-0xd2b00d>
  689678:	48 85 c0             	test   rax,rax
  68967b:	0f 84 8d 37 00 00    	je     68ce0e <__cxa_finalize@plt-0xd26002>
  689681:	48 8d 35 f8 db d3 00 	lea    rsi,[rip+0xd3dbf8]        # 13c7280 <__memmove_chk@plt+0x13890>
  689688:	48 89 c7             	mov    rdi,rax
  68968b:	e8 3c 5f e9 ff       	call   51f5cc <__cxa_finalize@plt-0xe93844>
  689690:	49 89 c6             	mov    r14,rax
  689693:	49 89 d7             	mov    r15,rdx
  689696:	48 89 c7             	mov    rdi,rax
  689699:	e8 60 e8 ff ff       	call   687efe <__cxa_finalize@plt-0xd2af12>
  68969e:	49 89 2e             	mov    QWORD PTR [r14],rbp
  6896a1:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
  6896a5:	49 89 46 08          	mov    QWORD PTR [r14+0x8],rax
  6896a9:	49 ff 07             	inc    QWORD PTR [r15]
  6896ac:	48 8d 05 d0 54 ff ff 	lea    rax,[rip+0xffffffffffff54d0]        # 67eb83 <__cxa_finalize@plt-0xd3428d>
  6896b3:	48 8d bc 24 40 2a 00 	lea    rdi,[rsp+0x2a40]
  6896ba:	00 
  6896bb:	48 89 47 10          	mov    QWORD PTR [rdi+0x10],rax
  6896bf:	83 67 18 00          	and    DWORD PTR [rdi+0x18],0x0
  6896c3:	0f 57 c0             	xorps  xmm0,xmm0
  6896c6:	0f 29 07             	movaps XMMWORD PTR [rdi],xmm0
  6896c9:	48 b8 00 00 00 00 01 	movabs rax,0x100000000
  6896d0:	00 00 00 
  6896d3:	48 89 47 1c          	mov    QWORD PTR [rdi+0x1c],rax
  6896d7:	48 89 de             	mov    rsi,rbx
  6896da:	e8 48 ef f8 ff       	call   618627 <__cxa_finalize@plt-0xd9a7e9>
  6896df:	48 85 c0             	test   rax,rax
  6896e2:	74 11                	je     6896f5 <__cxa_finalize@plt-0xd2971b>
  6896e4:	4c 89 e7             	mov    rdi,r12
  6896e7:	48 89 de             	mov    rsi,rbx
  6896ea:	4c 89 ea             	mov    rdx,r13
  6896ed:	48 89 c1             	mov    rcx,rax
  6896f0:	e8 c2 eb f8 ff       	call   6182b7 <__cxa_finalize@plt-0xd9ab59>
  6896f5:	6a 01                	push   0x1
  6896f7:	41 5e                	pop    r14
  6896f9:	6a 05                	push   0x5
  6896fb:	41 5d                	pop    r13
  6896fd:	4c 89 f7             	mov    rdi,r14
  689700:	4c 89 ee             	mov    rsi,r13
  689703:	e8 2f f5 ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  689708:	c7 00 27 84 ea 8b    	mov    DWORD PTR [rax],0x8bea8427
  68970e:	48 89 04 24          	mov    QWORD PTR [rsp],rax
  689712:	c6 40 04 8d          	mov    BYTE PTR [rax+0x4],0x8d
  689716:	4c 89 f7             	mov    rdi,r14
  689719:	4c 89 ee             	mov    rsi,r13
  68971c:	e8 16 f5 ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  689721:	48 89 c5             	mov    rbp,rax
  689724:	c7 00 66 f6 98 ea    	mov    DWORD PTR [rax],0xea98f666
  68972a:	c6 40 04 f4          	mov    BYTE PTR [rax+0x4],0xf4
  68972e:	4c 89 ac 24 90 00 00 	mov    QWORD PTR [rsp+0x90],r13
  689735:	00 
  689736:	48 89 84 24 98 00 00 	mov    QWORD PTR [rsp+0x98],rax
  68973d:	00 
  68973e:	4c 89 ac 24 a0 00 00 	mov    QWORD PTR [rsp+0xa0],r13
  689745:	00 
  689746:	45 31 ff             	xor    r15d,r15d
  689749:	4c 8d 35 a8 db d3 00 	lea    r14,[rip+0xd3dba8]        # 13c72f8 <__memmove_chk@plt+0x13908>
  689750:	49 83 ff 05          	cmp    r15,0x5
  689754:	74 32                	je     689788 <__cxa_finalize@plt-0xd29688>
  689756:	49 8d 5f 01          	lea    rbx,[r15+0x1]
  68975a:	48 8b 3c 24          	mov    rdi,QWORD PTR [rsp]
  68975e:	4c 89 ee             	mov    rsi,r13
  689761:	4c 89 fa             	mov    rdx,r15
  689764:	4c 89 f1             	mov    rcx,r14
  689767:	e8 c8 36 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  68976c:	44 8a 20             	mov    r12b,BYTE PTR [rax]
  68976f:	48 89 ef             	mov    rdi,rbp
  689772:	4c 89 ee             	mov    rsi,r13
  689775:	4c 89 fa             	mov    rdx,r15
  689778:	4c 89 f1             	mov    rcx,r14
  68977b:	e8 b4 36 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  689780:	44 30 20             	xor    BYTE PTR [rax],r12b
  689783:	49 89 df             	mov    r15,rbx
  689786:	eb c8                	jmp    689750 <__cxa_finalize@plt-0xd296c0>
  689788:	4c 8d b4 24 80 01 00 	lea    r14,[rsp+0x180]
  68978f:	00 
  689790:	48 8d b4 24 90 00 00 	lea    rsi,[rsp+0x90]
  689797:	00 
  689798:	4c 89 f7             	mov    rdi,r14
  68979b:	e8 91 94 e3 ff       	call   4c2c31 <__cxa_finalize@plt-0xef01df>
  6897a0:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  6897a7:	00 00 80 
  6897aa:	49 39 06             	cmp    QWORD PTR [r14],rax
  6897ad:	0f 85 7b 33 00 00    	jne    68cb2e <__cxa_finalize@plt-0xd262e2>
  6897b3:	4c 8b bc 24 88 01 00 	mov    r15,QWORD PTR [rsp+0x188]
  6897ba:	00 
  6897bb:	4c 8b ac 24 90 01 00 	mov    r13,QWORD PTR [rsp+0x190]
  6897c2:	00 
  6897c3:	4c 8b b4 24 98 01 00 	mov    r14,QWORD PTR [rsp+0x198]
  6897ca:	00 
  6897cb:	6a 05                	push   0x5
  6897cd:	5f                   	pop    rdi
  6897ce:	48 8b 34 24          	mov    rsi,QWORD PTR [rsp]
  6897d2:	e8 7d 83 f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  6897d7:	48 8b 5c 24 70       	mov    rbx,QWORD PTR [rsp+0x70]
  6897dc:	48 89 df             	mov    rdi,rbx
  6897df:	4c 89 ee             	mov    rsi,r13
  6897e2:	4c 89 f2             	mov    rdx,r14
  6897e5:	e8 63 eb f8 ff       	call   61834d <__cxa_finalize@plt-0xd9aac3>
  6897ea:	49 89 c6             	mov    r14,rax
  6897ed:	4c 89 ff             	mov    rdi,r15
  6897f0:	4c 89 ee             	mov    rsi,r13
  6897f3:	e8 5c 83 f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  6897f8:	4d 85 f6             	test   r14,r14
  6897fb:	0f 84 52 03 00 00    	je     689b53 <__cxa_finalize@plt-0xd292bd>
  689801:	48 8b 7c 24 10       	mov    rdi,QWORD PTR [rsp+0x10]
  689806:	48 89 de             	mov    rsi,rbx
  689809:	4c 89 f2             	mov    rdx,r14
  68980c:	e8 74 ea f8 ff       	call   618285 <__cxa_finalize@plt-0xd9ab8b>
  689811:	48 85 c0             	test   rax,rax
  689814:	0f 84 39 03 00 00    	je     689b53 <__cxa_finalize@plt-0xd292bd>
  68981a:	49 89 c6             	mov    r14,rax
  68981d:	48 89 c7             	mov    rdi,rax
  689820:	ff 15 92 a8 d9 00    	call   QWORD PTR [rip+0xd9a892]        # 14240b8 <__memmove_chk@plt+0x706c8>
  689826:	84 c0                	test   al,al
  689828:	0f 84 25 03 00 00    	je     689b53 <__cxa_finalize@plt-0xd292bd>
  68982e:	4c 89 74 24 10       	mov    QWORD PTR [rsp+0x10],r14
  689833:	6a 01                	push   0x1
  689835:	41 5f                	pop    r15
  689837:	4c 89 ff             	mov    rdi,r15
  68983a:	6a 09                	push   0x9
  68983c:	5b                   	pop    rbx
  68983d:	48 89 de             	mov    rsi,rbx
  689840:	e8 f2 f3 ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  689845:	48 b9 ec eb 8d cc c6 	movabs rcx,0x8baeacc6cc8debec
  68984c:	ac ae 8b 
  68984f:	48 89 08             	mov    QWORD PTR [rax],rcx
  689852:	48 89 04 24          	mov    QWORD PTR [rsp],rax
  689856:	c6 40 08 a7          	mov    BYTE PTR [rax+0x8],0xa7
  68985a:	4c 89 ff             	mov    rdi,r15
  68985d:	48 89 de             	mov    rsi,rbx
  689860:	e8 d2 f3 ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  689865:	49 89 c5             	mov    r13,rax
  689868:	48 b8 9c 99 e2 b8 a9 	movabs rax,0xfbd7d8a9b8e2999c
  68986f:	d8 d7 fb 
  689872:	49 89 45 00          	mov    QWORD PTR [r13+0x0],rax
  689876:	41 c6 45 08 c2       	mov    BYTE PTR [r13+0x8],0xc2
  68987b:	48 89 5c 24 48       	mov    QWORD PTR [rsp+0x48],rbx
  689880:	4c 89 6c 24 50       	mov    QWORD PTR [rsp+0x50],r13
  689885:	48 89 5c 24 58       	mov    QWORD PTR [rsp+0x58],rbx
  68988a:	45 31 ff             	xor    r15d,r15d
  68988d:	48 8d 2d 7c da d3 00 	lea    rbp,[rip+0xd3da7c]        # 13c7310 <__memmove_chk@plt+0x13920>
  689894:	6a 09                	push   0x9
  689896:	41 5c                	pop    r12
  689898:	49 83 ff 09          	cmp    r15,0x9
  68989c:	74 32                	je     6898d0 <__cxa_finalize@plt-0xd29540>
  68989e:	49 8d 5f 01          	lea    rbx,[r15+0x1]
  6898a2:	48 8b 3c 24          	mov    rdi,QWORD PTR [rsp]
  6898a6:	4c 89 e6             	mov    rsi,r12
  6898a9:	4c 89 fa             	mov    rdx,r15
  6898ac:	48 89 e9             	mov    rcx,rbp
  6898af:	e8 80 35 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  6898b4:	44 8a 30             	mov    r14b,BYTE PTR [rax]
  6898b7:	4c 89 ef             	mov    rdi,r13
  6898ba:	4c 89 e6             	mov    rsi,r12
  6898bd:	4c 89 fa             	mov    rdx,r15
  6898c0:	48 89 e9             	mov    rcx,rbp
  6898c3:	e8 6c 35 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  6898c8:	44 30 30             	xor    BYTE PTR [rax],r14b
  6898cb:	49 89 df             	mov    r15,rbx
  6898ce:	eb c8                	jmp    689898 <__cxa_finalize@plt-0xd29578>
  6898d0:	4c 8d bc 24 80 01 00 	lea    r15,[rsp+0x180]
  6898d7:	00 
  6898d8:	48 8d 74 24 48       	lea    rsi,[rsp+0x48]
  6898dd:	4c 89 ff             	mov    rdi,r15
  6898e0:	e8 4c 93 e3 ff       	call   4c2c31 <__cxa_finalize@plt-0xef01df>
  6898e5:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  6898ec:	00 00 80 
  6898ef:	49 39 07             	cmp    QWORD PTR [r15],rax
  6898f2:	0f 85 c8 33 00 00    	jne    68ccc0 <__cxa_finalize@plt-0xd26150>
  6898f8:	4c 8b ac 24 88 01 00 	mov    r13,QWORD PTR [rsp+0x188]
  6898ff:	00 
  689900:	48 8b ac 24 90 01 00 	mov    rbp,QWORD PTR [rsp+0x190]
  689907:	00 
  689908:	4c 8b bc 24 98 01 00 	mov    r15,QWORD PTR [rsp+0x198]
  68990f:	00 
  689910:	6a 09                	push   0x9
  689912:	5f                   	pop    rdi
  689913:	48 8b 34 24          	mov    rsi,QWORD PTR [rsp]
  689917:	e8 38 82 f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  68991c:	48 8b 5c 24 70       	mov    rbx,QWORD PTR [rsp+0x70]
  689921:	48 89 df             	mov    rdi,rbx
  689924:	48 89 ee             	mov    rsi,rbp
  689927:	4c 89 fa             	mov    rdx,r15
  68992a:	e8 1e ea f8 ff       	call   61834d <__cxa_finalize@plt-0xd9aac3>
  68992f:	49 89 c7             	mov    r15,rax
  689932:	4c 89 ef             	mov    rdi,r13
  689935:	48 89 ee             	mov    rsi,rbp
  689938:	e8 17 82 f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  68993d:	4d 85 ff             	test   r15,r15
  689940:	48 8b 7c 24 10       	mov    rdi,QWORD PTR [rsp+0x10]
  689945:	0f 84 08 02 00 00    	je     689b53 <__cxa_finalize@plt-0xd292bd>
  68994b:	48 89 de             	mov    rsi,rbx
  68994e:	4c 89 fa             	mov    rdx,r15
  689951:	e8 2f e9 f8 ff       	call   618285 <__cxa_finalize@plt-0xd9ab8b>
  689956:	48 85 c0             	test   rax,rax
  689959:	0f 84 f4 01 00 00    	je     689b53 <__cxa_finalize@plt-0xd292bd>
  68995f:	49 89 c6             	mov    r14,rax
  689962:	48 89 c7             	mov    rdi,rax
  689965:	ff 15 4d a7 d9 00    	call   QWORD PTR [rip+0xd9a74d]        # 14240b8 <__memmove_chk@plt+0x706c8>
  68996b:	84 c0                	test   al,al
  68996d:	0f 84 e0 01 00 00    	je     689b53 <__cxa_finalize@plt-0xd292bd>
  689973:	4c 89 74 24 10       	mov    QWORD PTR [rsp+0x10],r14
  689978:	6a 01                	push   0x1
  68997a:	41 5c                	pop    r12
  68997c:	4c 89 e7             	mov    rdi,r12
  68997f:	6a 04                	push   0x4
  689981:	5b                   	pop    rbx
  689982:	48 89 de             	mov    rsi,rbx
  689985:	e8 ad f2 ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  68998a:	48 89 04 24          	mov    QWORD PTR [rsp],rax
  68998e:	c7 00 39 bf 38 d9    	mov    DWORD PTR [rax],0xd938bf39
  689994:	4c 89 e7             	mov    rdi,r12
  689997:	48 89 de             	mov    rsi,rbx
  68999a:	e8 98 f2 ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  68999f:	49 89 c4             	mov    r12,rax
  6899a2:	c7 00 4a d0 4a ad    	mov    DWORD PTR [rax],0xad4ad04a
  6899a8:	48 89 5c 24 20       	mov    QWORD PTR [rsp+0x20],rbx
  6899ad:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
  6899b2:	48 89 5c 24 30       	mov    QWORD PTR [rsp+0x30],rbx
  6899b7:	31 ed                	xor    ebp,ebp
  6899b9:	4c 8d 2d 68 d9 d3 00 	lea    r13,[rip+0xd3d968]        # 13c7328 <__memmove_chk@plt+0x13938>
  6899c0:	6a 04                	push   0x4
  6899c2:	41 5f                	pop    r15
  6899c4:	48 83 fd 04          	cmp    rbp,0x4
  6899c8:	74 32                	je     6899fc <__cxa_finalize@plt-0xd29414>
  6899ca:	48 8d 5d 01          	lea    rbx,[rbp+0x1]
  6899ce:	48 8b 3c 24          	mov    rdi,QWORD PTR [rsp]
  6899d2:	4c 89 fe             	mov    rsi,r15
  6899d5:	48 89 ea             	mov    rdx,rbp
  6899d8:	4c 89 e9             	mov    rcx,r13
  6899db:	e8 54 34 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  6899e0:	44 8a 30             	mov    r14b,BYTE PTR [rax]
  6899e3:	4c 89 e7             	mov    rdi,r12
  6899e6:	4c 89 fe             	mov    rsi,r15
  6899e9:	48 89 ea             	mov    rdx,rbp
  6899ec:	4c 89 e9             	mov    rcx,r13
  6899ef:	e8 40 34 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  6899f4:	44 30 30             	xor    BYTE PTR [rax],r14b
  6899f7:	48 89 dd             	mov    rbp,rbx
  6899fa:	eb c8                	jmp    6899c4 <__cxa_finalize@plt-0xd2944c>
  6899fc:	4c 8d a4 24 80 01 00 	lea    r12,[rsp+0x180]
  689a03:	00 
  689a04:	48 8d 74 24 20       	lea    rsi,[rsp+0x20]
  689a09:	4c 89 e7             	mov    rdi,r12
  689a0c:	e8 20 92 e3 ff       	call   4c2c31 <__cxa_finalize@plt-0xef01df>
  689a11:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
  689a18:	00 00 80 
  689a1b:	49 39 04 24          	cmp    QWORD PTR [r12],rax
  689a1f:	4c 8b 74 24 10       	mov    r14,QWORD PTR [rsp+0x10]
  689a24:	0f 85 7e 33 00 00    	jne    68cda8 <__cxa_finalize@plt-0xd26068>
  689a2a:	4c 8b a4 24 88 01 00 	mov    r12,QWORD PTR [rsp+0x188]
  689a31:	00 
  689a32:	4c 8b ac 24 90 01 00 	mov    r13,QWORD PTR [rsp+0x190]
  689a39:	00 
  689a3a:	48 8b ac 24 98 01 00 	mov    rbp,QWORD PTR [rsp+0x198]
  689a41:	00 
  689a42:	6a 04                	push   0x4
  689a44:	5f                   	pop    rdi
  689a45:	48 8b 34 24          	mov    rsi,QWORD PTR [rsp]
  689a49:	e8 06 81 f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  689a4e:	48 8b 5c 24 70       	mov    rbx,QWORD PTR [rsp+0x70]
  689a53:	48 89 df             	mov    rdi,rbx
  689a56:	4c 89 ee             	mov    rsi,r13
  689a59:	48 89 ea             	mov    rdx,rbp
  689a5c:	e8 ec e8 f8 ff       	call   61834d <__cxa_finalize@plt-0xd9aac3>
  689a61:	49 89 c7             	mov    r15,rax
  689a64:	4c 89 e7             	mov    rdi,r12
  689a67:	4c 89 ee             	mov    rsi,r13
  689a6a:	e8 e5 80 f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  689a6f:	4d 85 ff             	test   r15,r15
  689a72:	0f 84 db 00 00 00    	je     689b53 <__cxa_finalize@plt-0xd292bd>
  689a78:	4c 89 f7             	mov    rdi,r14
  689a7b:	48 89 de             	mov    rsi,rbx
  689a7e:	4c 89 fa             	mov    rdx,r15
  689a81:	e8 ff e7 f8 ff       	call   618285 <__cxa_finalize@plt-0xd9ab8b>
  689a86:	48 85 c0             	test   rax,rax
  689a89:	0f 84 c4 00 00 00    	je     689b53 <__cxa_finalize@plt-0xd292bd>
  689a8f:	49 89 c4             	mov    r12,rax
  689a92:	48 89 c7             	mov    rdi,rax
  689a95:	ff 15 25 a6 d9 00    	call   QWORD PTR [rip+0xd9a625]        # 14240c0 <__memmove_chk@plt+0x706d0>
  689a9b:	84 c0                	test   al,al
  689a9d:	0f 84 b0 00 00 00    	je     689b53 <__cxa_finalize@plt-0xd292bd>
  689aa3:	48 89 df             	mov    rdi,rbx
  689aa6:	e8 9d df f8 ff       	call   617a48 <__cxa_finalize@plt-0xd9b3c8>
  689aab:	48 89 c7             	mov    rdi,rax
  689aae:	4c 89 e6             	mov    rsi,r12
  689ab1:	e8 96 33 00 00       	call   68ce4c <__cxa_finalize@plt-0xd25fc4>
  689ab6:	49 89 d5             	mov    r13,rdx
  689ab9:	48 89 04 24          	mov    QWORD PTR [rsp],rax
  689abd:	48 89 84 24 40 2a 00 	mov    QWORD PTR [rsp+0x2a40],rax
  689ac4:	00 
  689ac5:	48 89 94 24 48 2a 00 	mov    QWORD PTR [rsp+0x2a48],rdx
  689acc:	00 
  689acd:	31 ff                	xor    edi,edi
  689acf:	e8 9d 4c ff ff       	call   67e771 <__cxa_finalize@plt-0xd3469f>
  689ad4:	48 85 c0             	test   rax,rax
  689ad7:	0f 84 31 33 00 00    	je     68ce0e <__cxa_finalize@plt-0xd26002>
  689add:	48 8d 35 5c d8 d3 00 	lea    rsi,[rip+0xd3d85c]        # 13c7340 <__memmove_chk@plt+0x13950>
  689ae4:	48 89 c7             	mov    rdi,rax
  689ae7:	e8 e0 5a e9 ff       	call   51f5cc <__cxa_finalize@plt-0xe93844>
  689aec:	48 89 c5             	mov    rbp,rax
  689aef:	49 89 d4             	mov    r12,rdx
  689af2:	48 89 c7             	mov    rdi,rax
  689af5:	e8 04 e4 ff ff       	call   687efe <__cxa_finalize@plt-0xd2af12>
  689afa:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
  689afe:	48 89 45 00          	mov    QWORD PTR [rbp+0x0],rax
  689b02:	4c 89 6d 08          	mov    QWORD PTR [rbp+0x8],r13
  689b06:	49 ff 04 24          	inc    QWORD PTR [r12]
  689b0a:	48 8d 05 a1 43 ff ff 	lea    rax,[rip+0xffffffffffff43a1]        # 67deb2 <__cxa_finalize@plt-0xd34f5e>
  689b11:	48 8d bc 24 40 2a 00 	lea    rdi,[rsp+0x2a40]
  689b18:	00 
  689b19:	48 89 47 10          	mov    QWORD PTR [rdi+0x10],rax
  689b1d:	83 67 18 00          	and    DWORD PTR [rdi+0x18],0x0
  689b21:	0f 57 c0             	xorps  xmm0,xmm0
  689b24:	0f 29 07             	movaps XMMWORD PTR [rdi],xmm0
  689b27:	48 b8 00 00 00 00 01 	movabs rax,0x100000000
  689b2e:	00 00 00 
  689b31:	48 89 47 1c          	mov    QWORD PTR [rdi+0x1c],rax
  689b35:	48 89 de             	mov    rsi,rbx
  689b38:	e8 ea ea f8 ff       	call   618627 <__cxa_finalize@plt-0xd9a7e9>
  689b3d:	48 85 c0             	test   rax,rax
  689b40:	74 11                	je     689b53 <__cxa_finalize@plt-0xd292bd>
  689b42:	4c 89 f7             	mov    rdi,r14
  689b45:	48 89 de             	mov    rsi,rbx
  689b48:	4c 89 fa             	mov    rdx,r15
  689b4b:	48 89 c1             	mov    rcx,rax
  689b4e:	e8 64 e7 f8 ff       	call   6182b7 <__cxa_finalize@plt-0xd9ab59>
  689b53:	48 89 df             	mov    rdi,rbx
  689b56:	e8 ed de f8 ff       	call   617a48 <__cxa_finalize@plt-0xd9b3c8>
  689b5b:	49 89 c6             	mov    r14,rax
  689b5e:	48 89 c7             	mov    rdi,rax
  689b61:	48 8b b4 24 28 01 00 	mov    rsi,QWORD PTR [rsp+0x128]
  689b68:	00 
  689b69:	ff 15 59 a5 d9 00    	call   QWORD PTR [rip+0xd9a559]        # 14240c8 <__memmove_chk@plt+0x706d8>
  689b6f:	48 89 c3             	mov    rbx,rax
  689b72:	4c 89 f7             	mov    rdi,r14
  689b75:	e8 5d e8 f8 ff       	call   6183d7 <__cxa_finalize@plt-0xd9aa39>
  689b7a:	48 8d 8c 24 78 01 00 	lea    rcx,[rsp+0x178]
  689b81:	00 
  689b82:	48 89 9c 24 50 01 00 	mov    QWORD PTR [rsp+0x150],rbx
  689b89:	00 
  689b8a:	48 89 59 f8          	mov    QWORD PTR [rcx-0x8],rbx
  689b8e:	48 89 84 24 58 01 00 	mov    QWORD PTR [rsp+0x158],rax
  689b95:	00 
  689b96:	48 89 01             	mov    QWORD PTR [rcx],rax
  689b99:	b9 5b e7 96 63       	mov    ecx,0x6396e75b
  689b9e:	31 c0                	xor    eax,eax
  689ba0:	31 d2                	xor    edx,edx
  689ba2:	81 f9 8b b0 58 95    	cmp    ecx,0x9558b08b
  689ba8:	0f 84 25 01 00 00    	je     689cd3 <__cxa_finalize@plt-0xd2913d>
  689bae:	81 f9 d4 c0 47 c6    	cmp    ecx,0xc647c0d4
  689bb4:	0f 84 3c 01 00 00    	je     689cf6 <__cxa_finalize@plt-0xd2911a>
  689bba:	81 f9 bd 11 d9 c8    	cmp    ecx,0xc8d911bd
  689bc0:	74 71                	je     689c33 <__cxa_finalize@plt-0xd291dd>
  689bc2:	81 f9 3b 28 6b cd    	cmp    ecx,0xcd6b283b
  689bc8:	74 76                	je     689c40 <__cxa_finalize@plt-0xd291d0>
  689bca:	81 f9 67 74 dd ec    	cmp    ecx,0xecdd7467
  689bd0:	0f 84 06 01 00 00    	je     689cdc <__cxa_finalize@plt-0xd29134>
  689bd6:	81 f9 2f a9 18 f4    	cmp    ecx,0xf418a92f
  689bdc:	0f 84 87 00 00 00    	je     689c69 <__cxa_finalize@plt-0xd291a7>
  689be2:	81 f9 81 93 83 f7    	cmp    ecx,0xf7839381
  689be8:	0f 84 bf 00 00 00    	je     689cad <__cxa_finalize@plt-0xd29163>
  689bee:	81 f9 9a 8d 5a 2c    	cmp    ecx,0x2c5a8d9a
  689bf4:	0f 84 aa 00 00 00    	je     689ca4 <__cxa_finalize@plt-0xd2916c>
  689bfa:	81 f9 3a 84 c6 30    	cmp    ecx,0x30c6843a
  689c00:	0f 84 dd 00 00 00    	je     689ce3 <__cxa_finalize@plt-0xd2912d>
  689c06:	81 f9 c0 ee 02 53    	cmp    ecx,0x5302eec0
  689c0c:	0f 84 db 00 00 00    	je     689ced <__cxa_finalize@plt-0xd29123>
  689c12:	81 f9 43 44 76 54    	cmp    ecx,0x54764443
  689c18:	74 5b                	je     689c75 <__cxa_finalize@plt-0xd2919b>
  689c1a:	81 f9 5b e7 96 63    	cmp    ecx,0x6396e75b
  689c20:	74 79                	je     689c9b <__cxa_finalize@plt-0xd29175>
  689c22:	81 f9 ca f4 3d ab    	cmp    ecx,0xab3df4ca
  689c28:	0f 85 cf 00 00 00    	jne    689cfd <__cxa_finalize@plt-0xd29113>
  689c2e:	e9 d1 00 00 00       	jmp    689d04 <__cxa_finalize@plt-0xd2910c>
  689c33:	c0 c0 02             	rol    al,0x2
  689c36:	ba 87 95 1f f8       	mov    edx,0xf81f9587
  689c3b:	e9 bd 00 00 00       	jmp    689cfd <__cxa_finalize@plt-0xd29113>
  689c40:	c0 c0 04             	rol    al,0x4
  689c43:	89 c2                	mov    edx,eax
  689c45:	80 e2 33             	and    dl,0x33
  689c48:	c0 e2 02             	shl    dl,0x2
  689c4b:	c0 e8 02             	shr    al,0x2
  689c4e:	24 33                	and    al,0x33
  689c50:	08 d0                	or     al,dl
  689c52:	89 c2                	mov    edx,eax
  689c54:	80 e2 55             	and    dl,0x55
  689c57:	00 d2                	add    dl,dl
  689c59:	d0 e8                	shr    al,1
  689c5b:	24 55                	and    al,0x55
  689c5d:	08 d0                	or     al,dl
  689c5f:	ba f1 dc 56 66       	mov    edx,0x6656dcf1
  689c64:	e9 94 00 00 00       	jmp    689cfd <__cxa_finalize@plt-0xd29113>
  689c69:	04 a5                	add    al,0xa5
  689c6b:	ba ae 3a 9b 03       	mov    edx,0x39b3aae
  689c70:	e9 88 00 00 00       	jmp    689cfd <__cxa_finalize@plt-0xd29113>
  689c75:	c0 c0 04             	rol    al,0x4
  689c78:	89 c2                	mov    edx,eax
  689c7a:	80 e2 33             	and    dl,0x33
  689c7d:	c0 e2 02             	shl    dl,0x2
  689c80:	c0 e8 02             	shr    al,0x2
  689c83:	24 33                	and    al,0x33
  689c85:	08 d0                	or     al,dl
  689c87:	89 c2                	mov    edx,eax
  689c89:	80 e2 55             	and    dl,0x55
  689c8c:	00 d2                	add    dl,dl
  689c8e:	d0 e8                	shr    al,1
  689c90:	24 55                	and    al,0x55
  689c92:	08 d0                	or     al,dl
  689c94:	ba fe 55 af 9c       	mov    edx,0x9caf55fe
  689c99:	eb 62                	jmp    689cfd <__cxa_finalize@plt-0xd29113>
  689c9b:	b0 67                	mov    al,0x67
  689c9d:	ba 3c 93 4b 8f       	mov    edx,0x8f4b933c
  689ca2:	eb 59                	jmp    689cfd <__cxa_finalize@plt-0xd29113>
  689ca4:	34 8b                	xor    al,0x8b
  689ca6:	ba b5 24 42 d8       	mov    edx,0xd84224b5
  689cab:	eb 50                	jmp    689cfd <__cxa_finalize@plt-0xd29113>
  689cad:	c0 c0 04             	rol    al,0x4
  689cb0:	89 c2                	mov    edx,eax
  689cb2:	80 e2 33             	and    dl,0x33
  689cb5:	c0 e2 02             	shl    dl,0x2
  689cb8:	c0 e8 02             	shr    al,0x2
  689cbb:	24 33                	and    al,0x33
  689cbd:	08 d0                	or     al,dl
  689cbf:	89 c2                	mov    edx,eax
  689cc1:	80 e2 55             	and    dl,0x55
  689cc4:	00 d2                	add    dl,dl
  689cc6:	d0 e8                	shr    al,1
  689cc8:	24 55                	and    al,0x55
  689cca:	08 d0                	or     al,dl
  689ccc:	ba 41 7d 81 a4       	mov    edx,0xa4817d41
  689cd1:	eb 2a                	jmp    689cfd <__cxa_finalize@plt-0xd29113>
  689cd3:	04 a2                	add    al,0xa2
  689cd5:	ba 5f 70 1f 53       	mov    edx,0x531f705f
  689cda:	eb 21                	jmp    689cfd <__cxa_finalize@plt-0xd29113>
  689cdc:	ba 24 30 ab b8       	mov    edx,0xb8ab3024
  689ce1:	eb 1a                	jmp    689cfd <__cxa_finalize@plt-0xd29113>
  689ce3:	c0 c0 06             	rol    al,0x6
  689ce6:	ba b1 34 9e a5       	mov    edx,0xa59e34b1
  689ceb:	eb 10                	jmp    689cfd <__cxa_finalize@plt-0xd29113>
  689ced:	04 cf                	add    al,0xcf
  689cef:	ba fb c6 69 9e       	mov    edx,0x9e69c6fb
  689cf4:	eb 07                	jmp    689cfd <__cxa_finalize@plt-0xd29113>
  689cf6:	d0 c0                	rol    al,1
  689cf8:	ba 4e 4d 1d ea       	mov    edx,0xea1d4d4e
  689cfd:	31 d1                	xor    ecx,edx
  689cff:	e9 9e fe ff ff       	jmp    689ba2 <__cxa_finalize@plt-0xd2926e>
  689d04:	ba 78 2d 80 fb       	mov    edx,0xfb802d78
  689d09:	31 c9                	xor    ecx,ecx
  689d0b:	31 f6                	xor    esi,esi
  689d0d:	81 fa d2 bf 5e a7    	cmp    edx,0xa75ebfd2
  689d13:	74 5d                	je     689d72 <__cxa_finalize@plt-0xd2909e>
  689d15:	81 fa ff eb 4b ea    	cmp    edx,0xea4bebff
  689d1b:	74 42                	je     689d5f <__cxa_finalize@plt-0xd290b1>
  689d1d:	81 fa 78 2d 80 fb    	cmp    edx,0xfb802d78
  689d23:	74 44                	je     689d69 <__cxa_finalize@plt-0xd290a7>
  689d25:	81 fa 5a 68 c2 05    	cmp    edx,0x5c2685a
  689d2b:	74 59                	je     689d86 <__cxa_finalize@plt-0xd2908a>
  689d2d:	81 fa 4a a0 fc 0e    	cmp    edx,0xefca04a
  689d33:	74 73                	je     689da8 <__cxa_finalize@plt-0xd29068>
  689d35:	81 fa c5 e9 5d 16    	cmp    edx,0x165de9c5
  689d3b:	74 5a                	je     689d97 <__cxa_finalize@plt-0xd29079>
  689d3d:	81 fa f7 ca b7 21    	cmp    edx,0x21b7caf7
  689d43:	74 5c                	je     689da1 <__cxa_finalize@plt-0xd2906f>
  689d45:	81 fa 66 b3 78 27    	cmp    edx,0x2778b366
  689d4b:	74 2f                	je     689d7c <__cxa_finalize@plt-0xd29094>
  689d4d:	81 fa 65 38 bf 51    	cmp    edx,0x51bf3865
  689d53:	74 38                	je     689d8d <__cxa_finalize@plt-0xd29083>
  689d55:	81 fa dd 11 b4 0f    	cmp    edx,0xfb411dd
  689d5b:	75 77                	jne    689dd4 <__cxa_finalize@plt-0xd2903c>
  689d5d:	eb 7c                	jmp    689ddb <__cxa_finalize@plt-0xd29035>
  689d5f:	80 c1 e9             	add    cl,0xe9
  689d62:	be a5 83 89 ef       	mov    esi,0xef8983a5
  689d67:	eb 6b                	jmp    689dd4 <__cxa_finalize@plt-0xd2903c>
  689d69:	b1 69                	mov    cl,0x69
  689d6b:	be 87 c6 cb 11       	mov    esi,0x11cbc687
  689d70:	eb 62                	jmp    689dd4 <__cxa_finalize@plt-0xd2903c>
  689d72:	c0 c1 06             	rol    cl,0x6
  689d75:	be 17 56 03 b1       	mov    esi,0xb1035617
  689d7a:	eb 58                	jmp    689dd4 <__cxa_finalize@plt-0xd2903c>
  689d7c:	c0 c1 06             	rol    cl,0x6
  689d7f:	be bb a2 cc 28       	mov    esi,0x28cca2bb
  689d84:	eb 4e                	jmp    689dd4 <__cxa_finalize@plt-0xd2903c>
  689d86:	be 10 c8 3e 0b       	mov    esi,0xb3ec810
  689d8b:	eb 47                	jmp    689dd4 <__cxa_finalize@plt-0xd2903c>
  689d8d:	80 c1 d3             	add    cl,0xd3
  689d90:	be 92 f2 08 70       	mov    esi,0x7008f292
  689d95:	eb 3d                	jmp    689dd4 <__cxa_finalize@plt-0xd2903c>
  689d97:	80 c1 04             	add    cl,0x4
  689d9a:	be a0 d1 e2 47       	mov    esi,0x47e2d1a0
  689d9f:	eb 33                	jmp    689dd4 <__cxa_finalize@plt-0xd2903c>
  689da1:	be 91 79 cf 06       	mov    esi,0x6cf7991
  689da6:	eb 2c                	jmp    689dd4 <__cxa_finalize@plt-0xd2903c>
  689da8:	c0 c1 04             	rol    cl,0x4
  689dab:	89 ce                	mov    esi,ecx
  689dad:	40 80 e6 33          	and    sil,0x33
  689db1:	40 c0 e6 02          	shl    sil,0x2
  689db5:	c0 e9 02             	shr    cl,0x2
  689db8:	80 e1 33             	and    cl,0x33
  689dbb:	40 08 f1             	or     cl,sil
  689dbe:	89 ce                	mov    esi,ecx
  689dc0:	40 80 e6 55          	and    sil,0x55
  689dc4:	40 00 f6             	add    sil,sil
  689dc7:	d0 e9                	shr    cl,1
  689dc9:	80 e1 55             	and    cl,0x55
  689dcc:	40 08 f1             	or     cl,sil
  689dcf:	be 98 1f a2 a9       	mov    esi,0xa9a21f98
  689dd4:	31 f2                	xor    edx,esi
  689dd6:	e9 32 ff ff ff       	jmp    689d0d <__cxa_finalize@plt-0xd29103>
  689ddb:	88 44 24 7e          	mov    BYTE PTR [rsp+0x7e],al
  689ddf:	88 4c 24 7f          	mov    BYTE PTR [rsp+0x7f],cl
  689de3:	6a 01                	push   0x1
  689de5:	5a                   	pop    rdx
  689de6:	bf 96 07 00 00       	mov    edi,0x796
  689deb:	48 89 d6             	mov    rsi,rdx
  689dee:	e8 81 40 ff ff       	call   67de74 <__cxa_finalize@plt-0xd34f9c>
  689df3:	4c 8d b4 24 40 2a 00 	lea    r14,[rsp+0x2a40]
  689dfa:	00 
  689dfb:	49 89 06             	mov    QWORD PTR [r14],rax
  689dfe:	49 89 56 08          	mov    QWORD PTR [r14+0x8],rdx
  689e02:	49 83 66 10 00       	and    QWORD PTR [r14+0x10],0x0
  689e07:	be 96 07 00 00       	mov    esi,0x796
  689e0c:	4c 89 f7             	mov    rdi,r14
  689e0f:	e8 fd 55 f6 ff       	call   5ef411 <__cxa_finalize@plt-0xdc39ff>
  689e14:	4d 8b 7e 08          	mov    r15,QWORD PTR [r14+0x8]
  689e18:	49 8b 76 10          	mov    rsi,QWORD PTR [r14+0x10]
  689e1c:	31 c0                	xor    eax,eax
  689e1e:	48 8d 0d 4e 3d b9 ff 	lea    rcx,[rip+0xffffffffffb93d4e]        # 21db73 <__cxa_finalize@plt-0x119529d>
  689e25:	89 c2                	mov    edx,eax
  689e27:	83 e2 01             	and    edx,0x1
  689e2a:	8a 54 14 7e          	mov    dl,BYTE PTR [rsp+rdx*1+0x7e]
  689e2e:	32 14 08             	xor    dl,BYTE PTR [rax+rcx*1]
  689e31:	41 88 14 37          	mov    BYTE PTR [r15+rsi*1],dl
  689e35:	48 ff c6             	inc    rsi
  689e38:	48 ff c0             	inc    rax
  689e3b:	48 3d 96 07 00 00    	cmp    rax,0x796
  689e41:	75 e2                	jne    689e25 <__cxa_finalize@plt-0xd28feb>
  689e43:	48 89 74 24 08       	mov    QWORD PTR [rsp+0x8],rsi
  689e48:	4c 8b b4 24 40 2a 00 	mov    r14,QWORD PTR [rsp+0x2a40]
  689e4f:	00 
  689e50:	b8 46 f7 64 c1       	mov    eax,0xc164f746
  689e55:	48 c7 04 24 00 00 00 	mov    QWORD PTR [rsp],0x0
  689e5c:	00 
  689e5d:	48 b9 83 c3 15 c7 fe 	movabs rcx,0xef0bebfec715c383
  689e64:	eb 0b ef 
  689e67:	48 ba 7a 02 b5 e4 30 	movabs rdx,0x4e0e7d30e4b5027a
  689e6e:	7d 0e 4e 
  689e71:	48 be 19 d3 84 75 13 	movabs rsi,0xf96358137584d319
  689e78:	58 63 f9 
  689e7b:	48 bf 0f 0f 0f 0f 0f 	movabs rdi,0xf0f0f0f0f0f0f0f
  689e82:	0f 0f 0f 
  689e85:	49 b8 33 33 33 33 33 	movabs r8,0x3333333333333333
  689e8c:	33 33 33 
  689e8f:	49 b9 55 55 55 55 55 	movabs r9,0x5555555555555555
  689e96:	55 55 55 
  689e99:	49 ba ff 00 0f 11 4d 	movabs r10,0xea51454d110f00ff
  689ea0:	45 51 ea 
  689ea3:	45 31 db             	xor    r11d,r11d
  689ea6:	3d 37 88 82 87       	cmp    eax,0x87828837
  689eab:	0f 84 54 01 00 00    	je     68a005 <__cxa_finalize@plt-0xd28e0b>
  689eb1:	3d 6f ab 33 8c       	cmp    eax,0x8c33ab6f
  689eb6:	0f 84 81 01 00 00    	je     68a03d <__cxa_finalize@plt-0xd28dd3>
  689ebc:	3d 39 a0 7f 9b       	cmp    eax,0x9b7fa039
  689ec1:	74 6e                	je     689f31 <__cxa_finalize@plt-0xd28edf>
  689ec3:	3d af e7 f1 bb       	cmp    eax,0xbbf1e7af
  689ec8:	74 79                	je     689f43 <__cxa_finalize@plt-0xd28ecd>
  689eca:	3d 9d 17 63 be       	cmp    eax,0xbe63179d
  689ecf:	0f 84 40 01 00 00    	je     68a015 <__cxa_finalize@plt-0xd28dfb>
  689ed5:	3d 46 f7 64 c1       	cmp    eax,0xc164f746
  689eda:	74 7a                	je     689f56 <__cxa_finalize@plt-0xd28eba>
  689edc:	3d 71 84 dc e8       	cmp    eax,0xe8dc8471
  689ee1:	0f 84 da 00 00 00    	je     689fc1 <__cxa_finalize@plt-0xd28e4f>
  689ee7:	48 8b 1c 24          	mov    rbx,QWORD PTR [rsp]
  689eeb:	48 0f cb             	bswap  rbx
  689eee:	3d ea 23 b2 f6       	cmp    eax,0xf6b223ea
  689ef3:	0f 84 bd 00 00 00    	je     689fb6 <__cxa_finalize@plt-0xd28e5a>
  689ef9:	3d b9 35 6e f8       	cmp    eax,0xf86e35b9
  689efe:	0f 84 21 01 00 00    	je     68a025 <__cxa_finalize@plt-0xd28deb>
  689f04:	3d f9 cd 53 fd       	cmp    eax,0xfd53cdf9
  689f09:	0f 84 1e 01 00 00    	je     68a02d <__cxa_finalize@plt-0xd28de3>
  689f0f:	3d b6 14 c3 1a       	cmp    eax,0x1ac314b6
  689f14:	74 4e                	je     689f64 <__cxa_finalize@plt-0xd28eac>
  689f16:	3d d9 e2 02 71       	cmp    eax,0x7102e2d9
  689f1b:	74 59                	je     689f76 <__cxa_finalize@plt-0xd28e9a>
  689f1d:	3d d0 44 ad 46       	cmp    eax,0x46ad44d0
  689f22:	0f 84 2e 01 00 00    	je     68a056 <__cxa_finalize@plt-0xd28dba>
  689f28:	48 8b 1c 24          	mov    rbx,QWORD PTR [rsp]
  689f2c:	e9 19 01 00 00       	jmp    68a04a <__cxa_finalize@plt-0xd28dc6>
  689f31:	48 8b 1c 24          	mov    rbx,QWORD PTR [rsp]
  689f35:	48 01 d3             	add    rbx,rdx
  689f38:	41 bb d3 83 cd 6d    	mov    r11d,0x6dcd83d3
  689f3e:	e9 07 01 00 00       	jmp    68a04a <__cxa_finalize@plt-0xd28dc6>
  689f43:	48 8b 1c 24          	mov    rbx,QWORD PTR [rsp]
  689f47:	48 c1 c3 1b          	rol    rbx,0x1b
  689f4b:	41 bb 76 05 f3 ca    	mov    r11d,0xcaf30576
  689f51:	e9 f4 00 00 00       	jmp    68a04a <__cxa_finalize@plt-0xd28dc6>
  689f56:	41 bb bf 3a 37 3c    	mov    r11d,0x3c373abf
  689f5c:	48 89 f3             	mov    rbx,rsi
  689f5f:	e9 e6 00 00 00       	jmp    68a04a <__cxa_finalize@plt-0xd28dc6>
  689f64:	48 8b 1c 24          	mov    rbx,QWORD PTR [rsp]
  689f68:	4c 01 d3             	add    rbx,r10
  689f6b:	41 bb 2b 03 a0 a4    	mov    r11d,0xa4a0032b
  689f71:	e9 d4 00 00 00       	jmp    68a04a <__cxa_finalize@plt-0xd28dc6>
  689f76:	49 89 db             	mov    r11,rbx
  689f79:	49 c1 eb 04          	shr    r11,0x4
  689f7d:	49 21 fb             	and    r11,rdi
  689f80:	48 21 fb             	and    rbx,rdi
  689f83:	48 c1 e3 04          	shl    rbx,0x4
  689f87:	4c 09 db             	or     rbx,r11
  689f8a:	49 89 db             	mov    r11,rbx
  689f8d:	4d 21 c3             	and    r11,r8
  689f90:	48 c1 eb 02          	shr    rbx,0x2
  689f94:	4c 21 c3             	and    rbx,r8
  689f97:	4e 8d 1c 9b          	lea    r11,[rbx+r11*4]
  689f9b:	4c 89 db             	mov    rbx,r11
  689f9e:	4c 21 cb             	and    rbx,r9
  689fa1:	49 d1 eb             	shr    r11,1
  689fa4:	4d 21 cb             	and    r11,r9
  689fa7:	49 8d 1c 5b          	lea    rbx,[r11+rbx*2]
  689fab:	41 bb 60 d7 6c 89    	mov    r11d,0x896cd760
  689fb1:	e9 94 00 00 00       	jmp    68a04a <__cxa_finalize@plt-0xd28dc6>
  689fb6:	41 bb 45 c4 43 4d    	mov    r11d,0x4d43c445
  689fbc:	e9 89 00 00 00       	jmp    68a04a <__cxa_finalize@plt-0xd28dc6>
  689fc1:	48 8b 1c 24          	mov    rbx,QWORD PTR [rsp]
  689fc5:	48 0f cb             	bswap  rbx
  689fc8:	49 89 db             	mov    r11,rbx
  689fcb:	49 c1 eb 04          	shr    r11,0x4
  689fcf:	49 21 fb             	and    r11,rdi
  689fd2:	48 21 fb             	and    rbx,rdi
  689fd5:	48 c1 e3 04          	shl    rbx,0x4
  689fd9:	4c 09 db             	or     rbx,r11
  689fdc:	49 89 db             	mov    r11,rbx
  689fdf:	4d 21 c3             	and    r11,r8
  689fe2:	48 c1 eb 02          	shr    rbx,0x2
  689fe6:	4c 21 c3             	and    rbx,r8
  689fe9:	4e 8d 1c 9b          	lea    r11,[rbx+r11*4]
  689fed:	4c 89 db             	mov    rbx,r11
  689ff0:	4c 21 cb             	and    rbx,r9
  689ff3:	49 d1 eb             	shr    r11,1
  689ff6:	4d 21 cb             	and    r11,r9
  689ff9:	49 8d 1c 5b          	lea    rbx,[r11+rbx*2]
  689ffd:	41 bb c7 90 1f f2    	mov    r11d,0xf21f90c7
  68a003:	eb 45                	jmp    68a04a <__cxa_finalize@plt-0xd28dc6>
  68a005:	48 8b 1c 24          	mov    rbx,QWORD PTR [rsp]
  68a009:	48 c1 c3 1a          	rol    rbx,0x1a
  68a00d:	41 bb 0e 28 fd 1c    	mov    r11d,0x1cfd280e
  68a013:	eb 35                	jmp    68a04a <__cxa_finalize@plt-0xd28dc6>
  68a015:	48 8b 1c 24          	mov    rbx,QWORD PTR [rsp]
  68a019:	48 c1 c3 1d          	rol    rbx,0x1d
  68a01d:	41 bb aa 9f e1 39    	mov    r11d,0x39e19faa
  68a023:	eb 25                	jmp    68a04a <__cxa_finalize@plt-0xd28dc6>
  68a025:	41 bb d6 9e 5d 74    	mov    r11d,0x745d9ed6
  68a02b:	eb 1d                	jmp    68a04a <__cxa_finalize@plt-0xd28dc6>
  68a02d:	48 8b 1c 24          	mov    rbx,QWORD PTR [rsp]
  68a031:	48 c1 c3 0e          	rol    rbx,0xe
  68a035:	41 bb 88 49 8f 15    	mov    r11d,0x158f4988
  68a03b:	eb 0d                	jmp    68a04a <__cxa_finalize@plt-0xd28dc6>
  68a03d:	48 8b 1c 24          	mov    rbx,QWORD PTR [rsp]
  68a041:	48 01 cb             	add    rbx,rcx
  68a044:	41 bb bf ef 9e ca    	mov    r11d,0xca9eefbf
  68a04a:	44 31 d8             	xor    eax,r11d
  68a04d:	48 89 1c 24          	mov    QWORD PTR [rsp],rbx
  68a051:	e9 50 fe ff ff       	jmp    689ea6 <__cxa_finalize@plt-0xd28f6a>
  68a056:	4c 89 b4 24 20 01 00 	mov    QWORD PTR [rsp+0x120],r14
  68a05d:	00 
  68a05e:	48 83 a4 24 40 2a 00 	and    QWORD PTR [rsp+0x2a40],0x0
  68a065:	00 00 
  68a067:	48 c7 84 24 48 2a 00 	mov    QWORD PTR [rsp+0x2a48],0x1
  68a06e:	00 01 00 00 00 
  68a073:	48 83 a4 24 50 2a 00 	and    QWORD PTR [rsp+0x2a50],0x0
  68a07a:	00 00 
  68a07c:	b8 9e d4 7f 71       	mov    eax,0x717fd49e
  68a081:	31 ed                	xor    ebp,ebp
  68a083:	48 b9 da 58 d1 45 cb 	movabs rcx,0x6d99a0cb45d158da
  68a08a:	a0 99 6d 
  68a08d:	48 ba c4 84 ce 34 7d 	movabs rdx,0xd986977d34ce84c4
  68a094:	97 86 d9 
  68a097:	48 be 8b c2 e8 54 d8 	movabs rsi,0x18feb0d854e8c28b
  68a09e:	b0 fe 18 
  68a0a1:	48 bf a5 9c 05 b9 16 	movabs rdi,0xc4f53b16b9059ca5
  68a0a8:	3b f5 c4 
  68a0ab:	49 b8 f2 bd 0c 27 ed 	movabs r8,0xa4f659ed270cbdf2
  68a0b2:	59 f6 a4 
  68a0b5:	49 b9 91 6b 3f f0 1e 	movabs r9,0xb94f861ef03f6b91
  68a0bc:	86 4f b9 
  68a0bf:	49 ba 9d e6 7b d7 6c 	movabs r10,0xec0b9a6cd77be69d
  68a0c6:	9a 0b ec 
  68a0c9:	49 bb 26 76 0c 38 96 	movabs r11,0x7ef98596380c7626
  68a0d0:	85 f9 7e 
  68a0d3:	48 bb 86 ff 6d 86 04 	movabs rbx,0x32999a04866dff86
  68a0da:	9a 99 32 
  68a0dd:	49 be 4a ab a5 ec 71 	movabs r14,0xe196d371eca5ab4a
  68a0e4:	d3 96 e1 
  68a0e7:	45 31 e4             	xor    r12d,r12d
  68a0ea:	3d ce cc 70 9f       	cmp    eax,0x9f70ccce
  68a0ef:	0f 84 31 01 00 00    	je     68a226 <__cxa_finalize@plt-0xd28bea>
  68a0f5:	3d 92 66 f2 9f       	cmp    eax,0x9ff26692
  68a0fa:	0f 84 31 01 00 00    	je     68a231 <__cxa_finalize@plt-0xd28bdf>
  68a100:	3d a7 82 34 a9       	cmp    eax,0xa93482a7
  68a105:	0f 84 80 00 00 00    	je     68a18b <__cxa_finalize@plt-0xd28c85>
  68a10b:	3d 4a a3 ca b0       	cmp    eax,0xb0caa34a
  68a110:	0f 84 d9 00 00 00    	je     68a1ef <__cxa_finalize@plt-0xd28c21>
  68a116:	3d 8a 92 e4 ba       	cmp    eax,0xbae4928a
  68a11b:	0f 84 fa 00 00 00    	je     68a21b <__cxa_finalize@plt-0xd28bf5>
  68a121:	3d 0c a4 71 c0       	cmp    eax,0xc071a40c
  68a126:	74 72                	je     68a19a <__cxa_finalize@plt-0xd28c76>
  68a128:	3d e8 cf fb 00       	cmp    eax,0xfbcfe8
  68a12d:	74 79                	je     68a1a8 <__cxa_finalize@plt-0xd28c68>
  68a12f:	3d a3 dd 93 02       	cmp    eax,0x293dda3
  68a134:	0f 84 c0 00 00 00    	je     68a1fa <__cxa_finalize@plt-0xd28c16>
  68a13a:	3d 6a d7 bd 12       	cmp    eax,0x12bdd76a
  68a13f:	74 76                	je     68a1b7 <__cxa_finalize@plt-0xd28c59>
  68a141:	3d b1 2e aa 26       	cmp    eax,0x26aa2eb1
  68a146:	0f 84 98 00 00 00    	je     68a1e4 <__cxa_finalize@plt-0xd28c2c>
  68a14c:	3d 8b 57 93 2d       	cmp    eax,0x2d93578b
  68a151:	0f 84 82 00 00 00    	je     68a1d9 <__cxa_finalize@plt-0xd28c37>
  68a157:	3d 3e 63 32 63       	cmp    eax,0x6332633e
  68a15c:	0f 84 a3 00 00 00    	je     68a205 <__cxa_finalize@plt-0xd28c0b>
  68a162:	3d 84 69 67 67       	cmp    eax,0x67676984
  68a167:	0f 84 a3 00 00 00    	je     68a210 <__cxa_finalize@plt-0xd28c00>
  68a16d:	3d 9e d4 7f 71       	cmp    eax,0x717fd49e
  68a172:	74 4f                	je     68a1c3 <__cxa_finalize@plt-0xd28c4d>
  68a174:	3d a2 da 73 7e       	cmp    eax,0x7e73daa2
  68a179:	74 53                	je     68a1ce <__cxa_finalize@plt-0xd28c42>
  68a17b:	3d 26 d6 dd c0       	cmp    eax,0xc0ddd626
  68a180:	0f 85 b4 00 00 00    	jne    68a23a <__cxa_finalize@plt-0xd28bd6>
  68a186:	e9 b7 00 00 00       	jmp    68a242 <__cxa_finalize@plt-0xd28bce>
  68a18b:	48 c1 c5 2f          	rol    rbp,0x2f
  68a18f:	41 bc cd 55 89 bb    	mov    r12d,0xbb8955cd
  68a195:	e9 a0 00 00 00       	jmp    68a23a <__cxa_finalize@plt-0xd28bd6>
  68a19a:	4c 01 c5             	add    rbp,r8
  68a19d:	41 bc ab 26 45 69    	mov    r12d,0x694526ab
  68a1a3:	e9 92 00 00 00       	jmp    68a23a <__cxa_finalize@plt-0xd28bd6>
  68a1a8:	48 c1 c5 3c          	rol    rbp,0x3c
  68a1ac:	41 bc 26 03 8b 9f    	mov    r12d,0x9f8b0326
  68a1b2:	e9 83 00 00 00       	jmp    68a23a <__cxa_finalize@plt-0xd28bd6>
  68a1b7:	48 c1 c5 2d          	rol    rbp,0x2d
  68a1bb:	41 bc e0 45 59 a8    	mov    r12d,0xa85945e0
  68a1c1:	eb 77                	jmp    68a23a <__cxa_finalize@plt-0xd28bd6>
  68a1c3:	41 bc 15 83 ec 5c    	mov    r12d,0x5cec8315
  68a1c9:	48 89 dd             	mov    rbp,rbx
  68a1cc:	eb 6c                	jmp    68a23a <__cxa_finalize@plt-0xd28bd6>
  68a1ce:	4c 01 f5             	add    rbp,r14
  68a1d1:	41 bc 4a 15 88 7e    	mov    r12d,0x7e88154a
  68a1d7:	eb 61                	jmp    68a23a <__cxa_finalize@plt-0xd28bd6>
  68a1d9:	4c 01 dd             	add    rbp,r11
  68a1dc:	41 bc b5 34 a1 4e    	mov    r12d,0x4ea134b5
  68a1e2:	eb 56                	jmp    68a23a <__cxa_finalize@plt-0xd28bd6>
  68a1e4:	4c 01 d5             	add    rbp,r10
  68a1e7:	41 bc 23 48 58 b9    	mov    r12d,0xb9584823
  68a1ed:	eb 4b                	jmp    68a23a <__cxa_finalize@plt-0xd28bd6>
  68a1ef:	48 31 f5             	xor    rbp,rsi
  68a1f2:	41 bc fb 8d 60 96    	mov    r12d,0x96608dfb
  68a1f8:	eb 40                	jmp    68a23a <__cxa_finalize@plt-0xd28bd6>
  68a1fa:	4c 01 cd             	add    rbp,r9
  68a1fd:	41 bc 85 0b 4e c2    	mov    r12d,0xc24e0b85
  68a203:	eb 35                	jmp    68a23a <__cxa_finalize@plt-0xd28bd6>
  68a205:	48 0f cd             	bswap  rbp
  68a208:	41 bc 74 c0 f8 d3    	mov    r12d,0xd3f8c074
  68a20e:	eb 2a                	jmp    68a23a <__cxa_finalize@plt-0xd28bd6>
  68a210:	48 d1 cd             	ror    rbp,1
  68a213:	41 bc 27 b4 f4 65    	mov    r12d,0x65f4b427
  68a219:	eb 1f                	jmp    68a23a <__cxa_finalize@plt-0xd28bd6>
  68a21b:	48 31 fd             	xor    rbp,rdi
  68a21e:	41 bc 0e fb 83 dd    	mov    r12d,0xdd83fb0e
  68a224:	eb 14                	jmp    68a23a <__cxa_finalize@plt-0xd28bd6>
  68a226:	48 01 cd             	add    rbp,rcx
  68a229:	41 bc c2 68 01 5f    	mov    r12d,0x5f0168c2
  68a22f:	eb 09                	jmp    68a23a <__cxa_finalize@plt-0xd28bd6>
  68a231:	48 01 d5             	add    rbp,rdx
  68a234:	41 bc 30 bc 81 e1    	mov    r12d,0xe181bc30
  68a23a:	44 31 e0             	xor    eax,r12d
  68a23d:	e9 a8 fe ff ff       	jmp    68a0ea <__cxa_finalize@plt-0xd28d26>
  68a242:	48 8b 5c 24 08       	mov    rbx,QWORD PTR [rsp+0x8]
  68a247:	48 39 dd             	cmp    rbp,rbx
  68a24a:	0f 83 a8 02 00 00    	jae    68a4f8 <__cxa_finalize@plt-0xd28918>
  68a250:	45 8a 34 2f          	mov    r14b,BYTE PTR [r15+rbp*1]
  68a254:	b8 77 27 28 c0       	mov    eax,0xc0282777
  68a259:	45 31 e4             	xor    r12d,r12d
  68a25c:	31 c9                	xor    ecx,ecx
  68a25e:	3d 4e bd a5 99       	cmp    eax,0x99a5bd4e
  68a263:	0f 84 18 01 00 00    	je     68a381 <__cxa_finalize@plt-0xd28a8f>
  68a269:	3d 61 aa a2 a2       	cmp    eax,0xa2a2aa61
  68a26e:	74 7d                	je     68a2ed <__cxa_finalize@plt-0xd28b23>
  68a270:	3d 77 27 28 c0       	cmp    eax,0xc0282777
  68a275:	0f 84 f2 00 00 00    	je     68a36d <__cxa_finalize@plt-0xd28aa3>
  68a27b:	3d 56 dd 30 c6       	cmp    eax,0xc630dd56
  68a280:	0f 84 31 01 00 00    	je     68a3b7 <__cxa_finalize@plt-0xd28a59>
  68a286:	3d 92 aa ef d4       	cmp    eax,0xd4efaa92
  68a28b:	0f 84 31 01 00 00    	je     68a3c2 <__cxa_finalize@plt-0xd28a4e>
  68a291:	3d 05 1f 9f 0a       	cmp    eax,0xa9f1f05
  68a296:	0f 84 fb 00 00 00    	je     68a397 <__cxa_finalize@plt-0xd28a79>
  68a29c:	3d 93 8b 0c 27       	cmp    eax,0x270c8b93
  68a2a1:	0f 84 05 01 00 00    	je     68a3ac <__cxa_finalize@plt-0xd28a64>
  68a2a7:	3d ed 5f 69 34       	cmp    eax,0x34695fed
  68a2ac:	74 73                	je     68a321 <__cxa_finalize@plt-0xd28aef>
  68a2ae:	3d 5b d4 3b 44       	cmp    eax,0x443bd45b
  68a2b3:	0f 84 e9 00 00 00    	je     68a3a2 <__cxa_finalize@plt-0xd28a6e>
  68a2b9:	3d c1 8a 12 4b       	cmp    eax,0x4b128ac1
  68a2be:	74 6e                	je     68a32e <__cxa_finalize@plt-0xd28ae2>
  68a2c0:	3d 23 67 fe 54       	cmp    eax,0x54fe6723
  68a2c5:	0f 84 ac 00 00 00    	je     68a377 <__cxa_finalize@plt-0xd28a99>
  68a2cb:	3d 4c f2 8a 67       	cmp    eax,0x678af24c
  68a2d0:	74 6a                	je     68a33c <__cxa_finalize@plt-0xd28ad4>
  68a2d2:	3d 2d 1b ee 6e       	cmp    eax,0x6eee1b2d
  68a2d7:	0f 84 af 00 00 00    	je     68a38c <__cxa_finalize@plt-0xd28a84>
  68a2dd:	3d 06 8f 80 40       	cmp    eax,0x40808f06
  68a2e2:	0f 85 e3 00 00 00    	jne    68a3cb <__cxa_finalize@plt-0xd28a45>
  68a2e8:	e9 e5 00 00 00       	jmp    68a3d2 <__cxa_finalize@plt-0xd28a3e>
  68a2ed:	41 c0 c4 04          	rol    r12b,0x4
  68a2f1:	44 89 e1             	mov    ecx,r12d
  68a2f4:	80 e1 33             	and    cl,0x33
  68a2f7:	c0 e1 02             	shl    cl,0x2
  68a2fa:	41 c0 ec 02          	shr    r12b,0x2
  68a2fe:	41 80 e4 33          	and    r12b,0x33
  68a302:	41 08 cc             	or     r12b,cl
  68a305:	44 89 e1             	mov    ecx,r12d
  68a308:	80 e1 55             	and    cl,0x55
  68a30b:	00 c9                	add    cl,cl
  68a30d:	41 d0 ec             	shr    r12b,1
  68a310:	41 80 e4 55          	and    r12b,0x55
  68a314:	41 08 cc             	or     r12b,cl
  68a317:	b9 8c f5 cb 96       	mov    ecx,0x96cbf58c
  68a31c:	e9 aa 00 00 00       	jmp    68a3cb <__cxa_finalize@plt-0xd28a45>
  68a321:	41 d0 cc             	ror    r12b,1
  68a324:	b9 e8 40 f6 3e       	mov    ecx,0x3ef640e8
  68a329:	e9 9d 00 00 00       	jmp    68a3cb <__cxa_finalize@plt-0xd28a45>
  68a32e:	41 80 c4 63          	add    r12b,0x63
  68a332:	b9 e2 ed ec 1f       	mov    ecx,0x1fecede2
  68a337:	e9 8f 00 00 00       	jmp    68a3cb <__cxa_finalize@plt-0xd28a45>
  68a33c:	41 c0 c4 04          	rol    r12b,0x4
  68a340:	44 89 e1             	mov    ecx,r12d
  68a343:	80 e1 33             	and    cl,0x33
  68a346:	c0 e1 02             	shl    cl,0x2
  68a349:	41 c0 ec 02          	shr    r12b,0x2
  68a34d:	41 80 e4 33          	and    r12b,0x33
  68a351:	41 08 cc             	or     r12b,cl
  68a354:	44 89 e1             	mov    ecx,r12d
  68a357:	80 e1 55             	and    cl,0x55
  68a35a:	00 c9                	add    cl,cl
  68a35c:	41 d0 ec             	shr    r12b,1
  68a35f:	41 80 e4 55          	and    r12b,0x55
  68a363:	41 08 cc             	or     r12b,cl
  68a366:	b9 8d 78 98 2c       	mov    ecx,0x2c98788d
  68a36b:	eb 5e                	jmp    68a3cb <__cxa_finalize@plt-0xd28a45>
  68a36d:	41 b4 27             	mov    r12b,0x27
  68a370:	b9 2c f3 13 84       	mov    ecx,0x8413f32c
  68a375:	eb 54                	jmp    68a3cb <__cxa_finalize@plt-0xd28a45>
  68a377:	41 d0 cc             	ror    r12b,1
  68a37a:	b9 0e 7c 10 3a       	mov    ecx,0x3a107c0e
  68a37f:	eb 4a                	jmp    68a3cb <__cxa_finalize@plt-0xd28a45>
  68a381:	41 80 c4 24          	add    r12b,0x24
  68a385:	b9 dd 36 a9 be       	mov    ecx,0xbea936dd
  68a38a:	eb 3f                	jmp    68a3cb <__cxa_finalize@plt-0xd28a45>
  68a38c:	41 80 c4 07          	add    r12b,0x7
  68a390:	b9 7b c6 de a8       	mov    ecx,0xa8dec67b
  68a395:	eb 34                	jmp    68a3cb <__cxa_finalize@plt-0xd28a45>
  68a397:	41 80 f4 ca          	xor    r12b,0xca
  68a39b:	b9 49 ed 15 6d       	mov    ecx,0x6d15ed49
  68a3a0:	eb 29                	jmp    68a3cb <__cxa_finalize@plt-0xd28a45>
  68a3a2:	41 d0 cc             	ror    r12b,1
  68a3a5:	b9 3a 7e 99 e6       	mov    ecx,0xe6997e3a
  68a3aa:	eb 1f                	jmp    68a3cb <__cxa_finalize@plt-0xd28a45>
  68a3ac:	41 c0 c4 05          	rol    r12b,0x5
  68a3b0:	b9 01 21 e3 f3       	mov    ecx,0xf3e32101
  68a3b5:	eb 14                	jmp    68a3cb <__cxa_finalize@plt-0xd28a45>
  68a3b7:	41 80 f4 e5          	xor    r12b,0xe5
  68a3bb:	b9 18 60 95 5f       	mov    ecx,0x5f956018
  68a3c0:	eb 09                	jmp    68a3cb <__cxa_finalize@plt-0xd28a45>
  68a3c2:	41 80 c4 9a          	add    r12b,0x9a
  68a3c6:	b9 94 25 6f 94       	mov    ecx,0x946f2594
  68a3cb:	31 c8                	xor    eax,ecx
  68a3cd:	e9 8c fe ff ff       	jmp    68a25e <__cxa_finalize@plt-0xd28bb2>
  68a3d2:	48 ff c5             	inc    rbp
  68a3d5:	31 c0                	xor    eax,eax
  68a3d7:	44 88 74 24 10       	mov    BYTE PTR [rsp+0x10],r14b
  68a3dc:	83 f8 08             	cmp    eax,0x8
  68a3df:	0f 84 62 fe ff ff    	je     68a247 <__cxa_finalize@plt-0xd28bc9>
  68a3e5:	ff c0                	inc    eax
  68a3e7:	89 44 24 18          	mov    DWORD PTR [rsp+0x18],eax
  68a3eb:	41 bd f2 31 fa fd    	mov    r13d,0xfdfa31f2
  68a3f1:	31 c0                	xor    eax,eax
  68a3f3:	41 81 fd f2 31 fa fd 	cmp    r13d,0xfdfa31f2
  68a3fa:	74 44                	je     68a440 <__cxa_finalize@plt-0xd289d0>
  68a3fc:	41 81 fd a0 c7 75 45 	cmp    r13d,0x4575c7a0
  68a403:	74 12                	je     68a417 <__cxa_finalize@plt-0xd289f9>
  68a405:	41 81 fd b0 15 74 9c 	cmp    r13d,0x9c7415b0
  68a40c:	0f 84 da 00 00 00    	je     68a4ec <__cxa_finalize@plt-0xd28924>
  68a412:	e9 cd 00 00 00       	jmp    68a4e4 <__cxa_finalize@plt-0xd2892c>
  68a417:	45 84 f4             	test   r12b,r14b
  68a41a:	74 37                	je     68a453 <__cxa_finalize@plt-0xd289bd>
  68a41c:	48 39 dd             	cmp    rbp,rbx
  68a41f:	73 12                	jae    68a433 <__cxa_finalize@plt-0xd289dd>
  68a421:	41 0f b6 34 2f       	movzx  esi,BYTE PTR [r15+rbp*1]
  68a426:	48 8d bc 24 40 2a 00 	lea    rdi,[rsp+0x2a40]
  68a42d:	00 
  68a42e:	e8 1d d9 ff ff       	call   687d50 <__cxa_finalize@plt-0xd2b0c0>
  68a433:	48 ff c5             	inc    rbp
  68a436:	b8 10 d2 01 d9       	mov    eax,0xd901d210
  68a43b:	e9 a4 00 00 00       	jmp    68a4e4 <__cxa_finalize@plt-0xd2892c>
  68a440:	b8 52 f6 8f b8       	mov    eax,0xb88ff652
  68a445:	48 39 dd             	cmp    rbp,rbx
  68a448:	0f 82 96 00 00 00    	jb     68a4e4 <__cxa_finalize@plt-0xd2892c>
  68a44e:	e9 99 00 00 00       	jmp    68a4ec <__cxa_finalize@plt-0xd28924>
  68a453:	48 8d 45 01          	lea    rax,[rbp+0x1]
  68a457:	48 39 d8             	cmp    rax,rbx
  68a45a:	0f 83 8c 00 00 00    	jae    68a4ec <__cxa_finalize@plt-0xd28924>
  68a460:	48 39 dd             	cmp    rbp,rbx
  68a463:	73 07                	jae    68a46c <__cxa_finalize@plt-0xd289a4>
  68a465:	41 0f b6 0c 2f       	movzx  ecx,BYTE PTR [r15+rbp*1]
  68a46a:	eb 02                	jmp    68a46e <__cxa_finalize@plt-0xd289a2>
  68a46c:	31 c9                	xor    ecx,ecx
  68a46e:	4d 89 fe             	mov    r14,r15
  68a471:	41 0f b6 1c 07       	movzx  ebx,BYTE PTR [r15+rax*1]
  68a476:	89 d8                	mov    eax,ebx
  68a478:	c1 e0 04             	shl    eax,0x4
  68a47b:	25 00 0f 00 00       	and    eax,0xf00
  68a480:	48 09 c8             	or     rax,rcx
  68a483:	83 e3 0f             	and    ebx,0xf
  68a486:	48 03 1c 24          	add    rbx,QWORD PTR [rsp]
  68a48a:	48 8b 8c 24 50 2a 00 	mov    rcx,QWORD PTR [rsp+0x2a50]
  68a491:	00 
  68a492:	48 29 c1             	sub    rcx,rax
  68a495:	41 bf 00 00 00 00    	mov    r15d,0x0
  68a49b:	4c 0f 43 f9          	cmovae r15,rcx
  68a49f:	48 83 eb 01          	sub    rbx,0x1
  68a4a3:	72 29                	jb     68a4ce <__cxa_finalize@plt-0xd28942>
  68a4a5:	4c 3b bc 24 50 2a 00 	cmp    r15,QWORD PTR [rsp+0x2a50]
  68a4ac:	00 
  68a4ad:	73 1a                	jae    68a4c9 <__cxa_finalize@plt-0xd28947>
  68a4af:	48 8b 84 24 48 2a 00 	mov    rax,QWORD PTR [rsp+0x2a48]
  68a4b6:	00 
  68a4b7:	42 0f b6 34 38       	movzx  esi,BYTE PTR [rax+r15*1]
  68a4bc:	48 8d bc 24 40 2a 00 	lea    rdi,[rsp+0x2a40]
  68a4c3:	00 
  68a4c4:	e8 87 d8 ff ff       	call   687d50 <__cxa_finalize@plt-0xd2b0c0>
  68a4c9:	49 ff c7             	inc    r15
  68a4cc:	eb d1                	jmp    68a49f <__cxa_finalize@plt-0xd28971>
  68a4ce:	48 83 c5 02          	add    rbp,0x2
  68a4d2:	b8 10 d2 01 d9       	mov    eax,0xd901d210
  68a4d7:	4d 89 f7             	mov    r15,r14
  68a4da:	48 8b 5c 24 08       	mov    rbx,QWORD PTR [rsp+0x8]
  68a4df:	44 8a 74 24 10       	mov    r14b,BYTE PTR [rsp+0x10]
  68a4e4:	41 31 c5             	xor    r13d,eax
  68a4e7:	e9 07 ff ff ff       	jmp    68a3f3 <__cxa_finalize@plt-0xd28a1d>
  68a4ec:	45 00 e4             	add    r12b,r12b
  68a4ef:	8b 44 24 18          	mov    eax,DWORD PTR [rsp+0x18]
  68a4f3:	e9 e4 fe ff ff       	jmp    68a3dc <__cxa_finalize@plt-0xd28a34>
  68a4f8:	48 8d 9c 24 40 2a 00 	lea    rbx,[rsp+0x2a40]
  68a4ff:	00 
  68a500:	4c 8b 2b             	mov    r13,QWORD PTR [rbx]
  68a503:	48 8b 43 08          	mov    rax,QWORD PTR [rbx+0x8]
  68a507:	48 89 84 24 c8 00 00 	mov    QWORD PTR [rsp+0xc8],rax
  68a50e:	00 
  68a50f:	48 8b 6b 10          	mov    rbp,QWORD PTR [rbx+0x10]
  68a513:	48 83 a4 24 30 01 00 	and    QWORD PTR [rsp+0x130],0x0
  68a51a:	00 00 
  68a51c:	48 c7 84 24 38 01 00 	mov    QWORD PTR [rsp+0x138],0x1
  68a523:	00 01 00 00 00 
  68a528:	48 83 a4 24 40 01 00 	and    QWORD PTR [rsp+0x140],0x0
  68a52f:	00 00 
  68a531:	ff 15 99 9b d9 00    	call   QWORD PTR [rip+0xd99b99]        # 14240d0 <__memmove_chk@plt+0x706e0>
  68a537:	49 89 c6             	mov    r14,rax
  68a53a:	6a 01                	push   0x1
  68a53c:	59                   	pop    rcx
  68a53d:	48 89 df             	mov    rdi,rbx
  68a540:	48 89 c6             	mov    rsi,rax
  68a543:	31 d2                	xor    edx,edx
  68a545:	49 89 c8             	mov    r8,rcx
  68a548:	e8 4e b2 f5 ff       	call   5e579b <__cxa_finalize@plt-0xdcd675>
  68a54d:	83 3b 01             	cmp    DWORD PTR [rbx],0x1
  68a550:	0f 84 1d 26 00 00    	je     68cb73 <__cxa_finalize@plt-0xd2629d>
  68a556:	48 8b 84 24 50 2a 00 	mov    rax,QWORD PTR [rsp+0x2a50]
  68a55d:	00 
  68a55e:	48 89 44 24 08       	mov    QWORD PTR [rsp+0x8],rax
  68a563:	ff 15 6f 9b d9 00    	call   QWORD PTR [rip+0xd99b6f]        # 14240d8 <__memmove_chk@plt+0x706e8>
  68a569:	48 85 c0             	test   rax,rax
  68a56c:	0f 84 16 26 00 00    	je     68cb88 <__cxa_finalize@plt-0xd26288>
  68a572:	48 89 c7             	mov    rdi,rax
  68a575:	48 89 c3             	mov    rbx,rax
  68a578:	ff 15 62 9b d9 00    	call   QWORD PTR [rip+0xd99b62]        # 14240e0 <__memmove_chk@plt+0x706f0>
  68a57e:	48 89 c7             	mov    rdi,rax
  68a581:	e8 9a 19 04 00       	call   6cbf20 <__cxa_finalize@plt-0xce6ef0>
  68a586:	48 89 c7             	mov    rdi,rax
  68a589:	48 89 d6             	mov    rsi,rdx
  68a58c:	e8 6f 19 04 00       	call   6cbf00 <__cxa_finalize@plt-0xce6f10>
  68a591:	a8 01                	test   al,0x1
  68a593:	75 29                	jne    68a5be <__cxa_finalize@plt-0xd28852>
  68a595:	6a 01                	push   0x1
  68a597:	5e                   	pop    rsi
  68a598:	48 89 df             	mov    rdi,rbx
  68a59b:	31 d2                	xor    edx,edx
  68a59d:	ff 15 45 9b d9 00    	call   QWORD PTR [rip+0xd99b45]        # 14240e8 <__memmove_chk@plt+0x706f8>
  68a5a3:	48 89 c7             	mov    rdi,rax
  68a5a6:	e8 75 19 04 00       	call   6cbf20 <__cxa_finalize@plt-0xce6ef0>
  68a5ab:	48 89 c7             	mov    rdi,rax
  68a5ae:	48 89 d6             	mov    rsi,rdx
  68a5b1:	e8 4a 19 04 00       	call   6cbf00 <__cxa_finalize@plt-0xce6f10>
  68a5b6:	a8 01                	test   al,0x1
  68a5b8:	0f 84 aa 01 00 00    	je     68a768 <__cxa_finalize@plt-0xd286a8>
  68a5be:	49 89 d4             	mov    r12,rdx
  68a5c1:	48 89 df             	mov    rdi,rbx
  68a5c4:	ff 15 26 9b d9 00    	call   QWORD PTR [rip+0xd99b26]        # 14240f0 <__memmove_chk@plt+0x70700>
  68a5ca:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
  68a5cf:	4c 89 f6             	mov    rsi,r14
  68a5d2:	e8 db df 00 00       	call   6985b2 <__cxa_finalize@plt-0xd1a85e>
  68a5d7:	6a 01                	push   0x1
  68a5d9:	5e                   	pop    rsi
  68a5da:	31 ff                	xor    edi,edi
  68a5dc:	e8 73 75 f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  68a5e1:	48 8d b4 24 40 2a 00 	lea    rsi,[rsp+0x2a40]
  68a5e8:	00 
  68a5e9:	4c 89 26             	mov    QWORD PTR [rsi],r12
  68a5ec:	4c 8d b4 24 98 00 00 	lea    r14,[rsp+0x98]
  68a5f3:	00 
  68a5f4:	4c 89 f7             	mov    rdi,r14
  68a5f7:	e8 76 28 00 00       	call   68ce72 <__cxa_finalize@plt-0xd25f9e>
  68a5fc:	4c 89 e7             	mov    rdi,r12
  68a5ff:	e8 d3 28 00 00       	call   68ced7 <__cxa_finalize@plt-0xd25f39>
  68a604:	4d 8b 26             	mov    r12,QWORD PTR [r14]
  68a607:	49 8b 46 08          	mov    rax,QWORD PTR [r14+0x8]
  68a60b:	48 89 44 24 10       	mov    QWORD PTR [rsp+0x10],rax
  68a610:	49 8b 6e 10          	mov    rbp,QWORD PTR [r14+0x10]
  68a614:	b3 01                	mov    bl,0x1
  68a616:	4c 8b b4 24 20 01 00 	mov    r14,QWORD PTR [rsp+0x120]
  68a61d:	00 
  68a61e:	4c 89 ef             	mov    rdi,r13
  68a621:	48 8b b4 24 c8 00 00 	mov    rsi,QWORD PTR [rsp+0xc8]
  68a628:	00 
  68a629:	e8 26 75 f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  68a62e:	4c 89 f7             	mov    rdi,r14
  68a631:	4c 89 fe             	mov    rsi,r15
  68a634:	e8 1b 75 f7 ff       	call   601b54 <__cxa_finalize@plt-0xdb12bc>
  68a639:	84 db                	test   bl,bl
  68a63b:	48 8b 5c 24 10       	mov    rbx,QWORD PTR [rsp+0x10]
  68a640:	0f 85 08 07 00 00    	jne    68ad4e <__cxa_finalize@plt-0xd280c2>
  68a646:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
  68a64b:	48 89 de             	mov    rsi,rbx
  68a64e:	48 89 ea             	mov    rdx,rbp
  68a651:	e8 f7 dc f8 ff       	call   61834d <__cxa_finalize@plt-0xd9aac3>
  68a656:	48 85 c0             	test   rax,rax
  68a659:	0f 84 e5 06 00 00    	je     68ad44 <__cxa_finalize@plt-0xd280cc>
  68a65f:	49 89 c7             	mov    r15,rax
  68a662:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
  68a667:	e8 c0 28 00 00       	call   68cf2c <__cxa_finalize@plt-0xd25ee4>
  68a66c:	49 89 c6             	mov    r14,rax
  68a66f:	48 89 c7             	mov    rdi,rax
  68a672:	e8 e0 d3 f8 ff       	call   617a57 <__cxa_finalize@plt-0xd9b3b9>
  68a677:	4c 89 f7             	mov    rdi,r14
  68a67a:	e8 cd d8 f8 ff       	call   617f4c <__cxa_finalize@plt-0xd9aec4>
  68a67f:	48 89 c7             	mov    rdi,rax
  68a682:	4c 89 fe             	mov    rsi,r15
  68a685:	31 d2                	xor    edx,edx
  68a687:	ff 15 6b 9a d9 00    	call   QWORD PTR [rip+0xd99a6b]        # 14240f8 <__memmove_chk@plt+0x70708>
  68a68d:	48 85 c0             	test   rax,rax
  68a690:	0f 84 a6 06 00 00    	je     68ad3c <__cxa_finalize@plt-0xd280d4>
  68a696:	49 89 c7             	mov    r15,rax
  68a699:	4c 89 f7             	mov    rdi,r14
  68a69c:	e8 b6 d3 f8 ff       	call   617a57 <__cxa_finalize@plt-0xd9b3b9>
  68a6a1:	4c 89 f7             	mov    rdi,r14
  68a6a4:	e8 a3 d8 f8 ff       	call   617f4c <__cxa_finalize@plt-0xd9aec4>
  68a6a9:	4c 89 ff             	mov    rdi,r15
  68a6ac:	48 89 c6             	mov    rsi,rax
  68a6af:	ff 15 4b 9a d9 00    	call   QWORD PTR [rip+0xd99a4b]        # 1424100 <__memmove_chk@plt+0x70710>
  68a6b5:	48 85 c0             	test   rax,rax
  68a6b8:	0f 84 7e 06 00 00    	je     68ad3c <__cxa_finalize@plt-0xd280d4>
  68a6be:	4c 89 64 24 08       	mov    QWORD PTR [rsp+0x8],r12
  68a6c3:	48 8b bc 24 28 01 00 	mov    rdi,QWORD PTR [rsp+0x128]
  68a6ca:	00 
  68a6cb:	4c 89 74 24 18       	mov    QWORD PTR [rsp+0x18],r14
  68a6d0:	4c 89 f6             	mov    rsi,r14
  68a6d3:	e8 d7 dc f8 ff       	call   6183af <__cxa_finalize@plt-0xd9aa61>
  68a6d8:	48 89 84 24 d8 00 00 	mov    QWORD PTR [rsp+0xd8],rax
  68a6df:	00 
  68a6e0:	6a 01                	push   0x1
  68a6e2:	41 5f                	pop    r15
  68a6e4:	4c 89 ff             	mov    rdi,r15
  68a6e7:	6a 04                	push   0x4
  68a6e9:	5b                   	pop    rbx
  68a6ea:	48 89 de             	mov    rsi,rbx
  68a6ed:	e8 45 e5 ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  68a6f2:	48 89 04 24          	mov    QWORD PTR [rsp],rax
  68a6f6:	c7 00 d1 57 07 fb    	mov    DWORD PTR [rax],0xfb0757d1
  68a6fc:	4c 89 ff             	mov    rdi,r15
  68a6ff:	48 89 de             	mov    rsi,rbx
  68a702:	e8 30 e5 ff ff       	call   688c37 <__cxa_finalize@plt-0xd2a1d9>
  68a707:	49 89 c4             	mov    r12,rax
  68a70a:	c7 00 a5 3e 64 90    	mov    DWORD PTR [rax],0x90643ea5
  68a710:	48 89 5c 24 20       	mov    QWORD PTR [rsp+0x20],rbx
  68a715:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
  68a71a:	48 89 5c 24 30       	mov    QWORD PTR [rsp+0x30],rbx
  68a71f:	45 31 ed             	xor    r13d,r13d
  68a722:	4c 8d 3d 6f cb d3 00 	lea    r15,[rip+0xd3cb6f]        # 13c7298 <__memmove_chk@plt+0x138a8>
  68a729:	6a 04                	push   0x4
  68a72b:	5d                   	pop    rbp
  68a72c:	49 83 fd 04          	cmp    r13,0x4
  68a730:	0f 84 ea 04 00 00    	je     68ac20 <__cxa_finalize@plt-0xd281f0>
  68a736:	49 8d 5d 01          	lea    rbx,[r13+0x1]
  68a73a:	48 8b 3c 24          	mov    rdi,QWORD PTR [rsp]
  68a73e:	48 89 ee             	mov    rsi,rbp
  68a741:	4c 89 ea             	mov    rdx,r13
  68a744:	4c 89 f9             	mov    rcx,r15
  68a747:	e8 e8 26 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  68a74c:	44 8a 30             	mov    r14b,BYTE PTR [rax]
  68a74f:	4c 89 e7             	mov    rdi,r12
  68a752:	48 89 ee             	mov    rsi,rbp
  68a755:	4c 89 ea             	mov    rdx,r13
  68a758:	4c 89 f9             	mov    rcx,r15
  68a75b:	e8 d4 26 00 00       	call   68ce34 <__cxa_finalize@plt-0xd25fdc>
  68a760:	44 30 30             	xor    BYTE PTR [rax],r14b
  68a763:	49 89 dd             	mov    r13,rbx
  68a766:	eb c4                	jmp    68a72c <__cxa_finalize@plt-0xd286e4>
  68a768:	4c 89 ac 24 00 01 00 	mov    QWORD PTR [rsp+0x100],r13
  68a76f:	00 
  68a770:	4c 89 bc 24 80 00 00 	mov    QWORD PTR [rsp+0x80],r15
  68a777:	00 
  68a778:	48 8b 44 24 08       	mov    rax,QWORD PTR [rsp+0x8]
  68a77d:	48 89 84 24 90 01 00 	mov    QWORD PTR [rsp+0x190],rax
  68a784:	00 
  68a785:	4c 89 b4 24 98 01 00 	mov    QWORD PTR [rsp+0x198],r14
  68a78c:	00 
  68a78d:	0f 57 c0             	xorps  xmm0,xmm0
  68a790:	0f 11 84 24 a0 01 00 	movups XMMWORD PTR [rsp+0x1a0],xmm0
  68a797:	00 
  68a798:	31 c0                	xor    eax,eax
  68a79a:	88 84 24 b0 01 00 00 	mov    BYTE PTR [rsp+0x1b0],al
  68a7a1:	48 8b 8c 24 c8 00 00 	mov    rcx,QWORD PTR [rsp+0xc8]
  68a7a8:	00 
  68a7a9:	48 89 8c 24 b8 01 00 	mov    QWORD PTR [rsp+0x1b8],rcx
  68a7b0:	00 
  68a7b1:	48 89 6c 24 10       	mov    QWORD PTR [rsp+0x10],rbp
  68a7b6:	48 89 ac 24 c0 01 00 	mov    QWORD PTR [rsp+0x1c0],rbp
  68a7bd:	00 
  68a7be:	66 83 a4 24 c8 01 00 	and    WORD PTR [rsp+0x1c8],0x0
  68a7c5:	00 00 
  68a7c7:	88 84 24 ca 01 00 00 	mov    BYTE PTR [rsp+0x1ca],al
  68a7ce:	48 83 a4 24 80 01 00 	and    QWORD PTR [rsp+0x180],0x0
  68a7d5:	00 00 
  68a7d7:	48 89 9c 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rbx
  68a7de:	00 
  68a7df:	48 89 9c 24 88 01 00 	mov    QWORD PTR [rsp+0x188],rbx
  68a7e6:	00 
  68a7e7:	48 89 0c 24          	mov    QWORD PTR [rsp],rcx
  68a7eb:	45 31 ed             	xor    r13d,r13d
  68a7ee:	31 db                	xor    ebx,ebx
  68a7f0:	4c 89 b4 24 d8 00 00 	mov    QWORD PTR [rsp+0xd8],r14
  68a7f7:	00 
  68a7f8:	48 8b ac 24 a0 01 00 	mov    rbp,QWORD PTR [rsp+0x1a0]
  68a7ff:	00 
  68a800:	4c 8b bc 24 a8 01 00 	mov    r15,QWORD PTR [rsp+0x1a8]
  68a807:	00 
  68a808:	89 5c 24 18          	mov    DWORD PTR [rsp+0x18],ebx
  68a80c:	a8 01                	test   al,0x1
  68a80e:	75 11                	jne    68a821 <__cxa_finalize@plt-0xd285ef>
  68a810:	b9 00 08 00 00       	mov    ecx,0x800
  68a815:	31 c0                	xor    eax,eax
  68a817:	48 8d bc 24 40 2a 00 	lea    rdi,[rsp+0x2a40]
  68a81e:	00 
  68a81f:	f3 ab                	rep stos DWORD PTR [rdi],eax
  68a821:	8a 9c 24 c9 01 00 00 	mov    bl,BYTE PTR [rsp+0x1c9]
  68a828:	44 8a a4 24 ca 01 00 	mov    r12b,BYTE PTR [rsp+0x1ca]
  68a82f:	00 
  68a830:	b1 01                	mov    cl,0x1
  68a832:	44 89 ea             	mov    edx,r13d
  68a835:	44 89 e6             	mov    esi,r12d
  68a838:	4c 8b b4 24 d8 00 00 	mov    r14,QWORD PTR [rsp+0xd8]
  68a83f:	00 
  68a840:	41 89 d5             	mov    r13d,edx
  68a843:	41 89 f4             	mov    r12d,esi
  68a846:	84 d2                	test   dl,dl
  68a848:	0f 85 57 02 00 00    	jne    68aaa5 <__cxa_finalize@plt-0xd2836b>
  68a84e:	f6 c1 01             	test   cl,0x1
  68a851:	0f 85 90 00 00 00    	jne    68a8e7 <__cxa_finalize@plt-0xd28529>
  68a857:	4c 89 f8             	mov    rax,r15
  68a85a:	48 29 e8             	sub    rax,rbp
  68a85d:	77 66                	ja     68a8c5 <__cxa_finalize@plt-0xd2854b>
  68a85f:	48 8b 54 24 10       	mov    rdx,QWORD PTR [rsp+0x10]
  68a864:	4c 39 f2             	cmp    rdx,r14
  68a867:	4c 89 f1             	mov    rcx,r14
  68a86a:	48 0f 42 ca          	cmovb  rcx,rdx
  68a86e:	48 8d 7c 24 20       	lea    rdi,[rsp+0x20]
  68a873:	48 8b 34 24          	mov    rsi,QWORD PTR [rsp]
  68a877:	4c 8d 05 5a c9 d3 00 	lea    r8,[rip+0xd3c95a]        # 13c71d8 <__memmove_chk@plt+0x137e8>
  68a87e:	e8 93 e3 f6 ff       	call   5f8c16 <__cxa_finalize@plt-0xdba1fa>
  68a883:	4c 8b 7c 24 28       	mov    r15,QWORD PTR [rsp+0x28]
  68a888:	4d 39 fe             	cmp    r14,r15
  68a88b:	0f 82 d6 1d 00 00    	jb     68c667 <__cxa_finalize@plt-0xd267a9>
  68a891:	48 8b 54 24 20       	mov    rdx,QWORD PTR [rsp+0x20]
  68a896:	48 8b 44 24 30       	mov    rax,QWORD PTR [rsp+0x30]
  68a89b:	48 89 04 24          	mov    QWORD PTR [rsp],rax
  68a89f:	48 8b 44 24 38       	mov    rax,QWORD PTR [rsp+0x38]
  68a8a4:	48 89 44 24 10       	mov    QWORD PTR [rsp+0x10],rax
  68a8a9:	48 8b 7c 24 08       	mov    rdi,QWORD PTR [rsp+0x8]
  68a8ae:	4c 89 fe             	mov    rsi,r15
  68a8b1:	4c 89 f9             	mov    rcx,r15
  68a8b4:	4c 8d 05 05 c9 d3 00 	lea    r8,[rip+0xd3c905]        # 13c71c0 <__memmove_chk@plt+0x137d0>
  68a8bb:	e8 0e 7c 01 00       	call   6a24ce <__cxa_finalize@plt-0xd10942>
  68a8c0:	31 ed                	xor    ebp,ebp
  68a8c2:	4c 89 f8             	mov    rax,r15
  68a8c5:	40 b6 01             	mov    sil,0x1
  68a8c8:	31 c9                	xor    ecx,ecx
  68a8ca:	b2 01                	mov    dl,0x1
  68a8cc:	48 85 c0             	test   rax,rax
  68a8cf:	0f 84 6b ff ff ff    	je     68a840 <__cxa_finalize@plt-0xd285d0>
  68a8d5:	44 88 a4 24 ca 01 00 	mov    BYTE PTR [rsp+0x1ca],r12b
  68a8dc:	00 
  68a8dd:	48 8b 4c 24 08       	mov    rcx,QWORD PTR [rsp+0x8]
  68a8e2:	48 01 e9             	add    rcx,rbp
  68a8e5:	eb 0d                	jmp    68a8f4 <__cxa_finalize@plt-0xd2851c>
  68a8e7:	44 88 a4 24 ca 01 00 	mov    BYTE PTR [rsp+0x1ca],r12b
  68a8ee:	00 
  68a8ef:	6a 01                	push   0x1
  68a8f1:	59                   	pop    rcx
  68a8f2:	31 c0                	xor    eax,eax
  68a8f4:	48 89 8c 24 08 01 00 	mov    QWORD PTR [rsp+0x108],rcx
  68a8fb:	00 
  68a8fc:	48 89 84 24 10 01 00 	mov    QWORD PTR [rsp+0x110],rax
  68a903:	00 
  68a904:	48 83 a4 24 18 01 00 	and    QWORD PTR [rsp+0x118],0x0
  68a90b:	00 00 
  68a90d:	48 8d 94 24 40 2a 00 	lea    rdx,[rsp+0x2a40]
  68a914:	00 
  68a915:	48 89 94 24 b0 00 00 	mov    QWORD PTR [rsp+0xb0],rdx
  68a91c:	00 
  68a91d:	48 c7 84 24 b8 00 00 	mov    QWORD PTR [rsp+0xb8],0x2000
  68a924:	00 00 20 00 00 
  68a929:	48 83 a4 24 c0 00 00 	and    QWORD PTR [rsp+0xc0],0x0
  68a930:	00 00 
  68a932:	ba 00 20 00 00       	mov    edx,0x2000
  68a937:	48 85 c0             	test   rax,rax
  68a93a:	74 75                	je     68a9b1 <__cxa_finalize@plt-0xd2845f>
  68a93c:	f6 44 24 18 01       	test   BYTE PTR [rsp+0x18],0x1
  68a941:	74 6e                	je     68a9b1 <__cxa_finalize@plt-0xd2845f>
  68a943:	48 8b bc 24 88 00 00 	mov    rdi,QWORD PTR [rsp+0x88]
  68a94a:	00 
  68a94b:	6a 01                	push   0x1
  68a94d:	5e                   	pop    rsi
  68a94e:	ff 15 b4 97 d9 00    	call   QWORD PTR [rip+0xd997b4]        # 1424108 <__memmove_chk@plt+0x70718>
  68a954:	48 89 c7             	mov    rdi,rax
  68a957:	e8 c4 15 04 00       	call   6cbf20 <__cxa_finalize@plt-0xce6ef0>
  68a95c:	48 89 c7             	mov    rdi,rax
  68a95f:	48 89 d6             	mov    rsi,rdx
  68a962:	e8 99 15 04 00       	call   6cbf00 <__cxa_finalize@plt-0xce6f10>
  68a967:	48 85 d2             	test   rdx,rdx
  68a96a:	0f 95 c1             	setne  cl
  68a96d:	84 c8                	test   al,cl
  68a96f:	0f 85 0d 02 00 00    	jne    68ab82 <__cxa_finalize@plt-0xd2828e>
  68a975:	4c 8b 84 24 b0 00 00 	mov    r8,QWORD PTR [rsp+0xb0]
  68a97c:	00 
  68a97d:	48 8b 94 24 b8 00 00 	mov    rdx,QWORD PTR [rsp+0xb8]
  68a984:	00 
  68a985:	48 8b bc 24 c0 00 00 	mov    rdi,QWORD PTR [rsp+0xc0]
  68a98c:	00 
  68a98d:	48 8b 8c 24 08 01 00 	mov    rcx,QWORD PTR [rsp+0x108]
  68a994:	00 
  68a995:	48 8b 84 24 10 01 00 	mov    rax,QWORD PTR [rsp+0x110]
  68a99c:	00 
  68a99d:	48 8b b4 24 18 01 00 	mov    rsi,QWORD PTR [rsp+0x118]
  68a9a4:	00 
  68a9a5:	31 db                	xor    ebx,ebx
  68a9a7:	c7 44 24 18 00 00 00 	mov    DWORD PTR [rsp+0x18],0x0
  68a9ae:	00 
  68a9af:	eb 0c                	jmp    68a9bd <__cxa_finalize@plt-0xd28453>
  68a9b1:	31 f6                	xor    esi,esi
  68a9b3:	31 ff                	xor    edi,edi
  68a9b5:	4c 8d 84 24 40 2a 00 	lea    r8,[rsp+0x2a40]
  68a9bc:	00 
  68a9bd:	4c 89 44 24 50       	mov    QWORD PTR [rsp+0x50],r8
  68a9c2:	48 89 54 24 58       	mov    QWORD PTR [rsp+0x58],rdx
  68a9c7:	48 89 7c 24 60       	mov    QWORD PTR [rsp+0x60],rdi
  68a9cc:	48 8d 94 24 b0 00 00 	lea    rdx,[rsp+0xb0]
  68a9d3:	00 
  68a9d4:	48 89 54 24 48       	mov    QWORD PTR [rsp+0x48],rdx
  68a9d9:	48 89 4c 24 28       	mov    QWORD PTR [rsp+0x28],rcx
  68a9de:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
  68a9e3:	48 89 74 24 38       	mov    QWORD PTR [rsp+0x38],rsi
  68a9e8:	48 8d 84 24 08 01 00 	lea    rax,[rsp+0x108]
  68a9ef:	00 
  68a9f0:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
  68a9f5:	48 8b bc 24 88 00 00 	mov    rdi,QWORD PTR [rsp+0x88]
  68a9fc:	00 
  68a9fd:	48 8d 74 24 50       	lea    rsi,[rsp+0x50]
  68aa02:	48 8d 54 24 28       	lea    rdx,[rsp+0x28]
  68aa07:	ff 15 03 97 d9 00    	call   QWORD PTR [rip+0xd99703]        # 1424110 <__memmove_chk@plt+0x70720>
  68aa0d:	48 89 c7             	mov    rdi,rax
  68aa10:	e8 0b 15 04 00       	call   6cbf20 <__cxa_finalize@plt-0xce6ef0>
  68aa15:	48 8b 4c 24 20       	mov    rcx,QWORD PTR [rsp+0x20]
  68aa1a:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
  68aa1f:	48 3b 71 08          	cmp    rsi,QWORD PTR [rcx+0x8]
  68aa23:	0f 87 44 1f 00 00    	ja     68c96d <__cxa_finalize@plt-0xd264a3>
  68aa29:	48 89 71 10          	mov    QWORD PTR [rcx+0x10],rsi
  68aa2d:	48 8b 4c 24 48       	mov    rcx,QWORD PTR [rsp+0x48]
  68aa32:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
  68aa37:	48 3b 71 08          	cmp    rsi,QWORD PTR [rcx+0x8]
  68aa3b:	0f 87 43 1f 00 00    	ja     68c984 <__cxa_finalize@plt-0xd2648c>
  68aa41:	48 89 71 10          	mov    QWORD PTR [rcx+0x10],rsi
  68aa45:	48 83 f8 01          	cmp    rax,0x1
  68aa49:	0f 84 fc 00 00 00    	je     68ab4b <__cxa_finalize@plt-0xd282c5>
  68aa4f:	48 85 d2             	test   rdx,rdx
  68aa52:	0f b6 db             	movzx  ebx,bl
  68aa55:	6a 01                	push   0x1
  68aa57:	58                   	pop    rax
  68aa58:	0f 44 d8             	cmove  ebx,eax
  68aa5b:	8b 4c 24 18          	mov    ecx,DWORD PTR [rsp+0x18]
  68aa5f:	0f b6 c9             	movzx  ecx,cl
  68aa62:	0f 44 c8             	cmove  ecx,eax
  68aa65:	89 4c 24 18          	mov    DWORD PTR [rsp+0x18],ecx
  68aa69:	48 8b bc 24 b8 00 00 	mov    rdi,QWORD PTR [rsp+0xb8]
  68aa70:	00 
  68aa71:	4c 8b b4 24 c0 00 00 	mov    r14,QWORD PTR [rsp+0xc0]
  68aa78:	00 
  68aa79:	48 03 ac 24 18 01 00 	add    rbp,QWORD PTR [rsp+0x118]
  68aa80:	00 
  68aa81:	4c 89 f6             	mov    rsi,r14
  68aa84:	e8 ea 36 00 00       	call   68e173 <__cxa_finalize@plt-0xd24c9d>
  68aa89:	49 39 ef             	cmp    r15,rbp
  68aa8c:	49 0f 42 ef          	cmovb  rbp,r15
  68aa90:	31 d2                	xor    edx,edx
  68aa92:	b9 00 00 00 00       	mov    ecx,0x0
  68aa97:	4d 85 f6             	test   r14,r14
  68aa9a:	0f 84 95 fd ff ff    	je     68a835 <__cxa_finalize@plt-0xd285db>
  68aaa0:	e9 0a 01 00 00       	jmp    68abaf <__cxa_finalize@plt-0xd28261>
  68aaa5:	88 9c 24 c9 01 00 00 	mov    BYTE PTR [rsp+0x1c9],bl
  68aaac:	44 88 a4 24 ca 01 00 	mov    BYTE PTR [rsp+0x1ca],r12b
  68aab3:	00 
  68aab4:	48 89 ac 24 a0 01 00 	mov    QWORD PTR [rsp+0x1a0],rbp
  68aabb:	00 
  68aabc:	4c 89 bc 24 a8 01 00 	mov    QWORD PTR [rsp+0x1a8],r15
  68aac3:	00 
  68aac4:	48 8b 04 24          	mov    rax,QWORD PTR [rsp]
  68aac8:	48 89 84 24 b8 01 00 	mov    QWORD PTR [rsp+0x1b8],rax
  68aacf:	00 
  68aad0:	f6 44 24 18 01       	test   BYTE PTR [rsp+0x18],0x1
  68aad5:	0f 85 fc 17 00 00    	jne    68c2d7 <__cxa_finalize@plt-0xd26b39>
  68aadb:	6a 25                	push   0x25
  68aadd:	5f                   	pop    rdi
  68aade:	48 8d 35 7b bf a7 ff 	lea    rsi,[rip+0xffffffffffa7bf7b]        # 106a60 <__cxa_finalize@plt-0x12ac3b0>
  68aae5:	6a 10                	push   0x10
  68aae7:	5a                   	pop    rdx
  68aae8:	e8 23 93 fb ff       	call   643e10 <__cxa_finalize@plt-0xd6f000>
  68aaed:	49 89 c4             	mov    r12,rax
  68aaf0:	31 db                	xor    ebx,ebx
  68aaf2:	48 8d 7c 24 20       	lea    rdi,[rsp+0x20]
  68aaf7:	4c 89 e6             	mov    rsi,r12
  68aafa:	e8 b7 30 00 00       	call   68dbb6 <__cxa_finalize@plt-0xd2525a>
  68aaff:	0f                   	.byte 0xf
