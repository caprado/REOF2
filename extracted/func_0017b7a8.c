void func_0017b7a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_20, local_24, local_28, local_2c, local_38;
    uint32_t local_4, local_8, local_c;
    
    sp = sp + -0x30;                                            // 0x0017b7a8: addiu $sp, $sp, -0x30
    *(uint32_t*)((s0) + 0x44) = t1;                             // 0x0017b7d4: sw $t1, 0x44($s0)
    func_0017d200();  // 17d200                                // 0x0017b7dc: jal 0x17d200
    *(uint32_t*)((s0) + 0x48) = t2;                             // 0x0017b7e0: sw $t2, 0x48($s0)
    func_0017cf10();  // 17cf10                                // 0x0017b7e4: jal 0x17cf10
    a1 = 0x11;                                                  // 0x0017b7f0: addiu $a1, $zero, 0x11
    func_0017cf08();  // 17cf08                                // 0x0017b7f4: jal 0x17cf08
    func_0017b830();  // 17b830                                // 0x0017b804: jal 0x17b830
    return func_0017cf10();  // Tail call                        // 0x0017b828: j 0x17cf08
    sp = sp + 0x30;                                             // 0x0017b82c: addiu $sp, $sp, 0x30
    sp = sp + -0x30;                                            // 0x0017b830: addiu $sp, $sp, -0x30
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0017b858: lw $v0, 4($s1)
    if (v0 != 0) goto label_0x17b874;                           // 0x0017b85c: bnez $v0, 0x17b874
    s0 = *(int32_t*)(s2);                                       // 0x0017b860: lw $s0, 0($s2)
    a1 = 0x23 << 16;                                            // 0x0017b864: lui $a1, 0x23
    func_0017cad8();  // 17cad8                                // 0x0017b868: jal 0x17cad8
    a1 = &str_002296b0;  // "E201181: SFX_CnvFrmArgb8888 : frmfmt is not support." // 0x0017b86c: addiu $a1, $a1, -0x6950
    *(uint32_t*)((s1) + 4) = v0;                                // 0x0017b870: sw $v0, 4($s1)
label_0x17b874:
    if (s0 == 0) goto label_0x17b8c0;                           // 0x0017b874: beqz $s0, 0x17b8c0
    v0 = ((unsigned)s0 < (unsigned)3) ? 1 : 0;                  // 0x0017b87c: sltiu $v0, $s0, 3
    /* bnezl $v0, 0x17b8c4 */                                   // 0x0017b880: bnezl $v0, 0x17b8c4
    v0 = 3;                                                     // 0x0017b888: addiu $v0, $zero, 3
    if (s0 != v0) goto label_0x17b8c4;                          // 0x0017b88c: bnel $s0, $v0, 0x17b8c4
    goto label_0x17b8e8;                                        // 0x0017b8b4: j 0x17b8e8
    sp = sp + 0x30;                                             // 0x0017b8b8: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0017b8bc: nop 
label_0x17b8c0:
label_0x17b8c4:
    a2 = 0x23 << 16;                                            // 0x0017b8cc: lui $a2, 0x23
    a2 = &str_00229808;  // "E201182: CnvToYuv422 : compo is not support." // 0x0017b8d8: addiu $a2, $a2, -0x67f8
    return func_0017cec8();  // Tail call                        // 0x0017b8e0: j 0x17ce88
    sp = sp + 0x30;                                             // 0x0017b8e4: addiu $sp, $sp, 0x30
label_0x17b8e8:
    sp = sp + -0x20;                                            // 0x0017b8e8: addiu $sp, $sp, -0x20
    v0 = 0x41;                                                  // 0x0017b8ec: addiu $v0, $zero, 0x41
    v1 = *(int32_t*)((s0) + 4);                                 // 0x0017b908: lw $v1, 4($s0)
    if (v1 == v0) goto label_0x17ba30;                          // 0x0017b90c: beq $v1, $v0, 0x17ba30
    v0 = (v1 < 0x42) ? 1 : 0;                                   // 0x0017b914: slti $v0, $v1, 0x42
    if (v0 == 0) goto label_0x17b948;                           // 0x0017b918: beqz $v0, 0x17b948
    v0 = 0x101;                                                 // 0x0017b91c: addiu $v0, $zero, 0x101
    v0 = 0x21;                                                  // 0x0017b920: addiu $v0, $zero, 0x21
    if (v1 == v0) goto label_0x17ba30;                          // 0x0017b924: beq $v1, $v0, 0x17ba30
    v0 = (v1 < 0x22) ? 1 : 0;                                   // 0x0017b928: slti $v0, $v1, 0x22
    /* beqzl $v0, 0x17ba34 */                                   // 0x0017b92c: beqzl $v0, 0x17ba34
    v0 = 0x11;                                                  // 0x0017b934: addiu $v0, $zero, 0x11
    if (v1 == v0) goto label_0x17b970;                          // 0x0017b938: beq $v1, $v0, 0x17b970
    /* nop */                                                   // 0x0017b93c: nop 
    goto label_0x17ba34;                                        // 0x0017b940: b 0x17ba34
label_0x17b948:
    if (v1 == v0) goto label_0x17b9e0;                          // 0x0017b948: beq $v1, $v0, 0x17b9e0
    v0 = (v1 < 0x102) ? 1 : 0;                                  // 0x0017b94c: slti $v0, $v1, 0x102
    /* bnezl $v0, 0x17ba34 */                                   // 0x0017b950: bnezl $v0, 0x17ba34
    v0 = 0x1001;                                                // 0x0017b958: addiu $v0, $zero, 0x1001
    if (v1 == v0) goto label_0x17ba00;                          // 0x0017b95c: beq $v1, $v0, 0x17ba00
    /* nop */                                                   // 0x0017b960: nop 
    goto label_0x17ba34;                                        // 0x0017b964: b 0x17ba34
    /* nop */                                                   // 0x0017b96c: nop 
label_0x17b970:
    func_0017d128();  // 17d128                                // 0x0017b970: jal 0x17d128
    /* nop */                                                   // 0x0017b974: nop 
    v1 = 1;                                                     // 0x0017b978: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x17b9a8;                          // 0x0017b97c: beq $v0, $v1, 0x17b9a8
    goto label_0x17ba58;                                        // 0x0017b9a0: j 0x17ba58
    sp = sp + 0x20;                                             // 0x0017b9a4: addiu $sp, $sp, 0x20
label_0x17b9a8:
    func_0017c250();  // 17c250                                // 0x0017b9ac: jal 0x17c250
    a2 = 0x16;                                                  // 0x0017b9b0: addiu $a2, $zero, 0x16
    a3 = 1;                                                     // 0x0017b9cc: addiu $a3, $zero, 1
    goto label_0x17ba58;                                        // 0x0017b9d4: j 0x17ba58
    sp = sp + 0x20;                                             // 0x0017b9d8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017b9dc: nop 
label_0x17b9e0:
    goto label_0x17ba58;                                        // 0x0017b9f4: j 0x17ba58
    sp = sp + 0x20;                                             // 0x0017b9f8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017b9fc: nop 
label_0x17ba00:
    func_0017c250();  // 17c250                                // 0x0017ba00: jal 0x17c250
    a2 = 0x15;                                                  // 0x0017ba04: addiu $a2, $zero, 0x15
    a3 = 1;                                                     // 0x0017ba20: addiu $a3, $zero, 1
    goto label_0x17ba58;                                        // 0x0017ba28: j 0x17ba58
    sp = sp + 0x20;                                             // 0x0017ba2c: addiu $sp, $sp, 0x20
label_0x17ba30:
label_0x17ba34:
    a2 = 0x23 << 16;                                            // 0x0017ba40: lui $a2, 0x23
    a2 = &str_00229840;  // "E201193: SFX_CnvFrmY84C44 : frmfmt is not support." // 0x0017ba4c: addiu $a2, $a2, -0x67c0
    return func_0017cec8();  // Tail call                        // 0x0017ba50: j 0x17ce88
    sp = sp + 0x20;                                             // 0x0017ba54: addiu $sp, $sp, 0x20
label_0x17ba58:
    sp = sp + -0x70;                                            // 0x0017ba58: addiu $sp, $sp, -0x70
    s1 = s0 + 4;                                                // 0x0017ba68: addiu $s1, $s0, 4
    v0 = s0 + 0x14;                                             // 0x0017ba80: addiu $v0, $s0, 0x14
    local_20 = a2;                                              // 0x0017ba84: sw $a2, 0x20($sp)
    v1 = s0 + 0x24;                                             // 0x0017ba88: addiu $v1, $s0, 0x24
    t0 = *(int32_t*)((v0) + 4);                                 // 0x0017ba8c: lw $t0, 4($v0)
    t1 = *(int32_t*)((v1) + 4);                                 // 0x0017ba90: lw $t1, 4($v1)
    a1 = *(int32_t*)(v0);                                       // 0x0017ba94: lw $a1, 0($v0)
    a2 = *(int32_t*)(v1);                                       // 0x0017ba98: lw $a2, 0($v1)
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0017ba9c: lw $v0, 4($s1)
    v1 = *(int32_t*)((s0) + 0x44);                              // 0x0017baa0: lw $v1, 0x44($s0)
    a3 = *(int32_t*)(s1);                                       // 0x0017baa4: lw $a3, 0($s1)
    local_24 = v1;                                              // 0x0017baa8: sw $v1, 0x24($sp)
    local_0 = a3;                                               // 0x0017baac: sw $a3, 0($sp)
    local_4 = a1;                                               // 0x0017bab0: sw $a1, 4($sp)
    local_8 = a2;                                               // 0x0017bab4: sw $a2, 8($sp)
    local_c = v0;                                               // 0x0017bab8: sw $v0, 0xc($sp)
    local_10 = t0;                                              // 0x0017babc: sw $t0, 0x10($sp)
    func_0017aa68();  // 17aa68                                // 0x0017bac0: jal 0x17aa68
    local_14 = t1;                                              // 0x0017bac4: sw $t1, 0x14($sp)
    v1 = 1;                                                     // 0x0017bac8: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x17bae0;                          // 0x0017bacc: bne $v0, $v1, 0x17bae0
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x0017bad0: lw $v0, 0x48($s0)
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x0017bad4: srl $v1, $v0, 0x1f
    v0 = v0 + v1;                                               // 0x0017bad8: addu $v0, $v0, $v1
    v0 = v0 >> 1;                                               // 0x0017badc: sra $v0, $v0, 1
label_0x17bae0:
    local_28 = v0;                                              // 0x0017bae0: sw $v0, 0x28($sp)
    v0 = *(int32_t*)((s2) + 8);                                 // 0x0017bae4: lw $v0, 8($s2)
    /* beqzl $v0, 0x17baf0 */                                   // 0x0017bae8: beqzl $v0, 0x17baf0
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0017baec: lw $v0, 4($s1)
    local_2c = v0;                                              // 0x0017baf0: sw $v0, 0x2c($sp)
    v0 = *(int32_t*)((s2) + 0xc);                               // 0x0017baf4: lw $v0, 0xc($s2)
    /* beqzl $v0, 0x17bb00 */                                   // 0x0017baf8: beqzl $v0, 0x17bb00
    v0 = *(int32_t*)((s1) + 8);                                 // 0x0017bafc: lw $v0, 8($s1)
    local_38 = v0;                                              // 0x0017bb00: sw $v0, 0x38($sp)
    v0 = 1;                                                     // 0x0017bb04: addiu $v0, $zero, 1
    if (s3 != v0) goto label_0x17bb14;                          // 0x0017bb08: bne $s3, $v0, 0x17bb14
    t0 = *(int32_t*)((s2) + 0x3c);                              // 0x0017bb10: lw $t0, 0x3c($s2)
label_0x17bb14:
    func_0017bb48();  // 17bb48                                // 0x0017bb20: jal 0x17bb48
    a3 = sp + 0x20;                                             // 0x0017bb24: addiu $a3, $sp, 0x20
    return;                                                     // 0x0017bb3c: jr $ra
    sp = sp + 0x70;                                             // 0x0017bb40: addiu $sp, $sp, 0x70
}