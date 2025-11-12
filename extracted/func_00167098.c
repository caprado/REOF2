void func_00167098() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x30;                                            // 0x00167098: addiu $sp, $sp, -0x30
    s1 = ((unsigned)a1 < (unsigned)1) ? 1 : 0;                  // 0x001670a8: sltiu $s1, $a1, 1
    v1 = *(int32_t*)(s0);                                       // 0x001670b0: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x001670b4: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x001670b8: jalr $v0
    v1 = *(int32_t*)(s0);                                       // 0x001670c0: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x001670cc: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x001670d0: jalr $v0
    v0 = local_4;                                               // 0x001670d8: lw $v0, 4($sp)
    return;                                                     // 0x001670e8: jr $ra
    sp = sp + 0x30;                                             // 0x001670ec: addiu $sp, $sp, 0x30
}