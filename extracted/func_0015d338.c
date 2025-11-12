void func_0015d338() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015d338: addiu $sp, $sp, -0x10
    func_0015e348();  // 0x15e338                                // 0x0015d344: jal 0x15e338
    a0 = *(int32_t*)((v0) + 0x30);                              // 0x0015d34c: lw $a0, 0x30($v0)
    v0 = *(int32_t*)((v0) + 0x28);                              // 0x0015d350: lw $v0, 0x28($v0)
    /* call function at address in v0 */                        // 0x0015d354: jalr $v0
    return;                                                     // 0x0015d364: jr $ra
    sp = sp + 0x10;                                             // 0x0015d368: addiu $sp, $sp, 0x10
}