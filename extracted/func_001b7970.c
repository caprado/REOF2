void func_001b7970() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b7970: addiu $sp, $sp, -0x20
    func_001afb80();  // 0x1afb40                                // 0x001b7978: jal 0x1afb40
    a0 = 0x5d << 16;                                            // 0x001b7980: lui $a0, 0x5d
    a0 = a0 + -0x1970;                                          // 0x001b7988: addiu $a0, $a0, -0x1970
    func_001b7790();  // 0x1b7720                                // 0x001b798c: jal 0x1b7720
    a1 = 4;                                                     // 0x001b7990: addiu $a1, $zero, 4
    v1 = 1;                                                     // 0x001b7994: addiu $v1, $zero, 1
    if (s0 != v1) goto label_0x1b79b0;                          // 0x001b7998: bne $s0, $v1, 0x1b79b0
    a0 = 2;                                                     // 0x001b799c: addiu $a0, $zero, 2
    func_001b7910();  // 0x1b78b0                                // 0x001b79a0: jal 0x1b78b0
    a1 = 9;                                                     // 0x001b79a4: addiu $a1, $zero, 9
    goto label_0x1b79c4;                                        // 0x001b79a8: b 0x1b79c4
label_0x1b79b0:
    if (s0 != 0) goto label_0x1b79c0;                           // 0x001b79b0: bnez $s0, 0x1b79c0
    a0 = 2;                                                     // 0x001b79b4: addiu $a0, $zero, 2
    func_001b7910();  // 0x1b78b0                                // 0x001b79b8: jal 0x1b78b0
    a1 = 8;                                                     // 0x001b79bc: addiu $a1, $zero, 8
label_0x1b79c0:
label_0x1b79c4:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b79c4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b79c8: jr $ra
    sp = sp + 0x20;                                             // 0x001b79cc: addiu $sp, $sp, 0x20
}