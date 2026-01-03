void func_001d0490() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_28, local_2c, local_2e;
    
    sp = sp + -0x30;                                            // 0x001d0490: addiu $sp, $sp, -0x30
    func_001c90c0();  // 1c90c0                                // 0x001d04a0: jal 0x1c90c0
    a1 = sp + 0x28;                                             // 0x001d04a4: addiu $a1, $sp, 0x28
    if (v0 != 0) goto label_0x1d0548;                           // 0x001d04a8: bnez $v0, 0x1d0548
    v1 = 3;                                                     // 0x001d04ac: addiu $v1, $zero, 3
    if (s0 == v1) goto label_0x1d0520;                          // 0x001d04b0: beq $s0, $v1, 0x1d0520
    /* nop */                                                   // 0x001d04b4: nop 
    v1 = 2;                                                     // 0x001d04b8: addiu $v1, $zero, 2
    if (s0 == v1) goto label_0x1d04f4;                          // 0x001d04bc: beq $s0, $v1, 0x1d04f4
    a1 = 1;                                                     // 0x001d04c0: addiu $a1, $zero, 1
    if (s0 == a1) goto label_0x1d0548;                          // 0x001d04c4: beq $s0, $a1, 0x1d0548
    /* nop */                                                   // 0x001d04c8: nop 
    if (s0 == 0) goto label_0x1d04dc;                           // 0x001d04cc: beqz $s0, 0x1d04dc
    /* nop */                                                   // 0x001d04d0: nop 
    goto label_0x1d0548;                                        // 0x001d04d4: b 0x1d0548
    /* nop */                                                   // 0x001d04d8: nop 
label_0x1d04dc:
    a0 = local_28;                                              // 0x001d04dc: lh $a0, 0x28($sp)
    v1 = 4;                                                     // 0x001d04e0: addiu $v1, $zero, 4
    if (a0 != v1) goto label_0x1d0548;                          // 0x001d04e4: bne $a0, $v1, 0x1d0548
    /* nop */                                                   // 0x001d04e8: nop 
    goto label_0x1d0548;                                        // 0x001d04ec: b 0x1d0548
label_0x1d04f4:
    a0 = local_28;                                              // 0x001d04f4: lh $a0, 0x28($sp)
    v1 = 4;                                                     // 0x001d04f8: addiu $v1, $zero, 4
    if (a0 == v1) goto label_0x1d050c;                          // 0x001d04fc: beq $a0, $v1, 0x1d050c
    /* nop */                                                   // 0x001d0500: nop 
    goto label_0x1d0548;                                        // 0x001d0504: b 0x1d0548
    v0 = -6;                                                    // 0x001d0508: addiu $v0, $zero, -6
label_0x1d050c:
    v1 = local_2e;                                              // 0x001d050c: lhu $v1, 0x2e($sp)
    if (v1 == 0) goto label_0x1d0548;                           // 0x001d0510: beqz $v1, 0x1d0548
    /* nop */                                                   // 0x001d0514: nop 
    goto label_0x1d0548;                                        // 0x001d0518: b 0x1d0548
    v0 = 1;                                                     // 0x001d051c: addiu $v0, $zero, 1
label_0x1d0520:
    a0 = local_28;                                              // 0x001d0520: lh $a0, 0x28($sp)
    v1 = 4;                                                     // 0x001d0524: addiu $v1, $zero, 4
    if (a0 == v1) goto label_0x1d0538;                          // 0x001d0528: beq $a0, $v1, 0x1d0538
    /* nop */                                                   // 0x001d052c: nop 
    goto label_0x1d0548;                                        // 0x001d0530: b 0x1d0548
    v0 = -6;                                                    // 0x001d0534: addiu $v0, $zero, -6
label_0x1d0538:
    v1 = local_2c;                                              // 0x001d0538: lhu $v1, 0x2c($sp)
    if (v1 == 0) goto label_0x1d0548;                           // 0x001d053c: beqz $v1, 0x1d0548
    /* nop */                                                   // 0x001d0540: nop 
    v0 = 1;                                                     // 0x001d0544: addiu $v0, $zero, 1
label_0x1d0548:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d054c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d0550: jr $ra
    sp = sp + 0x30;                                             // 0x001d0554: addiu $sp, $sp, 0x30
}