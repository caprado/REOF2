void func_0017b1f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0017b1f0: addiu $sp, $sp, -0x30
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0017b218: lw $v0, 4($s1)
    if (v0 != 0) goto label_0x17b234;                           // 0x0017b21c: bnez $v0, 0x17b234
    s0 = *(int32_t*)(s2);                                       // 0x0017b220: lw $s0, 0($s2)
    a1 = 0x23 << 16;                                            // 0x0017b224: lui $a1, 0x23
    func_0017cae0();  // 0x17cad8                                // 0x0017b228: jal 0x17cad8
    a1 = &str_002296b0;  // "E201181: SFX_CnvFrmArgb8888 : frmfmt is not support." // 0x0017b22c: addiu $a1, $a1, -0x6950
    *(uint32_t*)((s1) + 4) = v0;                                // 0x0017b230: sw $v0, 4($s1)
label_0x17b234:
    v0 = 2;                                                     // 0x0017b234: addiu $v0, $zero, 2
    if (s0 == v0) goto label_0x17b280;                          // 0x0017b238: beq $s0, $v0, 0x17b280
    v0 = ((unsigned)s0 < (unsigned)3) ? 1 : 0;                  // 0x0017b23c: sltiu $v0, $s0, 3
    if (v0 == 0) goto label_0x17b2a8;                           // 0x0017b240: beqz $v0, 0x17b2a8
    v0 = 1;                                                     // 0x0017b248: addiu $v0, $zero, 1
    if (s0 != v0) goto label_0x17b2ac;                          // 0x0017b24c: bnel $s0, $v0, 0x17b2ac
    goto label_0x17b2d0;                                        // 0x0017b274: j 0x17b2d0
    sp = sp + 0x30;                                             // 0x0017b278: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0017b27c: nop 
label_0x17b280:
    goto label_0x17b4c0;                                        // 0x0017b2a0: j 0x17b4c0
    sp = sp + 0x30;                                             // 0x0017b2a4: addiu $sp, $sp, 0x30
label_0x17b2a8:
label_0x17b2ac:
    a2 = 0x23 << 16;                                            // 0x0017b2b4: lui $a2, 0x23
    a2 = &str_00229750;  // "E212173: sfxcnv_CnvFrmYcc420mbToArgb8888mb() : compo is not support." // 0x0017b2c0: addiu $a2, $a2, -0x68b0
    return func_0017cec8();  // Tail call                        // 0x0017b2c8: j 0x17ce88
    sp = sp + 0x30;                                             // 0x0017b2cc: addiu $sp, $sp, 0x30
label_0x17b2d0:
    sp = sp + -0x20;                                            // 0x0017b2d0: addiu $sp, $sp, -0x20
    v0 = 0x41;                                                  // 0x0017b2d4: addiu $v0, $zero, 0x41
    v1 = *(int32_t*)((s0) + 4);                                 // 0x0017b2f0: lw $v1, 4($s0)
    if (v1 == v0) goto label_0x17b438;                          // 0x0017b2f4: beq $v1, $v0, 0x17b438
    v0 = (v1 < 0x42) ? 1 : 0;                                   // 0x0017b2fc: slti $v0, $v1, 0x42
    if (v0 == 0) goto label_0x17b340;                           // 0x0017b300: beqz $v0, 0x17b340
    v0 = 0x101;                                                 // 0x0017b304: addiu $v0, $zero, 0x101
    v0 = 0x21;                                                  // 0x0017b308: addiu $v0, $zero, 0x21
    if (v1 == v0) goto label_0x17b468;                          // 0x0017b30c: beq $v1, $v0, 0x17b468
    v0 = (v1 < 0x22) ? 1 : 0;                                   // 0x0017b310: slti $v0, $v1, 0x22
    if (v0 == 0) goto label_0x17b330;                           // 0x0017b314: beqz $v0, 0x17b330
    v0 = 0x31;                                                  // 0x0017b318: addiu $v0, $zero, 0x31
    v0 = 0x11;                                                  // 0x0017b31c: addiu $v0, $zero, 0x11
    if (v1 == v0) goto label_0x17b368;                          // 0x0017b320: beq $v1, $v0, 0x17b368
    /* nop */                                                   // 0x0017b324: nop 
    goto label_0x17b49c;                                        // 0x0017b328: b 0x17b49c
label_0x17b330:
    if (v1 == v0) goto label_0x17b408;                          // 0x0017b330: beq $v1, $v0, 0x17b408
    /* nop */                                                   // 0x0017b334: nop 
    goto label_0x17b49c;                                        // 0x0017b338: b 0x17b49c
label_0x17b340:
    if (v1 == v0) goto label_0x17b498;                          // 0x0017b340: beq $v1, $v0, 0x17b498
    v0 = (v1 < 0x102) ? 1 : 0;                                  // 0x0017b344: slti $v0, $v1, 0x102
    /* bnezl $v0, 0x17b49c */                                   // 0x0017b348: bnezl $v0, 0x17b49c
    v0 = 0x1001;                                                // 0x0017b350: addiu $v0, $zero, 0x1001
    if (v1 == v0) goto label_0x17b3d8;                          // 0x0017b354: beq $v1, $v0, 0x17b3d8
    /* nop */                                                   // 0x0017b358: nop 
    goto label_0x17b49c;                                        // 0x0017b35c: b 0x17b49c
    /* nop */                                                   // 0x0017b364: nop 
label_0x17b368:
    func_0017d200();  // 0x17d128                                // 0x0017b368: jal 0x17d128
    /* nop */                                                   // 0x0017b36c: nop 
    v1 = 1;                                                     // 0x0017b370: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x17b3a0;                          // 0x0017b374: beq $v0, $v1, 0x17b3a0
    return func_0017b620();  // Tail call                        // 0x0017b398: j 0x17b548
    sp = sp + 0x20;                                             // 0x0017b39c: addiu $sp, $sp, 0x20
label_0x17b3a0:
    func_0017c3c8();  // 0x17c250                                // 0x0017b3a4: jal 0x17c250
    a2 = 0x15;                                                  // 0x0017b3a8: addiu $a2, $zero, 0x15
    a3 = 1;                                                     // 0x0017b3c4: addiu $a3, $zero, 1
    return func_0017b620();  // Tail call                        // 0x0017b3cc: j 0x17b548
    sp = sp + 0x20;                                             // 0x0017b3d0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017b3d4: nop 
label_0x17b3d8:
    func_0017c3c8();  // 0x17c250                                // 0x0017b3d8: jal 0x17c250
    a2 = 0x15;                                                  // 0x0017b3dc: addiu $a2, $zero, 0x15
    a3 = 1;                                                     // 0x0017b3f8: addiu $a3, $zero, 1
    return func_0017b620();  // Tail call                        // 0x0017b400: j 0x17b548
    sp = sp + 0x20;                                             // 0x0017b404: addiu $sp, $sp, 0x20
label_0x17b408:
    func_0017c3c8();  // 0x17c250                                // 0x0017b408: jal 0x17c250
    a2 = 2;                                                     // 0x0017b40c: addiu $a2, $zero, 2
    a3 = 1;                                                     // 0x0017b428: addiu $a3, $zero, 1
    return func_0017b620();  // Tail call                        // 0x0017b430: j 0x17b548
    sp = sp + 0x20;                                             // 0x0017b434: addiu $sp, $sp, 0x20
label_0x17b438:
    func_0017c3c8();  // 0x17c250                                // 0x0017b438: jal 0x17c250
    a2 = 3;                                                     // 0x0017b43c: addiu $a2, $zero, 3
    a3 = 1;                                                     // 0x0017b458: addiu $a3, $zero, 1
    return func_0017b620();  // Tail call                        // 0x0017b460: j 0x17b548
    sp = sp + 0x20;                                             // 0x0017b464: addiu $sp, $sp, 0x20
label_0x17b468:
    func_0017c3c8();  // 0x17c250                                // 0x0017b468: jal 0x17c250
    a2 = 1;                                                     // 0x0017b46c: addiu $a2, $zero, 1
    return func_0017b6e0();  // Tail call                        // 0x0017b48c: j 0x17b620
    sp = sp + 0x20;                                             // 0x0017b490: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017b494: nop 
label_0x17b498:
label_0x17b49c:
    a2 = 0x23 << 16;                                            // 0x0017b4a8: lui $a2, 0x23
    a2 = &str_00229788;  // "E212182: CnvToArgb8888mb : compo is not support." // 0x0017b4b4: addiu $a2, $a2, -0x6878
    return func_0017cec8();  // Tail call                        // 0x0017b4b8: j 0x17ce88
    sp = sp + 0x20;                                             // 0x0017b4bc: addiu $sp, $sp, 0x20
label_0x17b4c0:
    sp = sp + -0x10;                                            // 0x0017b4c0: addiu $sp, $sp, -0x10
    v0 = 0x41;                                                  // 0x0017b4cc: addiu $v0, $zero, 0x41
    v1 = *(int32_t*)((a3) + 4);                                 // 0x0017b4d0: lw $v1, 4($a3)
    if (v1 == v0) goto label_0x17b520;                          // 0x0017b4d4: beq $v1, $v0, 0x17b520
    v0 = (v1 < 0x42) ? 1 : 0;                                   // 0x0017b4dc: slti $v0, $v1, 0x42
    /* beqzl $v0, 0x17b524 */                                   // 0x0017b4e0: beqzl $v0, 0x17b524
    a2 = 0x23 << 16;                                            // 0x0017b4e4: lui $a2, 0x23
    v0 = 0x21;                                                  // 0x0017b4e8: addiu $v0, $zero, 0x21
    if (v1 == v0) goto label_0x17b510;                          // 0x0017b4ec: beq $v1, $v0, 0x17b510
    v0 = (v1 < 0x22) ? 1 : 0;                                   // 0x0017b4f0: slti $v0, $v1, 0x22
    if (v0 == 0) goto label_0x17b524;                           // 0x0017b4f4: beqz $v0, 0x17b524
    a2 = 0x23 << 16;                                            // 0x0017b4f8: lui $a2, 0x23
    v0 = 0x11;                                                  // 0x0017b4fc: addiu $v0, $zero, 0x11
    if (v1 == v0) goto label_0x17b540;                          // 0x0017b500: beq $v1, $v0, 0x17b540
    goto label_0x17b528;                                        // 0x0017b508: b 0x17b528
    /* nop */                                                   // 0x0017b50c: nop 
label_0x17b510:
    return func_0017b1f0();  // Tail call                        // 0x0017b514: j 0x17b1a8
    sp = sp + 0x10;                                             // 0x0017b518: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017b51c: nop 
label_0x17b520:
    a2 = 0x23 << 16;                                            // 0x0017b520: lui $a2, 0x23
label_0x17b524:
label_0x17b528:
    a2 = &str_002297d0;  // "E201183: SFX_CnvFrmYUV422 : frmfmt is not support." // 0x0017b530: addiu $a2, $a2, -0x6830
    return func_0017cec8();  // Tail call                        // 0x0017b534: j 0x17ce88
    sp = sp + 0x10;                                             // 0x0017b538: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017b53c: nop 
label_0x17b540:
    return;                                                     // 0x0017b540: jr $ra
    sp = sp + 0x10;                                             // 0x0017b544: addiu $sp, $sp, 0x10
}