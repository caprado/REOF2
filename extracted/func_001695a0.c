void func_001695a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x001695a0: addiu $sp, $sp, -0x20
    /* call function at address in v0 */                        // 0x001695ac: jalr $v0
    a0 = -1;                                                    // 0x001695b4: addiu $a0, $zero, -1
    v1 = local_0;                                               // 0x001695b8: lw $v1, 0($sp)
    v0 = v0 ^ 0;                                                // 0x001695bc: xori $v0, $v0, 0
    if (v0 != 0) a0 = v1;                                       // 0x001695c4: movn $a0, $v1, $v0
    return;                                                     // 0x001695cc: jr $ra
    sp = sp + 0x20;                                             // 0x001695d0: addiu $sp, $sp, 0x20
}