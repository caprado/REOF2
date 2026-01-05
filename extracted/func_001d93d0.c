void func_001d93d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d93d0: addiu $sp, $sp, -0x10
    at = 0x31 << 16;                                            // 0x001d93d4: lui $at, 0x31
    v1 = g_003137b7;  // Global at 0x003137b7                   // 0x001d93dc: lb $v1, 0x37b7($at)
    if (v1 != 0) goto label_0x1d93f4;                           // 0x001d93e0: bnez $v1, 0x1d93f4
    at = 0x31 << 16;                                            // 0x001d93e4: lui $at, 0x31
    a0 = g_003137ba;  // Global at 0x003137ba                   // 0x001d93e8: lhu $a0, 0x37ba($at)
    func_001d4ab0();  // 1d4ab0                                // 0x001d93ec: jal 0x1d4ab0
    a1 = 0x2000;                                                // 0x001d93f0: addiu $a1, $zero, 0x2000
label_0x1d93f4:
    return;                                                     // 0x001d93f8: jr $ra
    sp = sp + 0x10;                                             // 0x001d93fc: addiu $sp, $sp, 0x10
}