void func_0016f5f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016f5f0: addiu $sp, $sp, -0x20
    func_0016f7e8();  // 16f7e8                                // 0x0016f604: jal 0x16f7e8
    if (v0 == 0) goto label_0x16f630;                           // 0x0016f60c: beqz $v0, 0x16f630
    a1 = 0xff00 << 16;                                          // 0x0016f618: lui $a1, 0xff00
    a1 = a1 | 0xf15;                                            // 0x0016f624: ori $a1, $a1, 0xf15
    return func_00169940();  // Tail call                        // 0x0016f628: j 0x1698d0
    sp = sp + 0x20;                                             // 0x0016f62c: addiu $sp, $sp, 0x20
label_0x16f630:
    v0 = 0x26 << 16;                                            // 0x0016f630: lui $v0, 0x26
    a0 = 0x26 << 16;                                            // 0x0016f634: lui $a0, 0x26
    a3 = v0 + 0x77e8;                                           // 0x0016f638: addiu $a3, $v0, 0x77e8
    a1 = g_00267808;  // Global at 0x00267808                   // 0x0016f674: lw $a1, 0x20($a3)
    *(uint32_t*)((s0) + 0x24) = a1;                             // 0x0016f680: sw $a1, 0x24($s0)
    v1 = s0 + 0x30;                                             // 0x0016f684: addiu $v1, $s0, 0x30
    a3 = 5;                                                     // 0x0016f688: addiu $a3, $zero, 5
    v0 = 0x26 << 16;                                            // 0x0016f68c: lui $v0, 0x26
    t3 = a0 + 0x7810;                                           // 0x0016f690: addiu $t3, $a0, 0x7810
    t0 = 0xc0;                                                  // 0x0016f6a4: addiu $t0, $zero, 0xc0
    t1 = 1;                                                     // 0x0016f6a8: addiu $t1, $zero, 1
    t3 = v0 + 0x7818;                                           // 0x0016f6b0: addiu $t3, $v0, 0x7818
    a2 = 0x10;                                                  // 0x0016f734: addiu $a2, $zero, 0x10
    *(uint32_t*)((s0) + 0x74) = a3;                             // 0x0016f738: sw $a3, 0x74($s0)
    a0 = s0 + 0x13c;                                            // 0x0016f73c: addiu $a0, $s0, 0x13c
    *(uint32_t*)((s0) + 0x78) = t0;                             // 0x0016f740: sw $t0, 0x78($s0)
    *(uint32_t*)((s0) + 0x108) = t1;                            // 0x0016f744: sw $t1, 0x108($s0)
    *(uint32_t*)(s0) = 0;                                       // 0x0016f748: sw $zero, 0($s0)
    *(uint32_t*)((s0) + 0x70) = 0;                              // 0x0016f74c: sw $zero, 0x70($s0)
    *(uint32_t*)((s0) + 0x104) = 0;                             // 0x0016f750: sw $zero, 0x104($s0)
    *(uint32_t*)((s0) + 0x7c) = 0;                              // 0x0016f754: sw $zero, 0x7c($s0)
    *(uint32_t*)((s0) + 0x80) = 0;                              // 0x0016f758: sw $zero, 0x80($s0)
    *(uint32_t*)((s0) + 0x12c) = 0;                             // 0x0016f75c: sw $zero, 0x12c($s0)
    *(uint32_t*)((s0) + 0x130) = 0;                             // 0x0016f760: sw $zero, 0x130($s0)
    func_0016f8b0();  // 16f8b0                                // 0x0016f764: jal 0x16f8b0
    *(uint32_t*)((s0) + 0x134) = 0;                             // 0x0016f768: sw $zero, 0x134($s0)
    *(uint32_t*)((s0) + 0x84) = 0;                              // 0x0016f76c: sw $zero, 0x84($s0)
    *(uint32_t*)((s0) + 0x88) = 0;                              // 0x0016f770: sw $zero, 0x88($s0)
    func_0016f940();  // 16f940                                // 0x0016f774: jal 0x16f940
    a0 = s0 + 0x8c;                                             // 0x0016f778: addiu $a0, $s0, 0x8c
    v1 = -1;                                                    // 0x0016f77c: addiu $v1, $zero, -1
    v0 = 0x7fff << 16;                                          // 0x0016f780: lui $v0, 0x7fff
    *(uint32_t*)((s0) + 0xe0) = v1;                             // 0x0016f784: sw $v1, 0xe0($s0)
    v0 = v0 | 0xffff;                                           // 0x0016f788: ori $v0, $v0, 0xffff
    *(uint32_t*)((s0) + 0xe4) = 0;                              // 0x0016f78c: sw $zero, 0xe4($s0)
    *(uint32_t*)((s0) + 0xe8) = v0;                             // 0x0016f790: sw $v0, 0xe8($s0)
    func_0016d620();  // 16d620                                // 0x0016f794: jal 0x16d620
    a0 = s0 + 0xec;                                             // 0x0016f798: addiu $a0, $s0, 0xec
    func_0016f960();  // 16f960                                // 0x0016f79c: jal 0x16f960
    a0 = s0 + 0x93c;                                            // 0x0016f7a0: addiu $a0, $s0, 0x93c
    a0 = 0xf;                                                   // 0x0016f7a4: addiu $a0, $zero, 0xf
    v0 = s0 + 0x9d0;                                            // 0x0016f7a8: addiu $v0, $s0, 0x9d0
    v1 = s0 + 0x8e4;                                            // 0x0016f7ac: addiu $v1, $s0, 0x8e4
label_0x16f7b0:
    a0 = a0 + -1;                                               // 0x0016f7b0: addiu $a0, $a0, -1
    *(uint32_t*)(v1) = v0;                                      // 0x0016f7b4: sw $v0, 0($v1)
    v1 = v1 + -0x80;                                            // 0x0016f7b8: addiu $v1, $v1, -0x80
    /* nop */                                                   // 0x0016f7bc: nop 
    /* nop */                                                   // 0x0016f7c0: nop 
    if (a0 >= 0) goto label_0x16f7b0;                           // 0x0016f7c4: bgez $a0, 0x16f7b0
    v0 = v0 + -8;                                               // 0x0016f7c8: addiu $v0, $v0, -8
    return;                                                     // 0x0016f7dc: jr $ra
    sp = sp + 0x20;                                             // 0x0016f7e0: addiu $sp, $sp, 0x20
}