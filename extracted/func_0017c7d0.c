void func_0017c7d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_20, local_24, local_28, local_2c, local_4;
    uint32_t local_8, local_c;
    
    sp = sp + -0x30;                                            // 0x0017c7d0: addiu $sp, $sp, -0x30
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0017c7f8: lw $v0, 4($s1)
    if (v0 != 0) goto label_0x17c814;                           // 0x0017c7fc: bnez $v0, 0x17c814
    s0 = *(int32_t*)(s2);                                       // 0x0017c800: lw $s0, 0($s2)
    a1 = 0x23 << 16;                                            // 0x0017c804: lui $a1, 0x23
    func_0017cad8();  // 17cad8                                // 0x0017c808: jal 0x17cad8
    a1 = &str_002296b0;  // "E201181: SFX_CnvFrmArgb8888 : frmfmt is not support." // 0x0017c80c: addiu $a1, $a1, -0x6950
    *(uint32_t*)((s1) + 4) = v0;                                // 0x0017c810: sw $v0, 4($s1)
label_0x17c814:
    if (s0 == 0) goto label_0x17c860;                           // 0x0017c814: beqz $s0, 0x17c860
    v0 = ((unsigned)s0 < (unsigned)3) ? 1 : 0;                  // 0x0017c81c: sltiu $v0, $s0, 3
    /* bnezl $v0, 0x17c864 */                                   // 0x0017c820: bnezl $v0, 0x17c864
    v0 = 3;                                                     // 0x0017c828: addiu $v0, $zero, 3
    if (s0 != v0) goto label_0x17c864;                          // 0x0017c82c: bnel $s0, $v0, 0x17c864
    goto label_0x17c888;                                        // 0x0017c854: j 0x17c888
    sp = sp + 0x30;                                             // 0x0017c858: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0017c85c: nop 
label_0x17c860:
label_0x17c864:
    a2 = 0x23 << 16;                                            // 0x0017c86c: lui $a2, 0x23
    a2 = &str_00229ba8;  // "E301282: CnvToRgb888 : compo is not support." // 0x0017c878: addiu $a2, $a2, -0x6458
    return func_0017cec8();  // Tail call                        // 0x0017c880: j 0x17ce88
    sp = sp + 0x30;                                             // 0x0017c884: addiu $sp, $sp, 0x30
label_0x17c888:
    sp = sp + -0x20;                                            // 0x0017c888: addiu $sp, $sp, -0x20
    v0 = 0x41;                                                  // 0x0017c88c: addiu $v0, $zero, 0x41
    v1 = *(int32_t*)((s0) + 4);                                 // 0x0017c8a8: lw $v1, 4($s0)
    if (v1 == v0) goto label_0x17c9b0;                          // 0x0017c8ac: beq $v1, $v0, 0x17c9b0
    v0 = (v1 < 0x42) ? 1 : 0;                                   // 0x0017c8b4: slti $v0, $v1, 0x42
    if (v0 == 0) goto label_0x17c8e8;                           // 0x0017c8b8: beqz $v0, 0x17c8e8
    v0 = 0x101;                                                 // 0x0017c8bc: addiu $v0, $zero, 0x101
    v0 = 0x21;                                                  // 0x0017c8c0: addiu $v0, $zero, 0x21
    if (v1 == v0) goto label_0x17c9b0;                          // 0x0017c8c4: beq $v1, $v0, 0x17c9b0
    v0 = (v1 < 0x22) ? 1 : 0;                                   // 0x0017c8c8: slti $v0, $v1, 0x22
    /* beqzl $v0, 0x17c9b4 */                                   // 0x0017c8cc: beqzl $v0, 0x17c9b4
    v0 = 0x11;                                                  // 0x0017c8d4: addiu $v0, $zero, 0x11
    if (v1 == v0) goto label_0x17c910;                          // 0x0017c8d8: beq $v1, $v0, 0x17c910
    /* nop */                                                   // 0x0017c8dc: nop 
    goto label_0x17c9b4;                                        // 0x0017c8e0: b 0x17c9b4
label_0x17c8e8:
    if (v1 == v0) goto label_0x17c9b0;                          // 0x0017c8e8: beq $v1, $v0, 0x17c9b0
    v0 = (v1 < 0x102) ? 1 : 0;                                  // 0x0017c8ec: slti $v0, $v1, 0x102
    /* bnezl $v0, 0x17c9b4 */                                   // 0x0017c8f0: bnezl $v0, 0x17c9b4
    v0 = 0x1001;                                                // 0x0017c8f8: addiu $v0, $zero, 0x1001
    if (v1 == v0) goto label_0x17c980;                          // 0x0017c8fc: beq $v1, $v0, 0x17c980
    /* nop */                                                   // 0x0017c900: nop 
    goto label_0x17c9b4;                                        // 0x0017c904: b 0x17c9b4
    /* nop */                                                   // 0x0017c90c: nop 
label_0x17c910:
    func_0017d128();  // 17d128                                // 0x0017c910: jal 0x17d128
    /* nop */                                                   // 0x0017c914: nop 
    v1 = 1;                                                     // 0x0017c918: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x17c948;                          // 0x0017c91c: beq $v0, $v1, 0x17c948
    goto label_0x17c9d8;                                        // 0x0017c940: j 0x17c9d8
    sp = sp + 0x20;                                             // 0x0017c944: addiu $sp, $sp, 0x20
label_0x17c948:
    func_0017c250();  // 17c250                                // 0x0017c94c: jal 0x17c250
    a2 = 0x15;                                                  // 0x0017c950: addiu $a2, $zero, 0x15
    a3 = 1;                                                     // 0x0017c96c: addiu $a3, $zero, 1
    goto label_0x17c9d8;                                        // 0x0017c974: j 0x17c9d8
    sp = sp + 0x20;                                             // 0x0017c978: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017c97c: nop 
label_0x17c980:
    func_0017c250();  // 17c250                                // 0x0017c980: jal 0x17c250
    a2 = 0x15;                                                  // 0x0017c984: addiu $a2, $zero, 0x15
    a3 = 1;                                                     // 0x0017c9a0: addiu $a3, $zero, 1
    goto label_0x17c9d8;                                        // 0x0017c9a8: j 0x17c9d8
    sp = sp + 0x20;                                             // 0x0017c9ac: addiu $sp, $sp, 0x20
label_0x17c9b0:
label_0x17c9b4:
    a2 = 0x23 << 16;                                            // 0x0017c9c0: lui $a2, 0x23
    a2 = &str_00229be0;  // "\nCRI SFX/PS2EE Ver.1.30 Build:Jul 29 2003 15:13:54\n" // 0x0017c9cc: addiu $a2, $a2, -0x6420
    return func_0017cec8();  // Tail call                        // 0x0017c9d0: j 0x17ce88
    sp = sp + 0x20;                                             // 0x0017c9d4: addiu $sp, $sp, 0x20
label_0x17c9d8:
    sp = sp + -0x70;                                            // 0x0017c9d8: addiu $sp, $sp, -0x70
    s1 = s0 + 4;                                                // 0x0017c9e8: addiu $s1, $s0, 4
    v0 = s0 + 0x14;                                             // 0x0017ca00: addiu $v0, $s0, 0x14
    local_20 = a2;                                              // 0x0017ca04: sw $a2, 0x20($sp)
    v1 = s0 + 0x24;                                             // 0x0017ca08: addiu $v1, $s0, 0x24
    t1 = *(int32_t*)((v1) + 4);                                 // 0x0017ca0c: lw $t1, 4($v1)
    t0 = *(int32_t*)((v0) + 4);                                 // 0x0017ca10: lw $t0, 4($v0)
    a1 = *(int32_t*)(v0);                                       // 0x0017ca14: lw $a1, 0($v0)
    a2 = *(int32_t*)(v1);                                       // 0x0017ca18: lw $a2, 0($v1)
    a3 = *(int32_t*)(s1);                                       // 0x0017ca1c: lw $a3, 0($s1)
    v1 = *(int32_t*)((s0) + 0x44);                              // 0x0017ca20: lw $v1, 0x44($s0)
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0017ca24: lw $v0, 4($s1)
    local_0 = a3;                                               // 0x0017ca28: sw $a3, 0($sp)
    local_4 = a1;                                               // 0x0017ca2c: sw $a1, 4($sp)
    local_8 = a2;                                               // 0x0017ca30: sw $a2, 8($sp)
    local_14 = t1;                                              // 0x0017ca34: sw $t1, 0x14($sp)
    local_24 = v1;                                              // 0x0017ca38: sw $v1, 0x24($sp)
    local_c = v0;                                               // 0x0017ca3c: sw $v0, 0xc($sp)
    func_0017aa68();  // 17aa68                                // 0x0017ca40: jal 0x17aa68
    local_10 = t0;                                              // 0x0017ca44: sw $t0, 0x10($sp)
    v1 = 1;                                                     // 0x0017ca48: addiu $v1, $zero, 1
    a3 = sp + 0x20;                                             // 0x0017ca58: addiu $a3, $sp, 0x20
    if (v0 != v1) goto label_0x17ca78;                          // 0x0017ca5c: bne $v0, $v1, 0x17ca78
    t1 = 1;                                                     // 0x0017ca60: addiu $t1, $zero, 1
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x0017ca64: lw $v0, 0x48($s0)
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x0017ca68: srl $v1, $v0, 0x1f
    v0 = v0 + v1;                                               // 0x0017ca6c: addu $v0, $v0, $v1
    goto label_0x17ca7c;                                        // 0x0017ca70: b 0x17ca7c
    v0 = v0 >> 1;                                               // 0x0017ca74: sra $v0, $v0, 1
label_0x17ca78:
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x0017ca78: lw $v0, 0x48($s0)
label_0x17ca7c:
    local_28 = v0;                                              // 0x0017ca7c: sw $v0, 0x28($sp)
    v0 = *(int32_t*)((s2) + 8);                                 // 0x0017ca80: lw $v0, 8($s2)
    /* bnezl $v0, 0x17ca9c */                                   // 0x0017ca84: bnezl $v0, 0x17ca9c
    local_2c = v0;                                              // 0x0017ca88: sw $v0, 0x2c($sp)
    v1 = *(int32_t*)((s1) + 4);                                 // 0x0017ca8c: lw $v1, 4($s1)
    v0 = v1 << 1;                                               // 0x0017ca90: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x0017ca94: addu $v0, $v0, $v1
    local_2c = v0;                                              // 0x0017ca98: sw $v0, 0x2c($sp)
    if (s3 != t1) goto label_0x17caa8;                          // 0x0017ca9c: bne $s3, $t1, 0x17caa8
    t0 = *(int32_t*)((s2) + 0x3c);                              // 0x0017caa4: lw $t0, 0x3c($s2)
label_0x17caa8:
    func_0017cad0();  // 17cad0                                // 0x0017caa8: jal 0x17cad0
    /* nop */                                                   // 0x0017caac: nop 
    return;                                                     // 0x0017cac4: jr $ra
    sp = sp + 0x70;                                             // 0x0017cac8: addiu $sp, $sp, 0x70
}