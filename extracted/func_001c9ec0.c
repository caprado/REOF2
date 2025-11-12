void func_001c9ec0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c9ec0: addiu $sp, $sp, -0x10
    a0 = 8;                                                     // 0x001c9ecc: addiu $a0, $zero, 8
    func_001c8c00();  // 0x1c8b50                                // 0x001c9ed0: jal 0x1c8b50
    a1 = 4;                                                     // 0x001c9ed4: addiu $a1, $zero, 4
    v0 = v0 ^ 4;                                                // 0x001c9ee4: xori $v0, $v0, 4
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001c9ee8: sltu $v0, $zero, $v0
    v0 = -v0;                                                   // 0x001c9eec: negu $v0, $v0
    return;                                                     // 0x001c9ef0: jr $ra
    sp = sp + 0x10;                                             // 0x001c9ef4: addiu $sp, $sp, 0x10
}