void func_0017ff90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 1;                                                     // 0x0017ff90: addiu $v1, $zero, 1
    v0 = 0x21 << 16;                                            // 0x0017ff94: lui $v0, 0x21
    a0 = 0x26 << 16;                                            // 0x0017ff98: lui $a0, 0x26
    g_00215fe0 = v1;  // Global at 0x00215fe0                   // 0x0017ff9c: sw $v1, 0x5fe0($v0)
    a0 = a0 + 0x7908;                                           // 0x0017ffa0: addiu $a0, $a0, 0x7908
    v1 = a0 + 0x3340;                                           // 0x0017ffa4: addiu $v1, $a0, 0x3340
label_0x17ffa8:
    g_00267908 = 0;  // Global at 0x00267908                    // 0x0017ffa8: sw $zero, 0($a0)
    g_0026790c = 0;  // Global at 0x0026790c                    // 0x0017ffac: sw $zero, 4($a0)
    g_00267910 = 0;  // Global at 0x00267910                    // 0x0017ffb0: sw $zero, 8($a0)
    g_00267914 = 0;  // Global at 0x00267914                    // 0x0017ffb4: sw $zero, 0xc($a0)
    a0 = a0 + 0x334;                                            // 0x0017ffb8: addiu $a0, $a0, 0x334
    v0 = (a0 < v1) ? 1 : 0;                                     // 0x0017ffbc: slt $v0, $a0, $v1
    if (v0 != 0) goto label_0x17ffa8;                           // 0x0017ffc0: bnez $v0, 0x17ffa8
    /* nop */                                                   // 0x0017ffc4: nop 
    return;                                                     // 0x0017ffc8: jr $ra
    v0 = 1;                                                     // 0x0017ffcc: addiu $v0, $zero, 1
}