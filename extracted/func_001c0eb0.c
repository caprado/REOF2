void func_001c0eb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001c0eb0: addiu $sp, $sp, -0x40
    s1 = 0x22 << 16;                                            // 0x001c0eb8: lui $s1, 0x22
    v0 = g_0021d098;  // Global at 0x0021d098                   // 0x001c0ec0: lb $v0, -0x2f68($s1)
    s2 = s1 + -0x2f68;                                          // 0x001c0ec4: addiu $s2, $s1, -0x2f68
    if (v0 != 0) goto label_0x1c0f04;                           // 0x001c0ecc: bnez $v0, 0x1c0f04
    a0 = 0x24 << 16;                                            // 0x001c0ed4: lui $a0, 0x24
    a1 = 1;                                                     // 0x001c0ed8: addiu $a1, $zero, 1
    func_00118730();  // 118730                                // 0x001c0edc: jal 0x118730
    a0 = &str_0023e1b8;  // "KEVIN"                             // 0x001c0ee0: addiu $a0, $a0, -0x1e48
    if (s0 < 0) goto label_0x1c0f04;                            // 0x001c0ee8: bltz $s0, 0x1c0f04
    func_00118d70();  // 118d70                                // 0x001c0ef4: jal 0x118d70
    a2 = 0xe;                                                   // 0x001c0ef8: addiu $a2, $zero, 0xe
    func_001189b8();  // 1189b8                                // 0x001c0efc: jal 0x1189b8
label_0x1c0f04:
    v0 = s1 + -0x2f68;                                          // 0x001c0f04: addiu $v0, $s1, -0x2f68
    return;                                                     // 0x001c0f18: jr $ra
    sp = sp + 0x40;                                             // 0x001c0f1c: addiu $sp, $sp, 0x40
}