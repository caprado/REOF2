void func_001562f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 + 4;                                                // 0x001562f8: addiu $v0, $a1, 4
    v1 = -4;                                                    // 0x001562fc: addiu $v1, $zero, -4
    t1 = v0 & v1;                                               // 0x00156300: and $t1, $v0, $v1
    a1 = a1 - t1;                                               // 0x00156308: subu $a1, $a1, $t1
    t2 = *(int8_t*)(t1);                                        // 0x0015630c: lb $t2, 0($t1)
    t1 = t1 + 1;                                                // 0x00156310: addiu $t1, $t1, 1
    v1 = *(uint8_t*)(t1);                                       // 0x00156318: lbu $v1, 0($t1)
    t1 = t1 + 1;                                                // 0x0015631c: addiu $t1, $t1, 1
    a2 = *(uint8_t*)(t1);                                       // 0x00156320: lbu $a2, 0($t1)
    t1 = t1 + 1;                                                // 0x00156324: addiu $t1, $t1, 1
    a3 = *(uint8_t*)(t1);                                       // 0x00156328: lbu $a3, 0($t1)
    t1 = t1 + 1;                                                // 0x0015632c: addiu $t1, $t1, 1
    t0 = *(int8_t*)(t1);                                        // 0x00156330: lb $t0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156334: addiu $t1, $t1, 1
    v0 = *(uint8_t*)(t1);                                       // 0x00156338: lbu $v0, 0($t1)
    t1 = t1 + 1;                                                // 0x0015633c: addiu $t1, $t1, 1
    t2 = t2 << 8;                                               // 0x00156340: sll $t2, $t2, 8
    t0 = t0 << 8;                                               // 0x00156344: sll $t0, $t0, 8
    t2 = t2 | v1;                                               // 0x00156348: or $t2, $t2, $v1
    t0 = t0 | v0;                                               // 0x0015634c: or $t0, $t0, $v0
    a0 = *(uint8_t*)(t1);                                       // 0x00156350: lbu $a0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156354: addiu $t1, $t1, 1
    t2 = t2 << 8;                                               // 0x00156358: sll $t2, $t2, 8
    a1 = a1 + 4;                                                // 0x0015635c: addiu $a1, $a1, 4
    t0 = t0 << 8;                                               // 0x00156360: sll $t0, $t0, 8
    t2 = t2 | a2;                                               // 0x00156364: or $t2, $t2, $a2
    a1 = a1 << 3;                                               // 0x00156368: sll $a1, $a1, 3
    v1 = *(uint8_t*)(t1);                                       // 0x0015636c: lbu $v1, 0($t1)
    t0 = t0 | a0;                                               // 0x00156370: or $t0, $t0, $a0
    t2 = t2 << 8;                                               // 0x00156374: sll $t2, $t2, 8
    t0 = t0 << 8;                                               // 0x00156378: sll $t0, $t0, 8
    t2 = t2 | a3;                                               // 0x0015637c: or $t2, $t2, $a3
    v0 = (a1 < 0x1e) ? 1 : 0;                                   // 0x00156380: slti $v0, $a1, 0x1e
    t0 = t0 | v1;                                               // 0x00156384: or $t0, $t0, $v1
    t2 = t2 << a1;                                              // 0x00156388: sllv $t2, $t2, $a1
    if (v0 != 0) goto label_0x1563f8;                           // 0x0015638c: bnez $v0, 0x1563f8
    t1 = t1 + 1;                                                // 0x00156390: addiu $t1, $t1, 1
    a1 = a1 + -0x1e;                                            // 0x00156394: addiu $a1, $a1, -0x1e
    if (a1 == 0) goto label_0x1563b0;                           // 0x00156398: beqz $a1, 0x1563b0
    v0 = (unsigned)t0 >> 1;                                     // 0x0015639c: srl $v0, $t0, 1
    t2 = t2 | v0;                                               // 0x001563a0: or $t2, $t2, $v0
    t5 = (unsigned)t2 >> 0x1e;                                  // 0x001563a4: srl $t5, $t2, 0x1e
    goto label_0x1563b8;                                        // 0x001563a8: b 0x1563b8
    t2 = t0 << 1;                                               // 0x001563ac: sll $t2, $t0, 1
label_0x1563b0:
    t5 = (unsigned)t2 >> 0x1e;                                  // 0x001563b0: srl $t5, $t2, 0x1e
label_0x1563b8:
    t0 = *(int8_t*)(t1);                                        // 0x001563b8: lb $t0, 0($t1)
    t1 = t1 + 1;                                                // 0x001563bc: addiu $t1, $t1, 1
    v0 = *(uint8_t*)(t1);                                       // 0x001563c0: lbu $v0, 0($t1)
    t1 = t1 + 1;                                                // 0x001563c4: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x001563c8: sll $t0, $t0, 8
    v1 = *(uint8_t*)(t1);                                       // 0x001563cc: lbu $v1, 0($t1)
    t0 = t0 | v0;                                               // 0x001563d0: or $t0, $t0, $v0
    t1 = t1 + 1;                                                // 0x001563d4: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x001563d8: sll $t0, $t0, 8
    v0 = *(uint8_t*)(t1);                                       // 0x001563dc: lbu $v0, 0($t1)
    t0 = t0 | v1;                                               // 0x001563e0: or $t0, $t0, $v1
    t1 = t1 + 1;                                                // 0x001563e4: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x001563e8: sll $t0, $t0, 8
    goto label_0x156404;                                        // 0x001563ec: b 0x156404
    t0 = t0 | v0;                                               // 0x001563f0: or $t0, $t0, $v0
    /* nop */                                                   // 0x001563f4: nop 
label_0x1563f8:
    t5 = (unsigned)t2 >> 0x1e;                                  // 0x001563f8: srl $t5, $t2, 0x1e
    t2 = t2 << 2;                                               // 0x001563fc: sll $t2, $t2, 2
    a1 = a1 + 2;                                                // 0x00156400: addiu $a1, $a1, 2
label_0x156404:
    a1 = a1 + 2;                                                // 0x00156404: addiu $a1, $a1, 2
    v0 = (a1 < 0x20) ? 1 : 0;                                   // 0x00156408: slti $v0, $a1, 0x20
    /* bnezl $v0, 0x156454 */                                   // 0x0015640c: bnezl $v0, 0x156454
    t2 = t2 << 2;                                               // 0x00156410: sll $t2, $t2, 2
    a1 = a1 + -0x20;                                            // 0x00156414: addiu $a1, $a1, -0x20
    t2 = t0 << a1;                                              // 0x00156418: sllv $t2, $t0, $a1
    t0 = *(int8_t*)(t1);                                        // 0x0015641c: lb $t0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156420: addiu $t1, $t1, 1
    v0 = *(uint8_t*)(t1);                                       // 0x00156424: lbu $v0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156428: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x0015642c: sll $t0, $t0, 8
    v1 = *(uint8_t*)(t1);                                       // 0x00156430: lbu $v1, 0($t1)
    t0 = t0 | v0;                                               // 0x00156434: or $t0, $t0, $v0
    t1 = t1 + 1;                                                // 0x00156438: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x0015643c: sll $t0, $t0, 8
    v0 = *(uint8_t*)(t1);                                       // 0x00156440: lbu $v0, 0($t1)
    t0 = t0 | v1;                                               // 0x00156444: or $t0, $t0, $v1
    t1 = t1 + 1;                                                // 0x00156448: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x0015644c: sll $t0, $t0, 8
    t0 = t0 | v0;                                               // 0x00156450: or $t0, $t0, $v0
    v0 = (a1 < 0x1d) ? 1 : 0;                                   // 0x00156454: slti $v0, $a1, 0x1d
    if (v0 != 0) goto label_0x1564c8;                           // 0x00156458: bnez $v0, 0x1564c8
    t4 = (unsigned)t2 >> 0x1d;                                  // 0x0015645c: srl $t4, $t2, 0x1d
    a1 = a1 + -0x1d;                                            // 0x00156460: addiu $a1, $a1, -0x1d
    if (a1 == 0) goto label_0x156488;                           // 0x00156464: beqz $a1, 0x156488
    v0 = 3;                                                     // 0x00156468: addiu $v0, $zero, 3
    v0 = v0 - a1;                                               // 0x0015646c: subu $v0, $v0, $a1
    v0 = (unsigned)t0 >> v0;                                    // 0x00156470: srlv $v0, $t0, $v0
    t2 = t2 | v0;                                               // 0x00156474: or $t2, $t2, $v0
    t4 = (unsigned)t2 >> 0x1d;                                  // 0x00156478: srl $t4, $t2, 0x1d
    goto label_0x15648c;                                        // 0x0015647c: b 0x15648c
    t2 = t0 << a1;                                              // 0x00156480: sllv $t2, $t0, $a1
    /* nop */                                                   // 0x00156484: nop 
label_0x156488:
label_0x15648c:
    t0 = *(int8_t*)(t1);                                        // 0x0015648c: lb $t0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156490: addiu $t1, $t1, 1
    v0 = *(uint8_t*)(t1);                                       // 0x00156494: lbu $v0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156498: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x0015649c: sll $t0, $t0, 8
    v1 = *(uint8_t*)(t1);                                       // 0x001564a0: lbu $v1, 0($t1)
    t0 = t0 | v0;                                               // 0x001564a4: or $t0, $t0, $v0
    t1 = t1 + 1;                                                // 0x001564a8: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x001564ac: sll $t0, $t0, 8
    v0 = *(uint8_t*)(t1);                                       // 0x001564b0: lbu $v0, 0($t1)
    t0 = t0 | v1;                                               // 0x001564b4: or $t0, $t0, $v1
    t1 = t1 + 1;                                                // 0x001564b8: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x001564bc: sll $t0, $t0, 8
    goto label_0x1564d0;                                        // 0x001564c0: b 0x1564d0
    t0 = t0 | v0;                                               // 0x001564c4: or $t0, $t0, $v0
label_0x1564c8:
    t2 = t2 << 3;                                               // 0x001564c8: sll $t2, $t2, 3
    a1 = a1 + 3;                                                // 0x001564cc: addiu $a1, $a1, 3
label_0x1564d0:
    a1 = a1 + 1;                                                // 0x001564d0: addiu $a1, $a1, 1
    v0 = (a1 < 0x20) ? 1 : 0;                                   // 0x001564d4: slti $v0, $a1, 0x20
    /* bnezl $v0, 0x156520 */                                   // 0x001564d8: bnezl $v0, 0x156520
    t2 = t2 << 1;                                               // 0x001564dc: sll $t2, $t2, 1
    a1 = a1 + -0x20;                                            // 0x001564e0: addiu $a1, $a1, -0x20
    t2 = t0 << a1;                                              // 0x001564e4: sllv $t2, $t0, $a1
    t0 = *(int8_t*)(t1);                                        // 0x001564e8: lb $t0, 0($t1)
    t1 = t1 + 1;                                                // 0x001564ec: addiu $t1, $t1, 1
    v0 = *(uint8_t*)(t1);                                       // 0x001564f0: lbu $v0, 0($t1)
    t1 = t1 + 1;                                                // 0x001564f4: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x001564f8: sll $t0, $t0, 8
    v1 = *(uint8_t*)(t1);                                       // 0x001564fc: lbu $v1, 0($t1)
    t0 = t0 | v0;                                               // 0x00156500: or $t0, $t0, $v0
    t1 = t1 + 1;                                                // 0x00156504: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x00156508: sll $t0, $t0, 8
    v0 = *(uint8_t*)(t1);                                       // 0x0015650c: lbu $v0, 0($t1)
    t0 = t0 | v1;                                               // 0x00156510: or $t0, $t0, $v1
    t1 = t1 + 1;                                                // 0x00156514: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x00156518: sll $t0, $t0, 8
    t0 = t0 | v0;                                               // 0x0015651c: or $t0, $t0, $v0
    v0 = (a1 < 0x11) ? 1 : 0;                                   // 0x00156520: slti $v0, $a1, 0x11
    if (v0 != 0) goto label_0x156590;                           // 0x00156524: bnez $v0, 0x156590
    t3 = (unsigned)t2 >> 0x11;                                  // 0x00156528: srl $t3, $t2, 0x11
    a1 = a1 + -0x11;                                            // 0x0015652c: addiu $a1, $a1, -0x11
    if (a1 == 0) goto label_0x156550;                           // 0x00156530: beqz $a1, 0x156550
    v0 = 0xf;                                                   // 0x00156534: addiu $v0, $zero, 0xf
    v0 = v0 - a1;                                               // 0x00156538: subu $v0, $v0, $a1
    v0 = (unsigned)t0 >> v0;                                    // 0x0015653c: srlv $v0, $t0, $v0
    t2 = t2 | v0;                                               // 0x00156540: or $t2, $t2, $v0
    t3 = (unsigned)t2 >> 0x11;                                  // 0x00156544: srl $t3, $t2, 0x11
    goto label_0x156554;                                        // 0x00156548: b 0x156554
    t2 = t0 << a1;                                              // 0x0015654c: sllv $t2, $t0, $a1
label_0x156550:
label_0x156554:
    t0 = *(int8_t*)(t1);                                        // 0x00156554: lb $t0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156558: addiu $t1, $t1, 1
    v0 = *(uint8_t*)(t1);                                       // 0x0015655c: lbu $v0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156560: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x00156564: sll $t0, $t0, 8
    v1 = *(uint8_t*)(t1);                                       // 0x00156568: lbu $v1, 0($t1)
    t0 = t0 | v0;                                               // 0x0015656c: or $t0, $t0, $v0
    t1 = t1 + 1;                                                // 0x00156570: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x00156574: sll $t0, $t0, 8
    v0 = *(uint8_t*)(t1);                                       // 0x00156578: lbu $v0, 0($t1)
    t0 = t0 | v1;                                               // 0x0015657c: or $t0, $t0, $v1
    t1 = t1 + 1;                                                // 0x00156580: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x00156584: sll $t0, $t0, 8
    goto label_0x156598;                                        // 0x00156588: b 0x156598
    t0 = t0 | v0;                                               // 0x0015658c: or $t0, $t0, $v0
label_0x156590:
    t2 = t2 << 0xf;                                             // 0x00156590: sll $t2, $t2, 0xf
    a1 = a1 + 0xf;                                              // 0x00156594: addiu $a1, $a1, 0xf
label_0x156598:
    a1 = a1 + 1;                                                // 0x00156598: addiu $a1, $a1, 1
    v0 = (a1 < 0x20) ? 1 : 0;                                   // 0x0015659c: slti $v0, $a1, 0x20
    /* bnezl $v0, 0x1565e8 */                                   // 0x001565a0: bnezl $v0, 0x1565e8
    t2 = t2 << 1;                                               // 0x001565a4: sll $t2, $t2, 1
    a1 = a1 + -0x20;                                            // 0x001565a8: addiu $a1, $a1, -0x20
    t2 = t0 << a1;                                              // 0x001565ac: sllv $t2, $t0, $a1
    t0 = *(int8_t*)(t1);                                        // 0x001565b0: lb $t0, 0($t1)
    t1 = t1 + 1;                                                // 0x001565b4: addiu $t1, $t1, 1
    v0 = *(uint8_t*)(t1);                                       // 0x001565b8: lbu $v0, 0($t1)
    t1 = t1 + 1;                                                // 0x001565bc: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x001565c0: sll $t0, $t0, 8
    v1 = *(uint8_t*)(t1);                                       // 0x001565c4: lbu $v1, 0($t1)
    t0 = t0 | v0;                                               // 0x001565c8: or $t0, $t0, $v0
    t1 = t1 + 1;                                                // 0x001565cc: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x001565d0: sll $t0, $t0, 8
    v0 = *(uint8_t*)(t1);                                       // 0x001565d4: lbu $v0, 0($t1)
    t0 = t0 | v1;                                               // 0x001565d8: or $t0, $t0, $v1
    t1 = t1 + 1;                                                // 0x001565dc: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x001565e0: sll $t0, $t0, 8
    t0 = t0 | v0;                                               // 0x001565e4: or $t0, $t0, $v0
    v0 = (a1 < 0x11) ? 1 : 0;                                   // 0x001565e8: slti $v0, $a1, 0x11
    if (v0 != 0) goto label_0x156658;                           // 0x001565ec: bnez $v0, 0x156658
    a3 = (unsigned)t2 >> 0x11;                                  // 0x001565f0: srl $a3, $t2, 0x11
    a1 = a1 + -0x11;                                            // 0x001565f4: addiu $a1, $a1, -0x11
    if (a1 == 0) goto label_0x156618;                           // 0x001565f8: beqz $a1, 0x156618
    v0 = 0xf;                                                   // 0x001565fc: addiu $v0, $zero, 0xf
    v0 = v0 - a1;                                               // 0x00156600: subu $v0, $v0, $a1
    v0 = (unsigned)t0 >> v0;                                    // 0x00156604: srlv $v0, $t0, $v0
    t2 = t2 | v0;                                               // 0x00156608: or $t2, $t2, $v0
    a3 = (unsigned)t2 >> 0x11;                                  // 0x0015660c: srl $a3, $t2, 0x11
    goto label_0x15661c;                                        // 0x00156610: b 0x15661c
    t2 = t0 << a1;                                              // 0x00156614: sllv $t2, $t0, $a1
label_0x156618:
label_0x15661c:
    t0 = *(int8_t*)(t1);                                        // 0x0015661c: lb $t0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156620: addiu $t1, $t1, 1
    v0 = *(uint8_t*)(t1);                                       // 0x00156624: lbu $v0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156628: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x0015662c: sll $t0, $t0, 8
    v1 = *(uint8_t*)(t1);                                       // 0x00156630: lbu $v1, 0($t1)
    t0 = t0 | v0;                                               // 0x00156634: or $t0, $t0, $v0
    t1 = t1 + 1;                                                // 0x00156638: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x0015663c: sll $t0, $t0, 8
    v0 = *(uint8_t*)(t1);                                       // 0x00156640: lbu $v0, 0($t1)
    t0 = t0 | v1;                                               // 0x00156644: or $t0, $t0, $v1
    t1 = t1 + 1;                                                // 0x00156648: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x0015664c: sll $t0, $t0, 8
    goto label_0x156660;                                        // 0x00156650: b 0x156660
    t0 = t0 | v0;                                               // 0x00156654: or $t0, $t0, $v0
label_0x156658:
    t2 = t2 << 0xf;                                             // 0x00156658: sll $t2, $t2, 0xf
    a1 = a1 + 0xf;                                              // 0x0015665c: addiu $a1, $a1, 0xf
label_0x156660:
    a1 = a1 + 1;                                                // 0x00156660: addiu $a1, $a1, 1
    v0 = (a1 < 0x20) ? 1 : 0;                                   // 0x00156664: slti $v0, $a1, 0x20
    /* bnezl $v0, 0x1566b0 */                                   // 0x00156668: bnezl $v0, 0x1566b0
    t2 = t2 << 1;                                               // 0x0015666c: sll $t2, $t2, 1
    a1 = a1 + -0x20;                                            // 0x00156670: addiu $a1, $a1, -0x20
    t2 = t0 << a1;                                              // 0x00156674: sllv $t2, $t0, $a1
    t0 = *(int8_t*)(t1);                                        // 0x00156678: lb $t0, 0($t1)
    t1 = t1 + 1;                                                // 0x0015667c: addiu $t1, $t1, 1
    v0 = *(uint8_t*)(t1);                                       // 0x00156680: lbu $v0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156684: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x00156688: sll $t0, $t0, 8
    v1 = *(uint8_t*)(t1);                                       // 0x0015668c: lbu $v1, 0($t1)
    t0 = t0 | v0;                                               // 0x00156690: or $t0, $t0, $v0
    t1 = t1 + 1;                                                // 0x00156694: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x00156698: sll $t0, $t0, 8
    v0 = *(uint8_t*)(t1);                                       // 0x0015669c: lbu $v0, 0($t1)
    t0 = t0 | v1;                                               // 0x001566a0: or $t0, $t0, $v1
    t1 = t1 + 1;                                                // 0x001566a4: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x001566a8: sll $t0, $t0, 8
    t0 = t0 | v0;                                               // 0x001566ac: or $t0, $t0, $v0
    a1 = a1 + 1;                                                // 0x001566b0: addiu $a1, $a1, 1
    v0 = (a1 < 0x20) ? 1 : 0;                                   // 0x001566b4: slti $v0, $a1, 0x20
    /* bnezl $v0, 0x1566f8 */                                   // 0x001566b8: bnezl $v0, 0x1566f8
    t2 = t2 << 1;                                               // 0x001566bc: sll $t2, $t2, 1
    a1 = a1 + -0x20;                                            // 0x001566c0: addiu $a1, $a1, -0x20
    t2 = t0 << a1;                                              // 0x001566c4: sllv $t2, $t0, $a1
    t0 = *(int8_t*)(t1);                                        // 0x001566c8: lb $t0, 0($t1)
    t1 = t1 + 1;                                                // 0x001566cc: addiu $t1, $t1, 1
    v0 = *(uint8_t*)(t1);                                       // 0x001566d0: lbu $v0, 0($t1)
    t1 = t1 + 1;                                                // 0x001566d4: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x001566d8: sll $t0, $t0, 8
    v1 = *(uint8_t*)(t1);                                       // 0x001566dc: lbu $v1, 0($t1)
    t0 = t0 | v0;                                               // 0x001566e0: or $t0, $t0, $v0
    a0 = *(uint8_t*)((t1) + 1);                                 // 0x001566e4: lbu $a0, 1($t1)
    t0 = t0 << 8;                                               // 0x001566e8: sll $t0, $t0, 8
    t0 = t0 | v1;                                               // 0x001566ec: or $t0, $t0, $v1
    t0 = t0 << 8;                                               // 0x001566f0: sll $t0, $t0, 8
    t0 = t0 | a0;                                               // 0x001566f4: or $t0, $t0, $a0
    v0 = (a1 < 0xa) ? 1 : 0;                                    // 0x001566f8: slti $v0, $a1, 0xa
    if (v0 != 0) goto label_0x156724;                           // 0x001566fc: bnez $v0, 0x156724
    a2 = (unsigned)t2 >> 0xa;                                   // 0x00156700: srl $a2, $t2, 0xa
    a1 = a1 + -0xa;                                             // 0x00156704: addiu $a1, $a1, -0xa
    /* beqzl $a1, 0x156728 */                                   // 0x00156708: beqzl $a1, 0x156728
    v0 = t3 << 0xd;                                             // 0x0015670c: sll $v0, $t3, 0xd
    v0 = 0x16;                                                  // 0x00156710: addiu $v0, $zero, 0x16
    v0 = v0 - a1;                                               // 0x00156714: subu $v0, $v0, $a1
    v0 = (unsigned)t0 >> v0;                                    // 0x00156718: srlv $v0, $t0, $v0
    t2 = t2 | v0;                                               // 0x0015671c: or $t2, $t2, $v0
    a2 = (unsigned)t2 >> 0xa;                                   // 0x00156720: srl $a2, $t2, 0xa
label_0x156724:
    v0 = t3 << 0xd;                                             // 0x00156724: sll $v0, $t3, 0xd
    a0 = t4 << 0x1c;                                            // 0x00156728: sll $a0, $t4, 0x1c
    a0 = a0 | v0;                                               // 0x0015672c: or $a0, $a0, $v0
    v0 = ((unsigned)t5 < (unsigned)1) ? 1 : 0;                  // 0x00156730: sltiu $v0, $t5, 1
    v1 = (unsigned)a3 >> 2;                                     // 0x00156734: srl $v1, $a3, 2
    *(uint32_t*)((t6) + 8) = a2;                                // 0x00156738: sw $a2, 8($t6)
    a0 = a0 | v1;                                               // 0x0015673c: or $a0, $a0, $v1
    v1 = 0xc;                                                   // 0x00156740: addiu $v1, $zero, 0xc
    *(uint32_t*)(t6) = v0;                                      // 0x00156744: sw $v0, 0($t6)
    *(uint32_t*)((t6) + 4) = a0;                                // 0x00156748: sw $a0, 4($t6)
    return;                                                     // 0x0015674c: jr $ra
    *(uint32_t*)(t7) = v1;                                      // 0x00156750: sw $v1, 0($t7)
}