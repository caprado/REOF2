void func_00164830() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00164830: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)(a0);                                       // 0x00164834: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x00164844: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x00164848: jalr $v0
    return;                                                     // 0x00164854: jr $ra
    sp = sp + 0x10;                                             // 0x00164858: addiu $sp, $sp, 0x10
}