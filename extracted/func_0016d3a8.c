void func_0016d3a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x60;                                            // 0x0016d3a8: addiu $sp, $sp, -0x60
    s3 = *(int32_t*)((s4) + 0x1b30);                            // 0x0016d3e4: lw $s3, 0x1b30($s4)
    s6 = *(int32_t*)(s3);                                       // 0x0016d3e8: lw $s6, 0($s3)
    v0 = s3 + 0x93c;                                            // 0x0016d3ec: addiu $v0, $s3, 0x93c
    a2 = *(int32_t*)((v0) + 8);                                 // 0x0016d3f0: lw $a2, 8($v0)
    s5 = s3 + 0x8c;                                             // 0x0016d3f4: addiu $s5, $s3, 0x8c
    a1 = *(int32_t*)((v0) + 0xc);                               // 0x0016d3f8: lw $a1, 0xc($v0)
    func_001591b8();  // 0x1591a0                                // 0x0016d3fc: jal 0x1591a0
    a2 = 1;                                                     // 0x0016d408: addiu $a2, $zero, 1
    func_0013fcc0();  // 0x13fca8                                // 0x0016d40c: jal 0x13fca8
    func_001593d0();  // 0x1591e0                                // 0x0016d41c: jal 0x1591e0
    a2 = 1;                                                     // 0x0016d42c: addiu $a2, $zero, 1
    func_0013fcc0();  // 0x13fca8                                // 0x0016d430: jal 0x13fca8
    s0 = v0 - s2;                                               // 0x0016d438: subu $s0, $v0, $s2
    a3 = 0xff00 << 16;                                          // 0x0016d43c: lui $a3, 0xff00
    func_0016d3a8();  // 0x16d308                                // 0x0016d44c: jal 0x16d308
    a3 = a3 | 0xf04;                                            // 0x0016d450: ori $a3, $a3, 0xf04
    func_0016d2a8();  // 0x16d288                                // 0x0016d45c: jal 0x16d288
    a2 = s3 + 0x94c;                                            // 0x0016d46c: addiu $a2, $s3, 0x94c
    if (s1 != 0) goto label_0x16d530;                           // 0x0016d470: bnez $s1, 0x16d530
    func_001591e0();  // 0x1591b8                                // 0x0016d478: jal 0x1591b8
    /* nop */                                                   // 0x0016d47c: nop 
    func_00158fd8();  // 0x158ea8                                // 0x0016d484: jal 0x158ea8
    a1 = 0xff00 << 16;                                          // 0x0016d490: lui $a1, 0xff00
    a1 = a1 | 0xf05;                                            // 0x0016d498: ori $a1, $a1, 0xf05
    if (v0 == 0) goto label_0x16d4b8;                           // 0x0016d49c: beqz $v0, 0x16d4b8
    func_00169940();  // 0x1698d0                                // 0x0016d4a4: jal 0x1698d0
    /* nop */                                                   // 0x0016d4a8: nop 
    goto label_0x16d534;                                        // 0x0016d4ac: b 0x16d534
    /* nop */                                                   // 0x0016d4b4: nop 
label_0x16d4b8:
    v1 = *(int32_t*)((s5) + 0x30);                              // 0x0016d4b8: lw $v1, 0x30($s5)
    v0 = *(int32_t*)((s3) + 0xe0);                              // 0x0016d4bc: lw $v0, 0xe0($s3)
    if (v0 == v1) goto label_0x16d4d8;                          // 0x0016d4c0: beq $v0, $v1, 0x16d4d8
    v0 = 1;                                                     // 0x0016d4c4: addiu $v0, $zero, 1
    *(uint32_t*)((s3) + 0xe0) = v1;                             // 0x0016d4c8: sw $v1, 0xe0($s3)
    goto label_0x16d4dc;                                        // 0x0016d4cc: b 0x16d4dc
    *(uint32_t*)((s3) + 0xe4) = v0;                             // 0x0016d4d0: sw $v0, 0xe4($s3)
    /* nop */                                                   // 0x0016d4d4: nop 
label_0x16d4d8:
    *(uint32_t*)((s3) + 0xe4) = 0;                              // 0x0016d4d8: sw $zero, 0xe4($s3)
label_0x16d4dc:
    t0 = *(int32_t*)((s3) + 0xe4);                              // 0x0016d4dc: lw $t0, 0xe4($s3)
    func_0016d620();  // 0x16d560                                // 0x0016d4e0: jal 0x16d560
    if (fp == 0) goto label_0x16d530;                           // 0x0016d4f0: beqz $fp, 0x16d530
    a3 = *(int32_t*)((s3) + 0xe4);                              // 0x0016d4f8: lw $a3, 0xe4($s3)
    func_0016d8b8();  // 0x16d7e0                                // 0x0016d4fc: jal 0x16d7e0
    a2 = local_0;                                               // 0x0016d500: lw $a2, 0($sp)
    func_0016dda0();  // 0x16dcf8                                // 0x0016d508: jal 0x16dcf8
    func_0016deb0();  // 0x16dda0                                // 0x0016d514: jal 0x16dda0
    func_0016e020();  // 0x16def0                                // 0x0016d528: jal 0x16def0
label_0x16d530:
label_0x16d534:
    return;                                                     // 0x0016d558: jr $ra
    sp = sp + 0x60;                                             // 0x0016d55c: addiu $sp, $sp, 0x60
}