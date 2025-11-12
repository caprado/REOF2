void func_001446c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_20, local_24, local_8;
    
    sp = sp + -0xd0;                                            // 0x001446c8: addiu $sp, $sp, -0xd0
    t3 = 0x1000 << 16;                                          // 0x001446cc: lui $t3, 0x1000
    t3 = t3 | 0x2010;                                           // 0x001446d4: ori $t3, $t3, 0x2010
    v0 = 0xf8ff << 16;                                          // 0x001446dc: lui $v0, 0xf8ff
    v0 = v0 | 0xffff;                                           // 0x001446e4: ori $v0, $v0, 0xffff
    a1 = 1;                                                     // 0x00144714: addiu $a1, $zero, 1
    a0 = *(int32_t*)((s0) + 0x168);                             // 0x0014471c: lw $a0, 0x168($s0)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00144720: lw $v1, 0($t3)
    a0 = a0 << 0x18;                                            // 0x00144724: sll $a0, $a0, 0x18
    v1 = v1 & v0;                                               // 0x00144728: and $v1, $v1, $v0
    v1 = v1 | a0;                                               // 0x0014472c: or $v1, $v1, $a0
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00144730: sw $v1, 0($t3)
    local_20 = a3;                                              // 0x00144738: sw $a3, 0x20($sp)
    func_00145478();  // 0x145208                                // 0x0014473c: jal 0x145208
    local_24 = t1;                                              // 0x00144740: sw $t1, 0x24($sp)
    if (v1 != 0) goto label_0x144770;                           // 0x00144748: bnez $v1, 0x144770
    *(uint32_t*)(s2) = v1;                                      // 0x0014474c: sw $v1, 0($s2)
    a1 = 0x22 << 16;                                            // 0x00144750: lui $a1, 0x22
    func_00148588();  // 0x148530                                // 0x00144758: jal 0x148530
    a1 = &str_00226758;  // "load_chroma_intra_quantizer_matrix == 1" // 0x0014475c: addiu $a1, $a1, 0x6758
    v1 = 1;                                                     // 0x00144760: addiu $v1, $zero, 1
    goto label_0x144b40;                                        // 0x00144768: b 0x144b40
    *(uint32_t*)((s0) + 0x134) = v1;                            // 0x0014476c: sw $v1, 0x134($s0)
label_0x144770:
    v0 = v1 & 0xc;                                              // 0x00144770: andi $v0, $v1, 0xc
    if (v0 == 0) goto label_0x1447ac;                           // 0x00144774: beqz $v0, 0x1447ac
    v0 = 3;                                                     // 0x00144778: addiu $v0, $zero, 3
    v1 = *(int32_t*)((s0) + 0x18c);                             // 0x0014477c: lw $v1, 0x18c($s0)
    if (v1 != v0) goto label_0x14479c;                          // 0x00144780: bne $v1, $v0, 0x14479c
    v0 = *(int32_t*)((s0) + 0x194);                             // 0x00144788: lw $v0, 0x194($s0)
    if (v0 == 0) goto label_0x14479c;                           // 0x0014478c: beqz $v0, 0x14479c
    v0 = 2;                                                     // 0x00144790: addiu $v0, $zero, 2
    goto label_0x1447d8;                                        // 0x00144794: b 0x1447d8
    *(uint32_t*)(s5) = v0;                                      // 0x00144798: sw $v0, 0($s5)
label_0x14479c:
    func_00145818();  // 0x1456a8                                // 0x0014479c: jal 0x1456a8
    a1 = 2;                                                     // 0x001447a0: addiu $a1, $zero, 2
    goto label_0x1447d8;                                        // 0x001447a4: b 0x1447d8
    *(uint32_t*)(s5) = v0;                                      // 0x001447a8: sw $v0, 0($s5)
label_0x1447ac:
    v0 = v1 & 1;                                                // 0x001447ac: andi $v0, $v1, 1
    /* beqzl $v0, 0x1447dc */                                   // 0x001447b0: beqzl $v0, 0x1447dc
    a2 = *(int32_t*)((s0) + 0x18c);                             // 0x001447b4: lw $a2, 0x18c($s0)
    v0 = *(int32_t*)((s0) + 0x198);                             // 0x001447b8: lw $v0, 0x198($s0)
    if (v0 == 0) goto label_0x1447d8;                           // 0x001447bc: beqz $v0, 0x1447d8
    v1 = 1;                                                     // 0x001447c0: addiu $v1, $zero, 1
    v0 = *(int32_t*)((s0) + 0x18c);                             // 0x001447c4: lw $v0, 0x18c($s0)
    a0 = 2;                                                     // 0x001447c8: addiu $a0, $zero, 2
    v0 = v0 ^ 3;                                                // 0x001447cc: xori $v0, $v0, 3
    if (v0 == 0) v1 = a0;                                       // 0x001447d0: movz $v1, $a0, $v0
    *(uint32_t*)(s5) = v1;                                      // 0x001447d4: sw $v1, 0($s5)
label_0x1447d8:
    a2 = *(int32_t*)((s0) + 0x18c);                             // 0x001447d8: lw $a2, 0x18c($s0)
    v0 = 3;                                                     // 0x001447dc: addiu $v0, $zero, 3
    if (a2 != v0) goto label_0x144804;                          // 0x001447e0: bne $a2, $v0, 0x144804
    a1 = *(int32_t*)(s5);                                       // 0x001447e4: lw $a1, 0($s5)
    s3 = 1;                                                     // 0x001447e8: addiu $s3, $zero, 1
    v0 = 2;                                                     // 0x001447ec: addiu $v0, $zero, 2
    v1 = a1 ^ 1;                                                // 0x001447f0: xori $v1, $a1, 1
    a0 = a1 ^ 2;                                                // 0x001447f4: xori $a0, $a1, 2
    if (v1 == 0) s3 = v0;                                       // 0x001447f8: movz $s3, $v0, $v1
    goto label_0x144818;                                        // 0x001447fc: b 0x144818
    s4 = ((unsigned)a0 < (unsigned)1) ? 1 : 0;                  // 0x00144800: sltiu $s4, $a0, 1
label_0x144804:
    v1 = 2;                                                     // 0x00144804: addiu $v1, $zero, 2
    s3 = 1;                                                     // 0x00144808: addiu $s3, $zero, 1
    v0 = a1 ^ 2;                                                // 0x00144810: xori $v0, $a1, 2
    if (v0 == 0) s3 = v1;                                       // 0x00144814: movz $s3, $v1, $v0
label_0x144818:
    v0 = a1 ^ 3;                                                // 0x00144818: xori $v0, $a1, 3
    if (s4 != 0) goto label_0x144830;                           // 0x00144820: bnez $s4, 0x144830
    fp = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x00144824: sltiu $fp, $v0, 1
    v0 = a2 ^ 3;                                                // 0x00144828: xori $v0, $a2, 3
    s7 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x0014482c: sltiu $s7, $v0, 1
label_0x144830:
    v0 = 3;                                                     // 0x00144830: addiu $v0, $zero, 3
    if (a2 != v0) goto label_0x14486c;                          // 0x00144834: bne $a2, $v0, 0x14486c
    v0 = *(int32_t*)((s0) + 0x194);                             // 0x0014483c: lw $v0, 0x194($s0)
    if (v0 != 0) goto label_0x14486c;                           // 0x00144840: bnez $v0, 0x14486c
    v0 = *(int32_t*)(s2);                                       // 0x00144848: lw $v0, 0($s2)
    v0 = v0 & 3;                                                // 0x0014484c: andi $v0, $v0, 3
    if (v0 == 0) goto label_0x144868;                           // 0x00144850: beqz $v0, 0x144868
    func_00145818();  // 0x1456a8                                // 0x00144858: jal 0x1456a8
    a1 = 1;                                                     // 0x0014485c: addiu $a1, $zero, 1
    goto label_0x144870;                                        // 0x00144860: b 0x144870
    v1 = local_20;                                              // 0x00144864: lw $v1, 0x20($sp)
label_0x144868:
label_0x14486c:
    v1 = local_20;                                              // 0x0014486c: lw $v1, 0x20($sp)
label_0x144870:
    *(uint32_t*)(v1) = v0;                                      // 0x00144870: sw $v0, 0($v1)
    v1 = *(int32_t*)(s2);                                       // 0x00144874: lw $v1, 0($s2)
    v0 = v1 & 0x10;                                             // 0x00144878: andi $v0, $v1, 0x10
    if (v0 == 0) goto label_0x144894;                           // 0x0014487c: beqz $v0, 0x144894
    func_00145818();  // 0x1456a8                                // 0x00144884: jal 0x1456a8
    a1 = 5;                                                     // 0x00144888: addiu $a1, $zero, 5
    *(uint32_t*)((s0) + 0x1cc) = v0;                            // 0x0014488c: sw $v0, 0x1cc($s0)
    v1 = *(int32_t*)(s2);                                       // 0x00144890: lw $v1, 0($s2)
label_0x144894:
    v0 = v1 & 8;                                                // 0x00144894: andi $v0, $v1, 8
    /* bnezl $v0, 0x1448bc */                                   // 0x00144898: bnezl $v0, 0x1448bc
    v0 = *(int32_t*)((s0) + 0x860);                             // 0x0014489c: lw $v0, 0x860($s0)
    v0 = v1 & 1;                                                // 0x001448a0: andi $v0, $v1, 1
    /* beqzl $v0, 0x14492c */                                   // 0x001448a4: beqzl $v0, 0x14492c
    v1 = *(int32_t*)((s0) + 0x134);                             // 0x001448a8: lw $v1, 0x134($s0)
    v0 = *(int32_t*)((s0) + 0x198);                             // 0x001448ac: lw $v0, 0x198($s0)
    /* beqzl $v0, 0x14492c */                                   // 0x001448b0: beqzl $v0, 0x14492c
    v1 = *(int32_t*)((s0) + 0x134);                             // 0x001448b4: lw $v1, 0x134($s0)
    v0 = *(int32_t*)((s0) + 0x860);                             // 0x001448b8: lw $v0, 0x860($s0)
    if (v0 == 0) goto label_0x144904;                           // 0x001448bc: beqz $v0, 0x144904
    v0 = *(int32_t*)((s0) + 0x180);                             // 0x001448c4: lw $v0, 0x180($s0)
    t3 = *(int32_t*)((s0) + 0x17c);                             // 0x001448c8: lw $t3, 0x17c($s0)
    v0 = v0 + -1;                                               // 0x001448d0: addiu $v0, $v0, -1
    a3 = local_24;                                              // 0x001448d4: lw $a3, 0x24($sp)
    local_8 = fp;                                               // 0x001448d8: sw $fp, 8($sp)
    t3 = t3 + -1;                                               // 0x001448dc: addiu $t3, $t3, -1
    local_0 = v0;                                               // 0x001448e0: sw $v0, 0($sp)
    local_10 = s7;                                              // 0x001448e8: sw $s7, 0x10($sp)
    func_00144d98();  // 0x144bf8                                // 0x001448f4: jal 0x144bf8
    goto label_0x14492c;                                        // 0x001448fc: b 0x14492c
    v1 = *(int32_t*)((s0) + 0x134);                             // 0x00144900: lw $v1, 0x134($s0)
label_0x144904:
    a3 = *(int32_t*)((s0) + 0x170);                             // 0x00144904: lw $a3, 0x170($s0)
    t3 = *(int32_t*)((s0) + 0x16c);                             // 0x00144908: lw $t3, 0x16c($s0)
    a3 = a3 + -1;                                               // 0x00144910: addiu $a3, $a3, -1
    func_00144ee8();  // 0x144d98                                // 0x00144920: jal 0x144d98
    v1 = *(int32_t*)((s0) + 0x134);                             // 0x00144928: lw $v1, 0x134($s0)
label_0x14492c:
    if (v1 != 0) goto label_0x144b40;                           // 0x0014492c: bnez $v1, 0x144b40
    v0 = *(int32_t*)(s2);                                       // 0x00144934: lw $v0, 0($s2)
    v0 = v0 & 4;                                                // 0x00144938: andi $v0, $v0, 4
    if (v0 == 0) goto label_0x1449b8;                           // 0x0014493c: beqz $v0, 0x1449b8
    /* nop */                                                   // 0x00144940: nop 
    v0 = *(int32_t*)((s0) + 0x860);                             // 0x00144944: lw $v0, 0x860($s0)
    if (v0 == 0) goto label_0x144990;                           // 0x00144948: beqz $v0, 0x144990
    v0 = *(int32_t*)((s0) + 0x188);                             // 0x00144950: lw $v0, 0x188($s0)
    t3 = *(int32_t*)((s0) + 0x184);                             // 0x00144954: lw $t3, 0x184($s0)
    v0 = v0 + -1;                                               // 0x0014495c: addiu $v0, $v0, -1
    a3 = local_24;                                              // 0x00144960: lw $a3, 0x24($sp)
    local_10 = s7;                                              // 0x00144964: sw $s7, 0x10($sp)
    local_0 = v0;                                               // 0x0014496c: sw $v0, 0($sp)
    t3 = t3 + -1;                                               // 0x00144970: addiu $t3, $t3, -1
    local_8 = 0;                                                // 0x00144974: sw $zero, 8($sp)
    func_00144d98();  // 0x144bf8                                // 0x00144980: jal 0x144bf8
    t0 = 1;                                                     // 0x00144984: addiu $t0, $zero, 1
    goto label_0x1449b8;                                        // 0x00144988: b 0x1449b8
    v1 = *(int32_t*)((s0) + 0x134);                             // 0x0014498c: lw $v1, 0x134($s0)
label_0x144990:
    a3 = *(int32_t*)((s0) + 0x178);                             // 0x00144990: lw $a3, 0x178($s0)
    t3 = *(int32_t*)((s0) + 0x174);                             // 0x00144994: lw $t3, 0x174($s0)
    a3 = a3 + -1;                                               // 0x0014499c: addiu $a3, $a3, -1
    a1 = s1 + 8;                                                // 0x001449a0: addiu $a1, $s1, 8
    func_00144ee8();  // 0x144d98                                // 0x001449ac: jal 0x144d98
    v1 = *(int32_t*)((s0) + 0x134);                             // 0x001449b4: lw $v1, 0x134($s0)
label_0x1449b8:
    if (v1 != 0) goto label_0x144b40;                           // 0x001449b8: bnez $v1, 0x144b40
    v1 = *(int32_t*)(s2);                                       // 0x001449c0: lw $v1, 0($s2)
    v0 = v1 & 1;                                                // 0x001449c4: andi $v0, $v1, 1
    if (v0 == 0) goto label_0x1449ec;                           // 0x001449c8: beqz $v0, 0x1449ec
    v0 = v1 & 3;                                                // 0x001449cc: andi $v0, $v1, 3
    v0 = *(int32_t*)((s0) + 0x198);                             // 0x001449d0: lw $v0, 0x198($s0)
    if (v0 == 0) goto label_0x1449e8;                           // 0x001449d4: beqz $v0, 0x1449e8
    func_001456a8();  // 0x145598                                // 0x001449dc: jal 0x145598
    a1 = 1;                                                     // 0x001449e0: addiu $a1, $zero, 1
    v1 = *(int32_t*)(s2);                                       // 0x001449e4: lw $v1, 0($s2)
label_0x1449e8:
    v0 = v1 & 3;                                                // 0x001449e8: andi $v0, $v1, 3
label_0x1449ec:
    if (v0 == 0) goto label_0x144a60;                           // 0x001449ec: beqz $v0, 0x144a60
    v1 = 0x140;                                                 // 0x001449f0: addiu $v1, $zero, 0x140
    v0 = *(int32_t*)((s0) + 0x828);                             // 0x001449f4: lw $v0, 0x828($s0)
    a1 = 0x300;                                                 // 0x001449f8: addiu $a1, $zero, 0x300
    v0 = a0 + s0;                                               // 0x00144a00: addu $v0, $a0, $s0
    func_00146f58();  // 0x146ed0                                // 0x00144a04: jal 0x146ed0
    a0 = g_f8ff05aa;  // Global at 0xf8ff05aa                   // 0x00144a08: lw $a0, 0x5ac($v0)
    func_00145080();  // 0x144f18                                // 0x00144a0c: jal 0x144f18
    a1 = *(int32_t*)(s2);                                       // 0x00144a14: lw $a1, 0($s2)
    a3 = 0x2000 << 16;                                          // 0x00144a18: lui $a3, 0x2000
    a2 = *(int32_t*)((s0) + 0x1cc);                             // 0x00144a1c: lw $a2, 0x1cc($s0)
    v1 = *(int32_t*)((s0) + 0x1c8);                             // 0x00144a24: lw $v1, 0x1c8($s0)
    a1 = a1 & 1;                                                // 0x00144a28: andi $a1, $a1, 1
    t0 = local_20;                                              // 0x00144a2c: lw $t0, 0x20($sp)
    a1 = a1 << 0x1b;                                            // 0x00144a30: sll $a1, $a1, 0x1b
    a2 = a2 << 0x10;                                            // 0x00144a34: sll $a2, $a2, 0x10
    v1 = v1 << 0x1a;                                            // 0x00144a38: sll $v1, $v1, 0x1a
    v0 = *(int32_t*)(t0);                                       // 0x00144a3c: lw $v0, 0($t0)
    a1 = a1 | a2;                                               // 0x00144a40: or $a1, $a1, $a2
    v1 = v1 | a3;                                               // 0x00144a44: or $v1, $v1, $a3
    a1 = a1 | v1;                                               // 0x00144a48: or $a1, $a1, $v1
    v0 = v0 << 0x19;                                            // 0x00144a4c: sll $v0, $v0, 0x19
    func_00144f18();  // 0x144ee8                                // 0x00144a50: jal 0x144ee8
    a1 = a1 | v0;                                               // 0x00144a54: or $a1, $a1, $v0
    goto label_0x144a78;                                        // 0x00144a58: b 0x144a78
    v0 = *(int32_t*)((s0) + 0x134);                             // 0x00144a5c: lw $v0, 0x134($s0)
label_0x144a60:
    v0 = *(int32_t*)((s0) + 0x828);                             // 0x00144a60: lw $v0, 0x828($s0)
    a0 = 1;                                                     // 0x00144a64: addiu $a0, $zero, 1
    v0 = a1 + s0;                                               // 0x00144a6c: addu $v0, $a1, $s0
    g_f8ff06e2 = a0;  // Global at 0xf8ff06e2                   // 0x00144a70: sw $a0, 0x6e4($v0)
    v0 = *(int32_t*)((s0) + 0x134);                             // 0x00144a74: lw $v0, 0x134($s0)
label_0x144a78:
    if (v0 == 0) goto label_0x144a88;                           // 0x00144a78: beqz $v0, 0x144a88
    *(uint32_t*)((s0) + 0x1c8) = 0;                             // 0x00144a7c: sw $zero, 0x1c8($s0)
    goto label_0x144b40;                                        // 0x00144a80: b 0x144b40
label_0x144a88:
    v0 = *(int32_t*)(s2);                                       // 0x00144a88: lw $v0, 0($s2)
    v0 = v0 & 1;                                                // 0x00144a8c: andi $v0, $v0, 1
    /* bnezl $v0, 0x144ab4 */                                   // 0x00144a90: bnezl $v0, 0x144ab4
    v0 = *(int32_t*)((s0) + 0x198);                             // 0x00144a94: lw $v0, 0x198($s0)
    v1 = 1;                                                     // 0x00144a98: addiu $v1, $zero, 1
    *(uint32_t*)((s0) + 0x1c8) = v1;                            // 0x00144a9c: sw $v1, 0x1c8($s0)
    v0 = *(int32_t*)(s2);                                       // 0x00144aa0: lw $v0, 0($s2)
    v0 = v0 & 1;                                                // 0x00144aa4: andi $v0, $v0, 1
    /* beqzl $v0, 0x144ae0 */                                   // 0x00144aa8: beqzl $v0, 0x144ae0
    a0 = *(int32_t*)((s0) + 0x168);                             // 0x00144aac: lw $a0, 0x168($s0)
    v0 = *(int32_t*)((s0) + 0x198);                             // 0x00144ab0: lw $v0, 0x198($s0)
    /* bnezl $v0, 0x144ae0 */                                   // 0x00144ab4: bnezl $v0, 0x144ae0
    a0 = *(int32_t*)((s0) + 0x168);                             // 0x00144ab8: lw $a0, 0x168($s0)
    *(uint32_t*)((s1) + 0x14) = 0;                              // 0x00144abc: sw $zero, 0x14($s1)
    *(uint32_t*)((s1) + 0x10) = 0;                              // 0x00144ac0: sw $zero, 0x10($s1)
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x00144ac4: sw $zero, 4($s1)
    *(uint32_t*)(s1) = 0;                                       // 0x00144ac8: sw $zero, 0($s1)
    *(uint32_t*)((s1) + 0x1c) = 0;                              // 0x00144acc: sw $zero, 0x1c($s1)
    *(uint32_t*)((s1) + 0x18) = 0;                              // 0x00144ad0: sw $zero, 0x18($s1)
    *(uint32_t*)((s1) + 0xc) = 0;                               // 0x00144ad4: sw $zero, 0xc($s1)
    *(uint32_t*)((s1) + 8) = 0;                                 // 0x00144ad8: sw $zero, 8($s1)
    a0 = *(int32_t*)((s0) + 0x168);                             // 0x00144adc: lw $a0, 0x168($s0)
    v0 = 2;                                                     // 0x00144ae0: addiu $v0, $zero, 2
    if (a0 != v0) goto label_0x144b40;                          // 0x00144ae4: bne $a0, $v0, 0x144b40
    v0 = 1;                                                     // 0x00144ae8: addiu $v0, $zero, 1
    v0 = *(int32_t*)(s2);                                       // 0x00144aec: lw $v0, 0($s2)
    v0 = v0 & 9;                                                // 0x00144af0: andi $v0, $v0, 9
    if (v0 != 0) goto label_0x144b40;                           // 0x00144af4: bnez $v0, 0x144b40
    v0 = 1;                                                     // 0x00144af8: addiu $v0, $zero, 1
    *(uint32_t*)(s1) = 0;                                       // 0x00144afc: sw $zero, 0($s1)
    v1 = 3;                                                     // 0x00144b00: addiu $v1, $zero, 3
    *(uint32_t*)((s1) + 0x14) = 0;                              // 0x00144b04: sw $zero, 0x14($s1)
    *(uint32_t*)((s1) + 0x10) = 0;                              // 0x00144b08: sw $zero, 0x10($s1)
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x00144b0c: sw $zero, 4($s1)
    v0 = *(int32_t*)((s0) + 0x18c);                             // 0x00144b10: lw $v0, 0x18c($s0)
    if (v0 != v1) goto label_0x144b24;                          // 0x00144b14: bne $v0, $v1, 0x144b24
    v1 = 1;                                                     // 0x00144b18: addiu $v1, $zero, 1
    goto label_0x144b3c;                                        // 0x00144b1c: b 0x144b3c
    *(uint32_t*)(s5) = a0;                                      // 0x00144b20: sw $a0, 0($s5)
label_0x144b24:
    *(uint32_t*)(s5) = v1;                                      // 0x00144b24: sw $v1, 0($s5)
    v0 = *(int32_t*)((s0) + 0x18c);                             // 0x00144b28: lw $v0, 0x18c($s0)
    t0 = local_24;                                              // 0x00144b2c: lw $t0, 0x24($sp)
    v0 = v0 ^ 2;                                                // 0x00144b30: xori $v0, $v0, 2
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x00144b34: sltiu $v0, $v0, 1
    *(uint32_t*)(t0) = v0;                                      // 0x00144b38: sw $v0, 0($t0)
label_0x144b3c:
    v0 = 1;                                                     // 0x00144b3c: addiu $v0, $zero, 1
label_0x144b40:
    return;                                                     // 0x00144b68: jr $ra
    sp = sp + 0xd0;                                             // 0x00144b6c: addiu $sp, $sp, 0xd0
}