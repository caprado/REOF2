void func_001dc978() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x33 << 16;                                            // 0x001dc978: lui $v1, 0x33
    v0 = g_0032fec0;  // Global at 0x0032fec0                   // 0x001dc980: lw $v0, -0x140($v1)
    v0 = (a2 < v0) ? 1 : 0;                                     // 0x001dc984: slt $v0, $a2, $v0
    if (v0 != 0) return;  // Branch to 0x1dc998                 // 0x001dc988: bnez $v0, 0x1dc998
    a0 = v1 + -0x140;                                           // 0x001dc98c: addiu $a0, $v1, -0x140
    return;                                                     // 0x001dc990: jr $ra
    v0 = -0xb;                                                  // 0x001dc994: addiu $v0, $zero, -0xb
}