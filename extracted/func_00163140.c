void func_00163140() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00163140: addiu $sp, $sp, -0x10
    func_00141df8();  // 0x141db8                                // 0x00163148: jal 0x141db8
    /* nop */                                                   // 0x0016314c: nop 
    v0 = 0x26 << 16;                                            // 0x00163154: lui $v0, 0x26
    v1 = 0x26 << 16;                                            // 0x00163158: lui $v1, 0x26
    a0 = 0x26 << 16;                                            // 0x0016315c: lui $a0, 0x26
    a1 = 0x26 << 16;                                            // 0x00163160: lui $a1, 0x26
    g_00261ec0 = 0;  // Global at 0x00261ec0                    // 0x00163164: sw $zero, 0x1ec0($v0)
    g_00261ec4 = 0;  // Global at 0x00261ec4                    // 0x00163168: sw $zero, 0x1ec4($v1)
    g_00261ec8 = 0;  // Global at 0x00261ec8                    // 0x0016316c: sw $zero, 0x1ec8($a0)
    g_00261ecc = 0;  // Global at 0x00261ecc                    // 0x00163170: sw $zero, 0x1ecc($a1)
    return;                                                     // 0x00163174: jr $ra
    sp = sp + 0x10;                                             // 0x00163178: addiu $sp, $sp, 0x10
}