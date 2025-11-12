void func_00150380() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00150380: addiu $sp, $sp, -0x10
    if (v0 == 0) goto label_0x1503a8;                           // 0x0015038c: beqz $v0, 0x1503a8
    *(uint32_t*)((a0) + 8) = v0;                                // 0x00150390: sw $v0, 8($a0)
    v0 = *(int32_t*)(a0);                                       // 0x00150394: lw $v0, 0($a0)
    /* beqzl $v0, 0x1503ac */                                   // 0x00150398: beqzl $v0, 0x1503ac
    /* call function at address in v0 */                        // 0x001503a0: jalr $v0
    a0 = *(int32_t*)((a0) + 4);                                 // 0x001503a4: lw $a0, 4($a0)
label_0x1503a8:
    return;                                                     // 0x001503ac: jr $ra
    sp = sp + 0x10;                                             // 0x001503b0: addiu $sp, $sp, 0x10
}