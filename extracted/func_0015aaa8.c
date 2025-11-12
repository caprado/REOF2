void func_0015aaa8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x50;                                            // 0x0015aaa8: addiu $sp, $sp, -0x50
    s3 = sp + 0x10;                                             // 0x0015aab8: addiu $s3, $sp, 0x10
    goto label_0x15ab90;                                        // 0x0015aac4: b 0x15ab90
    /* nop */                                                   // 0x0015aacc: nop 
label_0x15aad0:
    func_00158518();  // 0x158410                                // 0x0015aad0: jal 0x158410
    a0 = local_0;                                               // 0x0015aad4: lw $a0, 0($sp)
    if (s1 != 0) goto label_0x15ab30;                           // 0x0015aae4: bnez $s1, 0x15ab30
    a1 = local_4;                                               // 0x0015aaec: lw $a1, 4($sp)
    func_00140598();  // 0x1404a0                                // 0x0015aaf0: jal 0x1404a0
    a1 = a1 + -3;                                               // 0x0015aaf4: addiu $a1, $a1, -3
    v1 = *(int32_t*)(s0);                                       // 0x0015aaf8: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0015ab04: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0015ab08: jalr $v0
    v1 = *(int32_t*)(s0);                                       // 0x0015ab10: lw $v1, 0($s0)
    a1 = 1;                                                     // 0x0015ab18: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0015ab1c: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0015ab20: jalr $v0
    goto label_0x15ab94;                                        // 0x0015ab28: b 0x15ab94
    v1 = *(int32_t*)(s0);                                       // 0x0015ab2c: lw $v1, 0($s0)
label_0x15ab30:
    func_00158310();  // 0x158278                                // 0x0015ab30: jal 0x158278
    a1 = local_0;                                               // 0x0015ab3c: lw $a1, 0($sp)
    func_00140598();  // 0x1404a0                                // 0x0015ab4c: jal 0x1404a0
    a1 = s1 - a1;                                               // 0x0015ab50: subu $a1, $s1, $a1
    v1 = *(int32_t*)(s0);                                       // 0x0015ab54: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0015ab60: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0015ab64: jalr $v0
    v1 = *(int32_t*)(s0);                                       // 0x0015ab6c: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0015ab78: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0015ab7c: jalr $v0
    a1 = 1;                                                     // 0x0015ab80: addiu $a1, $zero, 1
    goto label_0x15abe4;                                        // 0x0015ab84: b 0x15abe4
    /* nop */                                                   // 0x0015ab8c: nop 
label_0x15ab90:
    v1 = *(int32_t*)(s0);                                       // 0x0015ab90: lw $v1, 0($s0)
label_0x15ab94:
    a2 = 0x7fff << 16;                                          // 0x0015ab94: lui $a2, 0x7fff
    a1 = 1;                                                     // 0x0015ab98: addiu $a1, $zero, 1
    a2 = a2 | 0xffff;                                           // 0x0015ab9c: ori $a2, $a2, 0xffff
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x0015aba0: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x0015aba8: jalr $v0
    v0 = local_4;                                               // 0x0015abb0: lw $v0, 4($sp)
    v0 = (v0 < 4) ? 1 : 0;                                      // 0x0015abb8: slti $v0, $v0, 4
    if (v0 == 0) goto label_0x15aad0;                           // 0x0015abbc: beqz $v0, 0x15aad0
    a2 = -1;                                                    // 0x0015abc0: addiu $a2, $zero, -1
    v1 = *(int32_t*)(s0);                                       // 0x0015abc4: lw $v1, 0($s0)
    a1 = 1;                                                     // 0x0015abcc: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0015abd4: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0015abd8: jalr $v0
label_0x15abe4:
    return;                                                     // 0x0015abf8: jr $ra
    sp = sp + 0x50;                                             // 0x0015abfc: addiu $sp, $sp, 0x50
}