void func_00102c40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x1000 << 16;                                          // 0x00102c40: lui $v0, 0x1000
    v0 = v0 | 0x3c00;                                           // 0x00102c44: ori $v0, $v0, 0x3c00
    a0 = g_10000000;  // Global at 0x10000000                   // 0x00102c48: lw $a0, 0($v0)
    v1 = a0 & 3;                                                // 0x00102c4c: andi $v1, $a0, 3
    if (v1 != 0) return;  // Branch to 0x102c60                 // 0x00102c50: bnez $v1, 0x102c60
    v0 = a0 & 0x700;                                            // 0x00102c54: andi $v0, $a0, 0x700
    return;                                                     // 0x00102c58: jr $ra
}