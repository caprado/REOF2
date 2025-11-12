void func_00150208() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00150208: addiu $sp, $sp, -0x10
    a0 = 0x21 << 16;                                            // 0x0015020c: lui $a0, 0x21
    a0 = a0 + 0x3e58;                                           // 0x00150214: addiu $a0, $a0, 0x3e58
    goto label_0x150228;                                        // 0x0015021c: j 0x150228
    sp = sp + 0x10;                                             // 0x00150220: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00150224: nop 
label_0x150228:
    g_00213e68 = 0;  // Global at 0x00213e68                    // 0x00150228: sw $zero, 0x10($a0)
    g_00213e58 = 0;  // Global at 0x00213e58                    // 0x0015022c: sw $zero, 0($a0)
    g_00213e5c = 0;  // Global at 0x00213e5c                    // 0x00150230: sw $zero, 4($a0)
    g_00213e60 = 0;  // Global at 0x00213e60                    // 0x00150234: sw $zero, 8($a0)
    return;                                                     // 0x00150238: jr $ra
    g_00213e64 = 0;  // Global at 0x00213e64                    // 0x0015023c: sw $zero, 0xc($a0)
}