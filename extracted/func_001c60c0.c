void func_001c60c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c60c0: addiu $sp, $sp, -0x20
    v0 = g_001c6032;  // Global at 0x001c6032                   // 0x001c60cc: lb $v0, 2($a0)
    a0 = 1;                                                     // 0x001c60d4: addiu $a0, $zero, 1
    if (v0 == a0) goto label_0x1c6124;                          // 0x001c60d8: beq $v0, $a0, 0x1c6124
    /* nop */                                                   // 0x001c60dc: nop 
    if (v0 == 0) goto label_0x1c60f0;                           // 0x001c60e0: beqz $v0, 0x1c60f0
    v1 = 0x47;                                                  // 0x001c60e4: addiu $v1, $zero, 0x47
    goto label_0x1c61ec;                                        // 0x001c60e8: b 0x1c61ec
    v0 = 1;                                                     // 0x001c60ec: addiu $v0, $zero, 1
label_0x1c60f0:
    v0 = 5;                                                     // 0x001c60f0: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c60f4: sw $v1, 0x2c($s0)
    *(uint32_t*)((s0) + 0x30) = a0;                             // 0x001c60f8: sw $a0, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = a0;                             // 0x001c60fc: sw $a0, 0x38($s0)
    func_001afb80();  // 0x1afb40                                // 0x001c6100: jal 0x1afb40
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c6104: sw $v0, 0x10($s0)
    if (v0 != 0) goto label_0x1c6118;                           // 0x001c6108: bnez $v0, 0x1c6118
    a0 = 0x1c << 16;                                            // 0x001c610c: lui $a0, 0x1c
    func_001af2f0();  // 0x1af280                                // 0x001c6110: jal 0x1af280
    a0 = a0 + 0x6030;                                           // 0x001c6114: addiu $a0, $a0, 0x6030
label_0x1c6118:
    v0 = *(int8_t*)((s0) + 2);                                  // 0x001c6118: lb $v0, 2($s0)
    v0 = v0 + 1;                                                // 0x001c611c: addiu $v0, $v0, 1
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c6120: sb $v0, 2($s0)
label_0x1c6124:
    v1 = *(uint16_t*)((s0) + 0xa);                              // 0x001c6124: lhu $v1, 0xa($s0)
    v0 = v1 & 0x20;                                             // 0x001c6128: andi $v0, $v1, 0x20
    if (v0 == 0) goto label_0x1c6180;                           // 0x001c612c: beqz $v0, 0x1c6180
    /* nop */                                                   // 0x001c6130: nop 
    func_001c7470();  // 0x1c7460                                // 0x001c6134: jal 0x1c7460
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x001c6138: sw $zero, 0x2c($s0)
    func_001afb80();  // 0x1afb40                                // 0x001c613c: jal 0x1afb40
    /* nop */                                                   // 0x001c6140: nop 
    if (v0 != 0) goto label_0x1c6154;                           // 0x001c6144: bnez $v0, 0x1c6154
    a0 = 0x1c << 16;                                            // 0x001c6148: lui $a0, 0x1c
    func_001af3a0();  // 0x1af2f0                                // 0x001c614c: jal 0x1af2f0
    a0 = a0 + 0x6030;                                           // 0x001c6150: addiu $a0, $a0, 0x6030
label_0x1c6154:
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001c6154: sw $zero, 0x30($s0)
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c6158: lw $v0, 0x38($s0)
    if (v0 != 0) goto label_0x1c6178;                           // 0x001c615c: bnez $v0, 0x1c6178
    a0 = *(int32_t*)((s0) + 0x20);                              // 0x001c6164: lw $a0, 0x20($s0)
    func_001c2e20();  // 0x1c2a50                                // 0x001c6168: jal 0x1c2a50
    a1 = 1;                                                     // 0x001c616c: addiu $a1, $zero, 1
    goto label_0x1c61ec;                                        // 0x001c6170: b 0x1c61ec
    v0 = 1;                                                     // 0x001c6174: addiu $v0, $zero, 1
label_0x1c6178:
    goto label_0x1c61f0;                                        // 0x001c6178: b 0x1c61f0
label_0x1c6180:
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x001c6180: lw $v0, 0x10($s0)
    if (v0 == 0) goto label_0x1c6198;                           // 0x001c6184: beqz $v0, 0x1c6198
    /* nop */                                                   // 0x001c6188: nop 
    v0 = v0 + -1;                                               // 0x001c618c: addiu $v0, $v0, -1
    goto label_0x1c61e8;                                        // 0x001c6190: b 0x1c61e8
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c6194: sw $v0, 0x10($s0)
label_0x1c6198:
    v0 = v1 & 8;                                                // 0x001c6198: andi $v0, $v1, 8
    if (v0 == 0) goto label_0x1c61b4;                           // 0x001c619c: beqz $v0, 0x1c61b4
    v0 = v1 & 4;                                                // 0x001c61a0: andi $v0, $v1, 4
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c61a4: lw $v0, 0x38($s0)
    if (v0 == 0) goto label_0x1c61cc;                           // 0x001c61a8: beqz $v0, 0x1c61cc
    /* nop */                                                   // 0x001c61ac: nop 
    v0 = v1 & 4;                                                // 0x001c61b0: andi $v0, $v1, 4
label_0x1c61b4:
    if (v0 == 0) goto label_0x1c61e8;                           // 0x001c61b4: beqz $v0, 0x1c61e8
    /* nop */                                                   // 0x001c61b8: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c61bc: lw $v1, 0x38($s0)
    v0 = 1;                                                     // 0x001c61c0: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1c61e8;                          // 0x001c61c4: bne $v1, $v0, 0x1c61e8
    /* nop */                                                   // 0x001c61c8: nop 
label_0x1c61cc:
    func_001c7480();  // 0x1c7470                                // 0x001c61cc: jal 0x1c7470
    /* nop */                                                   // 0x001c61d0: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c61d4: lw $v1, 0x38($s0)
    v0 = 5;                                                     // 0x001c61d8: addiu $v0, $zero, 5
    v1 = v1 ^ 1;                                                // 0x001c61dc: xori $v1, $v1, 1
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c61e0: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c61e4: sw $v0, 0x10($s0)
label_0x1c61e8:
    v0 = 1;                                                     // 0x001c61e8: addiu $v0, $zero, 1
label_0x1c61ec:
label_0x1c61f0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c61f0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c61f4: jr $ra
    sp = sp + 0x20;                                             // 0x001c61f8: addiu $sp, $sp, 0x20
}