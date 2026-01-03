void func_0013f6b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013f6b0: addiu $sp, $sp, -0x10
    func_0013ef18();  // 13ef18                                // 0x0013f6bc: jal 0x13ef18
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x0013f6c4: lw $v0, 0x20($s0)
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x0013f6c8: sw $zero, 0x34($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x0013f6cc: sw $v0, 0x10($s0)
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x0013f6d0: sw $zero, 0xc($s0)
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x0013f6d4: sw $zero, 0x14($s0)
    *(uint32_t*)((s0) + 0x18) = 0;                              // 0x0013f6d8: sw $zero, 0x18($s0)
    *(uint32_t*)((s0) + 0x28) = 0;                              // 0x0013f6dc: sw $zero, 0x28($s0)
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x0013f6e0: sw $zero, 0x2c($s0)
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x0013f6e4: sw $zero, 0x30($s0)
    return func_0013ef80();  // Tail call                        // 0x0013f6f0: j 0x13ef30
    sp = sp + 0x10;                                             // 0x0013f6f4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0013f6f8: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x0013f6fc: addiu $v0, $zero, 1
    if (a1 != v0) goto label_0x13f710;                          // 0x0013f700: bne $a1, $v0, 0x13f710
    goto label_0x13f738;                                        // 0x0013f708: b 0x13f738
    v0 = *(int32_t*)((a0) + 0xc);                               // 0x0013f70c: lw $v0, 0xc($a0)
label_0x13f710:
    /* bnezl $a1, 0x13f720 */                                   // 0x0013f710: bnezl $a1, 0x13f720
    v0 = *(int32_t*)((a0) + 0x38);                              // 0x0013f714: lw $v0, 0x38($a0)
    goto label_0x13f738;                                        // 0x0013f718: b 0x13f738
    v0 = *(int32_t*)((a0) + 0x10);                              // 0x0013f71c: lw $v0, 0x10($a0)
    /* beqzl $v0, 0x13f738 */                                   // 0x0013f720: beqzl $v0, 0x13f738
    a0 = *(int32_t*)((a0) + 0x3c);                              // 0x0013f728: lw $a0, 0x3c($a0)
    /* call function at address in v0 */                        // 0x0013f72c: jalr $v0
    a1 = -3;                                                    // 0x0013f730: addiu $a1, $zero, -3
label_0x13f738:
    return;                                                     // 0x0013f73c: jr $ra
    sp = sp + 0x10;                                             // 0x0013f740: addiu $sp, $sp, 0x10
}