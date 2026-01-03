void func_0015a730() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4;
    
    sp = sp + -0x70;                                            // 0x0015a730: addiu $sp, $sp, -0x70
    s2 = 4;                                                     // 0x0015a738: addiu $s2, $zero, 4
    s6 = *(int32_t*)((s3) + 0x384);                             // 0x0015a76c: lw $s6, 0x384($s3)
    goto label_0x15a77c;                                        // 0x0015a770: b 0x15a77c
    s0 = a2 + -3;                                               // 0x0015a774: addiu $s0, $a2, -3
label_0x15a778:
    s2 = s2 + 1;                                                // 0x0015a778: addiu $s2, $s2, 1
label_0x15a77c:
    v0 = (s2 < s0) ? 1 : 0;                                     // 0x0015a77c: slt $v0, $s2, $s0
    if (v0 == 0) goto label_0x15a798;                           // 0x0015a780: beqz $v0, 0x15a798
    v1 = s2 ^ s0;                                               // 0x0015a784: xor $v1, $s2, $s0
    func_00158278();  // 158278                                // 0x0015a788: jal 0x158278
    a0 = s5 + s2;                                               // 0x0015a78c: addu $a0, $s5, $s2
    if (v0 == 0) goto label_0x15a778;                           // 0x0015a790: beqz $v0, 0x15a778
    v1 = s2 ^ s0;                                               // 0x0015a794: xor $v1, $s2, $s0
label_0x15a798:
    s7 = -1;                                                    // 0x0015a798: addiu $s7, $zero, -1
    v0 = 1;                                                     // 0x0015a79c: addiu $v0, $zero, 1
    if (s6 != v0) goto label_0x15a7bc;                          // 0x0015a7a0: bne $s6, $v0, 0x15a7bc
    if (v1 != 0) s7 = 0;                                        // 0x0015a7a4: movn $s7, $zero, $v1
    func_0015a8f8();  // 15a8f8                                // 0x0015a7b0: jal 0x15a8f8
label_0x15a7bc:
    v0 = s6 << 1;                                               // 0x0015a7bc: sll $v0, $s6, 1
    v0 = v0 + s6;                                               // 0x0015a7c0: addu $v0, $v0, $s6
    v0 = v0 << 2;                                               // 0x0015a7c4: sll $v0, $v0, 2
    s4 = v0 + 0x380;                                            // 0x0015a7c8: addiu $s4, $v0, 0x380
    v1 = s3 + s4;                                               // 0x0015a7cc: addu $v1, $s3, $s4
    s1 = *(int32_t*)((v1) + 8);                                 // 0x0015a7d0: lw $s1, 8($v1)
    if (s1 == 0) goto label_0x15a894;                           // 0x0015a7d4: beqz $s1, 0x15a894
    v1 = *(int32_t*)(s1);                                       // 0x0015a7dc: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x0015a7e8: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x0015a7ec: jalr $v0
    a0 = local_0;                                               // 0x0015a7f8: lw $a0, 0($sp)
    func_00107ab8();  // 107ab8                                // 0x0015a7fc: jal 0x107ab8
    a2 = local_4;                                               // 0x0015a800: lw $a2, 4($sp)
    v1 = *(int32_t*)(s1);                                       // 0x0015a804: lw $v1, 0($s1)
    a1 = 1;                                                     // 0x0015a80c: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0015a810: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0015a814: jalr $v0
    a0 = local_4;                                               // 0x0015a81c: lw $a0, 4($sp)
    v0 = (a0 < s2) ? 1 : 0;                                     // 0x0015a820: slt $v0, $a0, $s2
    if (v0 == 0) goto label_0x15a87c;                           // 0x0015a824: beqz $v0, 0x15a87c
    v0 = s3 + s4;                                               // 0x0015a828: addu $v0, $s3, $s4
    v1 = *(int32_t*)(s1);                                       // 0x0015a82c: lw $v1, 0($s1)
    s0 = sp + 0x10;                                             // 0x0015a830: addiu $s0, $sp, 0x10
    a2 = s2 - a0;                                               // 0x0015a834: subu $a2, $s2, $a0
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x0015a83c: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x0015a844: jalr $v0
    a1 = local_4;                                               // 0x0015a84c: lw $a1, 4($sp)
    a0 = local_10;                                              // 0x0015a850: lw $a0, 0x10($sp)
    a2 = local_14;                                              // 0x0015a854: lw $a2, 0x14($sp)
    func_00107ab8();  // 107ab8                                // 0x0015a858: jal 0x107ab8
    a1 = s5 + a1;                                               // 0x0015a85c: addu $a1, $s5, $a1
    v1 = *(int32_t*)(s1);                                       // 0x0015a860: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0015a86c: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0015a870: jalr $v0
    a1 = 1;                                                     // 0x0015a874: addiu $a1, $zero, 1
    v0 = s3 + s4;                                               // 0x0015a878: addu $v0, $s3, $s4
label_0x15a87c:
    v1 = *(int32_t*)((v0) + 0xc);                               // 0x0015a87c: lw $v1, 0xc($v0)
    /* beqzl $v1, 0x15a898 */                                   // 0x0015a880: beqzl $v1, 0x15a898
    v0 = 3;                                                     // 0x0015a884: addiu $v0, $zero, 3
    a0 = *(int32_t*)((v0) + 0x10);                              // 0x0015a888: lw $a0, 0x10($v0)
    /* call function at address in v1 */                        // 0x0015a88c: jalr $v1
label_0x15a894:
    v0 = 3;                                                     // 0x0015a894: addiu $v0, $zero, 3
    if (s6 != v0) goto label_0x15a8c4;                          // 0x0015a898: bne $s6, $v0, 0x15a8c4
    a0 = *(int32_t*)((s3) + 0x3b8);                             // 0x0015a8a0: lw $a0, 0x3b8($s3)
    if (a0 == 0) goto label_0x15a8c4;                           // 0x0015a8a4: beqz $a0, 0x15a8c4
    a2 = *(int32_t*)((s3) + 0x3bc);                             // 0x0015a8ac: lw $a2, 0x3bc($s3)
    v0 = (s2 < a2) ? 1 : 0;                                     // 0x0015a8b0: slt $v0, $s2, $a2
    if (v0 != 0) a2 = s2;                                       // 0x0015a8b4: movn $a2, $s2, $v0
    func_00107ab8();  // 107ab8                                // 0x0015a8b8: jal 0x107ab8
    *(uint32_t*)((s3) + 0x3c0) = a2;                            // 0x0015a8bc: sw $a2, 0x3c0($s3)
label_0x15a8c4:
    if (fp == 0) v0 = s7;                                       // 0x0015a8c8: movz $v0, $s7, $fp
    return;                                                     // 0x0015a8f0: jr $ra
    sp = sp + 0x70;                                             // 0x0015a8f4: addiu $sp, $sp, 0x70
}