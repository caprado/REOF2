void func_001c6200() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_140, local_f0;
    
    sp = sp + -0x150;                                           // 0x001c6200: addiu $sp, $sp, -0x150
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001c620c: dps.w.ph $ac0, $sp, $s7
    s7 = 0x31 << 16;                                            // 0x001c6214: lui $s7, 0x31
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001c6218: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c6220: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c6228: addu.qb $zero, $sp, $s1
    s0 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c6230: lw $s0, -0x62dc($gp)
    a0 = *(int32_t*)((s0) + 0x2c);                              // 0x001c6234: lw $a0, 0x2c($s0)
    if (a0 == 0) goto label_0x1c64b8;                           // 0x001c6238: beqz $a0, 0x1c64b8
    s7 = s7 + 0x37a0;                                           // 0x001c623c: addiu $s7, $s7, 0x37a0
    func_001c19e0();  // 0x1c1980                                // 0x001c6240: jal 0x1c1980
    /* nop */                                                   // 0x001c6244: nop 
    func_001b4ff0();  // 0x1b4fd0                                // 0x001c624c: jal 0x1b4fd0
    a0 = 0x14;                                                  // 0x001c6250: addiu $a0, $zero, 0x14
    v0 = 0x8080 << 16;                                          // 0x001c6254: lui $v0, 0x8080
    func_001b5060();  // 0x1b5050                                // 0x001c6258: jal 0x1b5050
    a0 = v0 | 0x8080;                                           // 0x001c625c: ori $a0, $v0, 0x8080
    s5 = *(int32_t*)((s0) + 0xd8);                              // 0x001c6260: lw $s5, 0xd8($s0)
    s4 = *(int32_t*)((s0) + 0xd4);                              // 0x001c6268: lw $s4, 0xd4($s0)
    goto label_0x1c6434;                                        // 0x001c626c: b 0x1c6434
    fp = sp + 0x142;                                            // 0x001c6270: addiu $fp, $sp, 0x142
label_0x1c6274:
    s1 = sp + 0xa0;                                             // 0x001c6274: addiu $s1, $sp, 0xa0
    local_f0 = 0;                                               // 0x001c6278: sb $zero, 0xf0($sp)
    func_0010ae00();  // 0x10ac68                                // 0x001c627c: jal 0x10ac68
label_0x1c6284:
    a1 = 0x24 << 16;                                            // 0x001c6284: lui $a1, 0x24
    func_0010b538();  // 0x10b4b0                                // 0x001c628c: jal 0x10b4b0
    a1 = a1 + 0x37f0;                                           // 0x001c6290: addiu $a1, $a1, 0x37f0
    if (v0 == 0) goto label_0x1c6314;                           // 0x001c6294: beqz $v0, 0x1c6314
    a0 = sp + 0xf0;                                             // 0x001c62a0: addiu $a0, $sp, 0xf0
    func_0010a990();  // 0x10a860                                // 0x001c62a4: jal 0x10a860
    *(uint8_t*)(s6) = 0;                                        // 0x001c62a8: sb $zero, 0($s6)
    a1 = 0x24 << 16;                                            // 0x001c62ac: lui $a1, 0x24
    a0 = sp + 0xf0;                                             // 0x001c62b0: addiu $a0, $sp, 0xf0
    func_0010a990();  // 0x10a860                                // 0x001c62b4: jal 0x10a860
    a1 = a1 + 0x37f8;                                           // 0x001c62b8: addiu $a1, $a1, 0x37f8
    v0 = g_003137dd;  // Global at 0x003137dd                   // 0x001c62bc: lbu $v0, 0x3d($s7)
    if (v0 != 0) goto label_0x1c62e0;                           // 0x001c62c0: bnez $v0, 0x1c62e0
    s1 = s6 + 2;                                                // 0x001c62c4: addiu $s1, $s6, 2
    a1 = 0x24 << 16;                                            // 0x001c62c8: lui $a1, 0x24
    a0 = sp + 0x140;                                            // 0x001c62cc: addiu $a0, $sp, 0x140
    func_0010ae00();  // 0x10ac68                                // 0x001c62d0: jal 0x10ac68
    a1 = a1 + 0x3800;                                           // 0x001c62d4: addiu $a1, $a1, 0x3800
    goto label_0x1c62f0;                                        // 0x001c62d8: b 0x1c62f0
    *(uint8_t*)(fp) = 0;                                        // 0x001c62dc: sb $zero, 0($fp)
label_0x1c62e0:
    v0 = 0x31;                                                  // 0x001c62e0: addiu $v0, $zero, 0x31
    local_140 = v0;                                             // 0x001c62e4: sb $v0, 0x140($sp)
    v0 = sp + 0x141;                                            // 0x001c62e8: addiu $v0, $sp, 0x141
    g_80800000 = 0;  // Global at 0x80800000                    // 0x001c62ec: sb $zero, 0($v0)
label_0x1c62f0:
    a0 = sp + 0xf0;                                             // 0x001c62f0: addiu $a0, $sp, 0xf0
    func_0010a990();  // 0x10a860                                // 0x001c62f4: jal 0x10a860
    a1 = sp + 0x140;                                            // 0x001c62f8: addiu $a1, $sp, 0x140
    a1 = 0x24 << 16;                                            // 0x001c62fc: lui $a1, 0x24
    a0 = sp + 0xf0;                                             // 0x001c6300: addiu $a0, $sp, 0xf0
    func_0010a990();  // 0x10a860                                // 0x001c6304: jal 0x10a860
    a1 = a1 + 0x3808;                                           // 0x001c6308: addiu $a1, $a1, 0x3808
    goto label_0x1c6284;                                        // 0x001c630c: b 0x1c6284
    /* nop */                                                   // 0x001c6310: nop 
label_0x1c6314:
    a1 = 0x24 << 16;                                            // 0x001c6314: lui $a1, 0x24
    func_0010b538();  // 0x10b4b0                                // 0x001c631c: jal 0x10b4b0
    a1 = a1 + 0x3810;                                           // 0x001c6320: addiu $a1, $a1, 0x3810
    if (v0 == 0) goto label_0x1c63a8;                           // 0x001c6324: beqz $v0, 0x1c63a8
    a0 = sp + 0xf0;                                             // 0x001c6330: addiu $a0, $sp, 0xf0
    func_0010a990();  // 0x10a860                                // 0x001c6334: jal 0x10a860
    *(uint8_t*)(s6) = 0;                                        // 0x001c6338: sb $zero, 0($s6)
    a1 = 0x24 << 16;                                            // 0x001c633c: lui $a1, 0x24
    a0 = sp + 0xf0;                                             // 0x001c6340: addiu $a0, $sp, 0xf0
    func_0010a990();  // 0x10a860                                // 0x001c6344: jal 0x10a860
    a1 = a1 + 0x37f8;                                           // 0x001c6348: addiu $a1, $a1, 0x37f8
    v0 = g_003137dd;  // Global at 0x003137dd                   // 0x001c634c: lbu $v0, 0x3d($s7)
    if (v0 != 0) goto label_0x1c6370;                           // 0x001c6350: bnez $v0, 0x1c6370
    s1 = s6 + 2;                                                // 0x001c6354: addiu $s1, $s6, 2
    a1 = *(int32_t*)((s0) + 0x28);                              // 0x001c6358: lw $a1, 0x28($s0)
    func_001c2590();  // 0x1c24f0                                // 0x001c635c: jal 0x1c24f0
    a0 = sp + 0x140;                                            // 0x001c6360: addiu $a0, $sp, 0x140
    v0 = sp + 0x146;                                            // 0x001c6364: addiu $v0, $sp, 0x146
    goto label_0x1c6384;                                        // 0x001c6368: b 0x1c6384
    g_80800000 = 0;  // Global at 0x80800000                    // 0x001c636c: sb $zero, 0($v0)
label_0x1c6370:
    a2 = *(int32_t*)((s0) + 0x28);                              // 0x001c6370: lw $a2, 0x28($s0)
    a1 = 0x24 << 16;                                            // 0x001c6374: lui $a1, 0x24
    a0 = sp + 0x140;                                            // 0x001c6378: addiu $a0, $sp, 0x140
    func_0010a570();  // 0x10a4d8                                // 0x001c637c: jal 0x10a4d8
    a1 = a1 + 0x3818;                                           // 0x001c6380: addiu $a1, $a1, 0x3818
label_0x1c6384:
    a0 = sp + 0xf0;                                             // 0x001c6384: addiu $a0, $sp, 0xf0
    func_0010a990();  // 0x10a860                                // 0x001c6388: jal 0x10a860
    a1 = sp + 0x140;                                            // 0x001c638c: addiu $a1, $sp, 0x140
    a1 = 0x24 << 16;                                            // 0x001c6390: lui $a1, 0x24
    a0 = sp + 0xf0;                                             // 0x001c6394: addiu $a0, $sp, 0xf0
    func_0010a990();  // 0x10a860                                // 0x001c6398: jal 0x10a860
    a1 = a1 + 0x3808;                                           // 0x001c639c: addiu $a1, $a1, 0x3808
    goto label_0x1c6284;                                        // 0x001c63a0: b 0x1c6284
    /* nop */                                                   // 0x001c63a4: nop 
label_0x1c63a8:
    a1 = 0x24 << 16;                                            // 0x001c63a8: lui $a1, 0x24
    func_0010b538();  // 0x10b4b0                                // 0x001c63b0: jal 0x10b4b0
    a1 = a1 + 0x3820;                                           // 0x001c63b4: addiu $a1, $a1, 0x3820
    if (v0 == 0) goto label_0x1c63cc;                           // 0x001c63b8: beqz $v0, 0x1c63cc
    a1 = 0x24 << 16;                                            // 0x001c63bc: lui $a1, 0x24
    g_80800000 = 0;  // Global at 0x80800000                    // 0x001c63c0: sb $zero, 0($v0)
    goto label_0x1c6284;                                        // 0x001c63c4: b 0x1c6284
    s3 = 1;                                                     // 0x001c63c8: addiu $s3, $zero, 1
label_0x1c63cc:
    func_0010b538();  // 0x10b4b0                                // 0x001c63d0: jal 0x10b4b0
    a1 = a1 + 0x3828;                                           // 0x001c63d4: addiu $a1, $a1, 0x3828
    if (v0 == 0) goto label_0x1c63ec;                           // 0x001c63d8: beqz $v0, 0x1c63ec
    g_80800000 = 0;  // Global at 0x80800000                    // 0x001c63e0: sb $zero, 0($v0)
    goto label_0x1c6284;                                        // 0x001c63e4: b 0x1c6284
    s3 = 2;                                                     // 0x001c63e8: addiu $s3, $zero, 2
label_0x1c63ec:
    func_0010a990();  // 0x10a860                                // 0x001c63ec: jal 0x10a860
    a0 = sp + 0xf0;                                             // 0x001c63f0: addiu $a0, $sp, 0xf0
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x001c63f4: lw $v1, 0x20($s0)
    v0 = 4;                                                     // 0x001c63f8: addiu $v0, $zero, 4
    if (v1 != v0) goto label_0x1c6420;                          // 0x001c63fc: bne $v1, $v0, 0x1c6420
    a2 = sp + 0xf0;                                             // 0x001c640c: addiu $a2, $sp, 0xf0
    func_001c2250();  // 0x1c2110                                // 0x001c6410: jal 0x1c2110
    goto label_0x1c6434;                                        // 0x001c6418: b 0x1c6434
    s5 = s5 + 0x16;                                             // 0x001c641c: addiu $s5, $s5, 0x16
label_0x1c6420:
    a2 = sp + 0xf0;                                             // 0x001c6424: addiu $a2, $sp, 0xf0
    func_001c2110();  // 0x1c1ff0                                // 0x001c6428: jal 0x1c1ff0
    s5 = s5 + 0x16;                                             // 0x001c6430: addiu $s5, $s5, 0x16
label_0x1c6434:
    a1 = *(int32_t*)(s2);                                       // 0x001c6434: lw $a1, 0($s2)
    if (a1 != 0) goto label_0x1c6274;                           // 0x001c6438: bnez $a1, 0x1c6274
    s2 = s2 + 4;                                                // 0x001c643c: addiu $s2, $s2, 4
    if (s3 == 0) goto label_0x1c64b8;                           // 0x001c6440: beqz $s3, 0x1c64b8
    /* nop */                                                   // 0x001c6444: nop 
    v0 = 1;                                                     // 0x001c6448: addiu $v0, $zero, 1
    if (s3 != v0) goto label_0x1c6464;                          // 0x001c644c: bne $s3, $v0, 0x1c6464
    a0 = 0x49;                                                  // 0x001c6450: addiu $a0, $zero, 0x49
    func_001c19e0();  // 0x1c1980                                // 0x001c6454: jal 0x1c1980
    a0 = 0x1f;                                                  // 0x001c6458: addiu $a0, $zero, 0x1f
    goto label_0x1c64ac;                                        // 0x001c645c: b 0x1c64ac
label_0x1c6464:
    func_001c19e0();  // 0x1c1980                                // 0x001c6464: jal 0x1c1980
    /* nop */                                                   // 0x001c6468: nop 
    goto label_0x1c64ac;                                        // 0x001c646c: b 0x1c64ac
label_0x1c6474:
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x001c6474: lw $v1, 0x20($s0)
    v0 = 4;                                                     // 0x001c6478: addiu $v0, $zero, 4
    if (v1 != v0) goto label_0x1c649c;                          // 0x001c647c: bne $v1, $v0, 0x1c649c
    func_001c2250();  // 0x1c2110                                // 0x001c648c: jal 0x1c2110
    goto label_0x1c64ac;                                        // 0x001c6494: b 0x1c64ac
    s5 = s5 + 0x16;                                             // 0x001c6498: addiu $s5, $s5, 0x16
label_0x1c649c:
    func_001c2110();  // 0x1c1ff0                                // 0x001c64a0: jal 0x1c1ff0
    s5 = s5 + 0x16;                                             // 0x001c64a8: addiu $s5, $s5, 0x16
label_0x1c64ac:
    a2 = *(int32_t*)(s1);                                       // 0x001c64ac: lw $a2, 0($s1)
    if (a2 != 0) goto label_0x1c6474;                           // 0x001c64b0: bnez $a2, 0x1c6474
    s1 = s1 + 4;                                                // 0x001c64b4: addiu $s1, $s1, 4
label_0x1c64b8:
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x001c64bc: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001c64c4: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001c64c8: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001c64cc: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c64d4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c64d8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c64dc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c64e0: jr $ra
    sp = sp + 0x150;                                            // 0x001c64e4: addiu $sp, $sp, 0x150
}