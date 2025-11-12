void func_00163218() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00163218: addiu $sp, $sp, -0x10
    a0 = 2;                                                     // 0x00163230: addiu $a0, $zero, 2
    func_001419d8();  // 0x141918                                // 0x00163238: jal 0x141918
    v0 = 0x26 << 16;                                            // 0x00163240: lui $v0, 0x26
    g_00261ec4 = s0;  // Global at 0x00261ec4                   // 0x00163248: sw $s0, 0x1ec4($v0)
    return;                                                     // 0x00163250: jr $ra
    sp = sp + 0x10;                                             // 0x00163254: addiu $sp, $sp, 0x10
}