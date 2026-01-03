void func_001bdd00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x110;                                           // 0x001bdd00: addiu $sp, $sp, -0x110
    a1 = 0x24 << 16;                                            // 0x001bdd04: lui $a1, 0x24
    a0 = sp + 0x10;                                             // 0x001bdd0c: addiu $a0, $sp, 0x10
    a1 = &str_0023dfd0;  // "%s,,%s,PFS"                        // 0x001bdd10: addiu $a1, $a1, -0x2030
    func_001bdde0();  // 1bdde0                                // 0x001bdd14: jal 0x1bdde0
    a2 = 0x1234;                                                // 0x001bdd18: addiu $a2, $zero, 0x1234
    func_00119990();  // 119990                                // 0x001bdd1c: jal 0x119990
    a0 = sp + 0x10;                                             // 0x001bdd20: addiu $a0, $sp, 0x10
    return;                                                     // 0x001bdd28: jr $ra
    sp = sp + 0x110;                                            // 0x001bdd2c: addiu $sp, $sp, 0x110
}