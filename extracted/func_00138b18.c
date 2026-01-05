void func_00138b18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    a3 = 0x25 << 16;                                            // 0x00138b18: lui $a3, 0x25
    sp = sp + -0x20;                                            // 0x00138b1c: addiu $sp, $sp, -0x20
    a3 = a3 + 0x3b40;                                           // 0x00138b20: addiu $a3, $a3, 0x3b40
    v0 = 0x20 << 16;                                            // 0x00138b28: lui $v0, 0x20
    t1 = 0x25 << 16;                                            // 0x00138b2c: lui $t1, 0x25
    g_00253b40 = a0;  // Global at 0x00253b40                   // 0x00138b30: sw $a0, 0($a3)
    a0 = v0 + 0x2e70;                                           // 0x00138b34: addiu $a0, $v0, 0x2e70
    t1 = t1 + 0x3c40;                                           // 0x00138b38: addiu $t1, $t1, 0x3c40
    a1 = 3;                                                     // 0x00138b3c: addiu $a1, $zero, 3
    t0 = 4;                                                     // 0x00138b44: addiu $t0, $zero, 4
    func_001176a8();  // 1176a8                                // 0x00138b50: jal 0x1176a8
    local_0 = 0;                                                // 0x00138b54: sw $zero, 0($sp)
    return;                                                     // 0x00138b5c: jr $ra
    sp = sp + 0x20;                                             // 0x00138b60: addiu $sp, $sp, 0x20
}