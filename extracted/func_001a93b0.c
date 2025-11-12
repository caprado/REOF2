void func_001a93b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001a93b0: addiu $sp, $sp, -0x40
    a1 = 0x2f;                                                  // 0x001a93b4: addiu $a1, $zero, 0x2f
    func_0010b4b0();  // 0x10b460                                // 0x001a93c0: jal 0x10b460
    if (v0 != 0) goto label_0x1a93d8;                           // 0x001a93c8: bnez $v0, 0x1a93d8
    func_0010b4b0();  // 0x10b460                                // 0x001a93d0: jal 0x10b460
    a1 = 0x5c;                                                  // 0x001a93d4: addiu $a1, $zero, 0x5c
label_0x1a93d8:
    if (v0 == 0) goto label_0x1a93e8;                           // 0x001a93d8: beqz $v0, 0x1a93e8
    /* nop */                                                   // 0x001a93dc: nop 
    goto label_0x1a93ec;                                        // 0x001a93e0: b 0x1a93ec
    v0 = v0 + 1;                                                // 0x001a93e4: addiu $v0, $v0, 1
label_0x1a93e8:
label_0x1a93ec:
    func_0010ae00();  // 0x10ac68                                // 0x001a93f0: jal 0x10ac68
    a0 = sp + 0x20;                                             // 0x001a93f4: addiu $a0, $sp, 0x20
    func_0010af38();  // 0x10ae00                                // 0x001a93f8: jal 0x10ae00
    a0 = sp + 0x20;                                             // 0x001a93fc: addiu $a0, $sp, 0x20
    if (v0 != 0) goto label_0x1a9410;                           // 0x001a9400: bnez $v0, 0x1a9410
    a0 = sp + 0x20;                                             // 0x001a9404: addiu $a0, $sp, 0x20
    goto label_0x1a9474;                                        // 0x001a9408: b 0x1a9474
    v0 = -1;                                                    // 0x001a940c: addiu $v0, $zero, -1
label_0x1a9410:
    func_0010caa0();  // 0x10ca50                                // 0x001a9410: jal 0x10ca50
    /* nop */                                                   // 0x001a9414: nop 
    a0 = sp + 0x20;                                             // 0x001a9418: addiu $a0, $sp, 0x20
    func_0010b4b0();  // 0x10b460                                // 0x001a941c: jal 0x10b460
    a1 = 0x2e;                                                  // 0x001a9420: addiu $a1, $zero, 0x2e
    if (v0 == 0) goto label_0x1a9434;                           // 0x001a9424: beqz $v0, 0x1a9434
    v1 = 0x5f;                                                  // 0x001a942c: addiu $v1, $zero, 0x5f
    g_00218821 = v1;  // Global at 0x00218821                   // 0x001a9430: sb $v1, 0($v0)
label_0x1a9434:
    goto label_0x1a9458;                                        // 0x001a9434: b 0x1a9458
    /* nop */                                                   // 0x001a9438: nop 
label_0x1a943c:
    func_0010ac68();  // 0x10ab20                                // 0x001a943c: jal 0x10ab20
    a0 = sp + 0x20;                                             // 0x001a9440: addiu $a0, $sp, 0x20
    if (v0 != 0) goto label_0x1a9454;                           // 0x001a9444: bnez $v0, 0x1a9454
    /* nop */                                                   // 0x001a9448: nop 
    goto label_0x1a9474;                                        // 0x001a944c: b 0x1a9474
label_0x1a9454:
    s0 = s0 + 1;                                                // 0x001a9454: addiu $s0, $s0, 1
label_0x1a9458:
    v0 = 0x22 << 16;                                            // 0x001a9458: lui $v0, 0x22
    v1 = s0 << 2;                                               // 0x001a945c: sll $v1, $s0, 2
    v0 = v0 + -0x77e0;                                          // 0x001a9460: addiu $v0, $v0, -0x77e0
    v0 = v0 + v1;                                               // 0x001a9464: addu $v0, $v0, $v1
    a1 = g_00218820;  // Global at 0x00218820                   // 0x001a9468: lw $a1, 0($v0)
    if (a1 != 0) goto label_0x1a943c;                           // 0x001a946c: bnez $a1, 0x1a943c
    v0 = -1;                                                    // 0x001a9470: addiu $v0, $zero, -1
label_0x1a9474:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a9478: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a947c: jr $ra
    sp = sp + 0x40;                                             // 0x001a9480: addiu $sp, $sp, 0x40
}