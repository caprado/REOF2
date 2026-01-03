void func_001715e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001715e0: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((a2) + 0x1b30);                            // 0x001715f0: lw $v0, 0x1b30($a2)
    s0 = v0 + 0xa48;                                            // 0x001715f4: addiu $s0, $v0, 0xa48
    s1 = v0 + 0x9d8;                                            // 0x001715f8: addiu $s1, $v0, 0x9d8
    func_00170b20();  // 170b20                                // 0x001715fc: jal 0x170b20
    v1 = *(int32_t*)((s1) + 0x14);                              // 0x00171604: lw $v1, 0x14($s1)
    /* beqzl $v1, 0x17164c */                                   // 0x00171608: beqzl $v1, 0x17164c
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x00171610: lw $v0, 0x10($s0)
    /* bnezl $v0, 0x17164c */                                   // 0x00171614: bnezl $v0, 0x17164c
    v0 = 1;                                                     // 0x0017161c: addiu $v0, $zero, 1
    a1 = 0x23 << 16;                                            // 0x00171620: lui $a1, 0x23
    *(uint32_t*)((s1) + 0x18) = v0;                             // 0x00171624: sw $v0, 0x18($s1)
    a2 = 0x10;                                                  // 0x0017162c: addiu $a2, $zero, 0x10
    func_00171540();  // 171540                                // 0x00171630: jal 0x171540
    a1 = a1 + -0x6e68;                                          // 0x00171634: addiu $a1, $a1, -0x6e68
    v1 = *(int32_t*)((s0) + 0x18);                              // 0x00171638: lw $v1, 0x18($s0)
    func_00170b20();  // 170b20                                // 0x00171640: jal 0x170b20
    *(uint32_t*)((s0) + 0x14) = v1;                             // 0x00171644: sw $v1, 0x14($s0)
    v0 = 1;                                                     // 0x0017164c: addiu $v0, $zero, 1
    return;                                                     // 0x00171658: jr $ra
    sp = sp + 0x20;                                             // 0x0017165c: addiu $sp, $sp, 0x20
}