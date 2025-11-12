void func_001b7890() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = v1 << 5;                                               // 0x001b7898: sll $a0, $v1, 5
    v1 = 0x30 << 16;                                            // 0x001b789c: lui $v1, 0x30
    v1 = v1 + 0x7d90;                                           // 0x001b78a0: addiu $v1, $v1, 0x7d90
    v1 = v1 + a0;                                               // 0x001b78a4: addu $v1, $v1, $a0
    return;                                                     // 0x001b78a8: jr $ra
    g_00307da4 = a1;  // Global at 0x00307da4                   // 0x001b78ac: sw $a1, 0x14($v1)
}