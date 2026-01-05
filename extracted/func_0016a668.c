void func_0016a668() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0016a668: addiu $sp, $sp, -0x50
    a1 = 5;                                                     // 0x0016a674: addiu $a1, $zero, 5
    func_001752e8();  // 1752e8                                // 0x0016a6a8: jal 0x1752e8
    if (v0 != 0) goto label_0x16a6c0;                           // 0x0016a6b0: bnez $v0, 0x16a6c0
    s7 = s1 + 0x1ae4;                                           // 0x0016a6b4: addiu $s7, $s1, 0x1ae4
    goto label_0x16a810;                                        // 0x0016a6b8: b 0x16a810
    v0 = 1;                                                     // 0x0016a6bc: addiu $v0, $zero, 1
label_0x16a6c0:
    s5 = -1;                                                    // 0x0016a6c0: addiu $s5, $zero, -1
    s0 = *(int32_t*)((s7) + 8);                                 // 0x0016a6c4: lw $s0, 8($s7)
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x0016a6c8: lw $v0, 0x28($s0)
    if (v0 != s5) goto label_0x16a6e8;                          // 0x0016a6cc: bnel $v0, $s5, 0x16a6e8
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x0016a6d0: lw $v0, 0x20($s0)
    func_0016a840();  // 16a840                                // 0x0016a6d8: jal 0x16a840
    *(uint32_t*)((s0) + 0x28) = v0;                             // 0x0016a6e0: sw $v0, 0x28($s0)
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x0016a6e4: lw $v0, 0x20($s0)
label_0x16a6e8:
    if (v0 == s5) goto label_0x16a6f0;                          // 0x0016a6e8: beql $v0, $s5, 0x16a6f0
    *(uint32_t*)((s0) + 0x20) = s6;                             // 0x0016a6ec: sw $s6, 0x20($s0)
label_0x16a6f0:
    func_001752e8();  // 1752e8                                // 0x0016a6f4: jal 0x1752e8
    a1 = 0x1d;                                                  // 0x0016a6f8: addiu $a1, $zero, 0x1d
    if (s2 == s5) goto label_0x16a798;                          // 0x0016a700: beq $s2, $s5, 0x16a798
    func_001752e8();  // 1752e8                                // 0x0016a708: jal 0x1752e8
    a1 = 0x37;                                                  // 0x0016a70c: addiu $a1, $zero, 0x37
    /* beqzl $v0, 0x16a730 */                                   // 0x0016a710: beqzl $v0, 0x16a730
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x0016a714: lw $v0, 0x20($s0)
    v0 = *(int32_t*)((s0) + 0x18);                              // 0x0016a718: lw $v0, 0x18($s0)
    v0 = (s6 < v0) ? 1 : 0;                                     // 0x0016a71c: slt $v0, $s6, $v0
    if (v0 != 0) goto label_0x16a738;                           // 0x0016a720: bnez $v0, 0x16a738
    a0 = *(int32_t*)((s0) + 0x28);                              // 0x0016a724: lw $a0, 0x28($s0)
    goto label_0x16a7a0;                                        // 0x0016a728: b 0x16a7a0
    *(uint32_t*)((s0) + 0x18) = s6;                             // 0x0016a72c: sw $s6, 0x18($s0)
    if (s6 != v0) goto label_0x16a79c;                          // 0x0016a730: bne $s6, $v0, 0x16a79c
    a0 = *(int32_t*)((s0) + 0x28);                              // 0x0016a734: lw $a0, 0x28($s0)
label_0x16a738:
    if (a0 == s2) goto label_0x16a79c;                          // 0x0016a738: beq $a0, $s2, 0x16a79c
    v0 = (s3 < 4) ? 1 : 0;                                      // 0x0016a73c: slti $v0, $s3, 4
    /* bnezl $v0, 0x16a7a0 */                                   // 0x0016a740: bnezl $v0, 0x16a7a0
    *(uint32_t*)((s0) + 0x18) = s6;                             // 0x0016a744: sw $s6, 0x18($s0)
    v0 = *(int8_t*)(s4);                                        // 0x0016a748: lb $v0, 0($s4)
    /* bnezl $v0, 0x16a7a0 */                                   // 0x0016a74c: bnezl $v0, 0x16a7a0
    *(uint32_t*)((s0) + 0x18) = s6;                             // 0x0016a750: sw $s6, 0x18($s0)
    v0 = *(int8_t*)((s4) + 1);                                  // 0x0016a754: lb $v0, 1($s4)
    /* bnezl $v0, 0x16a7a0 */                                   // 0x0016a758: bnezl $v0, 0x16a7a0
    *(uint32_t*)((s0) + 0x18) = s6;                             // 0x0016a75c: sw $s6, 0x18($s0)
    v1 = *(uint8_t*)((s4) + 2);                                 // 0x0016a760: lbu $v1, 2($s4)
    v0 = 1;                                                     // 0x0016a764: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x16a7a0;                          // 0x0016a768: bnel $v1, $v0, 0x16a7a0
    *(uint32_t*)((s0) + 0x18) = s6;                             // 0x0016a76c: sw $s6, 0x18($s0)
    v1 = *(uint8_t*)((s4) + 3);                                 // 0x0016a770: lbu $v1, 3($s4)
    v0 = 0xb3;                                                  // 0x0016a774: addiu $v0, $zero, 0xb3
    if (v1 == v0) goto label_0x16a788;                          // 0x0016a778: beq $v1, $v0, 0x16a788
    v0 = 0xb8;                                                  // 0x0016a77c: addiu $v0, $zero, 0xb8
    if (v1 != v0) goto label_0x16a7a0;                          // 0x0016a780: bnel $v1, $v0, 0x16a7a0
    *(uint32_t*)((s0) + 0x18) = s6;                             // 0x0016a784: sw $s6, 0x18($s0)
label_0x16a788:
    *(uint32_t*)((s0) + 0x28) = s2;                             // 0x0016a788: sw $s2, 0x28($s0)
    goto label_0x16a79c;                                        // 0x0016a78c: b 0x16a79c
    /* nop */                                                   // 0x0016a794: nop 
label_0x16a798:
    a0 = *(int32_t*)((s0) + 0x28);                              // 0x0016a798: lw $a0, 0x28($s0)
label_0x16a79c:
    *(uint32_t*)((s0) + 0x18) = s6;                             // 0x0016a79c: sw $s6, 0x18($s0)
label_0x16a7a0:
    if (a0 != s6) goto label_0x16a810;                          // 0x0016a7a0: bne $a0, $s6, 0x16a810
    v0 = 1;                                                     // 0x0016a7a4: addiu $v0, $zero, 1
    func_00171788();  // 171788                                // 0x0016a7b0: jal 0x171788
    if (s3 <= 0) goto label_0x16a810;                           // 0x0016a7bc: blez $s3, 0x16a810
    a1 = *(int32_t*)((s7) + 0x14);                              // 0x0016a7c4: lw $a1, 0x14($s7)
    func_0016ab60();  // 16ab60                                // 0x0016a7d4: jal 0x16ab60
    v0 = 1;                                                     // 0x0016a7e0: addiu $v0, $zero, 1
    if (s0 == v0) goto label_0x16a800;                          // 0x0016a7e4: beq $s0, $v0, 0x16a800
    func_001717f8();  // 1717f8                                // 0x0016a7ec: jal 0x1717f8
    goto label_0x16a810;                                        // 0x0016a7f4: b 0x16a810
    /* nop */                                                   // 0x0016a7fc: nop 
label_0x16a800:
    func_00171b28();  // 171b28                                // 0x0016a804: jal 0x171b28
label_0x16a810:
    return;                                                     // 0x0016a838: jr $ra
    sp = sp + 0x50;                                             // 0x0016a83c: addiu $sp, $sp, 0x50
}