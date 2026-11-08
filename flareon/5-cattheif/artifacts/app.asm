
catthief.exe:     file format pei-x86-64


Disassembly of section .text:

0000000140001000 <.text>:
   140001000:	48 89 d0             	mov    rax,rdx
   140001003:	49 f7 e1             	mul    r9
   140001006:	70 2d                	jo     0x140001035
   140001008:	49 8d 50 ff          	lea    rdx,[r8-0x1]
   14000100c:	48 01 d0             	add    rax,rdx
   14000100f:	72 24                	jb     0x140001035
   140001011:	4c 89 c2             	mov    rdx,r8
   140001014:	48 f7 da             	neg    rdx
   140001017:	48 21 d0             	and    rax,rdx
   14000101a:	49 83 c1 10          	add    r9,0x10
   14000101e:	49 01 c1             	add    r9,rax
   140001021:	72 12                	jb     0x140001035
   140001023:	48 ba 00 00 00 00 00 	movabs rdx,0x8000000000000000
   14000102a:	00 00 80 
   14000102d:	4c 29 c2             	sub    rdx,r8
   140001030:	49 39 d1             	cmp    r9,rdx
   140001033:	76 05                	jbe    0x14000103a
   140001035:	48 83 21 00          	and    QWORD PTR [rcx],0x0
   140001039:	c3                   	ret
   14000103a:	4c 89 01             	mov    QWORD PTR [rcx],r8
   14000103d:	4c 89 49 08          	mov    QWORD PTR [rcx+0x8],r9
   140001041:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
   140001045:	c3                   	ret
   140001046:	41 57                	push   r15
   140001048:	41 56                	push   r14
   14000104a:	41 55                	push   r13
   14000104c:	41 54                	push   r12
   14000104e:	56                   	push   rsi
   14000104f:	57                   	push   rdi
   140001050:	55                   	push   rbp
   140001051:	53                   	push   rbx
   140001052:	48 83 ec 58          	sub    rsp,0x58
   140001056:	4c 89 4c 24 20       	mov    QWORD PTR [rsp+0x20],r9
   14000105b:	4c 89 44 24 50       	mov    QWORD PTR [rsp+0x50],r8
   140001060:	48 89 54 24 48       	mov    QWORD PTR [rsp+0x48],rdx
   140001065:	48 89 ce             	mov    rsi,rcx
   140001068:	48 8b 11             	mov    rdx,QWORD PTR [rcx]
   14000106b:	4c 8b 71 08          	mov    r14,QWORD PTR [rcx+0x8]
   14000106f:	49 ff c6             	inc    r14
   140001072:	4c 89 f0             	mov    rax,r14
   140001075:	48 c1 e8 04          	shr    rax,0x4
   140001079:	44 89 f1             	mov    ecx,r14d
   14000107c:	83 e1 0f             	and    ecx,0xf
   14000107f:	48 83 f9 01          	cmp    rcx,0x1
   140001083:	48 83 d8 ff          	sbb    rax,0xffffffffffffffff
   140001087:	66 0f 6f 05 71 7f 0c 	movdqa xmm0,XMMWORD PTR [rip+0xc7f71]        # 0x1400c9000
   14000108e:	00 
   14000108f:	48 89 d1             	mov    rcx,rdx
   140001092:	48 83 e8 01          	sub    rax,0x1
   140001096:	72 16                	jb     0x1400010ae
   140001098:	66 0f ef c9          	pxor   xmm1,xmm1
   14000109c:	66 0f 64 09          	pcmpgtb xmm1,XMMWORD PTR [rcx]
   1400010a0:	66 0f eb c8          	por    xmm1,xmm0
   1400010a4:	66 0f 7f 09          	movdqa XMMWORD PTR [rcx],xmm1
   1400010a8:	48 83 c1 10          	add    rcx,0x10
   1400010ac:	eb e4                	jmp    0x140001092
   1400010ae:	49 83 fe 11          	cmp    r14,0x11
   1400010b2:	41 b8 10 00 00 00    	mov    r8d,0x10
   1400010b8:	b9 10 00 00 00       	mov    ecx,0x10
   1400010bd:	49 0f 43 ce          	cmovae rcx,r14
   1400010c1:	4d 39 c6             	cmp    r14,r8
   1400010c4:	4d 0f 42 c6          	cmovb  r8,r14
   1400010c8:	48 01 d1             	add    rcx,rdx
   1400010cb:	e8 f0 22 0c 00       	call   0x1400c33c0
   1400010d0:	48 8b 44 24 20       	mov    rax,QWORD PTR [rsp+0x20]
   1400010d5:	89 c1                	mov    ecx,eax
   1400010d7:	83 e1 07             	and    ecx,0x7
   1400010da:	48 89 4c 24 30       	mov    QWORD PTR [rsp+0x30],rcx
   1400010df:	48 89 c1             	mov    rcx,rax
   1400010e2:	48 c1 e9 03          	shr    rcx,0x3
   1400010e6:	48 89 4c 24 40       	mov    QWORD PTR [rsp+0x40],rcx
   1400010eb:	83 e0 38             	and    eax,0x38
   1400010ee:	48 89 44 24 38       	mov    QWORD PTR [rsp+0x38],rax
   1400010f3:	31 c0                	xor    eax,eax
   1400010f5:	31 ff                	xor    edi,edi
   1400010f7:	4c 39 f7             	cmp    rdi,r14
   1400010fa:	0f 84 89 01 00 00    	je     0x140001289
   140001100:	49 89 fc             	mov    r12,rdi
   140001103:	48 ff c7             	inc    rdi
   140001106:	4c 8b 2e             	mov    r13,QWORD PTR [rsi]
   140001109:	43 3a 44 25 00       	cmp    al,BYTE PTR [r13+r12*1+0x0]
   14000110e:	71 e7                	jno    0x1400010f7
   140001110:	4c 89 e0             	mov    rax,r12
   140001113:	48 f7 d0             	not    rax
   140001116:	48 0f af 44 24 20    	imul   rax,QWORD PTR [rsp+0x20]
   14000111c:	49 01 c5             	add    r13,rax
   14000111f:	48 8b 44 24 38       	mov    rax,QWORD PTR [rsp+0x38]
   140001124:	4c 01 e8             	add    rax,r13
   140001127:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   14000112c:	48 8b 4c 24 48       	mov    rcx,QWORD PTR [rsp+0x48]
   140001131:	48 89 f2             	mov    rdx,rsi
   140001134:	4d 89 e0             	mov    r8,r12
   140001137:	ff 54 24 50          	call   QWORD PTR [rsp+0x50]
   14000113b:	48 89 c5             	mov    rbp,rax
   14000113e:	4c 8b 3e             	mov    r15,QWORD PTR [rsi]
   140001141:	48 8b 5e 08          	mov    rbx,QWORD PTR [rsi+0x8]
   140001145:	4c 89 f9             	mov    rcx,r15
   140001148:	48 89 da             	mov    rdx,rbx
   14000114b:	49 89 c0             	mov    r8,rax
   14000114e:	e8 67 01 00 00       	call   0x1400012ba
   140001153:	48 89 d9             	mov    rcx,rbx
   140001156:	48 21 e9             	and    rcx,rbp
   140001159:	4c 89 e2             	mov    rdx,r12
   14000115c:	48 29 ca             	sub    rdx,rcx
   14000115f:	49 89 c0             	mov    r8,rax
   140001162:	49 29 c8             	sub    r8,rcx
   140001165:	49 31 d0             	xor    r8,rdx
   140001168:	49 21 d8             	and    r8,rbx
   14000116b:	49 83 f8 10          	cmp    r8,0x10
   14000116f:	0f 82 c3 00 00 00    	jb     0x140001238
   140001175:	48 89 c1             	mov    rcx,rax
   140001178:	48 89 c2             	mov    rdx,rax
   14000117b:	48 f7 d2             	not    rdx
   14000117e:	48 0f af 54 24 20    	imul   rdx,QWORD PTR [rsp+0x20]
   140001184:	4c 01 fa             	add    rdx,r15
   140001187:	45 8a 04 07          	mov    r8b,BYTE PTR [r15+rax*1]
   14000118b:	48 c1 ed 39          	shr    rbp,0x39
   14000118f:	48 83 c0 f0          	add    rax,0xfffffffffffffff0
   140001193:	48 21 d8             	and    rax,rbx
   140001196:	41 88 2c 0f          	mov    BYTE PTR [r15+rcx*1],bpl
   14000119a:	48 8b 0e             	mov    rcx,QWORD PTR [rsi]
   14000119d:	40 88 6c 01 10       	mov    BYTE PTR [rcx+rax*1+0x10],bpl
   1400011a2:	41 80 f8 ff          	cmp    r8b,0xff
   1400011a6:	0f 84 ab 00 00 00    	je     0x140001257
   1400011ac:	4c 89 e9             	mov    rcx,r13
   1400011af:	4c 8b 44 24 40       	mov    r8,QWORD PTR [rsp+0x40]
   1400011b4:	48 89 d3             	mov    rbx,rdx
   1400011b7:	e8 b8 e4 00 00       	call   0x14000f674
   1400011bc:	48 83 7c 24 30 00    	cmp    QWORD PTR [rsp+0x30],0x0
   1400011c2:	0f 84 64 ff ff ff    	je     0x14000112c
   1400011c8:	49 89 d9             	mov    r9,rbx
   1400011cb:	4c 03 4c 24 38       	add    r9,QWORD PTR [rsp+0x38]
   1400011d0:	83 7c 24 30 04       	cmp    DWORD PTR [rsp+0x30],0x4
   1400011d5:	73 04                	jae    0x1400011db
   1400011d7:	31 c0                	xor    eax,eax
   1400011d9:	eb 14                	jmp    0x1400011ef
   1400011db:	48 8b 54 24 28       	mov    rdx,QWORD PTR [rsp+0x28]
   1400011e0:	8b 02                	mov    eax,DWORD PTR [rdx]
   1400011e2:	41 8b 09             	mov    ecx,DWORD PTR [r9]
   1400011e5:	89 0a                	mov    DWORD PTR [rdx],ecx
   1400011e7:	41 89 01             	mov    DWORD PTR [r9],eax
   1400011ea:	b8 04 00 00 00       	mov    eax,0x4
   1400011ef:	f6 44 24 20 02       	test   BYTE PTR [rsp+0x20],0x2
   1400011f4:	74 1d                	je     0x140001213
   1400011f6:	4c 8b 44 24 28       	mov    r8,QWORD PTR [rsp+0x28]
   1400011fb:	41 0f b7 0c 00       	movzx  ecx,WORD PTR [r8+rax*1]
   140001200:	41 0f b7 14 01       	movzx  edx,WORD PTR [r9+rax*1]
   140001205:	66 41 89 14 00       	mov    WORD PTR [r8+rax*1],dx
   14000120a:	66 41 89 0c 01       	mov    WORD PTR [r9+rax*1],cx
   14000120f:	48 83 c8 02          	or     rax,0x2
   140001213:	f6 44 24 20 01       	test   BYTE PTR [rsp+0x20],0x1
   140001218:	0f 84 0e ff ff ff    	je     0x14000112c
   14000121e:	4c 8b 44 24 28       	mov    r8,QWORD PTR [rsp+0x28]
   140001223:	41 8a 0c 00          	mov    cl,BYTE PTR [r8+rax*1]
   140001227:	41 8a 14 01          	mov    dl,BYTE PTR [r9+rax*1]
   14000122b:	41 88 14 00          	mov    BYTE PTR [r8+rax*1],dl
   14000122f:	41 88 0c 01          	mov    BYTE PTR [r9+rax*1],cl
   140001233:	e9 f4 fe ff ff       	jmp    0x14000112c
   140001238:	48 c1 ed 39          	shr    rbp,0x39
   14000123c:	49 8d 44 24 f0       	lea    rax,[r12-0x10]
   140001241:	48 21 c3             	and    rbx,rax
   140001244:	43 88 2c 27          	mov    BYTE PTR [r15+r12*1],bpl
   140001248:	48 8b 06             	mov    rax,QWORD PTR [rsi]
   14000124b:	40 88 6c 18 10       	mov    BYTE PTR [rax+rbx*1+0x10],bpl
   140001250:	31 c0                	xor    eax,eax
   140001252:	e9 a0 fe ff ff       	jmp    0x1400010f7
   140001257:	49 8d 44 24 f0       	lea    rax,[r12-0x10]
   14000125c:	48 23 46 08          	and    rax,QWORD PTR [rsi+0x8]
   140001260:	48 8b 0e             	mov    rcx,QWORD PTR [rsi]
   140001263:	41 b0 ff             	mov    r8b,0xff
   140001266:	46 88 04 21          	mov    BYTE PTR [rcx+r12*1],r8b
   14000126a:	48 8b 0e             	mov    rcx,QWORD PTR [rsi]
   14000126d:	44 88 44 01 10       	mov    BYTE PTR [rcx+rax*1+0x10],r8b
   140001272:	48 89 d1             	mov    rcx,rdx
   140001275:	4c 89 ea             	mov    rdx,r13
   140001278:	4c 8b 44 24 20       	mov    r8,QWORD PTR [rsp+0x20]
   14000127d:	e8 44 21 0c 00       	call   0x1400c33c6
   140001282:	31 c0                	xor    eax,eax
   140001284:	e9 6e fe ff ff       	jmp    0x1400010f7
   140001289:	48 8b 46 08          	mov    rax,QWORD PTR [rsi+0x8]
   14000128d:	48 8d 48 01          	lea    rcx,[rax+0x1]
   140001291:	48 c1 e9 03          	shr    rcx,0x3
   140001295:	48 6b c9 07          	imul   rcx,rcx,0x7
   140001299:	48 83 f8 08          	cmp    rax,0x8
   14000129d:	48 0f 42 c8          	cmovb  rcx,rax
   1400012a1:	48 2b 4e 18          	sub    rcx,QWORD PTR [rsi+0x18]
   1400012a5:	48 89 4e 10          	mov    QWORD PTR [rsi+0x10],rcx
   1400012a9:	48 83 c4 58          	add    rsp,0x58
   1400012ad:	5b                   	pop    rbx
   1400012ae:	5d                   	pop    rbp
   1400012af:	5f                   	pop    rdi
   1400012b0:	5e                   	pop    rsi
   1400012b1:	41 5c                	pop    r12
   1400012b3:	41 5d                	pop    r13
   1400012b5:	41 5e                	pop    r14
   1400012b7:	41 5f                	pop    r15
   1400012b9:	c3                   	ret
   1400012ba:	4c 89 c0             	mov    rax,r8
   1400012bd:	48 21 d0             	and    rax,rdx
   1400012c0:	41 b8 10 00 00 00    	mov    r8d,0x10
   1400012c6:	f3 0f 6f 04 01       	movdqu xmm0,XMMWORD PTR [rcx+rax*1]
   1400012cb:	66 44 0f d7 c8       	pmovmskb r9d,xmm0
   1400012d0:	45 85 c9             	test   r9d,r9d
   1400012d3:	75 0c                	jne    0x1400012e1
   1400012d5:	4c 01 c0             	add    rax,r8
   1400012d8:	48 21 d0             	and    rax,rdx
   1400012db:	49 83 c0 10          	add    r8,0x10
   1400012df:	eb e5                	jmp    0x1400012c6
   1400012e1:	45 0f bc c1          	bsf    r8d,r9d
   1400012e5:	4c 01 c0             	add    rax,r8
   1400012e8:	48 21 d0             	and    rax,rdx
   1400012eb:	80 3c 01 00          	cmp    BYTE PTR [rcx+rax*1],0x0
   1400012ef:	79 01                	jns    0x1400012f2
   1400012f1:	c3                   	ret
   1400012f2:	66 0f 6f 01          	movdqa xmm0,XMMWORD PTR [rcx]
   1400012f6:	66 0f d7 c0          	pmovmskb eax,xmm0
   1400012fa:	0f bc c0             	bsf    eax,eax
   1400012fd:	c3                   	ret
   1400012fe:	48 83 ec 28          	sub    rsp,0x28
   140001302:	ba 10 00 00 00       	mov    edx,0x10
   140001307:	31 c9                	xor    ecx,ecx
   140001309:	e8 92 e0 06 00       	call   0x14006f3a0
   14000130e:	48 85 c0             	test   rax,rax
   140001311:	74 05                	je     0x140001318
   140001313:	48 83 c4 28          	add    rsp,0x28
   140001317:	c3                   	ret
   140001318:	b9 08 00 00 00       	mov    ecx,0x8
   14000131d:	ba 10 00 00 00       	mov    edx,0x10
   140001322:	e8 96 26 0c 00       	call   0x1400c39bd
   140001327:	0f 0b                	ud2
   140001329:	4c 8b 01             	mov    r8,QWORD PTR [rcx]
   14000132c:	4c 3b 41 08          	cmp    r8,QWORD PTR [rcx+0x8]
   140001330:	74 10                	je     0x140001342
   140001332:	49 8d 40 01          	lea    rax,[r8+0x1]
   140001336:	48 89 01             	mov    QWORD PTR [rcx],rax
   140001339:	41 0f b6 00          	movzx  eax,BYTE PTR [r8]
   14000133d:	84 c0                	test   al,al
   14000133f:	78 07                	js     0x140001348
   140001341:	c3                   	ret
   140001342:	b8 00 00 11 00       	mov    eax,0x110000
   140001347:	c3                   	ret
   140001348:	89 c2                	mov    edx,eax
   14000134a:	83 e2 1f             	and    edx,0x1f
   14000134d:	4d 8d 48 02          	lea    r9,[r8+0x2]
   140001351:	4c 89 09             	mov    QWORD PTR [rcx],r9
   140001354:	45 0f b6 50 01       	movzx  r10d,BYTE PTR [r8+0x1]
   140001359:	41 83 e2 3f          	and    r10d,0x3f
   14000135d:	3c df                	cmp    al,0xdf
   14000135f:	76 3a                	jbe    0x14000139b
   140001361:	4d 8d 48 03          	lea    r9,[r8+0x3]
   140001365:	4c 89 09             	mov    QWORD PTR [rcx],r9
   140001368:	45 0f b6 48 02       	movzx  r9d,BYTE PTR [r8+0x2]
   14000136d:	41 c1 e2 06          	shl    r10d,0x6
   140001371:	41 83 e1 3f          	and    r9d,0x3f
   140001375:	45 09 d1             	or     r9d,r10d
   140001378:	3c f0                	cmp    al,0xf0
   14000137a:	72 28                	jb     0x1400013a4
   14000137c:	49 8d 40 04          	lea    rax,[r8+0x4]
   140001380:	48 89 01             	mov    QWORD PTR [rcx],rax
   140001383:	41 0f b6 40 03       	movzx  eax,BYTE PTR [r8+0x3]
   140001388:	83 e2 07             	and    edx,0x7
   14000138b:	c1 e2 12             	shl    edx,0x12
   14000138e:	41 c1 e1 06          	shl    r9d,0x6
   140001392:	83 e0 3f             	and    eax,0x3f
   140001395:	44 09 c8             	or     eax,r9d
   140001398:	09 d0                	or     eax,edx
   14000139a:	c3                   	ret
   14000139b:	c1 e2 06             	shl    edx,0x6
   14000139e:	44 09 d2             	or     edx,r10d
   1400013a1:	89 d0                	mov    eax,edx
   1400013a3:	c3                   	ret
   1400013a4:	c1 e2 0c             	shl    edx,0xc
   1400013a7:	41 09 d1             	or     r9d,edx
   1400013aa:	44 89 c8             	mov    eax,r9d
   1400013ad:	c3                   	ret
   1400013ae:	4d 85 c0             	test   r8,r8
   1400013b1:	0f 85 b0 43 00 00    	jne    0x140005767
   1400013b7:	c3                   	ret
   1400013b8:	48 83 ec 28          	sub    rsp,0x28
   1400013bc:	ff d1                	call   rcx
   1400013be:	90                   	nop
   1400013bf:	48 83 c4 28          	add    rsp,0x28
   1400013c3:	c3                   	ret
   1400013c4:	41 b8 04 00 00 00    	mov    r8d,0x4
   1400013ca:	e9 a5 e2 00 00       	jmp    0x14000f674
   1400013cf:	56                   	push   rsi
   1400013d0:	48 83 ec 20          	sub    rsp,0x20
   1400013d4:	48 89 ca             	mov    rdx,rcx
   1400013d7:	8b 05 7b 2e 14 00    	mov    eax,DWORD PTR [rip+0x142e7b]        # 0x140144258
   1400013dd:	65 48 8b 0c 25 58 00 	mov    rcx,QWORD PTR gs:0x58
   1400013e4:	00 00 
   1400013e6:	48 8b 04 c1          	mov    rax,QWORD PTR [rcx+rax*8]
   1400013ea:	48 8d b0 28 00 00 00 	lea    rsi,[rax+0x28]
   1400013f1:	80 7e 10 00          	cmp    BYTE PTR [rsi+0x10],0x0
   1400013f5:	74 09                	je     0x140001400
   1400013f7:	48 89 f0             	mov    rax,rsi
   1400013fa:	48 83 c4 20          	add    rsp,0x20
   1400013fe:	5e                   	pop    rsi
   1400013ff:	c3                   	ret
   140001400:	48 89 f1             	mov    rcx,rsi
   140001403:	e8 ab 4c 0c 00       	call   0x1400c60b3
   140001408:	eb ed                	jmp    0x1400013f7
   14000140a:	56                   	push   rsi
   14000140b:	57                   	push   rdi
   14000140c:	48 83 ec 38          	sub    rsp,0x38
   140001410:	4c 8b 49 20          	mov    r9,QWORD PTR [rcx+0x20]
   140001414:	4d 85 c9             	test   r9,r9
   140001417:	74 35                	je     0x14000144e
   140001419:	48 89 ce             	mov    rsi,rcx
   14000141c:	48 8b 51 08          	mov    rdx,QWORD PTR [rcx+0x8]
   140001420:	4c 8b 41 10          	mov    r8,QWORD PTR [rcx+0x10]
   140001424:	49 ff c1             	inc    r9
   140001427:	48 8d 7c 24 20       	lea    rdi,[rsp+0x20]
   14000142c:	48 89 f9             	mov    rcx,rdi
   14000142f:	e8 cc fb ff ff       	call   0x140001000
   140001434:	48 8b 17             	mov    rdx,QWORD PTR [rdi]
   140001437:	48 8b 4e 18          	mov    rcx,QWORD PTR [rsi+0x18]
   14000143b:	48 2b 4f 10          	sub    rcx,QWORD PTR [rdi+0x10]
   14000143f:	4c 8b 47 08          	mov    r8,QWORD PTR [rdi+0x8]
   140001443:	48 83 c4 38          	add    rsp,0x38
   140001447:	5f                   	pop    rdi
   140001448:	5e                   	pop    rsi
   140001449:	e9 60 ff ff ff       	jmp    0x1400013ae
   14000144e:	48 83 c4 38          	add    rsp,0x38
   140001452:	5f                   	pop    rdi
   140001453:	5e                   	pop    rsi
   140001454:	c3                   	ret
   140001455:	56                   	push   rsi
   140001456:	48 83 ec 20          	sub    rsp,0x20
   14000145a:	89 c8                	mov    eax,ecx
   14000145c:	83 e0 03             	and    eax,0x3
   14000145f:	8d 50 fe             	lea    edx,[rax-0x2]
   140001462:	83 fa 02             	cmp    edx,0x2
   140001465:	72 05                	jb     0x14000146c
   140001467:	48 85 c0             	test   rax,rax
   14000146a:	75 06                	jne    0x140001472
   14000146c:	48 83 c4 20          	add    rsp,0x20
   140001470:	5e                   	pop    rsi
   140001471:	c3                   	ret
   140001472:	48 8d 71 ff          	lea    rsi,[rcx-0x1]
   140001476:	48 8b 41 ff          	mov    rax,QWORD PTR [rcx-0x1]
   14000147a:	48 8b 51 07          	mov    rdx,QWORD PTR [rcx+0x7]
   14000147e:	48 89 c1             	mov    rcx,rax
   140001481:	e8 e4 f1 07 00       	call   0x14008066a
   140001486:	ba 08 00 00 00       	mov    edx,0x8
   14000148b:	48 89 f1             	mov    rcx,rsi
   14000148e:	48 83 c4 20          	add    rsp,0x20
   140001492:	5e                   	pop    rsi
   140001493:	e9 cf 42 00 00       	jmp    0x140005767
   140001498:	56                   	push   rsi
   140001499:	48 83 ec 20          	sub    rsp,0x20
   14000149d:	48 83 39 00          	cmp    QWORD PTR [rcx],0x0
   1400014a1:	74 19                	je     0x1400014bc
   1400014a3:	48 89 ce             	mov    rsi,rcx
   1400014a6:	e8 a7 00 00 00       	call   0x140001552
   1400014ab:	48 83 c6 08          	add    rsi,0x8
   1400014af:	48 89 f1             	mov    rcx,rsi
   1400014b2:	48 83 c4 20          	add    rsp,0x20
   1400014b6:	5e                   	pop    rsi
   1400014b7:	e9 96 00 00 00       	jmp    0x140001552
   1400014bc:	48 83 c4 20          	add    rsp,0x20
   1400014c0:	5e                   	pop    rsi
   1400014c1:	c3                   	ret
   1400014c2:	56                   	push   rsi
   1400014c3:	57                   	push   rdi
   1400014c4:	48 83 ec 28          	sub    rsp,0x28
   1400014c8:	48 89 ce             	mov    rsi,rcx
   1400014cb:	48 8b 09             	mov    rcx,QWORD PTR [rcx]
   1400014ce:	48 8b 56 08          	mov    rdx,QWORD PTR [rsi+0x8]
   1400014d2:	e8 63 56 01 00       	call   0x140016b3a
   1400014d7:	48 8b 4e 58          	mov    rcx,QWORD PTR [rsi+0x58]
   1400014db:	48 8b 56 60          	mov    rdx,QWORD PTR [rsi+0x60]
   1400014df:	e8 56 56 01 00       	call   0x140016b3a
   1400014e4:	48 8b 7e 78          	mov    rdi,QWORD PTR [rsi+0x78]
   1400014e8:	48 8b 96 80 00 00 00 	mov    rdx,QWORD PTR [rsi+0x80]
   1400014ef:	48 89 f9             	mov    rcx,rdi
   1400014f2:	e8 18 f2 07 00       	call   0x14008070f
   1400014f7:	48 8b 4e 70          	mov    rcx,QWORD PTR [rsi+0x70]
   1400014fb:	48 89 fa             	mov    rdx,rdi
   1400014fe:	e8 a9 1a 06 00       	call   0x140062fac
   140001503:	48 8b 8e e0 00 00 00 	mov    rcx,QWORD PTR [rsi+0xe0]
   14000150a:	48 8b 96 e8 00 00 00 	mov    rdx,QWORD PTR [rsi+0xe8]
   140001511:	e8 54 f1 07 00       	call   0x14008066a
   140001516:	48 8b be 90 00 00 00 	mov    rdi,QWORD PTR [rsi+0x90]
   14000151d:	48 8b 96 98 00 00 00 	mov    rdx,QWORD PTR [rsi+0x98]
   140001524:	48 89 f9             	mov    rcx,rdi
   140001527:	e8 a3 f1 07 00       	call   0x1400806cf
   14000152c:	48 8b 8e 88 00 00 00 	mov    rcx,QWORD PTR [rsi+0x88]
   140001533:	48 89 fa             	mov    rdx,rdi
   140001536:	48 83 c4 28          	add    rsp,0x28
   14000153a:	5f                   	pop    rdi
   14000153b:	5e                   	pop    rsi
   14000153c:	e9 bd f1 07 00       	jmp    0x1400806fe
   140001541:	41 b8 01 00 00 00    	mov    r8d,0x1
   140001547:	41 b9 02 00 00 00    	mov    r9d,0x2
   14000154d:	e9 1b d5 00 00       	jmp    0x14000ea6d
   140001552:	56                   	push   rsi
   140001553:	48 83 ec 20          	sub    rsp,0x20
   140001557:	48 8b 31             	mov    rsi,QWORD PTR [rcx]
   14000155a:	48 89 f1             	mov    rcx,rsi
   14000155d:	e8 36 ff ff ff       	call   0x140001498
   140001562:	48 89 f1             	mov    rcx,rsi
   140001565:	48 83 c4 20          	add    rsp,0x20
   140001569:	5e                   	pop    rsi
   14000156a:	e9 0c 57 04 00       	jmp    0x140046c7b
   14000156f:	48 89 c8             	mov    rax,rcx
   140001572:	48 f7 d8             	neg    rax
   140001575:	0f 81 bf 55 01 00    	jno    0x140016b3a
   14000157b:	c3                   	ret
   14000157c:	41 57                	push   r15
   14000157e:	41 56                	push   r14
   140001580:	56                   	push   rsi
   140001581:	57                   	push   rdi
   140001582:	55                   	push   rbp
   140001583:	53                   	push   rbx
   140001584:	48 83 ec 38          	sub    rsp,0x38
   140001588:	48 8b 79 08          	mov    rdi,QWORD PTR [rcx+0x8]
   14000158c:	48 85 ff             	test   rdi,rdi
   14000158f:	0f 84 9f 00 00 00    	je     0x140001634
   140001595:	48 8b 31             	mov    rsi,QWORD PTR [rcx]
   140001598:	48 8b 59 18          	mov    rbx,QWORD PTR [rcx+0x18]
   14000159c:	48 85 db             	test   rbx,rbx
   14000159f:	74 56                	je     0x1400015f7
   1400015a1:	66 0f 6f 06          	movdqa xmm0,XMMWORD PTR [rsi]
   1400015a5:	4c 8d 76 10          	lea    r14,[rsi+0x10]
   1400015a9:	66 0f d7 c0          	pmovmskb eax,xmm0
   1400015ad:	f7 d0                	not    eax
   1400015af:	49 89 f7             	mov    r15,rsi
   1400015b2:	48 83 eb 01          	sub    rbx,0x1
   1400015b6:	72 3f                	jb     0x1400015f7
   1400015b8:	eb 16                	jmp    0x1400015d0
   1400015ba:	66 41 0f 6f 06       	movdqa xmm0,XMMWORD PTR [r14]
   1400015bf:	49 81 c7 00 fe ff ff 	add    r15,0xfffffffffffffe00
   1400015c6:	49 83 c6 10          	add    r14,0x10
   1400015ca:	66 0f d7 c0          	pmovmskb eax,xmm0
   1400015ce:	f7 d0                	not    eax
   1400015d0:	66 85 c0             	test   ax,ax
   1400015d3:	74 e5                	je     0x1400015ba
   1400015d5:	8d 68 ff             	lea    ebp,[rax-0x1]
   1400015d8:	0f bc c8             	bsf    ecx,eax
   1400015db:	21 c5                	and    ebp,eax
   1400015dd:	c1 e1 05             	shl    ecx,0x5
   1400015e0:	4c 89 f8             	mov    rax,r15
   1400015e3:	48 29 c8             	sub    rax,rcx
   1400015e6:	48 8b 48 e8          	mov    rcx,QWORD PTR [rax-0x18]
   1400015ea:	48 8b 50 f0          	mov    rdx,QWORD PTR [rax-0x10]
   1400015ee:	e8 47 55 01 00       	call   0x140016b3a
   1400015f3:	89 e8                	mov    eax,ebp
   1400015f5:	eb bb                	jmp    0x1400015b2
   1400015f7:	48 ff c7             	inc    rdi
   1400015fa:	48 8d 5c 24 20       	lea    rbx,[rsp+0x20]
   1400015ff:	ba 20 00 00 00       	mov    edx,0x20
   140001604:	41 b8 10 00 00 00    	mov    r8d,0x10
   14000160a:	48 89 d9             	mov    rcx,rbx
   14000160d:	49 89 f9             	mov    r9,rdi
   140001610:	e8 eb f9 ff ff       	call   0x140001000
   140001615:	48 8b 13             	mov    rdx,QWORD PTR [rbx]
   140001618:	48 2b 73 10          	sub    rsi,QWORD PTR [rbx+0x10]
   14000161c:	4c 8b 43 08          	mov    r8,QWORD PTR [rbx+0x8]
   140001620:	48 89 f1             	mov    rcx,rsi
   140001623:	48 83 c4 38          	add    rsp,0x38
   140001627:	5b                   	pop    rbx
   140001628:	5d                   	pop    rbp
   140001629:	5f                   	pop    rdi
   14000162a:	5e                   	pop    rsi
   14000162b:	41 5e                	pop    r14
   14000162d:	41 5f                	pop    r15
   14000162f:	e9 7a fd ff ff       	jmp    0x1400013ae
   140001634:	48 83 c4 38          	add    rsp,0x38
   140001638:	5b                   	pop    rbx
   140001639:	5d                   	pop    rbp
   14000163a:	5f                   	pop    rdi
   14000163b:	5e                   	pop    rsi
   14000163c:	41 5e                	pop    r14
   14000163e:	41 5f                	pop    r15
   140001640:	c3                   	ret
   140001641:	56                   	push   rsi
   140001642:	48 83 ec 20          	sub    rsp,0x20
   140001646:	48 89 ce             	mov    rsi,rcx
   140001649:	48 8b 01             	mov    rax,QWORD PTR [rcx]
   14000164c:	48 89 c1             	mov    rcx,rax
   14000164f:	48 f7 d9             	neg    rcx
   140001652:	70 20                	jo     0x140001674
   140001654:	48 b9 01 00 00 00 00 	movabs rcx,0x8000000000000001
   14000165b:	00 00 80 
   14000165e:	48 39 c8             	cmp    rax,rcx
   140001661:	75 04                	jne    0x140001667
   140001663:	48 83 c6 08          	add    rsi,0x8
   140001667:	48 89 f1             	mov    rcx,rsi
   14000166a:	48 83 c4 20          	add    rsp,0x20
   14000166e:	5e                   	pop    rsi
   14000166f:	e9 4e fe ff ff       	jmp    0x1400014c2
   140001674:	48 8b 4e 08          	mov    rcx,QWORD PTR [rsi+0x8]
   140001678:	48 8b 56 10          	mov    rdx,QWORD PTR [rsi+0x10]
   14000167c:	e8 ee fe ff ff       	call   0x14000156f
   140001681:	48 8b 4e 20          	mov    rcx,QWORD PTR [rsi+0x20]
   140001685:	48 89 c8             	mov    rax,rcx
   140001688:	48 f7 d8             	neg    rax
   14000168b:	70 09                	jo     0x140001696
   14000168d:	48 8b 56 28          	mov    rdx,QWORD PTR [rsi+0x28]
   140001691:	e8 a4 54 01 00       	call   0x140016b3a
   140001696:	48 8b 4e 78          	mov    rcx,QWORD PTR [rsi+0x78]
   14000169a:	48 85 c9             	test   rcx,rcx
   14000169d:	74 11                	je     0x1400016b0
   14000169f:	48 8b 96 80 00 00 00 	mov    rdx,QWORD PTR [rsi+0x80]
   1400016a6:	48 83 c4 20          	add    rsp,0x20
   1400016aa:	5e                   	pop    rsi
   1400016ab:	e9 ba ef 07 00       	jmp    0x14008066a
   1400016b0:	48 83 c4 20          	add    rsp,0x20
   1400016b4:	5e                   	pop    rsi
   1400016b5:	c3                   	ret
   1400016b6:	49 ba 75 65 73 70 65 	movabs r10,0x736f6d6570736575
   1400016bd:	6d 6f 73 
   1400016c0:	49 31 ca             	xor    r10,rcx
   1400016c3:	49 b9 6d 6f 64 6e 61 	movabs r9,0x646f72616e646f6d
   1400016ca:	72 6f 64 
   1400016cd:	49 31 d1             	xor    r9,rdx
   1400016d0:	48 b8 61 72 65 6e 65 	movabs rax,0x6c7967656e657261
   1400016d7:	67 79 6c 
   1400016da:	48 31 c8             	xor    rax,rcx
   1400016dd:	45 0f b6 c0          	movzx  r8d,r8b
   1400016e1:	49 0f ba e8 38       	bts    r8,0x38
   1400016e6:	48 b9 73 65 74 79 62 	movabs rcx,0x7465646279746573
   1400016ed:	64 65 74 
   1400016f0:	48 31 d1             	xor    rcx,rdx
   1400016f3:	4c 31 c1             	xor    rcx,r8
   1400016f6:	4d 01 ca             	add    r10,r9
   1400016f9:	49 c1 c1 0d          	rol    r9,0xd
   1400016fd:	48 01 c8             	add    rax,rcx
   140001700:	4d 31 d1             	xor    r9,r10
   140001703:	48 c1 c1 10          	rol    rcx,0x10
   140001707:	48 31 c1             	xor    rcx,rax
   14000170a:	49 c1 c2 20          	rol    r10,0x20
   14000170e:	4c 01 c8             	add    rax,r9
   140001711:	49 01 ca             	add    r10,rcx
   140001714:	49 c1 c1 11          	rol    r9,0x11
   140001718:	49 31 c1             	xor    r9,rax
   14000171b:	48 c1 c1 15          	rol    rcx,0x15
   14000171f:	48 c1 c0 20          	rol    rax,0x20
   140001723:	4c 31 d1             	xor    rcx,r10
   140001726:	4d 31 c2             	xor    r10,r8
   140001729:	48 35 ff 00 00 00    	xor    rax,0xff
   14000172f:	4d 01 ca             	add    r10,r9
   140001732:	48 01 c8             	add    rax,rcx
   140001735:	49 c1 c1 0d          	rol    r9,0xd
   140001739:	4d 31 d1             	xor    r9,r10
   14000173c:	48 c1 c1 10          	rol    rcx,0x10
   140001740:	49 c1 c2 20          	rol    r10,0x20
   140001744:	48 31 c1             	xor    rcx,rax
   140001747:	4c 01 c8             	add    rax,r9
   14000174a:	49 c1 c1 11          	rol    r9,0x11
   14000174e:	49 01 ca             	add    r10,rcx
   140001751:	49 31 c1             	xor    r9,rax
   140001754:	48 c1 c1 15          	rol    rcx,0x15
   140001758:	4c 31 d1             	xor    rcx,r10
   14000175b:	48 c1 c0 20          	rol    rax,0x20
   14000175f:	4d 01 ca             	add    r10,r9
   140001762:	48 01 c8             	add    rax,rcx
   140001765:	49 c1 c1 0d          	rol    r9,0xd
   140001769:	4d 31 d1             	xor    r9,r10
   14000176c:	48 c1 c1 10          	rol    rcx,0x10
   140001770:	49 c1 c2 20          	rol    r10,0x20
   140001774:	48 31 c1             	xor    rcx,rax
   140001777:	4c 01 c8             	add    rax,r9
   14000177a:	49 c1 c1 11          	rol    r9,0x11
   14000177e:	49 01 ca             	add    r10,rcx
   140001781:	49 31 c1             	xor    r9,rax
   140001784:	48 c1 c1 15          	rol    rcx,0x15
   140001788:	4c 31 d1             	xor    rcx,r10
   14000178b:	48 c1 c0 20          	rol    rax,0x20
   14000178f:	4d 01 ca             	add    r10,r9
   140001792:	48 01 c8             	add    rax,rcx
   140001795:	49 c1 c1 0d          	rol    r9,0xd
   140001799:	4d 31 d1             	xor    r9,r10
   14000179c:	48 c1 c1 10          	rol    rcx,0x10
   1400017a0:	48 31 c1             	xor    rcx,rax
   1400017a3:	4c 01 c8             	add    rax,r9
   1400017a6:	49 c1 c1 11          	rol    r9,0x11
   1400017aa:	48 c1 c1 15          	rol    rcx,0x15
   1400017ae:	48 31 c1             	xor    rcx,rax
   1400017b1:	48 c1 c0 20          	rol    rax,0x20
   1400017b5:	4c 31 c8             	xor    rax,r9
   1400017b8:	48 31 c8             	xor    rax,rcx
   1400017bb:	c3                   	ret
   1400017bc:	48 83 ec 28          	sub    rsp,0x28
   1400017c0:	4d 29 c8             	sub    r8,r9
   1400017c3:	72 18                	jb     0x1400017dd
   1400017c5:	4a 8d 04 4a          	lea    rax,[rdx+r9*2]
   1400017c9:	48 89 11             	mov    QWORD PTR [rcx],rdx
   1400017cc:	4c 89 49 08          	mov    QWORD PTR [rcx+0x8],r9
   1400017d0:	48 89 41 10          	mov    QWORD PTR [rcx+0x10],rax
   1400017d4:	4c 89 41 18          	mov    QWORD PTR [rcx+0x18],r8
   1400017d8:	48 83 c4 28          	add    rsp,0x28
   1400017dc:	c3                   	ret
   1400017dd:	4c 8b 44 24 50       	mov    r8,QWORD PTR [rsp+0x50]
   1400017e2:	48 8d 0d 4f 6c 0f 00 	lea    rcx,[rip+0xf6c4f]        # 0x1400f8438
   1400017e9:	ba 13 00 00 00       	mov    edx,0x13
   1400017ee:	e8 cd 23 0c 00       	call   0x1400c3bc0
   1400017f3:	0f 0b                	ud2
   1400017f5:	41 57                	push   r15
   1400017f7:	41 56                	push   r14
   1400017f9:	41 54                	push   r12
   1400017fb:	56                   	push   rsi
   1400017fc:	57                   	push   rdi
   1400017fd:	53                   	push   rbx
   1400017fe:	48 83 ec 28          	sub    rsp,0x28
   140001802:	4c 89 c6             	mov    rsi,r8
   140001805:	48 89 d7             	mov    rdi,rdx
   140001808:	48 89 cb             	mov    rbx,rcx
   14000180b:	49 83 f9 08          	cmp    r9,0x8
   14000180f:	72 58                	jb     0x140001869
   140001811:	4d 89 ce             	mov    r14,r9
   140001814:	4d 89 cf             	mov    r15,r9
   140001817:	49 c1 ef 03          	shr    r15,0x3
   14000181b:	49 83 e6 f8          	and    r14,0xfffffffffffffff8
   14000181f:	4a 8d 14 33          	lea    rdx,[rbx+r14*1]
   140001823:	4d 6b e7 0e          	imul   r12,r15,0xe
   140001827:	4e 8d 04 23          	lea    r8,[rbx+r12*1]
   14000182b:	48 89 d9             	mov    rcx,rbx
   14000182e:	4d 89 f9             	mov    r9,r15
   140001831:	e8 bf ff ff ff       	call   0x1400017f5
   140001836:	48 89 c3             	mov    rbx,rax
   140001839:	4a 8d 14 37          	lea    rdx,[rdi+r14*1]
   14000183d:	4e 8d 04 27          	lea    r8,[rdi+r12*1]
   140001841:	48 89 f9             	mov    rcx,rdi
   140001844:	4d 89 f9             	mov    r9,r15
   140001847:	e8 a9 ff ff ff       	call   0x1400017f5
   14000184c:	48 89 c7             	mov    rdi,rax
   14000184f:	49 01 f6             	add    r14,rsi
   140001852:	49 01 f4             	add    r12,rsi
   140001855:	48 89 f1             	mov    rcx,rsi
   140001858:	4c 89 f2             	mov    rdx,r14
   14000185b:	4d 89 e0             	mov    r8,r12
   14000185e:	4d 89 f9             	mov    r9,r15
   140001861:	e8 8f ff ff ff       	call   0x1400017f5
   140001866:	48 89 c6             	mov    rsi,rax
   140001869:	44 8a 43 01          	mov    r8b,BYTE PTR [rbx+0x1]
   14000186d:	8a 4f 01             	mov    cl,BYTE PTR [rdi+0x1]
   140001870:	41 38 c8             	cmp    r8b,cl
   140001873:	75 04                	jne    0x140001879
   140001875:	8a 03                	mov    al,BYTE PTR [rbx]
   140001877:	3a 07                	cmp    al,BYTE PTR [rdi]
   140001879:	0f 92 c0             	setb   al
   14000187c:	8a 56 01             	mov    dl,BYTE PTR [rsi+0x1]
   14000187f:	41 38 d0             	cmp    r8b,dl
   140001882:	75 06                	jne    0x14000188a
   140001884:	44 8a 03             	mov    r8b,BYTE PTR [rbx]
   140001887:	44 3a 06             	cmp    r8b,BYTE PTR [rsi]
   14000188a:	41 0f 92 c0          	setb   r8b
   14000188e:	44 38 c0             	cmp    al,r8b
   140001891:	75 14                	jne    0x1400018a7
   140001893:	38 d1                	cmp    cl,dl
   140001895:	75 04                	jne    0x14000189b
   140001897:	8a 0f                	mov    cl,BYTE PTR [rdi]
   140001899:	3a 0e                	cmp    cl,BYTE PTR [rsi]
   14000189b:	0f 92 c1             	setb   cl
   14000189e:	30 c8                	xor    al,cl
   1400018a0:	48 0f 45 fe          	cmovne rdi,rsi
   1400018a4:	48 89 fb             	mov    rbx,rdi
   1400018a7:	48 89 d8             	mov    rax,rbx
   1400018aa:	48 83 c4 28          	add    rsp,0x28
   1400018ae:	5b                   	pop    rbx
   1400018af:	5f                   	pop    rdi
   1400018b0:	5e                   	pop    rsi
   1400018b1:	41 5c                	pop    r12
   1400018b3:	41 5e                	pop    r14
   1400018b5:	41 5f                	pop    r15
   1400018b7:	c3                   	ret
   1400018b8:	8a 42 01             	mov    al,BYTE PTR [rdx+0x1]
   1400018bb:	3a 42 ff             	cmp    al,BYTE PTR [rdx-0x1]
   1400018be:	75 0a                	jne    0x1400018ca
   1400018c0:	44 8a 02             	mov    r8b,BYTE PTR [rdx]
   1400018c3:	44 3a 42 fe          	cmp    r8b,BYTE PTR [rdx-0x2]
   1400018c7:	72 06                	jb     0x1400018cf
   1400018c9:	c3                   	ret
   1400018ca:	73 fd                	jae    0x1400018c9
   1400018cc:	44 8a 02             	mov    r8b,BYTE PTR [rdx]
   1400018cf:	48 83 c2 fe          	add    rdx,0xfffffffffffffffe
   1400018d3:	44 0f b6 d0          	movzx  r10d,al
   1400018d7:	49 89 d1             	mov    r9,rdx
   1400018da:	0f b7 12             	movzx  edx,WORD PTR [rdx]
   1400018dd:	66 41 89 51 02       	mov    WORD PTR [r9+0x2],dx
   1400018e2:	49 39 c9             	cmp    r9,rcx
   1400018e5:	74 0f                	je     0x1400018f6
   1400018e7:	49 8d 51 fe          	lea    rdx,[r9-0x2]
   1400018eb:	41 3a 41 ff          	cmp    al,BYTE PTR [r9-0x1]
   1400018ef:	75 03                	jne    0x1400018f4
   1400018f1:	44 3a 02             	cmp    r8b,BYTE PTR [rdx]
   1400018f4:	72 e1                	jb     0x1400018d7
   1400018f6:	41 0f b7 c2          	movzx  eax,r10w
   1400018fa:	c1 e0 08             	shl    eax,0x8
   1400018fd:	41 0f b6 c8          	movzx  ecx,r8b
   140001901:	09 c1                	or     ecx,eax
   140001903:	66 41 89 09          	mov    WORD PTR [r9],cx
   140001907:	c3                   	ret
   140001908:	56                   	push   rsi
   140001909:	57                   	push   rdi
   14000190a:	53                   	push   rbx
   14000190b:	8a 41 01             	mov    al,BYTE PTR [rcx+0x1]
   14000190e:	38 41 03             	cmp    BYTE PTR [rcx+0x3],al
   140001911:	75 05                	jne    0x140001918
   140001913:	8a 41 02             	mov    al,BYTE PTR [rcx+0x2]
   140001916:	3a 01                	cmp    al,BYTE PTR [rcx]
   140001918:	0f 92 c0             	setb   al
   14000191b:	44 8a 41 05          	mov    r8b,BYTE PTR [rcx+0x5]
   14000191f:	44 38 41 07          	cmp    BYTE PTR [rcx+0x7],r8b
   140001923:	75 08                	jne    0x14000192d
   140001925:	44 8a 41 06          	mov    r8b,BYTE PTR [rcx+0x6]
   140001929:	44 3a 41 04          	cmp    r8b,BYTE PTR [rcx+0x4]
   14000192d:	41 0f 92 c1          	setb   r9b
   140001931:	44 0f b6 c0          	movzx  r8d,al
   140001935:	4a 8d 04 41          	lea    rax,[rcx+r8*2]
   140001939:	41 80 f0 01          	xor    r8b,0x1
   14000193d:	45 0f b6 c0          	movzx  r8d,r8b
   140001941:	4e 8d 04 41          	lea    r8,[rcx+r8*2]
   140001945:	45 0f b6 d1          	movzx  r10d,r9b
   140001949:	4e 8d 0c 51          	lea    r9,[rcx+r10*2]
   14000194d:	49 83 c1 04          	add    r9,0x4
   140001951:	41 83 f2 03          	xor    r10d,0x3
   140001955:	4a 8d 0c 51          	lea    rcx,[rcx+r10*2]
   140001959:	44 8a 50 01          	mov    r10b,BYTE PTR [rax+0x1]
   14000195d:	45 38 51 01          	cmp    BYTE PTR [r9+0x1],r10b
   140001961:	75 06                	jne    0x140001969
   140001963:	45 8a 11             	mov    r10b,BYTE PTR [r9]
   140001966:	44 3a 10             	cmp    r10b,BYTE PTR [rax]
   140001969:	41 0f 92 c2          	setb   r10b
   14000196d:	45 8a 58 01          	mov    r11b,BYTE PTR [r8+0x1]
   140001971:	44 38 59 01          	cmp    BYTE PTR [rcx+0x1],r11b
   140001975:	75 06                	jne    0x14000197d
   140001977:	44 8a 19             	mov    r11b,BYTE PTR [rcx]
   14000197a:	45 3a 18             	cmp    r11b,BYTE PTR [r8]
   14000197d:	0f 92 c3             	setb   bl
   140001980:	84 db                	test   bl,bl
   140001982:	4d 89 c3             	mov    r11,r8
   140001985:	4d 0f 45 d9          	cmovne r11,r9
   140001989:	45 84 d2             	test   r10b,r10b
   14000198c:	4c 0f 45 d8          	cmovne r11,rax
   140001990:	4c 89 ce             	mov    rsi,r9
   140001993:	49 0f 45 f0          	cmovne rsi,r8
   140001997:	84 db                	test   bl,bl
   140001999:	48 0f 45 f1          	cmovne rsi,rcx
   14000199d:	41 8a 7b 01          	mov    dil,BYTE PTR [r11+0x1]
   1400019a1:	40 38 7e 01          	cmp    BYTE PTR [rsi+0x1],dil
   1400019a5:	75 06                	jne    0x1400019ad
   1400019a7:	40 8a 3e             	mov    dil,BYTE PTR [rsi]
   1400019aa:	41 3a 3b             	cmp    dil,BYTE PTR [r11]
   1400019ad:	40 0f 92 c7          	setb   dil
   1400019b1:	84 db                	test   bl,bl
   1400019b3:	49 0f 45 c8          	cmovne rcx,r8
   1400019b7:	45 84 d2             	test   r10b,r10b
   1400019ba:	49 0f 45 c1          	cmovne rax,r9
   1400019be:	40 84 ff             	test   dil,dil
   1400019c1:	4d 89 d8             	mov    r8,r11
   1400019c4:	4c 0f 45 c6          	cmovne r8,rsi
   1400019c8:	49 0f 45 f3          	cmovne rsi,r11
   1400019cc:	0f b7 00             	movzx  eax,WORD PTR [rax]
   1400019cf:	66 89 02             	mov    WORD PTR [rdx],ax
   1400019d2:	41 0f b7 00          	movzx  eax,WORD PTR [r8]
   1400019d6:	66 89 42 02          	mov    WORD PTR [rdx+0x2],ax
   1400019da:	0f b7 06             	movzx  eax,WORD PTR [rsi]
   1400019dd:	66 89 42 04          	mov    WORD PTR [rdx+0x4],ax
   1400019e1:	0f b7 01             	movzx  eax,WORD PTR [rcx]
   1400019e4:	66 89 42 06          	mov    WORD PTR [rdx+0x6],ax
   1400019e8:	5b                   	pop    rbx
   1400019e9:	5f                   	pop    rdi
   1400019ea:	5e                   	pop    rsi
   1400019eb:	c3                   	ret
   1400019ec:	56                   	push   rsi
   1400019ed:	57                   	push   rdi
   1400019ee:	53                   	push   rbx
   1400019ef:	48 83 ec 20          	sub    rsp,0x20
   1400019f3:	4c 89 c6             	mov    rsi,r8
   1400019f6:	48 89 d7             	mov    rdi,rdx
   1400019f9:	48 89 cb             	mov    rbx,rcx
   1400019fc:	4c 89 c2             	mov    rdx,r8
   1400019ff:	e8 04 ff ff ff       	call   0x140001908
   140001a04:	48 83 c3 08          	add    rbx,0x8
   140001a08:	48 8d 56 08          	lea    rdx,[rsi+0x8]
   140001a0c:	48 89 d9             	mov    rcx,rbx
   140001a0f:	e8 f4 fe ff ff       	call   0x140001908
   140001a14:	ba 08 00 00 00       	mov    edx,0x8
   140001a19:	48 89 f1             	mov    rcx,rsi
   140001a1c:	49 89 f8             	mov    r8,rdi
   140001a1f:	48 83 c4 20          	add    rsp,0x20
   140001a23:	5b                   	pop    rbx
   140001a24:	5f                   	pop    rdi
   140001a25:	5e                   	pop    rsi
   140001a26:	e9 00 00 00 00       	jmp    0x140001a2b
   140001a2b:	41 57                	push   r15
   140001a2d:	41 56                	push   r14
   140001a2f:	56                   	push   rsi
   140001a30:	57                   	push   rdi
   140001a31:	55                   	push   rbp
   140001a32:	53                   	push   rbx
   140001a33:	48 83 ec 28          	sub    rsp,0x28
   140001a37:	49 89 d3             	mov    r11,rdx
   140001a3a:	49 d1 eb             	shr    r11,1
   140001a3d:	49 89 d1             	mov    r9,rdx
   140001a40:	49 83 e1 fe          	and    r9,0xfffffffffffffffe
   140001a44:	4a 8d 04 09          	lea    rax,[rcx+r9*1]
   140001a48:	4e 8d 14 09          	lea    r10,[rcx+r9*1]
   140001a4c:	49 83 c2 fe          	add    r10,0xfffffffffffffffe
   140001a50:	4c 8d 0c 51          	lea    r9,[rcx+rdx*2]
   140001a54:	49 83 c1 fe          	add    r9,0xfffffffffffffffe
   140001a58:	49 8d 34 50          	lea    rsi,[r8+rdx*2]
   140001a5c:	48 83 c6 fe          	add    rsi,0xfffffffffffffffe
   140001a60:	49 f7 db             	neg    r11
   140001a63:	31 ff                	xor    edi,edi
   140001a65:	49 39 fb             	cmp    r11,rdi
   140001a68:	74 73                	je     0x140001add
   140001a6a:	8a 59 01             	mov    bl,BYTE PTR [rcx+0x1]
   140001a6d:	38 58 01             	cmp    BYTE PTR [rax+0x1],bl
   140001a70:	75 04                	jne    0x140001a76
   140001a72:	8a 18                	mov    bl,BYTE PTR [rax]
   140001a74:	3a 19                	cmp    bl,BYTE PTR [rcx]
   140001a76:	0f 92 c3             	setb   bl
   140001a79:	49 89 c6             	mov    r14,rax
   140001a7c:	84 db                	test   bl,bl
   140001a7e:	75 03                	jne    0x140001a83
   140001a80:	49 89 ce             	mov    r14,rcx
   140001a83:	41 0f b7 2e          	movzx  ebp,WORD PTR [r14]
   140001a87:	66 41 89 28          	mov    WORD PTR [r8],bp
   140001a8b:	41 8a 6a 01          	mov    bpl,BYTE PTR [r10+0x1]
   140001a8f:	41 38 69 01          	cmp    BYTE PTR [r9+0x1],bpl
   140001a93:	75 06                	jne    0x140001a9b
   140001a95:	41 8a 29             	mov    bpl,BYTE PTR [r9]
   140001a98:	41 3a 2a             	cmp    bpl,BYTE PTR [r10]
   140001a9b:	40 0f 92 c5          	setb   bpl
   140001a9f:	4d 89 d6             	mov    r14,r10
   140001aa2:	40 84 ed             	test   bpl,bpl
   140001aa5:	75 03                	jne    0x140001aaa
   140001aa7:	4d 89 ce             	mov    r14,r9
   140001aaa:	44 0f b6 fb          	movzx  r15d,bl
   140001aae:	80 f3 01             	xor    bl,0x1
   140001ab1:	4a 8d 04 78          	lea    rax,[rax+r15*2]
   140001ab5:	0f b6 db             	movzx  ebx,bl
   140001ab8:	48 8d 0c 59          	lea    rcx,[rcx+rbx*2]
   140001abc:	49 83 c0 02          	add    r8,0x2
   140001ac0:	41 0f b7 1e          	movzx  ebx,WORD PTR [r14]
   140001ac4:	66 89 1c 7e          	mov    WORD PTR [rsi+rdi*2],bx
   140001ac8:	40 0f b6 dd          	movzx  ebx,bpl
   140001acc:	01 db                	add    ebx,ebx
   140001ace:	49 01 d9             	add    r9,rbx
   140001ad1:	49 83 c1 fe          	add    r9,0xfffffffffffffffe
   140001ad5:	49 29 da             	sub    r10,rbx
   140001ad8:	48 ff cf             	dec    rdi
   140001adb:	eb 88                	jmp    0x140001a65
   140001add:	49 83 c2 02          	add    r10,0x2
   140001ae1:	f6 c2 01             	test   dl,0x1
   140001ae4:	74 25                	je     0x140001b0b
   140001ae6:	31 d2                	xor    edx,edx
   140001ae8:	45 31 db             	xor    r11d,r11d
   140001aeb:	4c 39 d1             	cmp    rcx,r10
   140001aee:	0f 93 c2             	setae  dl
   140001af1:	41 0f 92 c3          	setb   r11b
   140001af5:	48 89 c6             	mov    rsi,rax
   140001af8:	48 0f 42 f1          	cmovb  rsi,rcx
   140001afc:	0f b7 36             	movzx  esi,WORD PTR [rsi]
   140001aff:	66 41 89 30          	mov    WORD PTR [r8],si
   140001b03:	4a 8d 0c 59          	lea    rcx,[rcx+r11*2]
   140001b07:	48 8d 04 50          	lea    rax,[rax+rdx*2]
   140001b0b:	4c 39 d1             	cmp    rcx,r10
   140001b0e:	75 16                	jne    0x140001b26
   140001b10:	49 83 c1 02          	add    r9,0x2
   140001b14:	4c 39 c8             	cmp    rax,r9
   140001b17:	75 0d                	jne    0x140001b26
   140001b19:	48 83 c4 28          	add    rsp,0x28
   140001b1d:	5b                   	pop    rbx
   140001b1e:	5d                   	pop    rbp
   140001b1f:	5f                   	pop    rdi
   140001b20:	5e                   	pop    rsi
   140001b21:	41 5e                	pop    r14
   140001b23:	41 5f                	pop    r15
   140001b25:	c3                   	ret
   140001b26:	e8 35 24 0c 00       	call   0x1400c3f60
   140001b2b:	0f 0b                	ud2
   140001b2d:	41 56                	push   r14
   140001b2f:	56                   	push   rsi
   140001b30:	57                   	push   rdi
   140001b31:	53                   	push   rbx
   140001b32:	b8 28 10 00 00       	mov    eax,0x1028
   140001b37:	e8 a4 0a 0c 00       	call   0x1400c25e0
   140001b3c:	48 29 c4             	sub    rsp,rax
   140001b3f:	48 89 d6             	mov    rsi,rdx
   140001b42:	48 89 cf             	mov    rdi,rcx
   140001b45:	48 89 d0             	mov    rax,rdx
   140001b48:	48 d1 e8             	shr    rax,1
   140001b4b:	48 29 c2             	sub    rdx,rax
   140001b4e:	b9 00 09 3d 00       	mov    ecx,0x3d0900
   140001b53:	48 39 ce             	cmp    rsi,rcx
   140001b56:	48 0f 42 ce          	cmovb  rcx,rsi
   140001b5a:	48 39 d1             	cmp    rcx,rdx
   140001b5d:	48 0f 46 ca          	cmovbe rcx,rdx
   140001b61:	48 81 f9 01 08 00 00 	cmp    rcx,0x801
   140001b68:	72 41                	jb     0x140001bab
   140001b6a:	ba 02 00 00 00       	mov    edx,0x2
   140001b6f:	e8 f5 0d 00 00       	call   0x140002969
   140001b74:	48 89 c3             	mov    rbx,rax
   140001b77:	49 89 d6             	mov    r14,rdx
   140001b7a:	48 83 fe 41          	cmp    rsi,0x41
   140001b7e:	0f 92 44 24 20       	setb   BYTE PTR [rsp+0x20]
   140001b83:	48 89 f9             	mov    rcx,rdi
   140001b86:	48 89 f2             	mov    rdx,rsi
   140001b89:	4d 89 f0             	mov    r8,r14
   140001b8c:	49 89 c1             	mov    r9,rax
   140001b8f:	e8 70 00 00 00       	call   0x140001c04
   140001b94:	48 89 d9             	mov    rcx,rbx
   140001b97:	4c 89 f2             	mov    rdx,r14
   140001b9a:	48 81 c4 28 10 00 00 	add    rsp,0x1028
   140001ba1:	5b                   	pop    rbx
   140001ba2:	5f                   	pop    rdi
   140001ba3:	5e                   	pop    rsi
   140001ba4:	41 5e                	pop    r14
   140001ba6:	e9 96 f9 ff ff       	jmp    0x140001541
   140001bab:	48 83 fe 41          	cmp    rsi,0x41
   140001baf:	0f 92 44 24 20       	setb   BYTE PTR [rsp+0x20]
   140001bb4:	4c 8d 44 24 28       	lea    r8,[rsp+0x28]
   140001bb9:	41 b9 00 08 00 00    	mov    r9d,0x800
   140001bbf:	48 89 f9             	mov    rcx,rdi
   140001bc2:	48 89 f2             	mov    rdx,rsi
   140001bc5:	e8 3a 00 00 00       	call   0x140001c04
   140001bca:	90                   	nop
   140001bcb:	48 81 c4 28 10 00 00 	add    rsp,0x1028
   140001bd2:	5b                   	pop    rbx
   140001bd3:	5f                   	pop    rdi
   140001bd4:	5e                   	pop    rsi
   140001bd5:	41 5e                	pop    r14
   140001bd7:	c3                   	ret
   140001bd8:	48 83 ec 38          	sub    rsp,0x38
   140001bdc:	48 89 d0             	mov    rax,rdx
   140001bdf:	48 83 c8 01          	or     rax,0x1
   140001be3:	48 0f bd c0          	bsr    rax,rax
   140001be7:	83 f0 3f             	xor    eax,0x3f
   140001bea:	01 c0                	add    eax,eax
   140001bec:	83 f0 7e             	xor    eax,0x7e
   140001bef:	89 44 24 20          	mov    DWORD PTR [rsp+0x20],eax
   140001bf3:	48 83 64 24 28 00    	and    QWORD PTR [rsp+0x28],0x0
   140001bf9:	e8 36 05 00 00       	call   0x140002134
   140001bfe:	90                   	nop
   140001bff:	48 83 c4 38          	add    rsp,0x38
   140001c03:	c3                   	ret
   140001c04:	41 57                	push   r15
   140001c06:	41 56                	push   r14
   140001c08:	41 55                	push   r13
   140001c0a:	41 54                	push   r12
   140001c0c:	56                   	push   rsi
   140001c0d:	57                   	push   rdi
   140001c0e:	55                   	push   rbp
   140001c0f:	53                   	push   rbx
   140001c10:	48 81 ec 08 03 00 00 	sub    rsp,0x308
   140001c17:	4c 89 c7             	mov    rdi,r8
   140001c1a:	49 89 d0             	mov    r8,rdx
   140001c1d:	48 89 4c 24 50       	mov    QWORD PTR [rsp+0x50],rcx
   140001c22:	8a 84 24 70 03 00 00 	mov    al,BYTE PTR [rsp+0x370]
   140001c29:	88 44 24 37          	mov    BYTE PTR [rsp+0x37],al
   140001c2d:	48 b8 00 00 00 00 00 	movabs rax,0x4000000000000000
   140001c34:	00 00 40 
   140001c37:	31 d2                	xor    edx,edx
   140001c39:	49 f7 f0             	div    r8
   140001c3c:	48 83 fa 01          	cmp    rdx,0x1
   140001c40:	48 83 d8 ff          	sbb    rax,0xffffffffffffffff
   140001c44:	48 89 44 24 70       	mov    QWORD PTR [rsp+0x70],rax
   140001c49:	49 81 f8 01 10 00 00 	cmp    r8,0x1001
   140001c50:	4c 89 4c 24 38       	mov    QWORD PTR [rsp+0x38],r9
   140001c55:	4c 89 44 24 58       	mov    QWORD PTR [rsp+0x58],r8
   140001c5a:	73 18                	jae    0x140001c74
   140001c5c:	4c 89 c0             	mov    rax,r8
   140001c5f:	48 d1 e8             	shr    rax,1
   140001c62:	49 29 c0             	sub    r8,rax
   140001c65:	49 83 f8 40          	cmp    r8,0x40
   140001c69:	b8 40 00 00 00       	mov    eax,0x40
   140001c6e:	49 0f 42 c0          	cmovb  rax,r8
   140001c72:	eb 0d                	jmp    0x140001c81
   140001c74:	4c 89 c1             	mov    rcx,r8
   140001c77:	e8 04 81 00 00       	call   0x140009d80
   140001c7c:	4c 8b 4c 24 38       	mov    r9,QWORD PTR [rsp+0x38]
   140001c81:	48 89 44 24 48       	mov    QWORD PTR [rsp+0x48],rax
   140001c86:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
   140001c8b:	48 83 c0 fe          	add    rax,0xfffffffffffffffe
   140001c8f:	48 89 44 24 78       	mov    QWORD PTR [rsp+0x78],rax
   140001c94:	be 01 00 00 00       	mov    esi,0x1
   140001c99:	31 ed                	xor    ebp,ebp
   140001c9b:	31 db                	xor    ebx,ebx
   140001c9d:	48 8b 4c 24 58       	mov    rcx,QWORD PTR [rsp+0x58]
   140001ca2:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
   140001ca7:	48 8d 04 68          	lea    rax,[rax+rbp*2]
   140001cab:	48 89 44 24 40       	mov    QWORD PTR [rsp+0x40],rax
   140001cb0:	48 89 c8             	mov    rax,rcx
   140001cb3:	48 29 e8             	sub    rax,rbp
   140001cb6:	48 89 6c 24 68       	mov    QWORD PTR [rsp+0x68],rbp
   140001cbb:	76 53                	jbe    0x140001d10
   140001cbd:	49 89 c0             	mov    r8,rax
   140001cc0:	48 3b 44 24 48       	cmp    rax,QWORD PTR [rsp+0x48]
   140001cc5:	73 57                	jae    0x140001d1e
   140001cc7:	80 7c 24 37 00       	cmp    BYTE PTR [rsp+0x37],0x0
   140001ccc:	74 67                	je     0x140001d35
   140001cce:	4d 89 c6             	mov    r14,r8
   140001cd1:	49 83 f8 20          	cmp    r8,0x20
   140001cd5:	b8 20 00 00 00       	mov    eax,0x20
   140001cda:	4c 0f 43 f0          	cmovae r14,rax
   140001cde:	48 83 64 24 28 00    	and    QWORD PTR [rsp+0x28],0x0
   140001ce4:	83 64 24 20 00       	and    DWORD PTR [rsp+0x20],0x0
   140001ce9:	48 8b 4c 24 40       	mov    rcx,QWORD PTR [rsp+0x40]
   140001cee:	4c 89 f2             	mov    rdx,r14
   140001cf1:	49 89 f8             	mov    r8,rdi
   140001cf4:	4c 8b 4c 24 38       	mov    r9,QWORD PTR [rsp+0x38]
   140001cf9:	e8 36 04 00 00       	call   0x140002134
   140001cfe:	4c 8b 4c 24 38       	mov    r9,QWORD PTR [rsp+0x38]
   140001d03:	44 89 f0             	mov    eax,r14d
   140001d06:	48 8d 0c 45 01 00 00 	lea    rcx,[rax*2+0x1]
   140001d0d:	00 
   140001d0e:	eb 37                	jmp    0x140001d47
   140001d10:	31 d2                	xor    edx,edx
   140001d12:	b8 01 00 00 00       	mov    eax,0x1
   140001d17:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
   140001d1c:	eb 62                	jmp    0x140001d80
   140001d1e:	49 83 f8 02          	cmp    r8,0x2
   140001d22:	0f 83 4f 02 00 00    	jae    0x140001f77
   140001d28:	4c 89 c1             	mov    rcx,r8
   140001d2b:	48 8d 0c 4d 01 00 00 	lea    rcx,[rcx*2+0x1]
   140001d32:	00 
   140001d33:	eb 12                	jmp    0x140001d47
   140001d35:	48 8b 44 24 48       	mov    rax,QWORD PTR [rsp+0x48]
   140001d3a:	4c 89 c1             	mov    rcx,r8
   140001d3d:	49 39 c0             	cmp    r8,rax
   140001d40:	48 0f 43 c8          	cmovae rcx,rax
   140001d44:	48 01 c9             	add    rcx,rcx
   140001d47:	48 89 f0             	mov    rax,rsi
   140001d4a:	48 d1 e8             	shr    rax,1
   140001d4d:	48 89 4c 24 60       	mov    QWORD PTR [rsp+0x60],rcx
   140001d52:	48 d1 e9             	shr    rcx,1
   140001d55:	48 8d 14 6d 00 00 00 	lea    rdx,[rbp*2+0x0]
   140001d5c:	00 
   140001d5d:	48 29 c2             	sub    rdx,rax
   140001d60:	48 8d 04 69          	lea    rax,[rcx+rbp*2]
   140001d64:	48 8b 4c 24 70       	mov    rcx,QWORD PTR [rsp+0x70]
   140001d69:	48 0f af d1          	imul   rdx,rcx
   140001d6d:	48 0f af c1          	imul   rax,rcx
   140001d71:	48 31 d0             	xor    rax,rdx
   140001d74:	ba 7f 00 00 00       	mov    edx,0x7f
   140001d79:	48 0f bd d0          	bsr    rdx,rax
   140001d7d:	83 f2 3f             	xor    edx,0x3f
   140001d80:	48 8b 44 24 78       	mov    rax,QWORD PTR [rsp+0x78]
   140001d85:	48 8d 04 68          	lea    rax,[rax+rbp*2]
   140001d89:	48 89 84 24 80 00 00 	mov    QWORD PTR [rsp+0x80],rax
   140001d90:	00 
   140001d91:	48 89 94 24 88 00 00 	mov    QWORD PTR [rsp+0x88],rdx
   140001d98:	00 
   140001d99:	48 83 fb 02          	cmp    rbx,0x2
   140001d9d:	0f 82 a4 01 00 00    	jb     0x140001f47
   140001da3:	38 94 1c b5 00 00 00 	cmp    BYTE PTR [rsp+rbx*1+0xb5],dl
   140001daa:	0f 82 97 01 00 00    	jb     0x140001f47
   140001db0:	48 8b 84 dc f0 00 00 	mov    rax,QWORD PTR [rsp+rbx*8+0xf0]
   140001db7:	00 
   140001db8:	48 ff cb             	dec    rbx
   140001dbb:	49 89 c7             	mov    r15,rax
   140001dbe:	49 d1 ef             	shr    r15,1
   140001dc1:	49 89 f5             	mov    r13,rsi
   140001dc4:	49 d1 ed             	shr    r13,1
   140001dc7:	4f 8d 34 2f          	lea    r14,[r15+r13*1]
   140001dcb:	4d 39 ce             	cmp    r14,r9
   140001dce:	77 11                	ja     0x140001de1
   140001dd0:	89 c1                	mov    ecx,eax
   140001dd2:	09 f1                	or     ecx,esi
   140001dd4:	83 e1 01             	and    ecx,0x1
   140001dd7:	75 08                	jne    0x140001de1
   140001dd9:	4d 01 f6             	add    r14,r14
   140001ddc:	4c 89 f6             	mov    rsi,r14
   140001ddf:	eb b8                	jmp    0x140001d99
   140001de1:	48 89 e9             	mov    rcx,rbp
   140001de4:	4c 29 f1             	sub    rcx,r14
   140001de7:	48 8b 54 24 50       	mov    rdx,QWORD PTR [rsp+0x50]
   140001dec:	4c 8d 24 4a          	lea    r12,[rdx+rcx*2]
   140001df0:	a8 01                	test   al,0x1
   140001df2:	75 18                	jne    0x140001e0c
   140001df4:	4c 89 e1             	mov    rcx,r12
   140001df7:	4c 89 fa             	mov    rdx,r15
   140001dfa:	49 89 f8             	mov    r8,rdi
   140001dfd:	4c 8b 4c 24 38       	mov    r9,QWORD PTR [rsp+0x38]
   140001e02:	e8 d1 fd ff ff       	call   0x140001bd8
   140001e07:	4c 8b 4c 24 38       	mov    r9,QWORD PTR [rsp+0x38]
   140001e0c:	40 f6 c6 01          	test   sil,0x1
   140001e10:	75 19                	jne    0x140001e2b
   140001e12:	4b 8d 0c 7c          	lea    rcx,[r12+r15*2]
   140001e16:	4c 89 ea             	mov    rdx,r13
   140001e19:	49 89 f8             	mov    r8,rdi
   140001e1c:	4c 8b 4c 24 38       	mov    r9,QWORD PTR [rsp+0x38]
   140001e21:	e8 b2 fd ff ff       	call   0x140001bd8
   140001e26:	4c 8b 4c 24 38       	mov    r9,QWORD PTR [rsp+0x38]
   140001e2b:	4d 85 ed             	test   r13,r13
   140001e2e:	0f 84 af 00 00 00    	je     0x140001ee3
   140001e34:	4d 85 ff             	test   r15,r15
   140001e37:	0f 84 a6 00 00 00    	je     0x140001ee3
   140001e3d:	4d 39 fd             	cmp    r13,r15
   140001e40:	4c 89 fd             	mov    rbp,r15
   140001e43:	49 0f 42 ed          	cmovb  rbp,r13
   140001e47:	49 39 e9             	cmp    r9,rbp
   140001e4a:	0f 82 93 00 00 00    	jb     0x140001ee3
   140001e50:	4b 8d 34 7c          	lea    rsi,[r12+r15*2]
   140001e54:	4d 39 ef             	cmp    r15,r13
   140001e57:	4c 89 e2             	mov    rdx,r12
   140001e5a:	48 0f 47 d6          	cmova  rdx,rsi
   140001e5e:	4c 8d 04 6d 00 00 00 	lea    r8,[rbp*2+0x0]
   140001e65:	00 
   140001e66:	48 89 f9             	mov    rcx,rdi
   140001e69:	e8 58 15 0c 00       	call   0x1400c33c6
   140001e6e:	4c 8d 04 6f          	lea    r8,[rdi+rbp*2]
   140001e72:	4d 39 ef             	cmp    r15,r13
   140001e75:	0f 86 82 00 00 00    	jbe    0x140001efd
   140001e7b:	48 8b 84 24 80 00 00 	mov    rax,QWORD PTR [rsp+0x80]
   140001e82:	00 
   140001e83:	49 8d 48 fe          	lea    rcx,[r8-0x2]
   140001e87:	8a 56 ff             	mov    dl,BYTE PTR [rsi-0x1]
   140001e8a:	48 83 c6 fe          	add    rsi,0xfffffffffffffffe
   140001e8e:	41 38 50 ff          	cmp    BYTE PTR [r8-0x1],dl
   140001e92:	75 04                	jne    0x140001e98
   140001e94:	8a 11                	mov    dl,BYTE PTR [rcx]
   140001e96:	3a 16                	cmp    dl,BYTE PTR [rsi]
   140001e98:	0f 92 c2             	setb   dl
   140001e9b:	49 89 f0             	mov    r8,rsi
   140001e9e:	84 d2                	test   dl,dl
   140001ea0:	75 03                	jne    0x140001ea5
   140001ea2:	49 89 c8             	mov    r8,rcx
   140001ea5:	45 0f b7 00          	movzx  r8d,WORD PTR [r8]
   140001ea9:	66 44 89 00          	mov    WORD PTR [rax],r8w
   140001ead:	44 0f b6 c2          	movzx  r8d,dl
   140001eb1:	80 f2 01             	xor    dl,0x1
   140001eb4:	0f b6 d2             	movzx  edx,dl
   140001eb7:	48 8d 34 56          	lea    rsi,[rsi+rdx*2]
   140001ebb:	4e 8d 04 41          	lea    r8,[rcx+r8*2]
   140001ebf:	4c 39 e6             	cmp    rsi,r12
   140001ec2:	74 09                	je     0x140001ecd
   140001ec4:	48 83 c0 fe          	add    rax,0xfffffffffffffffe
   140001ec8:	49 39 f8             	cmp    r8,rdi
   140001ecb:	75 b6                	jne    0x140001e83
   140001ecd:	49 89 f4             	mov    r12,rsi
   140001ed0:	48 89 fa             	mov    rdx,rdi
   140001ed3:	49 29 d0             	sub    r8,rdx
   140001ed6:	4c 89 e1             	mov    rcx,r12
   140001ed9:	e8 e8 14 0c 00       	call   0x1400c33c6
   140001ede:	4c 8b 4c 24 38       	mov    r9,QWORD PTR [rsp+0x38]
   140001ee3:	4a 8d 34 75 01 00 00 	lea    rsi,[r14*2+0x1]
   140001eea:	00 
   140001eeb:	48 8b 6c 24 68       	mov    rbp,QWORD PTR [rsp+0x68]
   140001ef0:	48 8b 94 24 88 00 00 	mov    rdx,QWORD PTR [rsp+0x88]
   140001ef7:	00 
   140001ef8:	e9 9c fe ff ff       	jmp    0x140001d99
   140001efd:	48 89 fa             	mov    rdx,rdi
   140001f00:	4c 8b 54 24 40       	mov    r10,QWORD PTR [rsp+0x40]
   140001f05:	4c 39 c2             	cmp    rdx,r8
   140001f08:	74 c9                	je     0x140001ed3
   140001f0a:	4c 39 d6             	cmp    rsi,r10
   140001f0d:	74 c4                	je     0x140001ed3
   140001f0f:	8a 42 01             	mov    al,BYTE PTR [rdx+0x1]
   140001f12:	38 46 01             	cmp    BYTE PTR [rsi+0x1],al
   140001f15:	75 04                	jne    0x140001f1b
   140001f17:	8a 06                	mov    al,BYTE PTR [rsi]
   140001f19:	3a 02                	cmp    al,BYTE PTR [rdx]
   140001f1b:	0f 92 c0             	setb   al
   140001f1e:	48 89 f1             	mov    rcx,rsi
   140001f21:	84 c0                	test   al,al
   140001f23:	75 03                	jne    0x140001f28
   140001f25:	48 89 d1             	mov    rcx,rdx
   140001f28:	44 0f b6 c8          	movzx  r9d,al
   140001f2c:	34 01                	xor    al,0x1
   140001f2e:	0f b7 09             	movzx  ecx,WORD PTR [rcx]
   140001f31:	66 41 89 0c 24       	mov    WORD PTR [r12],cx
   140001f36:	0f b6 c0             	movzx  eax,al
   140001f39:	48 8d 14 42          	lea    rdx,[rdx+rax*2]
   140001f3d:	4a 8d 34 4e          	lea    rsi,[rsi+r9*2]
   140001f41:	49 83 c4 02          	add    r12,0x2
   140001f45:	eb be                	jmp    0x140001f05
   140001f47:	48 89 b4 dc f8 00 00 	mov    QWORD PTR [rsp+rbx*8+0xf8],rsi
   140001f4e:	00 
   140001f4f:	88 94 1c b6 00 00 00 	mov    BYTE PTR [rsp+rbx*1+0xb6],dl
   140001f56:	48 39 6c 24 58       	cmp    QWORD PTR [rsp+0x58],rbp
   140001f5b:	0f 86 77 01 00 00    	jbe    0x1400020d8
   140001f61:	48 ff c3             	inc    rbx
   140001f64:	48 8b 74 24 60       	mov    rsi,QWORD PTR [rsp+0x60]
   140001f69:	48 89 f0             	mov    rax,rsi
   140001f6c:	48 d1 e8             	shr    rax,1
   140001f6f:	48 01 c5             	add    rbp,rax
   140001f72:	e9 26 fd ff ff       	jmp    0x140001c9d
   140001f77:	48 8b 4c 24 40       	mov    rcx,QWORD PTR [rsp+0x40]
   140001f7c:	8a 41 01             	mov    al,BYTE PTR [rcx+0x1]
   140001f7f:	38 41 03             	cmp    BYTE PTR [rcx+0x3],al
   140001f82:	75 35                	jne    0x140001fb9
   140001f84:	8a 41 02             	mov    al,BYTE PTR [rcx+0x2]
   140001f87:	3a 01                	cmp    al,BYTE PTR [rcx]
   140001f89:	72 30                	jb     0x140001fbb
   140001f8b:	41 be 02 00 00 00    	mov    r14d,0x2
   140001f91:	4d 39 c6             	cmp    r14,r8
   140001f94:	73 53                	jae    0x140001fe9
   140001f96:	48 8b 54 24 40       	mov    rdx,QWORD PTR [rsp+0x40]
   140001f9b:	42 8a 44 72 ff       	mov    al,BYTE PTR [rdx+r14*2-0x1]
   140001fa0:	42 8a 4c 72 01       	mov    cl,BYTE PTR [rdx+r14*2+0x1]
   140001fa5:	38 c1                	cmp    cl,al
   140001fa7:	75 09                	jne    0x140001fb2
   140001fa9:	42 8a 04 72          	mov    al,BYTE PTR [rdx+r14*2]
   140001fad:	42 3a 44 72 fe       	cmp    al,BYTE PTR [rdx+r14*2-0x2]
   140001fb2:	72 3c                	jb     0x140001ff0
   140001fb4:	49 ff c6             	inc    r14
   140001fb7:	eb d8                	jmp    0x140001f91
   140001fb9:	73 d0                	jae    0x140001f8b
   140001fbb:	41 be 02 00 00 00    	mov    r14d,0x2
   140001fc1:	b0 01                	mov    al,0x1
   140001fc3:	4d 39 c6             	cmp    r14,r8
   140001fc6:	73 23                	jae    0x140001feb
   140001fc8:	48 8b 54 24 40       	mov    rdx,QWORD PTR [rsp+0x40]
   140001fcd:	42 8a 4c 72 ff       	mov    cl,BYTE PTR [rdx+r14*2-0x1]
   140001fd2:	42 38 4c 72 01       	cmp    BYTE PTR [rdx+r14*2+0x1],cl
   140001fd7:	75 09                	jne    0x140001fe2
   140001fd9:	42 8a 0c 72          	mov    cl,BYTE PTR [rdx+r14*2]
   140001fdd:	42 3a 4c 72 fe       	cmp    cl,BYTE PTR [rdx+r14*2-0x2]
   140001fe2:	73 0e                	jae    0x140001ff2
   140001fe4:	49 ff c6             	inc    r14
   140001fe7:	eb d8                	jmp    0x140001fc1
   140001fe9:	31 c0                	xor    eax,eax
   140001feb:	4d 89 c6             	mov    r14,r8
   140001fee:	eb 02                	jmp    0x140001ff2
   140001ff0:	31 c0                	xor    eax,eax
   140001ff2:	4c 3b 74 24 48       	cmp    r14,QWORD PTR [rsp+0x48]
   140001ff7:	0f 82 ca fc ff ff    	jb     0x140001cc7
   140001ffd:	84 c0                	test   al,al
   140001fff:	0f 84 b9 00 00 00    	je     0x1400020be
   140002005:	4d 89 f5             	mov    r13,r14
   140002008:	49 d1 ed             	shr    r13,1
   14000200b:	48 8b 54 24 40       	mov    rdx,QWORD PTR [rsp+0x40]
   140002010:	4e 8d 24 72          	lea    r12,[rdx+r14*2]
   140002014:	4c 89 f0             	mov    rax,r14
   140002017:	48 83 e0 fe          	and    rax,0xfffffffffffffffe
   14000201b:	49 29 c4             	sub    r12,rax
   14000201e:	48 8d 05 53 c9 0e 00 	lea    rax,[rip+0xec953]        # 0x1400ee978
   140002025:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   14000202a:	48 8d 8c 24 90 00 00 	lea    rcx,[rsp+0x90]
   140002031:	00 
   140002032:	4d 89 e8             	mov    r8,r13
   140002035:	4d 89 e9             	mov    r9,r13
   140002038:	e8 7f f7 ff ff       	call   0x1400017bc
   14000203d:	48 8b ac 24 90 00 00 	mov    rbp,QWORD PTR [rsp+0x90]
   140002044:	00 
   140002045:	4c 8b bc 24 98 00 00 	mov    r15,QWORD PTR [rsp+0x98]
   14000204c:	00 
   14000204d:	48 8d 05 3c c9 0e 00 	lea    rax,[rip+0xec93c]        # 0x1400ee990
   140002054:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   140002059:	48 8d 8c 24 90 00 00 	lea    rcx,[rsp+0x90]
   140002060:	00 
   140002061:	4c 89 e2             	mov    rdx,r12
   140002064:	4d 89 e8             	mov    r8,r13
   140002067:	4d 89 e9             	mov    r9,r13
   14000206a:	e8 4d f7 ff ff       	call   0x1400017bc
   14000206f:	48 8b 84 24 90 00 00 	mov    rax,QWORD PTR [rsp+0x90]
   140002076:	00 
   140002077:	48 8b 94 24 98 00 00 	mov    rdx,QWORD PTR [rsp+0x98]
   14000207e:	00 
   14000207f:	49 ff cd             	dec    r13
   140002082:	4c 89 e9             	mov    rcx,r13
   140002085:	45 31 c0             	xor    r8d,r8d
   140002088:	48 83 f9 ff          	cmp    rcx,0xffffffffffffffff
   14000208c:	74 38                	je     0x1400020c6
   14000208e:	4d 39 c7             	cmp    r15,r8
   140002091:	0f 84 80 00 00 00    	je     0x140002117
   140002097:	49 39 d5             	cmp    r13,rdx
   14000209a:	0f 83 86 00 00 00    	jae    0x140002126
   1400020a0:	46 0f b7 4c 45 00    	movzx  r9d,WORD PTR [rbp+r8*2+0x0]
   1400020a6:	44 0f b7 14 48       	movzx  r10d,WORD PTR [rax+rcx*2]
   1400020ab:	66 46 89 54 45 00    	mov    WORD PTR [rbp+r8*2+0x0],r10w
   1400020b1:	66 44 89 0c 48       	mov    WORD PTR [rax+rcx*2],r9w
   1400020b6:	49 ff c0             	inc    r8
   1400020b9:	48 ff c9             	dec    rcx
   1400020bc:	eb ca                	jmp    0x140002088
   1400020be:	4c 89 f1             	mov    rcx,r14
   1400020c1:	e9 65 fc ff ff       	jmp    0x140001d2b
   1400020c6:	4c 89 f1             	mov    rcx,r14
   1400020c9:	4c 8b 4c 24 38       	mov    r9,QWORD PTR [rsp+0x38]
   1400020ce:	48 8b 6c 24 68       	mov    rbp,QWORD PTR [rsp+0x68]
   1400020d3:	e9 53 fc ff ff       	jmp    0x140001d2b
   1400020d8:	40 f6 c6 01          	test   sil,0x1
   1400020dc:	75 25                	jne    0x140002103
   1400020de:	48 8b 4c 24 50       	mov    rcx,QWORD PTR [rsp+0x50]
   1400020e3:	48 8b 54 24 58       	mov    rdx,QWORD PTR [rsp+0x58]
   1400020e8:	49 89 f8             	mov    r8,rdi
   1400020eb:	48 81 c4 08 03 00 00 	add    rsp,0x308
   1400020f2:	5b                   	pop    rbx
   1400020f3:	5d                   	pop    rbp
   1400020f4:	5f                   	pop    rdi
   1400020f5:	5e                   	pop    rsi
   1400020f6:	41 5c                	pop    r12
   1400020f8:	41 5d                	pop    r13
   1400020fa:	41 5e                	pop    r14
   1400020fc:	41 5f                	pop    r15
   1400020fe:	e9 d5 fa ff ff       	jmp    0x140001bd8
   140002103:	48 81 c4 08 03 00 00 	add    rsp,0x308
   14000210a:	5b                   	pop    rbx
   14000210b:	5d                   	pop    rbp
   14000210c:	5f                   	pop    rdi
   14000210d:	5e                   	pop    rsi
   14000210e:	41 5c                	pop    r12
   140002110:	41 5d                	pop    r13
   140002112:	41 5e                	pop    r14
   140002114:	41 5f                	pop    r15
   140002116:	c3                   	ret
   140002117:	4c 8d 05 8a c8 0e 00 	lea    r8,[rip+0xec88a]        # 0x1400ee9a8
   14000211e:	4c 89 f9             	mov    rcx,r15
   140002121:	4c 89 fa             	mov    rdx,r15
   140002124:	eb 07                	jmp    0x14000212d
   140002126:	4c 8d 05 93 c8 0e 00 	lea    r8,[rip+0xec893]        # 0x1400ee9c0
   14000212d:	e8 f7 1b 0c 00       	call   0x1400c3d29
   140002132:	0f 0b                	ud2
   140002134:	41 57                	push   r15
   140002136:	41 56                	push   r14
   140002138:	41 55                	push   r13
   14000213a:	41 54                	push   r12
   14000213c:	56                   	push   rsi
   14000213d:	57                   	push   rdi
   14000213e:	55                   	push   rbp
   14000213f:	53                   	push   rbx
   140002140:	48 81 ec 88 00 00 00 	sub    rsp,0x88
   140002147:	4c 89 4c 24 40       	mov    QWORD PTR [rsp+0x40],r9
   14000214c:	4c 89 c6             	mov    rsi,r8
   14000214f:	48 8b 84 24 f8 00 00 	mov    rax,QWORD PTR [rsp+0xf8]
   140002156:	00 
   140002157:	48 89 44 24 48       	mov    QWORD PTR [rsp+0x48],rax
   14000215c:	8b ac 24 f0 00 00 00 	mov    ebp,DWORD PTR [rsp+0xf0]
   140002163:	48 89 d7             	mov    rdi,rdx
   140002166:	48 89 cb             	mov    rbx,rcx
   140002169:	48 83 ff 21          	cmp    rdi,0x21
   14000216d:	0f 82 6f 04 00 00    	jb     0x1400025e2
   140002173:	85 ed                	test   ebp,ebp
   140002175:	0f 84 b8 04 00 00    	je     0x140002633
   14000217b:	49 89 f9             	mov    r9,rdi
   14000217e:	49 c1 e9 03          	shr    r9,0x3
   140002182:	48 89 fa             	mov    rdx,rdi
   140002185:	48 b8 f8 ff ff ff ff 	movabs rax,0x3ffffffffffffff8
   14000218c:	ff ff 3f 
   14000218f:	48 21 c2             	and    rdx,rax
   140002192:	48 01 da             	add    rdx,rbx
   140002195:	4d 6b c1 0e          	imul   r8,r9,0xe
   140002199:	49 01 d8             	add    r8,rbx
   14000219c:	48 83 ff 40          	cmp    rdi,0x40
   1400021a0:	73 4a                	jae    0x1400021ec
   1400021a2:	8a 43 01             	mov    al,BYTE PTR [rbx+0x1]
   1400021a5:	44 8a 4a 01          	mov    r9b,BYTE PTR [rdx+0x1]
   1400021a9:	44 38 c8             	cmp    al,r9b
   1400021ac:	4c 8b 74 24 48       	mov    r14,QWORD PTR [rsp+0x48]
   1400021b1:	75 04                	jne    0x1400021b7
   1400021b3:	8a 0b                	mov    cl,BYTE PTR [rbx]
   1400021b5:	3a 0a                	cmp    cl,BYTE PTR [rdx]
   1400021b7:	0f 92 c1             	setb   cl
   1400021ba:	45 8a 50 01          	mov    r10b,BYTE PTR [r8+0x1]
   1400021be:	44 38 d0             	cmp    al,r10b
   1400021c1:	75 05                	jne    0x1400021c8
   1400021c3:	8a 03                	mov    al,BYTE PTR [rbx]
   1400021c5:	41 3a 00             	cmp    al,BYTE PTR [r8]
   1400021c8:	41 0f 92 c3          	setb   r11b
   1400021cc:	48 89 d8             	mov    rax,rbx
   1400021cf:	44 38 d9             	cmp    cl,r11b
   1400021d2:	75 25                	jne    0x1400021f9
   1400021d4:	45 38 d1             	cmp    r9b,r10b
   1400021d7:	75 05                	jne    0x1400021de
   1400021d9:	8a 02                	mov    al,BYTE PTR [rdx]
   1400021db:	41 3a 00             	cmp    al,BYTE PTR [r8]
   1400021de:	0f 92 c0             	setb   al
   1400021e1:	30 c1                	xor    cl,al
   1400021e3:	49 0f 45 d0          	cmovne rdx,r8
   1400021e7:	48 89 d0             	mov    rax,rdx
   1400021ea:	eb 0d                	jmp    0x1400021f9
   1400021ec:	48 89 d9             	mov    rcx,rbx
   1400021ef:	e8 01 f6 ff ff       	call   0x1400017f5
   1400021f4:	4c 8b 74 24 48       	mov    r14,QWORD PTR [rsp+0x48]
   1400021f9:	ff cd                	dec    ebp
   1400021fb:	49 89 c7             	mov    r15,rax
   1400021fe:	49 29 df             	sub    r15,rbx
   140002201:	4d 89 fd             	mov    r13,r15
   140002204:	49 d1 ed             	shr    r13,1
   140002207:	8a 08                	mov    cl,BYTE PTR [rax]
   140002209:	8a 40 01             	mov    al,BYTE PTR [rax+0x1]
   14000220c:	88 4c 24 3e          	mov    BYTE PTR [rsp+0x3e],cl
   140002210:	88 44 24 3f          	mov    BYTE PTR [rsp+0x3f],al
   140002214:	4d 85 f6             	test   r14,r14
   140002217:	74 12                	je     0x14000222b
   140002219:	48 8b 54 24 48       	mov    rdx,QWORD PTR [rsp+0x48]
   14000221e:	38 42 01             	cmp    BYTE PTR [rdx+0x1],al
   140002221:	75 02                	jne    0x140002225
   140002223:	38 0a                	cmp    BYTE PTR [rdx],cl
   140002225:	0f 83 eb 01 00 00    	jae    0x140002416
   14000222b:	48 39 7c 24 40       	cmp    QWORD PTR [rsp+0x40],rdi
   140002230:	0f 82 0b 05 00 00    	jb     0x140002741
   140002236:	48 8d 04 7e          	lea    rax,[rsi+rdi*2]
   14000223a:	45 31 e4             	xor    r12d,r12d
   14000223d:	48 89 d9             	mov    rcx,rbx
   140002240:	4c 89 ea             	mov    rdx,r13
   140002243:	49 89 d0             	mov    r8,rdx
   140002246:	49 83 e8 03          	sub    r8,0x3
   14000224a:	41 b9 00 00 00 00    	mov    r9d,0x0
   140002250:	4d 0f 43 c8          	cmovae r9,r8
   140002254:	4e 8d 04 4b          	lea    r8,[rbx+r9*2]
   140002258:	4c 39 c1             	cmp    rcx,r8
   14000225b:	0f 83 ca 00 00 00    	jae    0x14000232b
   140002261:	46 8a 4c 3b 01       	mov    r9b,BYTE PTR [rbx+r15*1+0x1]
   140002266:	44 38 49 01          	cmp    BYTE PTR [rcx+0x1],r9b
   14000226a:	75 07                	jne    0x140002273
   14000226c:	44 8a 11             	mov    r10b,BYTE PTR [rcx]
   14000226f:	46 3a 14 3b          	cmp    r10b,BYTE PTR [rbx+r15*1]
   140002273:	41 0f 92 c3          	setb   r11b
   140002277:	4c 8d 50 fe          	lea    r10,[rax-0x2]
   14000227b:	45 84 db             	test   r11b,r11b
   14000227e:	4c 0f 45 d6          	cmovne r10,rsi
   140002282:	44 0f b7 31          	movzx  r14d,WORD PTR [rcx]
   140002286:	66 47 89 34 62       	mov    WORD PTR [r10+r12*2],r14w
   14000228b:	44 38 49 03          	cmp    BYTE PTR [rcx+0x3],r9b
   14000228f:	75 08                	jne    0x140002299
   140002291:	44 8a 51 02          	mov    r10b,BYTE PTR [rcx+0x2]
   140002295:	46 3a 14 3b          	cmp    r10b,BYTE PTR [rbx+r15*1]
   140002299:	41 0f 92 c2          	setb   r10b
   14000229d:	45 0f b6 db          	movzx  r11d,r11b
   1400022a1:	4d 01 dc             	add    r12,r11
   1400022a4:	4c 8d 58 fc          	lea    r11,[rax-0x4]
   1400022a8:	45 84 d2             	test   r10b,r10b
   1400022ab:	4c 0f 45 de          	cmovne r11,rsi
   1400022af:	44 0f b7 71 02       	movzx  r14d,WORD PTR [rcx+0x2]
   1400022b4:	66 47 89 34 63       	mov    WORD PTR [r11+r12*2],r14w
   1400022b9:	44 38 49 05          	cmp    BYTE PTR [rcx+0x5],r9b
   1400022bd:	75 08                	jne    0x1400022c7
   1400022bf:	44 8a 59 04          	mov    r11b,BYTE PTR [rcx+0x4]
   1400022c3:	46 3a 1c 3b          	cmp    r11b,BYTE PTR [rbx+r15*1]
   1400022c7:	41 0f 92 c3          	setb   r11b
   1400022cb:	45 0f b6 d2          	movzx  r10d,r10b
   1400022cf:	4d 01 d4             	add    r12,r10
   1400022d2:	4c 8d 50 fa          	lea    r10,[rax-0x6]
   1400022d6:	45 84 db             	test   r11b,r11b
   1400022d9:	4c 0f 45 d6          	cmovne r10,rsi
   1400022dd:	44 0f b7 71 04       	movzx  r14d,WORD PTR [rcx+0x4]
   1400022e2:	66 47 89 34 62       	mov    WORD PTR [r10+r12*2],r14w
   1400022e7:	44 38 49 07          	cmp    BYTE PTR [rcx+0x7],r9b
   1400022eb:	75 08                	jne    0x1400022f5
   1400022ed:	44 8a 49 06          	mov    r9b,BYTE PTR [rcx+0x6]
   1400022f1:	46 3a 0c 3b          	cmp    r9b,BYTE PTR [rbx+r15*1]
   1400022f5:	41 0f 92 c1          	setb   r9b
   1400022f9:	45 0f b6 d3          	movzx  r10d,r11b
   1400022fd:	4d 89 e3             	mov    r11,r12
   140002300:	4d 01 d3             	add    r11,r10
   140002303:	48 83 c0 f8          	add    rax,0xfffffffffffffff8
   140002307:	45 84 c9             	test   r9b,r9b
   14000230a:	49 89 c2             	mov    r10,rax
   14000230d:	4c 0f 45 d6          	cmovne r10,rsi
   140002311:	44 0f b7 71 06       	movzx  r14d,WORD PTR [rcx+0x6]
   140002316:	66 47 89 34 5a       	mov    WORD PTR [r10+r11*2],r14w
   14000231b:	45 0f b6 e1          	movzx  r12d,r9b
   14000231f:	4d 01 dc             	add    r12,r11
   140002322:	48 83 c1 08          	add    rcx,0x8
   140002326:	e9 2d ff ff ff       	jmp    0x140002258
   14000232b:	4c 8d 04 53          	lea    r8,[rbx+rdx*2]
   14000232f:	4c 39 c1             	cmp    rcx,r8
   140002332:	73 3a                	jae    0x14000236e
   140002334:	46 8a 4c 3b 01       	mov    r9b,BYTE PTR [rbx+r15*1+0x1]
   140002339:	44 38 49 01          	cmp    BYTE PTR [rcx+0x1],r9b
   14000233d:	75 07                	jne    0x140002346
   14000233f:	44 8a 09             	mov    r9b,BYTE PTR [rcx]
   140002342:	46 3a 0c 3b          	cmp    r9b,BYTE PTR [rbx+r15*1]
   140002346:	41 0f 92 c1          	setb   r9b
   14000234a:	48 83 c0 fe          	add    rax,0xfffffffffffffffe
   14000234e:	45 84 c9             	test   r9b,r9b
   140002351:	49 89 c2             	mov    r10,rax
   140002354:	4c 0f 45 d6          	cmovne r10,rsi
   140002358:	44 0f b7 19          	movzx  r11d,WORD PTR [rcx]
   14000235c:	66 47 89 1c 62       	mov    WORD PTR [r10+r12*2],r11w
   140002361:	45 0f b6 c9          	movzx  r9d,r9b
   140002365:	4d 01 cc             	add    r12,r9
   140002368:	48 83 c1 02          	add    rcx,0x2
   14000236c:	eb c1                	jmp    0x14000232f
   14000236e:	48 39 fa             	cmp    rdx,rdi
   140002371:	74 19                	je     0x14000238c
   140002373:	0f b7 11             	movzx  edx,WORD PTR [rcx]
   140002376:	66 42 89 54 60 fe    	mov    WORD PTR [rax+r12*2-0x2],dx
   14000237c:	48 83 c0 fe          	add    rax,0xfffffffffffffffe
   140002380:	48 83 c1 02          	add    rcx,0x2
   140002384:	48 89 fa             	mov    rdx,rdi
   140002387:	e9 b7 fe ff ff       	jmp    0x140002243
   14000238c:	4f 8d 04 24          	lea    r8,[r12+r12*1]
   140002390:	48 89 d9             	mov    rcx,rbx
   140002393:	48 89 f2             	mov    rdx,rsi
   140002396:	e8 2b 10 0c 00       	call   0x1400c33c6
   14000239b:	48 8d 46 fe          	lea    rax,[rsi-0x2]
   14000239f:	48 8d 04 78          	lea    rax,[rax+rdi*2]
   1400023a3:	4c 89 e1             	mov    rcx,r12
   1400023a6:	48 39 cf             	cmp    rdi,rcx
   1400023a9:	74 10                	je     0x1400023bb
   1400023ab:	0f b7 10             	movzx  edx,WORD PTR [rax]
   1400023ae:	66 89 14 4b          	mov    WORD PTR [rbx+rcx*2],dx
   1400023b2:	48 83 c0 fe          	add    rax,0xfffffffffffffffe
   1400023b6:	48 ff c1             	inc    rcx
   1400023b9:	eb eb                	jmp    0x1400023a6
   1400023bb:	4d 85 e4             	test   r12,r12
   1400023be:	74 56                	je     0x140002416
   1400023c0:	48 8d 05 11 e1 0d 00 	lea    rax,[rip+0xde111]        # 0x1400e04d8
   1400023c7:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   1400023cc:	48 8d 4c 24 68       	lea    rcx,[rsp+0x68]
   1400023d1:	48 89 da             	mov    rdx,rbx
   1400023d4:	49 89 f8             	mov    r8,rdi
   1400023d7:	4d 89 e1             	mov    r9,r12
   1400023da:	e8 dd f3 ff ff       	call   0x1400017bc
   1400023df:	48 8b 5c 24 68       	mov    rbx,QWORD PTR [rsp+0x68]
   1400023e4:	48 8b 7c 24 70       	mov    rdi,QWORD PTR [rsp+0x70]
   1400023e9:	48 8b 4c 24 78       	mov    rcx,QWORD PTR [rsp+0x78]
   1400023ee:	48 8b 94 24 80 00 00 	mov    rdx,QWORD PTR [rsp+0x80]
   1400023f5:	00 
   1400023f6:	48 8d 44 24 3e       	lea    rax,[rsp+0x3e]
   1400023fb:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   140002400:	89 6c 24 20          	mov    DWORD PTR [rsp+0x20],ebp
   140002404:	49 89 f0             	mov    r8,rsi
   140002407:	4c 8b 4c 24 40       	mov    r9,QWORD PTR [rsp+0x40]
   14000240c:	e8 23 fd ff ff       	call   0x140002134
   140002411:	e9 53 fd ff ff       	jmp    0x140002169
   140002416:	48 39 7c 24 40       	cmp    QWORD PTR [rsp+0x40],rdi
   14000241b:	0f 82 20 03 00 00    	jb     0x140002741
   140002421:	48 8d 04 7e          	lea    rax,[rsi+rdi*2]
   140002425:	45 31 e4             	xor    r12d,r12d
   140002428:	48 89 d9             	mov    rcx,rbx
   14000242b:	4c 89 ea             	mov    rdx,r13
   14000242e:	48 83 ea 03          	sub    rdx,0x3
   140002432:	41 b8 00 00 00 00    	mov    r8d,0x0
   140002438:	4c 0f 43 c2          	cmovae r8,rdx
   14000243c:	4a 8d 14 43          	lea    rdx,[rbx+r8*2]
   140002440:	48 39 d1             	cmp    rcx,rdx
   140002443:	0f 83 dd 00 00 00    	jae    0x140002526
   140002449:	46 8a 44 3b 01       	mov    r8b,BYTE PTR [rbx+r15*1+0x1]
   14000244e:	44 3a 41 01          	cmp    r8b,BYTE PTR [rcx+0x1]
   140002452:	75 07                	jne    0x14000245b
   140002454:	46 8a 0c 3b          	mov    r9b,BYTE PTR [rbx+r15*1]
   140002458:	44 3a 09             	cmp    r9b,BYTE PTR [rcx]
   14000245b:	41 0f 92 c2          	setb   r10b
   14000245f:	4c 8d 48 fe          	lea    r9,[rax-0x2]
   140002463:	45 84 d2             	test   r10b,r10b
   140002466:	4c 0f 44 ce          	cmove  r9,rsi
   14000246a:	44 0f b7 19          	movzx  r11d,WORD PTR [rcx]
   14000246e:	66 47 89 1c 61       	mov    WORD PTR [r9+r12*2],r11w
   140002473:	44 3a 41 03          	cmp    r8b,BYTE PTR [rcx+0x3]
   140002477:	75 08                	jne    0x140002481
   140002479:	46 8a 0c 3b          	mov    r9b,BYTE PTR [rbx+r15*1]
   14000247d:	44 3a 49 02          	cmp    r9b,BYTE PTR [rcx+0x2]
   140002481:	41 0f 92 c1          	setb   r9b
   140002485:	41 80 f2 01          	xor    r10b,0x1
   140002489:	45 0f b6 d2          	movzx  r10d,r10b
   14000248d:	4d 01 d4             	add    r12,r10
   140002490:	4c 8d 50 fc          	lea    r10,[rax-0x4]
   140002494:	45 84 c9             	test   r9b,r9b
   140002497:	4c 0f 44 d6          	cmove  r10,rsi
   14000249b:	44 0f b7 59 02       	movzx  r11d,WORD PTR [rcx+0x2]
   1400024a0:	66 47 89 1c 62       	mov    WORD PTR [r10+r12*2],r11w
   1400024a5:	44 3a 41 05          	cmp    r8b,BYTE PTR [rcx+0x5]
   1400024a9:	75 08                	jne    0x1400024b3
   1400024ab:	46 8a 14 3b          	mov    r10b,BYTE PTR [rbx+r15*1]
   1400024af:	44 3a 51 04          	cmp    r10b,BYTE PTR [rcx+0x4]
   1400024b3:	41 0f 92 c2          	setb   r10b
   1400024b7:	41 80 f1 01          	xor    r9b,0x1
   1400024bb:	45 0f b6 c9          	movzx  r9d,r9b
   1400024bf:	4d 01 cc             	add    r12,r9
   1400024c2:	4c 8d 48 fa          	lea    r9,[rax-0x6]
   1400024c6:	45 84 d2             	test   r10b,r10b
   1400024c9:	4c 0f 44 ce          	cmove  r9,rsi
   1400024cd:	44 0f b7 59 04       	movzx  r11d,WORD PTR [rcx+0x4]
   1400024d2:	66 47 89 1c 61       	mov    WORD PTR [r9+r12*2],r11w
   1400024d7:	44 3a 41 07          	cmp    r8b,BYTE PTR [rcx+0x7]
   1400024db:	75 08                	jne    0x1400024e5
   1400024dd:	46 8a 04 3b          	mov    r8b,BYTE PTR [rbx+r15*1]
   1400024e1:	44 3a 41 06          	cmp    r8b,BYTE PTR [rcx+0x6]
   1400024e5:	41 0f 92 c0          	setb   r8b
   1400024e9:	41 80 f2 01          	xor    r10b,0x1
   1400024ed:	45 0f b6 ca          	movzx  r9d,r10b
   1400024f1:	4d 89 e2             	mov    r10,r12
   1400024f4:	4d 01 ca             	add    r10,r9
   1400024f7:	45 89 c1             	mov    r9d,r8d
   1400024fa:	41 80 f1 01          	xor    r9b,0x1
   1400024fe:	48 83 c0 f8          	add    rax,0xfffffffffffffff8
   140002502:	45 84 c0             	test   r8b,r8b
   140002505:	49 89 f0             	mov    r8,rsi
   140002508:	4c 0f 45 c0          	cmovne r8,rax
   14000250c:	44 0f b7 59 06       	movzx  r11d,WORD PTR [rcx+0x6]
   140002511:	66 47 89 1c 50       	mov    WORD PTR [r8+r10*2],r11w
   140002516:	45 0f b6 e1          	movzx  r12d,r9b
   14000251a:	4d 01 d4             	add    r12,r10
   14000251d:	48 83 c1 08          	add    rcx,0x8
   140002521:	e9 1a ff ff ff       	jmp    0x140002440
   140002526:	4a 8d 14 6b          	lea    rdx,[rbx+r13*2]
   14000252a:	48 39 d1             	cmp    rcx,rdx
   14000252d:	73 41                	jae    0x140002570
   14000252f:	44 8a 41 01          	mov    r8b,BYTE PTR [rcx+0x1]
   140002533:	46 38 44 3b 01       	cmp    BYTE PTR [rbx+r15*1+0x1],r8b
   140002538:	75 07                	jne    0x140002541
   14000253a:	46 8a 04 3b          	mov    r8b,BYTE PTR [rbx+r15*1]
   14000253e:	44 3a 01             	cmp    r8b,BYTE PTR [rcx]
   140002541:	41 0f 92 c0          	setb   r8b
   140002545:	45 89 c1             	mov    r9d,r8d
   140002548:	41 80 f1 01          	xor    r9b,0x1
   14000254c:	48 83 c0 fe          	add    rax,0xfffffffffffffffe
   140002550:	45 84 c0             	test   r8b,r8b
   140002553:	49 89 f0             	mov    r8,rsi
   140002556:	4c 0f 45 c0          	cmovne r8,rax
   14000255a:	44 0f b7 11          	movzx  r10d,WORD PTR [rcx]
   14000255e:	66 47 89 14 60       	mov    WORD PTR [r8+r12*2],r10w
   140002563:	45 0f b6 c1          	movzx  r8d,r9b
   140002567:	4d 01 c4             	add    r12,r8
   14000256a:	48 83 c1 02          	add    rcx,0x2
   14000256e:	eb ba                	jmp    0x14000252a
   140002570:	49 39 fd             	cmp    r13,rdi
   140002573:	74 1b                	je     0x140002590
   140002575:	48 83 c0 fe          	add    rax,0xfffffffffffffffe
   140002579:	0f b7 11             	movzx  edx,WORD PTR [rcx]
   14000257c:	66 42 89 14 66       	mov    WORD PTR [rsi+r12*2],dx
   140002581:	49 ff c4             	inc    r12
   140002584:	48 83 c1 02          	add    rcx,0x2
   140002588:	49 89 fd             	mov    r13,rdi
   14000258b:	e9 9b fe ff ff       	jmp    0x14000242b
   140002590:	4f 8d 04 24          	lea    r8,[r12+r12*1]
   140002594:	48 89 d9             	mov    rcx,rbx
   140002597:	48 89 f2             	mov    rdx,rsi
   14000259a:	e8 27 0e 0c 00       	call   0x1400c33c6
   14000259f:	48 89 fa             	mov    rdx,rdi
   1400025a2:	4c 29 e2             	sub    rdx,r12
   1400025a5:	4a 8d 0c 63          	lea    rcx,[rbx+r12*2]
   1400025a9:	48 8d 46 fe          	lea    rax,[rsi-0x2]
   1400025ad:	48 8d 04 78          	lea    rax,[rax+rdi*2]
   1400025b1:	4d 89 e0             	mov    r8,r12
   1400025b4:	4c 39 c7             	cmp    rdi,r8
   1400025b7:	74 12                	je     0x1400025cb
   1400025b9:	44 0f b7 08          	movzx  r9d,WORD PTR [rax]
   1400025bd:	66 46 89 0c 43       	mov    WORD PTR [rbx+r8*2],r9w
   1400025c2:	48 83 c0 fe          	add    rax,0xfffffffffffffffe
   1400025c6:	49 ff c0             	inc    r8
   1400025c9:	eb e9                	jmp    0x1400025b4
   1400025cb:	4c 39 e7             	cmp    rdi,r12
   1400025ce:	0f 82 6f 01 00 00    	jb     0x140002743
   1400025d4:	48 c7 44 24 48 00 00 	mov    QWORD PTR [rsp+0x48],0x0
   1400025db:	00 00 
   1400025dd:	e9 81 fb ff ff       	jmp    0x140002163
   1400025e2:	48 83 ff 02          	cmp    rdi,0x2
   1400025e6:	0f 82 41 01 00 00    	jb     0x14000272d
   1400025ec:	48 8d 47 10          	lea    rax,[rdi+0x10]
   1400025f0:	48 39 44 24 40       	cmp    QWORD PTR [rsp+0x40],rax
   1400025f5:	0f 82 46 01 00 00    	jb     0x140002741
   1400025fb:	49 89 ff             	mov    r15,rdi
   1400025fe:	49 d1 ef             	shr    r15,1
   140002601:	48 83 ff 0f          	cmp    rdi,0xf
   140002605:	76 49                	jbe    0x140002650
   140002607:	4c 8d 04 7e          	lea    r8,[rsi+rdi*2]
   14000260b:	48 89 d9             	mov    rcx,rbx
   14000260e:	48 89 f2             	mov    rdx,rsi
   140002611:	e8 d6 f3 ff ff       	call   0x1400019ec
   140002616:	4a 8d 0c 7b          	lea    rcx,[rbx+r15*2]
   14000261a:	4a 8d 14 7e          	lea    rdx,[rsi+r15*2]
   14000261e:	4c 8d 04 7e          	lea    r8,[rsi+rdi*2]
   140002622:	49 83 c0 10          	add    r8,0x10
   140002626:	e8 c1 f3 ff ff       	call   0x1400019ec
   14000262b:	41 bc 08 00 00 00    	mov    r12d,0x8
   140002631:	eb 59                	jmp    0x14000268c
   140002633:	c6 44 24 20 01       	mov    BYTE PTR [rsp+0x20],0x1
   140002638:	48 89 d9             	mov    rcx,rbx
   14000263b:	48 89 fa             	mov    rdx,rdi
   14000263e:	49 89 f0             	mov    r8,rsi
   140002641:	4c 8b 4c 24 40       	mov    r9,QWORD PTR [rsp+0x40]
   140002646:	e8 b9 f5 ff ff       	call   0x140001c04
   14000264b:	e9 dd 00 00 00       	jmp    0x14000272d
   140002650:	48 83 ff 07          	cmp    rdi,0x7
   140002654:	76 20                	jbe    0x140002676
   140002656:	48 89 d9             	mov    rcx,rbx
   140002659:	48 89 f2             	mov    rdx,rsi
   14000265c:	e8 a7 f2 ff ff       	call   0x140001908
   140002661:	4a 8d 0c 7b          	lea    rcx,[rbx+r15*2]
   140002665:	4a 8d 14 7e          	lea    rdx,[rsi+r15*2]
   140002669:	e8 9a f2 ff ff       	call   0x140001908
   14000266e:	41 bc 04 00 00 00    	mov    r12d,0x4
   140002674:	eb 16                	jmp    0x14000268c
   140002676:	0f b7 03             	movzx  eax,WORD PTR [rbx]
   140002679:	66 89 06             	mov    WORD PTR [rsi],ax
   14000267c:	42 0f b7 04 7b       	movzx  eax,WORD PTR [rbx+r15*2]
   140002681:	66 42 89 04 7e       	mov    WORD PTR [rsi+r15*2],ax
   140002686:	41 bc 01 00 00 00    	mov    r12d,0x1
   14000268c:	48 83 64 24 78 00    	and    QWORD PTR [rsp+0x78],0x0
   140002692:	4c 89 bc 24 80 00 00 	mov    QWORD PTR [rsp+0x80],r15
   140002699:	00 
   14000269a:	48 89 f8             	mov    rax,rdi
   14000269d:	4c 29 f8             	sub    rax,r15
   1400026a0:	48 89 44 24 58       	mov    QWORD PTR [rsp+0x58],rax
   1400026a5:	4a 8d 04 66          	lea    rax,[rsi+r12*2]
   1400026a9:	48 89 44 24 50       	mov    QWORD PTR [rsp+0x50],rax
   1400026ae:	31 c0                	xor    eax,eax
   1400026b0:	4c 89 7c 24 48       	mov    QWORD PTR [rsp+0x48],r15
   1400026b5:	4c 89 64 24 60       	mov    QWORD PTR [rsp+0x60],r12
   1400026ba:	48 83 f8 02          	cmp    rax,0x2
   1400026be:	74 5e                	je     0x14000271e
   1400026c0:	48 89 44 24 40       	mov    QWORD PTR [rsp+0x40],rax
   1400026c5:	48 8b 44 c4 78       	mov    rax,QWORD PTR [rsp+rax*8+0x78]
   1400026ca:	4c 8d 2c 43          	lea    r13,[rbx+rax*2]
   1400026ce:	4c 8d 34 46          	lea    r14,[rsi+rax*2]
   1400026d2:	48 85 c0             	test   rax,rax
   1400026d5:	48 8b 6c 24 58       	mov    rbp,QWORD PTR [rsp+0x58]
   1400026da:	49 0f 44 ef          	cmove  rbp,r15
   1400026de:	48 8b 4c 24 50       	mov    rcx,QWORD PTR [rsp+0x50]
   1400026e3:	4c 8d 3c 41          	lea    r15,[rcx+rax*2]
   1400026e7:	49 39 ec             	cmp    r12,rbp
   1400026ea:	73 1e                	jae    0x14000270a
   1400026ec:	43 0f b7 44 65 00    	movzx  eax,WORD PTR [r13+r12*2+0x0]
   1400026f2:	49 ff c4             	inc    r12
   1400026f5:	66 41 89 07          	mov    WORD PTR [r15],ax
   1400026f9:	4c 89 f1             	mov    rcx,r14
   1400026fc:	4c 89 fa             	mov    rdx,r15
   1400026ff:	e8 b4 f1 ff ff       	call   0x1400018b8
   140002704:	49 83 c7 02          	add    r15,0x2
   140002708:	eb dd                	jmp    0x1400026e7
   14000270a:	48 8b 44 24 40       	mov    rax,QWORD PTR [rsp+0x40]
   14000270f:	48 ff c0             	inc    rax
   140002712:	4c 8b 7c 24 48       	mov    r15,QWORD PTR [rsp+0x48]
   140002717:	4c 8b 64 24 60       	mov    r12,QWORD PTR [rsp+0x60]
   14000271c:	eb 9c                	jmp    0x1400026ba
   14000271e:	48 89 f1             	mov    rcx,rsi
   140002721:	48 89 fa             	mov    rdx,rdi
   140002724:	49 89 d8             	mov    r8,rbx
   140002727:	e8 ff f2 ff ff       	call   0x140001a2b
   14000272c:	90                   	nop
   14000272d:	48 81 c4 88 00 00 00 	add    rsp,0x88
   140002734:	5b                   	pop    rbx
   140002735:	5d                   	pop    rbp
   140002736:	5f                   	pop    rdi
   140002737:	5e                   	pop    rsi
   140002738:	41 5c                	pop    r12
   14000273a:	41 5d                	pop    r13
   14000273c:	41 5e                	pop    r14
   14000273e:	41 5f                	pop    r15
   140002740:	c3                   	ret
   140002741:	0f 0b                	ud2
   140002743:	4c 8d 0d a6 dd 0d 00 	lea    r9,[rip+0xddda6]        # 0x1400e04f0
   14000274a:	4c 89 e1             	mov    rcx,r12
   14000274d:	48 89 fa             	mov    rdx,rdi
   140002750:	49 89 f8             	mov    r8,rdi
   140002753:	e8 d8 14 0c 00       	call   0x1400c3c30
   140002758:	0f 0b                	ud2
   14000275a:	41 57                	push   r15
   14000275c:	41 56                	push   r14
   14000275e:	56                   	push   rsi
   14000275f:	57                   	push   rdi
   140002760:	53                   	push   rbx
   140002761:	48 83 ec 20          	sub    rsp,0x20
   140002765:	4c 8b 51 10          	mov    r10,QWORD PTR [rcx+0x10]
   140002769:	4d 85 d2             	test   r10,r10
   14000276c:	0f 84 a3 00 00 00    	je     0x140002815
   140002772:	49 8d 52 ff          	lea    rdx,[r10-0x1]
   140002776:	48 89 51 10          	mov    QWORD PTR [rcx+0x10],rdx
   14000277a:	48 8b 49 08          	mov    rcx,QWORD PTR [rcx+0x8]
   14000277e:	49 89 d0             	mov    r8,rdx
   140002781:	49 c1 e0 04          	shl    r8,0x4
   140002785:	4a 8b 04 01          	mov    rax,QWORD PTR [rcx+r8*1]
   140002789:	4e 8b 4c 01 08       	mov    r9,QWORD PTR [rcx+r8*1+0x8]
   14000278e:	48 85 d2             	test   rdx,rdx
   140002791:	0f 84 82 00 00 00    	je     0x140002819
   140002797:	48 8b 31             	mov    rsi,QWORD PTR [rcx]
   14000279a:	48 8b 79 08          	mov    rdi,QWORD PTR [rcx+0x8]
   14000279e:	48 89 01             	mov    QWORD PTR [rcx],rax
   1400027a1:	4c 89 49 08          	mov    QWORD PTR [rcx+0x8],r9
   1400027a5:	45 31 db             	xor    r11d,r11d
   1400027a8:	48 89 d3             	mov    rbx,rdx
   1400027ab:	48 83 eb 02          	sub    rbx,0x2
   1400027af:	49 0f 42 db          	cmovb  rbx,r11
   1400027b3:	41 b8 01 00 00 00    	mov    r8d,0x1
   1400027b9:	49 39 d8             	cmp    r8,rbx
   1400027bc:	77 37                	ja     0x1400027f5
   1400027be:	4d 89 c6             	mov    r14,r8
   1400027c1:	49 c1 e6 04          	shl    r14,0x4
   1400027c5:	4e 8b 7c 31 08       	mov    r15,QWORD PTR [rcx+r14*1+0x8]
   1400027ca:	4e 3b 7c 31 18       	cmp    r15,QWORD PTR [rcx+r14*1+0x18]
   1400027cf:	49 83 d8 ff          	sbb    r8,0xffffffffffffffff
   1400027d3:	4d 89 c6             	mov    r14,r8
   1400027d6:	49 c1 e6 04          	shl    r14,0x4
   1400027da:	49 c1 e3 04          	shl    r11,0x4
   1400027de:	42 0f 10 04 31       	movups xmm0,XMMWORD PTR [rcx+r14*1]
   1400027e3:	42 0f 11 04 19       	movups XMMWORD PTR [rcx+r11*1],xmm0
   1400027e8:	4d 89 c3             	mov    r11,r8
   1400027eb:	4e 8d 04 45 01 00 00 	lea    r8,[r8*2+0x1]
   1400027f2:	00 
   1400027f3:	eb c4                	jmp    0x1400027b9
   1400027f5:	49 83 c2 fe          	add    r10,0xfffffffffffffffe
   1400027f9:	4d 39 d0             	cmp    r8,r10
   1400027fc:	75 23                	jne    0x140002821
   1400027fe:	4d 89 c2             	mov    r10,r8
   140002801:	49 c1 e2 04          	shl    r10,0x4
   140002805:	49 c1 e3 04          	shl    r11,0x4
   140002809:	42 0f 10 04 11       	movups xmm0,XMMWORD PTR [rcx+r10*1]
   14000280e:	42 0f 11 04 19       	movups XMMWORD PTR [rcx+r11*1],xmm0
   140002813:	eb 0f                	jmp    0x140002824
   140002815:	31 f6                	xor    esi,esi
   140002817:	eb 20                	jmp    0x140002839
   140002819:	4c 89 cf             	mov    rdi,r9
   14000281c:	48 89 c6             	mov    rsi,rax
   14000281f:	eb 18                	jmp    0x140002839
   140002821:	4d 89 d8             	mov    r8,r11
   140002824:	4d 89 c2             	mov    r10,r8
   140002827:	49 c1 e2 04          	shl    r10,0x4
   14000282b:	4a 89 04 11          	mov    QWORD PTR [rcx+r10*1],rax
   14000282f:	4e 89 4c 11 08       	mov    QWORD PTR [rcx+r10*1+0x8],r9
   140002834:	e8 62 00 00 00       	call   0x14000289b
   140002839:	48 89 f0             	mov    rax,rsi
   14000283c:	48 89 fa             	mov    rdx,rdi
   14000283f:	48 83 c4 20          	add    rsp,0x20
   140002843:	5b                   	pop    rbx
   140002844:	5f                   	pop    rdi
   140002845:	5e                   	pop    rsi
   140002846:	41 5e                	pop    r14
   140002848:	41 5f                	pop    r15
   14000284a:	c3                   	ret
   14000284b:	41 56                	push   r14
   14000284d:	56                   	push   rsi
   14000284e:	57                   	push   rdi
   14000284f:	53                   	push   rbx
   140002850:	48 83 ec 28          	sub    rsp,0x28
   140002854:	4c 89 c3             	mov    rbx,r8
   140002857:	49 89 d6             	mov    r14,rdx
   14000285a:	48 89 cf             	mov    rdi,rcx
   14000285d:	48 8b 71 10          	mov    rsi,QWORD PTR [rcx+0x10]
   140002861:	48 3b 31             	cmp    rsi,QWORD PTR [rcx]
   140002864:	75 08                	jne    0x14000286e
   140002866:	48 89 f9             	mov    rcx,rdi
   140002869:	e8 7d 00 00 00       	call   0x1400028eb
   14000286e:	48 8b 4f 08          	mov    rcx,QWORD PTR [rdi+0x8]
   140002872:	48 89 f0             	mov    rax,rsi
   140002875:	48 c1 e0 04          	shl    rax,0x4
   140002879:	4c 89 34 01          	mov    QWORD PTR [rcx+rax*1],r14
   14000287d:	48 89 5c 01 08       	mov    QWORD PTR [rcx+rax*1+0x8],rbx
   140002882:	48 8d 56 01          	lea    rdx,[rsi+0x1]
   140002886:	48 89 57 10          	mov    QWORD PTR [rdi+0x10],rdx
   14000288a:	49 89 f0             	mov    r8,rsi
   14000288d:	48 83 c4 28          	add    rsp,0x28
   140002891:	5b                   	pop    rbx
   140002892:	5f                   	pop    rdi
   140002893:	5e                   	pop    rsi
   140002894:	41 5e                	pop    r14
   140002896:	e9 00 00 00 00       	jmp    0x14000289b
   14000289b:	4c 89 c2             	mov    rdx,r8
   14000289e:	48 c1 e2 04          	shl    rdx,0x4
   1400028a2:	48 8b 04 11          	mov    rax,QWORD PTR [rcx+rdx*1]
   1400028a6:	48 8b 54 11 08       	mov    rdx,QWORD PTR [rcx+rdx*1+0x8]
   1400028ab:	4d 85 c0             	test   r8,r8
   1400028ae:	74 2a                	je     0x1400028da
   1400028b0:	4d 8d 48 ff          	lea    r9,[r8-0x1]
   1400028b4:	49 d1 e9             	shr    r9,1
   1400028b7:	4d 89 ca             	mov    r10,r9
   1400028ba:	49 c1 e2 04          	shl    r10,0x4
   1400028be:	4a 39 54 11 08       	cmp    QWORD PTR [rcx+r10*1+0x8],rdx
   1400028c3:	76 18                	jbe    0x1400028dd
   1400028c5:	49 01 ca             	add    r10,rcx
   1400028c8:	49 c1 e0 04          	shl    r8,0x4
   1400028cc:	41 0f 10 02          	movups xmm0,XMMWORD PTR [r10]
   1400028d0:	42 0f 11 04 01       	movups XMMWORD PTR [rcx+r8*1],xmm0
   1400028d5:	4d 89 c8             	mov    r8,r9
   1400028d8:	eb d1                	jmp    0x1400028ab
   1400028da:	45 31 c0             	xor    r8d,r8d
   1400028dd:	49 c1 e0 04          	shl    r8,0x4
   1400028e1:	4a 89 04 01          	mov    QWORD PTR [rcx+r8*1],rax
   1400028e5:	4a 89 54 01 08       	mov    QWORD PTR [rcx+r8*1+0x8],rdx
   1400028ea:	c3                   	ret
   1400028eb:	48 83 ec 28          	sub    rsp,0x28
   1400028ef:	48 8b 11             	mov    rdx,QWORD PTR [rcx]
   1400028f2:	48 c7 44 24 20 10 00 	mov    QWORD PTR [rsp+0x20],0x10
   1400028f9:	00 00 
   1400028fb:	41 b8 01 00 00 00    	mov    r8d,0x1
   140002901:	41 b9 08 00 00 00    	mov    r9d,0x8
   140002907:	e8 6c cc 00 00       	call   0x14000f578
   14000290c:	48 b9 01 00 00 00 00 	movabs rcx,0x8000000000000001
   140002913:	00 00 80 
   140002916:	48 39 c8             	cmp    rax,rcx
   140002919:	75 05                	jne    0x140002920
   14000291b:	48 83 c4 28          	add    rsp,0x28
   14000291f:	c3                   	ret
   140002920:	48 89 c1             	mov    rcx,rax
   140002923:	e8 76 0f 0c 00       	call   0x1400c389e
   140002928:	0f 0b                	ud2
   14000292a:	48 83 ec 28          	sub    rsp,0x28
   14000292e:	48 8b 11             	mov    rdx,QWORD PTR [rcx]
   140002931:	48 c7 44 24 20 02 00 	mov    QWORD PTR [rsp+0x20],0x2
   140002938:	00 00 
   14000293a:	41 b8 01 00 00 00    	mov    r8d,0x1
   140002940:	41 b9 01 00 00 00    	mov    r9d,0x1
   140002946:	e8 2d cc 00 00       	call   0x14000f578
   14000294b:	48 b9 01 00 00 00 00 	movabs rcx,0x8000000000000001
   140002952:	00 00 80 
   140002955:	48 39 c8             	cmp    rax,rcx
   140002958:	75 05                	jne    0x14000295f
   14000295a:	48 83 c4 28          	add    rsp,0x28
   14000295e:	c3                   	ret
   14000295f:	48 89 c1             	mov    rcx,rax
   140002962:	e8 37 0f 0c 00       	call   0x1400c389e
   140002967:	0f 0b                	ud2
   140002969:	56                   	push   rsi
   14000296a:	48 83 ec 40          	sub    rsp,0x40
   14000296e:	49 89 d1             	mov    r9,rdx
   140002971:	48 89 ca             	mov    rdx,rcx
   140002974:	48 8d 74 24 28       	lea    rsi,[rsp+0x28]
   140002979:	41 b8 01 00 00 00    	mov    r8d,0x1
   14000297f:	48 89 f1             	mov    rcx,rsi
   140002982:	e8 83 c9 00 00       	call   0x14000f30a
   140002987:	48 8b 46 08          	mov    rax,QWORD PTR [rsi+0x8]
   14000298b:	83 3e 01             	cmp    DWORD PTR [rsi],0x1
   14000298e:	74 0b                	je     0x14000299b
   140002990:	48 8b 54 24 38       	mov    rdx,QWORD PTR [rsp+0x38]
   140002995:	48 83 c4 40          	add    rsp,0x40
   140002999:	5e                   	pop    rsi
   14000299a:	c3                   	ret
   14000299b:	48 8b 54 24 38       	mov    rdx,QWORD PTR [rsp+0x38]
   1400029a0:	48 89 c1             	mov    rcx,rax
   1400029a3:	e8 f6 0e 0c 00       	call   0x1400c389e
   1400029a8:	0f 0b                	ud2
   1400029aa:	55                   	push   rbp
   1400029ab:	41 57                	push   r15
   1400029ad:	41 56                	push   r14
   1400029af:	41 55                	push   r13
   1400029b1:	41 54                	push   r12
   1400029b3:	56                   	push   rsi
   1400029b4:	57                   	push   rdi
   1400029b5:	53                   	push   rbx
   1400029b6:	48 81 ec c8 0c 00 00 	sub    rsp,0xcc8
   1400029bd:	48 8d ac 24 80 00 00 	lea    rbp,[rsp+0x80]
   1400029c4:	00 
   1400029c5:	66 44 0f 7f 9d 30 0c 	movdqa XMMWORD PTR [rbp+0xc30],xmm11
   1400029cc:	00 00 
   1400029ce:	66 44 0f 7f 95 20 0c 	movdqa XMMWORD PTR [rbp+0xc20],xmm10
   1400029d5:	00 00 
   1400029d7:	44 0f 29 8d 10 0c 00 	movaps XMMWORD PTR [rbp+0xc10],xmm9
   1400029de:	00 
   1400029df:	44 0f 29 85 00 0c 00 	movaps XMMWORD PTR [rbp+0xc00],xmm8
   1400029e6:	00 
   1400029e7:	0f 29 bd f0 0b 00 00 	movaps XMMWORD PTR [rbp+0xbf0],xmm7
   1400029ee:	0f 29 b5 e0 0b 00 00 	movaps XMMWORD PTR [rbp+0xbe0],xmm6
   1400029f5:	48 c7 85 d8 0b 00 00 	mov    QWORD PTR [rbp+0xbd8],0xfffffffffffffffe
   1400029fc:	fe ff ff ff 
   140002a00:	48 8d 15 29 67 0c 00 	lea    rdx,[rip+0xc6729]        # 0x1400c9130
   140002a07:	48 8d 8d 20 0b 00 00 	lea    rcx,[rbp+0xb20]
   140002a0e:	e8 80 2a 00 00       	call   0x140005493
   140002a13:	b8 0a 01 00 00       	mov    eax,0x10a
   140002a18:	4c 8d a5 e0 01 00 00 	lea    r12,[rbp+0x1e0]
   140002a1f:	49 8d 0c 04          	lea    rcx,[r12+rax*1]
   140002a23:	48 89 8d c8 0a 00 00 	mov    QWORD PTR [rbp+0xac8],rcx
   140002a2a:	48 8d 8d 50 07 00 00 	lea    rcx,[rbp+0x750]
   140002a31:	48 01 c8             	add    rax,rcx
   140002a34:	48 89 85 10 0b 00 00 	mov    QWORD PTR [rbp+0xb10],rax
   140002a3b:	0f 10 35 1e 55 0f 00 	movups xmm6,XMMWORD PTR [rip+0xf551e]        # 0x1400f7f60
   140002a42:	0f 10 3d 27 55 0f 00 	movups xmm7,XMMWORD PTR [rip+0xf5527]        # 0x1400f7f70
   140002a49:	44 0f 28 05 bf 65 0c 	movaps xmm8,XMMWORD PTR [rip+0xc65bf]        # 0x1400c9010
   140002a50:	00 
   140002a51:	45 0f 57 c9          	xorps  xmm9,xmm9
   140002a55:	66 45 0f 76 d2       	pcmpeqd xmm10,xmm10
   140002a5a:	48 c7 85 08 0b 00 00 	mov    QWORD PTR [rbp+0xb08],0x0
   140002a61:	00 00 00 00 
   140002a65:	48 8b b5 28 0b 00 00 	mov    rsi,QWORD PTR [rbp+0xb28]
   140002a6c:	4c 8b b5 30 0b 00 00 	mov    r14,QWORD PTR [rbp+0xb30]
   140002a73:	4d 85 f6             	test   r14,r14
   140002a76:	0f 84 5d 0c 00 00    	je     0x1400036d9
   140002a7c:	48 8d 0d 4c e9 ff ff 	lea    rcx,[rip+0xffffffffffffe94c]        # 0x1400013cf
   140002a83:	e8 f6 06 06 00       	call   0x14006317e
   140002a88:	0f 29 b5 e0 01 00 00 	movaps XMMWORD PTR [rbp+0x1e0],xmm6
   140002a8f:	0f 29 bd f0 01 00 00 	movaps XMMWORD PTR [rbp+0x1f0],xmm7
   140002a96:	48 89 85 00 02 00 00 	mov    QWORD PTR [rbp+0x200],rax
   140002a9d:	48 89 95 08 02 00 00 	mov    QWORD PTR [rbp+0x208],rdx
   140002aa4:	49 01 f6             	add    r14,rsi
   140002aa7:	4c 39 f6             	cmp    rsi,r14
   140002aaa:	0f 84 3d 01 00 00    	je     0x140002bed
   140002ab0:	40 8a 3e             	mov    dil,BYTE PTR [rsi]
   140002ab3:	48 ff c6             	inc    rsi
   140002ab6:	48 8b 8d 00 02 00 00 	mov    rcx,QWORD PTR [rbp+0x200]
   140002abd:	48 8b 95 08 02 00 00 	mov    rdx,QWORD PTR [rbp+0x208]
   140002ac4:	41 89 f8             	mov    r8d,edi
   140002ac7:	e8 ea eb ff ff       	call   0x1400016b6
   140002acc:	48 89 c3             	mov    rbx,rax
   140002acf:	49 89 c4             	mov    r12,rax
   140002ad2:	49 c1 ec 39          	shr    r12,0x39
   140002ad6:	4c 8b bd e0 01 00 00 	mov    r15,QWORD PTR [rbp+0x1e0]
   140002add:	4c 8b ad e8 01 00 00 	mov    r13,QWORD PTR [rbp+0x1e8]
   140002ae4:	66 41 0f 6e c4       	movd   xmm0,r12d
   140002ae9:	66 0f 60 c0          	punpcklbw xmm0,xmm0
   140002aed:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
   140002af2:	66 0f 70 c0 44       	pshufd xmm0,xmm0,0x44
   140002af7:	31 c0                	xor    eax,eax
   140002af9:	48 89 d9             	mov    rcx,rbx
   140002afc:	4c 21 e9             	and    rcx,r13
   140002aff:	f3 41 0f 6f 0c 0f    	movdqu xmm1,XMMWORD PTR [r15+rcx*1]
   140002b05:	66 0f 6f d1          	movdqa xmm2,xmm1
   140002b09:	66 0f 74 d0          	pcmpeqb xmm2,xmm0
   140002b0d:	66 0f d7 d2          	pmovmskb edx,xmm2
   140002b11:	66 85 d2             	test   dx,dx
   140002b14:	74 2a                	je     0x140002b40
   140002b16:	44 0f bc ca          	bsf    r9d,edx
   140002b1a:	49 01 c9             	add    r9,rcx
   140002b1d:	4d 21 e9             	and    r9,r13
   140002b20:	49 c1 e1 04          	shl    r9,0x4
   140002b24:	4d 89 f8             	mov    r8,r15
   140002b27:	4d 29 c8             	sub    r8,r9
   140002b2a:	41 38 78 f0          	cmp    BYTE PTR [r8-0x10],dil
   140002b2e:	0f 84 83 00 00 00    	je     0x140002bb7
   140002b34:	44 8d 42 ff          	lea    r8d,[rdx-0x1]
   140002b38:	41 21 d0             	and    r8d,edx
   140002b3b:	44 89 c2             	mov    edx,r8d
   140002b3e:	eb d1                	jmp    0x140002b11
   140002b40:	66 41 0f 74 ca       	pcmpeqb xmm1,xmm10
   140002b45:	66 0f d7 d1          	pmovmskb edx,xmm1
   140002b49:	85 d2                	test   edx,edx
   140002b4b:	75 0d                	jne    0x140002b5a
   140002b4d:	48 01 c1             	add    rcx,rax
   140002b50:	48 83 c1 10          	add    rcx,0x10
   140002b54:	48 83 c0 10          	add    rax,0x10
   140002b58:	eb a2                	jmp    0x140002afc
   140002b5a:	48 8b 85 f0 01 00 00 	mov    rax,QWORD PTR [rbp+0x1f0]
   140002b61:	48 85 c0             	test   rax,rax
   140002b64:	74 5a                	je     0x140002bc0
   140002b66:	4c 89 f9             	mov    rcx,r15
   140002b69:	4c 89 ea             	mov    rdx,r13
   140002b6c:	49 89 d8             	mov    r8,rbx
   140002b6f:	48 89 c3             	mov    rbx,rax
   140002b72:	e8 43 e7 ff ff       	call   0x1400012ba
   140002b77:	41 0f b6 0c 07       	movzx  ecx,BYTE PTR [r15+rax*1]
   140002b7c:	48 8d 50 f0          	lea    rdx,[rax-0x10]
   140002b80:	4c 21 ea             	and    rdx,r13
   140002b83:	45 88 24 07          	mov    BYTE PTR [r15+rax*1],r12b
   140002b87:	45 88 64 17 10       	mov    BYTE PTR [r15+rdx*1+0x10],r12b
   140002b8c:	48 c1 e0 04          	shl    rax,0x4
   140002b90:	4d 89 f8             	mov    r8,r15
   140002b93:	49 29 c0             	sub    r8,rax
   140002b96:	83 e1 01             	and    ecx,0x1
   140002b99:	48 29 cb             	sub    rbx,rcx
   140002b9c:	48 89 9d f0 01 00 00 	mov    QWORD PTR [rbp+0x1f0],rbx
   140002ba3:	48 f7 d8             	neg    rax
   140002ba6:	41 88 7c 07 f0       	mov    BYTE PTR [r15+rax*1-0x10],dil
   140002bab:	49 83 60 f8 00       	and    QWORD PTR [r8-0x8],0x0
   140002bb0:	48 ff 85 f8 01 00 00 	inc    QWORD PTR [rbp+0x1f8]
   140002bb7:	49 ff 40 f8          	inc    QWORD PTR [r8-0x8]
   140002bbb:	e9 e7 fe ff ff       	jmp    0x140002aa7
   140002bc0:	48 8d 8d e0 01 00 00 	lea    rcx,[rbp+0x1e0]
   140002bc7:	48 8d 95 00 02 00 00 	lea    rdx,[rbp+0x200]
   140002bce:	e8 ed 08 0c 00       	call   0x1400c34c0
   140002bd3:	4c 8b bd e0 01 00 00 	mov    r15,QWORD PTR [rbp+0x1e0]
   140002bda:	4c 8b ad e8 01 00 00 	mov    r13,QWORD PTR [rbp+0x1e8]
   140002be1:	48 8b 85 f0 01 00 00 	mov    rax,QWORD PTR [rbp+0x1f0]
   140002be8:	e9 79 ff ff ff       	jmp    0x140002b66
   140002bed:	48 83 a5 e0 05 00 00 	and    QWORD PTR [rbp+0x5e0],0x0
   140002bf4:	00 
   140002bf5:	48 c7 85 e8 05 00 00 	mov    QWORD PTR [rbp+0x5e8],0x8
   140002bfc:	08 00 00 00 
   140002c00:	48 83 a5 f0 05 00 00 	and    QWORD PTR [rbp+0x5f0],0x0
   140002c07:	00 
   140002c08:	4c 8b bd e0 01 00 00 	mov    r15,QWORD PTR [rbp+0x1e0]
   140002c0f:	4c 8b 8d e8 01 00 00 	mov    r9,QWORD PTR [rbp+0x1e8]
   140002c16:	4c 8b a5 f8 01 00 00 	mov    r12,QWORD PTR [rbp+0x1f8]
   140002c1d:	66 45 0f 6f 1f       	movdqa xmm11,XMMWORD PTR [r15]
   140002c22:	4d 85 c9             	test   r9,r9
   140002c25:	74 3d                	je     0x140002c64
   140002c27:	49 ff c1             	inc    r9
   140002c2a:	48 8d 8d 50 07 00 00 	lea    rcx,[rbp+0x750]
   140002c31:	6a 10                	push   0x10
   140002c33:	5a                   	pop    rdx
   140002c34:	49 89 d0             	mov    r8,rdx
   140002c37:	e8 c4 e3 ff ff       	call   0x140001000
   140002c3c:	48 8b bd 50 07 00 00 	mov    rdi,QWORD PTR [rbp+0x750]
   140002c43:	48 8b 85 58 07 00 00 	mov    rax,QWORD PTR [rbp+0x758]
   140002c4a:	48 89 85 d0 0b 00 00 	mov    QWORD PTR [rbp+0xbd0],rax
   140002c51:	4c 89 f8             	mov    rax,r15
   140002c54:	48 2b 85 60 07 00 00 	sub    rax,QWORD PTR [rbp+0x760]
   140002c5b:	48 89 85 a8 0b 00 00 	mov    QWORD PTR [rbp+0xba8],rax
   140002c62:	eb 02                	jmp    0x140002c66
   140002c64:	31 ff                	xor    edi,edi
   140002c66:	4d 8d 6f 10          	lea    r13,[r15+0x10]
   140002c6a:	66 41 0f d7 c3       	pmovmskb eax,xmm11
   140002c6f:	f7 d0                	not    eax
   140002c71:	49 83 ec 01          	sub    r12,0x1
   140002c75:	73 19                	jae    0x140002c90
   140002c77:	eb 56                	jmp    0x140002ccf
   140002c79:	66 41 0f 6f 45 00    	movdqa xmm0,XMMWORD PTR [r13+0x0]
   140002c7f:	49 81 c7 00 ff ff ff 	add    r15,0xffffffffffffff00
   140002c86:	49 83 c5 10          	add    r13,0x10
   140002c8a:	66 0f d7 c0          	pmovmskb eax,xmm0
   140002c8e:	f7 d0                	not    eax
   140002c90:	66 85 c0             	test   ax,ax
   140002c93:	74 e4                	je     0x140002c79
   140002c95:	8d 70 ff             	lea    esi,[rax-0x1]
   140002c98:	0f bc c8             	bsf    ecx,eax
   140002c9b:	21 c6                	and    esi,eax
   140002c9d:	c1 e1 04             	shl    ecx,0x4
   140002ca0:	4c 89 f8             	mov    rax,r15
   140002ca3:	48 29 c8             	sub    rax,rcx
   140002ca6:	8a 58 f0             	mov    bl,BYTE PTR [rax-0x10]
   140002ca9:	4c 8b 70 f8          	mov    r14,QWORD PTR [rax-0x8]
   140002cad:	e8 4c e6 ff ff       	call   0x1400012fe
   140002cb2:	48 83 20 00          	and    QWORD PTR [rax],0x0
   140002cb6:	88 58 08             	mov    BYTE PTR [rax+0x8],bl
   140002cb9:	48 8d 8d e0 05 00 00 	lea    rcx,[rbp+0x5e0]
   140002cc0:	48 89 c2             	mov    rdx,rax
   140002cc3:	4d 89 f0             	mov    r8,r14
   140002cc6:	e8 80 fb ff ff       	call   0x14000284b
   140002ccb:	89 f0                	mov    eax,esi
   140002ccd:	eb a2                	jmp    0x140002c71
   140002ccf:	48 85 ff             	test   rdi,rdi
   140002cd2:	74 16                	je     0x140002cea
   140002cd4:	48 8b 8d a8 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xba8]
   140002cdb:	48 89 fa             	mov    rdx,rdi
   140002cde:	4c 8b 85 d0 0b 00 00 	mov    r8,QWORD PTR [rbp+0xbd0]
   140002ce5:	e8 c4 e6 ff ff       	call   0x1400013ae
   140002cea:	4c 8d a5 e0 01 00 00 	lea    r12,[rbp+0x1e0]
   140002cf1:	4c 8d bd e0 05 00 00 	lea    r15,[rbp+0x5e0]
   140002cf8:	48 8b 9d f0 05 00 00 	mov    rbx,QWORD PTR [rbp+0x5f0]
   140002cff:	4c 89 f9             	mov    rcx,r15
   140002d02:	e8 53 fa ff ff       	call   0x14000275a
   140002d07:	48 89 c6             	mov    rsi,rax
   140002d0a:	48 83 fb 01          	cmp    rbx,0x1
   140002d0e:	76 42                	jbe    0x140002d52
   140002d10:	48 85 f6             	test   rsi,rsi
   140002d13:	0f 84 fe 21 00 00    	je     0x140004f17
   140002d19:	48 89 d7             	mov    rdi,rdx
   140002d1c:	4c 89 f9             	mov    rcx,r15
   140002d1f:	e8 36 fa ff ff       	call   0x14000275a
   140002d24:	48 85 c0             	test   rax,rax
   140002d27:	0f 84 f3 21 00 00    	je     0x140004f20
   140002d2d:	49 89 c6             	mov    r14,rax
   140002d30:	48 89 d3             	mov    rbx,rdx
   140002d33:	48 01 fb             	add    rbx,rdi
   140002d36:	e8 c3 e5 ff ff       	call   0x1400012fe
   140002d3b:	48 89 30             	mov    QWORD PTR [rax],rsi
   140002d3e:	4c 89 70 08          	mov    QWORD PTR [rax+0x8],r14
   140002d42:	4c 89 f9             	mov    rcx,r15
   140002d45:	48 89 c2             	mov    rdx,rax
   140002d48:	49 89 d8             	mov    r8,rbx
   140002d4b:	e8 fb fa ff ff       	call   0x14000284b
   140002d50:	eb a6                	jmp    0x140002cf8
   140002d52:	48 85 f6             	test   rsi,rsi
   140002d55:	74 14                	je     0x140002d6b
   140002d57:	f3 0f 6f 06          	movdqu xmm0,XMMWORD PTR [rsi]
   140002d5b:	66 0f 7f 85 b0 08 00 	movdqa XMMWORD PTR [rbp+0x8b0],xmm0
   140002d62:	00 
   140002d63:	48 89 f1             	mov    rcx,rsi
   140002d66:	e8 10 3f 04 00       	call   0x140046c7b
   140002d6b:	48 8b bd e8 05 00 00 	mov    rdi,QWORD PTR [rbp+0x5e8]
   140002d72:	4c 8b b5 f0 05 00 00 	mov    r14,QWORD PTR [rbp+0x5f0]
   140002d79:	48 89 fb             	mov    rbx,rdi
   140002d7c:	49 83 ee 01          	sub    r14,0x1
   140002d80:	72 0e                	jb     0x140002d90
   140002d82:	48 89 d9             	mov    rcx,rbx
   140002d85:	e8 c8 e7 ff ff       	call   0x140001552
   140002d8a:	48 83 c3 10          	add    rbx,0x10
   140002d8e:	eb ec                	jmp    0x140002d7c
   140002d90:	48 8b 8d e0 05 00 00 	mov    rcx,QWORD PTR [rbp+0x5e0]
   140002d97:	48 89 fa             	mov    rdx,rdi
   140002d9a:	6a 08                	push   0x8
   140002d9c:	41 58                	pop    r8
   140002d9e:	6a 10                	push   0x10
   140002da0:	41 59                	pop    r9
   140002da2:	e8 c6 bc 00 00       	call   0x14000ea6d
   140002da7:	48 85 f6             	test   rsi,rsi
   140002daa:	0f 84 22 09 00 00    	je     0x1400036d2
   140002db0:	66 0f 6f 85 b0 08 00 	movdqa xmm0,XMMWORD PTR [rbp+0x8b0]
   140002db7:	00 
   140002db8:	66 0f 7f 85 a0 08 00 	movdqa XMMWORD PTR [rbp+0x8a0],xmm0
   140002dbf:	00 
   140002dc0:	ba 00 01 00 00       	mov    edx,0x100
   140002dc5:	4c 89 e1             	mov    rcx,r12
   140002dc8:	e8 4c 19 01 00       	call   0x140014719
   140002dcd:	31 f6                	xor    esi,esi
   140002dcf:	48 8d 8d b0 08 00 00 	lea    rcx,[rbp+0x8b0]
   140002dd6:	31 d2                	xor    edx,edx
   140002dd8:	4d 89 e0             	mov    r8,r12
   140002ddb:	e8 cb 25 00 00       	call   0x1400053ab
   140002de0:	48 8b 85 e0 01 00 00 	mov    rax,QWORD PTR [rbp+0x1e0]
   140002de7:	48 89 85 b0 0a 00 00 	mov    QWORD PTR [rbp+0xab0],rax
   140002dee:	48 8b 9d e8 01 00 00 	mov    rbx,QWORD PTR [rbp+0x1e8]
   140002df5:	48 8b 85 f0 01 00 00 	mov    rax,QWORD PTR [rbp+0x1f0]
   140002dfc:	48 83 a5 d8 00 00 00 	and    QWORD PTR [rbp+0xd8],0x0
   140002e03:	00 
   140002e04:	48 c7 85 e0 00 00 00 	mov    QWORD PTR [rbp+0xe0],0x1
   140002e0b:	01 00 00 00 
   140002e0f:	48 83 a5 e8 00 00 00 	and    QWORD PTR [rbp+0xe8],0x0
   140002e16:	00 
   140002e17:	48 89 85 18 0b 00 00 	mov    QWORD PTR [rbp+0xb18],rax
   140002e1e:	48 8d 3c 03          	lea    rdi,[rbx+rax*1]
   140002e22:	6a fe                	push   0xfffffffffffffffe
   140002e24:	41 5e                	pop    r14
   140002e26:	6a 01                	push   0x1
   140002e28:	58                   	pop    rax
   140002e29:	48 89 9d 00 0b 00 00 	mov    QWORD PTR [rbp+0xb00],rbx
   140002e30:	45 31 ff             	xor    r15d,r15d
   140002e33:	48 39 fb             	cmp    rbx,rdi
   140002e36:	74 48                	je     0x140002e80
   140002e38:	45 89 fc             	mov    r12d,r15d
   140002e3b:	45 8d 7c 24 01       	lea    r15d,[r12+0x1]
   140002e40:	44 8a 2b             	mov    r13b,BYTE PTR [rbx]
   140002e43:	48 ff c3             	inc    rbx
   140002e46:	45 84 ed             	test   r13b,r13b
   140002e49:	74 e8                	je     0x140002e33
   140002e4b:	48 3b b5 d8 00 00 00 	cmp    rsi,QWORD PTR [rbp+0xd8]
   140002e52:	75 13                	jne    0x140002e67
   140002e54:	48 8d 8d d8 00 00 00 	lea    rcx,[rbp+0xd8]
   140002e5b:	e8 ca fa ff ff       	call   0x14000292a
   140002e60:	48 8b 85 e0 00 00 00 	mov    rax,QWORD PTR [rbp+0xe0]
   140002e67:	44 88 24 70          	mov    BYTE PTR [rax+rsi*2],r12b
   140002e6b:	44 88 6c 70 01       	mov    BYTE PTR [rax+rsi*2+0x1],r13b
   140002e70:	48 ff c6             	inc    rsi
   140002e73:	48 89 b5 e8 00 00 00 	mov    QWORD PTR [rbp+0xe8],rsi
   140002e7a:	49 83 c6 02          	add    r14,0x2
   140002e7e:	eb b3                	jmp    0x140002e33
   140002e80:	48 8b bd e0 00 00 00 	mov    rdi,QWORD PTR [rbp+0xe0]
   140002e87:	48 83 fe 02          	cmp    rsi,0x2
   140002e8b:	4c 8d a5 e0 01 00 00 	lea    r12,[rbp+0x1e0]
   140002e92:	0f 83 1e 18 00 00    	jae    0x1400046b6
   140002e98:	48 8d 0d 30 e5 ff ff 	lea    rcx,[rip+0xffffffffffffe530]        # 0x1400013cf
   140002e9f:	e8 da 02 06 00       	call   0x14006317e
   140002ea4:	0f 29 b5 e0 01 00 00 	movaps XMMWORD PTR [rbp+0x1e0],xmm6
   140002eab:	0f 29 bd f0 01 00 00 	movaps XMMWORD PTR [rbp+0x1f0],xmm7
   140002eb2:	48 89 85 00 02 00 00 	mov    QWORD PTR [rbp+0x200],rax
   140002eb9:	83 a5 c0 08 00 00 00 	and    DWORD PTR [rbp+0x8c0],0x0
   140002ec0:	48 89 95 08 02 00 00 	mov    QWORD PTR [rbp+0x208],rdx
   140002ec7:	48 8d 1c 77          	lea    rbx,[rdi+rsi*2]
   140002ecb:	31 c0                	xor    eax,eax
   140002ecd:	45 31 f6             	xor    r14d,r14d
   140002ed0:	48 39 df             	cmp    rdi,rbx
   140002ed3:	0f 84 54 02 00 00    	je     0x14000312d
   140002ed9:	40 8a 37             	mov    sil,BYTE PTR [rdi]
   140002edc:	44 8a 6f 01          	mov    r13b,BYTE PTR [rdi+0x1]
   140002ee0:	84 c0                	test   al,al
   140002ee2:	74 12                	je     0x140002ef6
   140002ee4:	41 ff c6             	inc    r14d
   140002ee7:	44 89 e9             	mov    ecx,r13d
   140002eea:	28 c1                	sub    cl,al
   140002eec:	41 d3 e6             	shl    r14d,cl
   140002eef:	44 89 b5 c0 08 00 00 	mov    DWORD PTR [rbp+0x8c0],r14d
   140002ef6:	41 0f b6 c5          	movzx  eax,r13b
   140002efa:	48 8d 8d c0 08 00 00 	lea    rcx,[rbp+0x8c0]
   140002f01:	48 89 8d 50 07 00 00 	mov    QWORD PTR [rbp+0x750],rcx
   140002f08:	48 8d 0d e1 9a 00 00 	lea    rcx,[rip+0x9ae1]        # 0x14000c9f0
   140002f0f:	48 89 8d 58 07 00 00 	mov    QWORD PTR [rbp+0x758],rcx
   140002f16:	48 83 a5 60 07 00 00 	and    QWORD PTR [rbp+0x760],0x0
   140002f1d:	00 
   140002f1e:	66 89 85 68 07 00 00 	mov    WORD PTR [rbp+0x768],ax
   140002f25:	48 8d 8d e0 05 00 00 	lea    rcx,[rbp+0x5e0]
   140002f2c:	48 8d 15 85 62 0c 00 	lea    rdx,[rip+0xc6285]        # 0x1400c91b8
   140002f33:	4c 8d 85 50 07 00 00 	lea    r8,[rbp+0x750]
   140002f3a:	e8 61 30 00 00       	call   0x140005fa0
   140002f3f:	48 8b 8d 00 02 00 00 	mov    rcx,QWORD PTR [rbp+0x200]
   140002f46:	48 8b 95 08 02 00 00 	mov    rdx,QWORD PTR [rbp+0x208]
   140002f4d:	41 89 f0             	mov    r8d,esi
   140002f50:	e8 61 e7 ff ff       	call   0x1400016b6
   140002f55:	49 89 c7             	mov    r15,rax
   140002f58:	48 83 bd f0 01 00 00 	cmp    QWORD PTR [rbp+0x1f0],0x0
   140002f5f:	00 
   140002f60:	0f 84 9e 01 00 00    	je     0x140003104
   140002f66:	48 83 c7 02          	add    rdi,0x2
   140002f6a:	48 8b 85 e0 01 00 00 	mov    rax,QWORD PTR [rbp+0x1e0]
   140002f71:	48 8b 8d e8 01 00 00 	mov    rcx,QWORD PTR [rbp+0x1e8]
   140002f78:	49 89 c8             	mov    r8,rcx
   140002f7b:	4d 21 f8             	and    r8,r15
   140002f7e:	49 c1 ef 39          	shr    r15,0x39
   140002f82:	66 41 0f 6e c7       	movd   xmm0,r15d
   140002f87:	66 0f 60 c0          	punpcklbw xmm0,xmm0
   140002f8b:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
   140002f90:	66 0f 70 c0 44       	pshufd xmm0,xmm0,0x44
   140002f95:	45 31 d2             	xor    r10d,r10d
   140002f98:	45 31 c9             	xor    r9d,r9d
   140002f9b:	f3 42 0f 6f 0c 00    	movdqu xmm1,XMMWORD PTR [rax+r8*1]
   140002fa1:	66 0f 6f d0          	movdqa xmm2,xmm0
   140002fa5:	66 0f 74 d1          	pcmpeqb xmm2,xmm1
   140002fa9:	66 44 0f d7 da       	pmovmskb r11d,xmm2
   140002fae:	66 45 85 db          	test   r11w,r11w
   140002fb2:	74 2e                	je     0x140002fe2
   140002fb4:	41 0f bc d3          	bsf    edx,r11d
   140002fb8:	4c 01 c2             	add    rdx,r8
   140002fbb:	48 21 ca             	and    rdx,rcx
   140002fbe:	48 c1 e2 05          	shl    rdx,0x5
   140002fc2:	49 89 c4             	mov    r12,rax
   140002fc5:	49 29 d4             	sub    r12,rdx
   140002fc8:	41 3a 74 24 e0       	cmp    sil,BYTE PTR [r12-0x20]
   140002fcd:	74 62                	je     0x140003031
   140002fcf:	41 8d 53 ff          	lea    edx,[r11-0x1]
   140002fd3:	44 21 da             	and    edx,r11d
   140002fd6:	41 89 d3             	mov    r11d,edx
   140002fd9:	4c 8d a5 e0 01 00 00 	lea    r12,[rbp+0x1e0]
   140002fe0:	eb cc                	jmp    0x140002fae
   140002fe2:	49 83 fa 01          	cmp    r10,0x1
   140002fe6:	4c 8b 95 d0 0b 00 00 	mov    r10,QWORD PTR [rbp+0xbd0]
   140002fed:	74 12                	je     0x140003001
   140002fef:	66 0f d7 d1          	pmovmskb edx,xmm1
   140002ff3:	85 d2                	test   edx,edx
   140002ff5:	74 24                	je     0x14000301b
   140002ff7:	44 0f bc d2          	bsf    r10d,edx
   140002ffb:	4d 01 c2             	add    r10,r8
   140002ffe:	49 21 ca             	and    r10,rcx
   140003001:	66 41 0f 74 ca       	pcmpeqb xmm1,xmm10
   140003006:	66 0f d7 d1          	pmovmskb edx,xmm1
   14000300a:	85 d2                	test   edx,edx
   14000300c:	75 63                	jne    0x140003071
   14000300e:	4c 89 95 d0 0b 00 00 	mov    QWORD PTR [rbp+0xbd0],r10
   140003015:	6a 01                	push   0x1
   140003017:	41 5a                	pop    r10
   140003019:	eb 03                	jmp    0x14000301e
   14000301b:	45 31 d2             	xor    r10d,r10d
   14000301e:	4d 01 c8             	add    r8,r9
   140003021:	49 83 c0 10          	add    r8,0x10
   140003025:	49 83 c1 10          	add    r9,0x10
   140003029:	49 21 c8             	and    r8,rcx
   14000302c:	e9 6a ff ff ff       	jmp    0x140002f9b
   140003031:	49 8b 4c 24 e8       	mov    rcx,QWORD PTR [r12-0x18]
   140003036:	49 8b 54 24 f0       	mov    rdx,QWORD PTR [r12-0x10]
   14000303b:	48 8b 85 f0 05 00 00 	mov    rax,QWORD PTR [rbp+0x5f0]
   140003042:	49 89 44 24 f8       	mov    QWORD PTR [r12-0x8],rax
   140003047:	f3 0f 6f 85 e0 05 00 	movdqu xmm0,XMMWORD PTR [rbp+0x5e0]
   14000304e:	00 
   14000304f:	f3 41 0f 7f 44 24 e8 	movdqu XMMWORD PTR [r12-0x18],xmm0
   140003056:	4c 8d a5 e0 01 00 00 	lea    r12,[rbp+0x1e0]
   14000305d:	48 89 95 20 0a 00 00 	mov    QWORD PTR [rbp+0xa20],rdx
   140003064:	e8 06 e5 ff ff       	call   0x14000156f
   140003069:	44 89 e8             	mov    eax,r13d
   14000306c:	e9 5f fe ff ff       	jmp    0x140002ed0
   140003071:	46 8a 04 10          	mov    r8b,BYTE PTR [rax+r10*1]
   140003075:	45 84 c0             	test   r8b,r8b
   140003078:	0f 89 9a 00 00 00    	jns    0x140003118
   14000307e:	48 8b 95 f0 05 00 00 	mov    rdx,QWORD PTR [rbp+0x5f0]
   140003085:	4c 8d 8d 57 07 00 00 	lea    r9,[rbp+0x757]
   14000308c:	49 89 51 10          	mov    QWORD PTR [r9+0x10],rdx
   140003090:	0f 10 85 e0 05 00 00 	movups xmm0,XMMWORD PTR [rbp+0x5e0]
   140003097:	41 80 e0 01          	and    r8b,0x1
   14000309b:	41 0f b6 d0          	movzx  edx,r8b
   14000309f:	48 29 95 f0 01 00 00 	sub    QWORD PTR [rbp+0x1f0],rdx
   1400030a6:	41 0f 11 01          	movups XMMWORD PTR [r9],xmm0
   1400030aa:	49 8d 52 f0          	lea    rdx,[r10-0x10]
   1400030ae:	48 21 ca             	and    rdx,rcx
   1400030b1:	46 88 3c 10          	mov    BYTE PTR [rax+r10*1],r15b
   1400030b5:	44 88 7c 10 10       	mov    BYTE PTR [rax+rdx*1+0x10],r15b
   1400030ba:	48 ff 85 f8 01 00 00 	inc    QWORD PTR [rbp+0x1f8]
   1400030c1:	49 c1 e2 05          	shl    r10,0x5
   1400030c5:	48 89 c1             	mov    rcx,rax
   1400030c8:	4c 29 d1             	sub    rcx,r10
   1400030cb:	40 88 71 e0          	mov    BYTE PTR [rcx-0x20],sil
   1400030cf:	49 f7 da             	neg    r10
   1400030d2:	f3 0f 6f 85 50 07 00 	movdqu xmm0,XMMWORD PTR [rbp+0x750]
   1400030d9:	00 
   1400030da:	f3 0f 6f 8d 5f 07 00 	movdqu xmm1,XMMWORD PTR [rbp+0x75f]
   1400030e1:	00 
   1400030e2:	f3 42 0f 7f 44 10 e1 	movdqu XMMWORD PTR [rax+r10*1-0x1f],xmm0
   1400030e9:	f3 0f 7f 49 f0       	movdqu XMMWORD PTR [rcx-0x10],xmm1
   1400030ee:	48 b9 00 00 00 00 00 	movabs rcx,0x8000000000000000
   1400030f5:	00 00 80 
   1400030f8:	48 8b 95 20 0a 00 00 	mov    rdx,QWORD PTR [rbp+0xa20]
   1400030ff:	e9 59 ff ff ff       	jmp    0x14000305d
   140003104:	4c 89 e1             	mov    rcx,r12
   140003107:	48 8d 95 00 02 00 00 	lea    rdx,[rbp+0x200]
   14000310e:	e8 95 05 0c 00       	call   0x1400c36a8
   140003113:	e9 4e fe ff ff       	jmp    0x140002f66
   140003118:	66 0f 6f 00          	movdqa xmm0,XMMWORD PTR [rax]
   14000311c:	66 0f d7 d0          	pmovmskb edx,xmm0
   140003120:	44 0f bc d2          	bsf    r10d,edx
   140003124:	46 8a 04 10          	mov    r8b,BYTE PTR [rax+r10*1]
   140003128:	e9 51 ff ff ff       	jmp    0x14000307e
   14000312d:	66 0f 6f 85 e0 01 00 	movdqa xmm0,XMMWORD PTR [rbp+0x1e0]
   140003134:	00 
   140003135:	66 0f 6f 8d f0 01 00 	movdqa xmm1,XMMWORD PTR [rbp+0x1f0]
   14000313c:	00 
   14000313d:	66 0f 6f 95 00 02 00 	movdqa xmm2,XMMWORD PTR [rbp+0x200]
   140003144:	00 
   140003145:	66 0f 7f 95 e0 09 00 	movdqa XMMWORD PTR [rbp+0x9e0],xmm2
   14000314c:	00 
   14000314d:	66 0f 7f 8d d0 09 00 	movdqa XMMWORD PTR [rbp+0x9d0],xmm1
   140003154:	00 
   140003155:	66 0f 7f 85 c0 09 00 	movdqa XMMWORD PTR [rbp+0x9c0],xmm0
   14000315c:	00 
   14000315d:	48 8b 8d d8 00 00 00 	mov    rcx,QWORD PTR [rbp+0xd8]
   140003164:	48 8b 95 e0 00 00 00 	mov    rdx,QWORD PTR [rbp+0xe0]
   14000316b:	e8 d1 e3 ff ff       	call   0x140001541
   140003170:	4c 8b ad 28 0b 00 00 	mov    r13,QWORD PTR [rbp+0xb28]
   140003177:	48 83 a5 50 07 00 00 	and    QWORD PTR [rbp+0x750],0x0
   14000317e:	00 
   14000317f:	48 c7 85 58 07 00 00 	mov    QWORD PTR [rbp+0x758],0x1
   140003186:	01 00 00 00 
   14000318a:	48 83 a5 60 07 00 00 	and    QWORD PTR [rbp+0x760],0x0
   140003191:	00 
   140003192:	4c 8b bd 30 0b 00 00 	mov    r15,QWORD PTR [rbp+0xb30]
   140003199:	4d 01 ef             	add    r15,r13
   14000319c:	48 8b 85 d8 09 00 00 	mov    rax,QWORD PTR [rbp+0x9d8]
   1400031a3:	48 89 85 d0 0b 00 00 	mov    QWORD PTR [rbp+0xbd0],rax
   1400031aa:	48 8b b5 c0 09 00 00 	mov    rsi,QWORD PTR [rbp+0x9c0]
   1400031b1:	48 8b bd c8 09 00 00 	mov    rdi,QWORD PTR [rbp+0x9c8]
   1400031b8:	48 8b 85 e0 09 00 00 	mov    rax,QWORD PTR [rbp+0x9e0]
   1400031bf:	48 89 85 a8 0b 00 00 	mov    QWORD PTR [rbp+0xba8],rax
   1400031c6:	48 8b 85 e8 09 00 00 	mov    rax,QWORD PTR [rbp+0x9e8]
   1400031cd:	48 89 85 c0 0b 00 00 	mov    QWORD PTR [rbp+0xbc0],rax
   1400031d4:	45 31 e4             	xor    r12d,r12d
   1400031d7:	4c 89 e8             	mov    rax,r13
   1400031da:	4c 39 f8             	cmp    rax,r15
   1400031dd:	0f 84 e8 00 00 00    	je     0x1400032cb
   1400031e3:	4c 8d 68 01          	lea    r13,[rax+0x1]
   1400031e7:	8a 18                	mov    bl,BYTE PTR [rax]
   1400031e9:	4c 89 e8             	mov    rax,r13
   1400031ec:	48 83 bd d0 0b 00 00 	cmp    QWORD PTR [rbp+0xbd0],0x0
   1400031f3:	00 
   1400031f4:	74 e4                	je     0x1400031da
   1400031f6:	48 8b 8d a8 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xba8]
   1400031fd:	48 8b 95 c0 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xbc0]
   140003204:	41 89 d8             	mov    r8d,ebx
   140003207:	e8 aa e4 ff ff       	call   0x1400016b6
   14000320c:	48 89 c1             	mov    rcx,rax
   14000320f:	48 c1 e9 39          	shr    rcx,0x39
   140003213:	66 0f 6e c1          	movd   xmm0,ecx
   140003217:	66 0f 60 c0          	punpcklbw xmm0,xmm0
   14000321b:	f2 0f 70 c0 00       	pshuflw xmm0,xmm0,0x0
   140003220:	66 0f 70 c0 44       	pshufd xmm0,xmm0,0x44
   140003225:	31 c9                	xor    ecx,ecx
   140003227:	48 21 f8             	and    rax,rdi
   14000322a:	f3 0f 6f 0c 06       	movdqu xmm1,XMMWORD PTR [rsi+rax*1]
   14000322f:	66 0f 6f d1          	movdqa xmm2,xmm1
   140003233:	66 0f 74 d0          	pcmpeqb xmm2,xmm0
   140003237:	66 0f d7 d2          	pmovmskb edx,xmm2
   14000323b:	66 85 d2             	test   dx,dx
   14000323e:	74 26                	je     0x140003266
   140003240:	44 0f bc ca          	bsf    r9d,edx
   140003244:	49 01 c1             	add    r9,rax
   140003247:	49 21 f9             	and    r9,rdi
   14000324a:	49 c1 e1 05          	shl    r9,0x5
   14000324e:	49 89 f0             	mov    r8,rsi
   140003251:	4d 29 c8             	sub    r8,r9
   140003254:	41 3a 58 e0          	cmp    bl,BYTE PTR [r8-0x20]
   140003258:	74 2a                	je     0x140003284
   14000325a:	44 8d 42 ff          	lea    r8d,[rdx-0x1]
   14000325e:	41 21 d0             	and    r8d,edx
   140003261:	44 89 c2             	mov    edx,r8d
   140003264:	eb d5                	jmp    0x14000323b
   140003266:	66 41 0f 74 ca       	pcmpeqb xmm1,xmm10
   14000326b:	66 0f d7 d1          	pmovmskb edx,xmm1
   14000326f:	85 d2                	test   edx,edx
   140003271:	0f 85 60 ff ff ff    	jne    0x1400031d7
   140003277:	48 01 c8             	add    rax,rcx
   14000327a:	48 83 c0 10          	add    rax,0x10
   14000327e:	48 83 c1 10          	add    rcx,0x10
   140003282:	eb a3                	jmp    0x140003227
   140003284:	4d 8b 70 f0          	mov    r14,QWORD PTR [r8-0x10]
   140003288:	49 8b 58 f8          	mov    rbx,QWORD PTR [r8-0x8]
   14000328c:	48 8d 8d 50 07 00 00 	lea    rcx,[rbp+0x750]
   140003293:	48 89 da             	mov    rdx,rbx
   140003296:	e8 ac c2 00 00       	call   0x14000f547
   14000329b:	4c 8b a5 60 07 00 00 	mov    r12,QWORD PTR [rbp+0x760]
   1400032a2:	48 85 db             	test   rbx,rbx
   1400032a5:	74 15                	je     0x1400032bc
   1400032a7:	48 8b 8d 58 07 00 00 	mov    rcx,QWORD PTR [rbp+0x758]
   1400032ae:	4c 01 e1             	add    rcx,r12
   1400032b1:	4c 89 f2             	mov    rdx,r14
   1400032b4:	49 89 d8             	mov    r8,rbx
   1400032b7:	e8 0a 01 0c 00       	call   0x1400c33c6
   1400032bc:	49 01 dc             	add    r12,rbx
   1400032bf:	4c 89 a5 60 07 00 00 	mov    QWORD PTR [rbp+0x760],r12
   1400032c6:	e9 0c ff ff ff       	jmp    0x1400031d7
   1400032cb:	48 8b b5 58 07 00 00 	mov    rsi,QWORD PTR [rbp+0x758]
   1400032d2:	48 83 a5 e0 01 00 00 	and    QWORD PTR [rbp+0x1e0],0x0
   1400032d9:	00 
   1400032da:	48 c7 85 e8 01 00 00 	mov    QWORD PTR [rbp+0x1e8],0x1
   1400032e1:	01 00 00 00 
   1400032e5:	48 83 a5 f0 01 00 00 	and    QWORD PTR [rbp+0x1f0],0x0
   1400032ec:	00 
   1400032ed:	49 01 f4             	add    r12,rsi
   1400032f0:	48 89 b5 e0 05 00 00 	mov    QWORD PTR [rbp+0x5e0],rsi
   1400032f7:	4c 89 a5 e8 05 00 00 	mov    QWORD PTR [rbp+0x5e8],r12
   1400032fe:	31 ff                	xor    edi,edi
   140003300:	31 db                	xor    ebx,ebx
   140003302:	4c 8d a5 e0 01 00 00 	lea    r12,[rbp+0x1e0]
   140003309:	4c 8d b5 e0 05 00 00 	lea    r14,[rbp+0x5e0]
   140003310:	4c 89 f1             	mov    rcx,r14
   140003313:	e8 11 e0 ff ff       	call   0x140001329
   140003318:	3d 00 00 11 00       	cmp    eax,0x110000
   14000331d:	74 23                	je     0x140003342
   14000331f:	89 d9                	mov    ecx,ebx
   140003321:	00 d9                	add    cl,bl
   140003323:	83 f8 31             	cmp    eax,0x31
   140003326:	0f 94 c3             	sete   bl
   140003329:	08 cb                	or     bl,cl
   14000332b:	ff c7                	inc    edi
   14000332d:	83 ff 08             	cmp    edi,0x8
   140003330:	75 de                	jne    0x140003310
   140003332:	4c 89 e1             	mov    rcx,r12
   140003335:	89 da                	mov    edx,ebx
   140003337:	e8 01 69 07 00       	call   0x140079c3d
   14000333c:	31 ff                	xor    edi,edi
   14000333e:	31 db                	xor    ebx,ebx
   140003340:	eb ce                	jmp    0x140003310
   140003342:	85 ff                	test   edi,edi
   140003344:	7e 15                	jle    0x14000335b
   140003346:	40 f6 df             	neg    dil
   140003349:	40 80 e7 07          	and    dil,0x7
   14000334d:	89 f9                	mov    ecx,edi
   14000334f:	d2 e3                	shl    bl,cl
   140003351:	4c 89 e1             	mov    rcx,r12
   140003354:	89 da                	mov    edx,ebx
   140003356:	e8 e2 68 07 00       	call   0x140079c3d
   14000335b:	48 8b 85 e0 01 00 00 	mov    rax,QWORD PTR [rbp+0x1e0]
   140003362:	48 89 85 b8 0a 00 00 	mov    QWORD PTR [rbp+0xab8],rax
   140003369:	4c 8b bd e8 01 00 00 	mov    r15,QWORD PTR [rbp+0x1e8]
   140003370:	48 8b bd f0 01 00 00 	mov    rdi,QWORD PTR [rbp+0x1f0]
   140003377:	48 8b 8d 50 07 00 00 	mov    rcx,QWORD PTR [rbp+0x750]
   14000337e:	48 89 f2             	mov    rdx,rsi
   140003381:	e8 b4 37 01 00       	call   0x140016b3a
   140003386:	48 83 a5 30 0a 00 00 	and    QWORD PTR [rbp+0xa30],0x0
   14000338d:	00 
   14000338e:	6a 01                	push   0x1
   140003390:	5b                   	pop    rbx
   140003391:	48 89 9d 38 0a 00 00 	mov    QWORD PTR [rbp+0xa38],rbx
   140003398:	48 83 a5 40 0a 00 00 	and    QWORD PTR [rbp+0xa40],0x0
   14000339f:	00 
   1400033a0:	48 8d b5 30 0a 00 00 	lea    rsi,[rbp+0xa30]
   1400033a7:	48 89 f1             	mov    rcx,rsi
   1400033aa:	4c 8b ad 18 0b 00 00 	mov    r13,QWORD PTR [rbp+0xb18]
   1400033b1:	4c 89 ea             	mov    rdx,r13
   1400033b4:	6a 0b                	push   0xb
   1400033b6:	41 58                	pop    r8
   1400033b8:	e8 41 20 00 00       	call   0x1400053fe
   1400033bd:	48 89 f1             	mov    rcx,rsi
   1400033c0:	48 89 fa             	mov    rdx,rdi
   1400033c3:	6a 20                	push   0x20
   1400033c5:	41 58                	pop    r8
   1400033c7:	e8 32 20 00 00       	call   0x1400053fe
   1400033cc:	48 89 f1             	mov    rcx,rsi
   1400033cf:	48 8b 95 00 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xb00]
   1400033d6:	4d 89 e8             	mov    r8,r13
   1400033d9:	e8 79 20 00 00       	call   0x140005457
   1400033de:	48 89 f1             	mov    rcx,rsi
   1400033e1:	4c 89 bd 18 0b 00 00 	mov    QWORD PTR [rbp+0xb18],r15
   1400033e8:	4c 89 fa             	mov    rdx,r15
   1400033eb:	49 89 f8             	mov    r8,rdi
   1400033ee:	e8 64 20 00 00       	call   0x140005457
   1400033f3:	48 8b b5 30 0a 00 00 	mov    rsi,QWORD PTR [rbp+0xa30]
   1400033fa:	48 8b bd 38 0a 00 00 	mov    rdi,QWORD PTR [rbp+0xa38]
   140003401:	48 8b 85 40 0a 00 00 	mov    rax,QWORD PTR [rbp+0xa40]
   140003408:	48 01 f8             	add    rax,rdi
   14000340b:	48 83 a5 e0 01 00 00 	and    QWORD PTR [rbp+0x1e0],0x0
   140003412:	00 
   140003413:	48 89 9d e8 01 00 00 	mov    QWORD PTR [rbp+0x1e8],rbx
   14000341a:	48 83 a5 f0 01 00 00 	and    QWORD PTR [rbp+0x1f0],0x0
   140003421:	00 
   140003422:	48 89 bd 50 07 00 00 	mov    QWORD PTR [rbp+0x750],rdi
   140003429:	48 89 85 58 07 00 00 	mov    QWORD PTR [rbp+0x758],rax
   140003430:	31 db                	xor    ebx,ebx
   140003432:	45 31 ff             	xor    r15d,r15d
   140003435:	48 8d 8d 50 07 00 00 	lea    rcx,[rbp+0x750]
   14000343c:	e8 e8 de ff ff       	call   0x140001329
   140003441:	3d 00 00 11 00       	cmp    eax,0x110000
   140003446:	74 24                	je     0x14000346c
   140003448:	44 89 f9             	mov    ecx,r15d
   14000344b:	44 00 f9             	add    cl,r15b
   14000344e:	83 f8 31             	cmp    eax,0x31
   140003451:	41 0f 94 c7          	sete   r15b
   140003455:	41 08 cf             	or     r15b,cl
   140003458:	ff c3                	inc    ebx
   14000345a:	83 fb 08             	cmp    ebx,0x8
   14000345d:	75 d6                	jne    0x140003435
   14000345f:	4c 89 e1             	mov    rcx,r12
   140003462:	44 89 fa             	mov    edx,r15d
   140003465:	e8 d3 67 07 00       	call   0x140079c3d
   14000346a:	eb c4                	jmp    0x140003430
   14000346c:	85 db                	test   ebx,ebx
   14000346e:	7e 15                	jle    0x140003485
   140003470:	f6 db                	neg    bl
   140003472:	80 e3 07             	and    bl,0x7
   140003475:	89 d9                	mov    ecx,ebx
   140003477:	41 d2 e7             	shl    r15b,cl
   14000347a:	4c 89 e1             	mov    rcx,r12
   14000347d:	44 89 fa             	mov    edx,r15d
   140003480:	e8 b8 67 07 00       	call   0x140079c3d
   140003485:	48 8b 85 e0 01 00 00 	mov    rax,QWORD PTR [rbp+0x1e0]
   14000348c:	48 89 85 c0 0a 00 00 	mov    QWORD PTR [rbp+0xac0],rax
   140003493:	48 8b 85 e8 01 00 00 	mov    rax,QWORD PTR [rbp+0x1e8]
   14000349a:	48 89 85 a8 0b 00 00 	mov    QWORD PTR [rbp+0xba8],rax
   1400034a1:	48 8b 9d f0 01 00 00 	mov    rbx,QWORD PTR [rbp+0x1f0]
   1400034a8:	48 89 f1             	mov    rcx,rsi
   1400034ab:	48 89 fa             	mov    rdx,rdi
   1400034ae:	e8 87 36 01 00       	call   0x140016b3a
   1400034b3:	44 0f 11 85 f7 09 00 	movups XMMWORD PTR [rbp+0x9f7],xmm8
   1400034ba:	00 
   1400034bb:	48 b8 6c 4a 00 41 6c 	movabs rax,0x407576c41004a6c
   1400034c2:	57 07 04 
   1400034c5:	48 89 85 07 0a 00 00 	mov    QWORD PTR [rbp+0xa07],rax
   1400034cc:	c6 85 0f 0a 00 00 07 	mov    BYTE PTR [rbp+0xa0f],0x7
   1400034d3:	31 c0                	xor    eax,eax
   1400034d5:	48 83 f8 19          	cmp    rax,0x19
   1400034d9:	74 0d                	je     0x1400034e8
   1400034db:	80 b4 05 f7 09 00 00 	xor    BYTE PTR [rbp+rax*1+0x9f7],0x33
   1400034e2:	33 
   1400034e3:	48 ff c0             	inc    rax
   1400034e6:	eb ed                	jmp    0x1400034d5
   1400034e8:	48 8d b5 d8 00 00 00 	lea    rsi,[rbp+0xd8]
   1400034ef:	48 89 f1             	mov    rcx,rsi
   1400034f2:	48 8d 95 f7 09 00 00 	lea    rdx,[rbp+0x9f7]
   1400034f9:	e8 e4 1d 00 00       	call   0x1400052e2
   1400034fe:	48 89 f1             	mov    rcx,rsi
   140003501:	48 8b 95 a8 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xba8]
   140003508:	49 89 d8             	mov    r8,rbx
   14000350b:	e8 71 1d 00 00       	call   0x140005281
   140003510:	48 8b 05 81 0b 14 00 	mov    rax,QWORD PTR [rip+0x140b81]        # 0x140144098
   140003517:	48 83 f8 02          	cmp    rax,0x2
   14000351b:	0f 85 c1 11 00 00    	jne    0x1400046e2
   140003521:	8a 05 7a 0b 14 00    	mov    al,BYTE PTR [rip+0x140b7a]        # 0x1401440a1
   140003527:	84 c0                	test   al,al
   140003529:	48 89 9d c0 0b 00 00 	mov    QWORD PTR [rbp+0xbc0],rbx
   140003530:	0f 84 a0 02 00 00    	je     0x1400037d6
   140003536:	8a 05 04 0d 14 00    	mov    al,BYTE PTR [rip+0x140d04]        # 0x140144240
   14000353c:	84 c0                	test   al,al
   14000353e:	0f 84 f1 11 00 00    	je     0x140004735
   140003544:	48 83 a5 c0 08 00 00 	and    QWORD PTR [rbp+0x8c0],0x0
   14000354b:	00 
   14000354c:	4c 89 e1             	mov    rcx,r12
   14000354f:	48 8d 15 ea 4f 0f 00 	lea    rdx,[rip+0xf4fea]        # 0x1400f8540
   140003556:	6a 0b                	push   0xb
   140003558:	41 58                	pop    r8
   14000355a:	e8 d1 18 07 00       	call   0x140074e30
   14000355f:	48 8b bd e0 01 00 00 	mov    rdi,QWORD PTR [rbp+0x1e0]
   140003566:	48 8b b5 e8 01 00 00 	mov    rsi,QWORD PTR [rbp+0x1e8]
   14000356d:	48 85 ff             	test   rdi,rdi
   140003570:	0f 84 c4 01 00 00    	je     0x14000373a
   140003576:	48 89 bd b0 0b 00 00 	mov    QWORD PTR [rbp+0xbb0],rdi
   14000357d:	48 8b 85 f0 01 00 00 	mov    rax,QWORD PTR [rbp+0x1f0]
   140003584:	48 89 85 c8 0b 00 00 	mov    QWORD PTR [rbp+0xbc8],rax
   14000358b:	4c 8b bd f8 01 00 00 	mov    r15,QWORD PTR [rbp+0x1f8]
   140003592:	31 db                	xor    ebx,ebx
   140003594:	4c 89 bd d0 0b 00 00 	mov    QWORD PTR [rbp+0xbd0],r15
   14000359b:	4c 39 fe             	cmp    rsi,r15
   14000359e:	0f 84 b4 19 00 00    	je     0x140004f58
   1400035a4:	0f b7 06             	movzx  eax,WORD PTR [rsi]
   1400035a7:	66 83 f8 02          	cmp    ax,0x2
   1400035ab:	0f 84 a7 19 00 00    	je     0x140004f58
   1400035b1:	48 8b 7e 0c          	mov    rdi,QWORD PTR [rsi+0xc]
   1400035b5:	44 8b 6e 14          	mov    r13d,DWORD PTR [rsi+0x14]
   1400035b9:	44 8b 76 18          	mov    r14d,DWORD PTR [rsi+0x18]
   1400035bd:	44 0f b7 66 1c       	movzx  r12d,WORD PTR [rsi+0x1c]
   1400035c2:	0f b7 4e 0a          	movzx  ecx,WORD PTR [rsi+0xa]
   1400035c6:	66 89 8d e8 05 00 00 	mov    WORD PTR [rbp+0x5e8],cx
   1400035cd:	48 8b 4e 02          	mov    rcx,QWORD PTR [rsi+0x2]
   1400035d1:	48 89 8d e0 05 00 00 	mov    QWORD PTR [rbp+0x5e0],rcx
   1400035d8:	66 83 f8 01          	cmp    ax,0x1
   1400035dc:	75 2a                	jne    0x140003608
   1400035de:	6a 17                	push   0x17
   1400035e0:	59                   	pop    rcx
   1400035e1:	e8 7a eb 06 00       	call   0x140072160
   1400035e6:	48 89 d3             	mov    rbx,rdx
   1400035e9:	a8 01                	test   al,0x1
   1400035eb:	0f 85 c5 00 00 00    	jne    0x1400036b6
   1400035f1:	66 41 c1 c4 08       	rol    r12w,0x8
   1400035f6:	66 b8 17 00          	mov    ax,0x17
   1400035fa:	48 8b 8d e2 05 00 00 	mov    rcx,QWORD PTR [rbp+0x5e2]
   140003601:	49 89 df             	mov    r15,rbx
   140003604:	6a 1c                	push   0x1c
   140003606:	eb 32                	jmp    0x14000363a
   140003608:	6a 02                	push   0x2
   14000360a:	59                   	pop    rcx
   14000360b:	e8 50 eb 06 00       	call   0x140072160
   140003610:	48 89 d3             	mov    rbx,rdx
   140003613:	a8 01                	test   al,0x1
   140003615:	0f 85 9b 00 00 00    	jne    0x1400036b6
   14000361b:	44 0f b7 a5 e4 05 00 	movzx  r12d,WORD PTR [rbp+0x5e4]
   140003622:	00 
   140003623:	66 41 c1 c4 08       	rol    r12w,0x8
   140003628:	66 b8 02 00          	mov    ax,0x2
   14000362c:	44 8b ad e0 05 00 00 	mov    r13d,DWORD PTR [rbp+0x5e0]
   140003633:	49 89 df             	mov    r15,rbx
   140003636:	31 c9                	xor    ecx,ecx
   140003638:	6a 10                	push   0x10
   14000363a:	41 58                	pop    r8
   14000363c:	66 89 85 e0 01 00 00 	mov    WORD PTR [rbp+0x1e0],ax
   140003643:	66 44 89 a5 e2 01 00 	mov    WORD PTR [rbp+0x1e2],r12w
   14000364a:	00 
   14000364b:	44 89 ad e4 01 00 00 	mov    DWORD PTR [rbp+0x1e4],r13d
   140003652:	48 89 8d e8 01 00 00 	mov    QWORD PTR [rbp+0x1e8],rcx
   140003659:	48 89 bd f0 01 00 00 	mov    QWORD PTR [rbp+0x1f0],rdi
   140003660:	44 89 b5 f8 01 00 00 	mov    DWORD PTR [rbp+0x1f8],r14d
   140003667:	4c 89 f9             	mov    rcx,r15
   14000366a:	4c 8d a5 e0 01 00 00 	lea    r12,[rbp+0x1e0]
   140003671:	4c 89 e2             	mov    rdx,r12
   140003674:	ff 15 26 4c 0c 00    	call   QWORD PTR [rip+0xc4c26]        # 0x1400c82a0
   14000367a:	83 f8 ff             	cmp    eax,0xffffffff
   14000367d:	74 17                	je     0x140003696
   14000367f:	4c 89 f9             	mov    rcx,r15
   140003682:	ba 80 00 00 00       	mov    edx,0x80
   140003687:	ff 15 0b 4c 0c 00    	call   QWORD PTR [rip+0xc4c0b]        # 0x1400c8298
   14000368d:	83 f8 ff             	cmp    eax,0xffffffff
   140003690:	0f 85 84 00 00 00    	jne    0x14000371a
   140003696:	ff 15 f4 4b 0c 00    	call   QWORD PTR [rip+0xc4bf4]        # 0x1400c8290
   14000369c:	89 c3                	mov    ebx,eax
   14000369e:	48 c1 e3 20          	shl    rbx,0x20
   1400036a2:	48 83 cb 02          	or     rbx,0x2
   1400036a6:	4c 89 f9             	mov    rcx,r15
   1400036a9:	ff 15 d9 4b 0c 00    	call   QWORD PTR [rip+0xc4bd9]        # 0x1400c8288
   1400036af:	4c 8b bd d0 0b 00 00 	mov    r15,QWORD PTR [rbp+0xbd0]
   1400036b6:	48 8d 8d c0 08 00 00 	lea    rcx,[rbp+0x8c0]
   1400036bd:	e8 23 a3 07 00       	call   0x14007d9e5
   1400036c2:	48 89 9d c0 08 00 00 	mov    QWORD PTR [rbp+0x8c0],rbx
   1400036c9:	48 83 c6 20          	add    rsi,0x20
   1400036cd:	e9 c9 fe ff ff       	jmp    0x14000359b
   1400036d2:	48 8b b5 28 0b 00 00 	mov    rsi,QWORD PTR [rbp+0xb28]
   1400036d9:	4c 89 e1             	mov    rcx,r12
   1400036dc:	48 8d 15 72 5a 0c 00 	lea    rdx,[rip+0xc5a72]        # 0x1400c9155
   1400036e3:	e8 ab 1d 00 00       	call   0x140005493
   1400036e8:	48 8b 8d 20 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xb20]
   1400036ef:	48 89 f2             	mov    rdx,rsi
   1400036f2:	e8 43 34 01 00       	call   0x140016b3a
   1400036f7:	48 8b 85 f0 01 00 00 	mov    rax,QWORD PTR [rbp+0x1f0]
   1400036fe:	48 89 85 30 0b 00 00 	mov    QWORD PTR [rbp+0xb30],rax
   140003705:	f3 0f 6f 85 e0 01 00 	movdqu xmm0,XMMWORD PTR [rbp+0x1e0]
   14000370c:	00 
   14000370d:	66 0f 7f 85 20 0b 00 	movdqa XMMWORD PTR [rbp+0xb20],xmm0
   140003714:	00 
   140003715:	e9 9c 0a 00 00       	jmp    0x1400041b6
   14000371a:	48 8b bd b0 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xbb0]
   140003721:	48 89 f9             	mov    rcx,rdi
   140003724:	48 8b 95 c8 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xbc8]
   14000372b:	e8 b2 d0 07 00       	call   0x1400807e2
   140003730:	4c 89 fe             	mov    rsi,r15
   140003733:	4c 8d b5 e0 05 00 00 	lea    r14,[rbp+0x5e0]
   14000373a:	48 8d 8d c0 08 00 00 	lea    rcx,[rbp+0x8c0]
   140003741:	e8 9f a2 07 00       	call   0x14007d9e5
   140003746:	48 85 ff             	test   rdi,rdi
   140003749:	0f 84 2a 18 00 00    	je     0x140004f79
   14000374f:	44 0f 29 8d 50 02 00 	movaps XMMWORD PTR [rbp+0x250],xmm9
   140003756:	00 
   140003757:	44 0f 29 8d 40 02 00 	movaps XMMWORD PTR [rbp+0x240],xmm9
   14000375e:	00 
   14000375f:	44 0f 29 8d 30 02 00 	movaps XMMWORD PTR [rbp+0x230],xmm9
   140003766:	00 
   140003767:	44 0f 29 8d 20 02 00 	movaps XMMWORD PTR [rbp+0x220],xmm9
   14000376e:	00 
   14000376f:	44 0f 29 8d 10 02 00 	movaps XMMWORD PTR [rbp+0x210],xmm9
   140003776:	00 
   140003777:	44 0f 29 8d 00 02 00 	movaps XMMWORD PTR [rbp+0x200],xmm9
   14000377e:	00 
   14000377f:	44 0f 29 8d f0 01 00 	movaps XMMWORD PTR [rbp+0x1f0],xmm9
   140003786:	00 
   140003787:	44 0f 29 8d e0 01 00 	movaps XMMWORD PTR [rbp+0x1e0],xmm9
   14000378e:	00 
   14000378f:	c7 85 e0 05 00 00 80 	mov    DWORD PTR [rbp+0x5e0],0x80
   140003796:	00 00 00 
   140003799:	48 89 f1             	mov    rcx,rsi
   14000379c:	4c 89 e2             	mov    rdx,r12
   14000379f:	4d 89 f0             	mov    r8,r14
   1400037a2:	ff 15 88 4a 0c 00    	call   QWORD PTR [rip+0xc4a88]        # 0x1400c8230
   1400037a8:	83 f8 ff             	cmp    eax,0xffffffff
   1400037ab:	0f 84 48 18 00 00    	je     0x140004ff9
   1400037b1:	8b 85 e0 05 00 00    	mov    eax,DWORD PTR [rbp+0x5e0]
   1400037b7:	0f b7 8d e0 01 00 00 	movzx  ecx,WORD PTR [rbp+0x1e0]
   1400037be:	83 f9 17             	cmp    ecx,0x17
   1400037c1:	74 2b                	je     0x1400037ee
   1400037c3:	83 f9 02             	cmp    ecx,0x2
   1400037c6:	0f 85 99 18 00 00    	jne    0x140005065
   1400037cc:	83 f8 0f             	cmp    eax,0xf
   1400037cf:	77 26                	ja     0x1400037f7
   1400037d1:	e9 58 17 00 00       	jmp    0x140004f2e
   1400037d6:	4c 89 e1             	mov    rcx,r12
   1400037d9:	e8 f3 da 07 00       	call   0x1400812d1
   1400037de:	4c 89 e1             	mov    rcx,r12
   1400037e1:	e8 51 dc 07 00       	call   0x140081437
   1400037e6:	6a 20                	push   0x20
   1400037e8:	5b                   	pop    rbx
   1400037e9:	e9 4e 03 00 00       	jmp    0x140003b3c
   1400037ee:	83 f8 1b             	cmp    eax,0x1b
   1400037f1:	0f 86 49 17 00 00    	jbe    0x140004f40
   1400037f7:	0f b7 bd e2 01 00 00 	movzx  edi,WORD PTR [rbp+0x1e2]
   1400037fe:	66 c1 c7 08          	rol    di,0x8
   140003802:	66 89 bd d8 0a 00 00 	mov    WORD PTR [rbp+0xad8],di
   140003809:	6a 08                	push   0x8
   14000380b:	59                   	pop    rcx
   14000380c:	6a 18                	push   0x18
   14000380e:	5a                   	pop    rdx
   14000380f:	e8 50 42 07 00       	call   0x140077a64
   140003814:	48 89 c1             	mov    rcx,rax
   140003817:	6a 01                	push   0x1
   140003819:	58                   	pop    rax
   14000381a:	48 89 01             	mov    QWORD PTR [rcx],rax
   14000381d:	48 89 41 08          	mov    QWORD PTR [rcx+0x8],rax
   140003821:	c6 41 10 00          	mov    BYTE PTR [rcx+0x10],0x0
   140003825:	48 89 8d d0 0b 00 00 	mov    QWORD PTR [rbp+0xbd0],rcx
   14000382c:	f0 48 ff 01          	lock inc QWORD PTR [rcx]
   140003830:	0f 8e 60 18 00 00    	jle    0x140005096
   140003836:	66 89 bd b0 0b 00 00 	mov    WORD PTR [rbp+0xbb0],di
   14000383d:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
   140003844:	00 00 80 
   140003847:	48 89 85 f0 01 00 00 	mov    QWORD PTR [rbp+0x1f0],rax
   14000384e:	48 83 a5 e0 01 00 00 	and    QWORD PTR [rbp+0x1e0],0x0
   140003855:	00 
   140003856:	c6 85 08 02 00 00 00 	mov    BYTE PTR [rbp+0x208],0x0
   14000385d:	4c 8b 3d e4 09 14 00 	mov    r15,QWORD PTR [rip+0x1409e4]        # 0x140144248
   140003864:	4d 85 ff             	test   r15,r15
   140003867:	74 0c                	je     0x140003875
   140003869:	49 ff cf             	dec    r15
   14000386c:	6a 30                	push   0x30
   14000386e:	41 5e                	pop    r14
   140003870:	e9 8a 00 00 00       	jmp    0x1400038ff
   140003875:	4c 89 f1             	mov    rcx,r14
   140003878:	e8 ef f8 05 00       	call   0x14006316c
   14000387d:	48 8b 9d e0 05 00 00 	mov    rbx,QWORD PTR [rbp+0x5e0]
   140003884:	41 bf 00 00 20 00    	mov    r15d,0x200000
   14000388a:	48 89 d8             	mov    rax,rbx
   14000388d:	48 f7 d8             	neg    rax
   140003890:	6a 30                	push   0x30
   140003892:	41 5e                	pop    r14
   140003894:	70 5e                	jo     0x1400038f4
   140003896:	4c 8b ad e8 05 00 00 	mov    r13,QWORD PTR [rbp+0x5e8]
   14000389d:	4c 8b 85 f0 05 00 00 	mov    r8,QWORD PTR [rbp+0x5f0]
   1400038a4:	48 8d bd 48 0a 00 00 	lea    rdi,[rbp+0xa48]
   1400038ab:	48 89 f9             	mov    rcx,rdi
   1400038ae:	4c 89 ea             	mov    rdx,r13
   1400038b1:	e8 aa 3f 00 00       	call   0x140007860
   1400038b6:	83 bd 48 0a 00 00 01 	cmp    DWORD PTR [rbp+0xa48],0x1
   1400038bd:	74 2a                	je     0x1400038e9
   1400038bf:	48 8b 95 50 0a 00 00 	mov    rdx,QWORD PTR [rbp+0xa50]
   1400038c6:	4c 8b 85 58 0a 00 00 	mov    r8,QWORD PTR [rbp+0xa58]
   1400038cd:	48 89 f9             	mov    rcx,rdi
   1400038d0:	6a 0a                	push   0xa
   1400038d2:	41 59                	pop    r9
   1400038d4:	e8 9a 72 07 00       	call   0x14007ab73
   1400038d9:	80 bd 48 0a 00 00 00 	cmp    BYTE PTR [rbp+0xa48],0x0
   1400038e0:	75 07                	jne    0x1400038e9
   1400038e2:	4c 8b bd 50 0a 00 00 	mov    r15,QWORD PTR [rbp+0xa50]
   1400038e9:	48 89 d9             	mov    rcx,rbx
   1400038ec:	4c 89 ea             	mov    rdx,r13
   1400038ef:	e8 97 25 07 00       	call   0x140075e8b
   1400038f4:	49 8d 47 01          	lea    rax,[r15+0x1]
   1400038f8:	48 89 05 49 09 14 00 	mov    QWORD PTR [rip+0x140949],rax        # 0x140144248
   1400038ff:	e8 dc ea 06 00       	call   0x1400723e0
   140003904:	48 89 c1             	mov    rcx,rax
   140003907:	48 8d 95 f0 01 00 00 	lea    rdx,[rbp+0x1f0]
   14000390e:	e8 fd f0 06 00       	call   0x140072a10
   140003913:	48 89 c3             	mov    rbx,rax
   140003916:	48 89 85 48 0a 00 00 	mov    QWORD PTR [rbp+0xa48],rax
   14000391d:	48 8d 8d c0 08 00 00 	lea    rcx,[rbp+0x8c0]
   140003924:	48 8d 95 48 0a 00 00 	lea    rdx,[rbp+0xa48]
   14000392b:	e8 b0 fa 06 00       	call   0x1400733e0
   140003930:	6a 08                	push   0x8
   140003932:	5f                   	pop    rdi
   140003933:	48 89 f9             	mov    rcx,rdi
   140003936:	4c 89 f2             	mov    rdx,r14
   140003939:	e8 26 41 07 00       	call   0x140077a64
   14000393e:	49 89 c5             	mov    r13,rax
   140003941:	6a 01                	push   0x1
   140003943:	58                   	pop    rax
   140003944:	49 89 45 00          	mov    QWORD PTR [r13+0x0],rax
   140003948:	49 89 45 08          	mov    QWORD PTR [r13+0x8],rax
   14000394c:	45 0f 11 4d 10       	movups XMMWORD PTR [r13+0x10],xmm9
   140003951:	4c 89 ad e0 05 00 00 	mov    QWORD PTR [rbp+0x5e0],r13
   140003958:	f0 49 ff 45 00       	lock inc QWORD PTR [r13+0x0]
   14000395d:	0f 8e 33 17 00 00    	jle    0x140005096
   140003963:	48 89 f9             	mov    rcx,rdi
   140003966:	6a 40                	push   0x40
   140003968:	5a                   	pop    rdx
   140003969:	e8 f6 40 07 00       	call   0x140077a64
   14000396e:	49 89 c6             	mov    r14,rax
   140003971:	f3 0f 6f 85 c0 08 00 	movdqu xmm0,XMMWORD PTR [rbp+0x8c0]
   140003978:	00 
   140003979:	f3 0f 6f 8d d0 08 00 	movdqu xmm1,XMMWORD PTR [rbp+0x8d0]
   140003980:	00 
   140003981:	f3 0f 7f 00          	movdqu XMMWORD PTR [rax],xmm0
   140003985:	f3 0f 7f 48 10       	movdqu XMMWORD PTR [rax+0x10],xmm1
   14000398a:	4c 89 68 20          	mov    QWORD PTR [rax+0x20],r13
   14000398e:	48 89 70 28          	mov    QWORD PTR [rax+0x28],rsi
   140003992:	48 8b 85 d0 0b 00 00 	mov    rax,QWORD PTR [rbp+0xbd0]
   140003999:	49 89 46 30          	mov    QWORD PTR [r14+0x30],rax
   14000399d:	48 8d 05 f8 dd 07 00 	lea    rax,[rip+0x7ddf8]        # 0x14008179c
   1400039a4:	49 89 46 38          	mov    QWORD PTR [r14+0x38],rax
   1400039a8:	f0 48 ff 03          	lock inc QWORD PTR [rbx]
   1400039ac:	0f 8e e4 16 00 00    	jle    0x140005096
   1400039b2:	48 89 f9             	mov    rcx,rdi
   1400039b5:	6a 18                	push   0x18
   1400039b7:	5a                   	pop    rdx
   1400039b8:	e8 a7 40 07 00       	call   0x140077a64
   1400039bd:	48 89 18             	mov    QWORD PTR [rax],rbx
   1400039c0:	4c 89 70 08          	mov    QWORD PTR [rax+0x8],r14
   1400039c4:	48 8d 0d b5 48 0f 00 	lea    rcx,[rip+0xf48b5]        # 0x1400f8280
   1400039cb:	48 89 48 10          	mov    QWORD PTR [rax+0x10],rcx
   1400039cf:	4c 89 f9             	mov    rcx,r15
   1400039d2:	48 89 c2             	mov    rdx,rax
   1400039d5:	e8 56 ea 06 00       	call   0x140072430
   1400039da:	48 89 d6             	mov    rsi,rdx
   1400039dd:	a8 01                	test   al,0x1
   1400039df:	0f 85 24 16 00 00    	jne    0x140005009
   1400039e5:	48 89 9d 60 0b 00 00 	mov    QWORD PTR [rbp+0xb60],rbx
   1400039ec:	4c 89 ad 68 0b 00 00 	mov    QWORD PTR [rbp+0xb68],r13
   1400039f3:	48 89 b5 70 0b 00 00 	mov    QWORD PTR [rbp+0xb70],rsi
   1400039fa:	48 89 f1             	mov    rcx,rsi
   1400039fd:	ff 15 45 46 0c 00    	call   QWORD PTR [rip+0xc4645]        # 0x1400c8048
   140003a03:	48 8d 8d 60 0b 00 00 	lea    rcx,[rbp+0xb60]
   140003a0a:	e8 f2 d2 07 00       	call   0x140080d01
   140003a0f:	48 8d 8d 68 0b 00 00 	lea    rcx,[rbp+0xb68]
   140003a16:	e8 5f d5 07 00       	call   0x140080f7a
   140003a1b:	4c 8d b5 e0 05 00 00 	lea    r14,[rbp+0x5e0]
   140003a22:	6a 08                	push   0x8
   140003a24:	5e                   	pop    rsi
   140003a25:	48 8d 85 d8 0a 00 00 	lea    rax,[rbp+0xad8]
   140003a2c:	48 89 85 e0 05 00 00 	mov    QWORD PTR [rbp+0x5e0],rax
   140003a33:	48 8d 05 a6 79 00 00 	lea    rax,[rip+0x79a6]        # 0x14000b3e0
   140003a3a:	48 89 85 e8 05 00 00 	mov    QWORD PTR [rbp+0x5e8],rax
   140003a41:	4c 89 e1             	mov    rcx,r12
   140003a44:	48 8d 15 95 4b 0f 00 	lea    rdx,[rip+0xf4b95]        # 0x1400f85e0
   140003a4b:	4d 89 f0             	mov    r8,r14
   140003a4e:	e8 ab d7 07 00       	call   0x1400811fe
   140003a53:	4c 89 e1             	mov    rcx,r12
   140003a56:	e8 95 cd 07 00       	call   0x1400807f0
   140003a5b:	48 89 85 c0 08 00 00 	mov    QWORD PTR [rbp+0x8c0],rax
   140003a62:	48 89 95 c8 08 00 00 	mov    QWORD PTR [rbp+0x8c8],rdx
   140003a69:	48 83 f8 01          	cmp    rax,0x1
   140003a6d:	75 52                	jne    0x140003ac1
   140003a6f:	48 89 95 e0 05 00 00 	mov    QWORD PTR [rbp+0x5e0],rdx
   140003a76:	48 89 d1             	mov    rcx,rdx
   140003a79:	e8 87 2a 07 00       	call   0x140076505
   140003a7e:	3c 02                	cmp    al,0x2
   140003a80:	75 0e                	jne    0x140003a90
   140003a82:	31 c9                	xor    ecx,ecx
   140003a84:	ba 00 e1 f5 05       	mov    edx,0x5f5e100
   140003a89:	e8 42 0b 07 00       	call   0x1400745d0
   140003a8e:	eb 24                	jmp    0x140003ab4
   140003a90:	4c 89 b5 e0 01 00 00 	mov    QWORD PTR [rbp+0x1e0],r14
   140003a97:	48 8d 05 12 ee 06 00 	lea    rax,[rip+0x6ee12]        # 0x1400728b0
   140003a9e:	48 89 85 e8 01 00 00 	mov    QWORD PTR [rbp+0x1e8],rax
   140003aa5:	48 8d 0d 41 4b 0f 00 	lea    rcx,[rip+0xf4b41]        # 0x1400f85ed
   140003aac:	4c 89 e2             	mov    rdx,r12
   140003aaf:	e8 5c 08 07 00       	call   0x140074310
   140003ab4:	4c 89 f1             	mov    rcx,r14
   140003ab7:	e8 2e 1f 07 00       	call   0x1400759ea
   140003abc:	e9 64 ff ff ff       	jmp    0x140003a25
   140003ac1:	48 8d 8d c0 08 00 00 	lea    rcx,[rbp+0x8c0]
   140003ac8:	e8 03 1f 07 00       	call   0x1400759d0
   140003acd:	4c 89 e1             	mov    rcx,r12
   140003ad0:	e8 fc d7 07 00       	call   0x1400812d1
   140003ad5:	48 89 f1             	mov    rcx,rsi
   140003ad8:	6a 20                	push   0x20
   140003ada:	5b                   	pop    rbx
   140003adb:	48 89 da             	mov    rdx,rbx
   140003ade:	e8 81 3f 07 00       	call   0x140077a64
   140003ae3:	48 89 c6             	mov    rsi,rax
   140003ae6:	6a 01                	push   0x1
   140003ae8:	58                   	pop    rax
   140003ae9:	48 89 06             	mov    QWORD PTR [rsi],rax
   140003aec:	48 89 46 08          	mov    QWORD PTR [rsi+0x8],rax
   140003af0:	48 8b 85 d0 0b 00 00 	mov    rax,QWORD PTR [rbp+0xbd0]
   140003af7:	48 89 46 10          	mov    QWORD PTR [rsi+0x10],rax
   140003afb:	0f b7 85 b0 0b 00 00 	movzx  eax,WORD PTR [rbp+0xbb0]
   140003b02:	66 89 46 18          	mov    WORD PTR [rsi+0x18],ax
   140003b06:	48 8d 8d b8 02 00 00 	lea    rcx,[rbp+0x2b8]
   140003b0d:	e8 de 28 04 00       	call   0x1400463f0
   140003b12:	48 89 b5 b8 02 00 00 	mov    QWORD PTR [rbp+0x2b8],rsi
   140003b19:	48 8d 05 a8 60 10 00 	lea    rax,[rip+0x1060a8]        # 0x140109bc8
   140003b20:	48 89 85 c0 02 00 00 	mov    QWORD PTR [rbp+0x2c0],rax
   140003b27:	b9 00 01 00 00       	mov    ecx,0x100
   140003b2c:	4c 89 f7             	mov    rdi,r14
   140003b2f:	4c 89 e6             	mov    rsi,r12
   140003b32:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
   140003b34:	4c 89 f1             	mov    rcx,r14
   140003b37:	e8 fb d8 07 00       	call   0x140081437
   140003b3c:	48 89 85 e0 01 00 00 	mov    QWORD PTR [rbp+0x1e0],rax
   140003b43:	48 89 95 e8 01 00 00 	mov    QWORD PTR [rbp+0x1e8],rdx
   140003b4a:	48 89 c1             	mov    rcx,rax
   140003b4d:	e8 6d d7 07 00       	call   0x1400812bf
   140003b52:	48 89 c6             	mov    rsi,rax
   140003b55:	48 89 d7             	mov    rdi,rdx
   140003b58:	48 8d 8d e8 06 00 00 	lea    rcx,[rbp+0x6e8]
   140003b5f:	48 8d 15 9a 4f 0f 00 	lea    rdx,[rip+0xf4f9a]        # 0x1400f8b00
   140003b66:	6a 04                	push   0x4
   140003b68:	41 58                	pop    r8
   140003b6a:	e8 1a 1c 07 00       	call   0x140075789
   140003b6f:	48 8d 8d 00 07 00 00 	lea    rcx,[rbp+0x700]
   140003b76:	48 8d 15 b8 55 0c 00 	lea    rdx,[rip+0xc55b8]        # 0x1400c9135
   140003b7d:	49 89 d8             	mov    r8,rbx
   140003b80:	e8 04 1c 07 00       	call   0x140075789
   140003b85:	48 89 b5 40 07 00 00 	mov    QWORD PTR [rbp+0x740],rsi
   140003b8c:	48 89 bd 48 07 00 00 	mov    QWORD PTR [rbp+0x748],rdi
   140003b93:	48 83 a5 18 07 00 00 	and    QWORD PTR [rbp+0x718],0x0
   140003b9a:	00 
   140003b9b:	48 c7 85 20 07 00 00 	mov    QWORD PTR [rbp+0x720],0x8
   140003ba2:	08 00 00 00 
   140003ba6:	48 83 a5 28 07 00 00 	and    QWORD PTR [rbp+0x728],0x0
   140003bad:	00 
   140003bae:	bf 00 ca 9a 3b       	mov    edi,0x3b9aca00
   140003bb3:	89 bd 38 07 00 00    	mov    DWORD PTR [rbp+0x738],edi
   140003bb9:	4c 89 e1             	mov    rcx,r12
   140003bbc:	e8 85 d6 07 00       	call   0x140081246
   140003bc1:	48 8b 85 a8 0b 00 00 	mov    rax,QWORD PTR [rbp+0xba8]
   140003bc8:	48 89 85 e0 0a 00 00 	mov    QWORD PTR [rbp+0xae0],rax
   140003bcf:	48 8b 85 c0 0b 00 00 	mov    rax,QWORD PTR [rbp+0xbc0]
   140003bd6:	48 89 85 e8 0a 00 00 	mov    QWORD PTR [rbp+0xae8],rax
   140003bdd:	48 b8 03 00 00 00 00 	movabs rax,0x8000000000000003
   140003be4:	00 00 80 
   140003be7:	48 89 85 d8 0a 00 00 	mov    QWORD PTR [rbp+0xad8],rax
   140003bee:	48 c7 44 24 20 04 00 	mov    QWORD PTR [rsp+0x20],0x4
   140003bf5:	00 00 
   140003bf7:	4c 89 e1             	mov    rcx,r12
   140003bfa:	48 8d 15 66 4f 10 00 	lea    rdx,[rip+0x104f66]        # 0x140108b67
   140003c01:	6a 0f                	push   0xf
   140003c03:	41 58                	pop    r8
   140003c05:	4c 8d 0d 6a 4f 10 00 	lea    r9,[rip+0x104f6a]        # 0x140108b76
   140003c0c:	e8 68 13 08 00       	call   0x140084f79
   140003c11:	48 8d 8d 18 07 00 00 	lea    rcx,[rbp+0x718]
   140003c18:	4c 89 e2             	mov    rdx,r12
   140003c1b:	e8 ba 13 08 00       	call   0x140084fda
   140003c20:	8b 85 38 07 00 00    	mov    eax,DWORD PTR [rbp+0x738]
   140003c26:	48 8b b5 40 07 00 00 	mov    rsi,QWORD PTR [rbp+0x740]
   140003c2d:	89 c3                	mov    ebx,eax
   140003c2f:	39 f8                	cmp    eax,edi
   140003c31:	75 06                	jne    0x140003c39
   140003c33:	8b 9e b0 00 00 00    	mov    ebx,DWORD PTR [rsi+0xb0]
   140003c39:	39 fb                	cmp    ebx,edi
   140003c3b:	0f 84 9a 00 00 00    	je     0x140003cdb
   140003c41:	48 8d 8e a8 00 00 00 	lea    rcx,[rsi+0xa8]
   140003c48:	41 bf 00 ca 9a 3b    	mov    r15d,0x3b9aca00
   140003c4e:	44 39 f8             	cmp    eax,r15d
   140003c51:	48 8d 85 30 07 00 00 	lea    rax,[rbp+0x730]
   140003c58:	48 0f 45 c8          	cmovne rcx,rax
   140003c5c:	48 8b 39             	mov    rdi,QWORD PTR [rcx]
   140003c5f:	e8 2c e2 06 00       	call   0x140071e90
   140003c64:	48 89 c1             	mov    rcx,rax
   140003c67:	49 89 f8             	mov    r8,rdi
   140003c6a:	41 89 d9             	mov    r9d,ebx
   140003c6d:	e8 9e d7 06 00       	call   0x140071410
   140003c72:	44 39 fa             	cmp    edx,r15d
   140003c75:	75 5b                	jne    0x140003cd2
   140003c77:	48 8d 8d 58 07 00 00 	lea    rcx,[rbp+0x758]
   140003c7e:	48 8d 15 f5 4e 10 00 	lea    rdx,[rip+0x104ef5]        # 0x140108b7a
   140003c85:	6a 1b                	push   0x1b
   140003c87:	41 58                	pop    r8
   140003c89:	e8 fb 1a 07 00       	call   0x140075789
   140003c8e:	48 b8 00 00 00 00 00 	movabs rax,0x8000000000000000
   140003c95:	00 00 80 
   140003c98:	48 89 85 50 07 00 00 	mov    QWORD PTR [rbp+0x750],rax
   140003c9f:	48 89 85 70 07 00 00 	mov    QWORD PTR [rbp+0x770],rax
   140003ca6:	48 83 a5 c8 07 00 00 	and    QWORD PTR [rbp+0x7c8],0x0
   140003cad:	00 
   140003cae:	c6 85 d8 07 00 00 08 	mov    BYTE PTR [rbp+0x7d8],0x8
   140003cb5:	48 8d 8d d8 0a 00 00 	lea    rcx,[rbp+0xad8]
   140003cbc:	e8 9c 1f 08 00       	call   0x140085c5d
   140003cc1:	48 8d 8d e8 06 00 00 	lea    rcx,[rbp+0x6e8]
   140003cc8:	e8 d0 1f 08 00       	call   0x140085c9d
   140003ccd:	e9 70 03 00 00       	jmp    0x140004042
   140003cd2:	89 d7                	mov    edi,edx
   140003cd4:	48 89 85 90 08 00 00 	mov    QWORD PTR [rbp+0x890],rax
   140003cdb:	89 bd 98 08 00 00    	mov    DWORD PTR [rbp+0x898],edi
   140003ce1:	f3 0f 6f 85 d8 0a 00 	movdqu xmm0,XMMWORD PTR [rbp+0xad8]
   140003ce8:	00 
   140003ce9:	f3 0f 6f 8d e8 0a 00 	movdqu xmm1,XMMWORD PTR [rbp+0xae8]
   140003cf0:	00 
   140003cf1:	66 0f 7f 85 60 0b 00 	movdqa XMMWORD PTR [rbp+0xb60],xmm0
   140003cf8:	00 
   140003cf9:	66 0f 7f 8d 70 0b 00 	movdqa XMMWORD PTR [rbp+0xb70],xmm1
   140003d00:	00 
   140003d01:	48 8b 85 f8 0a 00 00 	mov    rax,QWORD PTR [rbp+0xaf8]
   140003d08:	48 89 85 80 0b 00 00 	mov    QWORD PTR [rbp+0xb80],rax
   140003d0f:	48 8d 85 90 08 00 00 	lea    rax,[rbp+0x890]
   140003d16:	48 89 85 88 0b 00 00 	mov    QWORD PTR [rbp+0xb88],rax
   140003d1d:	48 8b 95 48 07 00 00 	mov    rdx,QWORD PTR [rbp+0x748]
   140003d24:	48 83 7a 20 00       	cmp    QWORD PTR [rdx+0x20],0x0
   140003d29:	0f 84 de 00 00 00    	je     0x140003e0d
   140003d2f:	48 89 f1             	mov    rcx,rsi
   140003d32:	e8 88 d5 07 00       	call   0x1400812bf
   140003d37:	48 89 85 10 0a 00 00 	mov    QWORD PTR [rbp+0xa10],rax
   140003d3e:	48 89 95 18 0a 00 00 	mov    QWORD PTR [rbp+0xa18],rdx
   140003d45:	48 8b 42 18          	mov    rax,QWORD PTR [rdx+0x18]
   140003d49:	48 8b 4a 20          	mov    rcx,QWORD PTR [rdx+0x20]
   140003d4d:	48 c1 e1 04          	shl    rcx,0x4
   140003d51:	48 01 c1             	add    rcx,rax
   140003d54:	48 89 85 80 08 00 00 	mov    QWORD PTR [rbp+0x880],rax
   140003d5b:	48 89 8d 88 08 00 00 	mov    QWORD PTR [rbp+0x888],rcx
   140003d62:	6a 08                	push   0x8
   140003d64:	59                   	pop    rcx
   140003d65:	6a 30                	push   0x30
   140003d67:	5a                   	pop    rdx
   140003d68:	e8 f7 3c 07 00       	call   0x140077a64
   140003d6d:	48 89 c3             	mov    rbx,rax
   140003d70:	66 0f 6f 85 60 0b 00 	movdqa xmm0,XMMWORD PTR [rbp+0xb60]
   140003d77:	00 
   140003d78:	66 0f 6f 8d 70 0b 00 	movdqa xmm1,XMMWORD PTR [rbp+0xb70]
   140003d7f:	00 
   140003d80:	66 0f 6f 95 80 0b 00 	movdqa xmm2,XMMWORD PTR [rbp+0xb80]
   140003d87:	00 
   140003d88:	f3 0f 7f 00          	movdqu XMMWORD PTR [rax],xmm0
   140003d8c:	f3 0f 7f 48 10       	movdqu XMMWORD PTR [rax+0x10],xmm1
   140003d91:	f3 0f 7f 50 20       	movdqu XMMWORD PTR [rax+0x20],xmm2
   140003d96:	48 8d 85 80 08 00 00 	lea    rax,[rbp+0x880]
   140003d9d:	48 89 85 60 08 00 00 	mov    QWORD PTR [rbp+0x860],rax
   140003da4:	48 8d 0d ed 4d 10 00 	lea    rcx,[rip+0x104ded]        # 0x140108b98
   140003dab:	48 89 8d 68 08 00 00 	mov    QWORD PTR [rbp+0x868],rcx
   140003db2:	48 89 9d 70 08 00 00 	mov    QWORD PTR [rbp+0x870],rbx
   140003db9:	48 8d 0d 10 4e 10 00 	lea    rcx,[rip+0x104e10]        # 0x140108bd0
   140003dc0:	48 89 8d 78 08 00 00 	mov    QWORD PTR [rbp+0x878],rcx
   140003dc7:	6a 68                	push   0x68
   140003dc9:	59                   	pop    rcx
   140003dca:	4c 8d bd 48 0a 00 00 	lea    r15,[rbp+0xa48]
   140003dd1:	4c 89 ff             	mov    rdi,r15
   140003dd4:	4c 8d ad e8 06 00 00 	lea    r13,[rbp+0x6e8]
   140003ddb:	4c 89 ee             	mov    rsi,r13
   140003dde:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
   140003de0:	48 89 c1             	mov    rcx,rax
   140003de3:	e8 0b 86 08 00       	call   0x14008c3f3
   140003de8:	48 85 c0             	test   rax,rax
   140003deb:	0f 84 ae 00 00 00    	je     0x140003e9f
   140003df1:	49 89 d2             	mov    r10,rdx
   140003df4:	4c 89 e1             	mov    rcx,r12
   140003df7:	48 89 c2             	mov    rdx,rax
   140003dfa:	4d 89 f8             	mov    r8,r15
   140003dfd:	4c 8d 8d 60 08 00 00 	lea    r9,[rbp+0x860]
   140003e04:	41 ff 52 18          	call   QWORD PTR [r10+0x18]
   140003e08:	e9 af 00 00 00       	jmp    0x140003ebc
   140003e0d:	4c 89 e1             	mov    rcx,r12
   140003e10:	48 8d 95 60 0b 00 00 	lea    rdx,[rbp+0xb60]
   140003e17:	4c 8d 85 e8 06 00 00 	lea    r8,[rbp+0x6e8]
   140003e1e:	e8 ff 11 08 00       	call   0x140085022
   140003e23:	48 8b 85 e0 01 00 00 	mov    rax,QWORD PTR [rbp+0x1e0]
   140003e2a:	b9 00 01 00 00       	mov    ecx,0x100
   140003e2f:	4c 89 f7             	mov    rdi,r14
   140003e32:	48 8d b5 e8 01 00 00 	lea    rsi,[rbp+0x1e8]
   140003e39:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
   140003e3b:	0f b7 9d e8 02 00 00 	movzx  ebx,WORD PTR [rbp+0x2e8]
   140003e42:	48 8b 95 c8 0a 00 00 	mov    rdx,QWORD PTR [rbp+0xac8]
   140003e49:	8b 0a                	mov    ecx,DWORD PTR [rdx]
   140003e4b:	89 8d 48 0a 00 00    	mov    DWORD PTR [rbp+0xa48],ecx
   140003e51:	0f b7 4a 04          	movzx  ecx,WORD PTR [rdx+0x4]
   140003e55:	66 89 8d 4c 0a 00 00 	mov    WORD PTR [rbp+0xa4c],cx
   140003e5c:	48 b9 01 00 00 00 00 	movabs rcx,0x8000000000000001
   140003e63:	00 00 80 
   140003e66:	48 39 c8             	cmp    rax,rcx
   140003e69:	0f 85 9a 01 00 00    	jne    0x140004009
   140003e6f:	b9 00 01 00 00       	mov    ecx,0x100
   140003e74:	48 8d bd c0 08 00 00 	lea    rdi,[rbp+0x8c0]
   140003e7b:	4c 89 f6             	mov    rsi,r14
   140003e7e:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
   140003e80:	0f b7 85 4c 0a 00 00 	movzx  eax,WORD PTR [rbp+0xa4c]
   140003e87:	66 89 85 bc 0b 00 00 	mov    WORD PTR [rbp+0xbbc],ax
   140003e8e:	8b 85 48 0a 00 00    	mov    eax,DWORD PTR [rbp+0xa48]
   140003e94:	89 85 b8 0b 00 00    	mov    DWORD PTR [rbp+0xbb8],eax
   140003e9a:	e9 a0 00 00 00       	jmp    0x140003f3f
   140003e9f:	4c 89 e1             	mov    rcx,r12
   140003ea2:	48 89 da             	mov    rdx,rbx
   140003ea5:	4d 89 e8             	mov    r8,r13
   140003ea8:	e8 30 85 08 00       	call   0x14008c3dd
   140003ead:	48 89 d9             	mov    rcx,rbx
   140003eb0:	6a 08                	push   0x8
   140003eb2:	5a                   	pop    rdx
   140003eb3:	6a 30                	push   0x30
   140003eb5:	41 58                	pop    r8
   140003eb7:	e8 f2 d4 ff ff       	call   0x1400013ae
   140003ebc:	48 8b 85 e0 01 00 00 	mov    rax,QWORD PTR [rbp+0x1e0]
   140003ec3:	b9 00 01 00 00       	mov    ecx,0x100
   140003ec8:	4c 89 f7             	mov    rdi,r14
   140003ecb:	48 8d b5 e8 01 00 00 	lea    rsi,[rbp+0x1e8]
   140003ed2:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
   140003ed4:	0f b7 9d e8 02 00 00 	movzx  ebx,WORD PTR [rbp+0x2e8]
   140003edb:	48 8b 95 c8 0a 00 00 	mov    rdx,QWORD PTR [rbp+0xac8]
   140003ee2:	8b 0a                	mov    ecx,DWORD PTR [rdx]
   140003ee4:	89 8d a0 0b 00 00    	mov    DWORD PTR [rbp+0xba0],ecx
   140003eea:	0f b7 4a 04          	movzx  ecx,WORD PTR [rdx+0x4]
   140003eee:	66 89 8d a4 0b 00 00 	mov    WORD PTR [rbp+0xba4],cx
   140003ef5:	48 b9 01 00 00 00 00 	movabs rcx,0x8000000000000001
   140003efc:	00 00 80 
   140003eff:	48 39 c8             	cmp    rax,rcx
   140003f02:	0f 85 84 00 00 00    	jne    0x140003f8c
   140003f08:	b9 00 01 00 00       	mov    ecx,0x100
   140003f0d:	48 8d bd c0 08 00 00 	lea    rdi,[rbp+0x8c0]
   140003f14:	4c 89 f6             	mov    rsi,r14
   140003f17:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
   140003f19:	0f b7 85 a4 0b 00 00 	movzx  eax,WORD PTR [rbp+0xba4]
   140003f20:	66 89 85 bc 0b 00 00 	mov    WORD PTR [rbp+0xbbc],ax
   140003f27:	8b 85 a0 0b 00 00    	mov    eax,DWORD PTR [rbp+0xba0]
   140003f2d:	89 85 b8 0b 00 00    	mov    DWORD PTR [rbp+0xbb8],eax
   140003f33:	48 8d 8d 10 0a 00 00 	lea    rcx,[rbp+0xa10]
   140003f3a:	e8 07 d3 07 00       	call   0x140081246
   140003f3f:	b9 00 01 00 00       	mov    ecx,0x100
   140003f44:	66 81 fb 8f 01       	cmp    bx,0x18f
   140003f49:	0f 86 84 00 00 00    	jbe    0x140003fd3
   140003f4f:	48 8d bd 50 07 00 00 	lea    rdi,[rbp+0x750]
   140003f56:	48 8d b5 c0 08 00 00 	lea    rsi,[rbp+0x8c0]
   140003f5d:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
   140003f5f:	0f b7 85 bc 0b 00 00 	movzx  eax,WORD PTR [rbp+0xbbc]
   140003f66:	48 8d 8d 57 07 00 00 	lea    rcx,[rbp+0x757]
   140003f6d:	66 89 81 ff 00 00 00 	mov    WORD PTR [rcx+0xff],ax
   140003f74:	8b 85 b8 0b 00 00    	mov    eax,DWORD PTR [rbp+0xbb8]
   140003f7a:	89 81 fb 00 00 00    	mov    DWORD PTR [rcx+0xfb],eax
   140003f80:	66 89 9d 50 08 00 00 	mov    WORD PTR [rbp+0x850],bx
   140003f87:	e9 af 00 00 00       	jmp    0x14000403b
   140003f8c:	b9 00 01 00 00       	mov    ecx,0x100
   140003f91:	48 8d bd 58 07 00 00 	lea    rdi,[rbp+0x758]
   140003f98:	4c 89 f6             	mov    rsi,r14
   140003f9b:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
   140003f9d:	0f b7 8d a4 0b 00 00 	movzx  ecx,WORD PTR [rbp+0xba4]
   140003fa4:	48 8b 95 10 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xb10]
   140003fab:	66 89 4a 04          	mov    WORD PTR [rdx+0x4],cx
   140003faf:	8b 8d a0 0b 00 00    	mov    ecx,DWORD PTR [rbp+0xba0]
   140003fb5:	89 0a                	mov    DWORD PTR [rdx],ecx
   140003fb7:	48 89 85 50 07 00 00 	mov    QWORD PTR [rbp+0x750],rax
   140003fbe:	66 89 9d 58 08 00 00 	mov    WORD PTR [rbp+0x858],bx
   140003fc5:	48 8d 8d 10 0a 00 00 	lea    rcx,[rbp+0xa10]
   140003fcc:	e8 75 d2 07 00       	call   0x140081246
   140003fd1:	eb 6f                	jmp    0x140004042
   140003fd3:	48 8d bd 58 07 00 00 	lea    rdi,[rbp+0x758]
   140003fda:	48 8d b5 c0 08 00 00 	lea    rsi,[rbp+0x8c0]
   140003fe1:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
   140003fe3:	0f b7 85 bc 0b 00 00 	movzx  eax,WORD PTR [rbp+0xbbc]
   140003fea:	48 8b 8d 10 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xb10]
   140003ff1:	66 89 41 04          	mov    WORD PTR [rcx+0x4],ax
   140003ff5:	8b 85 b8 0b 00 00    	mov    eax,DWORD PTR [rbp+0xbb8]
   140003ffb:	89 01                	mov    DWORD PTR [rcx],eax
   140003ffd:	48 b8 01 00 00 00 00 	movabs rax,0x8000000000000001
   140004004:	00 00 80 
   140004007:	eb 2b                	jmp    0x140004034
   140004009:	b9 00 01 00 00       	mov    ecx,0x100
   14000400e:	48 8d bd 58 07 00 00 	lea    rdi,[rbp+0x758]
   140004015:	4c 89 f6             	mov    rsi,r14
   140004018:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
   14000401a:	0f b7 8d 4c 0a 00 00 	movzx  ecx,WORD PTR [rbp+0xa4c]
   140004021:	48 8b 95 10 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xb10]
   140004028:	66 89 4a 04          	mov    WORD PTR [rdx+0x4],cx
   14000402c:	8b 8d 48 0a 00 00    	mov    ecx,DWORD PTR [rbp+0xa48]
   140004032:	89 0a                	mov    DWORD PTR [rdx],ecx
   140004034:	48 89 85 50 07 00 00 	mov    QWORD PTR [rbp+0x750],rax
   14000403b:	66 89 9d 58 08 00 00 	mov    WORD PTR [rbp+0x858],bx
   140004042:	83 bd 08 0b 00 00 04 	cmp    DWORD PTR [rbp+0xb08],0x4
   140004049:	0f 8f 16 0e 00 00    	jg     0x140004e65
   14000404f:	48 8d 8d 40 0b 00 00 	lea    rcx,[rbp+0xb40]
   140004056:	48 8d 15 f8 50 0c 00 	lea    rdx,[rip+0xc50f8]        # 0x1400c9155
   14000405d:	e8 31 14 00 00       	call   0x140005493
   140004062:	48 b8 01 00 00 00 00 	movabs rax,0x8000000000000001
   140004069:	00 00 80 
   14000406c:	48 39 85 50 07 00 00 	cmp    QWORD PTR [rbp+0x750],rax
   140004073:	0f 85 a8 00 00 00    	jne    0x140004121
   140004079:	b9 08 01 00 00       	mov    ecx,0x108
   14000407e:	48 8d 7d d0          	lea    rdi,[rbp-0x30]
   140004082:	48 8d b5 58 07 00 00 	lea    rsi,[rbp+0x758]
   140004089:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
   14000408b:	48 83 a5 d8 0a 00 00 	and    QWORD PTR [rbp+0xad8],0x0
   140004092:	00 
   140004093:	48 c7 85 e0 0a 00 00 	mov    QWORD PTR [rbp+0xae0],0x1
   14000409a:	01 00 00 00 
   14000409e:	48 83 a5 e8 0a 00 00 	and    QWORD PTR [rbp+0xae8],0x0
   1400040a5:	00 
   1400040a6:	48 8b bd b0 00 00 00 	mov    rdi,QWORD PTR [rbp+0xb0]
   1400040ad:	48 8b b5 b8 00 00 00 	mov    rsi,QWORD PTR [rbp+0xb8]
   1400040b4:	48 8b 4d d0          	mov    rcx,QWORD PTR [rbp-0x30]
   1400040b8:	48 8b 55 d8          	mov    rdx,QWORD PTR [rbp-0x28]
   1400040bc:	e8 ca 1d 07 00       	call   0x140075e8b
   1400040c1:	48 8b 4d 28          	mov    rcx,QWORD PTR [rbp+0x28]
   1400040c5:	48 8b 55 30          	mov    rdx,QWORD PTR [rbp+0x30]
   1400040c9:	e8 bd 1d 07 00       	call   0x140075e8b
   1400040ce:	48 8d 4d 40          	lea    rcx,[rbp+0x40]
   1400040d2:	e8 69 c5 07 00       	call   0x140080640
   1400040d7:	48 8d 4d 58          	lea    rcx,[rbp+0x58]
   1400040db:	e8 c5 c5 07 00       	call   0x1400806a5
   1400040e0:	48 89 f9             	mov    rcx,rdi
   1400040e3:	48 8d 95 d8 0a 00 00 	lea    rdx,[rbp+0xad8]
   1400040ea:	ff 56 30             	call   QWORD PTR [rsi+0x30]
   1400040ed:	48 85 c0             	test   rax,rax
   1400040f0:	0f 84 cf 00 00 00    	je     0x1400041c5
   1400040f6:	48 89 d1             	mov    rcx,rdx
   1400040f9:	e8 57 d3 ff ff       	call   0x140001455
   1400040fe:	48 89 f9             	mov    rcx,rdi
   140004101:	48 89 f2             	mov    rdx,rsi
   140004104:	e8 61 c5 07 00       	call   0x14008066a
   140004109:	48 8b 8d d8 0a 00 00 	mov    rcx,QWORD PTR [rbp+0xad8]
   140004110:	48 8b 95 e0 0a 00 00 	mov    rdx,QWORD PTR [rbp+0xae0]
   140004117:	e8 1e 2a 01 00       	call   0x140016b3a
   14000411c:	40 b6 01             	mov    sil,0x1
   14000411f:	eb 02                	jmp    0x140004123
   140004121:	31 f6                	xor    esi,esi
   140004123:	48 8b 8d 20 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xb20]
   14000412a:	48 8b 95 28 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xb28]
   140004131:	e8 04 2a 01 00       	call   0x140016b3a
   140004136:	48 8b 85 50 0b 00 00 	mov    rax,QWORD PTR [rbp+0xb50]
   14000413d:	48 89 85 30 0b 00 00 	mov    QWORD PTR [rbp+0xb30],rax
   140004144:	66 0f 6f 85 40 0b 00 	movdqa xmm0,XMMWORD PTR [rbp+0xb40]
   14000414b:	00 
   14000414c:	66 0f 7f 85 20 0b 00 	movdqa XMMWORD PTR [rbp+0xb20],xmm0
   140004153:	00 
   140004154:	40 84 f6             	test   sil,sil
   140004157:	75 0c                	jne    0x140004165
   140004159:	48 8d 8d 50 07 00 00 	lea    rcx,[rbp+0x750]
   140004160:	e8 dc d4 ff ff       	call   0x140001641
   140004165:	48 8b 8d c0 0a 00 00 	mov    rcx,QWORD PTR [rbp+0xac0]
   14000416c:	48 8b 95 a8 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xba8]
   140004173:	e8 c2 29 01 00       	call   0x140016b3a
   140004178:	48 8b 8d b0 0a 00 00 	mov    rcx,QWORD PTR [rbp+0xab0]
   14000417f:	48 8b 95 00 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xb00]
   140004186:	e8 af 29 01 00       	call   0x140016b3a
   14000418b:	48 8b 8d b8 0a 00 00 	mov    rcx,QWORD PTR [rbp+0xab8]
   140004192:	48 8b 95 18 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xb18]
   140004199:	e8 9c 29 01 00       	call   0x140016b3a
   14000419e:	48 8d 8d c0 09 00 00 	lea    rcx,[rbp+0x9c0]
   1400041a5:	e8 d2 d3 ff ff       	call   0x14000157c
   1400041aa:	48 8d 8d a0 08 00 00 	lea    rcx,[rbp+0x8a0]
   1400041b1:	e8 e2 d2 ff ff       	call   0x140001498
   1400041b6:	6a 1e                	push   0x1e
   1400041b8:	59                   	pop    rcx
   1400041b9:	31 d2                	xor    edx,edx
   1400041bb:	e8 10 04 07 00       	call   0x1400745d0
   1400041c0:	e9 a0 e8 ff ff       	jmp    0x140002a65
   1400041c5:	48 89 f9             	mov    rcx,rdi
   1400041c8:	48 89 f2             	mov    rdx,rsi
   1400041cb:	e8 9a c4 07 00       	call   0x14008066a
   1400041d0:	4c 89 f1             	mov    rcx,r14
   1400041d3:	48 8d 95 f7 09 00 00 	lea    rdx,[rbp+0x9f7]
   1400041da:	e8 03 11 00 00       	call   0x1400052e2
   1400041df:	48 8b 95 e0 0a 00 00 	mov    rdx,QWORD PTR [rbp+0xae0]
   1400041e6:	4c 8b 85 e8 0a 00 00 	mov    r8,QWORD PTR [rbp+0xae8]
   1400041ed:	4c 89 f1             	mov    rcx,r14
   1400041f0:	e8 8c 10 00 00       	call   0x140005281
   1400041f5:	48 8b b5 e8 0a 00 00 	mov    rsi,QWORD PTR [rbp+0xae8]
   1400041fc:	48 85 f6             	test   rsi,rsi
   1400041ff:	0f 84 04 ff ff ff    	je     0x140004109
   140004205:	48 8b 9d d8 0a 00 00 	mov    rbx,QWORD PTR [rbp+0xad8]
   14000420c:	48 8b bd e0 0a 00 00 	mov    rdi,QWORD PTR [rbp+0xae0]
   140004213:	4c 89 e1             	mov    rcx,r12
   140004216:	48 89 fa             	mov    rdx,rdi
   140004219:	49 89 f0             	mov    r8,rsi
   14000421c:	e8 3f 36 00 00       	call   0x140007860
   140004221:	80 bd e0 01 00 00 00 	cmp    BYTE PTR [rbp+0x1e0],0x0
   140004228:	74 1f                	je     0x140004249
   14000422a:	48 89 d8             	mov    rax,rbx
   14000422d:	48 f7 d8             	neg    rax
   140004230:	0f 81 0c 01 00 00    	jno    0x140004342
   140004236:	48 89 bd d0 0a 00 00 	mov    QWORD PTR [rbp+0xad0],rdi
   14000423d:	48 89 f7             	mov    rdi,rsi
   140004240:	48 8b b5 e8 01 00 00 	mov    rsi,QWORD PTR [rbp+0x1e8]
   140004247:	eb 07                	jmp    0x140004250
   140004249:	48 89 9d d0 0a 00 00 	mov    QWORD PTR [rbp+0xad0],rbx
   140004250:	4c 89 e1             	mov    rcx,r12
   140004253:	48 89 bd c8 0b 00 00 	mov    QWORD PTR [rbp+0xbc8],rdi
   14000425a:	48 89 fa             	mov    rdx,rdi
   14000425d:	49 89 f0             	mov    r8,rsi
   140004260:	e8 bb b6 06 00       	call   0x14006f920
   140004265:	48 8b bd e0 01 00 00 	mov    rdi,QWORD PTR [rbp+0x1e0]
   14000426c:	4c 8b bd e8 01 00 00 	mov    r15,QWORD PTR [rbp+0x1e8]
   140004273:	48 89 f8             	mov    rax,rdi
   140004276:	48 f7 d8             	neg    rax
   140004279:	71 78                	jno    0x1400042f3
   14000427b:	48 8b bd c8 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xbc8]
   140004282:	4c 89 e1             	mov    rcx,r12
   140004285:	48 8d 15 c9 4e 0c 00 	lea    rdx,[rip+0xc4ec9]        # 0x1400c9155
   14000428c:	e8 02 12 00 00       	call   0x140005493
   140004291:	48 8b 8d 40 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xb40]
   140004298:	48 8b 95 48 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xb48]
   14000429f:	e8 96 28 01 00       	call   0x140016b3a
   1400042a4:	48 8b 85 f0 01 00 00 	mov    rax,QWORD PTR [rbp+0x1f0]
   1400042ab:	48 89 85 50 0b 00 00 	mov    QWORD PTR [rbp+0xb50],rax
   1400042b2:	f3 0f 6f 85 e0 01 00 	movdqu xmm0,XMMWORD PTR [rbp+0x1e0]
   1400042b9:	00 
   1400042ba:	66 0f 7f 85 40 0b 00 	movdqa XMMWORD PTR [rbp+0xb40],xmm0
   1400042c1:	00 
   1400042c2:	4c 89 f9             	mov    rcx,r15
   1400042c5:	e8 8b d1 ff ff       	call   0x140001455
   1400042ca:	48 8b 8d d0 0a 00 00 	mov    rcx,QWORD PTR [rbp+0xad0]
   1400042d1:	48 89 fa             	mov    rdx,rdi
   1400042d4:	e8 61 28 01 00       	call   0x140016b3a
   1400042d9:	48 b8 01 00 00 00 00 	movabs rax,0x8000000000000001
   1400042e0:	00 00 80 
   1400042e3:	48 39 85 50 07 00 00 	cmp    QWORD PTR [rbp+0x750],rax
   1400042ea:	40 0f 94 c6          	sete   sil
   1400042ee:	e9 30 fe ff ff       	jmp    0x140004123
   1400042f3:	48 8b 85 f0 01 00 00 	mov    rax,QWORD PTR [rbp+0x1f0]
   1400042fa:	48 89 bd 60 0b 00 00 	mov    QWORD PTR [rbp+0xb60],rdi
   140004301:	4c 89 bd 68 0b 00 00 	mov    QWORD PTR [rbp+0xb68],r15
   140004308:	48 89 85 70 0b 00 00 	mov    QWORD PTR [rbp+0xb70],rax
   14000430f:	48 83 f8 04          	cmp    rax,0x4
   140004313:	73 7d                	jae    0x140004392
   140004315:	48 85 c0             	test   rax,rax
   140004318:	0f 84 1f 01 00 00    	je     0x14000443d
   14000431e:	48 83 f8 03          	cmp    rax,0x3
   140004322:	0f 84 a7 00 00 00    	je     0x1400043cf
   140004328:	48 83 f8 01          	cmp    rax,0x1
   14000432c:	0f 85 e2 00 00 00    	jne    0x140004414
   140004332:	66 41 83 3f 00       	cmp    WORD PTR [r15],0x0
   140004337:	0f 85 00 01 00 00    	jne    0x14000443d
   14000433d:	e9 3e 05 00 00       	jmp    0x140004880
   140004342:	48 89 d9             	mov    rcx,rbx
   140004345:	48 89 fa             	mov    rdx,rdi
   140004348:	e8 ed 27 01 00       	call   0x140016b3a
   14000434d:	4c 89 e1             	mov    rcx,r12
   140004350:	48 8d 15 fe 4d 0c 00 	lea    rdx,[rip+0xc4dfe]        # 0x1400c9155
   140004357:	e8 37 11 00 00       	call   0x140005493
   14000435c:	48 8b 8d 40 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xb40]
   140004363:	48 8b 95 48 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xb48]
   14000436a:	e8 cb 27 01 00       	call   0x140016b3a
   14000436f:	48 8b 85 f0 01 00 00 	mov    rax,QWORD PTR [rbp+0x1f0]
   140004376:	48 89 85 50 0b 00 00 	mov    QWORD PTR [rbp+0xb50],rax
   14000437d:	f3 0f 6f 85 e0 01 00 	movdqu xmm0,XMMWORD PTR [rbp+0x1e0]
   140004384:	00 
   140004385:	66 0f 7f 85 40 0b 00 	movdqa XMMWORD PTR [rbp+0xb40],xmm0
   14000438c:	00 
   14000438d:	e9 8a fd ff ff       	jmp    0x14000411c
   140004392:	48 b9 5c 00 5c 00 3f 	movabs rcx,0x5c003f005c005c
   140004399:	00 5c 00 
   14000439c:	49 39 0f             	cmp    QWORD PTR [r15],rcx
   14000439f:	0f 84 db 04 00 00    	je     0x140004880
   1400043a5:	48 b9 5c 00 3f 00 3f 	movabs rcx,0x5c003f003f005c
   1400043ac:	00 5c 00 
   1400043af:	49 39 0f             	cmp    QWORD PTR [r15],rcx
   1400043b2:	0f 84 c8 04 00 00    	je     0x140004880
   1400043b8:	48 3d f8 00 00 00    	cmp    rax,0xf8
   1400043be:	73 7d                	jae    0x14000443d
   1400043c0:	66 41 83 7f 02 3a    	cmp    WORD PTR [r15+0x2],0x3a
   1400043c6:	75 4c                	jne    0x140004414
   1400043c8:	41 0f b7 47 04       	movzx  eax,WORD PTR [r15+0x4]
   1400043cd:	eb 12                	jmp    0x1400043e1
   1400043cf:	66 41 83 7f 02 3a    	cmp    WORD PTR [r15+0x2],0x3a
   1400043d5:	75 3d                	jne    0x140004414
   1400043d7:	41 0f b7 47 04       	movzx  eax,WORD PTR [r15+0x4]
   1400043dc:	66 85 c0             	test   ax,ax
   1400043df:	74 21                	je     0x140004402
   1400043e1:	66 83 f8 2f          	cmp    ax,0x2f
   1400043e5:	74 08                	je     0x1400043ef
   1400043e7:	0f b7 c0             	movzx  eax,ax
   1400043ea:	83 f8 5c             	cmp    eax,0x5c
   1400043ed:	75 25                	jne    0x140004414
   1400043ef:	41 0f b7 07          	movzx  eax,WORD PTR [r15]
   1400043f3:	83 f8 2f             	cmp    eax,0x2f
   1400043f6:	74 20                	je     0x140004418
   1400043f8:	83 f8 5c             	cmp    eax,0x5c
   1400043fb:	74 1b                	je     0x140004418
   1400043fd:	e9 7e 04 00 00       	jmp    0x140004880
   140004402:	41 0f b7 07          	movzx  eax,WORD PTR [r15]
   140004406:	83 f8 2f             	cmp    eax,0x2f
   140004409:	74 09                	je     0x140004414
   14000440b:	83 f8 5c             	cmp    eax,0x5c
   14000440e:	0f 85 6c 04 00 00    	jne    0x140004880
   140004414:	41 0f b7 07          	movzx  eax,WORD PTR [r15]
   140004418:	66 83 f8 5c          	cmp    ax,0x5c
   14000441c:	74 08                	je     0x140004426
   14000441e:	0f b7 c0             	movzx  eax,ax
   140004421:	83 f8 2f             	cmp    eax,0x2f
   140004424:	75 17                	jne    0x14000443d
   140004426:	41 0f b7 47 02       	movzx  eax,WORD PTR [r15+0x2]
   14000442b:	83 f8 2f             	cmp    eax,0x2f
   14000442e:	0f 84 4c 04 00 00    	je     0x140004880
   140004434:	83 f8 5c             	cmp    eax,0x5c
   140004437:	0f 84 43 04 00 00    	je     0x140004880
   14000443d:	4c 89 bd d0 0b 00 00 	mov    QWORD PTR [rbp+0xbd0],r15
   140004444:	48 83 a5 48 0a 00 00 	and    QWORD PTR [rbp+0xa48],0x0
   14000444b:	00 
   14000444c:	48 c7 85 50 0a 00 00 	mov    QWORD PTR [rbp+0xa50],0x2
   140004453:	02 00 00 00 
   140004457:	48 83 a5 58 0a 00 00 	and    QWORD PTR [rbp+0xa58],0x0
   14000445e:	00 
   14000445f:	be 00 02 00 00       	mov    esi,0x200
   140004464:	6a 02                	push   0x2
   140004466:	58                   	pop    rax
   140004467:	48 89 85 b0 0b 00 00 	mov    QWORD PTR [rbp+0xbb0],rax
   14000446e:	45 31 f6             	xor    r14d,r14d
   140004471:	45 31 e4             	xor    r12d,r12d
   140004474:	45 31 ff             	xor    r15d,r15d
   140004477:	48 81 fe 01 02 00 00 	cmp    rsi,0x201
   14000447e:	73 11                	jae    0x140004491
   140004480:	bb 00 02 00 00       	mov    ebx,0x200
   140004485:	48 8d bd e0 01 00 00 	lea    rdi,[rbp+0x1e0]
   14000448c:	49 89 f5             	mov    r13,rsi
   14000448f:	eb 38                	jmp    0x1400044c9
   140004491:	4c 29 fe             	sub    rsi,r15
   140004494:	4d 29 fc             	sub    r12,r15
   140004497:	4c 39 e6             	cmp    rsi,r12
   14000449a:	0f 87 97 00 00 00    	ja     0x140004537
   1400044a0:	b8 ff ff ff ff       	mov    eax,0xffffffff
   1400044a5:	49 39 c6             	cmp    r14,rax
   1400044a8:	41 bf ff ff ff ff    	mov    r15d,0xffffffff
   1400044ae:	4d 0f 42 fe          	cmovb  r15,r14
   1400044b2:	4c 89 bd 58 0a 00 00 	mov    QWORD PTR [rbp+0xa58],r15
   1400044b9:	4d 89 f4             	mov    r12,r14
   1400044bc:	4c 89 fb             	mov    rbx,r15
   1400044bf:	48 8b bd b0 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xbb0]
   1400044c6:	4d 89 fd             	mov    r13,r15
   1400044c9:	31 c9                	xor    ecx,ecx
   1400044cb:	ff 15 7f 3b 0c 00    	call   QWORD PTR [rip+0xc3b7f]        # 0x1400c8050
   1400044d1:	48 8b 8d d0 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xbd0]
   1400044d8:	44 89 ea             	mov    edx,r13d
   1400044db:	48 89 bd c0 0b 00 00 	mov    QWORD PTR [rbp+0xbc0],rdi
   1400044e2:	49 89 f8             	mov    r8,rdi
   1400044e5:	45 31 c9             	xor    r9d,r9d
   1400044e8:	ff 15 6a 3b 0c 00    	call   QWORD PTR [rip+0xc3b6a]        # 0x1400c8058
   1400044ee:	89 c7                	mov    edi,eax
   1400044f0:	85 c0                	test   eax,eax
   1400044f2:	75 0e                	jne    0x140004502
   1400044f4:	ff 15 66 3b 0c 00    	call   QWORD PTR [rip+0xc3b66]        # 0x1400c8060
   1400044fa:	85 c0                	test   eax,eax
   1400044fc:	0f 85 b5 00 00 00    	jne    0x1400045b7
   140004502:	89 fe                	mov    esi,edi
   140004504:	49 39 f5             	cmp    r13,rsi
   140004507:	75 26                	jne    0x14000452f
   140004509:	ff 15 51 3b 0c 00    	call   QWORD PTR [rip+0xc3b51]        # 0x1400c8060
   14000450f:	83 f8 7a             	cmp    eax,0x7a
   140004512:	0f 85 34 0b 00 00    	jne    0x14000504c
   140004518:	4d 01 ed             	add    r13,r13
   14000451b:	b8 ff ff ff ff       	mov    eax,0xffffffff
   140004520:	49 39 c5             	cmp    r13,rax
   140004523:	4c 0f 43 e8          	cmovae r13,rax
   140004527:	4c 89 ee             	mov    rsi,r13
   14000452a:	e9 48 ff ff ff       	jmp    0x140004477
   14000452f:	0f 82 42 ff ff ff    	jb     0x140004477
   140004535:	eb 3a                	jmp    0x140004571
   140004537:	48 c7 44 24 20 02 00 	mov    QWORD PTR [rsp+0x20],0x2
   14000453e:	00 00 
   140004540:	48 8d 8d 48 0a 00 00 	lea    rcx,[rbp+0xa48]
   140004547:	4c 89 fa             	mov    rdx,r15
   14000454a:	49 89 f0             	mov    r8,rsi
   14000454d:	6a 02                	push   0x2
   14000454f:	41 59                	pop    r9
   140004551:	e8 3a 1c 0c 00       	call   0x1400c6190
   140004556:	90                   	nop
   140004557:	4c 8b b5 48 0a 00 00 	mov    r14,QWORD PTR [rbp+0xa48]
   14000455e:	48 8b 85 50 0a 00 00 	mov    rax,QWORD PTR [rbp+0xa50]
   140004565:	48 89 85 b0 0b 00 00 	mov    QWORD PTR [rbp+0xbb0],rax
   14000456c:	e9 2f ff ff ff       	jmp    0x1400044a0
   140004571:	48 39 f3             	cmp    rbx,rsi
   140004574:	0f 82 2d 0a 00 00    	jb     0x140004fa7
   14000457a:	48 83 a5 70 0b 00 00 	and    QWORD PTR [rbp+0xb70],0x0
   140004581:	00 
   140004582:	83 ff 02             	cmp    edi,0x2
   140004585:	4c 8d a5 e0 01 00 00 	lea    r12,[rbp+0x1e0]
   14000458c:	76 57                	jbe    0x1400045e5
   14000458e:	48 8b 8d c0 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xbc0]
   140004595:	0f b7 41 02          	movzx  eax,WORD PTR [rcx+0x2]
   140004599:	83 f8 3a             	cmp    eax,0x3a
   14000459c:	75 59                	jne    0x1400045f7
   14000459e:	66 83 79 04 5c       	cmp    WORD PTR [rcx+0x4],0x5c
   1400045a3:	75 52                	jne    0x1400045f7
   1400045a5:	31 ff                	xor    edi,edi
   1400045a7:	6a 04                	push   0x4
   1400045a9:	41 5d                	pop    r13
   1400045ab:	48 8d 1d a6 15 0f 00 	lea    rbx,[rip+0xf15a6]        # 0x1400f5b58
   1400045b2:	e9 a4 01 00 00       	jmp    0x14000475b
   1400045b7:	ff 15 a3 3a 0c 00    	call   QWORD PTR [rip+0xc3aa3]        # 0x1400c8060
   1400045bd:	41 89 c7             	mov    r15d,eax
   1400045c0:	49 c1 e7 20          	shl    r15,0x20
   1400045c4:	49 83 cf 02          	or     r15,0x2
   1400045c8:	48 83 bd 48 0a 00 00 	cmp    QWORD PTR [rbp+0xa48],0x0
   1400045cf:	00 
   1400045d0:	74 62                	je     0x140004634
   1400045d2:	4c 8d a5 e0 01 00 00 	lea    r12,[rbp+0x1e0]
   1400045d9:	48 8b bd c8 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xbc8]
   1400045e0:	e9 4b 02 00 00       	jmp    0x140004830
   1400045e5:	75 60                	jne    0x140004647
   1400045e7:	48 8b 85 c0 0b 00 00 	mov    rax,QWORD PTR [rbp+0xbc0]
   1400045ee:	0f b7 08             	movzx  ecx,WORD PTR [rax]
   1400045f1:	0f b7 40 02          	movzx  eax,WORD PTR [rax+0x2]
   1400045f5:	eb 08                	jmp    0x1400045ff
   1400045f7:	0f b7 09             	movzx  ecx,WORD PTR [rcx]
   1400045fa:	83 ff 03             	cmp    edi,0x3
   1400045fd:	75 50                	jne    0x14000464f
   1400045ff:	40 b7 01             	mov    dil,0x1
   140004602:	66 83 f8 5c          	cmp    ax,0x5c
   140004606:	0f 85 49 01 00 00    	jne    0x140004755
   14000460c:	66 83 f9 5c          	cmp    cx,0x5c
   140004610:	0f 85 3f 01 00 00    	jne    0x140004755
   140004616:	48 83 c6 fe          	add    rsi,0xfffffffffffffffe
   14000461a:	48 83 85 c0 0b 00 00 	add    QWORD PTR [rbp+0xbc0],0x4
   140004621:	04 
   140004622:	31 ff                	xor    edi,edi
   140004624:	6a 08                	push   0x8
   140004626:	41 5d                	pop    r13
   140004628:	48 8d 1d 31 15 0f 00 	lea    rbx,[rip+0xf1531]        # 0x1400f5b60
   14000462f:	e9 27 01 00 00       	jmp    0x14000475b
   140004634:	4c 8d a5 e0 01 00 00 	lea    r12,[rbp+0x1e0]
   14000463b:	48 8b bd c8 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xbc8]
   140004642:	e9 fd 01 00 00       	jmp    0x140004844
   140004647:	40 b7 01             	mov    dil,0x1
   14000464a:	e9 06 01 00 00       	jmp    0x140004755
   14000464f:	40 b7 01             	mov    dil,0x1
   140004652:	66 83 f9 5c          	cmp    cx,0x5c
   140004656:	0f 85 f9 00 00 00    	jne    0x140004755
   14000465c:	83 f8 3f             	cmp    eax,0x3f
   14000465f:	0f 84 f0 00 00 00    	je     0x140004755
   140004665:	66 b9 5c 00          	mov    cx,0x5c
   140004669:	83 f8 5c             	cmp    eax,0x5c
   14000466c:	75 91                	jne    0x1400045ff
   14000466e:	48 8b 85 c0 0b 00 00 	mov    rax,QWORD PTR [rbp+0xbc0]
   140004675:	0f b7 48 04          	movzx  ecx,WORD PTR [rax+0x4]
   140004679:	66 b8 5c 00          	mov    ax,0x5c
   14000467d:	83 f9 3f             	cmp    ecx,0x3f
   140004680:	0f 84 b9 00 00 00    	je     0x14000473f
   140004686:	83 f9 2e             	cmp    ecx,0x2e
   140004689:	0f 85 e8 05 00 00    	jne    0x140004c77
   14000468f:	48 8b 8d c0 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xbc0]
   140004696:	66 83 79 06 5c       	cmp    WORD PTR [rcx+0x6],0x5c
   14000469b:	66 b9 5c 00          	mov    cx,0x5c
   14000469f:	0f 85 5a ff ff ff    	jne    0x1400045ff
   1400046a5:	48 83 c6 fc          	add    rsi,0xfffffffffffffffc
   1400046a9:	48 83 85 c0 0b 00 00 	add    QWORD PTR [rbp+0xbc0],0x8
   1400046b0:	08 
   1400046b1:	e9 ef fe ff ff       	jmp    0x1400045a5
   1400046b6:	48 83 fe 15          	cmp    rsi,0x15
   1400046ba:	0f 83 c5 06 00 00    	jae    0x140004d85
   1400046c0:	48 8d 5f 02          	lea    rbx,[rdi+0x2]
   1400046c4:	4d 85 f6             	test   r14,r14
   1400046c7:	0f 84 cb e7 ff ff    	je     0x140002e98
   1400046cd:	48 89 f9             	mov    rcx,rdi
   1400046d0:	48 89 da             	mov    rdx,rbx
   1400046d3:	e8 e0 d1 ff ff       	call   0x1400018b8
   1400046d8:	48 83 c3 02          	add    rbx,0x2
   1400046dc:	49 83 c6 fe          	add    r14,0xfffffffffffffffe
   1400046e0:	eb e2                	jmp    0x1400046c4
   1400046e2:	48 8d 0d af f9 13 00 	lea    rcx,[rip+0x13f9af]        # 0x140144098
   1400046e9:	48 89 8d c0 08 00 00 	mov    QWORD PTR [rbp+0x8c0],rcx
   1400046f0:	48 8d 05 a9 f9 13 00 	lea    rax,[rip+0x13f9a9]        # 0x1401440a0
   1400046f7:	48 89 85 e0 05 00 00 	mov    QWORD PTR [rbp+0x5e0],rax
   1400046fe:	48 8d 85 c0 08 00 00 	lea    rax,[rbp+0x8c0]
   140004705:	48 89 85 e0 01 00 00 	mov    QWORD PTR [rbp+0x1e0],rax
   14000470c:	4c 89 b5 e8 01 00 00 	mov    QWORD PTR [rbp+0x1e8],r14
   140004713:	48 8d 85 9f 0b 00 00 	lea    rax,[rbp+0xb9f]
   14000471a:	48 89 85 f0 01 00 00 	mov    QWORD PTR [rbp+0x1f0],rax
   140004721:	4c 89 e2             	mov    rdx,r12
   140004724:	4c 8d 05 ad 56 10 00 	lea    r8,[rip+0x1056ad]        # 0x140109dd8
   14000472b:	e8 58 24 01 00       	call   0x140016b88
   140004730:	e9 ec ed ff ff       	jmp    0x140003521
   140004735:	e8 66 21 0c 00       	call   0x1400c68a0
   14000473a:	e9 05 ee ff ff       	jmp    0x140003544
   14000473f:	48 8b 8d c0 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xbc0]
   140004746:	66 83 79 06 5c       	cmp    WORD PTR [rcx+0x6],0x5c
   14000474b:	66 b9 5c 00          	mov    cx,0x5c
   14000474f:	0f 85 aa fe ff ff    	jne    0x1400045ff
   140004755:	45 31 ed             	xor    r13d,r13d
   140004758:	6a 02                	push   0x2
   14000475a:	5b                   	pop    rbx
   14000475b:	4a 8d 04 2e          	lea    rax,[rsi+r13*1]
   14000475f:	48 8b 95 60 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xb60]
   140004766:	48 39 d0             	cmp    rax,rdx
   140004769:	0f 83 b0 04 00 00    	jae    0x140004c1f
   14000476f:	49 89 d7             	mov    r15,rdx
   140004772:	48 89 9d b0 0b 00 00 	mov    QWORD PTR [rbp+0xbb0],rbx
   140004779:	4d 39 fd             	cmp    r13,r15
   14000477c:	0f 87 7b 05 00 00    	ja     0x140004cfd
   140004782:	41 be 00 00 00 00    	mov    r14d,0x0
   140004788:	bb 00 00 00 00       	mov    ebx,0x0
   14000478d:	40 84 ff             	test   dil,dil
   140004790:	48 8b bd c8 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xbc8]
   140004797:	75 22                	jne    0x1400047bb
   140004799:	46 8d 04 6d 00 00 00 	lea    r8d,[r13*2+0x0]
   1400047a0:	00 
   1400047a1:	48 8b 85 d0 0b 00 00 	mov    rax,QWORD PTR [rbp+0xbd0]
   1400047a8:	4a 8d 0c 70          	lea    rcx,[rax+r14*2]
   1400047ac:	48 8b 95 b0 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xbb0]
   1400047b3:	e8 0e ec 0b 00       	call   0x1400c33c6
   1400047b8:	4c 89 f3             	mov    rbx,r14
   1400047bb:	4c 01 eb             	add    rbx,r13
   1400047be:	48 89 9d 70 0b 00 00 	mov    QWORD PTR [rbp+0xb70],rbx
   1400047c5:	4c 89 f8             	mov    rax,r15
   1400047c8:	48 29 d8             	sub    rax,rbx
   1400047cb:	48 39 c6             	cmp    rsi,rax
   1400047ce:	0f 87 70 05 00 00    	ja     0x140004d44
   1400047d4:	48 85 f6             	test   rsi,rsi
   1400047d7:	74 1b                	je     0x1400047f4
   1400047d9:	4c 8d 04 36          	lea    r8,[rsi+rsi*1]
   1400047dd:	48 8b 85 d0 0b 00 00 	mov    rax,QWORD PTR [rbp+0xbd0]
   1400047e4:	48 8d 0c 58          	lea    rcx,[rax+rbx*2]
   1400047e8:	48 8b 95 c0 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xbc0]
   1400047ef:	e8 d2 eb 0b 00       	call   0x1400c33c6
   1400047f4:	48 01 f3             	add    rbx,rsi
   1400047f7:	48 89 9d 70 0b 00 00 	mov    QWORD PTR [rbp+0xb70],rbx
   1400047fe:	4c 39 fb             	cmp    rbx,r15
   140004801:	48 8b 85 d0 0b 00 00 	mov    rax,QWORD PTR [rbp+0xbd0]
   140004808:	75 14                	jne    0x14000481e
   14000480a:	48 8d 8d 60 0b 00 00 	lea    rcx,[rbp+0xb60]
   140004811:	e8 8a 1b 0c 00       	call   0x1400c63a0
   140004816:	90                   	nop
   140004817:	48 8b 85 68 0b 00 00 	mov    rax,QWORD PTR [rbp+0xb68]
   14000481e:	66 83 24 58 00       	and    WORD PTR [rax+rbx*2],0x0
   140004823:	48 83 bd 48 0a 00 00 	cmp    QWORD PTR [rbp+0xa48],0x0
   14000482a:	00 
   14000482b:	74 39                	je     0x140004866
   14000482d:	45 31 ff             	xor    r15d,r15d
   140004830:	48 8b 8d 50 0a 00 00 	mov    rcx,QWORD PTR [rbp+0xa50]
   140004837:	6a 02                	push   0x2
   140004839:	5a                   	pop    rdx
   14000483a:	e8 28 0f 00 00       	call   0x140005767
   14000483f:	4d 85 ff             	test   r15,r15
   140004842:	74 22                	je     0x140004866
   140004844:	48 83 bd 60 0b 00 00 	cmp    QWORD PTR [rbp+0xb60],0x0
   14000484b:	00 
   14000484c:	0f 84 30 fa ff ff    	je     0x140004282
   140004852:	48 8b 8d 68 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xb68]
   140004859:	6a 02                	push   0x2
   14000485b:	5a                   	pop    rdx
   14000485c:	e8 06 0f 00 00       	call   0x140005767
   140004861:	e9 1c fa ff ff       	jmp    0x140004282
   140004866:	48 8b bd 60 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xb60]
   14000486d:	4c 8b bd 68 0b 00 00 	mov    r15,QWORD PTR [rbp+0xb68]
   140004874:	48 89 f8             	mov    rax,rdi
   140004877:	48 f7 d8             	neg    rax
   14000487a:	0f 80 fb f9 ff ff    	jo     0x14000427b
   140004880:	48 83 64 24 30 00    	and    QWORD PTR [rsp+0x30],0x0
   140004886:	83 64 24 28 00       	and    DWORD PTR [rsp+0x28],0x0
   14000488b:	c7 44 24 20 03 00 00 	mov    DWORD PTR [rsp+0x20],0x3
   140004892:	00 
   140004893:	4c 89 f9             	mov    rcx,r15
   140004896:	ba 00 00 00 80       	mov    edx,0x80000000
   14000489b:	6a 07                	push   0x7
   14000489d:	41 58                	pop    r8
   14000489f:	45 31 c9             	xor    r9d,r9d
   1400048a2:	ff 15 c0 37 0c 00    	call   QWORD PTR [rip+0xc37c0]        # 0x1400c8068
   1400048a8:	48 89 c6             	mov    rsi,rax
   1400048ab:	48 83 f8 ff          	cmp    rax,0xffffffffffffffff
   1400048af:	74 0a                	je     0x1400048bb
   1400048b1:	49 89 f5             	mov    r13,rsi
   1400048b4:	48 85 ff             	test   rdi,rdi
   1400048b7:	75 1c                	jne    0x1400048d5
   1400048b9:	eb 2f                	jmp    0x1400048ea
   1400048bb:	ff 15 9f 37 0c 00    	call   QWORD PTR [rip+0xc379f]        # 0x1400c8060
   1400048c1:	41 89 c5             	mov    r13d,eax
   1400048c4:	49 c1 e5 20          	shl    r13,0x20
   1400048c8:	49 83 cd 02          	or     r13,0x2
   1400048cc:	48 85 ff             	test   rdi,rdi
   1400048cf:	0f 84 96 00 00 00    	je     0x14000496b
   1400048d5:	4c 89 f9             	mov    rcx,r15
   1400048d8:	6a 02                	push   0x2
   1400048da:	5a                   	pop    rdx
   1400048db:	e8 87 0e 00 00       	call   0x140005767
   1400048e0:	48 83 fe ff          	cmp    rsi,0xffffffffffffffff
   1400048e4:	0f 84 81 00 00 00    	je     0x14000496b
   1400048ea:	44 0f 29 8d 00 02 00 	movaps XMMWORD PTR [rbp+0x200],xmm9
   1400048f1:	00 
   1400048f2:	44 0f 29 8d f0 01 00 	movaps XMMWORD PTR [rbp+0x1f0],xmm9
   1400048f9:	00 
   1400048fa:	44 0f 29 8d e0 01 00 	movaps XMMWORD PTR [rbp+0x1e0],xmm9
   140004901:	00 
   140004902:	83 a5 10 02 00 00 00 	and    DWORD PTR [rbp+0x210],0x0
   140004909:	4c 89 e9             	mov    rcx,r13
   14000490c:	4c 89 e2             	mov    rdx,r12
   14000490f:	ff 15 5b 37 0c 00    	call   QWORD PTR [rip+0xc375b]        # 0x1400c8070
   140004915:	85 c0                	test   eax,eax
   140004917:	48 8b bd c8 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xbc8]
   14000491e:	74 53                	je     0x140004973
   140004920:	f6 85 e1 01 00 00 04 	test   BYTE PTR [rbp+0x1e1],0x4
   140004927:	74 23                	je     0x14000494c
   140004929:	48 83 a5 48 0a 00 00 	and    QWORD PTR [rbp+0xa48],0x0
   140004930:	00 
   140004931:	4c 89 e9             	mov    rcx,r13
   140004934:	6a 09                	push   0x9
   140004936:	5a                   	pop    rdx
   140004937:	4c 8d 85 48 0a 00 00 	lea    r8,[rbp+0xa48]
   14000493e:	6a 08                	push   0x8
   140004940:	41 59                	pop    r9
   140004942:	ff 15 30 37 0c 00    	call   QWORD PTR [rip+0xc3730]        # 0x1400c8078
   140004948:	85 c0                	test   eax,eax
   14000494a:	74 27                	je     0x140004973
   14000494c:	8b b5 00 02 00 00    	mov    esi,DWORD PTR [rbp+0x200]
   140004952:	48 c1 e6 20          	shl    rsi,0x20
   140004956:	0f 89 39 04 00 00    	jns    0x140004d95
   14000495c:	49 bf 03 00 00 00 26 	movabs r15,0x2600000003
   140004963:	00 00 00 
   140004966:	e9 9e 00 00 00       	jmp    0x140004a09
   14000496b:	4d 89 ef             	mov    r15,r13
   14000496e:	e9 08 f9 ff ff       	jmp    0x14000427b
   140004973:	4c 89 ad d0 0b 00 00 	mov    QWORD PTR [rbp+0xbd0],r13
   14000497a:	ff 15 e0 36 0c 00    	call   QWORD PTR [rip+0xc36e0]        # 0x1400c8060
   140004980:	48 c1 e0 20          	shl    rax,0x20
   140004984:	48 83 c8 02          	or     rax,0x2
   140004988:	48 89 85 c8 08 00 00 	mov    QWORD PTR [rbp+0x8c8],rax
   14000498f:	48 c7 85 c0 08 00 00 	mov    QWORD PTR [rbp+0x8c0],0x1
   140004996:	01 00 00 00 
   14000499a:	48 8d 8d c8 08 00 00 	lea    rcx,[rbp+0x8c8]
   1400049a1:	e8 2a 5e 06 00       	call   0x14006a7d0
   1400049a6:	90                   	nop
   1400049a7:	48 83 a5 c0 08 00 00 	and    QWORD PTR [rbp+0x8c0],0x0
   1400049ae:	00 
   1400049af:	48 c7 85 c8 08 00 00 	mov    QWORD PTR [rbp+0x8c8],0x1
   1400049b6:	01 00 00 00 
   1400049ba:	48 83 a5 d0 08 00 00 	and    QWORD PTR [rbp+0x8d0],0x0
   1400049c1:	00 
   1400049c2:	41 b6 01             	mov    r14b,0x1
   1400049c5:	bb 00 20 00 00       	mov    ebx,0x2000
   1400049ca:	31 f6                	xor    esi,esi
   1400049cc:	48 8b 8d d0 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xbd0]
   1400049d3:	48 8d 95 c0 08 00 00 	lea    rdx,[rbp+0x8c0]
   1400049da:	e8 61 fe 06 00       	call   0x140074840
   1400049df:	90                   	nop
   1400049e0:	49 89 d7             	mov    r15,rdx
   1400049e3:	48 83 f8 01          	cmp    rax,0x1
   1400049e7:	75 2f                	jne    0x140004a18
   1400049e9:	4c 8b ad d0 0b 00 00 	mov    r13,QWORD PTR [rbp+0xbd0]
   1400049f0:	48 83 bd c0 08 00 00 	cmp    QWORD PTR [rbp+0x8c0],0x0
   1400049f7:	00 
   1400049f8:	74 0f                	je     0x140004a09
   1400049fa:	48 8b 8d c8 08 00 00 	mov    rcx,QWORD PTR [rbp+0x8c8]
   140004a01:	6a 01                	push   0x1
   140004a03:	5a                   	pop    rdx
   140004a04:	e8 5e 0d 00 00       	call   0x140005767
   140004a09:	48 be 00 00 00 00 00 	movabs rsi,0x8000000000000000
   140004a10:	00 00 80 
   140004a13:	e9 ae 01 00 00       	jmp    0x140004bc6
   140004a18:	4c 89 f8             	mov    rax,r15
   140004a1b:	4c 8b bd d0 08 00 00 	mov    r15,QWORD PTR [rbp+0x8d0]
   140004a22:	48 85 c0             	test   rax,rax
   140004a25:	0f 84 7c 01 00 00    	je     0x140004ba7
   140004a2b:	48 8b 95 c0 08 00 00 	mov    rdx,QWORD PTR [rbp+0x8c0]
   140004a32:	4c 8b ad d0 0b 00 00 	mov    r13,QWORD PTR [rbp+0xbd0]
   140004a39:	4c 89 ad d0 0b 00 00 	mov    QWORD PTR [rbp+0xbd0],r13
   140004a40:	49 39 d7             	cmp    r15,rdx
   140004a43:	75 3f                	jne    0x140004a84
   140004a45:	48 39 f2             	cmp    rdx,rsi
   140004a48:	75 3a                	jne    0x140004a84
   140004a4a:	4c 89 e9             	mov    rcx,r13
   140004a4d:	48 8d 95 c0 08 00 00 	lea    rdx,[rbp+0x8c0]
   140004a54:	e8 e7 fd 06 00       	call   0x140074840
   140004a59:	90                   	nop
   140004a5a:	49 89 d7             	mov    r15,rdx
   140004a5d:	48 83 f8 01          	cmp    rax,0x1
   140004a61:	74 86                	je     0x1400049e9
   140004a63:	4c 89 f8             	mov    rax,r15
   140004a66:	4c 8b bd d0 08 00 00 	mov    r15,QWORD PTR [rbp+0x8d0]
   140004a6d:	48 85 c0             	test   rax,rax
   140004a70:	0f 84 31 01 00 00    	je     0x140004ba7
   140004a76:	48 8b 95 c0 08 00 00 	mov    rdx,QWORD PTR [rbp+0x8c0]
   140004a7d:	4c 8b ad d0 0b 00 00 	mov    r13,QWORD PTR [rbp+0xbd0]
   140004a84:	4c 8b 85 c8 08 00 00 	mov    r8,QWORD PTR [rbp+0x8c8]
   140004a8b:	49 39 d7             	cmp    r15,rdx
   140004a8e:	0f 84 be 00 00 00    	je     0x140004b52
   140004a94:	48 89 d7             	mov    rdi,rdx
   140004a97:	4d 01 f8             	add    r8,r15
   140004a9a:	48 89 f8             	mov    rax,rdi
   140004a9d:	4c 29 f8             	sub    rax,r15
   140004aa0:	48 39 c3             	cmp    rbx,rax
   140004aa3:	48 0f 42 c3          	cmovb  rax,rbx
   140004aa7:	f3 0f 6f 05 d1 19 0f 	movdqu xmm0,XMMWORD PTR [rip+0xf19d1]        # 0x1400f6480
   140004aae:	00 
   140004aaf:	66 0f 7f 85 e0 01 00 	movdqa XMMWORD PTR [rbp+0x1e0],xmm0
   140004ab6:	00 
   140004ab7:	b9 ff ff ff ff       	mov    ecx,0xffffffff
   140004abc:	48 39 c8             	cmp    rax,rcx
   140004abf:	48 0f 43 c1          	cmovae rax,rcx
   140004ac3:	44 0f 11 4c 24 38    	movups XMMWORD PTR [rsp+0x38],xmm9
   140004ac9:	4c 89 44 24 28       	mov    QWORD PTR [rsp+0x28],r8
   140004ace:	4c 89 64 24 20       	mov    QWORD PTR [rsp+0x20],r12
   140004ad3:	89 44 24 30          	mov    DWORD PTR [rsp+0x30],eax
   140004ad7:	4c 89 e9             	mov    rcx,r13
   140004ada:	31 d2                	xor    edx,edx
   140004adc:	45 31 c0             	xor    r8d,r8d
   140004adf:	45 31 c9             	xor    r9d,r9d
   140004ae2:	ff 15 08 39 0c 00    	call   QWORD PTR [rip+0xc3908]        # 0x1400c83f0
   140004ae8:	3d 03 01 00 00       	cmp    eax,0x103
   140004aed:	75 12                	jne    0x140004b01
   140004aef:	4c 89 e9             	mov    rcx,r13
   140004af2:	6a ff                	push   0xffffffffffffffff
   140004af4:	5a                   	pop    rdx
   140004af5:	ff 15 85 35 0c 00    	call   QWORD PTR [rip+0xc3585]        # 0x1400c8080
   140004afb:	8b 85 e0 01 00 00    	mov    eax,DWORD PTR [rbp+0x1e0]
   140004b01:	3d 11 00 00 c0       	cmp    eax,0xc0000011
   140004b06:	0f 84 94 00 00 00    	je     0x140004ba0
   140004b0c:	3d 03 01 00 00       	cmp    eax,0x103
   140004b11:	0f 84 aa 04 00 00    	je     0x140004fc1
   140004b17:	85 c0                	test   eax,eax
   140004b19:	0f 88 61 01 00 00    	js     0x140004c80
   140004b1f:	48 8b 85 e8 01 00 00 	mov    rax,QWORD PTR [rbp+0x1e8]
   140004b26:	49 01 c7             	add    r15,rax
   140004b29:	4c 89 bd d0 08 00 00 	mov    QWORD PTR [rbp+0x8d0],r15
   140004b30:	48 85 c0             	test   rax,rax
   140004b33:	0f 84 93 01 00 00    	je     0x140004ccc
   140004b39:	45 84 f6             	test   r14b,r14b
   140004b3c:	6a ff                	push   0xffffffffffffffff
   140004b3e:	58                   	pop    rax
   140004b3f:	48 0f 45 d8          	cmovne rbx,rax
   140004b43:	48 89 fa             	mov    rdx,rdi
   140004b46:	48 8b bd c8 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xbc8]
   140004b4d:	e9 ee fe ff ff       	jmp    0x140004a40
   140004b52:	48 8d 42 20          	lea    rax,[rdx+0x20]
   140004b56:	48 8d 3c 12          	lea    rdi,[rdx+rdx*1]
   140004b5a:	48 39 f8             	cmp    rax,rdi
   140004b5d:	48 0f 47 f8          	cmova  rdi,rax
   140004b61:	6a 01                	push   0x1
   140004b63:	58                   	pop    rax
   140004b64:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   140004b69:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   140004b6e:	4c 89 e1             	mov    rcx,r12
   140004b71:	49 89 f9             	mov    r9,rdi
   140004b74:	e8 a7 16 0c 00       	call   0x1400c6220
   140004b79:	83 bd e0 01 00 00 01 	cmp    DWORD PTR [rbp+0x1e0],0x1
   140004b80:	0f 84 61 01 00 00    	je     0x140004ce7
   140004b86:	4c 8b 85 e8 01 00 00 	mov    r8,QWORD PTR [rbp+0x1e8]
   140004b8d:	4c 89 85 c8 08 00 00 	mov    QWORD PTR [rbp+0x8c8],r8
   140004b94:	48 89 bd c0 08 00 00 	mov    QWORD PTR [rbp+0x8c0],rdi
   140004b9b:	e9 f7 fe ff ff       	jmp    0x140004a97
   140004ba0:	48 8b bd c8 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xbc8]
   140004ba7:	4c 8b ad d0 0b 00 00 	mov    r13,QWORD PTR [rbp+0xbd0]
   140004bae:	48 8b b5 c0 08 00 00 	mov    rsi,QWORD PTR [rbp+0x8c0]
   140004bb5:	48 8b 85 c8 08 00 00 	mov    rax,QWORD PTR [rbp+0x8c8]
   140004bbc:	4c 89 bd 28 0a 00 00 	mov    QWORD PTR [rbp+0xa28],r15
   140004bc3:	49 89 c7             	mov    r15,rax
   140004bc6:	4c 89 e9             	mov    rcx,r13
   140004bc9:	ff 15 79 34 0c 00    	call   QWORD PTR [rip+0xc3479]        # 0x1400c8048
   140004bcf:	48 89 f0             	mov    rax,rsi
   140004bd2:	48 f7 d8             	neg    rax
   140004bd5:	0f 80 a7 f6 ff ff    	jo     0x140004282
   140004bdb:	48 8b 8d 40 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xb40]
   140004be2:	48 8b 95 48 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xb48]
   140004be9:	e8 4c 1f 01 00       	call   0x140016b3a
   140004bee:	48 89 b5 40 0b 00 00 	mov    QWORD PTR [rbp+0xb40],rsi
   140004bf5:	4c 89 bd 48 0b 00 00 	mov    QWORD PTR [rbp+0xb48],r15
   140004bfc:	48 8b 85 28 0a 00 00 	mov    rax,QWORD PTR [rbp+0xa28]
   140004c03:	48 89 85 50 0b 00 00 	mov    QWORD PTR [rbp+0xb50],rax
   140004c0a:	48 8b 85 08 0b 00 00 	mov    rax,QWORD PTR [rbp+0xb08]
   140004c11:	ff c0                	inc    eax
   140004c13:	48 89 85 08 0b 00 00 	mov    QWORD PTR [rbp+0xb08],rax
   140004c1a:	e9 ab f6 ff ff       	jmp    0x1400042ca
   140004c1f:	4e 8d 3c 2e          	lea    r15,[rsi+r13*1]
   140004c23:	49 ff c7             	inc    r15
   140004c26:	6a 02                	push   0x2
   140004c28:	58                   	pop    rax
   140004c29:	48 89 44 24 28       	mov    QWORD PTR [rsp+0x28],rax
   140004c2e:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   140004c33:	48 8d 8d c0 08 00 00 	lea    rcx,[rbp+0x8c0]
   140004c3a:	4c 8b 85 d0 0b 00 00 	mov    r8,QWORD PTR [rbp+0xbd0]
   140004c41:	4d 89 f9             	mov    r9,r15
   140004c44:	e8 d7 15 0c 00       	call   0x1400c6220
   140004c49:	80 bd c0 08 00 00 00 	cmp    BYTE PTR [rbp+0x8c0],0x0
   140004c50:	0f 85 2c 04 00 00    	jne    0x140005082
   140004c56:	48 8b 85 c8 08 00 00 	mov    rax,QWORD PTR [rbp+0x8c8]
   140004c5d:	48 89 85 d0 0b 00 00 	mov    QWORD PTR [rbp+0xbd0],rax
   140004c64:	48 89 85 68 0b 00 00 	mov    QWORD PTR [rbp+0xb68],rax
   140004c6b:	4c 89 bd 60 0b 00 00 	mov    QWORD PTR [rbp+0xb60],r15
   140004c72:	e9 fb fa ff ff       	jmp    0x140004772
   140004c77:	66 b9 5c 00          	mov    cx,0x5c
   140004c7b:	e9 7f f9 ff ff       	jmp    0x1400045ff
   140004c80:	89 c1                	mov    ecx,eax
   140004c82:	ff 15 60 37 0c 00    	call   QWORD PTR [rip+0xc3760]        # 0x1400c83e8
   140004c88:	48 89 c1             	mov    rcx,rax
   140004c8b:	48 c1 e1 20          	shl    rcx,0x20
   140004c8f:	48 83 c9 02          	or     rcx,0x2
   140004c93:	48 c7 85 48 0a 00 00 	mov    QWORD PTR [rbp+0xa48],0x1
   140004c9a:	01 00 00 00 
   140004c9e:	48 89 ce             	mov    rsi,rcx
   140004ca1:	48 89 8d 50 0a 00 00 	mov    QWORD PTR [rbp+0xa50],rcx
   140004ca8:	89 c1                	mov    ecx,eax
   140004caa:	e8 31 c5 06 00       	call   0x1400711e0
   140004caf:	3c 0b                	cmp    al,0xb
   140004cb1:	75 25                	jne    0x140004cd8
   140004cb3:	48 8d 8d 50 0a 00 00 	lea    rcx,[rbp+0xa50]
   140004cba:	e8 11 5b 06 00       	call   0x14006a7d0
   140004cbf:	90                   	nop
   140004cc0:	48 8b bd c8 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xbc8]
   140004cc7:	e9 db fe ff ff       	jmp    0x140004ba7
   140004ccc:	48 8b bd c8 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xbc8]
   140004cd3:	e9 d6 fe ff ff       	jmp    0x140004bae
   140004cd8:	48 8b bd c8 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xbc8]
   140004cdf:	49 89 f7             	mov    r15,rsi
   140004ce2:	e9 09 fd ff ff       	jmp    0x1400049f0
   140004ce7:	49 bf 03 00 00 00 26 	movabs r15,0x2600000003
   140004cee:	00 00 00 
   140004cf1:	48 8b bd c8 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xbc8]
   140004cf8:	e9 f3 fc ff ff       	jmp    0x1400049f0
   140004cfd:	48 c7 44 24 20 02 00 	mov    QWORD PTR [rsp+0x20],0x2
   140004d04:	00 00 
   140004d06:	48 8d 8d 60 0b 00 00 	lea    rcx,[rbp+0xb60]
   140004d0d:	31 d2                	xor    edx,edx
   140004d0f:	4d 89 e8             	mov    r8,r13
   140004d12:	6a 02                	push   0x2
   140004d14:	41 59                	pop    r9
   140004d16:	e8 75 14 0c 00       	call   0x1400c6190
   140004d1b:	90                   	nop
   140004d1c:	48 8b bd c8 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xbc8]
   140004d23:	4c 8b b5 70 0b 00 00 	mov    r14,QWORD PTR [rbp+0xb70]
   140004d2a:	4c 8b bd 60 0b 00 00 	mov    r15,QWORD PTR [rbp+0xb60]
   140004d31:	48 8b 85 68 0b 00 00 	mov    rax,QWORD PTR [rbp+0xb68]
   140004d38:	48 89 85 d0 0b 00 00 	mov    QWORD PTR [rbp+0xbd0],rax
   140004d3f:	e9 55 fa ff ff       	jmp    0x140004799
   140004d44:	48 c7 44 24 20 02 00 	mov    QWORD PTR [rsp+0x20],0x2
   140004d4b:	00 00 
   140004d4d:	48 8d 8d 60 0b 00 00 	lea    rcx,[rbp+0xb60]
   140004d54:	48 89 da             	mov    rdx,rbx
   140004d57:	49 89 f0             	mov    r8,rsi
   140004d5a:	6a 02                	push   0x2
   140004d5c:	41 59                	pop    r9
   140004d5e:	e8 2d 14 0c 00       	call   0x1400c6190
   140004d63:	90                   	nop
   140004d64:	48 8b 9d 70 0b 00 00 	mov    rbx,QWORD PTR [rbp+0xb70]
   140004d6b:	4c 8b bd 60 0b 00 00 	mov    r15,QWORD PTR [rbp+0xb60]
   140004d72:	48 8b 85 68 0b 00 00 	mov    rax,QWORD PTR [rbp+0xb68]
   140004d79:	48 89 85 d0 0b 00 00 	mov    QWORD PTR [rbp+0xbd0],rax
   140004d80:	e9 54 fa ff ff       	jmp    0x1400047d9
   140004d85:	48 89 f9             	mov    rcx,rdi
   140004d88:	48 89 f2             	mov    rdx,rsi
   140004d8b:	e8 9d cd ff ff       	call   0x140001b2d
   140004d90:	e9 03 e1 ff ff       	jmp    0x140002e98
   140004d95:	4c 89 ad d0 0b 00 00 	mov    QWORD PTR [rbp+0xbd0],r13
   140004d9c:	8b 85 04 02 00 00    	mov    eax,DWORD PTR [rbp+0x204]
   140004da2:	48 09 c6             	or     rsi,rax
   140004da5:	48 85 f6             	test   rsi,rsi
   140004da8:	74 3d                	je     0x140004de7
   140004daa:	31 c9                	xor    ecx,ecx
   140004dac:	48 89 f2             	mov    rdx,rsi
   140004daf:	e8 ec a5 06 00       	call   0x14006f3a0
   140004db4:	48 85 c0             	test   rax,rax
   140004db7:	75 33                	jne    0x140004dec
   140004db9:	49 bf 03 00 00 00 26 	movabs r15,0x2600000003
   140004dc0:	00 00 00 
   140004dc3:	48 be 00 00 00 00 00 	movabs rsi,0x8000000000000000
   140004dca:	00 00 80 
   140004dcd:	4c 8d a5 e0 01 00 00 	lea    r12,[rbp+0x1e0]
   140004dd4:	48 8b bd c8 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xbc8]
   140004ddb:	4c 8b ad d0 0b 00 00 	mov    r13,QWORD PTR [rbp+0xbd0]
   140004de2:	e9 df fd ff ff       	jmp    0x140004bc6
   140004de7:	31 f6                	xor    esi,esi
   140004de9:	6a 01                	push   0x1
   140004deb:	58                   	pop    rax
   140004dec:	48 89 b5 c0 08 00 00 	mov    QWORD PTR [rbp+0x8c0],rsi
   140004df3:	48 89 85 c8 08 00 00 	mov    QWORD PTR [rbp+0x8c8],rax
   140004dfa:	48 83 a5 d0 08 00 00 	and    QWORD PTR [rbp+0x8d0],0x0
   140004e01:	00 
   140004e02:	48 8d 86 00 04 00 00 	lea    rax,[rsi+0x400]
   140004e09:	89 c1                	mov    ecx,eax
   140004e0b:	81 e1 ff 1f 00 00    	and    ecx,0x1fff
   140004e11:	48 89 f3             	mov    rbx,rsi
   140004e14:	48 29 cb             	sub    rbx,rcx
   140004e17:	48 81 c3 00 24 00 00 	add    rbx,0x2400
   140004e1e:	48 39 c3             	cmp    rbx,rax
   140004e21:	ba 00 20 00 00       	mov    edx,0x2000
   140004e26:	48 0f 42 da          	cmovb  rbx,rdx
   140004e2a:	48 85 c9             	test   rcx,rcx
   140004e2d:	48 0f 44 d8          	cmove  rbx,rax
   140004e31:	45 31 f6             	xor    r14d,r14d
   140004e34:	48 85 f6             	test   rsi,rsi
   140004e37:	74 19                	je     0x140004e52
   140004e39:	48 89 f2             	mov    rdx,rsi
   140004e3c:	45 31 ff             	xor    r15d,r15d
   140004e3f:	4c 8d a5 e0 01 00 00 	lea    r12,[rbp+0x1e0]
   140004e46:	48 8b bd c8 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xbc8]
   140004e4d:	e9 e0 fb ff ff       	jmp    0x140004a32
   140004e52:	4c 8d a5 e0 01 00 00 	lea    r12,[rbp+0x1e0]
   140004e59:	48 8b bd c8 0b 00 00 	mov    rdi,QWORD PTR [rbp+0xbc8]
   140004e60:	e9 67 fb ff ff       	jmp    0x1400049cc
   140004e65:	48 8d 8d 50 07 00 00 	lea    rcx,[rbp+0x750]
   140004e6c:	e8 d0 c7 ff ff       	call   0x140001641
   140004e71:	48 8b 8d c0 0a 00 00 	mov    rcx,QWORD PTR [rbp+0xac0]
   140004e78:	48 8b 95 a8 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xba8]
   140004e7f:	e8 b6 1c 01 00       	call   0x140016b3a
   140004e84:	48 8b 8d b0 0a 00 00 	mov    rcx,QWORD PTR [rbp+0xab0]
   140004e8b:	48 8b 95 00 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xb00]
   140004e92:	e8 a3 1c 01 00       	call   0x140016b3a
   140004e97:	48 8b 8d b8 0a 00 00 	mov    rcx,QWORD PTR [rbp+0xab8]
   140004e9e:	48 8b 95 18 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xb18]
   140004ea5:	e8 90 1c 01 00       	call   0x140016b3a
   140004eaa:	48 8d 8d c0 09 00 00 	lea    rcx,[rbp+0x9c0]
   140004eb1:	e8 c6 c6 ff ff       	call   0x14000157c
   140004eb6:	48 8d 8d a0 08 00 00 	lea    rcx,[rbp+0x8a0]
   140004ebd:	e8 d6 c5 ff ff       	call   0x140001498
   140004ec2:	48 8b 8d 20 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xb20]
   140004ec9:	48 8b 95 28 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xb28]
   140004ed0:	e8 65 1c 01 00       	call   0x140016b3a
   140004ed5:	0f 28 b5 e0 0b 00 00 	movaps xmm6,XMMWORD PTR [rbp+0xbe0]
   140004edc:	0f 28 bd f0 0b 00 00 	movaps xmm7,XMMWORD PTR [rbp+0xbf0]
   140004ee3:	44 0f 28 85 00 0c 00 	movaps xmm8,XMMWORD PTR [rbp+0xc00]
   140004eea:	00 
   140004eeb:	44 0f 28 8d 10 0c 00 	movaps xmm9,XMMWORD PTR [rbp+0xc10]
   140004ef2:	00 
   140004ef3:	44 0f 28 95 20 0c 00 	movaps xmm10,XMMWORD PTR [rbp+0xc20]
   140004efa:	00 
   140004efb:	44 0f 28 9d 30 0c 00 	movaps xmm11,XMMWORD PTR [rbp+0xc30]
   140004f02:	00 
   140004f03:	48 81 c4 c8 0c 00 00 	add    rsp,0xcc8
   140004f0a:	5b                   	pop    rbx
   140004f0b:	5f                   	pop    rdi
   140004f0c:	5e                   	pop    rsi
   140004f0d:	41 5c                	pop    r12
   140004f0f:	41 5d                	pop    r13
   140004f11:	41 5e                	pop    r14
   140004f13:	41 5f                	pop    r15
   140004f15:	5d                   	pop    rbp
   140004f16:	c3                   	ret
   140004f17:	48 8d 0d 52 42 0c 00 	lea    rcx,[rip+0xc4252]        # 0x1400c9170
   140004f1e:	eb 07                	jmp    0x140004f27
   140004f20:	48 8d 0d 61 42 0c 00 	lea    rcx,[rip+0xc4261]        # 0x1400c9188
   140004f27:	e8 c4 ed 0b 00       	call   0x1400c3cf0
   140004f2c:	0f 0b                	ud2
   140004f2e:	48 8d 0d 53 21 0f 00 	lea    rcx,[rip+0xf2153]        # 0x1400f7088
   140004f35:	4c 8d 05 e4 21 0f 00 	lea    r8,[rip+0xf21e4]        # 0x1400f7120
   140004f3c:	6a 34                	push   0x34
   140004f3e:	eb 10                	jmp    0x140004f50
   140004f40:	48 8d 0d f1 21 0f 00 	lea    rcx,[rip+0xf21f1]        # 0x1400f7138
   140004f47:	4c 8d 05 22 22 0f 00 	lea    r8,[rip+0xf2222]        # 0x1400f7170
   140004f4e:	6a 35                	push   0x35
   140004f50:	5a                   	pop    rdx
   140004f51:	e8 ba ed 0b 00       	call   0x1400c3d10
   140004f56:	0f 0b                	ud2
   140004f58:	48 8b 8d b0 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xbb0]
   140004f5f:	48 8b 95 c8 0b 00 00 	mov    rdx,QWORD PTR [rbp+0xbc8]
   140004f66:	e8 77 b8 07 00       	call   0x1400807e2
   140004f6b:	48 85 db             	test   rbx,rbx
   140004f6e:	48 8d 35 4b 32 0f 00 	lea    rsi,[rip+0xf324b]        # 0x1400f81c0
   140004f75:	48 0f 45 f3          	cmovne rsi,rbx
   140004f79:	4c 8d 85 e0 01 00 00 	lea    r8,[rbp+0x1e0]
   140004f80:	49 89 30             	mov    QWORD PTR [r8],rsi
   140004f83:	48 8d 05 26 36 0f 00 	lea    rax,[rip+0xf3626]        # 0x1400f85b0
   140004f8a:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   140004f8f:	48 8d 0d fd 5e 10 00 	lea    rcx,[rip+0x105efd]        # 0x14010ae93
   140004f96:	4c 8d 0d c3 34 0f 00 	lea    r9,[rip+0xf34c3]        # 0x1400f8460
   140004f9d:	6a 2b                	push   0x2b
   140004f9f:	5a                   	pop    rdx
   140004fa0:	e8 6b ee 0b 00       	call   0x1400c3e10
   140004fa5:	0f 0b                	ud2
   140004fa7:	4c 8d 0d da 08 0f 00 	lea    r9,[rip+0xf08da]        # 0x1400f5888
   140004fae:	31 c9                	xor    ecx,ecx
   140004fb0:	48 89 f2             	mov    rdx,rsi
   140004fb3:	49 89 d8             	mov    r8,rbx
   140004fb6:	e8 75 ec 0b 00       	call   0x1400c3c30
   140004fbb:	90                   	nop
   140004fbc:	e9 d5 00 00 00       	jmp    0x140005096
   140004fc1:	48 8d 8d 60 08 00 00 	lea    rcx,[rbp+0x860]
   140004fc8:	83 21 00             	and    DWORD PTR [rcx],0x0
   140004fcb:	c6 41 04 00          	mov    BYTE PTR [rcx+0x4],0x0
   140004fcf:	48 8d 15 ba 14 0f 00 	lea    rdx,[rip+0xf14ba]        # 0x1400f6490
   140004fd6:	41 b8 ab 00 00 00    	mov    r8d,0xab
   140004fdc:	e8 1f 56 06 00       	call   0x14006a600
   140004fe1:	90                   	nop
   140004fe2:	48 8d 8d 60 0b 00 00 	lea    rcx,[rbp+0xb60]
   140004fe9:	48 89 01             	mov    QWORD PTR [rcx],rax
   140004fec:	e8 bf 56 06 00       	call   0x14006a6b0
   140004ff1:	90                   	nop
   140004ff2:	6a 07                	push   0x7
   140004ff4:	59                   	pop    rcx
   140004ff5:	cd 29                	int    0x29
   140004ff7:	0f 0b                	ud2
   140004ff9:	ff 15 91 32 0c 00    	call   QWORD PTR [rip+0xc3291]        # 0x1400c8290
   140004fff:	48 c1 e0 20          	shl    rax,0x20
   140005003:	48 83 c8 02          	or     rax,0x2
   140005007:	eb 63                	jmp    0x14000506c
   140005009:	48 8d 8d e0 05 00 00 	lea    rcx,[rbp+0x5e0]
   140005010:	e8 65 bf 07 00       	call   0x140080f7a
   140005015:	48 8d 8d 48 0a 00 00 	lea    rcx,[rbp+0xa48]
   14000501c:	e8 e0 bc 07 00       	call   0x140080d01
   140005021:	4c 8d 85 e0 01 00 00 	lea    r8,[rbp+0x1e0]
   140005028:	49 89 30             	mov    QWORD PTR [r8],rsi
   14000502b:	48 8d 05 16 32 0f 00 	lea    rax,[rip+0xf3216]        # 0x1400f8248
   140005032:	48 89 44 24 20       	mov    QWORD PTR [rsp+0x20],rax
   140005037:	48 8d 0d 9a 31 0f 00 	lea    rcx,[rip+0xf319a]        # 0x1400f81d8
   14000503e:	4c 8d 0d 1b 34 0f 00 	lea    r9,[rip+0xf341b]        # 0x1400f8460
   140005045:	6a 16                	push   0x16
   140005047:	e9 53 ff ff ff       	jmp    0x140004f9f
   14000504c:	48 8d 0d 48 63 10 00 	lea    rcx,[rip+0x106348]        # 0x14010b39b
   140005053:	4c 8d 05 46 08 0f 00 	lea    r8,[rip+0xf0846]        # 0x1400f58a0
   14000505a:	6a 28                	push   0x28
   14000505c:	5a                   	pop    rdx
   14000505d:	e8 ae ec 0b 00       	call   0x1400c3d10
   140005062:	90                   	nop
   140005063:	eb 31                	jmp    0x140005096
   140005065:	48 8d 05 2c 21 0f 00 	lea    rax,[rip+0xf212c]        # 0x1400f7198
   14000506c:	4c 8d 85 e0 01 00 00 	lea    r8,[rbp+0x1e0]
   140005073:	49 89 00             	mov    QWORD PTR [r8],rax
   140005076:	48 8d 05 4b 35 0f 00 	lea    rax,[rip+0xf354b]        # 0x1400f85c8
   14000507d:	e9 08 ff ff ff       	jmp    0x140004f8a
   140005082:	48 8b 8d c8 08 00 00 	mov    rcx,QWORD PTR [rbp+0x8c8]
   140005089:	48 8b 95 d0 08 00 00 	mov    rdx,QWORD PTR [rbp+0x8d0]
   140005090:	e8 09 e8 0b 00       	call   0x1400c389e
   140005095:	90                   	nop
   140005096:	0f 0b                	ud2
   140005098:	48 89 54 24 10       	mov    QWORD PTR [rsp+0x10],rdx
   14000509d:	55                   	push   rbp
   14000509e:	41 57                	push   r15
   1400050a0:	41 56                	push   r14
   1400050a2:	41 55                	push   r13
   1400050a4:	41 54                	push   r12
   1400050a6:	56                   	push   rsi
   1400050a7:	57                   	push   rdi
   1400050a8:	53                   	push   rbx
   1400050a9:	48 81 ec a8 00 00 00 	sub    rsp,0xa8
   1400050b0:	48 8d aa 80 00 00 00 	lea    rbp,[rdx+0x80]
   1400050b7:	66 44 0f 7f 5c 24 40 	movdqa XMMWORD PTR [rsp+0x40],xmm11
   1400050be:	66 44 0f 7f 54 24 50 	movdqa XMMWORD PTR [rsp+0x50],xmm10
   1400050c5:	44 0f 29 4c 24 60    	movaps XMMWORD PTR [rsp+0x60],xmm9
   1400050cb:	44 0f 29 44 24 70    	movaps XMMWORD PTR [rsp+0x70],xmm8
   1400050d1:	0f 29 bc 24 80 00 00 	movaps XMMWORD PTR [rsp+0x80],xmm7
   1400050d8:	00 
   1400050d9:	0f 29 b4 24 90 00 00 	movaps XMMWORD PTR [rsp+0x90],xmm6
   1400050e0:	00 
   1400050e1:	48 83 bd c0 08 00 00 	cmp    QWORD PTR [rbp+0x8c0],0x0
   1400050e8:	00 
   1400050e9:	74 0f                	je     0x1400050fa
   1400050eb:	48 8b 8d c8 08 00 00 	mov    rcx,QWORD PTR [rbp+0x8c8]
   1400050f2:	6a 01                	push   0x1
   1400050f4:	5a                   	pop    rdx
   1400050f5:	e8 6d 06 00 00       	call   0x140005767
   1400050fa:	0f 28 b4 24 90 00 00 	movaps xmm6,XMMWORD PTR [rsp+0x90]
   140005101:	00 
   140005102:	0f 28 bc 24 80 00 00 	movaps xmm7,XMMWORD PTR [rsp+0x80]
   140005109:	00 
   14000510a:	44 0f 28 44 24 70    	movaps xmm8,XMMWORD PTR [rsp+0x70]
   140005110:	44 0f 28 4c 24 60    	movaps xmm9,XMMWORD PTR [rsp+0x60]
   140005116:	66 44 0f 6f 54 24 50 	movdqa xmm10,XMMWORD PTR [rsp+0x50]
   14000511d:	66 44 0f 6f 5c 24 40 	movdqa xmm11,XMMWORD PTR [rsp+0x40]
   140005124:	48 81 c4 a8 00 00 00 	add    rsp,0xa8
   14000512b:	5b                   	pop    rbx
   14000512c:	5f                   	pop    rdi
   14000512d:	5e                   	pop    rsi
   14000512e:	41 5c                	pop    r12
   140005130:	41 5d                	pop    r13
   140005132:	41 5e                	pop    r14
   140005134:	41 5f                	pop    r15
   140005136:	5d                   	pop    rbp
   140005137:	c3                   	ret
   140005138:	48 89 54 24 10       	mov    QWORD PTR [rsp+0x10],rdx
   14000513d:	55                   	push   rbp
   14000513e:	41 57                	push   r15
   140005140:	41 56                	push   r14
   140005142:	41 55                	push   r13
   140005144:	41 54                	push   r12
   140005146:	56                   	push   rsi
   140005147:	57                   	push   rdi
   140005148:	53                   	push   rbx
   140005149:	48 81 ec a8 00 00 00 	sub    rsp,0xa8
   140005150:	48 8d aa 80 00 00 00 	lea    rbp,[rdx+0x80]
   140005157:	66 44 0f 7f 5c 24 40 	movdqa XMMWORD PTR [rsp+0x40],xmm11
   14000515e:	66 44 0f 7f 54 24 50 	movdqa XMMWORD PTR [rsp+0x50],xmm10
   140005165:	44 0f 29 4c 24 60    	movaps XMMWORD PTR [rsp+0x60],xmm9
   14000516b:	44 0f 29 44 24 70    	movaps XMMWORD PTR [rsp+0x70],xmm8
   140005171:	0f 29 bc 24 80 00 00 	movaps XMMWORD PTR [rsp+0x80],xmm7
   140005178:	00 
   140005179:	0f 29 b4 24 90 00 00 	movaps XMMWORD PTR [rsp+0x90],xmm6
   140005180:	00 
   140005181:	48 8b 8d d0 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xbd0]
   140005188:	ff 15 ba 2e 0c 00    	call   QWORD PTR [rip+0xc2eba]        # 0x1400c8048
   14000518e:	0f 28 b4 24 90 00 00 	movaps xmm6,XMMWORD PTR [rsp+0x90]
   140005195:	00 
   140005196:	0f 28 bc 24 80 00 00 	movaps xmm7,XMMWORD PTR [rsp+0x80]
   14000519d:	00 
   14000519e:	44 0f 28 44 24 70    	movaps xmm8,XMMWORD PTR [rsp+0x70]
   1400051a4:	44 0f 28 4c 24 60    	movaps xmm9,XMMWORD PTR [rsp+0x60]
   1400051aa:	44 0f 28 54 24 50    	movaps xmm10,XMMWORD PTR [rsp+0x50]
   1400051b0:	44 0f 28 5c 24 40    	movaps xmm11,XMMWORD PTR [rsp+0x40]
   1400051b6:	48 81 c4 a8 00 00 00 	add    rsp,0xa8
   1400051bd:	5b                   	pop    rbx
   1400051be:	5f                   	pop    rdi
   1400051bf:	5e                   	pop    rsi
   1400051c0:	41 5c                	pop    r12
   1400051c2:	41 5d                	pop    r13
   1400051c4:	41 5e                	pop    r14
   1400051c6:	41 5f                	pop    r15
   1400051c8:	5d                   	pop    rbp
   1400051c9:	c3                   	ret
   1400051ca:	48 89 54 24 10       	mov    QWORD PTR [rsp+0x10],rdx
   1400051cf:	55                   	push   rbp
   1400051d0:	41 57                	push   r15
   1400051d2:	41 56                	push   r14
   1400051d4:	41 55                	push   r13
   1400051d6:	41 54                	push   r12
   1400051d8:	56                   	push   rsi
   1400051d9:	57                   	push   rdi
   1400051da:	53                   	push   rbx
   1400051db:	48 81 ec a8 00 00 00 	sub    rsp,0xa8
   1400051e2:	48 8d aa 80 00 00 00 	lea    rbp,[rdx+0x80]
   1400051e9:	66 44 0f 7f 5c 24 40 	movdqa XMMWORD PTR [rsp+0x40],xmm11
   1400051f0:	66 44 0f 7f 54 24 50 	movdqa XMMWORD PTR [rsp+0x50],xmm10
   1400051f7:	44 0f 29 4c 24 60    	movaps XMMWORD PTR [rsp+0x60],xmm9
   1400051fd:	44 0f 29 44 24 70    	movaps XMMWORD PTR [rsp+0x70],xmm8
   140005203:	0f 29 bc 24 80 00 00 	movaps XMMWORD PTR [rsp+0x80],xmm7
   14000520a:	00 
   14000520b:	0f 29 b4 24 90 00 00 	movaps XMMWORD PTR [rsp+0x90],xmm6
   140005212:	00 
   140005213:	48 83 bd 48 0a 00 00 	cmp    QWORD PTR [rbp+0xa48],0x0
   14000521a:	00 
   14000521b:	74 0f                	je     0x14000522c
   14000521d:	48 8b 8d 50 0a 00 00 	mov    rcx,QWORD PTR [rbp+0xa50]
   140005224:	6a 02                	push   0x2
   140005226:	5a                   	pop    rdx
   140005227:	e8 3b 05 00 00       	call   0x140005767
   14000522c:	48 83 bd 60 0b 00 00 	cmp    QWORD PTR [rbp+0xb60],0x0
   140005233:	00 
   140005234:	74 0f                	je     0x140005245
   140005236:	48 8b 8d 68 0b 00 00 	mov    rcx,QWORD PTR [rbp+0xb68]
   14000523d:	6a 02                	push   0x2
   14000523f:	5a                   	pop    rdx
   140005240:	e8 22 05 00 00       	call   0x140005767
   140005245:	0f 28 b4 24 90 00 00 	movaps xmm6,XMMWORD PTR [rsp+0x90]
   14000524c:	00 
   14000524d:	0f 28 bc 24 80 00 00 	movaps xmm7,XMMWORD PTR [rsp+0x80]
   140005254:	00 
   140005255:	44 0f 28 44 24 70    	movaps xmm8,XMMWORD PTR [rsp+0x70]
   14000525b:	44 0f 28 4c 24 60    	movaps xmm9,XMMWORD PTR [rsp+0x60]
   140005261:	44 0f 28 54 24 50    	movaps xmm10,XMMWORD PTR [rsp+0x50]
   140005267:	44 0f 28 5c 24 40    	movaps xmm11,XMMWORD PTR [rsp+0x40]
   14000526d:	48 81 c4 a8 00 00 00 	add    rsp,0xa8
   140005274:	5b                   	pop    rbx
   140005275:	5f                   	pop    rdi
   140005276:	5e                   	pop    rsi
   140005277:	41 5c                	pop    r12
   140005279:	41 5d                	pop    r13
   14000527b:	41 5e                	pop    r14
   14000527d:	41 5f                	pop    r15
   14000527f:	5d                   	pop    rbp
   140005280:	c3                   	ret
   140005281:	56                   	push   rsi
   140005282:	57                   	push   rdi
   140005283:	53                   	push   rbx
   140005284:	44 8a 89 00 01 00 00 	mov    r9b,BYTE PTR [rcx+0x100]
   14000528b:	8a 81 01 01 00 00    	mov    al,BYTE PTR [rcx+0x101]
   140005291:	41 fe c1             	inc    r9b
   140005294:	45 0f b6 c9          	movzx  r9d,r9b
   140005298:	45 31 d2             	xor    r10d,r10d
   14000529b:	4d 39 d0             	cmp    r8,r10
   14000529e:	74 3e                	je     0x1400052de
   1400052a0:	47 8d 1c 11          	lea    r11d,[r9+r10*1]
   1400052a4:	44 88 99 00 01 00 00 	mov    BYTE PTR [rcx+0x100],r11b
   1400052ab:	45 0f b6 db          	movzx  r11d,r11b
   1400052af:	42 8a 1c 19          	mov    bl,BYTE PTR [rcx+r11*1]
   1400052b3:	00 d8                	add    al,bl
   1400052b5:	88 81 01 01 00 00    	mov    BYTE PTR [rcx+0x101],al
   1400052bb:	0f b6 f0             	movzx  esi,al
   1400052be:	40 8a 3c 31          	mov    dil,BYTE PTR [rcx+rsi*1]
   1400052c2:	42 88 3c 19          	mov    BYTE PTR [rcx+r11*1],dil
   1400052c6:	88 1c 31             	mov    BYTE PTR [rcx+rsi*1],bl
   1400052c9:	42 02 1c 19          	add    bl,BYTE PTR [rcx+r11*1]
   1400052cd:	44 0f b6 db          	movzx  r11d,bl
   1400052d1:	46 8a 1c 19          	mov    r11b,BYTE PTR [rcx+r11*1]
   1400052d5:	46 30 1c 12          	xor    BYTE PTR [rdx+r10*1],r11b
   1400052d9:	49 ff c2             	inc    r10
   1400052dc:	eb bd                	jmp    0x14000529b
   1400052de:	5b                   	pop    rbx
   1400052df:	5f                   	pop    rdi
   1400052e0:	5e                   	pop    rsi
   1400052e1:	c3                   	ret
   1400052e2:	41 56                	push   r14
   1400052e4:	56                   	push   rsi
   1400052e5:	57                   	push   rdi
   1400052e6:	53                   	push   rbx
   1400052e7:	48 81 ec 00 02 00 00 	sub    rsp,0x200
   1400052ee:	49 89 c8             	mov    r8,rcx
   1400052f1:	45 31 c9             	xor    r9d,r9d
   1400052f4:	48 8d bc 24 00 01 00 	lea    rdi,[rsp+0x100]
   1400052fb:	00 
   1400052fc:	b9 40 00 00 00       	mov    ecx,0x40
   140005301:	31 c0                	xor    eax,eax
   140005303:	f3 ab                	rep stos DWORD PTR [rdi],eax
   140005305:	46 88 8c 0c 00 01 00 	mov    BYTE PTR [rsp+r9*1+0x100],r9b
   14000530c:	00 
   14000530d:	49 ff c1             	inc    r9
   140005310:	49 81 f9 00 01 00 00 	cmp    r9,0x100
   140005317:	75 ec                	jne    0x140005305
   140005319:	45 31 db             	xor    r11d,r11d
   14000531c:	b3 19                	mov    bl,0x19
   14000531e:	49 89 e1             	mov    r9,rsp
   140005321:	4c 8d 94 24 00 01 00 	lea    r10,[rsp+0x100]
   140005328:	00 
   140005329:	45 31 f6             	xor    r14d,r14d
   14000532c:	41 0f b6 c6          	movzx  eax,r14b
   140005330:	f6 f3                	div    bl
   140005332:	49 81 fe 00 01 00 00 	cmp    r14,0x100
   140005339:	74 48                	je     0x140005383
   14000533b:	0f b6 c0             	movzx  eax,al
   14000533e:	6b c0 e7             	imul   eax,eax,0xffffffe7
   140005341:	0f b6 c0             	movzx  eax,al
   140005344:	b9 00 01 00 00       	mov    ecx,0x100
   140005349:	4c 89 cf             	mov    rdi,r9
   14000534c:	4c 89 d6             	mov    rsi,r10
   14000534f:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
   140005351:	42 8a 0c 34          	mov    cl,BYTE PTR [rsp+r14*1]
   140005355:	41 00 cb             	add    r11b,cl
   140005358:	44 01 f0             	add    eax,r14d
   14000535b:	0f b6 c0             	movzx  eax,al
   14000535e:	44 02 1c 02          	add    r11b,BYTE PTR [rdx+rax*1]
   140005362:	41 0f b6 c3          	movzx  eax,r11b
   140005366:	40 8a 34 04          	mov    sil,BYTE PTR [rsp+rax*1]
   14000536a:	42 88 34 34          	mov    BYTE PTR [rsp+r14*1],sil
   14000536e:	49 ff c6             	inc    r14
   140005371:	88 0c 04             	mov    BYTE PTR [rsp+rax*1],cl
   140005374:	b9 00 01 00 00       	mov    ecx,0x100
   140005379:	4c 89 d7             	mov    rdi,r10
   14000537c:	4c 89 ce             	mov    rsi,r9
   14000537f:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
   140005381:	eb a9                	jmp    0x14000532c
   140005383:	48 8d b4 24 00 01 00 	lea    rsi,[rsp+0x100]
   14000538a:	00 
   14000538b:	b9 00 01 00 00       	mov    ecx,0x100
   140005390:	4c 89 c7             	mov    rdi,r8
   140005393:	f3 a4                	rep movs BYTE PTR [rdi],BYTE PTR [rsi]
   140005395:	66 41 83 a0 00 01 00 	and    WORD PTR [r8+0x100],0x0
   14000539c:	00 00 
   14000539e:	48 81 c4 00 02 00 00 	add    rsp,0x200
   1400053a5:	5b                   	pop    rbx
   1400053a6:	5f                   	pop    rdi
   1400053a7:	5e                   	pop    rsi
   1400053a8:	41 5e                	pop    r14
   1400053aa:	c3                   	ret
   1400053ab:	56                   	push   rsi
   1400053ac:	57                   	push   rdi
   1400053ad:	53                   	push   rbx
   1400053ae:	48 83 ec 20          	sub    rsp,0x20
   1400053b2:	4c 89 c6             	mov    rsi,r8
   1400053b5:	89 d3                	mov    ebx,edx
   1400053b7:	48 89 cf             	mov    rdi,rcx
   1400053ba:	48 8b 0f             	mov    rcx,QWORD PTR [rdi]
   1400053bd:	48 85 c9             	test   rcx,rcx
   1400053c0:	74 12                	je     0x1400053d4
   1400053c2:	fe c3                	inc    bl
   1400053c4:	89 da                	mov    edx,ebx
   1400053c6:	49 89 f0             	mov    r8,rsi
   1400053c9:	e8 dd ff ff ff       	call   0x1400053ab
   1400053ce:	48 8b 7f 08          	mov    rdi,QWORD PTR [rdi+0x8]
   1400053d2:	eb e6                	jmp    0x1400053ba
   1400053d4:	0f b6 4f 08          	movzx  ecx,BYTE PTR [rdi+0x8]
   1400053d8:	48 8b 56 10          	mov    rdx,QWORD PTR [rsi+0x10]
   1400053dc:	48 39 ca             	cmp    rdx,rcx
   1400053df:	76 0f                	jbe    0x1400053f0
   1400053e1:	48 8b 46 08          	mov    rax,QWORD PTR [rsi+0x8]
   1400053e5:	88 1c 08             	mov    BYTE PTR [rax+rcx*1],bl
   1400053e8:	48 83 c4 20          	add    rsp,0x20
   1400053ec:	5b                   	pop    rbx
   1400053ed:	5f                   	pop    rdi
   1400053ee:	5e                   	pop    rsi
   1400053ef:	c3                   	ret
   1400053f0:	4c 8d 05 a9 3d 0c 00 	lea    r8,[rip+0xc3da9]        # 0x1400c91a0
   1400053f7:	e8 2d e9 0b 00       	call   0x1400c3d29
   1400053fc:	0f 0b                	ud2
   1400053fe:	41 56                	push   r14
