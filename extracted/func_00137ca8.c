void func_00137ca8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00137ca8: addiu $sp, $sp, -0x10
    func_00137ec8();  // 137ec8                                // 0x00137cb4: jal 0x137ec8
    a0 = 0x2300;                                                // 0x00137cb8: addiu $a0, $zero, 0x2300
    func_00100d98();  // 100d98                                // 0x00137cbc: jal 0x100d98
    a0 = 1;                                                     // 0x00137cc0: addiu $a0, $zero, 1
    a0 = 0x2301;                                                // 0x00137cc4: addiu $a0, $zero, 0x2301
    func_00137ec8();  // 137ec8                                // 0x00137cc8: jal 0x137ec8
    return;                                                     // 0x00137cdc: jr $ra
    sp = sp + 0x10;                                             // 0x00137ce0: addiu $sp, $sp, 0x10
}