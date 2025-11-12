void func_00136068() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00136068: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x136090;                           // 0x00136074: bnez $a0, 0x136090
    a0 = 0x22 << 16;                                            // 0x0013607c: lui $a0, 0x22
    func_00134fb0();  // 0x134ec0                                // 0x00136080: jal 0x134ec0
    a0 = &str_002245a0;  // "cvFsGetNumTr #2:vtbl error"        // 0x00136084: addiu $a0, $a0, 0x45a0
    goto label_0x1360bc;                                        // 0x00136088: b 0x1360bc
label_0x136090:
    v0 = str_002245a0;  // "cvFsGetNumTr #2:vtbl error"         // 0x00136090: lw $v0, 0($a0)
    v0 = *(int32_t*)((v0) + 0x38);                              // 0x00136094: lw $v0, 0x38($v0)
    /* beqzl $v0, 0x1360b0 */                                   // 0x00136098: beqzl $v0, 0x1360b0
    a0 = 0x22 << 16;                                            // 0x0013609c: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x001360a0: jalr $v0
    a0 = g_00220004;  // Global at 0x00220004                   // 0x001360a4: lw $a0, 4($a0)
    goto label_0x1360b8;                                        // 0x001360a8: b 0x1360b8
    func_00134fb0();  // 0x134ec0                                // 0x001360b0: jal 0x134ec0
    a0 = &str_002245c0;  // "cvFsChangeDir #1:illegal directory name" // 0x001360b4: addiu $a0, $a0, 0x45c0
label_0x1360b8:
label_0x1360bc:
    return;                                                     // 0x001360c4: jr $ra
    sp = sp + 0x10;                                             // 0x001360c8: addiu $sp, $sp, 0x10
}