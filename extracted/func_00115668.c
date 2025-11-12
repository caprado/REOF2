void func_00115668() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x25 << 16;                                            // 0x00115668: lui $v0, 0x25
    v1 = v0 + -0x3e00;                                          // 0x0011566c: addiu $v1, $v0, -0x3e00
    g_0024c200 = a0;  // Global at 0x0024c200                   // 0x00115670: sw $a0, -0x3e00($v0)
    a0 = v1 + 0x10;                                             // 0x00115674: addiu $a0, $v1, 0x10
    g_0024c208 = a0;  // Global at 0x0024c208                   // 0x0011567c: sw $a0, 8($v1)
    g_0024c204 = 0;  // Global at 0x0024c204                    // 0x00115680: sw $zero, 4($v1)
    return;                                                     // 0x00115684: jr $ra
    g_0024c20c = a0;  // Global at 0x0024c20c                   // 0x00115688: sw $a0, 0xc($v1)
}