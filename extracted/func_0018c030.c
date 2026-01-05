void func_0018c030() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x0018c030: addiu $sp, $sp, -0x70
    a0 = a0 + -1;                                               // 0x0018c034: addiu $a0, $a0, -1
    v0 = a0 << 1;                                               // 0x0018c03c: sll $v0, $a0, 1
    a0 = v0 + a0;                                               // 0x0018c044: addu $a0, $v0, $a0
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018c048: addu.qb $zero, $sp, $s1
    at = 0x29 << 16;                                            // 0x0018c04c: lui $at, 0x29
    a0 = a0 << 7;                                               // 0x0018c054: sll $a0, $a0, 7
    v1 = *(int32_t*)((gp) + -0x64c0);                           // 0x0018c058: lw $v1, -0x64c0($gp)
    v0 = g_00290364;  // Global at 0x00290364                   // 0x0018c05c: lw $v0, 0x364($at)
    s2 = v1 + a0;                                               // 0x0018c060: addu $s2, $v1, $a0
    if (v0 == 0) goto label_0x18c074;                           // 0x0018c064: beqz $v0, 0x18c074
    s0 = *(int32_t*)((s2) + 0x20);                              // 0x0018c068: lw $s0, 0x20($s2)
    goto label_0x18c330;                                        // 0x0018c06c: b 0x18c330
    v0 = 1;                                                     // 0x0018c070: addiu $v0, $zero, 1
label_0x18c074:
    a0 = *(int32_t*)(s2);                                       // 0x0018c074: lw $a0, 0($s2)
    v0 = a0 & 4;                                                // 0x0018c078: andi $v0, $a0, 4
    if (v0 != 0) goto label_0x18c178;                           // 0x0018c07c: bnez $v0, 0x18c178
    v0 = a0 & 2;                                                // 0x0018c080: andi $v0, $a0, 2
    v1 = *(int32_t*)((s2) + 0xc);                               // 0x0018c084: lw $v1, 0xc($s2)
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x0018c088: lw $v0, -0x6458($gp)
    if (v1 == v0) goto label_0x18c0f8;                          // 0x0018c08c: beq $v1, $v0, 0x18c0f8
    v0 = a0 & 2;                                                // 0x0018c090: andi $v0, $a0, 2
    func_0018d530();  // 18d530                                // 0x0018c094: jal 0x18d530
    /* nop */                                                   // 0x0018c098: nop 
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x0018c09c: lw $v0, -0x6458($gp)
    *(uint32_t*)((s2) + 0xc) = v0;                              // 0x0018c0a0: sw $v0, 0xc($s2)
    a0 = *(int32_t*)((s2) + 0x1c);                              // 0x0018c0a4: lw $a0, 0x1c($s2)
    if (a0 == 0) goto label_0x18c0b8;                           // 0x0018c0a8: beqz $a0, 0x18c0b8
    /* nop */                                                   // 0x0018c0ac: nop 
    thunk_func_0018daf0();  // 18daf0                          // 0x0018c0b0: jal 0x18daf0
    /* nop */                                                   // 0x0018c0b4: nop 
label_0x18c0b8:
    func_00189db0();  // 189db0                                // 0x0018c0bc: jal 0x189db0
    a1 = sp + 0x40;                                             // 0x0018c0c0: addiu $a1, $sp, 0x40
    func_00189d00();  // 189d00                                // 0x0018c0c8: jal 0x189d00
    a1 = sp + 0x40;                                             // 0x0018c0cc: addiu $a1, $sp, 0x40
    if (v0 != 0) goto label_0x18c0e0;                           // 0x0018c0d0: bnez $v0, 0x18c0e0
    /* nop */                                                   // 0x0018c0d4: nop 
    goto label_0x18c330;                                        // 0x0018c0d8: b 0x18c330
label_0x18c0e0:
    func_0018db10();  // 18db10                                // 0x0018c0e0: jal 0x18db10
    /* nop */                                                   // 0x0018c0e4: nop 
    v1 = *(int32_t*)((s2) + 0x20);                              // 0x0018c0e8: lw $v1, 0x20($s2)
    v0 = *(int32_t*)((s2) + 0x24);                              // 0x0018c0ec: lw $v0, 0x24($s2)
    goto label_0x18c144;                                        // 0x0018c0f0: b 0x18c144
    s1 = v1 + v0;                                               // 0x0018c0f4: addu $s1, $v1, $v0
label_0x18c0f8:
    if (v0 == 0) goto label_0x18c10c;                           // 0x0018c0f8: beqz $v0, 0x18c10c
    /* nop */                                                   // 0x0018c0fc: nop 
    v0 = *(int32_t*)((s2) + 0x24);                              // 0x0018c100: lw $v0, 0x24($s2)
    goto label_0x18c144;                                        // 0x0018c104: b 0x18c144
    s1 = s0 + v0;                                               // 0x0018c108: addu $s1, $s0, $v0
label_0x18c10c:
    a0 = *(int32_t*)((s2) + 0x28);                              // 0x0018c10c: lw $a0, 0x28($s2)
    func_0018dc30();  // 18dc30                                // 0x0018c110: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0018c114: addiu $a1, $zero, 0x10
    a1 = *(int32_t*)((s2) + 0x34);                              // 0x0018c11c: lw $a1, 0x34($s2)
    v0 = *(int32_t*)((s2) + 0x4c);                              // 0x0018c120: lw $v0, 0x4c($s2)
    a2 = g_50000014;  // Global at 0x50000014                   // 0x0018c12c: lw $a2, 0x14($v0)
    func_0018b280();  // 18b280                                // 0x0018c130: jal 0x18b280
    t0 = s2 + 0x60;                                             // 0x0018c134: addiu $t0, $s2, 0x60
    func_0018be00();  // 18be00                                // 0x0018c13c: jal 0x18be00
label_0x18c144:
    a0 = *(int32_t*)((s2) + 0x38);                              // 0x0018c144: lw $a0, 0x38($s2)
    if (a0 == 0) goto label_0x18c228;                           // 0x0018c148: beqz $a0, 0x18c228
    a1 = s2 + 0x100;                                            // 0x0018c14c: addiu $a1, $s2, 0x100
    func_0019d450();  // 19d450                                // 0x0018c150: jal 0x19d450
    /* nop */                                                   // 0x0018c154: nop 
    v0 = *(int32_t*)((s2) + 0x4c);                              // 0x0018c158: lw $v0, 0x4c($s2)
    a0 = *(int32_t*)((s2) + 0x34);                              // 0x0018c160: lw $a0, 0x34($s2)
    a1 = g_50000014;  // Global at 0x50000014                   // 0x0018c164: lw $a1, 0x14($v0)
    func_0018b970();  // 18b970                                // 0x0018c168: jal 0x18b970
    a3 = s2 + 0x80;                                             // 0x0018c16c: addiu $a3, $s2, 0x80
    goto label_0x18c22c;                                        // 0x0018c170: b 0x18c22c
    v0 = *(int32_t*)((s2) + 0x4c);                              // 0x0018c174: lw $v0, 0x4c($s2)
label_0x18c178:
    if (v0 == 0) goto label_0x18c1dc;                           // 0x0018c178: beqz $v0, 0x18c1dc
    /* nop */                                                   // 0x0018c17c: nop 
    a0 = *(int32_t*)((s2) + 0x28);                              // 0x0018c180: lw $a0, 0x28($s2)
    func_0018dc30();  // 18dc30                                // 0x0018c184: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0018c188: addiu $a1, $zero, 0x10
    v1 = *(int32_t*)((s2) + 0x24);                              // 0x0018c190: lw $v1, 0x24($s2)
    v0 = *(int32_t*)((s2) + 0x28);                              // 0x0018c194: lw $v0, 0x28($s2)
    a0 = s0 + v1;                                               // 0x0018c19c: addu $a0, $s0, $v1
    func_001899f8();  // 1899f8                                // 0x0018c1a0: jal 0x1899f8
    a2 = (unsigned)v0 >> 4;                                     // 0x0018c1a4: srl $a2, $v0, 4
    a0 = *(int32_t*)((s2) + 0x38);                              // 0x0018c1a8: lw $a0, 0x38($s2)
    if (a0 == 0) goto label_0x18c228;                           // 0x0018c1ac: beqz $a0, 0x18c228
    a1 = s2 + 0x100;                                            // 0x0018c1b0: addiu $a1, $s2, 0x100
    func_0019d450();  // 19d450                                // 0x0018c1b4: jal 0x19d450
    /* nop */                                                   // 0x0018c1b8: nop 
    v0 = *(int32_t*)((s2) + 0x4c);                              // 0x0018c1bc: lw $v0, 0x4c($s2)
    a0 = *(int32_t*)((s2) + 0x34);                              // 0x0018c1c4: lw $a0, 0x34($s2)
    a1 = g_50000014;  // Global at 0x50000014                   // 0x0018c1c8: lw $a1, 0x14($v0)
    func_0018b970();  // 18b970                                // 0x0018c1cc: jal 0x18b970
    a3 = s2 + 0x80;                                             // 0x0018c1d0: addiu $a3, $s2, 0x80
    goto label_0x18c228;                                        // 0x0018c1d4: b 0x18c228
    /* nop */                                                   // 0x0018c1d8: nop 
label_0x18c1dc:
    a0 = *(int32_t*)((s2) + 0x28);                              // 0x0018c1dc: lw $a0, 0x28($s2)
    func_0018dc30();  // 18dc30                                // 0x0018c1e0: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0018c1e4: addiu $a1, $zero, 0x10
    func_0018be00();  // 18be00                                // 0x0018c1f0: jal 0x18be00
    a0 = *(int32_t*)((s2) + 0x38);                              // 0x0018c1f8: lw $a0, 0x38($s2)
    if (a0 == 0) goto label_0x18c20c;                           // 0x0018c1fc: beqz $a0, 0x18c20c
    a1 = s2 + 0x100;                                            // 0x0018c200: addiu $a1, $s2, 0x100
    func_0019d450();  // 19d450                                // 0x0018c204: jal 0x19d450
    /* nop */                                                   // 0x0018c208: nop 
label_0x18c20c:
    v0 = *(int32_t*)((s2) + 0x4c);                              // 0x0018c20c: lw $v0, 0x4c($s2)
    a1 = *(int32_t*)((s2) + 0x34);                              // 0x0018c214: lw $a1, 0x34($s2)
    a2 = g_50000014;  // Global at 0x50000014                   // 0x0018c21c: lw $a2, 0x14($v0)
    func_0018b280();  // 18b280                                // 0x0018c220: jal 0x18b280
    t0 = s2 + 0x60;                                             // 0x0018c224: addiu $t0, $s2, 0x60
label_0x18c228:
    v0 = *(int32_t*)((s2) + 0x4c);                              // 0x0018c228: lw $v0, 0x4c($s2)
label_0x18c22c:
    a3 = 0x21 << 16;                                            // 0x0018c22c: lui $a3, 0x21
    a3 = a3 + 0x6340;                                           // 0x0018c230: addiu $a3, $a3, 0x6340
    a1 = *(int32_t*)((s2) + 0x34);                              // 0x0018c234: lw $a1, 0x34($s2)
    at = 0x29 << 16;                                            // 0x0018c238: lui $at, 0x29
    t0 = g_50000014;  // Global at 0x50000014                   // 0x0018c244: lw $t0, 0x14($v0)
    v1 = g_5000000c;  // Global at 0x5000000c                   // 0x0018c248: lw $v1, 0xc($v0)
    t0 = t0 << 2;                                               // 0x0018c24c: sll $t0, $t0, 2
    v0 = g_50000008;  // Global at 0x50000008                   // 0x0018c250: lw $v0, 8($v0)
    a3 = a3 + t0;                                               // 0x0018c254: addu $a3, $a3, $t0
    v0 = v1 - v0;                                               // 0x0018c258: subu $v0, $v1, $v0
    v1 = g_00216340;  // Global at 0x00216340                   // 0x0018c25c: lw $v1, 0($a3)
    v0 = (unsigned)v0 >> 3;                                     // 0x0018c260: srl $v0, $v0, 3
    g_00290360 = v0;  // Global at 0x00290360                   // 0x0018c264: sw $v0, 0x360($at)
    /* multiply: a1 * v1 -> hi:lo */                            // 0x0018c268: mult $ac3, $a1, $v1
    v0 = *(int32_t*)((s2) + 0x4c);                              // 0x0018c26c: lw $v0, 0x4c($s2)
    s0 = s1 + v1;                                               // 0x0018c270: addu $s0, $s1, $v1
    a1 = g_50000004;  // Global at 0x50000004                   // 0x0018c274: lw $a1, 4($v0)
    v1 = g_50000008;  // Global at 0x50000008                   // 0x0018c278: lw $v1, 8($v0)
    v0 = g_50000010;  // Global at 0x50000010                   // 0x0018c27c: lw $v0, 0x10($v0)
    v1 = a1 - v1;                                               // 0x0018c280: subu $v1, $a1, $v1
    /* call function at address in v0 */                        // 0x0018c284: jalr $v0
    a1 = (unsigned)v1 >> 3;                                     // 0x0018c288: srl $a1, $v1, 3
    at = 0x29 << 16;                                            // 0x0018c290: lui $at, 0x29
    v1 = *(int32_t*)((s2) + 0x48);                              // 0x0018c294: lw $v1, 0x48($s2)
    v0 = g_0029035c;  // Global at 0x0029035c                   // 0x0018c298: lw $v0, 0x35c($at)
    if (v0 == v1) goto label_0x18c308;                          // 0x0018c29c: beq $v0, $v1, 0x18c308
    at = 0x29 << 16;                                            // 0x0018c2a0: lui $at, 0x29
    a0 = 0x40;                                                  // 0x0018c2a4: addiu $a0, $zero, 0x40
    g_0029035c = v1;  // Global at 0x0029035c                   // 0x0018c2a8: sw $v1, 0x35c($at)
    func_0018dc30();  // 18dc30                                // 0x0018c2ac: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0018c2b0: addiu $a1, $zero, 0x10
    v1 = 0x5000 << 16;                                          // 0x0018c2b4: lui $v1, 0x5000
    a0 = v1 | 1;                                                // 0x0018c2bc: ori $a0, $v1, 1
    a3 = 0x29 << 16;                                            // 0x0018c2c0: lui $a3, 0x29
    g_50000000 = a0;  // Global at 0x50000000                   // 0x0018c2c4: sw $a0, 0($v0)
    v1 = 0xf000 << 16;                                          // 0x0018c2c8: lui $v1, 0xf000
    t0 = *(int32_t*)((s2) + 0x4c);                              // 0x0018c2cc: lw $t0, 0x4c($s2)
    v1 = v1 | 1;                                                // 0x0018c2d0: ori $v1, $v1, 1
    a2 = v0 + 0x20;                                             // 0x0018c2d4: addiu $a2, $v0, 0x20
    a3 = a3 + -0x350;                                           // 0x0018c2e0: addiu $a3, $a3, -0x350
    t0 = *(int32_t*)(t0);                                       // 0x0018c2e4: lw $t0, 0($t0)
    g_50000004 = t0;  // Global at 0x50000004                   // 0x0018c2e8: sw $t0, 4($v0)
    g_50000020 = v1;  // Global at 0x50000020                   // 0x0018c2f0: sw $v1, 0x20($v0)
    g_50000024 = 0;  // Global at 0x50000024                    // 0x0018c2f4: sw $zero, 0x24($v0)
    /* FPU: dpa.w.ph $ac0, $v0, $zero */                        // 0x0018c2fc: dpa.w.ph $ac0, $v0, $zero
    func_0018ce40();  // 18ce40                                // 0x0018c300: jal 0x18ce40
    /* FPU: addu.qb $zero, $v0, $zero */                        // 0x0018c304: addu.qb $zero, $v0, $zero
label_0x18c308:
    a3 = 0x29 << 16;                                            // 0x0018c30c: lui $a3, 0x29
    v0 = 0x5000 << 16;                                          // 0x0018c314: lui $v0, 0x5000
    a1 = v1 | v0;                                               // 0x0018c320: or $a1, $v1, $v0
    func_0018ce40();  // 18ce40                                // 0x0018c324: jal 0x18ce40
    a3 = a3 + -0x350;                                           // 0x0018c328: addiu $a3, $a3, -0x350
    v0 = 1;                                                     // 0x0018c32c: addiu $v0, $zero, 1
label_0x18c330:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018c334: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018c338: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018c33c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018c340: jr $ra
    sp = sp + 0x70;                                             // 0x0018c344: addiu $sp, $sp, 0x70
}