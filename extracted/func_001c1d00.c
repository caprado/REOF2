void func_001c1d00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001c1d00: lui $at, 0x31
    v0 = 0x22 << 16;                                            // 0x001c1d04: lui $v0, 0x22
    v1 = g_003137dd;  // Global at 0x003137dd                   // 0x001c1d08: lbu $v1, 0x37dd($at)
    v0 = v0 + -0x11a0;                                          // 0x001c1d0c: addiu $v0, $v0, -0x11a0
    v1 = v1 << 2;                                               // 0x001c1d10: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001c1d14: addu $v0, $v0, $v1
    return;                                                     // 0x001c1d18: jr $ra
    v0 = g_0021ee60;  // Global at 0x0021ee60                   // 0x001c1d1c: lw $v0, 0($v0)
}