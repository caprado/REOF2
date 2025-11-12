void func_001c0a20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c0a20: addiu $sp, $sp, -0x20
    at = 0x31 << 16;                                            // 0x001c0a24: lui $at, 0x31
    v0 = 9;                                                     // 0x001c0a2c: addiu $v0, $zero, 9
    g_00315fc0 = 0;  // Global at 0x00315fc0                    // 0x001c0a34: sw $zero, 0x5fc0($at)
    at = 0x31 << 16;                                            // 0x001c0a3c: lui $at, 0x31
    g_00315fc4 = 0;  // Global at 0x00315fc4                    // 0x001c0a44: sw $zero, 0x5fc4($at)
    a1 = 0x24 << 16;                                            // 0x001c0a48: lui $a1, 0x24
    at = 0x31 << 16;                                            // 0x001c0a4c: lui $at, 0x31
    a1 = a1 + -0x1e88;                                          // 0x001c0a50: addiu $a1, $a1, -0x1e88
    g_00315fd4 = a0;  // Global at 0x00315fd4                   // 0x001c0a54: sw $a0, 0x5fd4($at)
    at = 0x31 << 16;                                            // 0x001c0a58: lui $at, 0x31
    a0 = 0x31 << 16;                                            // 0x001c0a5c: lui $a0, 0x31
    g_0031608c = v0;  // Global at 0x0031608c                   // 0x001c0a60: sw $v0, 0x608c($at)
    a0 = a0 + 0x6032;                                           // 0x001c0a64: addiu $a0, $a0, 0x6032
    v0 = -1;                                                    // 0x001c0a68: addiu $v0, $zero, -1
    at = 0x31 << 16;                                            // 0x001c0a6c: lui $at, 0x31
    func_0010a570();  // 0x10a4d8                                // 0x001c0a70: jal 0x10a4d8
    g_00315fe4 = v0;  // Global at 0x00315fe4                   // 0x001c0a74: sw $v0, 0x5fe4($at)
    at = 0x31 << 16;                                            // 0x001c0a78: lui $at, 0x31
    g_00316090 = s0;  // Global at 0x00316090                   // 0x001c0a7c: sw $s0, 0x6090($at)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c0a84: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c0a88: jr $ra
    sp = sp + 0x20;                                             // 0x001c0a8c: addiu $sp, $sp, 0x20
}