void func_001aece0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001aece0: addiu $sp, $sp, -0x10
    a0 = 0x49 << 16;                                            // 0x001aece4: lui $a0, 0x49
    a0 = a0 + 0x12a0;                                           // 0x001aecec: addiu $a0, $a0, 0x12a0
    func_00107d30();  // 0x107c70                                // 0x001aecf4: jal 0x107c70
    a2 = 0xd4;                                                  // 0x001aecf8: addiu $a2, $zero, 0xd4
    a0 = 0x49 << 16;                                            // 0x001aecfc: lui $a0, 0x49
    a0 = a0 + -0x190;                                           // 0x001aed04: addiu $a0, $a0, -0x190
    func_00107d30();  // 0x107c70                                // 0x001aed08: jal 0x107c70
    a2 = 0x1324;                                                // 0x001aed0c: addiu $a2, $zero, 0x1324
    return;                                                     // 0x001aed14: jr $ra
    sp = sp + 0x10;                                             // 0x001aed18: addiu $sp, $sp, 0x10
}