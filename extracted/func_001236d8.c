void func_001236d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001236d8: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x001236dc: addiu $v0, $zero, 1
    v1 = *(int16_t*)((a0) + 0x9a);                              // 0x001236e4: lh $v1, 0x9a($a0)
    if (v1 != v0) goto label_0x1236f8;                          // 0x001236e8: bne $v1, $v0, 0x1236f8
    return func_001236d8();  // Tail call                        // 0x001236f0: j 0x123558
    sp = sp + 0x10;                                             // 0x001236f4: addiu $sp, $sp, 0x10
label_0x1236f8:
    return func_00123558();  // Tail call                        // 0x001236f8: j 0x1233c0
    sp = sp + 0x10;                                             // 0x001236fc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00123700: addiu $sp, $sp, -0x10
    t4 = 0x64 << 16;                                            // 0x00123718: lui $t4, 0x64
    t3 = *(uint8_t*)((t6) + 3);                                 // 0x00123720: lbu $t3, 3($t6)
    t4 = t4 | 0x732e;                                           // 0x00123724: ori $t4, $t4, 0x732e
    v1 = *(uint8_t*)((t6) + 2);                                 // 0x00123728: lbu $v1, 2($t6)
    a0 = *(uint8_t*)((t6) + 1);                                 // 0x00123730: lbu $a0, 1($t6)
    t3 = t3 << 0x18;                                            // 0x00123734: sll $t3, $t3, 0x18
    v0 = *(uint8_t*)(t6);                                       // 0x00123738: lbu $v0, 0($t6)
    v1 = v1 << 0x10;                                            // 0x0012373c: sll $v1, $v1, 0x10
    a0 = a0 << 8;                                               // 0x00123740: sll $a0, $a0, 8
    v0 = v0 | t3;                                               // 0x00123748: or $v0, $v0, $t3
    v1 = v1 | a0;                                               // 0x0012374c: or $v1, $v1, $a0
    a0 = v0 | v1;                                               // 0x00123750: or $a0, $v0, $v1
    if (a0 == t4) goto label_0x12376c;                          // 0x00123754: beq $a0, $t4, 0x12376c
    t3 = t6 + 4;                                                // 0x00123758: addiu $t3, $t6, 4
    v1 = 0x646e << 16;                                          // 0x0012375c: lui $v1, 0x646e
    v1 = v1 | 0x732e;                                           // 0x00123760: ori $v1, $v1, 0x732e
    if (a0 != v1) goto label_0x123a08;                          // 0x00123764: bne $a0, $v1, 0x123a08
label_0x12376c:
    a2 = *(uint8_t*)((t3) + 3);                                 // 0x0012376c: lbu $a2, 3($t3)
    t7 = 0xff << 16;                                            // 0x00123770: lui $t7, 0xff
    a0 = *(uint8_t*)((t3) + 2);                                 // 0x00123774: lbu $a0, 2($t3)
    a1 = *(uint8_t*)((t3) + 1);                                 // 0x0012377c: lbu $a1, 1($t3)
    a2 = a2 << 0x18;                                            // 0x00123780: sll $a2, $a2, 0x18
    v1 = *(uint8_t*)(t3);                                       // 0x00123784: lbu $v1, 0($t3)
    a1 = a1 << 8;                                               // 0x00123788: sll $a1, $a1, 8
    a0 = a0 << 0x10;                                            // 0x0012378c: sll $a0, $a0, 0x10
    v1 = v1 | a2;                                               // 0x00123790: or $v1, $v1, $a2
    a0 = a0 | a1;                                               // 0x00123794: or $a0, $a0, $a1
    t4 = v1 | a0;                                               // 0x00123798: or $t4, $v1, $a0
    a2 = (unsigned)t4 >> 8;                                     // 0x0012379c: srl $a2, $t4, 8
    a1 = t4 << 8;                                               // 0x001237a0: sll $a1, $t4, 8
    a0 = t4 << 0x18;                                            // 0x001237a4: sll $a0, $t4, 0x18
    v1 = (unsigned)t4 >> 0x18;                                  // 0x001237a8: srl $v1, $t4, 0x18
    a1 = a1 & t7;                                               // 0x001237ac: and $a1, $a1, $t7
    a2 = a2 & 0xff00;                                           // 0x001237b0: andi $a2, $a2, 0xff00
    v1 = v1 | a0;                                               // 0x001237b4: or $v1, $v1, $a0
    a1 = a1 | a2;                                               // 0x001237b8: or $a1, $a1, $a2
    t4 = v1 | a1;                                               // 0x001237bc: or $t4, $v1, $a1
    a0 = (t9 < t4) ? 1 : 0;                                     // 0x001237c0: slt $a0, $t9, $t4
    if (a0 != 0) goto label_0x123a08;                           // 0x001237c4: bnez $a0, 0x123a08
    t3 = t3 + 4;                                                // 0x001237c8: addiu $t3, $t3, 4
    t1 = *(uint8_t*)(t3);                                       // 0x001237cc: lbu $t1, 0($t3)
    t9 = 2;                                                     // 0x001237d0: addiu $t9, $zero, 2
    t0 = *(uint8_t*)((t3) + 3);                                 // 0x001237d4: lbu $t0, 3($t3)
    a2 = *(uint8_t*)((t3) + 2);                                 // 0x001237d8: lbu $a2, 2($t3)
    a3 = *(uint8_t*)((t3) + 1);                                 // 0x001237dc: lbu $a3, 1($t3)
    t3 = t3 + 4;                                                // 0x001237e0: addiu $t3, $t3, 4
    a1 = *(uint8_t*)((t3) + 3);                                 // 0x001237e4: lbu $a1, 3($t3)
    t0 = t0 << 0x18;                                            // 0x001237e8: sll $t0, $t0, 0x18
    a0 = *(uint8_t*)((t3) + 2);                                 // 0x001237ec: lbu $a0, 2($t3)
    a3 = a3 << 8;                                               // 0x001237f0: sll $a3, $a3, 8
    v0 = *(uint8_t*)((t3) + 1);                                 // 0x001237f4: lbu $v0, 1($t3)
    a1 = a1 << 0x18;                                            // 0x001237f8: sll $a1, $a1, 0x18
    v1 = *(uint8_t*)(t3);                                       // 0x001237fc: lbu $v1, 0($t3)
    t3 = t3 + 4;                                                // 0x00123800: addiu $t3, $t3, 4
    v0 = v0 << 8;                                               // 0x00123804: sll $v0, $v0, 8
    a0 = a0 << 0x10;                                            // 0x00123808: sll $a0, $a0, 0x10
    v1 = v1 | a1;                                               // 0x0012380c: or $v1, $v1, $a1
    a0 = a0 | v0;                                               // 0x00123810: or $a0, $a0, $v0
    a2 = a2 << 0x10;                                            // 0x00123814: sll $a2, $a2, 0x10
    a0 = v1 | a0;                                               // 0x00123818: or $a0, $v1, $a0
    a2 = a2 | a3;                                               // 0x0012381c: or $a2, $a2, $a3
    t1 = t1 | t0;                                               // 0x00123820: or $t1, $t1, $t0
    t1 = t1 | a2;                                               // 0x00123824: or $t1, $t1, $a2
    a2 = (unsigned)a0 >> 0x18;                                  // 0x00123828: srl $a2, $a0, 0x18
    v0 = (unsigned)a0 >> 8;                                     // 0x0012382c: srl $v0, $a0, 8
    a1 = a0 << 8;                                               // 0x00123830: sll $a1, $a0, 8
    a3 = (unsigned)t1 >> 8;                                     // 0x00123834: srl $a3, $t1, 8
    v0 = v0 & 0xff00;                                           // 0x00123838: andi $v0, $v0, 0xff00
    v1 = t1 << 8;                                               // 0x0012383c: sll $v1, $t1, 8
    a0 = a0 << 0x18;                                            // 0x00123840: sll $a0, $a0, 0x18
    a1 = a1 & t7;                                               // 0x00123844: and $a1, $a1, $t7
    a2 = a2 | a0;                                               // 0x00123848: or $a2, $a2, $a0
    a1 = a1 | v0;                                               // 0x0012384c: or $a1, $a1, $v0
    v0 = (unsigned)t1 >> 0x18;                                  // 0x00123850: srl $v0, $t1, 0x18
    a0 = t1 << 0x18;                                            // 0x00123854: sll $a0, $t1, 0x18
    v1 = v1 & t7;                                               // 0x00123858: and $v1, $v1, $t7
    a3 = a3 & 0xff00;                                           // 0x0012385c: andi $a3, $a3, 0xff00
    v0 = v0 | a0;                                               // 0x00123860: or $v0, $v0, $a0
    v1 = v1 | a3;                                               // 0x00123864: or $v1, $v1, $a3
    a0 = a2 | a1;                                               // 0x00123868: or $a0, $a2, $a1
    if (a0 == t9) goto label_0x1238b8;                          // 0x0012386c: beq $a0, $t9, 0x1238b8
    t1 = v0 | v1;                                               // 0x00123870: or $t1, $v0, $v1
    v0 = ((unsigned)a0 < (unsigned)3) ? 1 : 0;                  // 0x00123874: sltiu $v0, $a0, 3
    if (v0 == 0) goto label_0x123898;                           // 0x00123878: beqz $v0, 0x123898
    v0 = 3;                                                     // 0x0012387c: addiu $v0, $zero, 3
    v0 = 1;                                                     // 0x00123880: addiu $v0, $zero, 1
    if (a0 == v0) goto label_0x1238a8;                          // 0x00123884: beq $a0, $v0, 0x1238a8
    goto label_0x123a0c;                                        // 0x0012388c: b 0x123a0c
    /* nop */                                                   // 0x00123894: nop 
label_0x123898:
    if (a0 == v0) goto label_0x1238d0;                          // 0x00123898: beq $a0, $v0, 0x1238d0
    goto label_0x123a0c;                                        // 0x001238a0: b 0x123a0c
label_0x1238a8:
    v0 = 8;                                                     // 0x001238a8: addiu $v0, $zero, 8
    *(uint32_t*)(t2) = t9;                                      // 0x001238ac: sw $t9, 0($t2)
    goto label_0x1238dc;                                        // 0x001238b0: b 0x1238dc
    *(uint32_t*)(t5) = v0;                                      // 0x001238b4: sw $v0, 0($t5)
label_0x1238b8:
    v0 = 1;                                                     // 0x001238b8: addiu $v0, $zero, 1
    v1 = 8;                                                     // 0x001238bc: addiu $v1, $zero, 8
    *(uint32_t*)(t2) = v0;                                      // 0x001238c0: sw $v0, 0($t2)
    goto label_0x1238dc;                                        // 0x001238c4: b 0x1238dc
    *(uint32_t*)(t5) = v1;                                      // 0x001238c8: sw $v1, 0($t5)
    /* nop */                                                   // 0x001238cc: nop 
label_0x1238d0:
    v0 = 0x10;                                                  // 0x001238d0: addiu $v0, $zero, 0x10
    *(uint32_t*)(t2) = 0;                                       // 0x001238d4: sw $zero, 0($t2)
    *(uint32_t*)(t5) = v0;                                      // 0x001238d8: sw $v0, 0($t5)
label_0x1238dc:
    a1 = *(uint8_t*)((t3) + 3);                                 // 0x001238dc: lbu $a1, 3($t3)
    a2 = 0xff << 16;                                            // 0x001238e0: lui $a2, 0xff
    v1 = *(uint8_t*)((t3) + 2);                                 // 0x001238e4: lbu $v1, 2($t3)
    a3 = 2;                                                     // 0x001238e8: addiu $a3, $zero, 2
    a0 = *(uint8_t*)((t3) + 1);                                 // 0x001238ec: lbu $a0, 1($t3)
    a1 = a1 << 0x18;                                            // 0x001238f0: sll $a1, $a1, 0x18
    v0 = *(uint8_t*)(t3);                                       // 0x001238f4: lbu $v0, 0($t3)
    t3 = t3 + 4;                                                // 0x001238f8: addiu $t3, $t3, 4
    a0 = a0 << 8;                                               // 0x001238fc: sll $a0, $a0, 8
    v1 = v1 << 0x10;                                            // 0x00123900: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x00123904: or $v1, $v1, $a0
    v0 = v0 | a1;                                               // 0x00123908: or $v0, $v0, $a1
    v0 = v0 | v1;                                               // 0x0012390c: or $v0, $v0, $v1
    a1 = v0 >> 8;                                               // 0x00123910: sra $a1, $v0, 8
    a0 = v0 << 8;                                               // 0x00123914: sll $a0, $v0, 8
    a1 = a1 & 0xff00;                                           // 0x00123918: andi $a1, $a1, 0xff00
    v1 = (unsigned)v0 >> 0x18;                                  // 0x0012391c: srl $v1, $v0, 0x18
    a0 = a0 & a2;                                               // 0x00123920: and $a0, $a0, $a2
    v0 = v0 << 0x18;                                            // 0x00123924: sll $v0, $v0, 0x18
    a0 = a0 | a1;                                               // 0x00123928: or $a0, $a0, $a1
    v1 = v1 | v0;                                               // 0x0012392c: or $v1, $v1, $v0
    v1 = v1 | a0;                                               // 0x00123930: or $v1, $v1, $a0
    *(uint32_t*)(s0) = v1;                                      // 0x00123934: sw $v1, 0($s0)
    a1 = *(uint8_t*)((t3) + 1);                                 // 0x00123938: lbu $a1, 1($t3)
    a0 = *(uint8_t*)((t3) + 3);                                 // 0x0012393c: lbu $a0, 3($t3)
    v1 = *(uint8_t*)((t3) + 2);                                 // 0x00123940: lbu $v1, 2($t3)
    a1 = a1 << 8;                                               // 0x00123944: sll $a1, $a1, 8
    v0 = *(uint8_t*)(t3);                                       // 0x00123948: lbu $v0, 0($t3)
    a0 = a0 << 0x18;                                            // 0x0012394c: sll $a0, $a0, 0x18
    v1 = v1 << 0x10;                                            // 0x00123950: sll $v1, $v1, 0x10
    v1 = v1 | a1;                                               // 0x00123954: or $v1, $v1, $a1
    v0 = v0 | a0;                                               // 0x00123958: or $v0, $v0, $a0
    v0 = v0 | v1;                                               // 0x0012395c: or $v0, $v0, $v1
    a1 = v0 >> 8;                                               // 0x00123960: sra $a1, $v0, 8
    a0 = v0 << 8;                                               // 0x00123964: sll $a0, $v0, 8
    v1 = (unsigned)v0 >> 0x18;                                  // 0x00123968: srl $v1, $v0, 0x18
    v0 = v0 << 0x18;                                            // 0x0012396c: sll $v0, $v0, 0x18
    a0 = a0 & a2;                                               // 0x00123970: and $a0, $a0, $a2
    a1 = a1 & 0xff00;                                           // 0x00123974: andi $a1, $a1, 0xff00
    v1 = v1 | v0;                                               // 0x00123978: or $v1, $v1, $v0
    a0 = a0 | a1;                                               // 0x0012397c: or $a0, $a0, $a1
    v1 = v1 | a0;                                               // 0x00123980: or $v1, $v1, $a0
    *(uint32_t*)(s1) = v1;                                      // 0x00123984: sw $v1, 0($s1)
    t2 = *(int32_t*)(t2);                                       // 0x00123988: lw $t2, 0($t2)
    if (t2 != a3) goto label_0x1239b0;                          // 0x0012398c: bne $t2, $a3, 0x1239b0
    v0 = 1;                                                     // 0x00123990: addiu $v0, $zero, 1
    /* divide: t1 / v1 -> hi:lo */                              // 0x00123994: div $zero, $t1, $v1
    /* beqzl $v1, 0x1239a0 */                                   // 0x00123998: beqzl $v1, 0x1239a0
    /* break (trap) */                                          // 0x0012399c: break 0, 7
    /* mflo $v0 */                                              // 0x001239a0
    goto label_0x123a04;                                        // 0x001239a4: b 0x123a04
    *(uint32_t*)(t8) = v0;                                      // 0x001239a8: sw $v0, 0($t8)
    /* nop */                                                   // 0x001239ac: nop 
label_0x1239b0:
    if (t2 != v0) goto label_0x1239d0;                          // 0x001239b0: bne $t2, $v0, 0x1239d0
    /* nop */                                                   // 0x001239b4: nop 
    /* divide: t1 / v1 -> hi:lo */                              // 0x001239b8: div $zero, $t1, $v1
    /* beqzl $v1, 0x1239c4 */                                   // 0x001239bc: beqzl $v1, 0x1239c4
    /* break (trap) */                                          // 0x001239c0: break 0, 7
    /* mflo $v0 */                                              // 0x001239c4
    goto label_0x123a04;                                        // 0x001239c8: b 0x123a04
    *(uint32_t*)(t8) = v0;                                      // 0x001239cc: sw $v0, 0($t8)
label_0x1239d0:
    if (t2 != 0) goto label_0x123a00;                           // 0x001239d0: bnez $t2, 0x123a00
    v0 = 0x7fff << 16;                                          // 0x001239d4: lui $v0, 0x7fff
    v0 = (unsigned)t1 >> 0x1f;                                  // 0x001239d8: srl $v0, $t1, 0x1f
    /* beqzl $v1, 0x1239e4 */                                   // 0x001239dc: beqzl $v1, 0x1239e4
    /* break (trap) */                                          // 0x001239e0: break 0, 7
    v0 = t1 + v0;                                               // 0x001239e4: addu $v0, $t1, $v0
    v0 = v0 >> 1;                                               // 0x001239e8: sra $v0, $v0, 1
    /* divide: v0 / v1 -> hi:lo */                              // 0x001239ec: div $zero, $v0, $v1
    /* mflo $v0 */                                              // 0x001239f0
    goto label_0x123a04;                                        // 0x001239f4: b 0x123a04
    *(uint32_t*)(t8) = v0;                                      // 0x001239f8: sw $v0, 0($t8)
    /* nop */                                                   // 0x001239fc: nop 
label_0x123a00:
    *(uint32_t*)(t8) = v0;                                      // 0x00123a00: sw $v0, 0($t8)
label_0x123a04:
    v0 = t6 + t4;                                               // 0x00123a04: addu $v0, $t6, $t4
label_0x123a08:
label_0x123a0c:
    return;                                                     // 0x00123a10: jr $ra
    sp = sp + 0x10;                                             // 0x00123a14: addiu $sp, $sp, 0x10
}