void func_001c1f20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001c1f20: lui $at, 0x31
    v0 = 0x22 << 16;                                            // 0x001c1f24: lui $v0, 0x22
    v1 = g_003137dd;  // Global at 0x003137dd                   // 0x001c1f28: lbu $v1, 0x37dd($at)
    v0 = v0 + -0xfa0;                                           // 0x001c1f2c: addiu $v0, $v0, -0xfa0
    v1 = v1 << 2;                                               // 0x001c1f30: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001c1f34: addu $v0, $v0, $v1
    return;                                                     // 0x001c1f38: jr $ra
    v0 = g_0021f060;  // Global at 0x0021f060                   // 0x001c1f3c: lw $v0, 0($v0)
}