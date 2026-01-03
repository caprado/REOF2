void func_0012c818() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012c818: addiu $sp, $sp, -0x10
    if (s0 == 0) goto label_0x12c868;                           // 0x0012c824: beqz $s0, 0x12c868
    v0 = *(int32_t*)((s0) + 4);                                 // 0x0012c82c: lw $v0, 4($s0)
    if (v0 == 0) goto label_0x12c840;                           // 0x0012c830: beqz $v0, 0x12c840
    func_00124660();  // 124660                                // 0x0012c838: jal 0x124660
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0012c83c: sw $zero, 4($s0)
label_0x12c840:
    func_001261a0();  // 1261a0                                // 0x0012c840: jal 0x1261a0
    /* nop */                                                   // 0x0012c844: nop 
    func_00107c70();  // 107c70                                // 0x0012c850: jal 0x107c70
    a2 = 0x9c;                                                  // 0x0012c854: addiu $a2, $zero, 0x9c
    return func_001261d0();  // Tail call                        // 0x0012c860: j 0x1261b8
    sp = sp + 0x10;                                             // 0x0012c864: addiu $sp, $sp, 0x10
label_0x12c868:
    return;                                                     // 0x0012c870: jr $ra
    sp = sp + 0x10;                                             // 0x0012c874: addiu $sp, $sp, 0x10
}