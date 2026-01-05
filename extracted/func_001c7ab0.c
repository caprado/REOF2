void func_001c7ab0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c7ab0: addiu $sp, $sp, -0x20
    func_001c7770();  // 1c7770                                // 0x001c7abc: jal 0x1c7770
    at = 0x31 << 16;                                            // 0x001c7ac4: lui $at, 0x31
    a0 = 0xb;                                                   // 0x001c7ac8: addiu $a0, $zero, 0xb
    a1 = 0x22;                                                  // 0x001c7acc: addiu $a1, $zero, 0x22
    a2 = 0x20;                                                  // 0x001c7ad0: addiu $a2, $zero, 0x20
    func_001c75b0();  // 1c75b0                                // 0x001c7ad4: jal 0x1c75b0
    g_0031669c = s0;  // Global at 0x0031669c                   // 0x001c7ad8: sh $s0, 0x669c($at)
    func_001c7780();  // 1c7780                                // 0x001c7ae0: jal 0x1c7780
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c7af0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c7af4: jr $ra
    sp = sp + 0x20;                                             // 0x001c7af8: addiu $sp, $sp, 0x20
}