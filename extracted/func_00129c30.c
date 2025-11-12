void func_00129c30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = a0 << 2;                                               // 0x00129c30: sll $a0, $a0, 2
    v0 = 0x1f << 16;                                            // 0x00129c34: lui $v0, 0x1f
    v0 = v0 + a0;                                               // 0x00129c38: addu $v0, $v0, $a0
    v0 = g_001f3300;  // Global at 0x001f3300                   // 0x00129c3c: lw $v0, 0x3300($v0)
    return;                                                     // 0x00129c40: jr $ra
    v0 = v0 + 0x10;                                             // 0x00129c44: addiu $v0, $v0, 0x10
}