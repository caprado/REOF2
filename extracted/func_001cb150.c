void func_001cb150() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001cb150: addiu $sp, $sp, -0x10
    func_001ca270();  // 0x1ca260                                // 0x001cb158: jal 0x1ca260
    /* nop */                                                   // 0x001cb15c: nop 
    a0 = 0x31 << 16;                                            // 0x001cb160: lui $a0, 0x31
    a0 = a0 + 0x6ce0;                                           // 0x001cb168: addiu $a0, $a0, 0x6ce0
    func_00107d30();  // 0x107c70                                // 0x001cb16c: jal 0x107c70
    a2 = 0x9a0;                                                 // 0x001cb170: addiu $a2, $zero, 0x9a0
    at = 0x31 << 16;                                            // 0x001cb174: lui $at, 0x31
    func_001ca280();  // 0x1ca270                                // 0x001cb178: jal 0x1ca270
    g_00316cd0 = 0;  // Global at 0x00316cd0                    // 0x001cb17c: sw $zero, 0x6cd0($at)
    return;                                                     // 0x001cb184: jr $ra
    sp = sp + 0x10;                                             // 0x001cb188: addiu $sp, $sp, 0x10
}