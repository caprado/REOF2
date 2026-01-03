void func_00130be0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00130be0: addiu $sp, $sp, -0x20
    func_001261a0();  // 1261a0                                // 0x00130bfc: jal 0x1261a0
    *(uint32_t*)((s2) + 4) = s0;                                // 0x00130c00: sw $s0, 4($s2)
    v1 = *(int32_t*)(s0);                                       // 0x00130c04: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x00130c0c: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x00130c10: jalr $v0
    v1 = *(int32_t*)(s0);                                       // 0x00130c18: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x00130c24: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x00130c28: jalr $v0
    a1 = 1;                                                     // 0x00130c2c: addiu $a1, $zero, 1
    s1 = s1 + v0;                                               // 0x00130c30: addu $s1, $s1, $v0
    func_001261b8();  // 1261b8                                // 0x00130c34: jal 0x1261b8
    *(uint32_t*)((s2) + 0x3c) = s1;                             // 0x00130c38: sw $s1, 0x3c($s2)
    v0 = *(int32_t*)((s2) + 0x3c);                              // 0x00130c3c: lw $v0, 0x3c($s2)
    *(uint32_t*)((s2) + 0x18) = v0;                             // 0x00130c44: sw $v0, 0x18($s2)
    *(uint32_t*)((s2) + 0x14) = v0;                             // 0x00130c48: sw $v0, 0x14($s2)
    return;                                                     // 0x00130c58: jr $ra
    sp = sp + 0x20;                                             // 0x00130c5c: addiu $sp, $sp, 0x20
}