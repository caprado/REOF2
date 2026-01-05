void func_0016a4f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0016a4f0: addiu $sp, $sp, -0x50
    a1 = 6;                                                     // 0x0016a4fc: addiu $a1, $zero, 6
    func_001752e8();  // 1752e8                                // 0x0016a530: jal 0x1752e8
    if (v0 != 0) goto label_0x16a548;                           // 0x0016a538: bnez $v0, 0x16a548
    s6 = s5 + 0x1ae4;                                           // 0x0016a53c: addiu $s6, $s5, 0x1ae4
    goto label_0x16a638;                                        // 0x0016a540: b 0x16a638
    v0 = 1;                                                     // 0x0016a544: addiu $v0, $zero, 1
label_0x16a548:
    s3 = -1;                                                    // 0x0016a548: addiu $s3, $zero, -1
    s0 = *(int32_t*)((s6) + 8);                                 // 0x0016a54c: lw $s0, 8($s6)
    v0 = *(int32_t*)((s0) + 0x2c);                              // 0x0016a550: lw $v0, 0x2c($s0)
    if (v0 == s3) goto label_0x16a55c;                          // 0x0016a554: beql $v0, $s3, 0x16a55c
    *(uint32_t*)((s0) + 0x2c) = s2;                             // 0x0016a558: sw $s2, 0x2c($s0)
label_0x16a55c:
    v0 = *(int32_t*)((s0) + 0x24);                              // 0x0016a55c: lw $v0, 0x24($s0)
    if (v0 == s3) goto label_0x16a568;                          // 0x0016a560: beql $v0, $s3, 0x16a568
    *(uint32_t*)((s0) + 0x24) = s2;                             // 0x0016a564: sw $s2, 0x24($s0)
label_0x16a568:
    func_001752e8();  // 1752e8                                // 0x0016a56c: jal 0x1752e8
    a1 = 0x1e;                                                  // 0x0016a570: addiu $a1, $zero, 0x1e
    if (s4 == s3) goto label_0x16a5b4;                          // 0x0016a578: beq $s4, $s3, 0x16a5b4
    func_001752e8();  // 1752e8                                // 0x0016a580: jal 0x1752e8
    a1 = 0x37;                                                  // 0x0016a584: addiu $a1, $zero, 0x37
    /* beqzl $v0, 0x16a5a8 */                                   // 0x0016a588: beqzl $v0, 0x16a5a8
    v0 = *(int32_t*)((s0) + 0x24);                              // 0x0016a58c: lw $v0, 0x24($s0)
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x0016a590: lw $v0, 0x1c($s0)
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x0016a594: slt $v0, $s2, $v0
    /* bnezl $v0, 0x16a5b4 */                                   // 0x0016a598: bnezl $v0, 0x16a5b4
    *(uint32_t*)((s0) + 0x2c) = s4;                             // 0x0016a59c: sw $s4, 0x2c($s0)
    goto label_0x16a5b8;                                        // 0x0016a5a0: b 0x16a5b8
    v1 = *(int32_t*)((s0) + 0x2c);                              // 0x0016a5a4: lw $v1, 0x2c($s0)
    if (s2 != v0) goto label_0x16a5b8;                          // 0x0016a5a8: bnel $s2, $v0, 0x16a5b8
    v1 = *(int32_t*)((s0) + 0x2c);                              // 0x0016a5ac: lw $v1, 0x2c($s0)
    *(uint32_t*)((s0) + 0x2c) = s4;                             // 0x0016a5b0: sw $s4, 0x2c($s0)
label_0x16a5b4:
    v1 = *(int32_t*)((s0) + 0x2c);                              // 0x0016a5b4: lw $v1, 0x2c($s0)
label_0x16a5b8:
    v0 = 1;                                                     // 0x0016a5b8: addiu $v0, $zero, 1
    if (v1 != s2) goto label_0x16a638;                          // 0x0016a5bc: bne $v1, $s2, 0x16a638
    *(uint32_t*)((s0) + 0x1c) = s2;                             // 0x0016a5c0: sw $s2, 0x1c($s0)
    if (s1 < 0) goto label_0x16a5f4;                            // 0x0016a5c4: bltzl $s1, 0x16a5f4
    a1 = *(int32_t*)((s6) + 0x18);                              // 0x0016a5c8: lw $a1, 0x18($s6)
    v1 = *(int32_t*)((s0) + 0xc);                               // 0x0016a5cc: lw $v1, 0xc($s0)
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x0016a5d0: lw $v0, 0x10($s0)
    a0 = (s1 < v1) ? 1 : 0;                                     // 0x0016a5d4: slt $a0, $s1, $v1
    a1 = (s1 < v0) ? 1 : 0;                                     // 0x0016a5d8: slt $a1, $s1, $v0
    if (a0 != 0) v1 = s1;                                       // 0x0016a5dc: movn $v1, $s1, $a0
    if (a1 != 0) v0 = s1;                                       // 0x0016a5e0: movn $v0, $s1, $a1
    s1 = s1 - v1;                                               // 0x0016a5e4: subu $s1, $s1, $v1
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x0016a5e8: sw $v0, 0x10($s0)
    *(uint32_t*)((s0) + 0xc) = v1;                              // 0x0016a5ec: sw $v1, 0xc($s0)
    a1 = *(int32_t*)((s6) + 0x18);                              // 0x0016a5f0: lw $a1, 0x18($s6)
label_0x16a5f4:
    return func_0016ac88();  // Tail call                        // 0x0016a62c: j 0x16ab60
    sp = sp + 0x50;                                             // 0x0016a630: addiu $sp, $sp, 0x50
    /* nop */                                                   // 0x0016a634: nop 
label_0x16a638:
    return;                                                     // 0x0016a660: jr $ra
    sp = sp + 0x50;                                             // 0x0016a664: addiu $sp, $sp, 0x50
}