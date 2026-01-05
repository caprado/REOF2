void func_00166010() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00166010: addiu $sp, $sp, -0x20
    a1 = 6;                                                     // 0x0016601c: addiu $a1, $zero, 6
    func_001752e8();  // 1752e8                                // 0x00166028: jal 0x1752e8
    /* beqzl $v0, 0x166054 */                                   // 0x00166030: beqzl $v0, 0x166054
    v0 = *(int32_t*)((s0) + 0x1c84);                            // 0x00166038: lw $v0, 0x1c84($s0)
    v0 = *(int32_t*)((v0) + 0x14);                              // 0x0016603c: lw $v0, 0x14($v0)
    if (v0 == 0) goto label_0x166050;                           // 0x00166040: beqz $v0, 0x166050
    /* call function at address in v0 */                        // 0x00166048: jalr $v0
label_0x166050:
    return;                                                     // 0x0016605c: jr $ra
    sp = sp + 0x20;                                             // 0x00166060: addiu $sp, $sp, 0x20
}