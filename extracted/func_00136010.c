void func_00136010() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00136010: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x136030;                           // 0x00136014: bnez $a0, 0x136030
    a0 = 0x22 << 16;                                            // 0x0013601c: lui $a0, 0x22
    a0 = &str_00224560;  // "cvFsSetSctLen #4:vtbl error"       // 0x00136024: addiu $a0, $a0, 0x4560
    return func_00134fb0();  // Tail call                        // 0x00136028: j 0x134ec0
    sp = sp + 0x10;                                             // 0x0013602c: addiu $sp, $sp, 0x10
label_0x136030:
    v0 = str_00224560;  // "cvFsSetSctLen #4:vtbl error"        // 0x00136030: lw $v0, 0($a0)
    v0 = *(int32_t*)((v0) + 0x34);                              // 0x00136034: lw $v0, 0x34($v0)
    /* beqzl $v0, 0x136058 */                                   // 0x00136038: beqzl $v0, 0x136058
    a0 = 0x22 << 16;                                            // 0x0013603c: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x00136040: jalr $v0
    a0 = g_00220004;  // Global at 0x00220004                   // 0x00136044: lw $a0, 4($a0)
    return;                                                     // 0x0013604c: jr $ra
    sp = sp + 0x10;                                             // 0x00136050: addiu $sp, $sp, 0x10
}