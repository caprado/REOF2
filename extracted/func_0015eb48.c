void func_0015eb48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015eb48: addiu $sp, $sp, -0x10
    func_001737b0();  // 0x173730                                // 0x0015eb50: jal 0x173730
    a0 = g_002278d0;  // Global at 0x002278d0                   // 0x0015eb54: lw $a0, 0x40($a0)
    if (v0 == 0) goto label_0x15eb78;                           // 0x0015eb58: beqz $v0, 0x15eb78
    a0 = -0x133;                                                // 0x0015eb5c: addiu $a0, $zero, -0x133
    func_0015e7e0();  // 0x15e7b0                                // 0x0015eb60: jal 0x15e7b0
    /* nop */                                                   // 0x0015eb64: nop 
    a0 = 0x22 << 16;                                            // 0x0015eb68: lui $a0, 0x22
    func_001634a8();  // 0x163410                                // 0x0015eb6c: jal 0x163410
    a0 = &str_00227890;  // "E10821A : Invalid value of SFD_GetPaStat : %d" // 0x0015eb70: addiu $a0, $a0, 0x7890
    v0 = -0x133;                                                // 0x0015eb74: addiu $v0, $zero, -0x133
label_0x15eb78:
    return;                                                     // 0x0015eb7c: jr $ra
    sp = sp + 0x10;                                             // 0x0015eb80: addiu $sp, $sp, 0x10
}