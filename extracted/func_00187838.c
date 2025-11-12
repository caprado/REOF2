void func_00187838() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x24;                                                  // 0x00187838: addiu $v0, $zero, 0x24
    v1 = 0x28 << 16;                                            // 0x0018783c: lui $v1, 0x28
    v1 = v1 + -0x2fb8;                                          // 0x00187844: addiu $v1, $v1, -0x2fb8
    v0 = 1;                                                     // 0x00187848: addiu $v0, $zero, 1
    a3 = v1 + a0;                                               // 0x0018784c: addu $a3, $v1, $a0
    *(uint32_t*)((a3) + 0x1c) = a1;                             // 0x00187854: sw $a1, 0x1c($a3)
    return;                                                     // 0x00187858: jr $ra
    g_0027d068 = a2;  // Global at 0x0027d068                   // 0x0018785c: sw $a2, 0x20($v1)
}