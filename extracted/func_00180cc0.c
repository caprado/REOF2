void func_00180cc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00180cc0: addiu $sp, $sp, -0x10
    if (a0 > 0) goto label_0x180cd8;                            // 0x00180cc4: bgtz $a0, 0x180cd8
    v0 = 0x8101 << 16;                                          // 0x00180ccc: lui $v0, 0x8101
    goto label_0x180cec;                                        // 0x00180cd0: b 0x180cec
    v0 = v0 | 0x16;                                             // 0x00180cd4: ori $v0, $v0, 0x16
label_0x180cd8:
    v0 = 0x27 << 16;                                            // 0x00180cd8: lui $v0, 0x27
    RotateThreadReadyQueue();  // 0x114180                      // 0x00180ce0: jal 0x114180
    a0 = g_0026b1a0;  // Global at 0x0026b1a0                   // 0x00180ce4: lw $a0, -0x4e60($v0)
label_0x180cec:
    return;                                                     // 0x00180cf0: jr $ra
    sp = sp + 0x10;                                             // 0x00180cf4: addiu $sp, $sp, 0x10
}