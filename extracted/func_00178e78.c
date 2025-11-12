void func_00178e78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00178e78: addiu $sp, $sp, -0x10
    func_00178ee0();  // 0x178ec8                                // 0x00178e80: jal 0x178ec8
    /* nop */                                                   // 0x00178e84: nop 
    v1 = 0x26 << 16;                                            // 0x00178e88: lui $v1, 0x26
    v1 = v1 + 0x78b8;                                           // 0x00178e90: addiu $v1, $v1, 0x78b8
    v0 = g_002678bc;  // Global at 0x002678bc                   // 0x00178e94: lw $v0, 4($v1)
    v0 = v0 + -1;                                               // 0x00178e98: addiu $v0, $v0, -1
    g_002678bc = v0;  // Global at 0x002678bc                   // 0x00178e9c: sw $v0, 4($v1)
    return;                                                     // 0x00178ea0: jr $ra
    sp = sp + 0x10;                                             // 0x00178ea4: addiu $sp, $sp, 0x10
}