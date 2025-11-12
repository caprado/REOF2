void func_00186a30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_280, local_4;
    
    sp = sp + -0x2d0;                                           // 0x00186a30: addiu $sp, $sp, -0x2d0
    func_00184048();  // 0x183fa0                                // 0x00186a48: jal 0x183fa0
    if (v1 != 0) goto label_0x186adc;                           // 0x00186a54: bnez $v1, 0x186adc
    local_280 = v0;                                             // 0x00186a58: sw $v0, 0x280($sp)
    s0 = sp + 0x200;                                            // 0x00186a5c: addiu $s0, $sp, 0x200
    func_001840a8();  // 0x184048                                // 0x00186a68: jal 0x184048
    if (v1 != 0) goto label_0x186adc;                           // 0x00186a74: bnez $v1, 0x186adc
    local_280 = v0;                                             // 0x00186a78: sw $v0, 0x280($sp)
    func_00184770();  // 0x184320                                // 0x00186a8c: jal 0x184320
    v1 = 0x8101 << 16;                                          // 0x00186a94: lui $v1, 0x8101
    v1 = v1 | 0x11;                                             // 0x00186a9c: ori $v1, $v1, 0x11
    if (a0 != v1) goto label_0x186adc;                          // 0x00186aa0: bne $a0, $v1, 0x186adc
    local_280 = v0;                                             // 0x00186aa4: sw $v0, 0x280($sp)
    v0 = local_0;                                               // 0x00186aa8: lhu $v0, 0($sp)
    v0 = v0 & 0x20;                                             // 0x00186aac: andi $v0, $v0, 0x20
    if (v0 != 0) goto label_0x186ac4;                           // 0x00186ab0: bnez $v0, 0x186ac4
    a1 = local_10;                                              // 0x00186ab4: lw $a1, 0x10($sp)
    v0 = 0x8101 << 16;                                          // 0x00186ab8: lui $v0, 0x8101
    goto label_0x186adc;                                        // 0x00186abc: b 0x186adc
    v0 = v0 | 0x14;                                             // 0x00186ac0: ori $v0, $v0, 0x14
label_0x186ac4:
    a2 = local_4;                                               // 0x00186ac8: lw $a2, 4($sp)
    func_00184a48();  // 0x184918                                // 0x00186acc: jal 0x184918
    a3 = sp + 0x280;                                            // 0x00186ad0: addiu $a3, $sp, 0x280
    v1 = local_280;                                             // 0x00186ad4: lw $v1, 0x280($sp)
    if (v1 != 0) v0 = v1;                                       // 0x00186ad8: movn $v0, $v1, $v1
label_0x186adc:
    return;                                                     // 0x00186aec: jr $ra
    sp = sp + 0x2d0;                                            // 0x00186af0: addiu $sp, $sp, 0x2d0
}