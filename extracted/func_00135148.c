void func_00135148() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00135148: addiu $sp, $sp, -0x20
    func_001352b8();  // 1352b8                                // 0x00135160: jal 0x1352b8
    /* call function at address in s0 */                        // 0x00135168: jalr $s0
    /* nop */                                                   // 0x0013516c: nop 
    func_00135220();  // 135220                                // 0x00135178: jal 0x135220
    if (v0 != 0) goto label_0x135204;                           // 0x00135180: bnez $v0, 0x135204
    a0 = 0x25 << 16;                                            // 0x00135188: lui $a0, 0x25
    v1 = a0 + 0x37e8;                                           // 0x0013518c: addiu $v1, $a0, 0x37e8
    v0 = g_002537ec;  // Global at 0x002537ec                   // 0x00135190: lb $v0, 4($v1)
    if (v0 == 0) goto label_0x1351c4;                           // 0x00135194: beqz $v0, 0x1351c4
    v1 = v1 + 4;                                                // 0x00135198: addiu $v1, $v1, 4
    s0 = s0 + 1;                                                // 0x0013519c: addiu $s0, $s0, 1
    v0 = (s0 < 0x20) ? 1 : 0;                                   // 0x001351a0: slti $v0, $s0, 0x20
    if (v0 == 0) goto label_0x1351c4;                           // 0x001351a4: beqz $v0, 0x1351c4
    v1 = v1 + 0x10;                                             // 0x001351a8: addiu $v1, $v1, 0x10
    v0 = g_002537fc;  // Global at 0x002537fc                   // 0x001351ac: lb $v0, 0($v1)
    /* nop */                                                   // 0x001351b0: nop 
    /* nop */                                                   // 0x001351b4: nop 
    /* nop */                                                   // 0x001351b8: nop 
    /* bnezl $v0, 0x1351a0 */                                   // 0x001351bc: bnezl $v0, 0x1351a0
    s0 = s0 + 1;                                                // 0x001351c0: addiu $s0, $s0, 1
label_0x1351c4:
    v1 = 0x20;                                                  // 0x001351c4: addiu $v1, $zero, 0x20
    if (s0 == v1) goto label_0x135204;                          // 0x001351c8: beq $s0, $v1, 0x135204
    v0 = a0 + 0x37e8;                                           // 0x001351d0: addiu $v0, $a0, 0x37e8
    s0 = s0 << 4;                                               // 0x001351d8: sll $s0, $s0, 4
    v1 = v0 + 4;                                                // 0x001351dc: addiu $v1, $v0, 4
    v0 = s0 + v0;                                               // 0x001351e0: addu $v0, $s0, $v0
    s0 = s0 + v1;                                               // 0x001351e4: addu $s0, $s0, $v1
    func_0010ae00();  // 10ae00                                // 0x001351e8: jal 0x10ae00
    g_002537e8 = s2;  // Global at 0x002537e8                   // 0x001351ec: sw $s2, 0($v0)
    func_00107ab8();  // 107ab8                                // 0x001351f8: jal 0x107ab8
    a2 = v0 + 1;                                                // 0x001351fc: addiu $a2, $v0, 1
label_0x135204:
    return;                                                     // 0x00135214: jr $ra
    sp = sp + 0x20;                                             // 0x00135218: addiu $sp, $sp, 0x20
}