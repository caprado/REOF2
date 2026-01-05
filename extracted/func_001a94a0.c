void func_001a94a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a2 = *(int32_t*)((a1) + 0x20);                              // 0x001a94a0: lw $a2, 0x20($a1)
    a1 = *(int32_t*)((a1) + 8);                                 // 0x001a94a4: lw $a1, 8($a1)
    return func_001a93b0();  // Tail call                        // 0x001a94a8: j 0x1a92d0
    sp = sp + -0x270;                                           // 0x001a94b0: addiu $sp, $sp, -0x270
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001a94b8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a94c0: addu.qb $zero, $sp, $s1
    func_0010ac68();  // 10ac68                                // 0x001a94cc: jal 0x10ac68
    a0 = sp + 0x170;                                            // 0x001a94d0: addiu $a0, $sp, 0x170
    v0 = *(int32_t*)(s1);                                       // 0x001a94d4: lw $v0, 0($s1)
    if (v0 != 0) goto label_0x1a94f8;                           // 0x001a94d8: bnez $v0, 0x1a94f8
    a0 = sp + 0x170;                                            // 0x001a94dc: addiu $a0, $sp, 0x170
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x001a94e0: lw $a0, 0xc($s1)
    a1 = *(int32_t*)((s1) + 0x14);                              // 0x001a94e4: lw $a1, 0x14($s1)
    func_001aaa00();  // 1aaa00                                // 0x001a94e8: jal 0x1aaa00
    a2 = sp + 0x170;                                            // 0x001a94ec: addiu $a2, $sp, 0x170
    goto label_0x1a963c;                                        // 0x001a94f0: b 0x1a963c
label_0x1a94f8:
    func_0010ca50();  // 10ca50                                // 0x001a94f8: jal 0x10ca50
    /* nop */                                                   // 0x001a94fc: nop 
    a0 = sp + 0x170;                                            // 0x001a9500: addiu $a0, $sp, 0x170
    func_0010b460();  // 10b460                                // 0x001a9504: jal 0x10b460
    a1 = 0x2f;                                                  // 0x001a9508: addiu $a1, $zero, 0x2f
    if (v0 == 0) goto label_0x1a9528;                           // 0x001a950c: beqz $v0, 0x1a9528
    a0 = sp + 0x170;                                            // 0x001a9510: addiu $a0, $sp, 0x170
    a1 = v0 + 1;                                                // 0x001a9514: addiu $a1, $v0, 1
    func_0010ac68();  // 10ac68                                // 0x001a9518: jal 0x10ac68
    a0 = sp + 0x70;                                             // 0x001a951c: addiu $a0, $sp, 0x70
    goto label_0x1a9558;                                        // 0x001a9520: b 0x1a9558
    a0 = sp + 0x70;                                             // 0x001a9524: addiu $a0, $sp, 0x70
label_0x1a9528:
    func_0010b460();  // 10b460                                // 0x001a9528: jal 0x10b460
    a1 = 0x5c;                                                  // 0x001a952c: addiu $a1, $zero, 0x5c
    if (v0 != 0) goto label_0x1a954c;                           // 0x001a9530: bnez $v0, 0x1a954c
    a1 = v0 + 1;                                                // 0x001a9534: addiu $a1, $v0, 1
    a0 = sp + 0x70;                                             // 0x001a9538: addiu $a0, $sp, 0x70
    func_0010ac68();  // 10ac68                                // 0x001a953c: jal 0x10ac68
    a1 = sp + 0x170;                                            // 0x001a9540: addiu $a1, $sp, 0x170
    goto label_0x1a9554;                                        // 0x001a9544: b 0x1a9554
    /* nop */                                                   // 0x001a9548: nop 
label_0x1a954c:
    func_0010ac68();  // 10ac68                                // 0x001a954c: jal 0x10ac68
    a0 = sp + 0x70;                                             // 0x001a9550: addiu $a0, $sp, 0x70
label_0x1a9554:
    a0 = sp + 0x70;                                             // 0x001a9554: addiu $a0, $sp, 0x70
label_0x1a9558:
    func_0010ae00();  // 10ae00                                // 0x001a9558: jal 0x10ae00
    /* nop */                                                   // 0x001a955c: nop 
    if (v0 != 0) goto label_0x1a9570;                           // 0x001a9560: bnez $v0, 0x1a9570
    t0 = sp + 0x70;                                             // 0x001a9564: addiu $t0, $sp, 0x70
    goto label_0x1a9638;                                        // 0x001a9568: b 0x1a9638
    v0 = -1;                                                    // 0x001a956c: addiu $v0, $zero, -1
label_0x1a9570:
    a2 = 0x5f;                                                  // 0x001a9570: addiu $a2, $zero, 0x5f
    a3 = 0x5c;                                                  // 0x001a9574: addiu $a3, $zero, 0x5c
    a1 = 0x2f;                                                  // 0x001a9578: addiu $a1, $zero, 0x2f
    a0 = 0x2e;                                                  // 0x001a957c: addiu $a0, $zero, 0x2e
    goto label_0x1a95d0;                                        // 0x001a9580: b 0x1a95d0
    v0 = 0x2d;                                                  // 0x001a9584: addiu $v0, $zero, 0x2d
label_0x1a9588:
    if (v1 != a3) goto label_0x1a959c;                          // 0x001a9590: bne $v1, $a3, 0x1a959c
    /* nop */                                                   // 0x001a9594: nop 
    *(uint8_t*)(t0) = a2;                                       // 0x001a9598: sb $a2, 0($t0)
label_0x1a959c:
    v1 = *(int8_t*)(t0);                                        // 0x001a959c: lb $v1, 0($t0)
    if (v1 != a1) goto label_0x1a95ac;                          // 0x001a95a0: bne $v1, $a1, 0x1a95ac
    /* nop */                                                   // 0x001a95a4: nop 
    *(uint8_t*)(t0) = a2;                                       // 0x001a95a8: sb $a2, 0($t0)
label_0x1a95ac:
    v1 = *(int8_t*)(t0);                                        // 0x001a95ac: lb $v1, 0($t0)
    if (v1 != a0) goto label_0x1a95bc;                          // 0x001a95b0: bne $v1, $a0, 0x1a95bc
    /* nop */                                                   // 0x001a95b4: nop 
    *(uint8_t*)(t0) = a2;                                       // 0x001a95b8: sb $a2, 0($t0)
label_0x1a95bc:
    v1 = *(int8_t*)(t0);                                        // 0x001a95bc: lb $v1, 0($t0)
    if (v1 != v0) goto label_0x1a95cc;                          // 0x001a95c0: bne $v1, $v0, 0x1a95cc
    /* nop */                                                   // 0x001a95c4: nop 
    *(uint8_t*)(t0) = a2;                                       // 0x001a95c8: sb $a2, 0($t0)
label_0x1a95cc:
    t0 = t0 + 1;                                                // 0x001a95cc: addiu $t0, $t0, 1
label_0x1a95d0:
    v1 = *(int8_t*)(t0);                                        // 0x001a95d0: lb $v1, 0($t0)
    if (v1 != 0) goto label_0x1a9588;                           // 0x001a95d4: bnez $v1, 0x1a9588
    /* nop */                                                   // 0x001a95d8: nop 
    s3 = *(int32_t*)((s1) + 0xc);                               // 0x001a95dc: lw $s3, 0xc($s1)
    goto label_0x1a9624;                                        // 0x001a95e4: b 0x1a9624
    s2 = sp + 0x60;                                             // 0x001a95e8: addiu $s2, $sp, 0x60
label_0x1a95ec:
    func_00107ab8();  // 107ab8                                // 0x001a95f0: jal 0x107ab8
    a2 = 0x10;                                                  // 0x001a95f4: addiu $a2, $zero, 0x10
    a0 = sp + 0x70;                                             // 0x001a95f8: addiu $a0, $sp, 0x70
    a1 = sp + 0x50;                                             // 0x001a95fc: addiu $a1, $sp, 0x50
    func_0010ab20();  // 10ab20                                // 0x001a9600: jal 0x10ab20
    *(uint8_t*)(s2) = 0;                                        // 0x001a9604: sb $zero, 0($s2)
    if (v0 != 0) goto label_0x1a961c;                           // 0x001a9608: bnez $v0, 0x1a961c
    /* nop */                                                   // 0x001a960c: nop 
    v0 = *(int32_t*)((s1) + 0x18);                              // 0x001a9610: lw $v0, 0x18($s1)
    goto label_0x1a9638;                                        // 0x001a9614: b 0x1a9638
    v0 = s0 + v0;                                               // 0x001a9618: addu $v0, $s0, $v0
label_0x1a961c:
    s3 = s3 + 0x10;                                             // 0x001a961c: addiu $s3, $s3, 0x10
    s0 = s0 + 1;                                                // 0x001a9620: addiu $s0, $s0, 1
label_0x1a9624:
    v0 = *(int32_t*)((s1) + 0x14);                              // 0x001a9624: lw $v0, 0x14($s1)
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x001a9628: slt $v0, $s0, $v0
    if (v0 != 0) goto label_0x1a95ec;                           // 0x001a962c: bnez $v0, 0x1a95ec
    a0 = sp + 0x50;                                             // 0x001a9630: addiu $a0, $sp, 0x50
    v0 = -1;                                                    // 0x001a9634: addiu $v0, $zero, -1
label_0x1a9638:
label_0x1a963c:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a9640: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a9644: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a9648: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a964c: jr $ra
    sp = sp + 0x270;                                            // 0x001a9650: addiu $sp, $sp, 0x270
}