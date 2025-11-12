void func_0016c6c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10;
    
    sp = sp + -0x40;                                            // 0x0016c6c0: addiu $sp, $sp, -0x40
    v0 = 1;                                                     // 0x0016c6c4: addiu $v0, $zero, 1
    if (s1 == 0) goto label_0x16c84c;                           // 0x0016c6e0: beqz $s1, 0x16c84c
    local_10 = a1;                                              // 0x0016c6e4: sw $a1, 0x10($sp)
    v1 = *(int32_t*)(s2);                                       // 0x0016c6e8: lw $v1, 0($s2)
    if (s1 == v1) goto label_0x16c850;                          // 0x0016c6ec: beql $s1, $v1, 0x16c850
    v0 = ((unsigned)s1 < (unsigned)v1) ? 1 : 0;                 // 0x0016c6f4: sltu $v0, $s1, $v1
    /* bnezl $v0, 0x16c768 */                                   // 0x0016c6f8: bnezl $v0, 0x16c768
    v1 = *(int32_t*)((s2) + 8);                                 // 0x0016c6fc: lw $v1, 8($s2)
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0016c700: lw $v0, 4($s2)
    v0 = v1 + v0;                                               // 0x0016c704: addu $v0, $v1, $v0
    v1 = ((unsigned)s1 < (unsigned)v0) ? 1 : 0;                 // 0x0016c708: sltu $v1, $s1, $v0
    /* beqzl $v1, 0x16c768 */                                   // 0x0016c70c: beqzl $v1, 0x16c768
    v1 = *(int32_t*)((s2) + 8);                                 // 0x0016c710: lw $v1, 8($s2)
    v0 = s1 - v0;                                               // 0x0016c714: subu $v0, $s1, $v0
    s0 = v0 + 4;                                                // 0x0016c718: addiu $s0, $v0, 4
    if (s0 <= 0) goto label_0x16c798;                           // 0x0016c71c: blez $s0, 0x16c798
    /* nop */                                                   // 0x0016c720: nop 
    v1 = *(int32_t*)((s2) + 0xc);                               // 0x0016c724: lw $v1, 0xc($s2)
    v1 = (v1 < s0) ? 1 : 0;                                     // 0x0016c728: slt $v1, $v1, $s0
    if (v1 != 0) goto label_0x16c84c;                           // 0x0016c72c: bnez $v1, 0x16c84c
    v0 = 1;                                                     // 0x0016c730: addiu $v0, $zero, 1
    a2 = 4;                                                     // 0x0016c734: addiu $a2, $zero, 4
    a2 = a2 - s0;                                               // 0x0016c73c: subu $a2, $a2, $s0
    func_00107b68();  // 0x107ab8                                // 0x0016c740: jal 0x107ab8
    a1 = *(int32_t*)((s2) + 8);                                 // 0x0016c748: lw $a1, 8($s2)
    a0 = sp - s0;                                               // 0x0016c74c: subu $a0, $sp, $s0
    func_00107b68();  // 0x107ab8                                // 0x0016c754: jal 0x107ab8
    a0 = a0 + 4;                                                // 0x0016c758: addiu $a0, $a0, 4
    goto label_0x16c7a8;                                        // 0x0016c75c: b 0x16c7a8
    /* nop */                                                   // 0x0016c760: nop 
    /* nop */                                                   // 0x0016c764: nop 
    v0 = ((unsigned)s1 < (unsigned)v1) ? 1 : 0;                 // 0x0016c768: sltu $v0, $s1, $v1
    if (v0 != 0) goto label_0x16c84c;                           // 0x0016c76c: bnez $v0, 0x16c84c
    v0 = 1;                                                     // 0x0016c770: addiu $v0, $zero, 1
    v0 = *(int32_t*)((s2) + 0xc);                               // 0x0016c774: lw $v0, 0xc($s2)
    v0 = v1 + v0;                                               // 0x0016c778: addu $v0, $v1, $v0
    v1 = ((unsigned)s1 < (unsigned)v0) ? 1 : 0;                 // 0x0016c77c: sltu $v1, $s1, $v0
    /* beqzl $v1, 0x16c84c */                                   // 0x0016c780: beqzl $v1, 0x16c84c
    v0 = 1;                                                     // 0x0016c784: addiu $v0, $zero, 1
    v1 = s1 - v0;                                               // 0x0016c788: subu $v1, $s1, $v0
    s0 = v1 + 4;                                                // 0x0016c78c: addiu $s0, $v1, 4
    if (s0 > 0) goto label_0x16c84c;                            // 0x0016c790: bgtz $s0, 0x16c84c
    v0 = 1;                                                     // 0x0016c794: addiu $v0, $zero, 1
label_0x16c798:
    /* lwl $v0, 3($s1) */                                       // 0x0016c798: lwl $v0, 3($s1)
    /* lwr $v0, 0($s1) */                                       // 0x0016c79c: lwr $v0, 0($s1)
    /* swl $v0, 3($sp) */                                       // 0x0016c7a0: swl $v0, 3($sp)
    /* swr $v0, 0($sp) */                                       // 0x0016c7a4: swr $v0, 0($sp)
label_0x16c7a8:
    func_00158310();  // 0x158278                                // 0x0016c7a8: jal 0x158278
    v0 = 8;                                                     // 0x0016c7b4: addiu $v0, $zero, 8
    if (v1 == v0) goto label_0x16c7f8;                          // 0x0016c7b8: beq $v1, $v0, 0x16c7f8
    v0 = ((unsigned)v1 < (unsigned)9) ? 1 : 0;                  // 0x0016c7bc: sltiu $v0, $v1, 9
    if (v0 == 0) goto label_0x16c7e0;                           // 0x0016c7c0: beqz $v0, 0x16c7e0
    v0 = 0x40;                                                  // 0x0016c7c4: addiu $v0, $zero, 0x40
    v0 = 4;                                                     // 0x0016c7c8: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x16c810;                          // 0x0016c7cc: beq $v1, $v0, 0x16c810
    v0 = 1;                                                     // 0x0016c7d0: addiu $v0, $zero, 1
    goto label_0x16c850;                                        // 0x0016c7d4: b 0x16c850
    /* nop */                                                   // 0x0016c7dc: nop 
label_0x16c7e0:
    if (v1 == v0) goto label_0x16c848;                          // 0x0016c7e0: beq $v1, $v0, 0x16c848
    v0 = 0x80;                                                  // 0x0016c7e4: addiu $v0, $zero, 0x80
    if (v1 == v0) goto label_0x16c848;                          // 0x0016c7e8: beq $v1, $v0, 0x16c848
    v0 = 1;                                                     // 0x0016c7ec: addiu $v0, $zero, 1
    goto label_0x16c850;                                        // 0x0016c7f0: b 0x16c850
label_0x16c7f8:
    v0 = local_10;                                              // 0x0016c7f8: lw $v0, 0x10($sp)
    v0 = v0 & 0x40;                                             // 0x0016c7fc: andi $v0, $v0, 0x40
    if (v0 == 0) goto label_0x16c848;                           // 0x0016c800: beqz $v0, 0x16c848
    goto label_0x16c824;                                        // 0x0016c808: b 0x16c824
    a1 = 8;                                                     // 0x0016c80c: addiu $a1, $zero, 8
label_0x16c810:
    v0 = local_10;                                              // 0x0016c810: lw $v0, 0x10($sp)
    v0 = v0 & 0x48;                                             // 0x0016c814: andi $v0, $v0, 0x48
    if (v0 == 0) goto label_0x16c848;                           // 0x0016c818: beqz $v0, 0x16c848
    a1 = 4;                                                     // 0x0016c820: addiu $a1, $zero, 4
label_0x16c824:
    func_0016cab0();  // 0x16c958                                // 0x0016c824: jal 0x16c958
    a2 = sp + 0x10;                                             // 0x0016c828: addiu $a2, $sp, 0x10
    /* beqzl $v0, 0x16c84c */                                   // 0x0016c82c: beqzl $v0, 0x16c84c
    v0 = 1;                                                     // 0x0016c830: addiu $v0, $zero, 1
    if (v0 != s1) goto label_0x16c84c;                          // 0x0016c834: bnel $v0, $s1, 0x16c84c
    goto label_0x16c84c;                                        // 0x0016c83c: b 0x16c84c
    v0 = 1;                                                     // 0x0016c840: addiu $v0, $zero, 1
    /* nop */                                                   // 0x0016c844: nop 
label_0x16c848:
label_0x16c84c:
label_0x16c850:
    return;                                                     // 0x0016c85c: jr $ra
    sp = sp + 0x40;                                             // 0x0016c860: addiu $sp, $sp, 0x40
}