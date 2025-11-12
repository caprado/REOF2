void func_001a41d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_80, local_90;
    
    sp = sp + -0xa0;                                            // 0x001a41d0: addiu $sp, $sp, -0xa0
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001a41dc: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001a41e4: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a41ec: addu.qb $zero, $sp, $s1
    func_001a3230();  // 0x1a31e0                                // 0x001a4200: jal 0x1a31e0
    a1 = 0xa << 16;                                             // 0x001a4204: lui $a1, 0xa
    v0 = 0x22 << 16;                                            // 0x001a4208: lui $v0, 0x22
    v0 = v0 | 0x1000;                                           // 0x001a4210: ori $v0, $v0, 0x1000
    func_001a3320();  // 0x1a32e0                                // 0x001a4214: jal 0x1a32e0
    *(uint32_t*)(s1) = v0;                                      // 0x001a4218: sw $v0, 0($s1)
    func_001a3480();  // 0x1a3420                                // 0x001a4220: jal 0x1a3420
    *(uint32_t*)((s1) + 4) = v0;                                // 0x001a4228: sw $v0, 4($s1)
    func_001a3bb0();  // 0x1a3b20                                // 0x001a422c: jal 0x1a3b20
    v1 = 1;                                                     // 0x001a4234: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x1a4250;                          // 0x001a4238: bne $v0, $v1, 0x1a4250
    v1 = *(int32_t*)(s1);                                       // 0x001a4240: lw $v1, 0($s1)
    v0 = 0x10 << 16;                                            // 0x001a4244: lui $v0, 0x10
    v0 = v1 | v0;                                               // 0x001a4248: or $v0, $v1, $v0
    *(uint32_t*)(s1) = v0;                                      // 0x001a424c: sw $v0, 0($s1)
label_0x1a4250:
    goto label_0x1a4290;                                        // 0x001a4250: b 0x1a4290
label_0x1a4258:
    func_001a3420();  // 0x1a33a0                                // 0x001a4258: jal 0x1a33a0
    goto label_0x1a4280;                                        // 0x001a4264: b 0x1a4280
label_0x1a426c:
    func_001a3620();  // 0x1a3570                                // 0x001a4270: jal 0x1a3570
    t4 = t4 + v0;                                               // 0x001a4278: addu $t4, $t4, $v0
    t6 = t6 + 1;                                                // 0x001a427c: addiu $t6, $t6, 1
label_0x1a4280:
    v0 = (t6 < t5) ? 1 : 0;                                     // 0x001a4280: slt $v0, $t6, $t5
    if (v0 != 0) goto label_0x1a426c;                           // 0x001a4284: bnez $v0, 0x1a426c
    t7 = t7 + 1;                                                // 0x001a428c: addiu $t7, $t7, 1
label_0x1a4290:
    v0 = (t7 < s2) ? 1 : 0;                                     // 0x001a4290: slt $v0, $t7, $s2
    if (v0 != 0) goto label_0x1a4258;                           // 0x001a4294: bnez $v0, 0x1a4258
    a1 = *(int32_t*)((s1) + 4);                                 // 0x001a429c: lw $a1, 4($s1)
    v0 = 0x10 << 16;                                            // 0x001a42a0: lui $v0, 0x10
    a0 = *(int32_t*)(s1);                                       // 0x001a42a4: lw $a0, 0($s1)
    v1 = a1 + t4;                                               // 0x001a42a8: addu $v1, $a1, $t4
    v0 = a0 & v0;                                               // 0x001a42ac: and $v0, $a0, $v0
    if (v0 == 0) goto label_0x1a42c0;                           // 0x001a42b0: beqz $v0, 0x1a42c0
    a2 = v1 << 1;                                               // 0x001a42b4: sll $a2, $v1, 1
    v0 = a1 << 1;                                               // 0x001a42b8: sll $v0, $a1, 1
    a2 = a2 + v0;                                               // 0x001a42bc: addu $a2, $a2, $v0
label_0x1a42c0:
    v0 = 0x20 << 16;                                            // 0x001a42c0: lui $v0, 0x20
    v0 = a0 & v0;                                               // 0x001a42c4: and $v0, $a0, $v0
    if (v0 == 0) goto label_0x1a42d4;                           // 0x001a42c8: beqz $v0, 0x1a42d4
    v0 = a1 << 1;                                               // 0x001a42cc: sll $v0, $a1, 1
    a2 = a2 + v0;                                               // 0x001a42d0: addu $a2, $a2, $v0
label_0x1a42d4:
    v0 = *(int32_t*)((gp) + -0x6420);                           // 0x001a42d4: lw $v0, -0x6420($gp)
    at = (v0 < a2) ? 1 : 0;                                     // 0x001a42d8: slt $at, $v0, $a2
    if (at == 0) goto label_0x1a42e8;                           // 0x001a42dc: beqz $at, 0x1a42e8
    at = 4 << 16;                                               // 0x001a42e0: lui $at, 4
    *(uint32_t*)((gp) + -0x6420) = a2;                          // 0x001a42e4: sw $a2, -0x6420($gp)
label_0x1a42e8:
    at = at | 1;                                                // 0x001a42e8: ori $at, $at, 1
    at = (a2 < at) ? 1 : 0;                                     // 0x001a42ec: slt $at, $a2, $at
    if (at != 0) goto label_0x1a4300;                           // 0x001a42f0: bnez $at, 0x1a4300
    goto label_0x1a4864;                                        // 0x001a42f8: b 0x1a4864
label_0x1a4300:
    at = 0x31 << 16;                                            // 0x001a4300: lui $at, 0x31
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001a4304: lw $v1, 0x37fc($at)
    if (v1 != 0) goto label_0x1a4318;                           // 0x001a4308: bnez $v1, 0x1a4318
    v0 = 0x20 << 16;                                            // 0x001a430c: lui $v0, 0x20
    goto label_0x1a4860;                                        // 0x001a4310: b 0x1a4860
label_0x1a4318:
    v0 = v1 + v0;                                               // 0x001a4318: addu $v0, $v1, $v0
    *(uint32_t*)((s1) + 8) = v0;                                // 0x001a431c: sw $v0, 8($s1)
    *(uint32_t*)((s1) + 0x1c) = a2;                             // 0x001a4320: sw $a2, 0x1c($s1)
    s4 = *(int32_t*)((s1) + 8);                                 // 0x001a4324: lw $s4, 8($s1)
    goto label_0x1a4460;                                        // 0x001a4328: b 0x1a4460
label_0x1a4330:
    func_001a3420();  // 0x1a33a0                                // 0x001a4330: jal 0x1a33a0
    func_001a33a0();  // 0x1a3320                                // 0x001a4340: jal 0x1a3320
    goto label_0x1a4450;                                        // 0x001a434c: b 0x1a4450
label_0x1a4354:
    func_001a3620();  // 0x1a3570                                // 0x001a4358: jal 0x1a3570
    *(uint16_t*)(s4) = v0;                                      // 0x001a4360: sh $v0, 0($s4)
    func_001a36e0();  // 0x1a3620                                // 0x001a4370: jal 0x1a3620
    if (v0 == 0) goto label_0x1a4390;                           // 0x001a4378: beqz $v0, 0x1a4390
    /* nop */                                                   // 0x001a437c: nop 
    v0 = *(uint16_t*)(s4);                                      // 0x001a4380: lhu $v0, 0($s4)
    v0 = v0 | 0x8000;                                           // 0x001a4384: ori $v0, $v0, 0x8000
    goto label_0x1a439c;                                        // 0x001a4388: b 0x1a439c
    *(uint16_t*)(s4) = v0;                                      // 0x001a438c: sh $v0, 0($s4)
label_0x1a4390:
    v0 = *(uint16_t*)(s4);                                      // 0x001a4390: lhu $v0, 0($s4)
    v0 = v0 | 0x4000;                                           // 0x001a4394: ori $v0, $v0, 0x4000
    *(uint16_t*)(s4) = v0;                                      // 0x001a4398: sh $v0, 0($s4)
label_0x1a439c:
    v1 = *(int32_t*)(s1);                                       // 0x001a439c: lw $v1, 0($s1)
    v0 = 0x10 << 16;                                            // 0x001a43a0: lui $v0, 0x10
    v0 = v1 & v0;                                               // 0x001a43a4: and $v0, $v1, $v0
    if (v0 == 0) goto label_0x1a43c8;                           // 0x001a43a8: beqz $v0, 0x1a43c8
    s4 = s4 + 2;                                                // 0x001a43ac: addiu $s4, $s4, 2
    func_001a3570();  // 0x1a34c0                                // 0x001a43b8: jal 0x1a34c0
    *(uint16_t*)(s4) = v0;                                      // 0x001a43c0: sh $v0, 0($s4)
    s4 = s4 + 2;                                                // 0x001a43c4: addiu $s4, $s4, 2
label_0x1a43c8:
    v1 = *(int32_t*)(s1);                                       // 0x001a43c8: lw $v1, 0($s1)
    v0 = 0x20 << 16;                                            // 0x001a43cc: lui $v0, 0x20
    v0 = v1 & v0;                                               // 0x001a43d0: and $v0, $v1, $v0
    if (v0 == 0) goto label_0x1a440c;                           // 0x001a43d4: beqz $v0, 0x1a440c
    v0 = 4 << 16;                                               // 0x001a43d8: lui $v0, 4
    if (s3 == v0) goto label_0x1a4400;                          // 0x001a43dc: beq $s3, $v0, 0x1a4400
    /* nop */                                                   // 0x001a43e0: nop 
    v0 = 3 << 16;                                               // 0x001a43e4: lui $v0, 3
    if (s3 == v0) goto label_0x1a43f8;                          // 0x001a43e8: beq $s3, $v0, 0x1a43f8
    /* nop */                                                   // 0x001a43ec: nop 
    goto label_0x1a440c;                                        // 0x001a43f0: b 0x1a440c
    s4 = s4 + 2;                                                // 0x001a43f4: addiu $s4, $s4, 2
label_0x1a43f8:
    goto label_0x1a4408;                                        // 0x001a43f8: b 0x1a4408
    *(uint16_t*)(s4) = 0;                                       // 0x001a43fc: sh $zero, 0($s4)
label_0x1a4400:
    v0 = 1;                                                     // 0x001a4400: addiu $v0, $zero, 1
    *(uint16_t*)(s4) = v0;                                      // 0x001a4404: sh $v0, 0($s4)
label_0x1a4408:
    s4 = s4 + 2;                                                // 0x001a4408: addiu $s4, $s4, 2
label_0x1a440c:
    v0 = *(int32_t*)(s1);                                       // 0x001a440c: lw $v0, 0($s1)
    v0 = v0 & 0x1000;                                           // 0x001a4410: andi $v0, $v0, 0x1000
    if (v0 == 0) goto label_0x1a444c;                           // 0x001a4414: beqz $v0, 0x1a444c
    goto label_0x1a4444;                                        // 0x001a441c: b 0x1a4444
    v0 = (s5 < t7) ? 1 : 0;                                     // 0x001a4420: slt $v0, $s5, $t7
label_0x1a4424:
    func_001a37c0();  // 0x1a36e0                                // 0x001a442c: jal 0x1a36e0
    *(uint16_t*)(s4) = v0;                                      // 0x001a4434: sh $v0, 0($s4)
    s5 = s5 + 1;                                                // 0x001a4438: addiu $s5, $s5, 1
    s4 = s4 + 2;                                                // 0x001a443c: addiu $s4, $s4, 2
    v0 = (s5 < t7) ? 1 : 0;                                     // 0x001a4440: slt $v0, $s5, $t7
label_0x1a4444:
    if (v0 != 0) goto label_0x1a4424;                           // 0x001a4444: bnez $v0, 0x1a4424
label_0x1a444c:
    t4 = t4 + 1;                                                // 0x001a444c: addiu $t4, $t4, 1
label_0x1a4450:
    v0 = (t4 < t5) ? 1 : 0;                                     // 0x001a4450: slt $v0, $t4, $t5
    if (v0 != 0) goto label_0x1a4354;                           // 0x001a4454: bnez $v0, 0x1a4354
    t6 = t6 + 1;                                                // 0x001a445c: addiu $t6, $t6, 1
label_0x1a4460:
    v0 = (t6 < s2) ? 1 : 0;                                     // 0x001a4460: slt $v0, $t6, $s2
    if (v0 != 0) goto label_0x1a4330;                           // 0x001a4464: bnez $v0, 0x1a4330
    v0 = 0x35;                                                  // 0x001a446c: addiu $v0, $zero, 0x35
    *(uint32_t*)((s1) + 0xc) = v0;                              // 0x001a4474: sw $v0, 0xc($s1)
    v0 = *(int32_t*)((s1) + 0xc);                               // 0x001a4478: lw $v0, 0xc($s1)
    v0 = v0 | 0x100;                                            // 0x001a447c: ori $v0, $v0, 0x100
    func_001a34c0();  // 0x1a3480                                // 0x001a4480: jal 0x1a3480
    *(uint32_t*)((s1) + 0xc) = v0;                              // 0x001a4484: sw $v0, 0xc($s1)
    *(uint32_t*)((s1) + 0x14) = v0;                             // 0x001a4488: sw $v0, 0x14($s1)
    a0 = *(int32_t*)((s1) + 0x14);                              // 0x001a448c: lw $a0, 0x14($s1)
    v0 = *(int32_t*)((gp) + -0x6420);                           // 0x001a4490: lw $v0, -0x6420($gp)
    v1 = a0 << 2;                                               // 0x001a4494: sll $v1, $a0, 2
    v1 = v1 + a0;                                               // 0x001a4498: addu $v1, $v1, $a0
    v1 = v1 << 1;                                               // 0x001a449c: sll $v1, $v1, 1
    v1 = v1 + a0;                                               // 0x001a44a0: addu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x001a44a4: sll $v1, $v1, 2
    at = (v0 < v1) ? 1 : 0;                                     // 0x001a44a8: slt $at, $v0, $v1
    if (at == 0) goto label_0x1a44b8;                           // 0x001a44ac: beqz $at, 0x1a44b8
    at = 4 << 16;                                               // 0x001a44b0: lui $at, 4
    *(uint32_t*)((gp) + -0x6420) = v1;                          // 0x001a44b4: sw $v1, -0x6420($gp)
label_0x1a44b8:
    at = at | 1;                                                // 0x001a44b8: ori $at, $at, 1
    at = (v1 < at) ? 1 : 0;                                     // 0x001a44bc: slt $at, $v1, $at
    if (at != 0) goto label_0x1a44d0;                           // 0x001a44c0: bnez $at, 0x1a44d0
    goto label_0x1a4860;                                        // 0x001a44c8: b 0x1a4860
    /* nop */                                                   // 0x001a44cc: nop 
label_0x1a44d0:
    at = 0x31 << 16;                                            // 0x001a44d0: lui $at, 0x31
    a0 = g_003137fc;  // Global at 0x003137fc                   // 0x001a44d4: lw $a0, 0x37fc($at)
    if (a0 != 0) goto label_0x1a44e8;                           // 0x001a44d8: bnez $a0, 0x1a44e8
    v0 = 0x24 << 16;                                            // 0x001a44dc: lui $v0, 0x24
    goto label_0x1a4860;                                        // 0x001a44e0: b 0x1a4860
label_0x1a44e8:
    v0 = a0 + v0;                                               // 0x001a44ec: addu $v0, $a0, $v0
    s3 = sp + 0x94;                                             // 0x001a44f0: addiu $s3, $sp, 0x94
    *(uint32_t*)((s1) + 0x10) = v0;                             // 0x001a44f4: sw $v0, 0x10($s1)
    s2 = sp + 0x98;                                             // 0x001a44f8: addiu $s2, $sp, 0x98
    *(uint32_t*)((s1) + 0x18) = v1;                             // 0x001a44fc: sw $v1, 0x18($s1)
    t9 = sp + 0x9c;                                             // 0x001a4500: addiu $t9, $sp, 0x9c
    t2 = *(int32_t*)((s1) + 0x10);                              // 0x001a4504: lw $t2, 0x10($s1)
    t8 = sp + 0x84;                                             // 0x001a4508: addiu $t8, $sp, 0x84
    t7 = sp + 0x88;                                             // 0x001a450c: addiu $t7, $sp, 0x88
    goto label_0x1a484c;                                        // 0x001a4510: b 0x1a484c
    s6 = sp + 0x8c;                                             // 0x001a4514: addiu $s6, $sp, 0x8c
label_0x1a4518:
    func_001a3810();  // 0x1a37c0                                // 0x001a4518: jal 0x1a37c0
    FPU_F0 = *(float*)(v0);  // Load float                      // 0x001a4520: lwc1 $f0, 0($v0)
    *(float*)(t2) = FPU_F0;  // Store float                     // 0x001a452c: swc1 $f0, 0($t2)
    FPU_F0 = *(float*)((v0) + 4);  // Load float                // 0x001a4530: lwc1 $f0, 4($v0)
    *(float*)((t2) + 4) = FPU_F0;  // Store float               // 0x001a4534: swc1 $f0, 4($t2)
    FPU_F0 = *(float*)((v0) + 8);  // Load float                // 0x001a4538: lwc1 $f0, 8($v0)
    func_001a3860();  // 0x1a3810                                // 0x001a453c: jal 0x1a3810
    *(float*)((t2) + 8) = FPU_F0;  // Store float               // 0x001a4540: swc1 $f0, 8($t2)
    FPU_F0 = *(float*)(v0);  // Load float                      // 0x001a4544: lwc1 $f0, 0($v0)
    *(float*)((t2) + 0xc) = FPU_F0;  // Store float             // 0x001a4550: swc1 $f0, 0xc($t2)
    FPU_F0 = *(float*)((v0) + 4);  // Load float                // 0x001a4554: lwc1 $f0, 4($v0)
    *(float*)((t2) + 0x10) = FPU_F0;  // Store float            // 0x001a4558: swc1 $f0, 0x10($t2)
    FPU_F0 = *(float*)((v0) + 8);  // Load float                // 0x001a455c: lwc1 $f0, 8($v0)
    func_001a38a0();  // 0x1a3860                                // 0x001a4560: jal 0x1a3860
    *(float*)((t2) + 0x14) = FPU_F0;  // Store float            // 0x001a4564: swc1 $f0, 0x14($t2)
    FPU_F0 = *(float*)(v0);  // Load float                      // 0x001a4568: lwc1 $f0, 0($v0)
    *(float*)((t2) + 0x1c) = FPU_F0;  // Store float            // 0x001a4574: swc1 $f0, 0x1c($t2)
    FPU_F0 = *(float*)((v0) + 4);  // Load float                // 0x001a4578: lwc1 $f0, 4($v0)
    func_001a38e0();  // 0x1a38a0                                // 0x001a457c: jal 0x1a38a0
    *(float*)((t2) + 0x20) = FPU_F0;  // Store float            // 0x001a4580: swc1 $f0, 0x20($t2)
    FPU_F1 = *(float*)((v0) + 0xc);  // Load float              // 0x001a4584: lwc1 $f1, 0xc($v0)
    v1 = 0x4f00 << 16;                                          // 0x001a4588: lui $v1, 0x4f00
    /* move to FPU: $v1, $f0 */                                 // 0x001a458c: mtc1 $v1, $f0
    /* nop */                                                   // 0x001a4590: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001a4594: c.ole.s $f0, $f1
    /* bc1t 0x1a45b0 */                                         // 0x001a4598: bc1t 0x1a45b0
    /* nop */                                                   // 0x001a459c: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a45a0: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a45a4: mfc1 $a0, $f1
    goto label_0x1a45cc;                                        // 0x001a45a8: b 0x1a45cc
    FPU_F1 = *(float*)(v0);  // Load float                      // 0x001a45ac: lwc1 $f1, 0($v0)
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001a45b0: sub.s $f1, $f1, $f0
    v1 = 0x8000 << 16;                                          // 0x001a45b4: lui $v1, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a45b8: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a45bc: mfc1 $a0, $f1
    /* nop */                                                   // 0x001a45c0: nop 
    a0 = a0 | v1;                                               // 0x001a45c4: or $a0, $a0, $v1
    FPU_F1 = *(float*)(v0);  // Load float                      // 0x001a45c8: lwc1 $f1, 0($v0)
label_0x1a45cc:
    v1 = 0x4f00 << 16;                                          // 0x001a45cc: lui $v1, 0x4f00
    /* move to FPU: $v1, $f0 */                                 // 0x001a45d0: mtc1 $v1, $f0
    /* nop */                                                   // 0x001a45d4: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001a45d8: c.ole.s $f0, $f1
    /* bc1t 0x1a45f4 */                                         // 0x001a45dc: bc1t 0x1a45f4
    a1 = a0 << 0x18;                                            // 0x001a45e0: sll $a1, $a0, 0x18
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a45e4: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a45e8: mfc1 $a0, $f1
    goto label_0x1a4610;                                        // 0x001a45ec: b 0x1a4610
    FPU_F1 = *(float*)((v0) + 4);  // Load float                // 0x001a45f0: lwc1 $f1, 4($v0)
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001a45f4: sub.s $f1, $f1, $f0
    v1 = 0x8000 << 16;                                          // 0x001a45f8: lui $v1, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a45fc: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a4600: mfc1 $a0, $f1
    /* nop */                                                   // 0x001a4604: nop 
    a0 = a0 | v1;                                               // 0x001a4608: or $a0, $a0, $v1
    FPU_F1 = *(float*)((v0) + 4);  // Load float                // 0x001a460c: lwc1 $f1, 4($v0)
label_0x1a4610:
    v1 = a0 << 0x10;                                            // 0x001a4610: sll $v1, $a0, 0x10
    a1 = a1 | v1;                                               // 0x001a4614: or $a1, $a1, $v1
    v1 = 0x4f00 << 16;                                          // 0x001a4618: lui $v1, 0x4f00
    /* move to FPU: $v1, $f0 */                                 // 0x001a461c: mtc1 $v1, $f0
    /* nop */                                                   // 0x001a4620: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001a4624: c.ole.s $f0, $f1
    /* bc1t 0x1a4640 */                                         // 0x001a4628: bc1t 0x1a4640
    /* nop */                                                   // 0x001a462c: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a4630: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a4634: mfc1 $a0, $f1
    goto label_0x1a465c;                                        // 0x001a4638: b 0x1a465c
    FPU_F1 = *(float*)((v0) + 8);  // Load float                // 0x001a463c: lwc1 $f1, 8($v0)
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001a4640: sub.s $f1, $f1, $f0
    v1 = 0x8000 << 16;                                          // 0x001a4644: lui $v1, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a4648: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001a464c: mfc1 $a0, $f1
    /* nop */                                                   // 0x001a4650: nop 
    a0 = a0 | v1;                                               // 0x001a4654: or $a0, $a0, $v1
    FPU_F1 = *(float*)((v0) + 8);  // Load float                // 0x001a4658: lwc1 $f1, 8($v0)
label_0x1a465c:
    v1 = a0 << 8;                                               // 0x001a465c: sll $v1, $a0, 8
    v0 = 0x4f00 << 16;                                          // 0x001a4660: lui $v0, 0x4f00
    /* move to FPU: $v0, $f0 */                                 // 0x001a4664: mtc1 $v0, $f0
    /* nop */                                                   // 0x001a4668: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001a466c: c.ole.s $f0, $f1
    /* bc1t 0x1a4688 */                                         // 0x001a4670: bc1t 0x1a4688
    a0 = v1 | a1;                                               // 0x001a4674: or $a0, $v1, $a1
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a4678: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001a467c: mfc1 $v1, $f1
    goto label_0x1a46a4;                                        // 0x001a4680: b 0x1a46a4
    v0 = v1 | a0;                                               // 0x001a4684: or $v0, $v1, $a0
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001a4688: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001a468c: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a4690: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001a4694: mfc1 $v1, $f1
    /* nop */                                                   // 0x001a4698: nop 
    v1 = v1 | v0;                                               // 0x001a469c: or $v1, $v1, $v0
    v0 = v1 | a0;                                               // 0x001a46a0: or $v0, $v1, $a0
label_0x1a46a4:
    *(uint32_t*)((t2) + 0x18) = v0;                             // 0x001a46a8: sw $v0, 0x18($t2)
    *(uint32_t*)((t2) + 0x24) = 0;                              // 0x001a46b0: sw $zero, 0x24($t2)
    t5 = t2 + 0x24;                                             // 0x001a46b4: addiu $t5, $t2, 0x24
    t6 = t2 + 0x28;                                             // 0x001a46b8: addiu $t6, $t2, 0x28
    func_001a3940();  // 0x1a38e0                                // 0x001a46bc: jal 0x1a38e0
    *(uint32_t*)((t2) + 0x28) = 0;                              // 0x001a46c0: sw $zero, 0x28($t2)
    local_90 = 0;                                               // 0x001a46c4: sw $zero, 0x90($sp)
    *(uint32_t*)(s3) = 0;                                       // 0x001a46cc: sw $zero, 0($s3)
    *(uint32_t*)(s2) = 0;                                       // 0x001a46d4: sw $zero, 0($s2)
    *(uint32_t*)(t9) = 0;                                       // 0x001a46dc: sw $zero, 0($t9)
    local_80 = 0;                                               // 0x001a46e0: sw $zero, 0x80($sp)
    *(uint32_t*)(t8) = 0;                                       // 0x001a46e4: sw $zero, 0($t8)
    *(uint32_t*)(t7) = 0;                                       // 0x001a46e8: sw $zero, 0($t7)
    goto label_0x1a4764;                                        // 0x001a46ec: b 0x1a4764
    *(uint32_t*)(s6) = 0;                                       // 0x001a46f0: sw $zero, 0($s6)
label_0x1a46f4:
    func_001a39d0();  // 0x1a3940                                // 0x001a46f8: jal 0x1a3940
    FPU_F1 = *(float*)((v0) + 4);  // Load float                // 0x001a4700: lwc1 $f1, 4($v0)
    a0 = 0x437f << 16;                                          // 0x001a4704: lui $a0, 0x437f
    /* move to FPU: $a0, $f2 */                                 // 0x001a4708: mtc1 $a0, $f2
    v1 = t3 << 2;                                               // 0x001a470c: sll $v1, $t3, 2
    a0 = v1 + sp;                                               // 0x001a4710: addu $a0, $v1, $sp
    a1 = a0 + 0x90;                                             // 0x001a4714: addiu $a1, $a0, 0x90
    a0 = 0x42c8 << 16;                                          // 0x001a4718: lui $a0, 0x42c8
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x001a471c: mul.s $f1, $f2, $f1
    /* move to FPU: $a0, $f0 */                                 // 0x001a4720: mtc1 $a0, $f0
    /* nop */                                                   // 0x001a4724: nop 
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x001a4728: div.s $f0, $f1, $f0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001a472c: cvt.w.s $f0, $f0
    /* move from FPU: $a0, $f0 */                               // 0x001a4730: mfc1 $a0, $f0
    /* nop */                                                   // 0x001a4734: nop 
    a0 = a0 & 0xff;                                             // 0x001a4738: andi $a0, $a0, 0xff
    g_437f0090 = a0;  // Global at 0x437f0090                   // 0x001a473c: sw $a0, 0($a1)
    a0 = g_437f0090;  // Global at 0x437f0090                   // 0x001a4740: lw $a0, 0($a1)
    at = (0 < a0) ? 1 : 0;                                      // 0x001a4744: slt $at, $zero, $a0
    if (at == 0) goto label_0x1a4754;                           // 0x001a4748: beqz $at, 0x1a4754
    /* nop */                                                   // 0x001a474c: nop 
label_0x1a4754:
    a0 = g_80000000;  // Global at 0x80000000                   // 0x001a4754: lbu $a0, 0($v0)
    t3 = t3 + 1;                                                // 0x001a4758: addiu $t3, $t3, 1
    v0 = v1 + sp;                                               // 0x001a475c: addu $v0, $v1, $sp
    g_80000080 = a0;  // Global at 0x80000080                   // 0x001a4760: sw $a0, 0x80($v0)
label_0x1a4764:
    v0 = (t3 < s5) ? 1 : 0;                                     // 0x001a4764: slt $v0, $t3, $s5
    if (v0 != 0) goto label_0x1a46f4;                           // 0x001a4768: bnez $v0, 0x1a46f4
    t1 = local_90;                                              // 0x001a4770: lw $t1, 0x90($sp)
    v0 = s4 << 2;                                               // 0x001a4774: sll $v0, $s4, 2
    t0 = *(int32_t*)(s3);                                       // 0x001a4778: lw $t0, 0($s3)
    a1 = v0 + sp;                                               // 0x001a477c: addu $a1, $v0, $sp
    a3 = *(int32_t*)(s2);                                       // 0x001a4780: lw $a3, 0($s2)
    t3 = 0xff;                                                  // 0x001a4784: addiu $t3, $zero, 0xff
    a2 = *(int32_t*)(t9);                                       // 0x001a4788: lw $a2, 0($t9)
    a0 = s5 + -1;                                               // 0x001a478c: addiu $a0, $s5, -1
    v1 = g_437f0120;  // Global at 0x437f0120                   // 0x001a4790: lw $v1, 0x90($a1)
    t1 = t3 - t1;                                               // 0x001a4798: subu $t1, $t3, $t1
    t0 = t1 - t0;                                               // 0x001a479c: subu $t0, $t1, $t0
    a3 = t0 - a3;                                               // 0x001a47a0: subu $a3, $t0, $a3
    a2 = a3 - a2;                                               // 0x001a47a4: subu $a2, $a3, $a2
    v1 = v1 + a2;                                               // 0x001a47a8: addu $v1, $v1, $a2
    goto label_0x1a47e0;                                        // 0x001a47ac: b 0x1a47e0
    g_437f0120 = v1;  // Global at 0x437f0120                   // 0x001a47b0: sw $v1, 0x90($a1)
label_0x1a47b4:
    a1 = v1 + sp;                                               // 0x001a47b4: addu $a1, $v1, $sp
    v1 = g_437f0120;  // Global at 0x437f0120                   // 0x001a47b8: lw $v1, 0x90($a1)
    if (v1 != 0) goto label_0x1a47dc;                           // 0x001a47bc: bnez $v1, 0x1a47dc
    a2 = a1 + 0x90;                                             // 0x001a47c0: addiu $a2, $a1, 0x90
    v1 = g_437f0124;  // Global at 0x437f0124                   // 0x001a47c4: lw $v1, 4($a2)
    a1 = a1 + 0x80;                                             // 0x001a47c8: addiu $a1, $a1, 0x80
    g_437f0120 = v1;  // Global at 0x437f0120                   // 0x001a47cc: sw $v1, 0($a2)
    v1 = g_437f0114;  // Global at 0x437f0114                   // 0x001a47d0: lw $v1, 4($a1)
    g_437f0110 = v1;  // Global at 0x437f0110                   // 0x001a47d4: sw $v1, 0($a1)
    g_437f0124 = 0;  // Global at 0x437f0124                    // 0x001a47d8: sw $zero, 4($a2)
label_0x1a47dc:
    v0 = v0 + 1;                                                // 0x001a47dc: addiu $v0, $v0, 1
label_0x1a47e0:
    v1 = (v0 < a0) ? 1 : 0;                                     // 0x001a47e0: slt $v1, $v0, $a0
    if (v1 != 0) goto label_0x1a47b4;                           // 0x001a47e4: bnez $v1, 0x1a47b4
    v1 = v0 << 2;                                               // 0x001a47e8: sll $v1, $v0, 2
    a1 = local_90;                                              // 0x001a47ec: lw $a1, 0x90($sp)
    t2 = t2 + 0x2c;                                             // 0x001a47f0: addiu $t2, $t2, 0x2c
    a0 = *(int32_t*)(s3);                                       // 0x001a47f4: lw $a0, 0($s3)
    t4 = t4 + 1;                                                // 0x001a47f8: addiu $t4, $t4, 1
    v1 = *(int32_t*)(s2);                                       // 0x001a47fc: lw $v1, 0($s2)
    v0 = *(int32_t*)(t9);                                       // 0x001a4800: lw $v0, 0($t9)
    a1 = a1 << 0x18;                                            // 0x001a4804: sll $a1, $a1, 0x18
    a0 = a0 << 0x10;                                            // 0x001a4808: sll $a0, $a0, 0x10
    a0 = a1 | a0;                                               // 0x001a480c: or $a0, $a1, $a0
    v1 = v1 << 8;                                               // 0x001a4810: sll $v1, $v1, 8
    v1 = v1 | a0;                                               // 0x001a4814: or $v1, $v1, $a0
    v0 = v0 | v1;                                               // 0x001a4818: or $v0, $v0, $v1
    *(uint32_t*)(t6) = v0;                                      // 0x001a481c: sw $v0, 0($t6)
    a1 = local_80;                                              // 0x001a4820: lw $a1, 0x80($sp)
    a0 = *(int32_t*)(t8);                                       // 0x001a4824: lw $a0, 0($t8)
    v1 = *(int32_t*)(t7);                                       // 0x001a4828: lw $v1, 0($t7)
    v0 = *(int32_t*)(s6);                                       // 0x001a482c: lw $v0, 0($s6)
    a1 = a1 << 0x18;                                            // 0x001a4830: sll $a1, $a1, 0x18
    a0 = a0 << 0x10;                                            // 0x001a4834: sll $a0, $a0, 0x10
    a0 = a1 | a0;                                               // 0x001a4838: or $a0, $a1, $a0
    v1 = v1 << 8;                                               // 0x001a483c: sll $v1, $v1, 8
    v1 = v1 | a0;                                               // 0x001a4840: or $v1, $v1, $a0
    v0 = v0 | v1;                                               // 0x001a4844: or $v0, $v0, $v1
    *(uint32_t*)(t5) = v0;                                      // 0x001a4848: sw $v0, 0($t5)
label_0x1a484c:
    v0 = *(int32_t*)((s1) + 0x14);                              // 0x001a484c: lw $v0, 0x14($s1)
    v0 = (t4 < v0) ? 1 : 0;                                     // 0x001a4850: slt $v0, $t4, $v0
    if (v0 != 0) goto label_0x1a4518;                           // 0x001a4854: bnez $v0, 0x1a4518
    v0 = 1;                                                     // 0x001a485c: addiu $v0, $zero, 1
label_0x1a4860:
label_0x1a4864:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001a4864: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001a4868: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001a486c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a4874: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a4878: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a487c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a4880: jr $ra
    sp = sp + 0xa0;                                             // 0x001a4884: addiu $sp, $sp, 0xa0
}