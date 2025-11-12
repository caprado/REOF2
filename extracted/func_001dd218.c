void func_001dd218() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x38;                                                  // 0x001dd218: addiu $v0, $zero, 0x38
    a1 = 0x33 << 16;                                            // 0x001dd21c: lui $a1, 0x33
    v1 = g_0032fec4;  // Global at 0x0032fec4                   // 0x001dd224: lw $v1, -0x13c($a1)
    v1 = v1 + a0;                                               // 0x001dd22c: addu $v1, $v1, $a0
    v1 = v1 + 0x10;                                             // 0x001dd230: addiu $v1, $v1, 0x10
    *(uint32_t*)((v1) + 4) = 0;                                 // 0x001dd234: sw $zero, 4($v1)
    *(uint32_t*)((v1) + 0x24) = 0;                              // 0x001dd238: sw $zero, 0x24($v1)
    *(uint32_t*)((v1) + 0x1c) = 0;                              // 0x001dd23c: sw $zero, 0x1c($v1)
    return;                                                     // 0x001dd240: jr $ra
    *(uint32_t*)((v1) + 0x20) = 0;                              // 0x001dd244: sw $zero, 0x20($v1)
}