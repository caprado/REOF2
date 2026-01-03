void func_001456a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001456a8: addiu $sp, $sp, -0x50
    v0 = 0x1000 << 16;                                          // 0x001456ac: lui $v0, 0x1000
    v0 = v0 | 0x2010;                                           // 0x001456b4: ori $v0, $v0, 0x2010
    a2 = 0x8000 << 16;                                          // 0x001456bc: lui $a2, 0x8000
    a2 = a2 | 0x4000;                                           // 0x001456c4: ori $a2, $a2, 0x4000
    v1 = g_10000000;  // Global at 0x10000000                   // 0x001456dc: lw $v1, 0($v0)
    v0 = 0x8000 << 16;                                          // 0x001456e0: lui $v0, 0x8000
    v1 = v1 & a2;                                               // 0x001456e4: and $v1, $v1, $a2
    if (v1 != v0) goto label_0x145758;                          // 0x001456e8: bne $v1, $v0, 0x145758
    s3 = 0x21 << 16;                                            // 0x001456ec: lui $s3, 0x21
    v0 = *(int32_t*)((s1) + 0x10a0);                            // 0x001456f0: lw $v0, 0x10a0($s1)
    /* bnezl $v0, 0x14575c */                                   // 0x001456f4: bnezl $v0, 0x14575c
    v0 = *(int32_t*)((s1) + 0x830);                             // 0x001456f8: lw $v0, 0x830($s1)
    s3 = 0x21 << 16;                                            // 0x001456fc: lui $s3, 0x21
    /* nop */                                                   // 0x00145704: nop 
label_0x145708:
    v0 = (v0 < 0x1389) ? 1 : 0;                                 // 0x00145708: slti $v0, $v0, 0x1389
    if (v0 != 0) goto label_0x145720;                           // 0x0014570c: bnez $v0, 0x145720
    a3 = a3 + 1;                                                // 0x00145710: addiu $a3, $a3, 1
    func_00147ca0();  // 147ca0                                // 0x00145714: jal 0x147ca0
    a0 = *(int32_t*)((s1) + 0x870);                             // 0x00145718: lw $a0, 0x870($s1)
label_0x145720:
    v1 = 0x1000 << 16;                                          // 0x00145720: lui $v1, 0x1000
    a0 = 0x8000 << 16;                                          // 0x00145724: lui $a0, 0x8000
    v1 = v1 | 0x2010;                                           // 0x00145728: ori $v1, $v1, 0x2010
    a0 = a0 | 0x4000;                                           // 0x0014572c: ori $a0, $a0, 0x4000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00145730: lw $v0, 0($v1)
    a1 = 0x8000 << 16;                                          // 0x00145734: lui $a1, 0x8000
    v0 = v0 & a0;                                               // 0x00145738: and $v0, $v0, $a0
    if (v0 != a1) goto label_0x14575c;                          // 0x0014573c: bnel $v0, $a1, 0x14575c
    v0 = *(int32_t*)((s1) + 0x830);                             // 0x00145740: lw $v0, 0x830($s1)
    v0 = *(int32_t*)((s1) + 0x10a0);                            // 0x00145744: lw $v0, 0x10a0($s1)
    if (v0 == 0) goto label_0x145708;                           // 0x00145748: beqz $v0, 0x145708
    goto label_0x14575c;                                        // 0x00145750: b 0x14575c
    v0 = *(int32_t*)((s1) + 0x830);                             // 0x00145754: lw $v0, 0x830($s1)
label_0x145758:
    v0 = *(int32_t*)((s1) + 0x830);                             // 0x00145758: lw $v0, 0x830($s1)
label_0x14575c:
    if (v0 != 0) goto label_0x145774;                           // 0x0014575c: bnez $v0, 0x145774
    v0 = 0x1000 << 16;                                          // 0x00145760: lui $v0, 0x1000
    v0 = *(int32_t*)((s1) + 0x854);                             // 0x00145764: lw $v0, 0x854($s1)
    v0 = (v0 < s2) ? 1 : 0;                                     // 0x00145768: slt $v0, $v0, $s2
    if (v0 == 0) goto label_0x1457a0;                           // 0x0014576c: beqz $v0, 0x1457a0
    v0 = 0x1000 << 16;                                          // 0x00145770: lui $v0, 0x1000
label_0x145774:
    v1 = 0x4000 << 16;                                          // 0x00145774: lui $v1, 0x4000
    v0 = v0 | 0x2000;                                           // 0x00145778: ori $v0, $v0, 0x2000
    a1 = s3 + 0xcf8;                                            // 0x0014577c: addiu $a1, $s3, 0xcf8
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00145780: sw $v1, 0($v0)
    v0 = g_00210d08;  // Global at 0x00210d08                   // 0x00145788: lw $v0, 0x10($a1)
    func_00145080();  // 145080                                // 0x0014578c: jal 0x145080
    *(uint32_t*)((s1) + 0x830) = v0;                            // 0x00145790: sw $v0, 0x830($s1)
    *(uint32_t*)((s1) + 0x850) = v0;                            // 0x0014579c: sw $v0, 0x850($s1)
label_0x1457a0:
    a1 = 0x20;                                                  // 0x001457a0: addiu $a1, $zero, 0x20
    a0 = 0x4000 << 16;                                          // 0x001457a4: lui $a0, 0x4000
    v0 = 0x1000 << 16;                                          // 0x001457a8: lui $v0, 0x1000
    a0 = s2 | a0;                                               // 0x001457ac: or $a0, $s2, $a0
    *(uint32_t*)((s1) + 0x854) = a1;                            // 0x001457b0: sw $a1, 0x854($s1)
    v0 = v0 | 0x2000;                                           // 0x001457b4: ori $v0, $v0, 0x2000
    s0 = *(int32_t*)((s1) + 0x850);                             // 0x001457b8: lw $s0, 0x850($s1)
    v1 = (unsigned)a0 >> 0x1c;                                  // 0x001457bc: srl $v1, $a0, 0x1c
    g_10000000 = a0;  // Global at 0x10000000                   // 0x001457c0: sw $a0, 0($v0)
    v1 = v1 << 2;                                               // 0x001457c4: sll $v1, $v1, 2
    v0 = s3 + 0xcf8;                                            // 0x001457c8: addiu $v0, $s3, 0xcf8
    a1 = a1 - s2;                                               // 0x001457cc: subu $a1, $a1, $s2
    v1 = v1 + v0;                                               // 0x001457d0: addu $v1, $v1, $v0
    s0 = (unsigned)s0 >> a1;                                    // 0x001457d4: srlv $s0, $s0, $a1
    v0 = g_40000000;  // Global at 0x40000000                   // 0x001457d8: lw $v0, 0($v1)
    func_00145080();  // 145080                                // 0x001457e0: jal 0x145080
    *(uint32_t*)((s1) + 0x830) = v0;                            // 0x001457e4: sw $v0, 0x830($s1)
    *(uint32_t*)((s1) + 0x850) = v0;                            // 0x001457f4: sw $v0, 0x850($s1)
    return;                                                     // 0x0014580c: jr $ra
    sp = sp + 0x50;                                             // 0x00145810: addiu $sp, $sp, 0x50
}