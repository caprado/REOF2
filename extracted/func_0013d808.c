void func_0013d808() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x20 << 16;                                            // 0x0013d808: lui $v0, 0x20
    sp = sp + -0x50;                                            // 0x0013d80c: addiu $sp, $sp, -0x50
    v1 = g_00207a40;  // Global at 0x00207a40                   // 0x0013d810: lw $v1, 0x7a40($v0)
    if (v1 != 0) goto label_0x13d860;                           // 0x0013d838: bnez $v1, 0x13d860
    v0 = 4 << 16;                                               // 0x0013d840: lui $v0, 4
    s5 = 0x20 << 16;                                            // 0x0013d844: lui $s5, 0x20
    v1 = 0x10;                                                  // 0x0013d848: addiu $v1, $zero, 0x10
    a0 = 0x20 << 16;                                            // 0x0013d84c: lui $a0, 0x20
    v0 = v0 | 0x1000;                                           // 0x0013d850: ori $v0, $v0, 0x1000
    g_00207a38 = v1;  // Global at 0x00207a38                   // 0x0013d854: sw $v1, 0x7a38($s5)
    goto label_0x13d864;                                        // 0x0013d858: b 0x13d864
    g_00207a3c = v0;  // Global at 0x00207a3c                   // 0x0013d85c: sw $v0, 0x7a3c($a0)
label_0x13d860:
    s5 = 0x20 << 16;                                            // 0x0013d860: lui $s5, 0x20
label_0x13d864:
    s3 = 0x20 << 16;                                            // 0x0013d864: lui $s3, 0x20
    s0 = s3 + 0x7a44;                                           // 0x0013d868: addiu $s0, $s3, 0x7a44
    v0 = g_00207a44;  // Global at 0x00207a44                   // 0x0013d86c: lw $v0, 0($s0)
    /* bnezl $v0, 0x13d908 */                                   // 0x0013d870: bnezl $v0, 0x13d908
    s0 = 0x20 << 16;                                            // 0x0013d874: lui $s0, 0x20
    s2 = 0x20 << 16;                                            // 0x0013d878: lui $s2, 0x20
    s1 = s2 + 0x7a3c;                                           // 0x0013d87c: addiu $s1, $s2, 0x7a3c
    a0 = g_00207a3c;  // Global at 0x00207a3c                   // 0x0013d880: lw $a0, 0($s1)
    func_0011b570();  // 11b570                                // 0x0013d884: jal 0x11b570
    a0 = a0 + 0x40;                                             // 0x0013d888: addiu $a0, $a0, 0x40
    if (v0 != 0) goto label_0x13d8c8;                           // 0x0013d88c: bnez $v0, 0x13d8c8
    g_00200000 = v0;  // Global at 0x00200000                   // 0x0013d890: sw $v0, 0($s0)
    a1 = g_00207a3c;  // Global at 0x00207a3c                   // 0x0013d894: lw $a1, 0($s1)
    a0 = 0x22 << 16;                                            // 0x0013d898: lui $a0, 0x22
    a0 = &str_00225e00;  // "PS2RNA: sceSifAllocIopHeap(%d) ret=0x%08x\n" // 0x0013d89c: addiu $a0, $a0, 0x5e00
    func_00116508();  // 116508                                // 0x0013d8a0: jal 0x116508
    a1 = a1 + 0x40;                                             // 0x0013d8a4: addiu $a1, $a1, 0x40
label_0x13d8a8:
    /* nop */                                                   // 0x0013d8a8: nop 
    /* nop */                                                   // 0x0013d8ac: nop 
    /* nop */                                                   // 0x0013d8b0: nop 
    /* nop */                                                   // 0x0013d8b4: nop 
    /* nop */                                                   // 0x0013d8b8: nop 
    goto label_0x13d8a8;                                        // 0x0013d8bc: b 0x13d8a8
    /* nop */                                                   // 0x0013d8c0: nop 
    /* nop */                                                   // 0x0013d8c4: nop 
label_0x13d8c8:
    s0 = s3 + 0x7a44;                                           // 0x0013d8c8: addiu $s0, $s3, 0x7a44
    a1 = g_00207a3c;  // Global at 0x00207a3c                   // 0x0013d8cc: lw $a1, 0x7a3c($s2)
    a2 = g_00207a44;  // Global at 0x00207a44                   // 0x0013d8d0: lw $a2, 0($s0)
    a0 = 0x22 << 16;                                            // 0x0013d8d4: lui $a0, 0x22
    a0 = &str_00225e48;  // "E0110101: ps2rna_init_psj wk size error\n" // 0x0013d8d8: addiu $a0, $a0, 0x5e48
    func_00116508();  // 116508                                // 0x0013d8dc: jal 0x116508
    a1 = a1 + 0x40;                                             // 0x0013d8e0: addiu $a1, $a1, 0x40
    v1 = g_00207a44;  // Global at 0x00207a44                   // 0x0013d8e4: lw $v1, 0($s0)
    a1 = -0x40;                                                 // 0x0013d8e8: addiu $a1, $zero, -0x40
    a0 = 0x20 << 16;                                            // 0x0013d8ec: lui $a0, 0x20
    v1 = v1 + 0x40;                                             // 0x0013d8f0: addiu $v1, $v1, 0x40
    s0 = 0x20 << 16;                                            // 0x0013d8f4: lui $s0, 0x20
    v1 = v1 & a1;                                               // 0x0013d8f8: and $v1, $v1, $a1
    v0 = 1;                                                     // 0x0013d8fc: addiu $v0, $zero, 1
    g_00207a4c = v0;  // Global at 0x00207a4c                   // 0x0013d900: sb $v0, 0x7a4c($a0)
    g_00207a48 = v1;  // Global at 0x00207a48                   // 0x0013d904: sw $v1, 0x7a48($s0)
    s4 = 0x20 << 16;                                            // 0x0013d908: lui $s4, 0x20
    a0 = s4 + 0x7a80;                                           // 0x0013d910: addiu $a0, $s4, 0x7a80
    func_00107c70();  // 107c70                                // 0x0013d914: jal 0x107c70
    a2 = 0x300;                                                 // 0x0013d918: addiu $a2, $zero, 0x300
    s1 = g_00207a48;  // Global at 0x00207a48                   // 0x0013d91c: lw $s1, 0x7a48($s0)
    v0 = g_00207a38;  // Global at 0x00207a38                   // 0x0013d920: lw $v0, 0x7a38($s5)
    if (v0 <= 0) goto label_0x13dad0;                           // 0x0013d924: blez $v0, 0x13dad0
    s6 = 0x20 << 16;                                            // 0x0013d92c: lui $s6, 0x20
    fp = 0x22 << 16;                                            // 0x0013d934: lui $fp, 0x22
    s7 = 0x22 << 16;                                            // 0x0013d938: lui $s7, 0x22
    v0 = s4 + 0x7a80;                                           // 0x0013d93c: addiu $v0, $s4, 0x7a80
label_0x13d940:
    v1 = s1 & 0x3f;                                             // 0x0013d940: andi $v1, $s1, 0x3f
    s0 = s3 + v0;                                               // 0x0013d944: addu $s0, $s3, $v0
    s3 = s3 + 0x18;                                             // 0x0013d948: addiu $s3, $s3, 0x18
    if (v1 == 0) goto label_0x13d980;                           // 0x0013d94c: beqz $v1, 0x13d980
    g_00200000 = 0;  // Global at 0x00200000                    // 0x0013d950: sb $zero, 0($s0)
    v0 = 0x22 << 16;                                            // 0x0013d954: lui $v0, 0x22
    func_00116508();  // 116508                                // 0x0013d958: jal 0x116508
    a0 = &str_00225e78;  // "E0110102: ps2rna_init_psj: can't creat SJUNI_CreaetRmt\n" // 0x0013d95c: addiu $a0, $v0, 0x5e78
label_0x13d960:
    /* nop */                                                   // 0x0013d960: nop 
    /* nop */                                                   // 0x0013d964: nop 
    /* nop */                                                   // 0x0013d968: nop 
    /* nop */                                                   // 0x0013d96c: nop 
    /* nop */                                                   // 0x0013d970: nop 
    goto label_0x13d960;                                        // 0x0013d974: b 0x13d960
    /* nop */                                                   // 0x0013d978: nop 
    /* nop */                                                   // 0x0013d97c: nop 
label_0x13d980:
    s1 = s1 + 0x100;                                            // 0x0013d984: addiu $s1, $s1, 0x100
    a0 = 1;                                                     // 0x0013d988: addiu $a0, $zero, 1
    func_00140858();  // 140858                                // 0x0013d98c: jal 0x140858
    a2 = 0x100;                                                 // 0x0013d990: addiu $a2, $zero, 0x100
    v1 = s2 << 8;                                               // 0x0013d994: sll $v1, $s2, 8
    a1 = s6 + 0x7d80;                                           // 0x0013d998: addiu $a1, $s6, 0x7d80
    a0 = 1;                                                     // 0x0013d99c: addiu $a0, $zero, 1
    a1 = v1 + a1;                                               // 0x0013d9a0: addu $a1, $v1, $a1
    v1 = s1 & 0x3f;                                             // 0x0013d9a4: andi $v1, $s1, 0x3f
    s2 = s2 + 1;                                                // 0x0013d9a8: addiu $s2, $s2, 1
    a2 = 0x100;                                                 // 0x0013d9ac: addiu $a2, $zero, 0x100
    if (v0 != 0) goto label_0x13d9e8;                           // 0x0013d9b0: bnez $v0, 0x13d9e8
    g_00200004 = v0;  // Global at 0x00200004                   // 0x0013d9b4: sw $v0, 4($s0)
    v0 = 0x22 << 16;                                            // 0x0013d9b8: lui $v0, 0x22
    func_00116508();  // 116508                                // 0x0013d9bc: jal 0x116508
    a0 = &str_00225ea8;  // "E0110103: ps2rna_init_psj: wk size error\n" // 0x0013d9c0: addiu $a0, $v0, 0x5ea8
    /* nop */                                                   // 0x0013d9c4: nop 
label_0x13d9c8:
    /* nop */                                                   // 0x0013d9c8: nop 
    /* nop */                                                   // 0x0013d9cc: nop 
    /* nop */                                                   // 0x0013d9d0: nop 
    /* nop */                                                   // 0x0013d9d4: nop 
    /* nop */                                                   // 0x0013d9d8: nop 
    goto label_0x13d9c8;                                        // 0x0013d9dc: b 0x13d9c8
    /* nop */                                                   // 0x0013d9e0: nop 
    /* nop */                                                   // 0x0013d9e4: nop 
label_0x13d9e8:
    if (v1 == 0) goto label_0x13da18;                           // 0x0013d9e8: beqz $v1, 0x13da18
    v0 = 0x22 << 16;                                            // 0x0013d9ec: lui $v0, 0x22
    func_00116508();  // 116508                                // 0x0013d9f0: jal 0x116508
    a0 = &str_00225ee0;  // "E0110104: ps2rna_init_psj: can't creat SJUNI_Creaet\n" // 0x0013d9f4: addiu $a0, $v0, 0x5ee0
label_0x13d9f8:
    /* nop */                                                   // 0x0013d9f8: nop 
    /* nop */                                                   // 0x0013d9fc: nop 
    /* nop */                                                   // 0x0013da00: nop 
    /* nop */                                                   // 0x0013da04: nop 
    /* nop */                                                   // 0x0013da08: nop 
    goto label_0x13d9f8;                                        // 0x0013da0c: b 0x13d9f8
    /* nop */                                                   // 0x0013da10: nop 
    /* nop */                                                   // 0x0013da14: nop 
label_0x13da18:
    func_0013fd80();  // 13fd80                                // 0x0013da18: jal 0x13fd80
    /* nop */                                                   // 0x0013da1c: nop 
    v1 = 0x4000;                                                // 0x0013da20: addiu $v1, $zero, 0x4000
    g_00200008 = v0;  // Global at 0x00200008                   // 0x0013da24: sw $v0, 8($s0)
    if (v0 != 0) goto label_0x13da60;                           // 0x0013da2c: bnez $v0, 0x13da60
    a2 = s0 + 0x10;                                             // 0x0013da30: addiu $a2, $s0, 0x10
    func_00116508();  // 116508                                // 0x0013da34: jal 0x116508
    a0 = &str_00225f10;  // "E0110105: ps2rna_init_psj: can't creat SJX_Create\n" // 0x0013da38: addiu $a0, $fp, 0x5f10
    /* nop */                                                   // 0x0013da3c: nop 
label_0x13da40:
    /* nop */                                                   // 0x0013da40: nop 
    /* nop */                                                   // 0x0013da44: nop 
    /* nop */                                                   // 0x0013da48: nop 
    /* nop */                                                   // 0x0013da4c: nop 
    /* nop */                                                   // 0x0013da50: nop 
    goto label_0x13da40;                                        // 0x0013da54: b 0x13da40
    /* nop */                                                   // 0x0013da58: nop 
    /* nop */                                                   // 0x0013da5c: nop 
label_0x13da60:
    a0 = g_00200008;  // Global at 0x00200008                   // 0x0013da60: lw $a0, 8($s0)
    g_00200014 = v1;  // Global at 0x00200014                   // 0x0013da64: sw $v1, 0x14($s0)
    v1 = str_00225f10;  // "E0110105: ps2rna_init_psj: can't creat SJX_Create\n" // 0x0013da68: lw $v1, 0($a0)
    g_00200010 = s1;  // Global at 0x00200010                   // 0x0013da6c: sw $s1, 0x10($s0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0013da70: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0013da74: jalr $v0
    s1 = s1 + 0x4000;                                           // 0x0013da78: addiu $s1, $s1, 0x4000
    a0 = g_00200008;  // Global at 0x00200008                   // 0x0013da7c: lw $a0, 8($s0)
    a1 = g_00200004;  // Global at 0x00200004                   // 0x0013da80: lw $a1, 4($s0)
    func_00141150();  // 141150                                // 0x0013da84: jal 0x141150
    a2 = 1;                                                     // 0x0013da88: addiu $a2, $zero, 1
    if (v0 != 0) goto label_0x13dac0;                           // 0x0013da8c: bnez $v0, 0x13dac0
    g_0020000c = v0;  // Global at 0x0020000c                   // 0x0013da90: sw $v0, 0xc($s0)
    func_00116508();  // 116508                                // 0x0013da94: jal 0x116508
    a0 = &str_00225f48;  // "PS2RNA: E01112902: Failed, sceSifAllocIopHeap(%d) in PS2RNA_Init." // 0x0013da98: addiu $a0, $s7, 0x5f48
    /* nop */                                                   // 0x0013da9c: nop 
label_0x13daa0:
    /* nop */                                                   // 0x0013daa0: nop 
    /* nop */                                                   // 0x0013daa4: nop 
    /* nop */                                                   // 0x0013daa8: nop 
    /* nop */                                                   // 0x0013daac: nop 
    /* nop */                                                   // 0x0013dab0: nop 
    goto label_0x13daa0;                                        // 0x0013dab4: b 0x13daa0
    /* nop */                                                   // 0x0013dab8: nop 
    /* nop */                                                   // 0x0013dabc: nop 
label_0x13dac0:
    v0 = g_00207a38;  // Global at 0x00207a38                   // 0x0013dac0: lw $v0, 0x7a38($s5)
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x0013dac4: slt $v0, $s2, $v0
    if (v0 != 0) goto label_0x13d940;                           // 0x0013dac8: bnez $v0, 0x13d940
    v0 = s4 + 0x7a80;                                           // 0x0013dacc: addiu $v0, $s4, 0x7a80
label_0x13dad0:
    return;                                                     // 0x0013daf8: jr $ra
    sp = sp + 0x50;                                             // 0x0013dafc: addiu $sp, $sp, 0x50
}