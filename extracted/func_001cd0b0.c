void func_001cd0b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x001cd0b0: addiu $sp, $sp, -0x80
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001cd0bc: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001cd0c4: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cd0cc: addu.qb $zero, $sp, $s1
    func_001ccff0();  // 1ccff0                                // 0x001cd0d0: jal 0x1ccff0
    if (v0 != 0) goto label_0x1cd0e8;                           // 0x001cd0d8: bnez $v0, 0x1cd0e8
    goto label_0x1cd51c;                                        // 0x001cd0e0: b 0x1cd51c
label_0x1cd0e8:
    goto label_0x1cd504;                                        // 0x001cd0e8: b 0x1cd504
    /* nop */                                                   // 0x001cd0ec: nop 
label_0x1cd0f0:
    v0 = 0x32 << 16;                                            // 0x001cd0f0: lui $v0, 0x32
    v1 = v1 - s5;                                               // 0x001cd0f4: subu $v1, $v1, $s5
    v0 = v0 + 0x57d0;                                           // 0x001cd0f8: addiu $v0, $v0, 0x57d0
    v1 = v1 << 2;                                               // 0x001cd0fc: sll $v1, $v1, 2
    s0 = v0 + v1;                                               // 0x001cd100: addu $s0, $v0, $v1
    v0 = *(int32_t*)((s0) + 0x74);                              // 0x001cd104: lw $v0, 0x74($s0)
    if (v0 == 0) goto label_0x1cd500;                           // 0x001cd108: beqz $v0, 0x1cd500
    s2 = s0 + 0x74;                                             // 0x001cd10c: addiu $s2, $s0, 0x74
    v1 = s5 << 1;                                               // 0x001cd110: sll $v1, $s5, 1
    v0 = 0x32 << 16;                                            // 0x001cd114: lui $v0, 0x32
    v1 = v1 + s5;                                               // 0x001cd118: addu $v1, $v1, $s5
    v0 = v0 + -0x950;                                           // 0x001cd11c: addiu $v0, $v0, -0x950
    v1 = v1 << 3;                                               // 0x001cd120: sll $v1, $v1, 3
    s3 = v0 + v1;                                               // 0x001cd124: addu $s3, $v0, $v1
    func_001ce750();  // 1ce750                                // 0x001cd128: jal 0x1ce750
    a1 = *(int32_t*)((s0) + 0x7c);                              // 0x001cd130: lw $a1, 0x7c($s0)
    if (a1 == 0) goto label_0x1cd144;                           // 0x001cd134: beqz $a1, 0x1cd144
    s1 = s0 + 0x7c;                                             // 0x001cd138: addiu $s1, $s0, 0x7c
    thunk_func_001ce8a0();  // 1ce8a0                          // 0x001cd13c: jal 0x1ce8a0
label_0x1cd144:
    thunk_func_001ce810();  // 1ce810                          // 0x001cd144: jal 0x1ce810
    s4 = v0 & 0xff;                                             // 0x001cd14c: andi $s4, $v0, 0xff
    thunk_func_001ce810();  // 1ce810                          // 0x001cd150: jal 0x1ce810
    v1 = v0 & 0xff;                                             // 0x001cd158: andi $v1, $v0, 0xff
    v0 = 0x50;                                                  // 0x001cd15c: addiu $v0, $zero, 0x50
    v1 = v1 & 0xf0;                                             // 0x001cd160: andi $v1, $v1, 0xf0
    if (v1 == v0) goto label_0x1cd418;                          // 0x001cd164: beq $v1, $v0, 0x1cd418
    /* nop */                                                   // 0x001cd168: nop 
    v0 = 0x40;                                                  // 0x001cd16c: addiu $v0, $zero, 0x40
    if (v1 == v0) goto label_0x1cd180;                          // 0x001cd170: beq $v1, $v0, 0x1cd180
    /* nop */                                                   // 0x001cd174: nop 
    goto label_0x1cd4ac;                                        // 0x001cd178: b 0x1cd4ac
    a0 = 5;                                                     // 0x001cd17c: addiu $a0, $zero, 5
label_0x1cd180:
    v1 = *(uint8_t*)((s0) + 0x4c);                              // 0x001cd180: lbu $v1, 0x4c($s0)
    v0 = 2;                                                     // 0x001cd184: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x1cd1f8;                          // 0x001cd188: bne $v1, $v0, 0x1cd1f8
    a0 = s0 + 0x4c;                                             // 0x001cd18c: addiu $a0, $s0, 0x4c
    v1 = *(int32_t*)(s2);                                       // 0x001cd190: lw $v1, 0($s2)
    v0 = 1;                                                     // 0x001cd194: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1cd1f8;                          // 0x001cd198: bne $v1, $v0, 0x1cd1f8
    /* nop */                                                   // 0x001cd19c: nop 
    g_00323710 = 0;  // Global at 0x00323710                    // 0x001cd1a0: sb $zero, 0($a0)
    at = 0x32 << 16;                                            // 0x001cd1a4: lui $at, 0x32
    v0 = g_003257df;  // Global at 0x003257df                   // 0x001cd1a8: lbu $v0, 0x57df($at)
    v0 = v0 + -1;                                               // 0x001cd1ac: addiu $v0, $v0, -1
    at = 0x32 << 16;                                            // 0x001cd1b0: lui $at, 0x32
    func_001cd050();  // 1cd050                                // 0x001cd1b4: jal 0x1cd050
    g_003257df = v0;  // Global at 0x003257df                   // 0x001cd1b8: sb $v0, 0x57df($at)
    at = 0x32 << 16;                                            // 0x001cd1bc: lui $at, 0x32
    g_003257de = v0;  // Global at 0x003257de                   // 0x001cd1c0: sb $v0, 0x57de($at)
    at = 0x32 << 16;                                            // 0x001cd1c4: lui $at, 0x32
    a1 = g_003257de;  // Global at 0x003257de                   // 0x001cd1c8: lbu $a1, 0x57de($at)
    func_001ce550();  // 1ce550                                // 0x001cd1cc: jal 0x1ce550
    a0 = s5 & 0xff;                                             // 0x001cd1d0: andi $a0, $s5, 0xff
    thunk_func_001ce780();  // 1ce780                          // 0x001cd1d4: jal 0x1ce780
    v0 = *(int32_t*)((s0) + 0x80);                              // 0x001cd1dc: lw $v0, 0x80($s0)
    v0 = v0 + 1;                                                // 0x001cd1e0: addiu $v0, $v0, 1
    *(uint32_t*)((s0) + 0x80) = v0;                             // 0x001cd1e4: sw $v0, 0x80($s0)
    *(uint32_t*)(s2) = 0;                                       // 0x001cd1e8: sw $zero, 0($s2)
    *(uint32_t*)(s1) = 0;                                       // 0x001cd1ec: sw $zero, 0($s1)
    goto label_0x1cd4f4;                                        // 0x001cd1f0: b 0x1cd4f4
    *(uint32_t*)((s0) + 0x78) = 0;                              // 0x001cd1f4: sw $zero, 0x78($s0)
label_0x1cd1f8:
    func_001ce750();  // 1ce750                                // 0x001cd1f8: jal 0x1ce750
    v0 = *(int32_t*)((s0) + 0x78);                              // 0x001cd200: lw $v0, 0x78($s0)
    if (v0 == 0) goto label_0x1cd334;                           // 0x001cd204: beqz $v0, 0x1cd334
    s2 = s0 + 0x78;                                             // 0x001cd208: addiu $s2, $s0, 0x78
    goto label_0x1cd274;                                        // 0x001cd20c: b 0x1cd274
label_0x1cd214:
    thunk_func_001ce810();  // 1ce810                          // 0x001cd214: jal 0x1ce810
    s6 = v0 & 0xff;                                             // 0x001cd21c: andi $s6, $v0, 0xff
    thunk_func_001ce810();  // 1ce810                          // 0x001cd220: jal 0x1ce810
    if (s4 <= 0) goto label_0x1cd244;                           // 0x001cd228: blez $s4, 0x1cd244
    v0 = s6 & 0xff;                                             // 0x001cd22c: andi $v0, $s6, 0xff
    thunk_func_001ce800();  // 1ce800                          // 0x001cd230: jal 0x1ce800
    v0 = s6 + -2;                                               // 0x001cd238: addiu $v0, $s6, -2
    s6 = v0 & 0xff;                                             // 0x001cd23c: andi $s6, $v0, 0xff
    v0 = s6 & 0xff;                                             // 0x001cd240: andi $v0, $s6, 0xff
label_0x1cd244:
    func_001ce6f0();  // 1ce6f0                                // 0x001cd248: jal 0x1ce6f0
    s6 = v0 + -2;                                               // 0x001cd24c: addiu $s6, $v0, -2
    a0 = 0x32 << 16;                                            // 0x001cd250: lui $a0, 0x32
    a0 = a0 + 0x3710;                                           // 0x001cd258: addiu $a0, $a0, 0x3710
    thunk_func_001ce7b0();  // 1ce7b0                          // 0x001cd25c: jal 0x1ce7b0
    thunk_func_001ce8a0();  // 1ce8a0                          // 0x001cd268: jal 0x1ce8a0
    s4 = s4 + 1;                                                // 0x001cd270: addiu $s4, $s4, 1
label_0x1cd274:
    v0 = *(int32_t*)(s2);                                       // 0x001cd274: lw $v0, 0($s2)
    v0 = (s4 < v0) ? 1 : 0;                                     // 0x001cd278: slt $v0, $s4, $v0
    if (v0 != 0) goto label_0x1cd214;                           // 0x001cd27c: bnez $v0, 0x1cd214
    thunk_func_001ce810();  // 1ce810                          // 0x001cd284: jal 0x1ce810
    /* nop */                                                   // 0x001cd288: nop 
    s4 = v0 & 0xff;                                             // 0x001cd28c: andi $s4, $v0, 0xff
    thunk_func_001ce810();  // 1ce810                          // 0x001cd290: jal 0x1ce810
    thunk_func_001ce800();  // 1ce800                          // 0x001cd298: jal 0x1ce800
    v0 = s4 & 0xff;                                             // 0x001cd2a0: andi $v0, $s4, 0xff
    at = (v0 < 5) ? 1 : 0;                                      // 0x001cd2a4: slti $at, $v0, 5
    if (at == 0) goto label_0x1cd2f8;                           // 0x001cd2a8: beqz $at, 0x1cd2f8
    a0 = 5;                                                     // 0x001cd2ac: addiu $a0, $zero, 5
    func_001cdf70();  // 1cdf70                                // 0x001cd2b4: jal 0x1cdf70
    at = 0x32 << 16;                                            // 0x001cd2bc: lui $at, 0x32
    v0 = 0x15;                                                  // 0x001cd2c0: addiu $v0, $zero, 0x15
    v1 = g_00325938;  // Global at 0x00325938                   // 0x001cd2c4: lhu $v1, 0x5938($at)
    at = 0x32 << 16;                                            // 0x001cd2c8: lui $at, 0x32
    g_00325930 = v0;  // Global at 0x00325930                   // 0x001cd2cc: sw $v0, 0x5930($at)
    v0 = *(int32_t*)((gp) + -0x7b94);                           // 0x001cd2d0: lw $v0, -0x7b94($gp)
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x001cd2d4: slt $v0, $v1, $v0
    if (v0 != 0) goto label_0x1cd2f0;                           // 0x001cd2d8: bnez $v0, 0x1cd2f0
    v0 = 0x10;                                                  // 0x001cd2e0: addiu $v0, $zero, 0x10
    at = 0x32 << 16;                                            // 0x001cd2e4: lui $at, 0x32
    g_00325930 = v0;  // Global at 0x00325930                   // 0x001cd2e8: sw $v0, 0x5930($at)
label_0x1cd2f0:
    goto label_0x1cd520;                                        // 0x001cd2f0: b 0x1cd520
label_0x1cd2f8:
    s4 = v0 + -4;                                               // 0x001cd2f8: addiu $s4, $v0, -4
    if (s4 <= 0) goto label_0x1cd384;                           // 0x001cd2fc: blez $s4, 0x1cd384
    func_001ce6f0();  // 1ce6f0                                // 0x001cd304: jal 0x1ce6f0
    a0 = 0x32 << 16;                                            // 0x001cd30c: lui $a0, 0x32
    a0 = a0 + 0x3710;                                           // 0x001cd314: addiu $a0, $a0, 0x3710
    thunk_func_001ce7b0();  // 1ce7b0                          // 0x001cd318: jal 0x1ce7b0
    thunk_func_001ce8a0();  // 1ce8a0                          // 0x001cd324: jal 0x1ce8a0
    goto label_0x1cd380;                                        // 0x001cd32c: b 0x1cd380
    /* nop */                                                   // 0x001cd330: nop 
label_0x1cd334:
    thunk_func_001ce810();  // 1ce810                          // 0x001cd334: jal 0x1ce810
    s4 = v0 & 0xff;                                             // 0x001cd33c: andi $s4, $v0, 0xff
    thunk_func_001ce810();  // 1ce810                          // 0x001cd340: jal 0x1ce810
    v0 = s4 & 0xff;                                             // 0x001cd348: andi $v0, $s4, 0xff
    s4 = v0 + -2;                                               // 0x001cd34c: addiu $s4, $v0, -2
    if (s4 == 0) goto label_0x1cd380;                           // 0x001cd350: beqz $s4, 0x1cd380
    func_001ce6f0();  // 1ce6f0                                // 0x001cd358: jal 0x1ce6f0
    /* nop */                                                   // 0x001cd35c: nop 
    a0 = 0x32 << 16;                                            // 0x001cd360: lui $a0, 0x32
    a0 = a0 + 0x3710;                                           // 0x001cd368: addiu $a0, $a0, 0x3710
    thunk_func_001ce7b0();  // 1ce7b0                          // 0x001cd36c: jal 0x1ce7b0
    thunk_func_001ce8a0();  // 1ce8a0                          // 0x001cd378: jal 0x1ce8a0
label_0x1cd380:
label_0x1cd384:
    func_001ce830();  // 1ce830                                // 0x001cd384: jal 0x1ce830
    a1 = -1;                                                    // 0x001cd388: addiu $a1, $zero, -1
    v0 = *(int32_t*)((s0) + 0x80);                              // 0x001cd38c: lw $v0, 0x80($s0)
    v0 = v0 + 1;                                                // 0x001cd390: addiu $v0, $v0, 1
    *(uint32_t*)((s0) + 0x80) = v0;                             // 0x001cd394: sw $v0, 0x80($s0)
    v0 = *(int32_t*)((s0) + 0x74);                              // 0x001cd398: lw $v0, 0x74($s0)
    v0 = v0 + -1;                                               // 0x001cd39c: addiu $v0, $v0, -1
    *(uint32_t*)((s0) + 0x74) = v0;                             // 0x001cd3a0: sw $v0, 0x74($s0)
    *(uint32_t*)(s1) = 0;                                       // 0x001cd3a4: sw $zero, 0($s1)
    *(uint32_t*)(s2) = 0;                                       // 0x001cd3a8: sw $zero, 0($s2)
    v0 = *(int32_t*)((s0) + 0x74);                              // 0x001cd3ac: lw $v0, 0x74($s0)
    if (v0 != 0) goto label_0x1cd3c4;                           // 0x001cd3b0: bnez $v0, 0x1cd3c4
    /* nop */                                                   // 0x001cd3b4: nop 
    v0 = *(int32_t*)(s2);                                       // 0x001cd3b8: lw $v0, 0($s2)
    if (v0 == 0) goto label_0x1cd4f8;                           // 0x001cd3bc: beqz $v0, 0x1cd4f8
label_0x1cd3c4:
    v0 = *(int32_t*)((s3) + 0xc);                               // 0x001cd3c4: lw $v0, 0xc($s3)
    if (v0 != 0) goto label_0x1cd4f4;                           // 0x001cd3c8: bnez $v0, 0x1cd4f4
    a0 = 5;                                                     // 0x001cd3cc: addiu $a0, $zero, 5
    func_001cdf70();  // 1cdf70                                // 0x001cd3d4: jal 0x1cdf70
    at = 0x32 << 16;                                            // 0x001cd3dc: lui $at, 0x32
    v0 = 0x15;                                                  // 0x001cd3e0: addiu $v0, $zero, 0x15
    v1 = g_00325938;  // Global at 0x00325938                   // 0x001cd3e4: lhu $v1, 0x5938($at)
    at = 0x32 << 16;                                            // 0x001cd3e8: lui $at, 0x32
    g_00325930 = v0;  // Global at 0x00325930                   // 0x001cd3ec: sw $v0, 0x5930($at)
    v0 = *(int32_t*)((gp) + -0x7b94);                           // 0x001cd3f0: lw $v0, -0x7b94($gp)
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x001cd3f4: slt $v0, $v1, $v0
    if (v0 != 0) goto label_0x1cd410;                           // 0x001cd3f8: bnez $v0, 0x1cd410
    v0 = 0x10;                                                  // 0x001cd400: addiu $v0, $zero, 0x10
    at = 0x32 << 16;                                            // 0x001cd404: lui $at, 0x32
    g_00325930 = v0;  // Global at 0x00325930                   // 0x001cd408: sw $v0, 0x5930($at)
label_0x1cd410:
    goto label_0x1cd51c;                                        // 0x001cd410: b 0x1cd51c
    /* nop */                                                   // 0x001cd414: nop 
label_0x1cd418:
    v0 = *(int32_t*)(s1);                                       // 0x001cd418: lw $v0, 0($s1)
    v1 = s4 & 0xff;                                             // 0x001cd41c: andi $v1, $s4, 0xff
    v0 = v0 + v1;                                               // 0x001cd420: addu $v0, $v0, $v1
    *(uint32_t*)(s1) = v0;                                      // 0x001cd424: sw $v0, 0($s1)
    v0 = *(int32_t*)((s0) + 0x78);                              // 0x001cd428: lw $v0, 0x78($s0)
    v0 = v0 + 1;                                                // 0x001cd42c: addiu $v0, $v0, 1
    *(uint32_t*)((s0) + 0x78) = v0;                             // 0x001cd430: sw $v0, 0x78($s0)
    v0 = *(int32_t*)((s0) + 0x74);                              // 0x001cd434: lw $v0, 0x74($s0)
    v0 = v0 + -1;                                               // 0x001cd438: addiu $v0, $v0, -1
    *(uint32_t*)((s0) + 0x74) = v0;                             // 0x001cd43c: sw $v0, 0x74($s0)
    v0 = *(int32_t*)((s0) + 0x74);                              // 0x001cd440: lw $v0, 0x74($s0)
    if (v0 != 0) goto label_0x1cd458;                           // 0x001cd444: bnez $v0, 0x1cd458
    a0 = s0 + 0x78;                                             // 0x001cd448: addiu $a0, $s0, 0x78
    v0 = g_00323710;  // Global at 0x00323710                   // 0x001cd44c: lw $v0, 0($a0)
    if (v0 == 0) goto label_0x1cd4f4;                           // 0x001cd450: beqz $v0, 0x1cd4f4
    /* nop */                                                   // 0x001cd454: nop 
label_0x1cd458:
    v0 = *(int32_t*)((s3) + 0xc);                               // 0x001cd458: lw $v0, 0xc($s3)
    if (v0 != 0) goto label_0x1cd4f4;                           // 0x001cd45c: bnez $v0, 0x1cd4f4
    a0 = 5;                                                     // 0x001cd460: addiu $a0, $zero, 5
    func_001cdf70();  // 1cdf70                                // 0x001cd468: jal 0x1cdf70
    at = 0x32 << 16;                                            // 0x001cd470: lui $at, 0x32
    v0 = 0x15;                                                  // 0x001cd474: addiu $v0, $zero, 0x15
    v1 = g_00325938;  // Global at 0x00325938                   // 0x001cd478: lhu $v1, 0x5938($at)
    at = 0x32 << 16;                                            // 0x001cd47c: lui $at, 0x32
    g_00325930 = v0;  // Global at 0x00325930                   // 0x001cd480: sw $v0, 0x5930($at)
    v0 = *(int32_t*)((gp) + -0x7b94);                           // 0x001cd484: lw $v0, -0x7b94($gp)
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x001cd488: slt $v0, $v1, $v0
    if (v0 != 0) goto label_0x1cd4a4;                           // 0x001cd48c: bnez $v0, 0x1cd4a4
    v0 = 0x10;                                                  // 0x001cd494: addiu $v0, $zero, 0x10
    at = 0x32 << 16;                                            // 0x001cd498: lui $at, 0x32
    g_00325930 = v0;  // Global at 0x00325930                   // 0x001cd49c: sw $v0, 0x5930($at)
label_0x1cd4a4:
    goto label_0x1cd51c;                                        // 0x001cd4a4: b 0x1cd51c
    /* nop */                                                   // 0x001cd4a8: nop 
label_0x1cd4ac:
    func_001cdf70();  // 1cdf70                                // 0x001cd4b0: jal 0x1cdf70
    at = 0x32 << 16;                                            // 0x001cd4b8: lui $at, 0x32
    v0 = 0x15;                                                  // 0x001cd4bc: addiu $v0, $zero, 0x15
    v1 = g_00325938;  // Global at 0x00325938                   // 0x001cd4c0: lhu $v1, 0x5938($at)
    at = 0x32 << 16;                                            // 0x001cd4c4: lui $at, 0x32
    g_00325930 = v0;  // Global at 0x00325930                   // 0x001cd4c8: sw $v0, 0x5930($at)
    v0 = *(int32_t*)((gp) + -0x7b94);                           // 0x001cd4cc: lw $v0, -0x7b94($gp)
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x001cd4d0: slt $v0, $v1, $v0
    if (v0 != 0) goto label_0x1cd4ec;                           // 0x001cd4d4: bnez $v0, 0x1cd4ec
    v0 = 0x10;                                                  // 0x001cd4dc: addiu $v0, $zero, 0x10
    at = 0x32 << 16;                                            // 0x001cd4e0: lui $at, 0x32
    g_00325930 = v0;  // Global at 0x00325930                   // 0x001cd4e4: sw $v0, 0x5930($at)
label_0x1cd4ec:
    goto label_0x1cd51c;                                        // 0x001cd4ec: b 0x1cd51c
    /* nop */                                                   // 0x001cd4f0: nop 
label_0x1cd4f4:
label_0x1cd4f8:
    func_001ce750();  // 1ce750                                // 0x001cd4f8: jal 0x1ce750
    /* nop */                                                   // 0x001cd4fc: nop 
label_0x1cd500:
    s5 = s5 + 1;                                                // 0x001cd500: addiu $s5, $s5, 1
label_0x1cd504:
    at = 0x32 << 16;                                            // 0x001cd504: lui $at, 0x32
    v0 = g_003257d5;  // Global at 0x003257d5                   // 0x001cd508: lbu $v0, 0x57d5($at)
    v0 = (s5 < v0) ? 1 : 0;                                     // 0x001cd50c: slt $v0, $s5, $v0
    if (v0 != 0) goto label_0x1cd0f0;                           // 0x001cd510: bnez $v0, 0x1cd0f0
    v1 = s5 << 4;                                               // 0x001cd514: sll $v1, $s5, 4
    v0 = 1;                                                     // 0x001cd518: addiu $v0, $zero, 1
label_0x1cd51c:
label_0x1cd520:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001cd520: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001cd524: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001cd528: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001cd530: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cd534: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cd538: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cd53c: jr $ra
    sp = sp + 0x80;                                             // 0x001cd540: addiu $sp, $sp, 0x80
}