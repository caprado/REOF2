void func_00129c58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00129c58: addiu $sp, $sp, -0x10
    v1 = 2;                                                     // 0x00129c5c: addiu $v1, $zero, 2
    v0 = g_00222b09;  // Global at 0x00222b09                   // 0x00129c64: lb $v0, 1($a0)
    if (v0 != v1) goto label_0x129c80;                          // 0x00129c68: bne $v0, $v1, 0x129c80
    a0 = 0x22 << 16;                                            // 0x00129c70: lui $a0, 0x22
    a0 = &str_00222b08;  // "\nADXT/PS2EE Ver.8.92 Build:Jul 28 2003 17:49:58\n" // 0x00129c74: addiu $a0, $a0, 0x2b08
    return func_00127de8();  // Tail call                        // 0x00129c78: j 0x127d90
    sp = sp + 0x10;                                             // 0x00129c7c: addiu $sp, $sp, 0x10
label_0x129c80:
    g_00222b34 = a1;  // Global at 0x00222b34                   // 0x00129c80: sw $a1, 0x2c($a0)
    return;                                                     // 0x00129c84: jr $ra
    sp = sp + 0x10;                                             // 0x00129c88: addiu $sp, $sp, 0x10
}