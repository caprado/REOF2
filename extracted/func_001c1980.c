void func_001c1980() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a0 << 2;                                               // 0x001c1980: sll $v1, $a0, 2
    at = 0x31 << 16;                                            // 0x001c1984: lui $at, 0x31
    a0 = g_003137dd;  // Global at 0x003137dd                   // 0x001c1988: lbu $a0, 0x37dd($at)
    v0 = 0x22 << 16;                                            // 0x001c198c: lui $v0, 0x22
    v0 = v0 + -0x13a0;                                          // 0x001c1990: addiu $v0, $v0, -0x13a0
    a0 = a0 << 2;                                               // 0x001c1994: sll $a0, $a0, 2
    v0 = v0 + a0;                                               // 0x001c1998: addu $v0, $v0, $a0
    v0 = g_0021ec60;  // Global at 0x0021ec60                   // 0x001c199c: lw $v0, 0($v0)
    v0 = v0 + v1;                                               // 0x001c19a0: addu $v0, $v0, $v1
    return;                                                     // 0x001c19a4: jr $ra
    v0 = g_0021ec60;  // Global at 0x0021ec60                   // 0x001c19a8: lw $v0, 0($v0)
}