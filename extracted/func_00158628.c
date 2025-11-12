void func_00158628() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = -4;                                                    // 0x0015862c: addiu $v0, $zero, -4
    t0 = t4 & v0;                                               // 0x00158630: and $t0, $t4, $v0
    v0 = t4 - t0;                                               // 0x00158638: subu $v0, $t4, $t0
    t2 = *(int8_t*)(t0);                                        // 0x0015863c: lb $t2, 0($t0)
    t0 = t0 + 1;                                                // 0x00158640: addiu $t0, $t0, 1
    t1 = v0 << 3;                                               // 0x00158644: sll $t1, $v0, 3
    v1 = *(uint8_t*)(t0);                                       // 0x00158648: lbu $v1, 0($t0)
    t0 = t0 + 1;                                                // 0x0015864c: addiu $t0, $t0, 1
    a0 = *(uint8_t*)(t0);                                       // 0x00158650: lbu $a0, 0($t0)
    t0 = t0 + 1;                                                // 0x00158654: addiu $t0, $t0, 1
    a1 = *(uint8_t*)(t0);                                       // 0x00158658: lbu $a1, 0($t0)
    t0 = t0 + 1;                                                // 0x0015865c: addiu $t0, $t0, 1
    a3 = *(int8_t*)(t0);                                        // 0x00158660: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00158664: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00158668: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x0015866c: addiu $t0, $t0, 1
    t2 = t2 << 8;                                               // 0x00158670: sll $t2, $t2, 8
    a3 = a3 << 8;                                               // 0x00158674: sll $a3, $a3, 8
    t2 = t2 | v1;                                               // 0x00158678: or $t2, $t2, $v1
    v1 = *(uint8_t*)(t0);                                       // 0x0015867c: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00158680: or $a3, $a3, $v0
    t2 = t2 << 8;                                               // 0x00158684: sll $t2, $t2, 8
    t0 = t0 + 1;                                                // 0x00158688: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x0015868c: sll $a3, $a3, 8
    t2 = t2 | a0;                                               // 0x00158690: or $t2, $t2, $a0
    v0 = *(uint8_t*)(t0);                                       // 0x00158694: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00158698: or $a3, $a3, $v1
    t2 = t2 << 8;                                               // 0x0015869c: sll $t2, $t2, 8
    a3 = a3 << 8;                                               // 0x001586a0: sll $a3, $a3, 8
    t2 = t2 | a1;                                               // 0x001586a4: or $t2, $t2, $a1
    t0 = t0 + 1;                                                // 0x001586a8: addiu $t0, $t0, 1
    a3 = a3 | v0;                                               // 0x001586ac: or $a3, $a3, $v0
    if (t1 == 0) goto label_0x1586d0;                           // 0x001586b0: beqz $t1, 0x1586d0
    t2 = t2 << t1;                                              // 0x001586b4: sllv $t2, $t2, $t1
    v0 = -t1;                                                   // 0x001586b8: negu $v0, $t1
    v0 = (unsigned)a3 >> v0;                                    // 0x001586bc: srlv $v0, $a3, $v0
    a1 = t2 | v0;                                               // 0x001586c0: or $a1, $t2, $v0
    goto label_0x1586d8;                                        // 0x001586c4: b 0x1586d8
    t2 = a3 << t1;                                              // 0x001586c8: sllv $t2, $a3, $t1
    /* nop */                                                   // 0x001586cc: nop 
label_0x1586d0:
label_0x1586d8:
    a3 = *(int8_t*)(t0);                                        // 0x001586d8: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x001586dc: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x001586e0: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x001586e4: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001586e8: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x001586ec: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x001586f0: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x001586f4: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001586f8: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x001586fc: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00158700: or $a3, $a3, $v1
    a0 = 0x101;                                                 // 0x00158704: addiu $a0, $zero, 0x101
    a3 = a3 << 8;                                               // 0x00158708: sll $a3, $a3, 8
    t0 = t0 + 1;                                                // 0x0015870c: addiu $t0, $t0, 1
    a3 = a3 | v0;                                               // 0x00158710: or $a3, $a3, $v0
    if (a1 != a0) return;  // Branch to 0x158ac4                // 0x00158714: bne $a1, $a0, 0x158ac4
    v0 = (t1 < 0x1b) ? 1 : 0;                                   // 0x0015871c: slti $v0, $t1, 0x1b
    /* bnezl $v0, 0x158778 */                                   // 0x00158720: bnezl $v0, 0x158778
    t1 = t1 + 5;                                                // 0x00158724: addiu $t1, $t1, 5
    t1 = t1 + -0x1b;                                            // 0x00158728: addiu $t1, $t1, -0x1b
    v1 = a3 << t1;                                              // 0x00158730: sllv $v1, $a3, $t1
    a3 = *(int8_t*)(t0);                                        // 0x00158734: lb $a3, 0($t0)
    v0 = t1 ^ 0;                                                // 0x00158738: xori $v0, $t1, 0
    t0 = t0 + 1;                                                // 0x0015873c: addiu $t0, $t0, 1
    if (v0 != 0) t2 = v1;                                       // 0x00158740: movn $t2, $v1, $v0
    v0 = *(uint8_t*)(t0);                                       // 0x00158744: lbu $v0, 0($t0)
    a3 = a3 << 8;                                               // 0x00158748: sll $a3, $a3, 8
    t0 = t0 + 1;                                                // 0x0015874c: addiu $t0, $t0, 1
    v1 = *(uint8_t*)(t0);                                       // 0x00158750: lbu $v1, 0($t0)
    t0 = t0 + 1;                                                // 0x00158754: addiu $t0, $t0, 1
    a3 = a3 | v0;                                               // 0x00158758: or $a3, $a3, $v0
    v0 = *(uint8_t*)(t0);                                       // 0x0015875c: lbu $v0, 0($t0)
    a3 = a3 << 8;                                               // 0x00158760: sll $a3, $a3, 8
    t0 = t0 + 1;                                                // 0x00158764: addiu $t0, $t0, 1
    a3 = a3 | v1;                                               // 0x00158768: or $a3, $a3, $v1
    a3 = a3 << 8;                                               // 0x0015876c: sll $a3, $a3, 8
    goto label_0x15877c;                                        // 0x00158770: b 0x15877c
    a3 = a3 | v0;                                               // 0x00158774: or $a3, $a3, $v0
    t2 = t2 << 5;                                               // 0x00158778: sll $t2, $t2, 5
label_0x15877c:
    v0 = 0x1f;                                                  // 0x0015877c: addiu $v0, $zero, 0x1f
    if (t1 != v0) goto label_0x1587d0;                          // 0x00158780: bne $t1, $v0, 0x1587d0
    a1 = (unsigned)t2 >> 0x1f;                                  // 0x00158784: srl $a1, $t2, 0x1f
    a3 = *(int8_t*)(t0);                                        // 0x0015878c: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00158790: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00158798: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x0015879c: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001587a0: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x001587a4: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x001587a8: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x001587ac: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001587b0: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x001587b4: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x001587b8: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x001587bc: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001587c0: sll $a3, $a3, 8
    goto label_0x1587d8;                                        // 0x001587c4: b 0x1587d8
    a3 = a3 | v0;                                               // 0x001587c8: or $a3, $a3, $v0
    /* nop */                                                   // 0x001587cc: nop 
label_0x1587d0:
    t1 = t1 + 1;                                                // 0x001587d0: addiu $t1, $t1, 1
    t2 = t2 << 1;                                               // 0x001587d4: sll $t2, $t2, 1
label_0x1587d8:
    if (a1 != 0) return;  // Branch to 0x158ac4                 // 0x001587d8: bnez $a1, 0x158ac4
    v0 = 0x1f;                                                  // 0x001587e0: addiu $v0, $zero, 0x1f
    if (t1 != v0) goto label_0x158830;                          // 0x001587e4: bne $t1, $v0, 0x158830
    a1 = (unsigned)t2 >> 0x1f;                                  // 0x001587e8: srl $a1, $t2, 0x1f
    a3 = *(int8_t*)(t0);                                        // 0x001587f0: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x001587f4: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x001587fc: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00158800: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00158804: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00158808: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x0015880c: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00158810: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00158814: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00158818: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x0015881c: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00158820: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00158824: sll $a3, $a3, 8
    goto label_0x158838;                                        // 0x00158828: b 0x158838
    a3 = a3 | v0;                                               // 0x0015882c: or $a3, $a3, $v0
label_0x158830:
    t1 = t1 + 1;                                                // 0x00158830: addiu $t1, $t1, 1
    t2 = t2 << 1;                                               // 0x00158834: sll $t2, $t2, 1
label_0x158838:
    if (a1 == 0) return;  // Branch to 0x158ac4                 // 0x00158838: beqz $a1, 0x158ac4
    v0 = (t1 < 0x1b) ? 1 : 0;                                   // 0x00158840: slti $v0, $t1, 0x1b
    if (v0 != 0) goto label_0x15885c;                           // 0x00158844: bnez $v0, 0x15885c
    a1 = (unsigned)t2 >> 0x1a;                                  // 0x00158848: srl $a1, $t2, 0x1a
    v0 = 0x3a;                                                  // 0x0015884c: addiu $v0, $zero, 0x3a
    v0 = v0 - t1;                                               // 0x00158850: subu $v0, $v0, $t1
    v0 = (unsigned)a3 >> v0;                                    // 0x00158854: srlv $v0, $a3, $v0
    a1 = a1 | v0;                                               // 0x00158858: or $a1, $a1, $v0
label_0x15885c:
    v0 = 0xb;                                                   // 0x0015885c: addiu $v0, $zero, 0xb
    if (a1 == v0) goto label_0x1588a0;                          // 0x00158860: beq $a1, $v0, 0x1588a0
    v0 = ((unsigned)a1 < (unsigned)0xb) ? 1 : 0;                // 0x00158864: sltiu $v0, $a1, 0xb
    if (v0 != 0) goto label_0x158aa0;                           // 0x00158868: bnez $v0, 0x158aa0
    /* nop */                                                   // 0x0015886c: nop 
    v0 = ((unsigned)a1 < (unsigned)0x18) ? 1 : 0;               // 0x00158870: sltiu $v0, $a1, 0x18
    if (v0 == 0) goto label_0x158aa0;                           // 0x00158874: beqz $v0, 0x158aa0
    /* nop */                                                   // 0x00158878: nop 
    v0 = ((unsigned)a1 < (unsigned)0x16) ? 1 : 0;               // 0x0015887c: sltiu $v0, $a1, 0x16
    if (v0 != 0) goto label_0x158aa0;                           // 0x00158880: bnez $v0, 0x158aa0
    t1 = t1 + 5;                                                // 0x00158884: addiu $t1, $t1, 5
    v0 = (t1 < 0x20) ? 1 : 0;                                   // 0x00158888: slti $v0, $t1, 0x20
    /* beqzl $v0, 0x1588b4 */                                   // 0x0015888c: beqzl $v0, 0x1588b4
    t1 = t1 + -0x20;                                            // 0x00158890: addiu $t1, $t1, -0x20
    goto label_0x1588f0;                                        // 0x00158894: b 0x1588f0
    t2 = t2 << 5;                                               // 0x00158898: sll $t2, $t2, 5
    /* nop */                                                   // 0x0015889c: nop 
label_0x1588a0:
    t1 = t1 + 6;                                                // 0x001588a0: addiu $t1, $t1, 6
    v0 = (t1 < 0x20) ? 1 : 0;                                   // 0x001588a4: slti $v0, $t1, 0x20
    /* bnezl $v0, 0x1588f0 */                                   // 0x001588a8: bnezl $v0, 0x1588f0
    t2 = t2 << 6;                                               // 0x001588ac: sll $t2, $t2, 6
    t1 = t1 + -0x20;                                            // 0x001588b0: addiu $t1, $t1, -0x20
    t2 = a3 << t1;                                              // 0x001588b4: sllv $t2, $a3, $t1
    a3 = *(int8_t*)(t0);                                        // 0x001588b8: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x001588bc: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x001588c0: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x001588c4: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001588c8: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x001588cc: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x001588d0: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x001588d4: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001588d8: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x001588dc: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x001588e0: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x001588e4: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001588e8: sll $a3, $a3, 8
    a3 = a3 | v0;                                               // 0x001588ec: or $a3, $a3, $v0
label_0x1588f0:
    a2 = a2 + -1;                                               // 0x001588f0: addiu $a2, $a2, -1
    t3 = 0x35;                                                  // 0x001588f4: addiu $t3, $zero, 0x35
    a0 = 8;                                                     // 0x001588f8: addiu $a0, $zero, 8
    v0 = (t1 < 0x16) ? 1 : 0;                                   // 0x001588fc: slti $v0, $t1, 0x16
label_0x158900:
    if (v0 != 0) goto label_0x158914;                           // 0x00158900: bnez $v0, 0x158914
    a1 = (unsigned)t2 >> 0x15;                                  // 0x00158904: srl $a1, $t2, 0x15
    v0 = t3 - t1;                                               // 0x00158908: subu $v0, $t3, $t1
    v0 = (unsigned)a3 >> v0;                                    // 0x0015890c: srlv $v0, $a3, $v0
    a1 = a1 | v0;                                               // 0x00158910: or $a1, $a1, $v0
label_0x158914:
    if (a1 != a0) goto label_0x158980;                          // 0x00158914: bne $a1, $a0, 0x158980
    v1 = a2 + -1;                                               // 0x00158918: addiu $v1, $a2, -1
    t1 = t1 + 0xb;                                              // 0x0015891c: addiu $t1, $t1, 0xb
    v0 = (t1 < 0x20) ? 1 : 0;                                   // 0x00158920: slti $v0, $t1, 0x20
    /* bnezl $v0, 0x15896c */                                   // 0x00158924: bnezl $v0, 0x15896c
    t2 = t2 << 0xb;                                             // 0x00158928: sll $t2, $t2, 0xb
    t1 = t1 + -0x20;                                            // 0x0015892c: addiu $t1, $t1, -0x20
    t2 = a3 << t1;                                              // 0x00158930: sllv $t2, $a3, $t1
    a3 = *(int8_t*)(t0);                                        // 0x00158934: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00158938: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x0015893c: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00158940: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00158944: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00158948: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x0015894c: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00158950: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00158954: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00158958: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x0015895c: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00158960: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00158964: sll $a3, $a3, 8
    a3 = a3 | v0;                                               // 0x00158968: or $a3, $a3, $v0
    a2 = a2 + -0x21;                                            // 0x0015896c: addiu $a2, $a2, -0x21
    v0 = (a2 < 0x22) ? 1 : 0;                                   // 0x00158970: slti $v0, $a2, 0x22
    if (v0 == 0) goto label_0x158900;                           // 0x00158974: beqz $v0, 0x158900
    v0 = (t1 < 0x16) ? 1 : 0;                                   // 0x00158978: slti $v0, $t1, 0x16
    v1 = a2 + -1;                                               // 0x0015897c: addiu $v1, $a2, -1
label_0x158980:
    v1 = ((unsigned)v1 < (unsigned)0x21) ? 1 : 0;               // 0x00158980: sltiu $v1, $v1, 0x21
    if (v1 == 0) return;  // Branch to 0x158ac4                 // 0x00158984: beqz $v1, 0x158ac4
    v0 = a2 << 1;                                               // 0x0015898c: sll $v0, $a2, 1
    v1 = 0x20;                                                  // 0x00158990: addiu $v1, $zero, 0x20
    a2 = 0x21 << 16;                                            // 0x00158994: lui $a2, 0x21
    a2 = a2 + v0;                                               // 0x00158998: addu $a2, $a2, $v0
    a2 = g_00213e78;  // Global at 0x00213e78                   // 0x0015899c: lh $a2, 0x3e78($a2)
    a0 = a2 & 0xff;                                             // 0x001589a0: andi $a0, $a2, 0xff
    v1 = v1 - a0;                                               // 0x001589a4: subu $v1, $v1, $a0
    v0 = (t1 < v1) ? 1 : 0;                                     // 0x001589a8: slt $v0, $t1, $v1
    if (v0 != 0) goto label_0x158a18;                           // 0x001589ac: bnez $v0, 0x158a18
    a1 = (unsigned)t2 >> v1;                                    // 0x001589b0: srlv $a1, $t2, $v1
    v0 = t1 + a0;                                               // 0x001589b4: addu $v0, $t1, $a0
    t1 = v0 + -0x20;                                            // 0x001589b8: addiu $t1, $v0, -0x20
    /* beqzl $t1, 0x1589d8 */                                   // 0x001589bc: beqzl $t1, 0x1589d8
    v0 = a0 - t1;                                               // 0x001589c4: subu $v0, $a0, $t1
    v0 = (unsigned)a3 >> v0;                                    // 0x001589c8: srlv $v0, $a3, $v0
    t2 = t2 | v0;                                               // 0x001589cc: or $t2, $t2, $v0
    a1 = (unsigned)t2 >> v1;                                    // 0x001589d0: srlv $a1, $t2, $v1
    t2 = a3 << t1;                                              // 0x001589d4: sllv $t2, $a3, $t1
    a3 = *(int8_t*)(t0);                                        // 0x001589d8: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x001589dc: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x001589e0: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x001589e4: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001589e8: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x001589ec: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x001589f0: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x001589f4: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001589f8: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x001589fc: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00158a00: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00158a04: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00158a08: sll $a3, $a3, 8
    goto label_0x158a20;                                        // 0x00158a0c: b 0x158a20
    a3 = a3 | v0;                                               // 0x00158a10: or $a3, $a3, $v0
    /* nop */                                                   // 0x00158a14: nop 
label_0x158a18:
    t2 = t2 << a0;                                              // 0x00158a18: sllv $t2, $t2, $a0
    t1 = t1 + a0;                                               // 0x00158a1c: addu $t1, $t1, $a0
label_0x158a20:
    v1 = a2 >> 8;                                               // 0x00158a20: sra $v1, $a2, 8
    if (a1 != v1) return;  // Branch to 0x158ac4                // 0x00158a24: bne $a1, $v1, 0x158ac4
    v0 = (t1 < 0x1b) ? 1 : 0;                                   // 0x00158a2c: slti $v0, $t1, 0x1b
    if (v0 != 0) goto label_0x158a48;                           // 0x00158a30: bnez $v0, 0x158a48
    a1 = (unsigned)t2 >> 0x1a;                                  // 0x00158a34: srl $a1, $t2, 0x1a
    v0 = 0x3a;                                                  // 0x00158a38: addiu $v0, $zero, 0x3a
    v0 = v0 - t1;                                               // 0x00158a3c: subu $v0, $v0, $t1
    v0 = (unsigned)a3 >> v0;                                    // 0x00158a40: srlv $v0, $a3, $v0
    a1 = a1 | v0;                                               // 0x00158a44: or $a1, $a1, $v0
label_0x158a48:
    v0 = 0xb;                                                   // 0x00158a48: addiu $v0, $zero, 0xb
    if (a1 == v0) goto label_0x158a80;                          // 0x00158a4c: beq $a1, $v0, 0x158a80
    v0 = ((unsigned)a1 < (unsigned)0xb) ? 1 : 0;                // 0x00158a50: sltiu $v0, $a1, 0xb
    if (v0 != 0) goto label_0x158aa0;                           // 0x00158a54: bnez $v0, 0x158aa0
    /* nop */                                                   // 0x00158a58: nop 
    v0 = ((unsigned)a1 < (unsigned)0x18) ? 1 : 0;               // 0x00158a5c: sltiu $v0, $a1, 0x18
    if (v0 == 0) goto label_0x158aa0;                           // 0x00158a60: beqz $v0, 0x158aa0
    /* nop */                                                   // 0x00158a64: nop 
    v0 = ((unsigned)a1 < (unsigned)0x16) ? 1 : 0;               // 0x00158a68: sltiu $v0, $a1, 0x16
    if (v0 != 0) goto label_0x158aa0;                           // 0x00158a6c: bnez $v0, 0x158aa0
    t1 = t1 + 5;                                                // 0x00158a70: addiu $t1, $t1, 5
    goto label_0x158a88;                                        // 0x00158a74: b 0x158a88
    v0 = (t1 < 0x20) ? 1 : 0;                                   // 0x00158a78: slti $v0, $t1, 0x20
    /* nop */                                                   // 0x00158a7c: nop 
label_0x158a80:
    t1 = t1 + 6;                                                // 0x00158a80: addiu $t1, $t1, 6
    v0 = (t1 < 0x20) ? 1 : 0;                                   // 0x00158a84: slti $v0, $t1, 0x20
label_0x158a88:
    /* bnezl $v0, 0x158aac */                                   // 0x00158a88: bnezl $v0, 0x158aac
    v0 = t1 + 7;                                                // 0x00158a8c: addiu $v0, $t1, 7
    t1 = t1 + -0x20;                                            // 0x00158a90: addiu $t1, $t1, -0x20
    return;  // Branch to 0x158aa8                              // 0x00158a94: b 0x158aa8
    t0 = t0 + 4;                                                // 0x00158a98: addiu $t0, $t0, 4
    /* nop */                                                   // 0x00158a9c: nop 
label_0x158aa0:
    return;                                                     // 0x00158aa0: jr $ra
}