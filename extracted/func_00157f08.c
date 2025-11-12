void func_00157f08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00157f08: addiu $sp, $sp, -0x10
    if (v0 == 0) goto label_0x157f30;                           // 0x00157f14: beqz $v0, 0x157f30
    *(uint32_t*)((a0) + 8) = v0;                                // 0x00157f18: sw $v0, 8($a0)
    v0 = *(int32_t*)(a0);                                       // 0x00157f1c: lw $v0, 0($a0)
    /* beqzl $v0, 0x157f34 */                                   // 0x00157f20: beqzl $v0, 0x157f34
    /* call function at address in v0 */                        // 0x00157f28: jalr $v0
    a0 = *(int32_t*)((a0) + 4);                                 // 0x00157f2c: lw $a0, 4($a0)
label_0x157f30:
    return;                                                     // 0x00157f34: jr $ra
    sp = sp + 0x10;                                             // 0x00157f38: addiu $sp, $sp, 0x10
}