void func_001a0010() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a0010: addiu $sp, $sp, -0x30
    v0 = a0 << 2;                                               // 0x001a0014: sll $v0, $a0, 2
    a2 = 0x29 << 16;                                            // 0x001a001c: lui $a2, 0x29
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a0020: addu.qb $zero, $sp, $s1
    v1 = v0 + a0;                                               // 0x001a0024: addu $v1, $v0, $a0
    at = 0x29 << 16;                                            // 0x001a002c: lui $at, 0x29
    v0 = g_0028ff74;  // Global at 0x0028ff74                   // 0x001a0030: lw $v0, -0x8c($at)
    a0 = v1 << 5;                                               // 0x001a0038: sll $a0, $v1, 5
    a2 = a2 + -0x1d0;                                           // 0x001a003c: addiu $a2, $a2, -0x1d0
    v1 = 1;                                                     // 0x001a0040: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1a0104;                          // 0x001a0044: beq $v0, $v1, 0x1a0104
    s0 = a2 + a0;                                               // 0x001a0048: addu $s0, $a2, $a0
    at = 0x29 << 16;                                            // 0x001a004c: lui $at, 0x29
    v0 = g_0028ffbc;  // Global at 0x0028ffbc                   // 0x001a0050: lw $v0, -0x44($at)
    if (v0 != v1) goto label_0x1a00a8;                          // 0x001a0054: bne $v0, $v1, 0x1a00a8
    at = 0x29 << 16;                                            // 0x001a0058: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a005c: lui $at, 0x29
    v1 = g_00290314;  // Global at 0x00290314                   // 0x001a0060: lw $v1, 0x314($at)
    at = 0x29 << 16;                                            // 0x001a0064: lui $at, 0x29
    v1 = v1 << 4;                                               // 0x001a0068: sll $v1, $v1, 4
    v0 = g_00290318;  // Global at 0x00290318                   // 0x001a006c: lw $v0, 0x318($at)
    v0 = v0 << 4;                                               // 0x001a0070: sll $v0, $v0, 4
    at = 0x29 << 16;                                            // 0x001a0074: lui $at, 0x29
    v0 = v1 | v0;                                               // 0x001a007c: or $v0, $v1, $v0
    v1 = g_00290314;  // Global at 0x00290314                   // 0x001a0084: lw $v1, 0x314($at)
    at = 0x29 << 16;                                            // 0x001a0088: lui $at, 0x29
    v1 = v1 << 4;                                               // 0x001a008c: sll $v1, $v1, 4
    v0 = g_00290318;  // Global at 0x00290318                   // 0x001a0090: lw $v0, 0x318($at)
    v0 = v0 << 4;                                               // 0x001a0094: sll $v0, $v0, 4
    v0 = v1 | v0;                                               // 0x001a009c: or $v0, $v1, $v0
    goto label_0x1a0104;                                        // 0x001a00a0: b 0x1a0104
label_0x1a00a8:
    v1 = g_00290318;  // Global at 0x00290318                   // 0x001a00a8: lw $v1, 0x318($at)
    at = 0x29 << 16;                                            // 0x001a00ac: lui $at, 0x29
    v1 = v1 << 4;                                               // 0x001a00b0: sll $v1, $v1, 4
    v0 = g_00290314;  // Global at 0x00290314                   // 0x001a00b4: lw $v0, 0x314($at)
    v1 = v1 + 8;                                                // 0x001a00b8: addiu $v1, $v1, 8
    v0 = v0 << 4;                                               // 0x001a00c8: sll $v0, $v0, 4
    at = 0x29 << 16;                                            // 0x001a00cc: lui $at, 0x29
    v0 = v0 | v1;                                               // 0x001a00d0: or $v0, $v0, $v1
    v1 = g_00290318;  // Global at 0x00290318                   // 0x001a00d8: lw $v1, 0x318($at)
    at = 0x29 << 16;                                            // 0x001a00dc: lui $at, 0x29
    v1 = v1 << 4;                                               // 0x001a00e0: sll $v1, $v1, 4
    v0 = g_00290314;  // Global at 0x00290314                   // 0x001a00e4: lw $v0, 0x314($at)
    v1 = v1 + 8;                                                // 0x001a00e8: addiu $v1, $v1, 8
    v0 = v0 << 4;                                               // 0x001a00f8: sll $v0, $v0, 4
    v0 = v0 | v1;                                               // 0x001a00fc: or $v0, $v0, $v1
label_0x1a0104:
    if (a1 != 0) goto label_0x1a011c;                           // 0x001a0104: bnez $a1, 0x1a011c
    sceSifStopDma();  // 0x114590                               // 0x001a010c: jal 0x114590
    goto label_0x1a0124;                                        // 0x001a0114: b 0x1a0124
    /* nop */                                                   // 0x001a0118: nop 
label_0x1a011c:
    iFlushCache();  // 0x114560                                 // 0x001a011c: jal 0x114560
    /* nop */                                                   // 0x001a0120: nop 
label_0x1a0124:
    func_0018d530();  // 0x18d4c0                                // 0x001a0124: jal 0x18d4c0
    /* nop */                                                   // 0x001a0128: nop 
    at = 0x29 << 16;                                            // 0x001a012c: lui $at, 0x29
    a0 = g_0029033c;  // Global at 0x0029033c                   // 0x001a0130: lw $a0, 0x33c($at)
    func_00103418();  // 0x1033b0                                // 0x001a0134: jal 0x1033b0
label_0x1a013c:
    at = 0x29 << 16;                                            // 0x001a013c: lui $at, 0x29
    a1 = 1;                                                     // 0x001a0140: addiu $a1, $zero, 1
    a0 = g_0029033c;  // Global at 0x0029033c                   // 0x001a0144: lw $a0, 0x33c($at)
    func_00103688();  // 0x103650                                // 0x001a0148: jal 0x103650
    if (v0 != 0) goto label_0x1a013c;                           // 0x001a0150: bnez $v0, 0x1a013c
    /* nop */                                                   // 0x001a0154: nop 
    at = 0x29 << 16;                                            // 0x001a0158: lui $at, 0x29
    t0 = g_00290324;  // Global at 0x00290324                   // 0x001a015c: lw $t0, 0x324($at)
    at = 0x29 << 16;                                            // 0x001a0160: lui $at, 0x29
    a3 = g_0029032c;  // Global at 0x0029032c                   // 0x001a0164: lw $a3, 0x32c($at)
    at = 0x29 << 16;                                            // 0x001a0168: lui $at, 0x29
    a2 = g_0028ff84;  // Global at 0x0028ff84                   // 0x001a016c: lw $a2, -0x7c($at)
    at = 0x29 << 16;                                            // 0x001a0170: lui $at, 0x29
    a0 = g_00290328;  // Global at 0x00290328                   // 0x001a0174: lw $a0, 0x328($at)
    at = 0x29 << 16;                                            // 0x001a017c: lui $at, 0x29
    v1 = g_00290330;  // Global at 0x00290330                   // 0x001a0180: lw $v1, 0x330($at)
    at = 0x29 << 16;                                            // 0x001a0184: lui $at, 0x29
    v1 = a0 + v1;                                               // 0x001a0188: addu $v1, $a0, $v1
    a1 = g_0028ff74;  // Global at 0x0028ff74                   // 0x001a018c: lw $a1, -0x8c($at)
    if (a1 != 0) goto label_0x1a02b4;                           // 0x001a0190: bnez $a1, 0x1a02b4
    a0 = t0 + a2;                                               // 0x001a0194: addu $a0, $t0, $a2
    a2 = 3;                                                     // 0x001a0198: addiu $a2, $zero, 3
    at = 0x1200 << 16;                                          // 0x001a019c: lui $at, 0x1200
    a1 = 0x66;                                                  // 0x001a01a4: addiu $a1, $zero, 0x66
    at = 0x1200 << 16;                                          // 0x001a01a8: lui $at, 0x1200
    if (s1 != 0) goto label_0x1a0208;                           // 0x001a01ac: bnez $s1, 0x1a0208
    a2 = *(int32_t*)((gp) + -0x6448);                           // 0x001a01b4: lw $a2, -0x6448($gp)
    if (a2 >= 0) goto label_0x1a01c8;                           // 0x001a01b8: bgez $a2, 0x1a01c8
    a1 = a2 >> 6;                                               // 0x001a01bc: sra $a1, $a2, 6
    a1 = a2 + 0x3f;                                             // 0x001a01c0: addiu $a1, $a2, 0x3f
    a1 = a1 >> 6;                                               // 0x001a01c4: sra $a1, $a1, 6
label_0x1a01c8:
    at = 0x29 << 16;                                            // 0x001a01c8: lui $at, 0x29
    a2 = g_0028ff98;  // Global at 0x0028ff98                   // 0x001a01d0: lw $a2, -0x68($at)
    at = 0x29 << 16;                                            // 0x001a01dc: lui $at, 0x29
    a2 = (unsigned)a2 >> 5;                                     // 0x001a01e0: srl $a2, $a2, 5
    a2 = a2 | a3;                                               // 0x001a01f0: or $a2, $a2, $a3
    at = 0x1200 << 16;                                          // 0x001a01f8: lui $at, 0x1200
    a1 = a1 | a2;                                               // 0x001a01fc: or $a1, $a1, $a2
    goto label_0x1a0258;                                        // 0x001a0200: b 0x1a0258
label_0x1a0208:
    a2 = *(int32_t*)((gp) + -0x6448);                           // 0x001a0208: lw $a2, -0x6448($gp)
    if (a2 >= 0) goto label_0x1a021c;                           // 0x001a020c: bgez $a2, 0x1a021c
    a1 = a2 >> 6;                                               // 0x001a0210: sra $a1, $a2, 6
    a1 = a2 + 0x3f;                                             // 0x001a0214: addiu $a1, $a2, 0x3f
    a1 = a1 >> 6;                                               // 0x001a0218: sra $a1, $a1, 6
label_0x1a021c:
    at = 0x29 << 16;                                            // 0x001a021c: lui $at, 0x29
    a2 = g_0028ff9c;  // Global at 0x0028ff9c                   // 0x001a0224: lw $a2, -0x64($at)
    at = 0x29 << 16;                                            // 0x001a0230: lui $at, 0x29
    a2 = (unsigned)a2 >> 5;                                     // 0x001a0234: srl $a2, $a2, 5
    a2 = a2 | a3;                                               // 0x001a0244: or $a2, $a2, $a3
    at = 0x1200 << 16;                                          // 0x001a024c: lui $at, 0x1200
    a1 = a1 | a2;                                               // 0x001a0250: or $a1, $a1, $a2
label_0x1a0258:
    at = 0x29 << 16;                                            // 0x001a0258: lui $at, 0x29
    a2 = a0 | v1;                                               // 0x001a0274: or $a2, $a0, $v1
    v1 = 0x9ff;                                                 // 0x001a0278: addiu $v1, $zero, 0x9ff
    at = 0x29 << 16;                                            // 0x001a0280: lui $at, 0x29
    v1 = g_0028ff80;  // Global at 0x0028ff80                   // 0x001a0288: lw $v1, -0x80($at)
    a1 = a1 | a2;                                               // 0x001a028c: or $a1, $a1, $a2
    a0 = a1 | a0;                                               // 0x001a0290: or $a0, $a1, $a0
    v1 = v1 + -1;                                               // 0x001a0294: addiu $v1, $v1, -1
    at = 0x1200 << 16;                                          // 0x001a0298: lui $at, 0x1200
    v1 = v1 | a0;                                               // 0x001a02a8: or $v1, $v1, $a0
    goto label_0x1a05a0;                                        // 0x001a02ac: b 0x1a05a0
label_0x1a02b4:
    at = 0x29 << 16;                                            // 0x001a02b4: lui $at, 0x29
    a1 = g_0028ff78;  // Global at 0x0028ff78                   // 0x001a02b8: lw $a1, -0x88($at)
    if (a1 != 0) goto label_0x1a048c;                           // 0x001a02bc: bnez $a1, 0x1a048c
    a2 = 1;                                                     // 0x001a02c0: addiu $a2, $zero, 1
    a2 = 1;                                                     // 0x001a02c4: addiu $a2, $zero, 1
    at = 0x1200 << 16;                                          // 0x001a02c8: lui $at, 0x1200
    a1 = 0x7f27;                                                // 0x001a02d0: addiu $a1, $zero, 0x7f27
    at = 0x1200 << 16;                                          // 0x001a02d4: lui $at, 0x1200
    if (s1 != 0) goto label_0x1a0364;                           // 0x001a02d8: bnez $s1, 0x1a0364
    a2 = *(int32_t*)((gp) + -0x6448);                           // 0x001a02e0: lw $a2, -0x6448($gp)
    if (a2 >= 0) goto label_0x1a02f4;                           // 0x001a02e4: bgez $a2, 0x1a02f4
    a1 = a2 >> 6;                                               // 0x001a02e8: sra $a1, $a2, 6
    a1 = a2 + 0x3f;                                             // 0x001a02ec: addiu $a1, $a2, 0x3f
    a1 = a1 >> 6;                                               // 0x001a02f0: sra $a1, $a1, 6
label_0x1a02f4:
    at = 0x29 << 16;                                            // 0x001a02f4: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a0308: lui $at, 0x29
    a1 = g_0028ff98;  // Global at 0x0028ff98                   // 0x001a0310: lw $a1, -0x68($at)
    a1 = (unsigned)a1 >> 5;                                     // 0x001a0314: srl $a1, $a1, 5
    at = 0x1200 << 16;                                          // 0x001a0318: lui $at, 0x1200
    a1 = a1 | a3;                                               // 0x001a0324: or $a1, $a1, $a3
    a1 = a2 | a1;                                               // 0x001a0328: or $a1, $a2, $a1
    at = 0x29 << 16;                                            // 0x001a0330: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a0338: lui $at, 0x29
    a1 = g_0028ff98;  // Global at 0x0028ff98                   // 0x001a0340: lw $a1, -0x68($at)
    a1 = (unsigned)a1 >> 5;                                     // 0x001a0344: srl $a1, $a1, 5
    at = 0x1200 << 16;                                          // 0x001a0348: lui $at, 0x1200
    a1 = a1 | a3;                                               // 0x001a0354: or $a1, $a1, $a3
    a1 = a2 | a1;                                               // 0x001a0358: or $a1, $a2, $a1
    goto label_0x1a03e4;                                        // 0x001a035c: b 0x1a03e4
label_0x1a0364:
    a2 = *(int32_t*)((gp) + -0x6448);                           // 0x001a0364: lw $a2, -0x6448($gp)
    if (a2 >= 0) goto label_0x1a0378;                           // 0x001a0368: bgez $a2, 0x1a0378
    a1 = a2 >> 6;                                               // 0x001a036c: sra $a1, $a2, 6
    a1 = a2 + 0x3f;                                             // 0x001a0370: addiu $a1, $a2, 0x3f
    a1 = a1 >> 6;                                               // 0x001a0374: sra $a1, $a1, 6
label_0x1a0378:
    at = 0x29 << 16;                                            // 0x001a0378: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a038c: lui $at, 0x29
    a1 = g_0028ff9c;  // Global at 0x0028ff9c                   // 0x001a0394: lw $a1, -0x64($at)
    a1 = (unsigned)a1 >> 5;                                     // 0x001a0398: srl $a1, $a1, 5
    at = 0x1200 << 16;                                          // 0x001a039c: lui $at, 0x1200
    a1 = a1 | a3;                                               // 0x001a03a8: or $a1, $a1, $a3
    a1 = a2 | a1;                                               // 0x001a03ac: or $a1, $a2, $a1
    at = 0x29 << 16;                                            // 0x001a03b4: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a03bc: lui $at, 0x29
    a1 = g_0028ff9c;  // Global at 0x0028ff9c                   // 0x001a03c4: lw $a1, -0x64($at)
    a1 = (unsigned)a1 >> 5;                                     // 0x001a03c8: srl $a1, $a1, 5
    at = 0x1200 << 16;                                          // 0x001a03cc: lui $at, 0x1200
    a1 = a1 | a3;                                               // 0x001a03d8: or $a1, $a1, $a3
    a1 = a2 | a1;                                               // 0x001a03dc: or $a1, $a2, $a1
label_0x1a03e4:
    at = 0x29 << 16;                                            // 0x001a03e8: lui $at, 0x29
    a0 = v1 + 1;                                                // 0x001a03ec: addiu $a0, $v1, 1
    a3 = a1 | a0;                                               // 0x001a040c: or $a3, $a1, $a0
    a0 = a1 | v1;                                               // 0x001a0410: or $a0, $a1, $v1
    v1 = 0x9ff;                                                 // 0x001a0418: addiu $v1, $zero, 0x9ff
    at = 0x29 << 16;                                            // 0x001a0420: lui $at, 0x29
    v1 = g_0028ff80;  // Global at 0x0028ff80                   // 0x001a0428: lw $v1, -0x80($at)
    a1 = a1 | a3;                                               // 0x001a042c: or $a1, $a1, $a3
    a1 = a1 | a2;                                               // 0x001a0430: or $a1, $a1, $a2
    v1 = v1 + -1;                                               // 0x001a0434: addiu $v1, $v1, -1
    at = 0x1200 << 16;                                          // 0x001a0438: lui $at, 0x1200
    v1 = v1 | a1;                                               // 0x001a0448: or $v1, $v1, $a1
    at = 0x29 << 16;                                            // 0x001a0450: lui $at, 0x29
    at = 0x29 << 16;                                            // 0x001a0458: lui $at, 0x29
    v1 = g_0028ff80;  // Global at 0x0028ff80                   // 0x001a0460: lw $v1, -0x80($at)
    a0 = a1 | a0;                                               // 0x001a0464: or $a0, $a1, $a0
    a0 = a0 | a2;                                               // 0x001a0468: or $a0, $a0, $a2
    v1 = v1 + -1;                                               // 0x001a046c: addiu $v1, $v1, -1
    at = 0x1200 << 16;                                          // 0x001a0470: lui $at, 0x1200
    v1 = v1 | a0;                                               // 0x001a0480: or $v1, $v1, $a0
    goto label_0x1a05a0;                                        // 0x001a0484: b 0x1a05a0
label_0x1a048c:
    at = 0x1200 << 16;                                          // 0x001a048c: lui $at, 0x1200
    a1 = 0x66;                                                  // 0x001a0494: addiu $a1, $zero, 0x66
    at = 0x1200 << 16;                                          // 0x001a0498: lui $at, 0x1200
    if (s1 != 0) goto label_0x1a04f8;                           // 0x001a049c: bnez $s1, 0x1a04f8
    a2 = *(int32_t*)((gp) + -0x6448);                           // 0x001a04a4: lw $a2, -0x6448($gp)
    if (a2 >= 0) goto label_0x1a04b8;                           // 0x001a04a8: bgez $a2, 0x1a04b8
    a1 = a2 >> 6;                                               // 0x001a04ac: sra $a1, $a2, 6
    a1 = a2 + 0x3f;                                             // 0x001a04b0: addiu $a1, $a2, 0x3f
    a1 = a1 >> 6;                                               // 0x001a04b4: sra $a1, $a1, 6
label_0x1a04b8:
    at = 0x29 << 16;                                            // 0x001a04b8: lui $at, 0x29
    a2 = g_0028ff98;  // Global at 0x0028ff98                   // 0x001a04c0: lw $a2, -0x68($at)
    at = 0x29 << 16;                                            // 0x001a04cc: lui $at, 0x29
    a2 = (unsigned)a2 >> 5;                                     // 0x001a04d0: srl $a2, $a2, 5
    a2 = a2 | a3;                                               // 0x001a04e0: or $a2, $a2, $a3
    at = 0x1200 << 16;                                          // 0x001a04e8: lui $at, 0x1200
    a1 = a1 | a2;                                               // 0x001a04ec: or $a1, $a1, $a2
    goto label_0x1a0548;                                        // 0x001a04f0: b 0x1a0548
label_0x1a04f8:
    a2 = *(int32_t*)((gp) + -0x6448);                           // 0x001a04f8: lw $a2, -0x6448($gp)
    if (a2 >= 0) goto label_0x1a050c;                           // 0x001a04fc: bgez $a2, 0x1a050c
    a1 = a2 >> 6;                                               // 0x001a0500: sra $a1, $a2, 6
    a1 = a2 + 0x3f;                                             // 0x001a0504: addiu $a1, $a2, 0x3f
    a1 = a1 >> 6;                                               // 0x001a0508: sra $a1, $a1, 6
label_0x1a050c:
    at = 0x29 << 16;                                            // 0x001a050c: lui $at, 0x29
    a2 = g_0028ff9c;  // Global at 0x0028ff9c                   // 0x001a0514: lw $a2, -0x64($at)
    at = 0x29 << 16;                                            // 0x001a0520: lui $at, 0x29
    a2 = (unsigned)a2 >> 5;                                     // 0x001a0524: srl $a2, $a2, 5
    a2 = a2 | a3;                                               // 0x001a0534: or $a2, $a2, $a3
    at = 0x1200 << 16;                                          // 0x001a053c: lui $at, 0x1200
    a1 = a1 | a2;                                               // 0x001a0540: or $a1, $a1, $a2
label_0x1a0548:
    at = 0x29 << 16;                                            // 0x001a0548: lui $at, 0x29
    a2 = a0 | v1;                                               // 0x001a0564: or $a2, $a0, $v1
    v1 = 0x9ff;                                                 // 0x001a0568: addiu $v1, $zero, 0x9ff
    at = 0x29 << 16;                                            // 0x001a0570: lui $at, 0x29
    v1 = g_0028ff80;  // Global at 0x0028ff80                   // 0x001a0578: lw $v1, -0x80($at)
    a1 = a1 | a2;                                               // 0x001a057c: or $a1, $a1, $a2
    a0 = a1 | a0;                                               // 0x001a0580: or $a0, $a1, $a0
    v1 = v1 + -1;                                               // 0x001a0584: addiu $v1, $v1, -1
    at = 0x1200 << 16;                                          // 0x001a0588: lui $at, 0x1200
    v1 = v1 | a0;                                               // 0x001a0598: or $v1, $v1, $a0
label_0x1a05a0:
    at = 0x1200 << 16;                                          // 0x001a05a0: lui $at, 0x1200
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a05ac: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a05b0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a05b4: jr $ra
    sp = sp + 0x30;                                             // 0x001a05b8: addiu $sp, $sp, 0x30
}