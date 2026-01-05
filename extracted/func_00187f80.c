void func_00187f80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0xa0;                                            // 0x00187f80: addiu $sp, $sp, -0xa0
    v0 = 0x24;                                                  // 0x00187f84: addiu $v0, $zero, 0x24
    v1 = 0x28 << 16;                                            // 0x00187f8c: lui $v1, 0x28
    s1 = v1 + -0x2fb8;                                          // 0x00187f98: addiu $s1, $v1, -0x2fb8
    v0 = s1 + 4;                                                // 0x00187fa4: addiu $v0, $s1, 4
    s3 = s0 + v0;                                               // 0x00187fc4: addu $s3, $s0, $v0
    func_00188dc8();  // 188dc8                                // 0x00187fd0: jal 0x188dc8
    a0 = g_0027d0c0;  // Global at 0x0027d0c0                   // 0x00187fd4: lw $a0, 0($s3)
    v1 = 3;                                                     // 0x00187fd8: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x188090;                          // 0x00187fdc: beq $v0, $v1, 0x188090
    a0 = s1 + s0;                                               // 0x00187fe0: addu $a0, $s1, $s0
    s2 = 0x28 << 16;                                            // 0x00187fe4: lui $s2, 0x28
    t0 = 0x2080;                                                // 0x00187fec: addiu $t0, $zero, 0x2080
    a2 = g_0027d054;  // Global at 0x0027d054                   // 0x00187ff4: lw $a2, 8($v0)
    a3 = g_0028000c;  // Global at 0x0028000c                   // 0x00187ff8: lw $a3, 0xc($v1)
    v0 = s2 + -0x2f40;                                          // 0x00187ffc: addiu $v0, $s2, -0x2f40
    v1 = g_0027f150;  // Global at 0x0027f150                   // 0x00188000: lw $v1, 0x10($a0)
    g_0027d0e4 = s5;  // Global at 0x0027d0e4                   // 0x00188008: sw $s5, 0x24($v0)
    a0 = 0x28 << 16;                                            // 0x0018800c: lui $a0, 0x28
    g_0027d0c0 = s6;  // Global at 0x0027d0c0                   // 0x00188010: sw $s6, -0x2f40($s2)
    a0 = a0 + -0xec0;                                           // 0x00188014: addiu $a0, $a0, -0xec0
    g_0027d0c8 = a2;  // Global at 0x0027d0c8                   // 0x00188018: sw $a2, 8($v0)
    s0 = 0x21 << 16;                                            // 0x0018801c: lui $s0, 0x21
    g_0027d0cc = a3;  // Global at 0x0027d0cc                   // 0x00188020: sw $a3, 0xc($v0)
    a2 = 0x100;                                                 // 0x00188024: addiu $a2, $zero, 0x100
    g_0027d0d0 = v1;  // Global at 0x0027d0d0                   // 0x00188028: sw $v1, 0x10($v0)
    local_0 = t0;                                               // 0x00188030: sw $t0, 0($sp)
    s5 = 0x18 << 16;                                            // 0x00188034: lui $s5, 0x18
    g_0027d0c4 = s4;  // Global at 0x0027d0c4                   // 0x00188038: sw $s4, 4($v0)
    s3 = 1;                                                     // 0x0018803c: addiu $s3, $zero, 1
    g_0027d0d4 = 0;  // Global at 0x0027d0d4                    // 0x00188040: sw $zero, 0x14($v0)
    g_0027d0d8 = 0;  // Global at 0x0027d0d8                    // 0x00188044: sw $zero, 0x18($v0)
    g_0027d0dc = 0;  // Global at 0x0027d0dc                    // 0x00188048: sw $zero, 0x1c($v0)
    func_00107c70();  // 107c70                                // 0x0018804c: jal 0x107c70
    g_0027d0e0 = 0;  // Global at 0x0027d0e0                    // 0x00188050: sw $zero, 0x20($v0)
    v1 = 1;                                                     // 0x00188054: addiu $v1, $zero, 1
    g_00216324 = v1;  // Global at 0x00216324                   // 0x00188058: sw $v1, 0x6324($s0)
    a0 = g_0027d048;  // Global at 0x0027d048                   // 0x0018805c: lw $a0, 0($s1)
label_0x188060:
    a1 = g_00216324;  // Global at 0x00216324                   // 0x00188064: lw $a1, 0x6324($s0)
    a3 = s2 + -0x2f40;                                          // 0x00188068: addiu $a3, $s2, -0x2f40
    func_00189470();  // 189470                                // 0x0018806c: jal 0x189470
    t0 = s5 + 0x7700;                                           // 0x00188070: addiu $t0, $s5, 0x7700
    if (v0 != s3) goto label_0x188060;                          // 0x00188074: bnel $v0, $s3, 0x188060
    a0 = g_0027d048;  // Global at 0x0027d048                   // 0x00188078: lw $a0, 0($s1)
    func_001876a8();  // 1876a8                                // 0x0018807c: jal 0x1876a8
    /* nop */                                                   // 0x00188080: nop 
    v1 = g_0027d0c8;  // Global at 0x0027d0c8                   // 0x00188084: lw $v1, 8($v0)
    if (v1 != 0) goto label_0x188098;                           // 0x00188088: bnez $v1, 0x188098
    v0 = 0x28 << 16;                                            // 0x0018808c: lui $v0, 0x28
label_0x188090:
    goto label_0x1880e8;                                        // 0x00188090: b 0x1880e8
label_0x188098:
    if (s4 <= 0) goto label_0x1880e4;                           // 0x0018809c: blez $s4, 0x1880e4
    s1 = v0 + -0xe40;                                           // 0x001880a0: addiu $s1, $v0, -0xe40
    v0 = 0x28 << 16;                                            // 0x001880a4: lui $v0, 0x28
    s3 = v0 + -0x2f40;                                          // 0x001880ac: addiu $s3, $v0, -0x2f40
label_0x1880b0:
    a1 = g_0027d0c8;  // Global at 0x0027d0c8                   // 0x001880b0: lw $a1, 8($s3)
    s0 = s0 + -1;                                               // 0x001880b8: addiu $s0, $s0, -1
    func_00114bd8();  // 114bd8                                // 0x001880bc: jal 0x114bd8
    a1 = s1 + a1;                                               // 0x001880c0: addu $a1, $s1, $a1
    a2 = g_0027d0c8;  // Global at 0x0027d0c8                   // 0x001880c4: lw $a2, 8($s3)
    func_00107ab8();  // 107ab8                                // 0x001880cc: jal 0x107ab8
    v1 = g_0027d0c8;  // Global at 0x0027d0c8                   // 0x001880d4: lw $v1, 8($s3)
    s2 = s2 + v1;                                               // 0x001880d8: addu $s2, $s2, $v1
    if (s0 != 0) goto label_0x1880b0;                           // 0x001880dc: bnez $s0, 0x1880b0
    s1 = s1 + v1;                                               // 0x001880e0: addu $s1, $s1, $v1
label_0x1880e4:
label_0x1880e8:
    return;                                                     // 0x0018810c: jr $ra
    sp = sp + 0xa0;                                             // 0x00188110: addiu $sp, $sp, 0xa0
}