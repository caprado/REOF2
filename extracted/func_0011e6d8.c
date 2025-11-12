void func_0011e6d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x1f << 16;                                            // 0x0011e6d8: lui $v0, 0x1f
    v1 = v0 + 0x19e8;                                           // 0x0011e6dc: addiu $v1, $v0, 0x19e8
    v0 = g_001f19f0;  // Global at 0x001f19f0                   // 0x0011e6e0: lw $v0, 8($v1)
    if (v0 >= 0) return;  // Branch to 0x11e6f8                 // 0x0011e6e4: bgez $v0, 0x11e6f8
    /* nop */                                                   // 0x0011e6e8: nop 
    v0 = 0x8000 << 16;                                          // 0x0011e6ec: lui $v0, 0x8000
    return;                                                     // 0x0011e6f0: jr $ra
    v0 = v0 | 0x8001;                                           // 0x0011e6f4: ori $v0, $v0, 0x8001
}