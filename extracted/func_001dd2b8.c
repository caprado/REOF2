void func_001dd2b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x38;                                                  // 0x001dd2b8: addiu $v0, $zero, 0x38
    v1 = 0x33 << 16;                                            // 0x001dd2bc: lui $v1, 0x33
    a2 = g_0032fec4;  // Global at 0x0032fec4                   // 0x001dd2c4: lw $a2, -0x13c($v1)
    a2 = a2 + a0;                                               // 0x001dd2c8: addu $a2, $a2, $a0
    a3 = a2 + 0x10;                                             // 0x001dd2cc: addiu $a3, $a2, 0x10
    v0 = *(int32_t*)((a3) + 0x24);                              // 0x001dd2d0: lw $v0, 0x24($a3)
    if (v0 > 0) return;  // Branch to 0x1dd2e4                  // 0x001dd2d4: bgtzl $v0, 0x1dd2e4
    a0 = *(int32_t*)((a2) + 0x30);                              // 0x001dd2d8: lw $a0, 0x30($a2)
    return;                                                     // 0x001dd2dc: jr $ra
    v0 = -1;                                                    // 0x001dd2e0: addiu $v0, $zero, -1
}