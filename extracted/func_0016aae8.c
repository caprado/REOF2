void func_0016aae8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x30;                                            // 0x0016aae8: addiu $sp, $sp, -0x30
    v1 = *(int32_t*)(s0);                                       // 0x0016ab04: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x0016ab08: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x0016ab0c: jalr $v0
    a0 = local_0;                                               // 0x0016ab18: lw $a0, 0($sp)
    func_00155db0();  // 0x155b20                                // 0x0016ab1c: jal 0x155b20
    a2 = local_4;                                               // 0x0016ab20: lw $a2, 4($sp)
    v1 = *(int32_t*)(s0);                                       // 0x0016ab24: lw $v1, 0($s0)
    a1 = 1;                                                     // 0x0016ab2c: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0016ab30: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0016ab34: jalr $v0
    v0 = local_4;                                               // 0x0016ab3c: lw $v0, 4($sp)
    return;                                                     // 0x0016ab4c: jr $ra
    sp = sp + 0x30;                                             // 0x0016ab50: addiu $sp, $sp, 0x30
}