void func_00189e20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x00189e20: addiu $sp, $sp, -0xa0
    a2 = 0x20;                                                  // 0x00189e24: addiu $a2, $zero, 0x20
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x00189e30: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x00189e38: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00189e48: addu.qb $zero, $sp, $s1
    a0 = sp + 0x80;                                             // 0x00189e4c: addiu $a0, $sp, 0x80
    s0 = g_0010004c;  // Global at 0x0010004c                   // 0x00189e58: lw $s0, 0x4c($a1)
    func_0018da10();  // 0x18d9e0                                // 0x00189e60: jal 0x18d9e0
    a3 = *(int32_t*)((s4) + 8);                                 // 0x00189e68: lw $a3, 8($s4)
    t5 = -1;                                                    // 0x00189e6c: addiu $t5, $zero, -1
    t0 = *(int32_t*)((s4) + 4);                                 // 0x00189e70: lw $t0, 4($s4)
    v0 = 0x21 << 16;                                            // 0x00189e74: lui $v0, 0x21
    a1 = 0x10 << 16;                                            // 0x00189e90: lui $a1, 0x10
    a0 = 0x20 << 16;                                            // 0x00189e94: lui $a0, 0x20
    v1 = 1;                                                     // 0x00189e98: addiu $v1, $zero, 1
    v0 = v0 + 0x6360;                                           // 0x00189e9c: addiu $v0, $v0, 0x6360
    *(uint32_t*)((s3) + 0x40) = 0;                              // 0x00189ea0: sw $zero, 0x40($s3)
    *(uint32_t*)((s3) + 0x3c) = 0;                              // 0x00189ea4: sw $zero, 0x3c($s3)
    *(uint32_t*)((s3) + 0x44) = 0;                              // 0x00189ea8: sw $zero, 0x44($s3)
    a2 = *(int32_t*)((s0) + 0x20);                              // 0x00189eac: lw $a2, 0x20($s0)
    goto label_0x18a000;                                        // 0x00189eb0: b 0x18a000
    t6 = a2 + 0x20;                                             // 0x00189eb4: addiu $t6, $a2, 0x20
label_0x189eb8:
    t7 = g_00216340;  // Global at 0x00216340                   // 0x00189eb8: lhu $t7, 0($a3)
    a2 = *(int32_t*)((s3) + 0x40);                              // 0x00189ebc: lw $a2, 0x40($s3)
    t9 = t7 & 0x3fff;                                           // 0x00189ec0: andi $t9, $t7, 0x3fff
    a2 = a2 + t9;                                               // 0x00189ec4: addu $a2, $a2, $t9
    t7 = t9 + -2;                                               // 0x00189ec8: addiu $t7, $t9, -2
    *(uint32_t*)((s3) + 0x40) = a2;                             // 0x00189ecc: sw $a2, 0x40($s3)
    a2 = *(int32_t*)((s3) + 0x3c);                              // 0x00189ed0: lw $a2, 0x3c($s3)
    a2 = a2 + t7;                                               // 0x00189ed4: addu $a2, $a2, $t7
    *(uint32_t*)((s3) + 0x3c) = a2;                             // 0x00189ed8: sw $a2, 0x3c($s3)
    t7 = *(int32_t*)(s4);                                       // 0x00189edc: lw $t7, 0($s4)
    a2 = t7 & a1;                                               // 0x00189ee0: and $a2, $t7, $a1
    if (a2 == 0) goto label_0x189ef4;                           // 0x00189ee4: beqz $a2, 0x189ef4
    a3 = a3 + 2;                                                // 0x00189ee8: addiu $a3, $a3, 2
    t4 = g_00216342;  // Global at 0x00216342                   // 0x00189eec: lhu $t4, 0($a3)
    a3 = a3 + 2;                                                // 0x00189ef0: addiu $a3, $a3, 2
label_0x189ef4:
    a2 = t7 & a0;                                               // 0x00189ef4: and $a2, $t7, $a0
    if (a2 == 0) goto label_0x189f08;                           // 0x00189ef8: beqz $a2, 0x189f08
    a2 = t7 & 0x1000;                                           // 0x00189efc: andi $a2, $t7, 0x1000
    t1 = g_00216344;  // Global at 0x00216344                   // 0x00189f00: lhu $t1, 0($a3)
    a3 = a3 + 2;                                                // 0x00189f04: addiu $a3, $a3, 2
label_0x189f08:
    if (a2 == 0) goto label_0x189f1c;                           // 0x00189f08: beqz $a2, 0x189f1c
    /* nop */                                                   // 0x00189f0c: nop 
    a2 = t9 & 0xffff;                                           // 0x00189f10: andi $a2, $t9, 0xffff
    a2 = a2 << 1;                                               // 0x00189f14: sll $a2, $a2, 1
    a3 = a3 + a2;                                               // 0x00189f18: addu $a3, $a3, $a2
label_0x189f1c:
    if (t5 == t4) goto label_0x189f5c;                          // 0x00189f1c: beq $t5, $t4, 0x189f5c
    /* nop */                                                   // 0x00189f20: nop 
    if (t3 == 0) goto label_0x189f38;                           // 0x00189f24: beqz $t3, 0x189f38
    a2 = t4 + sp;                                               // 0x00189f28: addu $a2, $t4, $sp
    s1 = s1 + t8;                                               // 0x00189f2c: addu $s1, $s1, $t8
    s2 = s2 + s1;                                               // 0x00189f34: addu $s2, $s2, $s1
label_0x189f38:
    *(uint8_t*)((a2) + 0x80) = v1;                              // 0x00189f3c: sb $v1, 0x80($a2)
    a2 = *(int32_t*)((s3) + 0x44);                              // 0x00189f44: lw $a2, 0x44($s3)
    s1 = 0x30;                                                  // 0x00189f48: addiu $s1, $zero, 0x30
    t8 = 0x20;                                                  // 0x00189f4c: addiu $t8, $zero, 0x20
    a2 = a2 + 1;                                                // 0x00189f50: addiu $a2, $a2, 1
    goto label_0x189f94;                                        // 0x00189f54: b 0x189f94
    *(uint32_t*)((s3) + 0x44) = a2;                             // 0x00189f58: sw $a2, 0x44($s3)
label_0x189f5c:
    if (t2 == t1) goto label_0x189f94;                          // 0x00189f5c: beq $t2, $t1, 0x189f94
    /* nop */                                                   // 0x00189f60: nop 
    if (t3 == 0) goto label_0x189f8c;                           // 0x00189f64: beqz $t3, 0x189f8c
    s1 = s1 + t8;                                               // 0x00189f6c: addu $s1, $s1, $t8
    a2 = s1 + t6;                                               // 0x00189f70: addu $a2, $s1, $t6
    a2 = ((unsigned)a2 < (unsigned)a1) ? 1 : 0;                 // 0x00189f74: sltu $a2, $a2, $a1
    if (a2 != 0) goto label_0x189f88;                           // 0x00189f78: bnez $a2, 0x189f88
    s2 = s2 + s1;                                               // 0x00189f80: addu $s2, $s2, $s1
    s1 = 0x10;                                                  // 0x00189f84: addiu $s1, $zero, 0x10
label_0x189f88:
label_0x189f8c:
    s1 = s1 + 0x20;                                             // 0x00189f8c: addiu $s1, $s1, 0x20
    t8 = 0x20;                                                  // 0x00189f90: addiu $t8, $zero, 0x20
label_0x189f94:
    if (t9 <= 0) goto label_0x189ffc;                           // 0x00189f94: blez $t9, 0x189ffc
    /* nop */                                                   // 0x00189f98: nop 
    t7 = *(int32_t*)((s0) + 0x18);                              // 0x00189f9c: lw $t7, 0x18($s0)
    a2 = *(int32_t*)((s0) + 0x20);                              // 0x00189fa0: lw $a2, 0x20($s0)
    t7 = t7 << 3;                                               // 0x00189fa4: sll $t7, $t7, 3
    t7 = v0 + t7;                                               // 0x00189fa8: addu $t7, $v0, $t7
    t7 = *(int32_t*)(t7);                                       // 0x00189fac: lw $t7, 0($t7)
label_0x189fb0:
    s6 = t8 + t7;                                               // 0x00189fb0: addu $s6, $t8, $t7
    s6 = ((unsigned)s6 < (unsigned)a2) ? 1 : 0;                 // 0x00189fb4: sltu $s6, $s6, $a2
    if (s6 != 0) goto label_0x189fe8;                           // 0x00189fb8: bnez $s6, 0x189fe8
    /* nop */                                                   // 0x00189fbc: nop 
    s1 = s1 + t8;                                               // 0x00189fc0: addu $s1, $s1, $t8
    t3 = s1 + t6;                                               // 0x00189fc4: addu $t3, $s1, $t6
    t3 = ((unsigned)t3 < (unsigned)a1) ? 1 : 0;                 // 0x00189fc8: sltu $t3, $t3, $a1
    if (t3 != 0) goto label_0x189fdc;                           // 0x00189fcc: bnez $t3, 0x189fdc
    /* nop */                                                   // 0x00189fd0: nop 
    s2 = s2 + s1;                                               // 0x00189fd4: addu $s2, $s2, $s1
    s1 = 0x10;                                                  // 0x00189fd8: addiu $s1, $zero, 0x10
label_0x189fdc:
    s1 = s1 + 0x20;                                             // 0x00189fdc: addiu $s1, $s1, 0x20
    t8 = 0x20;                                                  // 0x00189fe0: addiu $t8, $zero, 0x20
label_0x189fe8:
    t9 = t9 + -1;                                               // 0x00189fe8: addiu $t9, $t9, -1
    t3 = t3 + 1;                                                // 0x00189fec: addiu $t3, $t3, 1
    t9 = t9 & 0xffff;                                           // 0x00189ff0: andi $t9, $t9, 0xffff
    if (t9 != 0) goto label_0x189fb0;                           // 0x00189ff4: bnez $t9, 0x189fb0
    t8 = t8 + t7;                                               // 0x00189ff8: addu $t8, $t8, $t7
label_0x189ffc:
    s5 = s5 + 1;                                                // 0x00189ffc: addiu $s5, $s5, 1
label_0x18a000:
    a2 = (s5 < t0) ? 1 : 0;                                     // 0x0018a000: slt $a2, $s5, $t0
    if (a2 != 0) goto label_0x189eb8;                           // 0x0018a004: bnez $a2, 0x189eb8
    /* nop */                                                   // 0x0018a008: nop 
    s1 = s1 + t8;                                               // 0x0018a00c: addu $s1, $s1, $t8
    s2 = s2 + s1;                                               // 0x0018a014: addu $s2, $s2, $s1
    *(uint32_t*)((s3) + 0x18) = s2;                             // 0x0018a018: sw $s2, 0x18($s3)
    *(uint32_t*)((s3) + 0x34) = 0;                              // 0x0018a01c: sw $zero, 0x34($s3)
    v0 = a0 + sp;                                               // 0x0018a020: addu $v0, $a0, $sp
label_0x18a024:
    v0 = g_002163e0;  // Global at 0x002163e0                   // 0x0018a024: lb $v0, 0x80($v0)
    if (v0 == 0) goto label_0x18a044;                           // 0x0018a028: beqz $v0, 0x18a044
    /* nop */                                                   // 0x0018a02c: nop 
    v0 = *(int32_t*)((s3) + 0x34);                              // 0x0018a030: lw $v0, 0x34($s3)
    v1 = v0 + 1;                                                // 0x0018a034: addiu $v1, $v0, 1
    v0 = s3 + v0;                                               // 0x0018a038: addu $v0, $s3, $v0
    *(uint32_t*)((s3) + 0x34) = v1;                             // 0x0018a03c: sw $v1, 0x34($s3)
    g_002163c0 = a0;  // Global at 0x002163c0                   // 0x0018a040: sb $a0, 0x60($v0)
label_0x18a044:
    a0 = a0 + 1;                                                // 0x0018a044: addiu $a0, $a0, 1
    v0 = (a0 < 0x20) ? 1 : 0;                                   // 0x0018a048: slti $v0, $a0, 0x20
    if (v0 != 0) goto label_0x18a024;                           // 0x0018a04c: bnez $v0, 0x18a024
    v0 = a0 + sp;                                               // 0x0018a050: addu $v0, $a0, $sp
    a2 = *(int32_t*)((s3) + 0x34);                              // 0x0018a054: lw $a2, 0x34($s3)
    a3 = 0x21 << 16;                                            // 0x0018a058: lui $a3, 0x21
    v1 = s2 + 0xf;                                              // 0x0018a05c: addiu $v1, $s2, 0xf
    v0 = -0x10;                                                 // 0x0018a060: addiu $v0, $zero, -0x10
    a0 = v1 & v0;                                               // 0x0018a064: and $a0, $v1, $v0
    a3 = a3 + 0x6340;                                           // 0x0018a068: addiu $a3, $a3, 0x6340
    a1 = 3;                                                     // 0x0018a06c: addiu $a1, $zero, 3
    v1 = a2 << 2;                                               // 0x0018a070: sll $v1, $a2, 2
    v1 = v1 + 0xf;                                              // 0x0018a074: addiu $v1, $v1, 0xf
    v1 = v1 & v0;                                               // 0x0018a078: and $v1, $v1, $v0
    *(uint32_t*)((s3) + 0x30) = v1;                             // 0x0018a07c: sw $v1, 0x30($s3)
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x0018a080: lw $v1, 0x14($s0)
    a2 = *(int32_t*)((s3) + 0x34);                              // 0x0018a084: lw $a2, 0x34($s3)
    v1 = v1 << 2;                                               // 0x0018a088: sll $v1, $v1, 2
    v1 = a3 + v1;                                               // 0x0018a08c: addu $v1, $a3, $v1
    v1 = g_00216370;  // Global at 0x00216370                   // 0x0018a090: lw $v1, 0($v1)
    /* multiply: a2 * v1 -> hi:lo */                            // 0x0018a094: mult $ac3, $a2, $v1
    v1 = v1 + 0xf;                                              // 0x0018a098: addiu $v1, $v1, 0xf
    v1 = v1 & v0;                                               // 0x0018a09c: and $v1, $v1, $v0
    *(uint32_t*)((s3) + 0x28) = v1;                             // 0x0018a0a0: sw $v1, 0x28($s3)
    v1 = *(int32_t*)((s3) + 0x28);                              // 0x0018a0a4: lw $v1, 0x28($s3)
    v1 = v1 + 0x20;                                             // 0x0018a0a8: addiu $v1, $v1, 0x20
    *(uint32_t*)((s3) + 0x28) = v1;                             // 0x0018a0ac: sw $v1, 0x28($s3)
    v1 = *(int32_t*)((s3) + 0x18);                              // 0x0018a0b0: lw $v1, 0x18($s3)
    v1 = v1 + 0xf;                                              // 0x0018a0b4: addiu $v1, $v1, 0xf
    v1 = v1 & v0;                                               // 0x0018a0b8: and $v1, $v1, $v0
    *(uint32_t*)((s3) + 0x2c) = v1;                             // 0x0018a0bc: sw $v1, 0x2c($s3)
    a2 = *(int32_t*)((s3) + 0x30);                              // 0x0018a0c0: lw $a2, 0x30($s3)
    v1 = *(int32_t*)((s3) + 0x2c);                              // 0x0018a0c4: lw $v1, 0x2c($s3)
    a2 = a2 + 0xf;                                              // 0x0018a0c8: addiu $a2, $a2, 0xf
    a2 = a2 & v0;                                               // 0x0018a0cc: and $a2, $a2, $v0
    v1 = v1 + a2;                                               // 0x0018a0d0: addu $v1, $v1, $a2
    *(uint32_t*)((s3) + 0x24) = v1;                             // 0x0018a0d4: sw $v1, 0x24($s3)
    a2 = *(int32_t*)((s3) + 0x30);                              // 0x0018a0d8: lw $a2, 0x30($s3)
    v1 = *(int32_t*)((s3) + 0x28);                              // 0x0018a0dc: lw $v1, 0x28($s3)
    a2 = a2 + 0xf;                                              // 0x0018a0e0: addiu $a2, $a2, 0xf
    a2 = a2 & v0;                                               // 0x0018a0e4: and $a2, $a2, $v0
    v1 = v1 + 0xf;                                              // 0x0018a0e8: addiu $v1, $v1, 0xf
    v0 = v1 & v0;                                               // 0x0018a0ec: and $v0, $v1, $v0
    a0 = a0 + a2;                                               // 0x0018a0f0: addu $a0, $a0, $a2
    thunk_func_001a0a20();  // 0x18dab0                          // 0x0018a0f4: jal 0x18dab0
    a0 = a0 + v0;                                               // 0x0018a0f8: addu $a0, $a0, $v0
    *(uint32_t*)((s3) + 0x1c) = v0;                             // 0x0018a0fc: sw $v0, 0x1c($s3)
    func_0018db10();  // 0x18db00                                // 0x0018a100: jal 0x18db00
    a0 = *(int32_t*)((s3) + 0x1c);                              // 0x0018a104: lw $a0, 0x1c($s3)
    *(uint32_t*)((s3) + 0x20) = v0;                             // 0x0018a108: sw $v0, 0x20($s3)
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x0018a110: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x0018a114: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0018a118: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018a120: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018a124: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018a128: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018a12c: jr $ra
    sp = sp + 0xa0;                                             // 0x0018a130: addiu $sp, $sp, 0xa0
}