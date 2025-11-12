void func_001c19e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a0 << 2;                                               // 0x001c19e0: sll $v1, $a0, 2
    at = 0x31 << 16;                                            // 0x001c19e4: lui $at, 0x31
    a0 = g_003137dd;  // Global at 0x003137dd                   // 0x001c19e8: lbu $a0, 0x37dd($at)
    v0 = 0x22 << 16;                                            // 0x001c19ec: lui $v0, 0x22
    v0 = v0 + -0x1360;                                          // 0x001c19f0: addiu $v0, $v0, -0x1360
    a0 = a0 << 2;                                               // 0x001c19f4: sll $a0, $a0, 2
    v0 = v0 + a0;                                               // 0x001c19f8: addu $v0, $v0, $a0
    v0 = g_0021eca0;  // Global at 0x0021eca0                   // 0x001c19fc: lw $v0, 0($v0)
    v0 = v0 + v1;                                               // 0x001c1a00: addu $v0, $v0, $v1
    return;                                                     // 0x001c1a04: jr $ra
    v0 = g_0021eca0;  // Global at 0x0021eca0                   // 0x001c1a08: lw $v0, 0($v0)
}