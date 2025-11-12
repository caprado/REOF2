void func_0017bb48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4, local_8, local_c;
    
    sp = sp + -0x10;                                            // 0x0017bb48: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x0017bb4c: addiu $v0, $zero, 1
    v1 = g_00229738;  // Global at 0x00229738                   // 0x0017bb5c: lw $v1, 0x74($a1)
    if (v1 != v0) goto label_0x17bb80;                          // 0x0017bb60: bne $v1, $v0, 0x17bb80
    if (a2 == 0) goto label_0x17bb78;                           // 0x0017bb68: beqz $a2, 0x17bb78
    return func_0014fc08();  // Tail call                       // 0x0017bb70: j 0x14fc08
    sp = sp + 0x10;                                             // 0x0017bb74: addiu $sp, $sp, 0x10
label_0x17bb78:
    return func_00148f40();  // Tail call                       // 0x0017bb78: j 0x148f40
    sp = sp + 0x10;                                             // 0x0017bb7c: addiu $sp, $sp, 0x10
label_0x17bb80:
    if (a2 == 0) goto label_0x17bb90;                           // 0x0017bb80: beqz $a2, 0x17bb90
    return func_0014fc08();  // Tail call                       // 0x0017bb88: j 0x14fc08
    sp = sp + 0x10;                                             // 0x0017bb8c: addiu $sp, $sp, 0x10
label_0x17bb90:
    return func_00148f40();  // Tail call                       // 0x0017bb90: j 0x148f40
    sp = sp + 0x10;                                             // 0x0017bb94: addiu $sp, $sp, 0x10
    sp = sp + -0x30;                                            // 0x0017bb98: addiu $sp, $sp, -0x30
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0017bbc8: lw $v0, 4($s1)
    if (v0 != 0) goto label_0x17bbe4;                           // 0x0017bbcc: bnez $v0, 0x17bbe4
    s0 = *(int32_t*)(s2);                                       // 0x0017bbd0: lw $s0, 0($s2)
    a1 = 0x23 << 16;                                            // 0x0017bbd4: lui $a1, 0x23
    func_0017cae0();  // 0x17cad8                                // 0x0017bbd8: jal 0x17cad8
    a1 = &str_002296b0;  // "E201181: SFX_CnvFrmArgb8888 : frmfmt is not support." // 0x0017bbdc: addiu $a1, $a1, -0x6950
    *(uint32_t*)((s1) + 4) = v0;                                // 0x0017bbe0: sw $v0, 4($s1)
label_0x17bbe4:
    if (s0 == 0) goto label_0x17bc38;                           // 0x0017bbe4: beqz $s0, 0x17bc38
    v0 = ((unsigned)s0 < (unsigned)3) ? 1 : 0;                  // 0x0017bbec: sltiu $v0, $s0, 3
    /* bnezl $v0, 0x17bc3c */                                   // 0x0017bbf0: bnezl $v0, 0x17bc3c
    v0 = 3;                                                     // 0x0017bbf8: addiu $v0, $zero, 3
    if (s0 != v0) goto label_0x17bc3c;                          // 0x0017bbfc: bnel $s0, $v0, 0x17bc3c
    goto label_0x17bc68;                                        // 0x0017bc2c: j 0x17bc68
    sp = sp + 0x30;                                             // 0x0017bc30: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0017bc34: nop 
label_0x17bc38:
label_0x17bc3c:
    a2 = 0x23 << 16;                                            // 0x0017bc44: lui $a2, 0x23
    a2 = &str_00229870;  // "E201192: CnvToY84C44 : compo is not support." // 0x0017bc50: addiu $a2, $a2, -0x6790
    return func_0017cec8();  // Tail call                        // 0x0017bc5c: j 0x17ce88
    sp = sp + 0x30;                                             // 0x0017bc60: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0017bc64: nop 
label_0x17bc68:
    sp = sp + -0x10;                                            // 0x0017bc68: addiu $sp, $sp, -0x10
    v0 = 0x41;                                                  // 0x0017bc74: addiu $v0, $zero, 0x41
    v1 = g_002296d8;  // Global at 0x002296d8                   // 0x0017bc7c: lw $v1, 4($t1)
    if (v1 == v0) goto label_0x17bcd8;                          // 0x0017bc80: beq $v1, $v0, 0x17bcd8
    t0 = (v1 < 0x42) ? 1 : 0;                                   // 0x0017bc84: slti $t0, $v1, 0x42
    if (t0 == 0) goto label_0x17bcb8;                           // 0x0017bc88: beqz $t0, 0x17bcb8
    v0 = 0x101;                                                 // 0x0017bc8c: addiu $v0, $zero, 0x101
    v0 = 0x21;                                                  // 0x0017bc90: addiu $v0, $zero, 0x21
    if (v1 == v0) goto label_0x17bcd8;                          // 0x0017bc94: beq $v1, $v0, 0x17bcd8
    v0 = (v1 < 0x22) ? 1 : 0;                                   // 0x0017bc98: slti $v0, $v1, 0x22
    /* beqzl $v0, 0x17bcdc */                                   // 0x0017bc9c: beqzl $v0, 0x17bcdc
    a2 = 0x23 << 16;                                            // 0x0017bca0: lui $a2, 0x23
    v0 = 0x11;                                                  // 0x0017bca4: addiu $v0, $zero, 0x11
    if (v1 == v0) goto label_0x17bcc4;                          // 0x0017bca8: beq $v1, $v0, 0x17bcc4
    goto label_0x17bce0;                                        // 0x0017bcb0: b 0x17bce0
    a2 = 0x23 << 16;                                            // 0x0017bcb4: lui $a2, 0x23
label_0x17bcb8:
    if (v1 != v0) goto label_0x17bcdc;                          // 0x0017bcb8: bnel $v1, $v0, 0x17bcdc
    a2 = 0x23 << 16;                                            // 0x0017bcbc: lui $a2, 0x23
label_0x17bcc4:
    goto label_0x17bcf0;                                        // 0x0017bccc: j 0x17bcf0
    sp = sp + 0x10;                                             // 0x0017bcd0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017bcd4: nop 
label_0x17bcd8:
    a2 = 0x23 << 16;                                            // 0x0017bcd8: lui $a2, 0x23
label_0x17bcdc:
label_0x17bce0:
    a2 = &str_002298a8;  // "E201315: sfxcnv_CnvFrmZcmn : zclip is not set." // 0x0017bce0: addiu $a2, $a2, -0x6758
    return func_0017cec8();  // Tail call                        // 0x0017bce4: j 0x17ce88
    sp = sp + 0x10;                                             // 0x0017bce8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017bcec: nop 
label_0x17bcf0:
    sp = sp + -0x50;                                            // 0x0017bcf0: addiu $sp, $sp, -0x50
    t5 = a1 + 4;                                                // 0x0017bcf4: addiu $t5, $a1, 4
    t1 = a1 + 0x24;                                             // 0x0017bcfc: addiu $t1, $a1, 0x24
    a1 = a1 + 0x14;                                             // 0x0017bd1c: addiu $a1, $a1, 0x14
    t2 = str_002296b8;  // "E201182: CnvToArgb8888 : compo is not support." // 0x0017bd20: lw $t2, 4($t5)
    t4 = g_002296c8;  // Global at 0x002296c8                   // 0x0017bd24: lw $t4, 4($a1)
    a3 = g_002296c4;  // Global at 0x002296c4                   // 0x0017bd28: lw $a3, 0($a1)
    v0 = *(int32_t*)((v1) + 8);                                 // 0x0017bd30: lw $v0, 8($v1)
    a1 = *(int32_t*)((v1) + 0xc);                               // 0x0017bd34: lw $a1, 0xc($v1)
    t3 = g_002296d8;  // Global at 0x002296d8                   // 0x0017bd38: lw $t3, 4($t1)
    if (v0 != 0) s1 = v0;                                       // 0x0017bd3c: movn $s1, $v0, $v0
    a2 = g_002296b4;  // Global at 0x002296b4                   // 0x0017bd40: lw $a2, 0($t5)
    t0 = g_002296d4;  // Global at 0x002296d4                   // 0x0017bd48: lw $t0, 0($t1)
    local_10 = t4;                                              // 0x0017bd4c: sw $t4, 0x10($sp)
    local_0 = a2;                                               // 0x0017bd50: sw $a2, 0($sp)
    local_4 = a3;                                               // 0x0017bd54: sw $a3, 4($sp)
    local_8 = t0;                                               // 0x0017bd58: sw $t0, 8($sp)
    local_14 = t3;                                              // 0x0017bd5c: sw $t3, 0x14($sp)
    if (a1 != 0) goto label_0x17bd6c;                           // 0x0017bd60: bnez $a1, 0x17bd6c
    local_c = t2;                                               // 0x0017bd64: sw $t2, 0xc($sp)
    s0 = g_002296bc;  // Global at 0x002296bc                   // 0x0017bd68: lw $s0, 8($t5)
label_0x17bd6c:
    func_0017ab20();  // 0x17aa68                                // 0x0017bd6c: jal 0x17aa68
    /* nop */                                                   // 0x0017bd70: nop 
    v1 = 1;                                                     // 0x0017bd74: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x17bd8c;                          // 0x0017bd78: bne $v0, $v1, 0x17bd8c
    v0 = (unsigned)s0 >> 0x1f;                                  // 0x0017bd80: srl $v0, $s0, 0x1f
    v0 = s0 + v0;                                               // 0x0017bd84: addu $v0, $s0, $v0
    s0 = v0 >> 1;                                               // 0x0017bd88: sra $s0, $v0, 1
label_0x17bd8c:
    func_00148f60();  // 0x148f48                                // 0x0017bd98: jal 0x148f48
    return;                                                     // 0x0017bdb4: jr $ra
    sp = sp + 0x50;                                             // 0x0017bdb8: addiu $sp, $sp, 0x50
}