void func_00135b58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00135b58: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x135b78;                           // 0x00135b5c: bnez $a0, 0x135b78
    a0 = 0x22 << 16;                                            // 0x00135b64: lui $a0, 0x22
    a0 = &str_002242f0;  // "cvFsStopTr #2:vtbl error"          // 0x00135b6c: addiu $a0, $a0, 0x42f0
    return func_00134fb0();  // Tail call                        // 0x00135b70: j 0x134ec0
    sp = sp + 0x10;                                             // 0x00135b74: addiu $sp, $sp, 0x10
label_0x135b78:
    v0 = str_002242f0;  // "cvFsStopTr #2:vtbl error"           // 0x00135b78: lw $v0, 0($a0)
    v0 = *(int32_t*)((v0) + 0x28);                              // 0x00135b7c: lw $v0, 0x28($v0)
    /* beqzl $v0, 0x135ba0 */                                   // 0x00135b80: beqzl $v0, 0x135ba0
    a0 = 0x22 << 16;                                            // 0x00135b84: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x00135b88: jalr $v0
    a0 = g_00220004;  // Global at 0x00220004                   // 0x00135b8c: lw $a0, 4($a0)
    return;                                                     // 0x00135b94: jr $ra
    sp = sp + 0x10;                                             // 0x00135b98: addiu $sp, $sp, 0x10
}