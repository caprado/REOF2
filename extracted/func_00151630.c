void func_00151630() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00151630: addiu $sp, $sp, -0x20
    a2 = t2 + 0x128;                                            // 0x0015163c: addiu $a2, $t2, 0x128
    v1 = -4;                                                    // 0x00151644: addiu $v1, $zero, -4
    s0 = s2 & v1;                                               // 0x00151654: and $s0, $s2, $v1
    a0 = s2 - s0;                                               // 0x00151658: subu $a0, $s2, $s0
    v0 = *(int32_t*)((a2) + 0x4ec);                             // 0x0015165c: lw $v0, 0x4ec($a2)
    s1 = a0 << 3;                                               // 0x00151660: sll $s1, $a0, 3
    v0 = v0 + 1;                                                // 0x00151664: addiu $v0, $v0, 1
    *(uint32_t*)((a2) + 0x4ec) = v0;                            // 0x00151668: sw $v0, 0x4ec($a2)
    t0 = *(int8_t*)(s0);                                        // 0x0015166c: lb $t0, 0($s0)
    s0 = s0 + 1;                                                // 0x00151670: addiu $s0, $s0, 1
    v1 = *(uint8_t*)(s0);                                       // 0x00151674: lbu $v1, 0($s0)
    s0 = s0 + 1;                                                // 0x00151678: addiu $s0, $s0, 1
    a0 = *(uint8_t*)(s0);                                       // 0x0015167c: lbu $a0, 0($s0)
    s0 = s0 + 1;                                                // 0x00151680: addiu $s0, $s0, 1
    a1 = *(uint8_t*)(s0);                                       // 0x00151684: lbu $a1, 0($s0)
    s0 = s0 + 1;                                                // 0x00151688: addiu $s0, $s0, 1
    a3 = *(int8_t*)(s0);                                        // 0x0015168c: lb $a3, 0($s0)
    s0 = s0 + 1;                                                // 0x00151690: addiu $s0, $s0, 1
    v0 = *(uint8_t*)(s0);                                       // 0x00151694: lbu $v0, 0($s0)
    s0 = s0 + 1;                                                // 0x00151698: addiu $s0, $s0, 1
    t0 = t0 << 8;                                               // 0x0015169c: sll $t0, $t0, 8
    a3 = a3 << 8;                                               // 0x001516a0: sll $a3, $a3, 8
    t0 = t0 | v1;                                               // 0x001516a4: or $t0, $t0, $v1
    v1 = *(uint8_t*)(s0);                                       // 0x001516a8: lbu $v1, 0($s0)
    a3 = a3 | v0;                                               // 0x001516ac: or $a3, $a3, $v0
    t0 = t0 << 8;                                               // 0x001516b0: sll $t0, $t0, 8
    s0 = s0 + 1;                                                // 0x001516b4: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x001516b8: sll $a3, $a3, 8
    t0 = t0 | a0;                                               // 0x001516bc: or $t0, $t0, $a0
    v0 = *(uint8_t*)(s0);                                       // 0x001516c0: lbu $v0, 0($s0)
    a3 = a3 | v1;                                               // 0x001516c4: or $a3, $a3, $v1
    t0 = t0 << 8;                                               // 0x001516c8: sll $t0, $t0, 8
    a3 = a3 << 8;                                               // 0x001516cc: sll $a3, $a3, 8
    t0 = t0 | a1;                                               // 0x001516d0: or $t0, $t0, $a1
    s0 = s0 + 1;                                                // 0x001516d4: addiu $s0, $s0, 1
    a3 = a3 | v0;                                               // 0x001516d8: or $a3, $a3, $v0
    if (s1 == 0) goto label_0x151700;                           // 0x001516dc: beqz $s1, 0x151700
    t0 = t0 << s1;                                              // 0x001516e0: sllv $t0, $t0, $s1
    v0 = 0x20;                                                  // 0x001516e4: addiu $v0, $zero, 0x20
    v0 = v0 - s1;                                               // 0x001516e8: subu $v0, $v0, $s1
    v0 = (unsigned)a3 >> v0;                                    // 0x001516ec: srlv $v0, $a3, $v0
    v0 = t0 | v0;                                               // 0x001516f0: or $v0, $t0, $v0
    t0 = a3 << s1;                                              // 0x001516f4: sllv $t0, $a3, $s1
    goto label_0x151708;                                        // 0x001516f8: b 0x151708
    *(uint32_t*)((a2) + 0x30) = v0;                             // 0x001516fc: sw $v0, 0x30($a2)
label_0x151700:
    *(uint32_t*)((a2) + 0x30) = t0;                             // 0x00151700: sw $t0, 0x30($a2)
label_0x151708:
    a3 = *(int8_t*)(s0);                                        // 0x00151708: lb $a3, 0($s0)
    s0 = s0 + 1;                                                // 0x0015170c: addiu $s0, $s0, 1
    v0 = *(uint8_t*)(s0);                                       // 0x00151710: lbu $v0, 0($s0)
    s0 = s0 + 1;                                                // 0x00151714: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00151718: sll $a3, $a3, 8
    v1 = *(uint8_t*)(s0);                                       // 0x0015171c: lbu $v1, 0($s0)
    a3 = a3 | v0;                                               // 0x00151720: or $a3, $a3, $v0
    s0 = s0 + 1;                                                // 0x00151724: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00151728: sll $a3, $a3, 8
    v0 = *(uint8_t*)(s0);                                       // 0x0015172c: lbu $v0, 0($s0)
    a3 = a3 | v1;                                               // 0x00151730: or $a3, $a3, $v1
    a0 = 0xf << 16;                                             // 0x00151734: lui $a0, 0xf
    a3 = a3 << 8;                                               // 0x00151738: sll $a3, $a3, 8
    s0 = s0 + 1;                                                // 0x0015173c: addiu $s0, $s0, 1
    a3 = a3 | v0;                                               // 0x00151740: or $a3, $a3, $v0
    a0 = a0 | 0xffff;                                           // 0x00151748: ori $a0, $a0, 0xffff
    t1 = 0x28;                                                  // 0x0015174c: addiu $t1, $zero, 0x28
    goto label_0x1517a4;                                        // 0x00151750: b 0x1517a4
    a1 = 1;                                                     // 0x00151754: addiu $a1, $zero, 1
label_0x151758:
    v0 = (s1 < 0x20) ? 1 : 0;                                   // 0x00151758: slti $v0, $s1, 0x20
    if (v0 != 0) goto label_0x1517a4;                           // 0x0015175c: bnez $v0, 0x1517a4
    a2 = a2 + 1;                                                // 0x00151760: addiu $a2, $a2, 1
    s1 = s1 + -0x20;                                            // 0x00151764: addiu $s1, $s1, -0x20
    t0 = a3 << s1;                                              // 0x00151768: sllv $t0, $a3, $s1
    a3 = *(int8_t*)(s0);                                        // 0x0015176c: lb $a3, 0($s0)
    s0 = s0 + 1;                                                // 0x00151770: addiu $s0, $s0, 1
    v0 = *(uint8_t*)(s0);                                       // 0x00151774: lbu $v0, 0($s0)
    s0 = s0 + 1;                                                // 0x00151778: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x0015177c: sll $a3, $a3, 8
    v1 = *(uint8_t*)(s0);                                       // 0x00151780: lbu $v1, 0($s0)
    a3 = a3 | v0;                                               // 0x00151784: or $a3, $a3, $v0
    s0 = s0 + 1;                                                // 0x00151788: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x0015178c: sll $a3, $a3, 8
    v0 = *(uint8_t*)(s0);                                       // 0x00151790: lbu $v0, 0($s0)
    a3 = a3 | v1;                                               // 0x00151794: or $a3, $a3, $v1
    s0 = s0 + 1;                                                // 0x00151798: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x0015179c: sll $a3, $a3, 8
    a3 = a3 | v0;                                               // 0x001517a0: or $a3, $a3, $v0
label_0x1517a4:
    v0 = (a0 < a2) ? 1 : 0;                                     // 0x001517a4: slt $v0, $a0, $a2
    /* bnezl $v0, 0x1517d8 */                                   // 0x001517a8: bnezl $v0, 0x1517d8
    v0 = (s1 < 9) ? 1 : 0;                                      // 0x001517b0: slti $v0, $s1, 9
    v1 = (unsigned)t0 >> 8;                                     // 0x001517b4: srl $v1, $t0, 8
    if (v0 != 0) goto label_0x1517cc;                           // 0x001517b8: bnez $v0, 0x1517cc
    t0 = t0 << 8;                                               // 0x001517bc: sll $t0, $t0, 8
    v0 = t1 - s1;                                               // 0x001517c0: subu $v0, $t1, $s1
    v0 = (unsigned)a3 >> v0;                                    // 0x001517c4: srlv $v0, $a3, $v0
    v1 = v1 | v0;                                               // 0x001517c8: or $v1, $v1, $v0
label_0x1517cc:
    if (v1 != a1) goto label_0x151758;                          // 0x001517cc: bnel $v1, $a1, 0x151758
    s1 = s1 + 8;                                                // 0x001517d0: addiu $s1, $s1, 8
    func_00151820();  // 151820                                // 0x001517dc: jal 0x151820
    a2 = a2 + 4;                                                // 0x001517e0: addiu $a2, $a2, 4
    v1 = s0 - s2;                                               // 0x001517e4: subu $v1, $s0, $s2
    v1 = v1 << 3;                                               // 0x001517e8: sll $v1, $v1, 3
    v1 = s1 + v1;                                               // 0x001517f0: addu $v1, $s1, $v1
    v0 = v1 + -0x39;                                            // 0x001517f8: addiu $v0, $v1, -0x39
    v1 = v1 + -0x32;                                            // 0x001517fc: addiu $v1, $v1, -0x32
    a0 = (v0 < 0) ? 1 : 0;                                      // 0x00151800: slti $a0, $v0, 0
    if (a0 != 0) v0 = v1;                                       // 0x00151808: movn $v0, $v1, $a0
    v0 = v0 >> 3;                                               // 0x0015180c: sra $v0, $v0, 3
    v0 = s2 + v0;                                               // 0x00151810: addu $v0, $s2, $v0
    return;                                                     // 0x00151818: jr $ra
    sp = sp + 0x20;                                             // 0x0015181c: addiu $sp, $sp, 0x20
}