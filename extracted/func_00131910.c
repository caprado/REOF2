void func_00131910() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00131910: addiu $sp, $sp, -0x30
    a1 = *(int16_t*)((s0) + 0x3e);                              // 0x00131940: lh $a1, 0x3e($s0)
    a2 = *(int16_t*)((s0) + 0x3c);                              // 0x00131944: lh $a2, 0x3c($s0)
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00131948: lw $a0, 8($s0)
    a1 = a1 << 0xb;                                             // 0x0013194c: sll $a1, $a1, 0xb
    func_00130ae8();  // 0x130ad8                                // 0x00131950: jal 0x130ad8
    a2 = a2 << 0xb;                                             // 0x00131954: sll $a2, $a2, 0xb
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00131958: lw $a0, 8($s0)
    func_001304a8();  // 0x130468                                // 0x0013195c: jal 0x130468
    a1 = 0x19;                                                  // 0x00131960: addiu $a1, $zero, 0x19
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00131964: lw $a0, 8($s0)
    func_00130468();  // 0x130458                                // 0x0013196c: jal 0x130458
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00131974: lw $a0, 8($s0)
    func_001302c8();  // 0x130280                                // 0x00131978: jal 0x130280
    func_00130408();  // 0x1303a0                                // 0x00131980: jal 0x1303a0
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00131984: lw $a0, 8($s0)
    func_00130220();  // 0x1301e0                                // 0x00131988: jal 0x1301e0
    a0 = *(int32_t*)((s0) + 8);                                 // 0x0013198c: lw $a0, 8($s0)
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00131990: lw $a0, 8($s0)
    func_001301a8();  // 0x130138                                // 0x001319a0: jal 0x130138
    func_00130358();  // 0x130318                                // 0x001319a8: jal 0x130318
    a0 = *(int32_t*)((s0) + 8);                                 // 0x001319ac: lw $a0, 8($s0)
    a1 = g_002237d8;  // Global at 0x002237d8                   // 0x001319b4: lw $a1, 0x10($a0)
    return func_00131910();  // Tail call                        // 0x001319d0: j 0x131820
    sp = sp + 0x30;                                             // 0x001319d4: addiu $sp, $sp, 0x30
    sp = sp + -0x20;                                            // 0x001319d8: addiu $sp, $sp, -0x20
    if (s0 == 0) goto label_0x1319fc;                           // 0x001319ec: beqz $s0, 0x1319fc
    if (s1 != 0) goto label_0x131a18;                           // 0x001319f4: bnez $s1, 0x131a18
    /* nop */                                                   // 0x001319f8: nop 
label_0x1319fc:
    a0 = 0x22 << 16;                                            // 0x001319fc: lui $a0, 0x22
    a0 = &str_00223778;  // "E02080813 ADXT_Stop: parameter error" // 0x00131a08: addiu $a0, $a0, 0x3778
    return func_00127de8();  // Tail call                        // 0x00131a10: j 0x127d90
    sp = sp + 0x20;                                             // 0x00131a14: addiu $sp, $sp, 0x20
label_0x131a18:
    func_00131bb8();  // 0x131af8                                // 0x00131a18: jal 0x131af8
    /* nop */                                                   // 0x00131a1c: nop 
    func_001261b8();  // 0x1261a0                                // 0x00131a20: jal 0x1261a0
    /* nop */                                                   // 0x00131a24: nop 
    func_00131910();  // 0x131820                                // 0x00131a2c: jal 0x131820
    v0 = 3;                                                     // 0x00131a34: addiu $v0, $zero, 3
    v1 = 1;                                                     // 0x00131a38: addiu $v1, $zero, 1
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x00131a3c: sb $v0, 2($s0)
    *(uint8_t*)((s0) + 0x98) = v1;                              // 0x00131a40: sb $v1, 0x98($s0)
    return func_001261d0();  // Tail call                        // 0x00131a50: j 0x1261b8
    sp = sp + 0x20;                                             // 0x00131a54: addiu $sp, $sp, 0x20
label_0x131a58:
    sp = sp + -0x10;                                            // 0x00131a58: addiu $sp, $sp, -0x10
    func_001261b8();  // 0x1261a0                                // 0x00131a64: jal 0x1261a0
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x00131a6c: lw $a0, 0xc($s0)
    func_0012c3c0();  // 0x12c3a8                                // 0x00131a70: jal 0x12c3a8
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x00131a78: lw $a0, 0xc($s0)
    func_0012c3d8();  // 0x12c3c0                                // 0x00131a7c: jal 0x12c3c0
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x00131a84: lw $a0, 0xc($s0)
    func_0013e920();  // 0x13e918                                // 0x00131a88: jal 0x13e918
    a1 = 1;                                                     // 0x00131a8c: addiu $a1, $zero, 1
    func_0012c9a0();  // 0x12c970                                // 0x00131a90: jal 0x12c970
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00131a94: lw $a0, 4($s0)
    v1 = *(int8_t*)((s0) + 2);                                  // 0x00131a98: lb $v1, 2($s0)
    v0 = 2;                                                     // 0x00131a9c: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x131acc;                          // 0x00131aa0: bnel $v1, $v0, 0x131acc
    a0 = *(int32_t*)((s0) + 0x74);                              // 0x00131aa4: lw $a0, 0x74($s0)
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x00131aa8: lw $a0, 0x14($s0)
    /* beqzl $a0, 0x131acc */                                   // 0x00131aac: beqzl $a0, 0x131acc
    a0 = *(int32_t*)((s0) + 0x74);                              // 0x00131ab0: lw $a0, 0x74($s0)
    v1 = str_00223778;  // "E02080813 ADXT_Stop: parameter error" // 0x00131ab4: lw $v1, 0($a0)
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x00131ab8: sw $zero, 0x14($s0)
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x00131abc: lw $v0, 0xc($v1)
    /* call function at address in v0 */                        // 0x00131ac0: jalr $v0
    /* nop */                                                   // 0x00131ac4: nop 
    a0 = *(int32_t*)((s0) + 0x74);                              // 0x00131ac8: lw $a0, 0x74($s0)
label_0x131acc:
    /* beqzl $a0, 0x131ae0 */                                   // 0x00131acc: beqzl $a0, 0x131ae0
    *(uint8_t*)((s0) + 0xac) = 0;                               // 0x00131ad0: sb $zero, 0xac($s0)
    func_001227b0();  // 0x1227a8                                // 0x00131ad4: jal 0x1227a8
    /* nop */                                                   // 0x00131ad8: nop 
    *(uint8_t*)((s0) + 0xac) = 0;                               // 0x00131adc: sb $zero, 0xac($s0)
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x00131ae0: sw $zero, 0x14($s0)
    *(uint8_t*)((s0) + 1) = 0;                                  // 0x00131ae4: sb $zero, 1($s0)
    return func_001261d0();  // Tail call                        // 0x00131af0: j 0x1261b8
    sp = sp + 0x10;                                             // 0x00131af4: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x00131af8: addiu $sp, $sp, -0x20
    if (s0 != 0) goto label_0x131b30;                           // 0x00131b08: bnez $s0, 0x131b30
    a0 = 0x22 << 16;                                            // 0x00131b10: lui $a0, 0x22
    a0 = &str_002237a0;  // "E02080814 ADXT_GetStat: parameter error" // 0x00131b1c: addiu $a0, $a0, 0x37a0
    return func_00127de8();  // Tail call                        // 0x00131b24: j 0x127d90
    sp = sp + 0x20;                                             // 0x00131b28: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00131b2c: nop 
label_0x131b30:
    v0 = 0x20 << 16;                                            // 0x00131b30: lui $v0, 0x20
    s1 = v0 + 0x1d98;                                           // 0x00131b34: addiu $s1, $v0, 0x1d98
    v1 = g_00201d98;  // Global at 0x00201d98                   // 0x00131b38: lw $v1, 0($s1)
    /* beqzl $v1, 0x131b5c */                                   // 0x00131b3c: beqzl $v1, 0x131b5c
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00131b40: lw $a0, 8($s0)
    func_0012c9a0();  // 0x12c970                                // 0x00131b44: jal 0x12c970
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00131b48: lw $a0, 4($s0)
    v0 = g_00201d98;  // Global at 0x00201d98                   // 0x00131b4c: lw $v0, 0($s1)
    /* call function at address in v0 */                        // 0x00131b50: jalr $v0
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00131b58: lw $a0, 8($s0)
    /* beqzl $a0, 0x131b70 */                                   // 0x00131b5c: beqzl $a0, 0x131b70
    v1 = *(int8_t*)((s0) + 2);                                  // 0x00131b60: lb $v1, 2($s0)
    func_00130220();  // 0x1301e0                                // 0x00131b64: jal 0x1301e0
    /* nop */                                                   // 0x00131b68: nop 
    v1 = *(int8_t*)((s0) + 2);                                  // 0x00131b6c: lb $v1, 2($s0)
    v0 = 4;                                                     // 0x00131b70: addiu $v0, $zero, 4
    if (v1 != v0) goto label_0x131ba4;                          // 0x00131b74: bnel $v1, $v0, 0x131ba4
    func_0013ccc0();  // 0x13cc38                                // 0x00131b7c: jal 0x13cc38
    a0 = *(int32_t*)((s0) + 0x94);                              // 0x00131b80: lw $a0, 0x94($s0)
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x00131b84: lw $v0, 0x14($s0)
    if (v0 == 0) goto label_0x131ba0;                           // 0x00131b88: beqz $v0, 0x131ba0
    v0 = g_00200000;  // Global at 0x00200000                   // 0x00131b90: lw $v0, 0($v0)
    v1 = g_00200014;  // Global at 0x00200014                   // 0x00131b94: lw $v1, 0x14($v0)
    /* call function at address in v1 */                        // 0x00131b98: jalr $v1
    /* nop */                                                   // 0x00131b9c: nop 
label_0x131ba0:
label_0x131ba4:
    goto label_0x131a58;                                        // 0x00131bb0: j 0x131a58
    sp = sp + 0x20;                                             // 0x00131bb4: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x00131bb8: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x131bd8;                           // 0x00131bbc: bnez $a0, 0x131bd8
    a0 = 0x22 << 16;                                            // 0x00131bc4: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x00131bc8: jal 0x127d90
    a0 = &str_002237c8;  // "E02080815 ADXT_GetTime: parameter error" // 0x00131bcc: addiu $a0, $a0, 0x37c8
    goto label_0x131bdc;                                        // 0x00131bd0: b 0x131bdc
    v0 = -1;                                                    // 0x00131bd4: addiu $v0, $zero, -1
label_0x131bd8:
    v0 = g_002237c9;  // Global at 0x002237c9                   // 0x00131bd8: lb $v0, 1($a0)
label_0x131bdc:
    return;                                                     // 0x00131be0: jr $ra
    sp = sp + 0x10;                                             // 0x00131be4: addiu $sp, $sp, 0x10
}