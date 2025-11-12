void func_001da410() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x490;                                           // 0x001da410: addiu $sp, $sp, -0x490
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001da418: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001da420: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001da428: addu.qb $zero, $sp, $s1
    if (a2 != 0) goto label_0x1da448;                           // 0x001da434: bnez $a2, 0x1da448
    s4 = 0x39 << 16;                                            // 0x001da43c: lui $s4, 0x39
    goto label_0x1da45c;                                        // 0x001da440: b 0x1da45c
    s4 = s4 + -0x51c0;                                          // 0x001da444: addiu $s4, $s4, -0x51c0
label_0x1da448:
    at = 0x31 << 16;                                            // 0x001da448: lui $at, 0x31
    v0 = 0x2f << 16;                                            // 0x001da44c: lui $v0, 0x2f
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001da450: lw $v1, 0x37fc($at)
    v0 = v0 | 0xf000;                                           // 0x001da454: ori $v0, $v0, 0xf000
    s4 = v1 + v0;                                               // 0x001da458: addu $s4, $v1, $v0
label_0x1da45c:
    func_001a2780();  // 0x1a2740                                // 0x001da45c: jal 0x1a2740
    *(uint16_t*)((s1) + 0x816) = v0;                            // 0x001da464: sh $v0, 0x816($s1)
    func_001a27b0();  // 0x1a2780                                // 0x001da468: jal 0x1a2780
    g_0038b660 = v0;  // Global at 0x0038b660                   // 0x001da470: sh $v0, 0x820($s4)
    goto label_0x1da49c;                                        // 0x001da474: b 0x1da49c
label_0x1da47c:
    func_001a2800();  // 0x1a27b0                                // 0x001da47c: jal 0x1a27b0
    a0 = s2 & 0xffff;                                           // 0x001da484: andi $a0, $s2, 0xffff
    v1 = s2 + 1;                                                // 0x001da488: addiu $v1, $s2, 1
    a0 = a0 << 1;                                               // 0x001da48c: sll $a0, $a0, 1
    s2 = v1 & 0xffff;                                           // 0x001da490: andi $s2, $v1, 0xffff
    v1 = a0 + sp;                                               // 0x001da494: addu $v1, $a0, $sp
    g_00200080 = v0;  // Global at 0x00200080                   // 0x001da498: sh $v0, 0x80($v1)
label_0x1da49c:
    v1 = g_0038b660;  // Global at 0x0038b660                   // 0x001da49c: lh $v1, 0x820($s4)
    a0 = s2 & 0xffff;                                           // 0x001da4a0: andi $a0, $s2, 0xffff
    v1 = (a0 < v1) ? 1 : 0;                                     // 0x001da4a4: slt $v1, $a0, $v1
    if (v1 != 0) goto label_0x1da47c;                           // 0x001da4a8: bnez $v1, 0x1da47c
    a1 = s2 & 0xffff;                                           // 0x001da4ac: andi $a1, $s2, 0xffff
    a1 = *(uint16_t*)((s1) + 0x816);                            // 0x001da4b0: lhu $a1, 0x816($s1)
    v1 = a0 << 1;                                               // 0x001da4b4: sll $v1, $a0, 1
    a0 = v1 + sp;                                               // 0x001da4b8: addu $a0, $v1, $sp
    at = 0x31 << 16;                                            // 0x001da4bc: lui $at, 0x31
    v1 = 0x20 << 16;                                            // 0x001da4c0: lui $v1, 0x20
    g_00200ca4 = a1;  // Global at 0x00200ca4                   // 0x001da4c8: sh $a1, 0x80($a0)
    a0 = g_003137fc;  // Global at 0x003137fc                   // 0x001da4cc: lw $a0, 0x37fc($at)
    goto label_0x1da5c4;                                        // 0x001da4d0: b 0x1da5c4
    s5 = a0 + v1;                                               // 0x001da4d4: addu $s5, $a0, $v1
label_0x1da4d8:
    a0 = sp + 0x70;                                             // 0x001da4d8: addiu $a0, $sp, 0x70
    thunk_func_001a1c30();  // 0x1da600                          // 0x001da4e0: jal 0x1da600
    func_001922b0();  // 0x192230                                // 0x001da4e8: jal 0x192230
    a0 = sp + 0x70;                                             // 0x001da4ec: addiu $a0, $sp, 0x70
    *(uint32_t*)((s1) + 0x80c) = v0;                            // 0x001da4f0: sw $v0, 0x80c($s1)
    func_001b0e80();  // 0x1b0e30                                // 0x001da4f4: jal 0x1b0e30
    a0 = *(int32_t*)((s1) + 0x80c);                             // 0x001da4f8: lw $a0, 0x80c($s1)
    a1 = *(int32_t*)((s1) + 0x80c);                             // 0x001da4fc: lw $a1, 0x80c($s1)
    func_00193540();  // 0x193400                                // 0x001da500: jal 0x193400
    v1 = s2 & 0xffff;                                           // 0x001da508: andi $v1, $s2, 0xffff
    v0 = s3 << 1;                                               // 0x001da50c: sll $v0, $s3, 1
    a0 = v1 << 1;                                               // 0x001da510: sll $a0, $v1, 1
    v0 = v0 + sp;                                               // 0x001da514: addu $v0, $v0, $sp
    v1 = v1 << 5;                                               // 0x001da518: sll $v1, $v1, 5
    a1 = v0 + 0x82;                                             // 0x001da51c: addiu $a1, $v0, 0x82
    a2 = s4 + v1;                                               // 0x001da520: addu $a2, $s4, $v1
    v0 = a0 + sp;                                               // 0x001da524: addu $v0, $a0, $sp
    v1 = s4 + a0;                                               // 0x001da528: addu $v1, $s4, $a0
    t0 = v0 + 0x80;                                             // 0x001da52c: addiu $t0, $v0, 0x80
    g_00200c24 = 0;  // Global at 0x00200c24                    // 0x001da530: sh $zero, 0xc24($v1)
    a0 = v1 + 0xc24;                                            // 0x001da534: addiu $a0, $v1, 0xc24
    t2 = g_002f0080;  // Global at 0x002f0080                   // 0x001da538: lhu $t2, 0($t0)
    a3 = v1 + 0x824;                                            // 0x001da53c: addiu $a3, $v1, 0x824
    goto label_0x1da594;                                        // 0x001da540: b 0x1da594
label_0x1da548:
    v0 = g_002f0080;  // Global at 0x002f0080                   // 0x001da548: lhu $v0, 0($t0)
    if (v1 != v0) goto label_0x1da560;                          // 0x001da54c: bne $v1, $v0, 0x1da560
    /* nop */                                                   // 0x001da550: nop 
    v0 = *(uint16_t*)((t1) + 0xc6);                             // 0x001da554: lhu $v0, 0xc6($t1)
    goto label_0x1da588;                                        // 0x001da558: b 0x1da588
    g_00200824 = v0;  // Global at 0x00200824                   // 0x001da55c: sh $v0, 0($a3)
label_0x1da560:
    v1 = *(int32_t*)((t1) + 0x174);                             // 0x001da560: lw $v1, 0x174($t1)
    if (v1 < 0) goto label_0x1da58c;                            // 0x001da564: bltz $v1, 0x1da58c
    v0 = t2 + 1;                                                // 0x001da568: addiu $v0, $t2, 1
    v0 = g_00200c24;  // Global at 0x00200c24                   // 0x001da56c: lh $v0, 0($a0)
    v0 = v0 << 1;                                               // 0x001da570: sll $v0, $v0, 1
    v0 = a2 + v0;                                               // 0x001da574: addu $v0, $a2, $v0
    g_002f1024 = v1;  // Global at 0x002f1024                   // 0x001da578: sh $v1, 0x1024($v0)
    v0 = g_00200c24;  // Global at 0x00200c24                   // 0x001da57c: lh $v0, 0($a0)
    v0 = v0 + 1;                                                // 0x001da580: addiu $v0, $v0, 1
    g_00200c24 = v0;  // Global at 0x00200c24                   // 0x001da584: sh $v0, 0($a0)
label_0x1da588:
    v0 = t2 + 1;                                                // 0x001da588: addiu $v0, $t2, 1
label_0x1da58c:
    t1 = t1 + 0x190;                                            // 0x001da58c: addiu $t1, $t1, 0x190
    t2 = v0 & 0xffff;                                           // 0x001da590: andi $t2, $v0, 0xffff
label_0x1da594:
    v0 = g_002f0082;  // Global at 0x002f0082                   // 0x001da594: lhu $v0, 0($a1)
    v1 = t2 & 0xffff;                                           // 0x001da598: andi $v1, $t2, 0xffff
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x001da59c: slt $v0, $v1, $v0
    if (v0 != 0) goto label_0x1da548;                           // 0x001da5a0: bnez $v0, 0x1da548
    /* nop */                                                   // 0x001da5a4: nop 
    func_00192350();  // 0x192330                                // 0x001da5a8: jal 0x192330
    a0 = *(int32_t*)((s1) + 0x80c);                             // 0x001da5ac: lw $a0, 0x80c($s1)
    func_001b0ec0();  // 0x1b0e80                                // 0x001da5b0: jal 0x1b0e80
    a0 = *(int32_t*)((s1) + 0x80c);                             // 0x001da5b4: lw $a0, 0x80c($s1)
    v1 = s2 + 1;                                                // 0x001da5b8: addiu $v1, $s2, 1
    *(uint32_t*)((s1) + 0x80c) = 0;                             // 0x001da5bc: sw $zero, 0x80c($s1)
    s2 = v1 & 0xffff;                                           // 0x001da5c0: andi $s2, $v1, 0xffff
label_0x1da5c4:
    v1 = g_0038b660;  // Global at 0x0038b660                   // 0x001da5c4: lh $v1, 0x820($s4)
    s3 = s2 & 0xffff;                                           // 0x001da5c8: andi $s3, $s2, 0xffff
    v1 = (s3 < v1) ? 1 : 0;                                     // 0x001da5cc: slt $v1, $s3, $v1
    if (v1 != 0) goto label_0x1da4d8;                           // 0x001da5d0: bnez $v1, 0x1da4d8
    a3 = s2 & 0xffff;                                           // 0x001da5d4: andi $a3, $s2, 0xffff
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001da5dc: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001da5e0: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001da5e8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001da5ec: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001da5f0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001da5f4: jr $ra
    sp = sp + 0x490;                                            // 0x001da5f8: addiu $sp, $sp, 0x490
}