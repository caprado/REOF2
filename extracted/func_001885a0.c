void func_001885a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_1c, local_4, local_8, local_c;
    
    sp = sp + -0x70;                                            // 0x001885a0: addiu $sp, $sp, -0x70
    func_00188568();  // 188568                                // 0x001885b4: jal 0x188568
    if (s2 < 0) goto label_0x1886a8;                            // 0x001885c0: bltz $s2, 0x1886a8
    v0 = -1;                                                    // 0x001885c4: addiu $v0, $zero, -1
    v0 = *(int32_t*)(s1);                                       // 0x001885c8: lw $v0, 0($s1)
    t1 = 0x23 << 16;                                            // 0x001885cc: lui $t1, 0x23
    a2 = *(int32_t*)((s1) + 8);                                 // 0x001885d0: lw $a2, 8($s1)
    s0 = 0x28 << 16;                                            // 0x001885d4: lui $s0, 0x28
    t0 = *(int32_t*)((s1) + 0xc);                               // 0x001885d8: lw $t0, 0xc($s1)
    s0 = s0 + -0xec0;                                           // 0x001885dc: addiu $s0, $s0, -0xec0
    v1 = *(int32_t*)((s1) + 4);                                 // 0x001885e0: lw $v1, 4($s1)
    a3 = 2;                                                     // 0x001885e4: addiu $a3, $zero, 2
    local_0 = v0;                                               // 0x001885e8: sw $v0, 0($sp)
    local_c = a2;                                               // 0x001885f0: sw $a2, 0xc($sp)
    local_8 = v1;                                               // 0x001885f8: sw $v1, 8($sp)
    a2 = 0x100;                                                 // 0x001885fc: addiu $a2, $zero, 0x100
    local_10 = t0;                                              // 0x00188600: sw $t0, 0x10($sp)
    t2 = &str_0022a030;  // "libdbc: bind failed\n"             // 0x00188604: addiu $t2, $t1, -0x5fd0
    v1 = g_0022a038;  // Global at 0x0022a038                   // 0x00188610: lh $v1, 8($t2)
    local_1c = v1;                                              // 0x0018861c: sh $v1, 0x1c($sp)
    local_4 = a3;                                               // 0x00188620: sw $a3, 4($sp)
    v0 = local_0;                                               // 0x00188624: lw $v0, 0($sp)
    v0 = v0 | 1;                                                // 0x00188628: ori $v0, $v0, 1
    func_00107c70();  // 107c70                                // 0x0018862c: jal 0x107c70
    local_0 = v0;                                               // 0x00188630: sw $v0, 0($sp)
    func_00188b20();  // 188b20                                // 0x0018863c: jal 0x188b20
    a2 = a1 + 0x80;                                             // 0x00188640: addiu $a2, $a1, 0x80
    v1 = 0x24;                                                  // 0x00188644: addiu $v1, $zero, 0x24
    a0 = 0x28 << 16;                                            // 0x00188648: lui $a0, 0x28
    a3 = a0 + -0x2fb8;                                          // 0x00188650: addiu $a3, $a0, -0x2fb8
    v1 = a3 + a2;                                               // 0x00188654: addu $v1, $a3, $a2
    if (v0 >= 0) goto label_0x188668;                           // 0x00188658: bgez $v0, 0x188668
    *(uint32_t*)((v1) + 4) = v0;                                // 0x0018865c: sw $v0, 4($v1)
    goto label_0x1886a8;                                        // 0x00188660: b 0x1886a8
    v0 = -1;                                                    // 0x00188664: addiu $v0, $zero, -1
label_0x188668:
    a0 = a2 + a3;                                               // 0x00188668: addu $a0, $a2, $a3
    v0 = 1;                                                     // 0x0018866c: addiu $v0, $zero, 1
    g_00280000 = v0;  // Global at 0x00280000                   // 0x00188670: sw $v0, 0($a0)
    v1 = a3 + a2;                                               // 0x00188674: addu $v1, $a3, $a2
    *(uint32_t*)((v1) + 0x1c) = 0;                              // 0x00188678: sw $zero, 0x1c($v1)
    *(uint32_t*)((v0) + 0x20) = 0;                              // 0x00188680: sw $zero, 0x20($v0)
    v1 = 0x200;                                                 // 0x00188688: addiu $v1, $zero, 0x200
    g_00280008 = v1;  // Global at 0x00280008                   // 0x00188690: sw $v1, 8($a0)
    v0 = 0x10;                                                  // 0x00188694: addiu $v0, $zero, 0x10
    *(uint32_t*)((a1) + 0xc) = v0;                              // 0x00188698: sw $v0, 0xc($a1)
    v1 = 0x4000;                                                // 0x0018869c: addiu $v1, $zero, 0x4000
    g_00280010 = v1;  // Global at 0x00280010                   // 0x001886a0: sw $v1, 0x10($a0)
label_0x1886a8:
    return;                                                     // 0x001886b8: jr $ra
    sp = sp + 0x70;                                             // 0x001886bc: addiu $sp, $sp, 0x70
}