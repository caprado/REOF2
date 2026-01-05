void func_001c50b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c50b0: addiu $sp, $sp, -0x20
    a1 = 0x63;                                                  // 0x001c50b4: addiu $a1, $zero, 0x63
    a2 = g_001c65f2;  // Global at 0x001c65f2                   // 0x001c50c0: lb $a2, 2($a0)
    if (a2 == a1) goto label_0x1c55f8;                          // 0x001c50c4: beq $a2, $a1, 0x1c55f8
    v0 = 6;                                                     // 0x001c50cc: addiu $v0, $zero, 6
    if (a2 == v0) goto label_0x1c55d8;                          // 0x001c50d0: beq $a2, $v0, 0x1c55d8
    a0 = 5;                                                     // 0x001c50d4: addiu $a0, $zero, 5
    if (a2 == a0) goto label_0x1c5534;                          // 0x001c50d8: beq $a2, $a0, 0x1c5534
    v0 = 4;                                                     // 0x001c50dc: addiu $v0, $zero, 4
    if (a2 == v0) goto label_0x1c54b4;                          // 0x001c50e0: beq $a2, $v0, 0x1c54b4
    /* nop */                                                   // 0x001c50e4: nop 
    v0 = 3;                                                     // 0x001c50e8: addiu $v0, $zero, 3
    if (a2 == v0) goto label_0x1c561c;                          // 0x001c50ec: beq $a2, $v0, 0x1c561c
    v0 = 1;                                                     // 0x001c50f0: addiu $v0, $zero, 1
    v0 = 2;                                                     // 0x001c50f4: addiu $v0, $zero, 2
    if (a2 == v0) goto label_0x1c52e4;                          // 0x001c50f8: beq $a2, $v0, 0x1c52e4
    v1 = 1;                                                     // 0x001c50fc: addiu $v1, $zero, 1
    if (a2 == v1) goto label_0x1c515c;                          // 0x001c5100: beq $a2, $v1, 0x1c515c
    /* nop */                                                   // 0x001c5104: nop 
    if (a2 == 0) goto label_0x1c5118;                           // 0x001c5108: beqz $a2, 0x1c5118
    /* nop */                                                   // 0x001c510c: nop 
    goto label_0x1c5618;                                        // 0x001c5110: b 0x1c5618
    /* nop */                                                   // 0x001c5114: nop 
label_0x1c5118:
    v0 = *(int32_t*)((s0) + 0x40);                              // 0x001c5118: lw $v0, 0x40($s0)
    if (v0 != 0) goto label_0x1c5130;                           // 0x001c511c: bnez $v0, 0x1c5130
    /* nop */                                                   // 0x001c5120: nop 
    *(uint8_t*)((s0) + 2) = a1;                                 // 0x001c5124: sb $a1, 2($s0)
    goto label_0x1c5618;                                        // 0x001c5128: b 0x1c5618
    *(uint32_t*)((s0) + 0x34) = a0;                             // 0x001c512c: sw $a0, 0x34($s0)
label_0x1c5130:
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c5130: sb $v1, 2($s0)
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c5134: lw $a0, 0x24($s0)
    a1 = *(int32_t*)((s0) + 0xe8);                              // 0x001c5138: lw $a1, 0xe8($s0)
    func_001bffd0();  // 1bffd0                                // 0x001c513c: jal 0x1bffd0
    v0 = 2;                                                     // 0x001c5144: addiu $v0, $zero, 2
    func_001c6b00();  // 1c6b00                                // 0x001c514c: jal 0x1c6b00
    *(uint32_t*)((s0) + 0xf8) = v0;                             // 0x001c5150: sw $v0, 0xf8($s0)
    goto label_0x1c5618;                                        // 0x001c5154: b 0x1c5618
    /* nop */                                                   // 0x001c5158: nop 
label_0x1c515c:
    func_001c0bc0();  // 1c0bc0                                // 0x001c515c: jal 0x1c0bc0
    /* nop */                                                   // 0x001c5160: nop 
    v1 = -1;                                                    // 0x001c5164: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c5618;                          // 0x001c5168: beq $v0, $v1, 0x1c5618
    /* nop */                                                   // 0x001c516c: nop 
    if (v0 == 0) goto label_0x1c5248;                           // 0x001c5170: beqz $v0, 0x1c5248
    v1 = 5;                                                     // 0x001c5174: addiu $v1, $zero, 5
    v1 = -0xfb;                                                 // 0x001c5178: addiu $v1, $zero, -0xfb
    if (v0 == v1) goto label_0x1c5244;                          // 0x001c517c: beq $v0, $v1, 0x1c5244
    v1 = -0xfe;                                                 // 0x001c5180: addiu $v1, $zero, -0xfe
    if (v0 == v1) goto label_0x1c5204;                          // 0x001c5184: beq $v0, $v1, 0x1c5204
    v1 = -0x100;                                                // 0x001c518c: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c51e8;                          // 0x001c5190: beq $v0, $v1, 0x1c51e8
    v1 = -0xfd;                                                 // 0x001c5194: addiu $v1, $zero, -0xfd
    if (v0 == v1) goto label_0x1c51a8;                          // 0x001c5198: beq $v0, $v1, 0x1c51a8
    goto label_0x1c5278;                                        // 0x001c51a0: b 0x1c5278
    v1 = v0 & 0xff;                                             // 0x001c51a4: andi $v1, $v0, 0xff
label_0x1c51a8:
    func_001c6be0();  // 1c6be0                                // 0x001c51a8: jal 0x1c6be0
    /* nop */                                                   // 0x001c51ac: nop 
    v1 = 0xa;                                                   // 0x001c51b0: addiu $v1, $zero, 0xa
    v0 = 2;                                                     // 0x001c51b4: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c51b8: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c51bc: sb $v0, 2($s0)
    v1 = 1;                                                     // 0x001c51c0: addiu $v1, $zero, 1
    *(uint8_t*)((s0) + 3) = v1;                                 // 0x001c51c4: sb $v1, 3($s0)
    v0 = 5;                                                     // 0x001c51c8: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x3c) = 0;                              // 0x001c51cc: sw $zero, 0x3c($s0)
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c51d0: sw $v1, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c51d4: sw $v1, 0x38($s0)
    func_001bfc20();  // 1bfc20                                // 0x001c51d8: jal 0x1bfc20
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c51dc: sw $v0, 0x10($s0)
    goto label_0x1c5618;                                        // 0x001c51e0: b 0x1c5618
    *(uint32_t*)((s0) + 0xe0) = 0;                              // 0x001c51e4: sw $zero, 0xe0($s0)
label_0x1c51e8:
    v0 = 9;                                                     // 0x001c51e8: addiu $v0, $zero, 9
    v1 = 6;                                                     // 0x001c51ec: addiu $v1, $zero, 6
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c51f0: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c51f4: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c51f8: sb $v1, 2($s0)
    goto label_0x1c5618;                                        // 0x001c51fc: b 0x1c5618
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c5200: sw $v0, 0x34($s0)
label_0x1c5204:
    func_001c6be0();  // 1c6be0                                // 0x001c5204: jal 0x1c6be0
    /* nop */                                                   // 0x001c5208: nop 
    v1 = 0xe;                                                   // 0x001c520c: addiu $v1, $zero, 0xe
    v0 = 2;                                                     // 0x001c5210: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c5214: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c5218: sb $v0, 2($s0)
    v1 = 1;                                                     // 0x001c521c: addiu $v1, $zero, 1
    *(uint8_t*)((s0) + 3) = v1;                                 // 0x001c5220: sb $v1, 3($s0)
    v0 = 5;                                                     // 0x001c5224: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x3c) = v1;                             // 0x001c5228: sw $v1, 0x3c($s0)
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c522c: sw $v1, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c5230: sw $v1, 0x38($s0)
    func_001bfc20();  // 1bfc20                                // 0x001c5234: jal 0x1bfc20
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c5238: sw $v0, 0x10($s0)
    goto label_0x1c5618;                                        // 0x001c523c: b 0x1c5618
    *(uint32_t*)((s0) + 0xe0) = 0;                              // 0x001c5240: sw $zero, 0xe0($s0)
label_0x1c5244:
    v1 = 5;                                                     // 0x001c5244: addiu $v1, $zero, 5
label_0x1c5248:
    v0 = 0x14;                                                  // 0x001c5248: addiu $v0, $zero, 0x14
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c524c: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5250: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xe8);                              // 0x001c5254: lw $a1, 0xe8($s0)
    func_001c0320();  // 1c0320                                // 0x001c5258: jal 0x1c0320
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c525c: lw $a0, 0x24($s0)
    a0 = 2;                                                     // 0x001c5260: addiu $a0, $zero, 2
    func_001bfcb0();  // 1bfcb0                                // 0x001c5264: jal 0x1bfcb0
    goto label_0x1c5618;                                        // 0x001c526c: b 0x1c5618
    /* nop */                                                   // 0x001c5270: nop 
label_0x1c5274:
    v1 = v0 & 0xff;                                             // 0x001c5274: andi $v1, $v0, 0xff
label_0x1c5278:
    v0 = 0x63;                                                  // 0x001c5278: addiu $v0, $zero, 0x63
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c527c: sb $v0, 2($s0)
    *(uint32_t*)((s0) + 0x34) = v1;                             // 0x001c5280: sw $v1, 0x34($s0)
    v0 = 4;                                                     // 0x001c5284: addiu $v0, $zero, 4
    v1 = *(int32_t*)((s0) + 0x34);                              // 0x001c5288: lw $v1, 0x34($s0)
    if (v1 == v0) goto label_0x1c52d8;                          // 0x001c528c: beq $v1, $v0, 0x1c52d8
    /* nop */                                                   // 0x001c5290: nop 
    v0 = 3;                                                     // 0x001c5294: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x1c52d0;                          // 0x001c5298: beq $v1, $v0, 0x1c52d0
    v0 = 7;                                                     // 0x001c529c: addiu $v0, $zero, 7
    v0 = 2;                                                     // 0x001c52a0: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c52c8;                          // 0x001c52a4: beq $v1, $v0, 0x1c52c8
    v0 = 6;                                                     // 0x001c52a8: addiu $v0, $zero, 6
    v0 = 1;                                                     // 0x001c52ac: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c52c0;                          // 0x001c52b0: beq $v1, $v0, 0x1c52c0
    v0 = 5;                                                     // 0x001c52b4: addiu $v0, $zero, 5
    goto label_0x1c5618;                                        // 0x001c52b8: b 0x1c5618
    /* nop */                                                   // 0x001c52bc: nop 
label_0x1c52c0:
    goto label_0x1c5618;                                        // 0x001c52c0: b 0x1c5618
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c52c4: sw $v0, 0x2c($s0)
label_0x1c52c8:
    goto label_0x1c5618;                                        // 0x001c52c8: b 0x1c5618
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c52cc: sw $v0, 0x2c($s0)
label_0x1c52d0:
    goto label_0x1c5618;                                        // 0x001c52d0: b 0x1c5618
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c52d4: sw $v0, 0x2c($s0)
label_0x1c52d8:
    v0 = 0x17;                                                  // 0x001c52d8: addiu $v0, $zero, 0x17
    goto label_0x1c5618;                                        // 0x001c52dc: b 0x1c5618
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c52e0: sw $v0, 0x2c($s0)
label_0x1c52e4:
    v1 = *(int8_t*)((s0) + 3);                                  // 0x001c52e4: lb $v1, 3($s0)
    v0 = 1;                                                     // 0x001c52e8: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c5320;                          // 0x001c52ec: beq $v1, $v0, 0x1c5320
    if (v1 == 0) goto label_0x1c5304;                           // 0x001c52f4: beqz $v1, 0x1c5304
    /* nop */                                                   // 0x001c52f8: nop 
    goto label_0x1c5618;                                        // 0x001c52fc: b 0x1c5618
    /* nop */                                                   // 0x001c5300: nop 
label_0x1c5304:
    func_001bfc20();  // 1bfc20                                // 0x001c5304: jal 0x1bfc20
    /* nop */                                                   // 0x001c5308: nop 
    *(uint32_t*)((s0) + 0xe0) = 0;                              // 0x001c530c: sw $zero, 0xe0($s0)
    v0 = *(int8_t*)((s0) + 3);                                  // 0x001c5310: lb $v0, 3($s0)
    v0 = v0 + 1;                                                // 0x001c5314: addiu $v0, $v0, 1
    goto label_0x1c5618;                                        // 0x001c5318: b 0x1c5618
    *(uint8_t*)((s0) + 3) = v0;                                 // 0x001c531c: sb $v0, 3($s0)
label_0x1c5320:
    func_001c0bd0();  // 1c0bd0                                // 0x001c5320: jal 0x1c0bd0
    /* nop */                                                   // 0x001c5324: nop 
    if (v0 != 0) goto label_0x1c536c;                           // 0x001c5328: bnez $v0, 0x1c536c
    a0 = 0x1c << 16;                                            // 0x001c5330: lui $a0, 0x1c
    func_001af2f0();  // 1af2f0                                // 0x001c5334: jal 0x1af2f0
    a0 = a0 + 0x65f0;                                           // 0x001c5338: addiu $a0, $a0, 0x65f0
    v0 = -0x100;                                                // 0x001c533c: addiu $v0, $zero, -0x100
    at = 0x31 << 16;                                            // 0x001c5340: lui $at, 0x31
    g_00315fe4 = v0;  // Global at 0x00315fe4                   // 0x001c5344: sw $v0, 0x5fe4($at)
    a0 = 1;                                                     // 0x001c5348: addiu $a0, $zero, 1
    v1 = 5;                                                     // 0x001c534c: addiu $v1, $zero, 5
    *(uint32_t*)((s0) + 0xe0) = a0;                             // 0x001c5350: sw $a0, 0xe0($s0)
    v0 = 6;                                                     // 0x001c5354: addiu $v0, $zero, 6
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c5358: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c535c: sb $v0, 2($s0)
    *(uint32_t*)((s0) + 0x34) = a0;                             // 0x001c5360: sw $a0, 0x34($s0)
    goto label_0x1c5618;                                        // 0x001c5364: b 0x1c5618
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001c5368: sw $zero, 0x30($s0)
label_0x1c536c:
    func_001c47c0();  // 1c47c0                                // 0x001c536c: jal 0x1c47c0
    /* nop */                                                   // 0x001c5370: nop 
    if (v0 == 0) goto label_0x1c5444;                           // 0x001c5374: beqz $v0, 0x1c5444
    a0 = 0x1c << 16;                                            // 0x001c5378: lui $a0, 0x1c
    func_001af2f0();  // 1af2f0                                // 0x001c537c: jal 0x1af2f0
    a0 = a0 + 0x65f0;                                           // 0x001c5380: addiu $a0, $a0, 0x65f0
    func_001c7460();  // 1c7460                                // 0x001c5384: jal 0x1c7460
    /* nop */                                                   // 0x001c5388: nop 
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001c538c: sw $zero, 0x30($s0)
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c5390: lw $v0, 0x38($s0)
    if (v0 != 0) goto label_0x1c5434;                           // 0x001c5394: bnez $v0, 0x1c5434
    v1 = -0x100;                                                // 0x001c5398: addiu $v1, $zero, -0x100
    v1 = *(int32_t*)((s0) + 0x3c);                              // 0x001c539c: lw $v1, 0x3c($s0)
    v0 = 2;                                                     // 0x001c53a0: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c5408;                          // 0x001c53a4: beq $v1, $v0, 0x1c5408
    v0 = 1;                                                     // 0x001c53a8: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c53e8;                          // 0x001c53ac: beq $v1, $v0, 0x1c53e8
    /* nop */                                                   // 0x001c53b0: nop 
    if (v1 == 0) goto label_0x1c53c4;                           // 0x001c53b4: beqz $v1, 0x1c53c4
    /* nop */                                                   // 0x001c53b8: nop 
    goto label_0x1c5428;                                        // 0x001c53bc: b 0x1c5428
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c53c0: lw $v0, -0x64d8($gp)
label_0x1c53c4:
    v1 = 5;                                                     // 0x001c53c4: addiu $v1, $zero, 5
    v0 = 0x14;                                                  // 0x001c53c8: addiu $v0, $zero, 0x14
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c53cc: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c53d0: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xe8);                              // 0x001c53d4: lw $a1, 0xe8($s0)
    func_001c0320();  // 1c0320                                // 0x001c53d8: jal 0x1c0320
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c53dc: lw $a0, 0x24($s0)
    goto label_0x1c5424;                                        // 0x001c53e0: b 0x1c5424
    /* nop */                                                   // 0x001c53e4: nop 
label_0x1c53e8:
    v1 = 4;                                                     // 0x001c53e8: addiu $v1, $zero, 4
    v0 = 0xf;                                                   // 0x001c53ec: addiu $v0, $zero, 0xf
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c53f0: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c53f4: sw $v0, 0x2c($s0)
    func_001c0720();  // 1c0720                                // 0x001c53f8: jal 0x1c0720
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c53fc: lw $a0, 0x24($s0)
    goto label_0x1c5424;                                        // 0x001c5400: b 0x1c5424
    /* nop */                                                   // 0x001c5404: nop 
label_0x1c5408:
    v1 = 5;                                                     // 0x001c5408: addiu $v1, $zero, 5
    v0 = 0x14;                                                  // 0x001c540c: addiu $v0, $zero, 0x14
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c5410: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5414: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xe8);                              // 0x001c5418: lw $a1, 0xe8($s0)
    func_001c0320();  // 1c0320                                // 0x001c541c: jal 0x1c0320
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c5420: lw $a0, 0x24($s0)
label_0x1c5424:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c5424: lw $v0, -0x64d8($gp)
label_0x1c5428:
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c5428: sw $v0, 0x14($s0)
    goto label_0x1c5618;                                        // 0x001c542c: b 0x1c5618
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c5430: sw $v0, 0x10($s0)
label_0x1c5434:
    at = 0x31 << 16;                                            // 0x001c5434: lui $at, 0x31
    goto label_0x1c561c;                                        // 0x001c543c: b 0x1c561c
    g_00315fe4 = v1;  // Global at 0x00315fe4                   // 0x001c5440: sw $v1, 0x5fe4($at)
label_0x1c5444:
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x001c5444: lw $v0, 0x10($s0)
    if (v0 == 0) goto label_0x1c545c;                           // 0x001c5448: beqz $v0, 0x1c545c
    /* nop */                                                   // 0x001c544c: nop 
    v0 = v0 + -1;                                               // 0x001c5450: addiu $v0, $v0, -1
    goto label_0x1c5618;                                        // 0x001c5454: b 0x1c5618
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c5458: sw $v0, 0x10($s0)
label_0x1c545c:
    v1 = *(uint16_t*)((s0) + 0xa);                              // 0x001c545c: lhu $v1, 0xa($s0)
    v0 = v1 & 8;                                                // 0x001c5460: andi $v0, $v1, 8
    if (v0 == 0) goto label_0x1c547c;                           // 0x001c5464: beqz $v0, 0x1c547c
    v0 = v1 & 4;                                                // 0x001c5468: andi $v0, $v1, 4
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c546c: lw $v0, 0x38($s0)
    if (v0 == 0) goto label_0x1c5494;                           // 0x001c5470: beqz $v0, 0x1c5494
    /* nop */                                                   // 0x001c5474: nop 
    v0 = v1 & 4;                                                // 0x001c5478: andi $v0, $v1, 4
label_0x1c547c:
    if (v0 == 0) goto label_0x1c5618;                           // 0x001c547c: beqz $v0, 0x1c5618
    /* nop */                                                   // 0x001c5480: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c5484: lw $v1, 0x38($s0)
    v0 = 1;                                                     // 0x001c5488: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1c5618;                          // 0x001c548c: bne $v1, $v0, 0x1c5618
    /* nop */                                                   // 0x001c5490: nop 
label_0x1c5494:
    func_001c7470();  // 1c7470                                // 0x001c5494: jal 0x1c7470
    /* nop */                                                   // 0x001c5498: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c549c: lw $v1, 0x38($s0)
    v0 = 5;                                                     // 0x001c54a0: addiu $v0, $zero, 5
    v1 = v1 ^ 1;                                                // 0x001c54a4: xori $v1, $v1, 1
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c54a8: sw $v1, 0x38($s0)
    goto label_0x1c5618;                                        // 0x001c54ac: b 0x1c5618
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c54b0: sw $v0, 0x10($s0)
label_0x1c54b4:
    func_001c0bc0();  // 1c0bc0                                // 0x001c54b4: jal 0x1c0bc0
    /* nop */                                                   // 0x001c54b8: nop 
    v1 = -1;                                                    // 0x001c54bc: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c5528;                          // 0x001c54c0: beq $v0, $v1, 0x1c5528
    v1 = -0x100;                                                // 0x001c54c4: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c5500;                          // 0x001c54c8: beq $v0, $v1, 0x1c5500
    /* nop */                                                   // 0x001c54cc: nop 
    if (v0 == 0) goto label_0x1c54e0;                           // 0x001c54d0: beqz $v0, 0x1c54e0
    v1 = 5;                                                     // 0x001c54d4: addiu $v1, $zero, 5
    goto label_0x1c551c;                                        // 0x001c54d8: b 0x1c551c
    v1 = 0x63;                                                  // 0x001c54dc: addiu $v1, $zero, 0x63
label_0x1c54e0:
    v0 = 0x14;                                                  // 0x001c54e0: addiu $v0, $zero, 0x14
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c54e4: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c54e8: sw $v0, 0x2c($s0)
    a1 = *(int32_t*)((s0) + 0xe8);                              // 0x001c54ec: lw $a1, 0xe8($s0)
    func_001c0320();  // 1c0320                                // 0x001c54f0: jal 0x1c0320
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001c54f4: lw $a0, 0x24($s0)
    goto label_0x1c552c;                                        // 0x001c54f8: b 0x1c552c
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c54fc: lw $v0, -0x64d8($gp)
label_0x1c5500:
    v0 = 0x10;                                                  // 0x001c5500: addiu $v0, $zero, 0x10
    v1 = 6;                                                     // 0x001c5504: addiu $v1, $zero, 6
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001c5508: sw $v0, 0x2c($s0)
    v0 = 1;                                                     // 0x001c550c: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c5510: sb $v1, 2($s0)
    goto label_0x1c5528;                                        // 0x001c5514: b 0x1c5528
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c5518: sw $v0, 0x34($s0)
label_0x1c551c:
    v0 = v0 & 0xff;                                             // 0x001c551c: andi $v0, $v0, 0xff
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c5520: sb $v1, 2($s0)
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c5524: sw $v0, 0x34($s0)
label_0x1c5528:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c5528: lw $v0, -0x64d8($gp)
label_0x1c552c:
    goto label_0x1c5618;                                        // 0x001c552c: b 0x1c5618
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c5530: sw $v0, 0x14($s0)
label_0x1c5534:
    func_001c0bc0();  // 1c0bc0                                // 0x001c5534: jal 0x1c0bc0
    /* nop */                                                   // 0x001c5538: nop 
    v1 = -1;                                                    // 0x001c553c: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c55cc;                          // 0x001c5540: beq $v0, $v1, 0x1c55cc
    v1 = -0xfe;                                                 // 0x001c5544: addiu $v1, $zero, -0xfe
    if (v0 == v1) goto label_0x1c55a4;                          // 0x001c5548: beq $v0, $v1, 0x1c55a4
    /* nop */                                                   // 0x001c554c: nop 
    v1 = -0x100;                                                // 0x001c5550: addiu $v1, $zero, -0x100
    if (v0 == v1) goto label_0x1c5588;                          // 0x001c5554: beq $v0, $v1, 0x1c5588
    v1 = 0x16;                                                  // 0x001c5558: addiu $v1, $zero, 0x16
    if (v0 == 0) goto label_0x1c556c;                           // 0x001c555c: beqz $v0, 0x1c556c
    v1 = 0x15;                                                  // 0x001c5560: addiu $v1, $zero, 0x15
    goto label_0x1c5274;                                        // 0x001c5564: b 0x1c5274
    /* nop */                                                   // 0x001c5568: nop 
label_0x1c556c:
    v0 = 6;                                                     // 0x001c556c: addiu $v0, $zero, 6
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c5570: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c5574: sb $v0, 2($s0)
    func_001c0bf0();  // 1c0bf0                                // 0x001c5578: jal 0x1c0bf0
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001c557c: sw $zero, 0x34($s0)
    goto label_0x1c55d0;                                        // 0x001c5580: b 0x1c55d0
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c5584: lw $v0, -0x64d8($gp)
label_0x1c5588:
    v0 = 1;                                                     // 0x001c5588: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c558c: sw $v1, 0x2c($s0)
    v1 = *(int8_t*)((s0) + 2);                                  // 0x001c5590: lb $v1, 2($s0)
    v1 = v1 + 1;                                                // 0x001c5594: addiu $v1, $v1, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001c5598: sb $v1, 2($s0)
    goto label_0x1c55cc;                                        // 0x001c559c: b 0x1c55cc
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x001c55a0: sw $v0, 0x34($s0)
label_0x1c55a4:
    v1 = 0xe;                                                   // 0x001c55a4: addiu $v1, $zero, 0xe
    v0 = 2;                                                     // 0x001c55a8: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c55ac: sw $v1, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c55b0: sb $v0, 2($s0)
    v1 = 1;                                                     // 0x001c55b4: addiu $v1, $zero, 1
    *(uint32_t*)((s0) + 0x3c) = v1;                             // 0x001c55b8: sw $v1, 0x3c($s0)
    v0 = 5;                                                     // 0x001c55bc: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x001c55c0: sw $v1, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c55c4: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c55c8: sw $v0, 0x10($s0)
label_0x1c55cc:
    v0 = *(int32_t*)((gp) + -0x64d8);                           // 0x001c55cc: lw $v0, -0x64d8($gp)
label_0x1c55d0:
    goto label_0x1c5618;                                        // 0x001c55d0: b 0x1c5618
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001c55d4: sw $v0, 0x14($s0)
label_0x1c55d8:
    v0 = *(uint16_t*)((s0) + 0xa);                              // 0x001c55d8: lhu $v0, 0xa($s0)
    v0 = v0 & 0xfff0;                                           // 0x001c55dc: andi $v0, $v0, 0xfff0
    if (v0 == 0) goto label_0x1c5618;                           // 0x001c55e0: beqz $v0, 0x1c5618
    /* nop */                                                   // 0x001c55e4: nop 
    func_001c7460();  // 1c7460                                // 0x001c55e8: jal 0x1c7460
    /* nop */                                                   // 0x001c55ec: nop 
    goto label_0x1c561c;                                        // 0x001c55f0: b 0x1c561c
label_0x1c55f8:
    v0 = *(uint16_t*)((s0) + 0xa);                              // 0x001c55f8: lhu $v0, 0xa($s0)
    v0 = v0 & 0xfff0;                                           // 0x001c55fc: andi $v0, $v0, 0xfff0
    if (v0 == 0) goto label_0x1c5618;                           // 0x001c5600: beqz $v0, 0x1c5618
    /* nop */                                                   // 0x001c5604: nop 
    func_001c7460();  // 1c7460                                // 0x001c5608: jal 0x1c7460
    /* nop */                                                   // 0x001c560c: nop 
    goto label_0x1c561c;                                        // 0x001c5610: b 0x1c561c
label_0x1c5618:
    v0 = 1;                                                     // 0x001c5618: addiu $v0, $zero, 1
label_0x1c561c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c5620: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c5624: jr $ra
    sp = sp + 0x20;                                             // 0x001c5628: addiu $sp, $sp, 0x20
}