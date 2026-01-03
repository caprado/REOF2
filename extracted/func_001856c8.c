void func_001856c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_280, local_4;
    
    sp = sp + -0x330;                                           // 0x001856c8: addiu $sp, $sp, -0x330
    func_00183fa0();  // 183fa0                                // 0x00185704: jal 0x183fa0
    if (v0 != 0) goto label_0x1858a4;                           // 0x0018570c: bnez $v0, 0x1858a4
    s1 = sp + 0x200;                                            // 0x00185714: addiu $s1, $sp, 0x200
    func_00184048();  // 184048                                // 0x00185720: jal 0x184048
    if (v0 != 0) goto label_0x1858a4;                           // 0x00185728: bnez $v0, 0x1858a4
    func_00184320();  // 184320                                // 0x00185740: jal 0x184320
    v1 = 0x8101 << 16;                                          // 0x00185748: lui $v1, 0x8101
    v1 = v1 | 0x11;                                             // 0x0018574c: ori $v1, $v1, 0x11
    if (v0 != v1) goto label_0x1858a4;                          // 0x00185750: bne $v0, $v1, 0x1858a4
    v1 = local_0;                                               // 0x00185758: lhu $v1, 0($sp)
    v0 = v1 & 1;                                                // 0x0018575c: andi $v0, $v1, 1
    if (v0 == 0) goto label_0x185774;                           // 0x00185760: beqz $v0, 0x185774
    /* nop */                                                   // 0x00185764: nop 
    v0 = v1 & 0x2000;                                           // 0x00185768: andi $v0, $v1, 0x2000
    /* beqzl $v0, 0x185780 */                                   // 0x0018576c: beqzl $v0, 0x185780
    v0 = v1 & 0x20;                                             // 0x00185770: andi $v0, $v1, 0x20
label_0x185774:
    v0 = 0x8101 << 16;                                          // 0x00185774: lui $v0, 0x8101
    goto label_0x1858a0;                                        // 0x00185778: b 0x1858a0
    v0 = v0 | 0xd;                                              // 0x0018577c: ori $v0, $v0, 0xd
    if (v0 == 0) goto label_0x185794;                           // 0x00185780: beqz $v0, 0x185794
    a0 = local_4;                                               // 0x00185784: lw $a0, 4($sp)
    v0 = 0x8101 << 16;                                          // 0x00185788: lui $v0, 0x8101
    goto label_0x1858a0;                                        // 0x0018578c: b 0x1858a0
    v0 = v0 | 2;                                                // 0x00185790: ori $v0, $v0, 2
label_0x185794:
    v0 = (a0 < s0) ? 1 : 0;                                     // 0x00185794: slt $v0, $a0, $s0
    if (v0 == 0) goto label_0x1857e0;                           // 0x00185798: beqz $v0, 0x1857e0
    v1 = a0 - s0;                                               // 0x0018579c: subu $v1, $a0, $s0
    v0 = 0x8101 << 16;                                          // 0x001857a0: lui $v0, 0x8101
    goto label_0x1858a0;                                        // 0x001857a4: b 0x1858a0
    v0 = v0 | 0x16;                                             // 0x001857a8: ori $v0, $v0, 0x16
label_0x1857ac:
    v0 = 0x8101 << 16;                                          // 0x001857ac: lui $v0, 0x8101
    goto label_0x1858a0;                                        // 0x001857b0: b 0x1858a0
    v0 = v0 | 0x6f;                                             // 0x001857b4: ori $v0, $v0, 0x6f
label_0x1857b8:
    func_00107ab8();  // 107ab8                                // 0x001857bc: jal 0x107ab8
    goto label_0x1858a0;                                        // 0x001857c4: b 0x1858a0
label_0x1857cc:
    goto label_0x1858a0;                                        // 0x001857cc: b 0x1858a0
label_0x1857d4:
    v0 = 0x8101 << 16;                                          // 0x001857d4: lui $v0, 0x8101
    goto label_0x1858a0;                                        // 0x001857d8: b 0x1858a0
    v0 = v0 | 0x9002;                                           // 0x001857dc: ori $v0, $v0, 0x9002
label_0x1857e0:
    if (s2 == 0) s2 = v1;                                       // 0x001857e0: movz $s2, $v1, $s2
    v0 = s2 + s0;                                               // 0x001857e4: addu $v0, $s2, $s0
    v0 = (a0 < v0) ? 1 : 0;                                     // 0x001857e8: slt $v0, $a0, $v0
    if (v0 != 0) s2 = v1;                                       // 0x001857ec: movn $s2, $v1, $v0
    if (fp == 0) goto label_0x18589c;                           // 0x001857f4: beqz $fp, 0x18589c
    s1 = local_10;                                              // 0x001857f8: lw $s1, 0x10($sp)
    s7 = 0xffff << 16;                                          // 0x001857fc: lui $s7, 0xffff
    s6 = 0x7fff << 16;                                          // 0x00185800: lui $s6, 0x7fff
    s7 = s7 | 0xffff;                                           // 0x00185804: ori $s7, $s7, 0xffff
    s6 = s6 | 0xffff;                                           // 0x00185808: ori $s6, $s6, 0xffff
    /* nop */                                                   // 0x0018580c: nop 
label_0x185810:
    v0 = (s0 < 0x400) ? 1 : 0;                                  // 0x00185810: slti $v0, $s0, 0x400
    if (v0 == 0) goto label_0x18586c;                           // 0x00185814: beqz $v0, 0x18586c
    v0 = 0x28 << 16;                                            // 0x00185818: lui $v0, 0x28
    s3 = v0 + -0x7c00;                                          // 0x00185820: addiu $s3, $v0, -0x7c00
    func_00187390();  // 187390                                // 0x0018582c: jal 0x187390
    a3 = 1;                                                     // 0x00185830: addiu $a3, $zero, 1
    if (v0 == 0) goto label_0x1857ac;                           // 0x00185834: beqz $v0, 0x1857ac
    local_280 = v0;                                             // 0x00185838: sw $v0, 0x280($sp)
    v0 = 0x400;                                                 // 0x0018583c: addiu $v0, $zero, 0x400
    a2 = v0 - s0;                                               // 0x00185840: subu $a2, $v0, $s0
    v0 = (a2 < s2) ? 1 : 0;                                     // 0x00185844: slt $v0, $a2, $s2
    if (v0 == 0) goto label_0x1857b8;                           // 0x00185848: beqz $v0, 0x1857b8
    a1 = s0 + s3;                                               // 0x0018584c: addu $a1, $s0, $s3
    func_00107ab8();  // 107ab8                                // 0x00185850: jal 0x107ab8
    v1 = s4 + 0x400;                                            // 0x00185858: addiu $v1, $s4, 0x400
    v0 = s2 + -0x400;                                           // 0x0018585c: addiu $v0, $s2, -0x400
    s2 = v0 + s0;                                               // 0x00185860: addu $s2, $v0, $s0
    s4 = v1 - s0;                                               // 0x00185864: subu $s4, $v1, $s0
label_0x18586c:
    func_00182b88();  // 182b88                                // 0x00185874: jal 0x182b88
    a2 = sp + 0x280;                                            // 0x00185878: addiu $a2, $sp, 0x280
    v1 = local_280;                                             // 0x0018587c: lw $v1, 0x280($sp)
    if (v1 != 0) goto label_0x1857cc;                           // 0x00185880: bnez $v1, 0x1857cc
    if (s1 == s7) goto label_0x1857d4;                          // 0x00185888: beq $s1, $s7, 0x1857d4
    s1 = s1 & s6;                                               // 0x0018588c: and $s1, $s1, $s6
    v0 = s0 + -0x400;                                           // 0x00185890: addiu $v0, $s0, -0x400
    if (s2 != 0) goto label_0x185810;                           // 0x00185894: bnez $s2, 0x185810
    if (s0 != 0) s0 = v0;                                       // 0x00185898: movn $s0, $v0, $s0
label_0x18589c:
label_0x1858a0:
label_0x1858a4:
    return;                                                     // 0x001858c8: jr $ra
    sp = sp + 0x330;                                            // 0x001858cc: addiu $sp, $sp, 0x330
}