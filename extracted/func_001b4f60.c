void func_001b4f60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b4f60: addiu $sp, $sp, -0x10
    at = 0x31 << 16;                                            // 0x001b4f64: lui $at, 0x31
    a3 = g_00313804;  // Global at 0x00313804                   // 0x001b4f6c: lhu $a3, 0x3804($at)
    if (a3 != 0) goto label_0x1b4f88;                           // 0x001b4f70: bnez $a3, 0x1b4f88
    a2 = 0x80;                                                  // 0x001b4f74: addiu $a2, $zero, 0x80
    at = 0x31 << 16;                                            // 0x001b4f78: lui $at, 0x31
    goto label_0x1b4f90;                                        // 0x001b4f80: b 0x1b4f90
    g_003137ca = 0;  // Global at 0x003137ca                    // 0x001b4f84: sb $zero, 0x37ca($at)
label_0x1b4f88:
    func_001b4d00();  // 1b4d00                                // 0x001b4f88: jal 0x1b4d00
    /* nop */                                                   // 0x001b4f8c: nop 
label_0x1b4f90:
    return;                                                     // 0x001b4f94: jr $ra
    sp = sp + 0x10;                                             // 0x001b4f98: addiu $sp, $sp, 0x10
}