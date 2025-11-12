void func_001c83c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c83c0: addiu $sp, $sp, -0x20
    func_001c7780();  // 0x1c7770                                // 0x001c83cc: jal 0x1c7770
    a1 = 0x20;                                                  // 0x001c83d8: addiu $a1, $zero, 0x20
    at = 0x31 << 16;                                            // 0x001c83e0: lui $at, 0x31
    a0 = 0x2b;                                                  // 0x001c83e4: addiu $a0, $zero, 0x2b
    g_00316680 = v0;  // Global at 0x00316680                   // 0x001c83e8: sw $v0, 0x6680($at)
    func_001c7670();  // 0x1c75b0                                // 0x001c83ec: jal 0x1c75b0
    func_001c7790();  // 0x1c7780                                // 0x001c83f8: jal 0x1c7780
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c8408: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c840c: jr $ra
    sp = sp + 0x20;                                             // 0x001c8410: addiu $sp, $sp, 0x20
}