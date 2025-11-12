void func_001ae770() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001ae770: lui $at, 0x31
    a1 = 0x31 << 16;                                            // 0x001ae774: lui $a1, 0x31
    v1 = g_003137cc;  // Global at 0x003137cc                   // 0x001ae778: lbu $v1, 0x37cc($at)
    at = (v1 < 6) ? 1 : 0;                                      // 0x001ae77c: slti $at, $v1, 6
    if (at != 0) goto label_0x1ae78c;                           // 0x001ae780: bnez $at, 0x1ae78c
    a1 = a1 + 0x37a0;                                           // 0x001ae784: addiu $a1, $a1, 0x37a0
    g_003137cc = 0;  // Global at 0x003137cc                    // 0x001ae788: sb $zero, 0x2c($a1)
label_0x1ae78c:
    v1 = g_003137cf;  // Global at 0x003137cf                   // 0x001ae78c: lbu $v1, 0x2f($a1)
    v1 = v1 & 1;                                                // 0x001ae790: andi $v1, $v1, 1
    g_003137cf = v1;  // Global at 0x003137cf                   // 0x001ae794: sb $v1, 0x2f($a1)
    v1 = g_003137a5;  // Global at 0x003137a5                   // 0x001ae798: lbu $v1, 5($a1)
    v1 = v1 & 1;                                                // 0x001ae79c: andi $v1, $v1, 1
    g_003137a5 = v1;  // Global at 0x003137a5                   // 0x001ae7a0: sb $v1, 5($a1)
    v1 = g_003137a9;  // Global at 0x003137a9                   // 0x001ae7a4: lbu $v1, 9($a1)
    at = (v1 < 8) ? 1 : 0;                                      // 0x001ae7a8: slti $at, $v1, 8
    if (at != 0) goto label_0x1ae7b8;                           // 0x001ae7ac: bnez $at, 0x1ae7b8
    v1 = 7;                                                     // 0x001ae7b0: addiu $v1, $zero, 7
    g_003137a9 = v1;  // Global at 0x003137a9                   // 0x001ae7b4: sb $v1, 9($a1)
label_0x1ae7b8:
    v1 = g_003137aa;  // Global at 0x003137aa                   // 0x001ae7b8: lbu $v1, 0xa($a1)
    at = (v1 < 8) ? 1 : 0;                                      // 0x001ae7bc: slti $at, $v1, 8
    if (at != 0) goto label_0x1ae7cc;                           // 0x001ae7c0: bnez $at, 0x1ae7cc
    v1 = 7;                                                     // 0x001ae7c4: addiu $v1, $zero, 7
    g_003137aa = v1;  // Global at 0x003137aa                   // 0x001ae7c8: sb $v1, 0xa($a1)
label_0x1ae7cc:
    a0 = g_003137cd;  // Global at 0x003137cd                   // 0x001ae7cc: lb $a0, 0x2d($a1)
    v1 = (a0 < -0xa) ? 1 : 0;                                   // 0x001ae7d0: slti $v1, $a0, -0xa
    if (v1 != 0) goto label_0x1ae7e4;                           // 0x001ae7d4: bnez $v1, 0x1ae7e4
    at = (a0 < 0xb) ? 1 : 0;                                    // 0x001ae7d8: slti $at, $a0, 0xb
    if (at != 0) goto label_0x1ae7e8;                           // 0x001ae7dc: bnez $at, 0x1ae7e8
    /* nop */                                                   // 0x001ae7e0: nop 
label_0x1ae7e4:
    g_003137cd = 0;  // Global at 0x003137cd                    // 0x001ae7e4: sb $zero, 0x2d($a1)
label_0x1ae7e8:
    a0 = g_003137ce;  // Global at 0x003137ce                   // 0x001ae7e8: lb $a0, 0x2e($a1)
    v1 = (a0 < -0xa) ? 1 : 0;                                   // 0x001ae7ec: slti $v1, $a0, -0xa
    if (v1 != 0) goto label_0x1ae800;                           // 0x001ae7f0: bnez $v1, 0x1ae800
    at = (a0 < 0xb) ? 1 : 0;                                    // 0x001ae7f4: slti $at, $a0, 0xb
    if (at != 0) goto label_0x1ae804;                           // 0x001ae7f8: bnez $at, 0x1ae804
    /* nop */                                                   // 0x001ae7fc: nop 
label_0x1ae800:
    g_003137ce = 0;  // Global at 0x003137ce                    // 0x001ae800: sb $zero, 0x2e($a1)
label_0x1ae804:
    a0 = g_003137d0;  // Global at 0x003137d0                   // 0x001ae804: lbu $a0, 0x30($a1)
    v1 = (a0 < 0x38) ? 1 : 0;                                   // 0x001ae808: slti $v1, $a0, 0x38
    if (v1 != 0) goto label_0x1ae820;                           // 0x001ae80c: bnez $v1, 0x1ae820
    v1 = 0x80;                                                  // 0x001ae810: addiu $v1, $zero, 0x80
    at = (a0 < 0xa5) ? 1 : 0;                                   // 0x001ae814: slti $at, $a0, 0xa5
    if (at != 0) goto label_0x1ae824;                           // 0x001ae818: bnez $at, 0x1ae824
    /* nop */                                                   // 0x001ae81c: nop 
label_0x1ae820:
    g_003137d0 = v1;  // Global at 0x003137d0                   // 0x001ae820: sb $v1, 0x30($a1)
label_0x1ae824:
    return;                                                     // 0x001ae824: jr $ra
    /* nop */                                                   // 0x001ae828: nop 
}