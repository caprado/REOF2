void func_0011e530() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x1f << 16;                                            // 0x0011e530: lui $v0, 0x1f
    a3 = v0 + 0x19e8;                                           // 0x0011e534: addiu $a3, $v0, 0x19e8
    a2 = g_001f19fc;  // Global at 0x001f19fc                   // 0x0011e538: lw $a2, 0x14($a3)
    if (a2 != 0) return;  // Branch to 0x11e550                 // 0x0011e53c: bnez $a2, 0x11e550
    /* nop */                                                   // 0x0011e540: nop 
    v0 = 0x8000 << 16;                                          // 0x0011e544: lui $v0, 0x8000
    return;                                                     // 0x0011e548: jr $ra
    v0 = v0 | 0x8005;                                           // 0x0011e54c: ori $v0, $v0, 0x8005
}