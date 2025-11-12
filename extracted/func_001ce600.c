void func_001ce600() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001ce600: addiu $sp, $sp, -0x20
    a0 = 6;                                                     // 0x001ce614: addiu $a0, $zero, 6
    func_001cdfc0();  // 0x1cdf70                                // 0x001ce618: jal 0x1cdf70
    at = 0x32 << 16;                                            // 0x001ce620: lui $at, 0x32
    g_00325934 = s0;  // Global at 0x00325934                   // 0x001ce624: sw $s0, 0x5934($at)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ce62c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ce630: jr $ra
    sp = sp + 0x20;                                             // 0x001ce634: addiu $sp, $sp, 0x20
}