void func_001b1a60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b1a60: addiu $sp, $sp, -0x20
    a0 = 0x4c << 16;                                            // 0x001b1a64: lui $a0, 0x4c
    a0 = a0 + 0xde0;                                            // 0x001b1a6c: addiu $a0, $a0, 0xde0
    func_001b1950();  // 0x1b18f0                                // 0x001b1a70: jal 0x1b18f0
    a0 = 0x4c << 16;                                            // 0x001b1a78: lui $a0, 0x4c
    func_001b1950();  // 0x1b18f0                                // 0x001b1a7c: jal 0x1b18f0
    a0 = a0 + -0x1170;                                          // 0x001b1a80: addiu $a0, $a0, -0x1170
    a0 = 0x4c << 16;                                            // 0x001b1a84: lui $a0, 0x4c
    func_001b1950();  // 0x1b18f0                                // 0x001b1a88: jal 0x1b18f0
    a0 = a0 + -0x30c0;                                          // 0x001b1a8c: addiu $a0, $a0, -0x30c0
    v1 = 0x1f48;                                                // 0x001b1a94: addiu $v1, $zero, 0x1f48
label_0x1b1a98:
    v0 = 0x4b << 16;                                            // 0x001b1a98: lui $v0, 0x4b
    /* multiply: s0 * v1 -> hi:lo */                            // 0x001b1a9c: mult $ac3, $s0, $v1
    v0 = v0 + -0x2b00;                                          // 0x001b1aa0: addiu $v0, $v0, -0x2b00
    func_001b1950();  // 0x1b18f0                                // 0x001b1aa4: jal 0x1b18f0
    a0 = v0 + v1;                                               // 0x001b1aa8: addu $a0, $v0, $v1
    s0 = s0 + 1;                                                // 0x001b1aac: addiu $s0, $s0, 1
    v1 = (s0 < 8) ? 1 : 0;                                      // 0x001b1ab0: slti $v1, $s0, 8
    if (v1 != 0) goto label_0x1b1a98;                           // 0x001b1ab4: bnez $v1, 0x1b1a98
    v1 = 0x1f48;                                                // 0x001b1ab8: addiu $v1, $zero, 0x1f48
    at = 0x49 << 16;                                            // 0x001b1abc: lui $at, 0x49
    g_004912df = 0;  // Global at 0x004912df                    // 0x001b1ac0: sb $zero, 0x12df($at)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b1ac8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b1acc: jr $ra
    sp = sp + 0x20;                                             // 0x001b1ad0: addiu $sp, $sp, 0x20
}