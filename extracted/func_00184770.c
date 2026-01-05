void func_00184770() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x90;                                            // 0x00184770: addiu $sp, $sp, -0x90
    s5 = 0x8101 << 16;                                          // 0x0018477c: lui $s5, 0x8101
    s3 = 0xffff << 16;                                          // 0x00184784: lui $s3, 0xffff
    s2 = 0x7fff << 16;                                          // 0x0018478c: lui $s2, 0x7fff
    local_0 = 0;                                                // 0x001847b0: sw $zero, 0($sp)
    s5 = s5 | 0x6f;                                             // 0x001847b4: ori $s5, $s5, 0x6f
    s3 = s3 | 0xffff;                                           // 0x001847b8: ori $s3, $s3, 0xffff
    s2 = s2 | 0xffff;                                           // 0x001847bc: ori $s2, $s2, 0xffff
label_0x1847c0:
    v0 = (s1 < 2) ? 1 : 0;                                      // 0x001847c0: slti $v0, $s1, 2
    if (v0 == 0) goto label_0x1848b4;                           // 0x001847c4: beqz $v0, 0x1848b4
    s3 = 0x28 << 16;                                            // 0x001847cc: lui $s3, 0x28
    s2 = s3 + -0x7c00;                                          // 0x001847d0: addiu $s2, $s3, -0x7c00
    func_00187390();  // 187390                                // 0x001847dc: jal 0x187390
    a3 = 1;                                                     // 0x001847e0: addiu $a3, $zero, 1
    if (v0 == 0) goto label_0x1848e4;                           // 0x001847e4: beqz $v0, 0x1848e4
    v1 = s1 << 9;                                               // 0x001847e8: sll $v1, $s1, 9
    v1 = v1 + s2;                                               // 0x001847f0: addu $v1, $v1, $s2
    v0 = a1 | v1;                                               // 0x001847f4: or $v0, $a1, $v1
    v0 = v0 & 7;                                                // 0x001847f8: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x184860;                           // 0x001847fc: beqz $v0, 0x184860
    v0 = a1 + 0x200;                                            // 0x00184800: addiu $v0, $a1, 0x200
label_0x184804:
    a1 = a1 + 0x20;                                             // 0x00184844: addiu $a1, $a1, 0x20
    v1 = v1 + 0x20;                                             // 0x00184848: addiu $v1, $v1, 0x20
    /* nop */                                                   // 0x0018484c: nop 
    if (a1 != v0) goto label_0x184804;                          // 0x00184850: bne $a1, $v0, 0x184804
    /* nop */                                                   // 0x00184854: nop 
    goto label_0x184898;                                        // 0x00184858: b 0x184898
label_0x184860:
    a1 = a1 + 0x20;                                             // 0x00184880: addiu $a1, $a1, 0x20
    v1 = v1 + 0x20;                                             // 0x00184884: addiu $v1, $v1, 0x20
    /* nop */                                                   // 0x00184888: nop 
    if (a1 != v0) goto label_0x184860;                          // 0x0018488c: bne $a1, $v0, 0x184860
    /* nop */                                                   // 0x00184890: nop 
label_0x184898:
    a1 = s3 + -0x7c00;                                          // 0x00184898: addiu $a1, $s3, -0x7c00
    func_001873b0();  // 1873b0                                // 0x001848a0: jal 0x1873b0
    a3 = 1;                                                     // 0x001848a4: addiu $a3, $zero, 1
    if (v0 != 0) s5 = 0;                                        // 0x001848a8: movn $s5, $zero, $v0
    goto label_0x1848ec;                                        // 0x001848ac: b 0x1848ec
label_0x1848b4:
    func_00182b88();  // 182b88                                // 0x001848b8: jal 0x182b88
    v1 = local_0;                                               // 0x001848c0: lw $v1, 0($sp)
    if (v1 == 0) goto label_0x1848d4;                           // 0x001848c4: beqz $v1, 0x1848d4
    goto label_0x1848ec;                                        // 0x001848cc: b 0x1848ec
label_0x1848d4:
    if (s0 == s3) goto label_0x1848e4;                          // 0x001848d4: beq $s0, $s3, 0x1848e4
    s0 = s0 & s2;                                               // 0x001848d8: and $s0, $s0, $s2
    goto label_0x1847c0;                                        // 0x001848dc: b 0x1847c0
    s1 = s1 + -2;                                               // 0x001848e0: addiu $s1, $s1, -2
label_0x1848e4:
    v0 = 0x8101 << 16;                                          // 0x001848e4: lui $v0, 0x8101
    v0 = v0 | 0x6f;                                             // 0x001848e8: ori $v0, $v0, 0x6f
label_0x1848ec:
    return;                                                     // 0x0018490c: jr $ra
    sp = sp + 0x90;                                             // 0x00184910: addiu $sp, $sp, 0x90
}