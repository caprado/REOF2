void func_001c9410() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c9410: addiu $sp, $sp, -0x10
    func_001c88d0();  // 0x1c8890                                // 0x001c9418: jal 0x1c8890
    /* nop */                                                   // 0x001c941c: nop 
    v1 = -1;                                                    // 0x001c9424: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c9448;                          // 0x001c942c: beq $v0, $v1, 0x1c9448
    v1 = -0x21;                                                 // 0x001c9430: addiu $v1, $zero, -0x21
    if (v0 == v1) goto label_0x1c9448;                          // 0x001c9434: beq $v0, $v1, 0x1c9448
    /* nop */                                                   // 0x001c9438: nop 
    goto label_0x1c9450;                                        // 0x001c943c: b 0x1c9450
    /* nop */                                                   // 0x001c9440: nop 
    /* nop */                                                   // 0x001c9444: nop 
label_0x1c9448:
    v0 = -1;                                                    // 0x001c9448: addiu $v0, $zero, -1
    /* nop */                                                   // 0x001c944c: nop 
label_0x1c9450:
    at = 0x31 << 16;                                            // 0x001c9450: lui $at, 0x31
    g_00316aac = 0;  // Global at 0x00316aac                    // 0x001c9454: sb $zero, 0x6aac($at)
    return;                                                     // 0x001c945c: jr $ra
    sp = sp + 0x10;                                             // 0x001c9460: addiu $sp, $sp, 0x10
}