void func_0017a5d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_20, local_24, local_28, local_2c, local_4;
    uint32_t local_8, local_c;
    
    sp = sp + -0x30;                                            // 0x0017a5d8: addiu $sp, $sp, -0x30
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0017a5fc: lw $v0, 4($s1)
    if (v0 != 0) goto label_0x17a61c;                           // 0x0017a600: bnez $v0, 0x17a61c
    s0 = *(int32_t*)(s2);                                       // 0x0017a604: lw $s0, 0($s2)
    a1 = 0x23 << 16;                                            // 0x0017a608: lui $a1, 0x23
    func_0017cad8();  // 17cad8                                // 0x0017a610: jal 0x17cad8
    a1 = &str_002296b0;  // "E201181: SFX_CnvFrmArgb8888 : frmfmt is not support." // 0x0017a614: addiu $a1, $a1, -0x6950
    *(uint32_t*)((s1) + 4) = v0;                                // 0x0017a618: sw $v0, 4($s1)
label_0x17a61c:
    v0 = 2;                                                     // 0x0017a61c: addiu $v0, $zero, 2
    if (s0 == v0) goto label_0x17a6a0;                          // 0x0017a620: beq $s0, $v0, 0x17a6a0
    v0 = ((unsigned)s0 < (unsigned)3) ? 1 : 0;                  // 0x0017a624: sltiu $v0, $s0, 3
    if (v0 == 0) goto label_0x17a648;                           // 0x0017a628: beqz $v0, 0x17a648
    v0 = 3;                                                     // 0x0017a62c: addiu $v0, $zero, 3
    v0 = 1;                                                     // 0x0017a630: addiu $v0, $zero, 1
    if (s0 == v0) goto label_0x17a678;                          // 0x0017a634: beq $s0, $v0, 0x17a678
    goto label_0x17a6cc;                                        // 0x0017a63c: b 0x17a6cc
    /* nop */                                                   // 0x0017a644: nop 
label_0x17a648:
    if (s0 != v0) goto label_0x17a6c8;                          // 0x0017a648: bne $s0, $v0, 0x17a6c8
    goto label_0x17a6f0;                                        // 0x0017a66c: j 0x17a6f0
    sp = sp + 0x30;                                             // 0x0017a670: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0017a674: nop 
label_0x17a678:
    return func_0017af48();  // Tail call                        // 0x0017a694: j 0x17ad58
    sp = sp + 0x30;                                             // 0x0017a698: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0017a69c: nop 
label_0x17a6a0:
    return func_0017b1a8();  // Tail call                        // 0x0017a6c0: j 0x17b120
    sp = sp + 0x30;                                             // 0x0017a6c4: addiu $sp, $sp, 0x30
label_0x17a6c8:
label_0x17a6cc:
    a2 = 0x23 << 16;                                            // 0x0017a6d4: lui $a2, 0x23
    a2 = &str_002296b8;  // "E201182: CnvToArgb8888 : compo is not support." // 0x0017a6e0: addiu $a2, $a2, -0x6948
    return func_0017cec8();  // Tail call                        // 0x0017a6e8: j 0x17ce88
    sp = sp + 0x30;                                             // 0x0017a6ec: addiu $sp, $sp, 0x30
label_0x17a6f0:
    sp = sp + -0x20;                                            // 0x0017a6f0: addiu $sp, $sp, -0x20
    v0 = 0x41;                                                  // 0x0017a6f4: addiu $v0, $zero, 0x41
    v1 = *(int32_t*)((s0) + 4);                                 // 0x0017a710: lw $v1, 4($s0)
    if (v1 == v0) goto label_0x17a8a0;                          // 0x0017a714: beq $v1, $v0, 0x17a8a0
    v0 = (v1 < 0x42) ? 1 : 0;                                   // 0x0017a71c: slti $v0, $v1, 0x42
    if (v0 == 0) goto label_0x17a760;                           // 0x0017a720: beqz $v0, 0x17a760
    v0 = 0x101;                                                 // 0x0017a724: addiu $v0, $zero, 0x101
    v0 = 0x21;                                                  // 0x0017a728: addiu $v0, $zero, 0x21
    if (v1 == v0) goto label_0x17a840;                          // 0x0017a72c: beq $v1, $v0, 0x17a840
    v0 = (v1 < 0x22) ? 1 : 0;                                   // 0x0017a730: slti $v0, $v1, 0x22
    if (v0 == 0) goto label_0x17a750;                           // 0x0017a734: beqz $v0, 0x17a750
    v0 = 0x31;                                                  // 0x0017a738: addiu $v0, $zero, 0x31
    v0 = 0x11;                                                  // 0x0017a73c: addiu $v0, $zero, 0x11
    if (v1 == v0) goto label_0x17a798;                          // 0x0017a740: beq $v1, $v0, 0x17a798
    /* nop */                                                   // 0x0017a744: nop 
    goto label_0x17a900;                                        // 0x0017a748: b 0x17a900
label_0x17a750:
    if (v1 == v0) goto label_0x17a870;                          // 0x0017a750: beq $v1, $v0, 0x17a870
    /* nop */                                                   // 0x0017a754: nop 
    goto label_0x17a900;                                        // 0x0017a758: b 0x17a900
label_0x17a760:
    if (v1 == v0) goto label_0x17a808;                          // 0x0017a760: beq $v1, $v0, 0x17a808
    v0 = (v1 < 0x102) ? 1 : 0;                                  // 0x0017a764: slti $v0, $v1, 0x102
    if (v0 == 0) goto label_0x17a788;                           // 0x0017a768: beqz $v0, 0x17a788
    v0 = 0x1001;                                                // 0x0017a76c: addiu $v0, $zero, 0x1001
    v0 = 0xf1;                                                  // 0x0017a770: addiu $v0, $zero, 0xf1
    if (v1 == v0) goto label_0x17a828;                          // 0x0017a774: beql $v1, $v0, 0x17a828
    goto label_0x17a900;                                        // 0x0017a77c: b 0x17a900
    /* nop */                                                   // 0x0017a784: nop 
label_0x17a788:
    if (v1 == v0) goto label_0x17a8d0;                          // 0x0017a788: beq $v1, $v0, 0x17a8d0
    /* nop */                                                   // 0x0017a78c: nop 
    goto label_0x17a900;                                        // 0x0017a790: b 0x17a900
label_0x17a798:
    func_0017d128();  // 17d128                                // 0x0017a798: jal 0x17d128
    /* nop */                                                   // 0x0017a79c: nop 
    v1 = 1;                                                     // 0x0017a7a0: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x17a7d0;                          // 0x0017a7a4: beq $v0, $v1, 0x17a7d0
    goto label_0x17a928;                                        // 0x0017a7c8: j 0x17a928
    sp = sp + 0x20;                                             // 0x0017a7cc: addiu $sp, $sp, 0x20
label_0x17a7d0:
    func_0017c250();  // 17c250                                // 0x0017a7d4: jal 0x17c250
    a2 = 0x15;                                                  // 0x0017a7d8: addiu $a2, $zero, 0x15
    a3 = 1;                                                     // 0x0017a7f4: addiu $a3, $zero, 1
    goto label_0x17a928;                                        // 0x0017a7fc: j 0x17a928
    sp = sp + 0x20;                                             // 0x0017a800: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017a804: nop 
label_0x17a808:
    goto label_0x17a928;                                        // 0x0017a81c: j 0x17a928
    sp = sp + 0x20;                                             // 0x0017a820: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017a824: nop 
label_0x17a828:
    return func_0017abb8();  // Tail call                        // 0x0017a834: j 0x17ab20
    sp = sp + 0x20;                                             // 0x0017a838: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017a83c: nop 
label_0x17a840:
    func_0017c250();  // 17c250                                // 0x0017a840: jal 0x17c250
    a2 = 1;                                                     // 0x0017a844: addiu $a2, $zero, 1
    return func_0017acd0();  // Tail call                        // 0x0017a864: j 0x17abb8
    sp = sp + 0x20;                                             // 0x0017a868: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017a86c: nop 
label_0x17a870:
    func_0017c250();  // 17c250                                // 0x0017a870: jal 0x17c250
    a2 = 2;                                                     // 0x0017a874: addiu $a2, $zero, 2
    a3 = 1;                                                     // 0x0017a890: addiu $a3, $zero, 1
    goto label_0x17a928;                                        // 0x0017a898: j 0x17a928
    sp = sp + 0x20;                                             // 0x0017a89c: addiu $sp, $sp, 0x20
label_0x17a8a0:
    func_0017c250();  // 17c250                                // 0x0017a8a0: jal 0x17c250
    a2 = 3;                                                     // 0x0017a8a4: addiu $a2, $zero, 3
    a3 = 1;                                                     // 0x0017a8c0: addiu $a3, $zero, 1
    goto label_0x17a928;                                        // 0x0017a8c8: j 0x17a928
    sp = sp + 0x20;                                             // 0x0017a8cc: addiu $sp, $sp, 0x20
label_0x17a8d0:
    func_0017c250();  // 17c250                                // 0x0017a8d0: jal 0x17c250
    a2 = 0x15;                                                  // 0x0017a8d4: addiu $a2, $zero, 0x15
    a3 = 1;                                                     // 0x0017a8f0: addiu $a3, $zero, 1
    goto label_0x17a928;                                        // 0x0017a8f8: j 0x17a928
    sp = sp + 0x20;                                             // 0x0017a8fc: addiu $sp, $sp, 0x20
label_0x17a900:
    a2 = 0x23 << 16;                                            // 0x0017a90c: lui $a2, 0x23
    a2 = &str_002296f0;  // "E201312: sfxcnv_IsCnvUpHalf : compo is invalid." // 0x0017a918: addiu $a2, $a2, -0x6910
    return func_0017cec8();  // Tail call                        // 0x0017a91c: j 0x17ce88
    sp = sp + 0x20;                                             // 0x0017a920: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017a924: nop 
label_0x17a928:
    sp = sp + -0x70;                                            // 0x0017a928: addiu $sp, $sp, -0x70
    s2 = s0 + 4;                                                // 0x0017a940: addiu $s2, $s0, 4
    v0 = s0 + 0x14;                                             // 0x0017a950: addiu $v0, $s0, 0x14
    local_20 = a2;                                              // 0x0017a954: sw $a2, 0x20($sp)
    v1 = s0 + 0x24;                                             // 0x0017a958: addiu $v1, $s0, 0x24
    t1 = *(int32_t*)((v1) + 4);                                 // 0x0017a95c: lw $t1, 4($v1)
    t0 = *(int32_t*)((v0) + 4);                                 // 0x0017a960: lw $t0, 4($v0)
    a1 = *(int32_t*)(v0);                                       // 0x0017a964: lw $a1, 0($v0)
    a2 = *(int32_t*)(v1);                                       // 0x0017a968: lw $a2, 0($v1)
    a3 = *(int32_t*)(s2);                                       // 0x0017a96c: lw $a3, 0($s2)
    v1 = *(int32_t*)((s0) + 0x44);                              // 0x0017a970: lw $v1, 0x44($s0)
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0017a974: lw $v0, 4($s2)
    local_0 = a3;                                               // 0x0017a978: sw $a3, 0($sp)
    local_4 = a1;                                               // 0x0017a97c: sw $a1, 4($sp)
    local_8 = a2;                                               // 0x0017a980: sw $a2, 8($sp)
    local_14 = t1;                                              // 0x0017a984: sw $t1, 0x14($sp)
    local_24 = v1;                                              // 0x0017a988: sw $v1, 0x24($sp)
    local_c = v0;                                               // 0x0017a98c: sw $v0, 0xc($sp)
    func_0017aa68();  // 17aa68                                // 0x0017a990: jal 0x17aa68
    local_10 = t0;                                              // 0x0017a994: sw $t0, 0x10($sp)
    v1 = 1;                                                     // 0x0017a998: addiu $v1, $zero, 1
    a3 = sp + 0x20;                                             // 0x0017a9a8: addiu $a3, $sp, 0x20
    if (v0 != v1) goto label_0x17a9c8;                          // 0x0017a9ac: bne $v0, $v1, 0x17a9c8
    t1 = 1;                                                     // 0x0017a9b0: addiu $t1, $zero, 1
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x0017a9b4: lw $v0, 0x48($s0)
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x0017a9b8: srl $v1, $v0, 0x1f
    v0 = v0 + v1;                                               // 0x0017a9bc: addu $v0, $v0, $v1
    goto label_0x17a9cc;                                        // 0x0017a9c0: b 0x17a9cc
    v0 = v0 >> 1;                                               // 0x0017a9c4: sra $v0, $v0, 1
label_0x17a9c8:
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x0017a9c8: lw $v0, 0x48($s0)
label_0x17a9cc:
    local_28 = v0;                                              // 0x0017a9cc: sw $v0, 0x28($sp)
    v0 = *(int32_t*)((s1) + 8);                                 // 0x0017a9d0: lw $v0, 8($s1)
    /* bnezl $v0, 0x17a9e8 */                                   // 0x0017a9d4: bnezl $v0, 0x17a9e8
    local_2c = v0;                                              // 0x0017a9d8: sw $v0, 0x2c($sp)
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0017a9dc: lw $v0, 4($s2)
    v0 = v0 << 2;                                               // 0x0017a9e0: sll $v0, $v0, 2
    local_2c = v0;                                              // 0x0017a9e4: sw $v0, 0x2c($sp)
    if (s3 != t1) goto label_0x17a9f4;                          // 0x0017a9e8: bne $s3, $t1, 0x17a9f4
    t0 = *(int32_t*)((s1) + 0x3c);                              // 0x0017a9f0: lw $t0, 0x3c($s1)
label_0x17a9f4:
    func_0017aa18();  // 17aa18                                // 0x0017a9f4: jal 0x17aa18
    /* nop */                                                   // 0x0017a9f8: nop 
    return;                                                     // 0x0017aa10: jr $ra
    sp = sp + 0x70;                                             // 0x0017aa14: addiu $sp, $sp, 0x70
}