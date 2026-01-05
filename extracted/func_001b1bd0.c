void func_001b1bd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b1bd0: addiu $sp, $sp, -0x20
    v1 = 0x1f48;                                                // 0x001b1be0: addiu $v1, $zero, 0x1f48
label_0x1b1be4:
    v0 = 0x4a << 16;                                            // 0x001b1be4: lui $v0, 0x4a
    /* multiply: s0 * v1 -> hi:lo */                            // 0x001b1be8: mult $ac3, $s0, $v1
    v0 = v0 + -0x63d0;                                          // 0x001b1bec: addiu $v0, $v0, -0x63d0
    func_001b18f0();  // 1b18f0                                // 0x001b1bf0: jal 0x1b18f0
    a0 = v0 + v1;                                               // 0x001b1bf4: addu $a0, $v0, $v1
    s0 = s0 + 1;                                                // 0x001b1bf8: addiu $s0, $s0, 1
    v1 = (s0 < 0xa) ? 1 : 0;                                    // 0x001b1bfc: slti $v1, $s0, 0xa
    if (v1 != 0) goto label_0x1b1be4;                           // 0x001b1c00: bnez $v1, 0x1b1be4
    v1 = 0x1f48;                                                // 0x001b1c04: addiu $v1, $zero, 0x1f48
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b1c0c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b1c10: jr $ra
    sp = sp + 0x20;                                             // 0x001b1c14: addiu $sp, $sp, 0x20
}