void func_00188a68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x21 << 16;                                            // 0x00188a68: lui $v1, 0x21
    sp = sp + -0x10;                                            // 0x00188a6c: addiu $sp, $sp, -0x10
    v0 = g_00216338;  // Global at 0x00216338                   // 0x00188a70: lw $v0, 0x6338($v1)
    if (v0 != 0) goto label_0x188a84;                           // 0x00188a74: bnez $v0, 0x188a84
    goto label_0x188aa4;                                        // 0x00188a7c: b 0x188aa4
label_0x188a84:
    v0 = 0x28 << 16;                                            // 0x00188a84: lui $v0, 0x28
    g_00216338 = 0;  // Global at 0x00216338                    // 0x00188a88: sw $zero, 0x6338($v1)
    a0 = g_00284800;  // Global at 0x00284800                   // 0x00188a8c: lw $a0, 0x4800($v0)
    if (a0 < 0) goto label_0x188aa4;                            // 0x00188a90: bltz $a0, 0x188aa4
    v0 = 1;                                                     // 0x00188a94: addiu $v0, $zero, 1
    SignalSema();  // 0x1142f0                                  // 0x00188a98: jal 0x1142f0
    /* nop */                                                   // 0x00188a9c: nop 
    v0 = 1;                                                     // 0x00188aa0: addiu $v0, $zero, 1
label_0x188aa4:
    return;                                                     // 0x00188aa8: jr $ra
    sp = sp + 0x10;                                             // 0x00188aac: addiu $sp, $sp, 0x10
}