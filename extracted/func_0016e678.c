void func_0016e678() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8, local_c;
    
    sp = sp + -0x50;                                            // 0x0016e678: addiu $sp, $sp, -0x50
    s1 = s0 + 0xcc0;                                            // 0x0016e688: addiu $s1, $s0, 0xcc0
    v1 = s0 + 0xda4;                                            // 0x0016e6a0: addiu $v1, $s0, 0xda4
    a2 = s0 + 0xd54;                                            // 0x0016e6a8: addiu $a2, $s0, 0xd54
    v0 = *(int32_t*)(v1);                                       // 0x0016e6b0: lw $v0, 0($v1)
    if (v0 == 0) goto label_0x16e6d0;                           // 0x0016e6b4: beqz $v0, 0x16e6d0
    s5 = *(int32_t*)((s0) + 0x1b30);                            // 0x0016e6b8: lw $s5, 0x1b30($s0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0016e6bc: lw $v0, 0x20($v1)
    v1 = *(int32_t*)((a2) + 0x20);                              // 0x0016e6c0: lw $v1, 0x20($a2)
    a0 = *(int32_t*)((s1) + 0x120);                             // 0x0016e6c4: lw $a0, 0x120($s1)
    v1 = v1 - v0;                                               // 0x0016e6c8: subu $v1, $v1, $v0
    s4 = v1 + a0;                                               // 0x0016e6cc: addu $s4, $v1, $a0
label_0x16e6d0:
    v0 = *(int32_t*)((s1) + 0x18);                              // 0x0016e6d0: lw $v0, 0x18($s1)
    if (v0 == 0) goto label_0x16e6f8;                           // 0x0016e6d4: beqz $v0, 0x16e6f8
    s3 = *(int32_t*)((a2) + 0x24);                              // 0x0016e6d8: lw $s3, 0x24($a2)
    /* call function at address in v0 */                        // 0x0016e6e8: jalr $v0
    goto label_0x16e7d0;                                        // 0x0016e6f0: b 0x16e7d0
label_0x16e6f8:
    v0 = 1;                                                     // 0x0016e6f8: addiu $v0, $zero, 1
    if (s2 != v0) goto label_0x16e714;                          // 0x0016e6fc: bnel $s2, $v0, 0x16e714
    v0 = s2 + -1;                                               // 0x0016e700: addiu $v0, $s2, -1
    func_00175978();  // 175978                                // 0x0016e708: jal 0x175978
    v0 = s2 + -1;                                               // 0x0016e710: addiu $v0, $s2, -1
label_0x16e714:
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0016e714: sltiu $v0, $v0, 2
    if (v0 == 0) goto label_0x16e72c;                           // 0x0016e718: beqz $v0, 0x16e72c
    func_00175a18();  // 175a18                                // 0x0016e720: jal 0x175a18
label_0x16e72c:
    func_00177108();  // 177108                                // 0x0016e72c: jal 0x177108
    v0 = (v0 < 0x3e9) ? 1 : 0;                                  // 0x0016e734: slti $v0, $v0, 0x3e9
    if (v0 == 0) goto label_0x16e758;                           // 0x0016e738: beqz $v0, 0x16e758
    v1 = *(int32_t*)((s5) + 0x84);                              // 0x0016e740: lw $v1, 0x84($s5)
    a0 = *(int32_t*)((s0) + 0xa38);                             // 0x0016e744: lw $a0, 0xa38($s0)
    v1 = (v1 < a0) ? 1 : 0;                                     // 0x0016e748: slt $v1, $v1, $a0
    if (v1 == 0) goto label_0x16e7cc;                           // 0x0016e74c: beqz $v1, 0x16e7cc
label_0x16e758:
    func_00176010();  // 176010                                // 0x0016e75c: jal 0x176010
    a2 = sp + 4;                                                // 0x0016e760: addiu $a2, $sp, 4
    v1 = local_0;                                               // 0x0016e764: lw $v1, 0($sp)
    if (v1 < 0) goto label_0x16e7cc;                            // 0x0016e768: bltz $v1, 0x16e7cc
    a2 = sp + 8;                                                // 0x0016e778: addiu $a2, $sp, 8
    func_0016e7f0();  // 16e7f0                                // 0x0016e77c: jal 0x16e7f0
    a3 = sp + 0xc;                                              // 0x0016e780: addiu $a3, $sp, 0xc
    a2 = local_8;                                               // 0x0016e788: lw $a2, 8($sp)
    v0 = local_c;                                               // 0x0016e78c: lw $v0, 0xc($sp)
    /* beqzl $v0, 0x16e79c */                                   // 0x0016e794: beqzl $v0, 0x16e79c
    /* break (trap) */                                          // 0x0016e798: break 0, 7
    a0 = local_0;                                               // 0x0016e79c: lw $a0, 0($sp)
    a1 = local_4;                                               // 0x0016e7a0: lw $a1, 4($sp)
    /* divide: a2 / v0 -> hi:lo */                              // 0x0016e7a4: div $zero, $a2, $v0
    /* mflo $a2 */                                              // 0x0016e7a8
    func_0014fea8();  // 14fea8                                // 0x0016e7ac: jal 0x14fea8
    a2 = s4 - a2;                                               // 0x0016e7b0: subu $a2, $s4, $a2
    if (v0 != 0) goto label_0x16e7cc;                           // 0x0016e7b4: bnez $v0, 0x16e7cc
    v1 = *(int32_t*)((s5) + 0x84);                              // 0x0016e7bc: lw $v1, 0x84($s5)
    v0 = 1;                                                     // 0x0016e7c0: addiu $v0, $zero, 1
    v1 = v1 + 1;                                                // 0x0016e7c4: addiu $v1, $v1, 1
    *(uint32_t*)((s5) + 0x84) = v1;                             // 0x0016e7c8: sw $v1, 0x84($s5)
label_0x16e7cc:
label_0x16e7d0:
    return;                                                     // 0x0016e7e8: jr $ra
    sp = sp + 0x50;                                             // 0x0016e7ec: addiu $sp, $sp, 0x50
}