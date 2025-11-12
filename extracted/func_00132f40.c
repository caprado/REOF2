void func_00132f40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x60;                                            // 0x00132f40: addiu $sp, $sp, -0x60
    v1 = a2 + 0x1f;                                             // 0x00132f44: addiu $v1, $a2, 0x1f
    v0 = (a2 < 0) ? 1 : 0;                                      // 0x00132f4c: slti $v0, $a2, 0
    if (v0 != 0) a2 = v1;                                       // 0x00132f54: movn $a2, $v1, $v0
    v1 = v0 << 3;                                               // 0x00132f64: sll $v1, $v0, 3
    v1 = v1 + v0;                                               // 0x00132f6c: addu $v1, $v1, $v0
    a2 = a2 >> 5;                                               // 0x00132f74: sra $a2, $a2, 5
    s0 = v1 << 1;                                               // 0x00132f84: sll $s0, $v1, 1
    s4 = *(int32_t*)((a0) + 0x14);                              // 0x00132f88: lw $s4, 0x14($a0)
    if (s4 == 0) goto label_0x1330c0;                           // 0x00132f8c: beqz $s4, 0x1330c0
    v1 = *(int32_t*)(s4);                                       // 0x00132f98: lw $v1, 0($s4)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x00132fa0: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x00132fa4: jalr $v0
    /* beqzl $s0, 0x132fb4 */                                   // 0x00132fac: beqzl $s0, 0x132fb4
    /* break (trap) */                                          // 0x00132fb0: break 0, 7
    v0 = local_4;                                               // 0x00132fb4: lw $v0, 4($sp)
    a0 = local_0;                                               // 0x00132fbc: lw $a0, 0($sp)
    /* divide: v0 / s0 -> hi:lo */                              // 0x00132fc0: div $zero, $v0, $s0
    /* mflo $v0 */                                              // 0x00132fc4
    func_00107d30();  // 0x107c70                                // 0x00132fd0: jal 0x107c70
    s2 = sp + 0x10;                                             // 0x00132fdc: addiu $s2, $sp, 0x10
    func_00140598();  // 0x1404a0                                // 0x00132fe8: jal 0x1404a0
    v1 = *(int32_t*)(s4);                                       // 0x00132ff0: lw $v1, 0($s4)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x00132ffc: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x00133000: jalr $v0
    a1 = 1;                                                     // 0x00133004: addiu $a1, $zero, 1
    v1 = *(int32_t*)(s4);                                       // 0x00133008: lw $v1, 0($s4)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x00133014: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x00133018: jalr $v0
    v1 = *(int32_t*)(s4);                                       // 0x00133020: lw $v1, 0($s4)
    a2 = s3 - s1;                                               // 0x00133028: subu $a2, $s3, $s1
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x0013302c: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x00133034: jalr $v0
    /* beqzl $s0, 0x133044 */                                   // 0x0013303c: beqzl $s0, 0x133044
    /* break (trap) */                                          // 0x00133040: break 0, 7
    v0 = local_4;                                               // 0x00133044: lw $v0, 4($sp)
    a0 = local_0;                                               // 0x0013304c: lw $a0, 0($sp)
    /* divide: v0 / s0 -> hi:lo */                              // 0x00133050: div $zero, $v0, $s0
    /* mflo $v0 */                                              // 0x00133054
    func_00107d30();  // 0x107c70                                // 0x00133060: jal 0x107c70
    s1 = s1 + s5;                                               // 0x00133064: addu $s1, $s1, $s5
    func_00140598();  // 0x1404a0                                // 0x00133074: jal 0x1404a0
    v1 = *(int32_t*)(s4);                                       // 0x0013307c: lw $v1, 0($s4)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x00133088: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0013308c: jalr $v0
    a1 = 1;                                                     // 0x00133090: addiu $a1, $zero, 1
    v1 = *(int32_t*)(s4);                                       // 0x00133094: lw $v1, 0($s4)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x001330a0: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x001330a4: jalr $v0
    /* divide: s1 / s0 -> hi:lo */                              // 0x001330ac: div $zero, $s1, $s0
    /* beqzl $s0, 0x1330b8 */                                   // 0x001330b0: beqzl $s0, 0x1330b8
    /* break (trap) */                                          // 0x001330b4: break 0, 7
    /* mflo $s1 */                                              // 0x001330b8
    v0 = s1 << 5;                                               // 0x001330bc: sll $v0, $s1, 5
label_0x1330c0:
    return;                                                     // 0x001330dc: jr $ra
    sp = sp + 0x60;                                             // 0x001330e0: addiu $sp, $sp, 0x60
}