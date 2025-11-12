void func_001233c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001233c0: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x001233c4: addiu $v0, $zero, 1
    s1 = s0 + 0x48;                                             // 0x001233d4: addiu $s1, $s0, 0x48
    v1 = *(int32_t*)((s0) + 4);                                 // 0x001233e0: lw $v1, 4($s0)
    if (v1 != v0) goto label_0x123518;                          // 0x001233e4: bne $v1, $v0, 0x123518
    s2 = *(int32_t*)(s1);                                       // 0x001233e8: lw $s2, 0($s1)
    func_00134c60();  // 0x134c58                                // 0x001233ec: jal 0x134c58
    a0 = *(int32_t*)((s0) + 8);                                 // 0x001233f0: lw $a0, 8($s0)
    /* bnezl $v0, 0x123518 */                                   // 0x001233f4: bnezl $v0, 0x123518
    v1 = *(int32_t*)((s0) + 4);                                 // 0x001233f8: lw $v1, 4($s0)
    a0 = *(int32_t*)((s0) + 0x7c);                              // 0x001233fc: lw $a0, 0x7c($s0)
    a1 = s0 + 0x68;                                             // 0x00123400: addiu $a1, $s0, 0x68
    v0 = *(int32_t*)((s0) + 0x78);                              // 0x00123404: lw $v0, 0x78($s0)
    a2 = s0 + 0x6c;                                             // 0x00123408: addiu $a2, $s0, 0x6c
    /* call function at address in v0 */                        // 0x0012340c: jalr $v0
    a3 = s0 + 0x70;                                             // 0x00123410: addiu $a3, $s0, 0x70
    a0 = *(int32_t*)((s1) + 0x18);                              // 0x00123414: lw $a0, 0x18($s1)
    a3 = *(int32_t*)((s1) + 0x20);                              // 0x00123418: lw $a3, 0x20($s1)
    a2 = 2;                                                     // 0x0012341c: addiu $a2, $zero, 2
    v1 = *(int32_t*)((s1) + 0x24);                              // 0x00123420: lw $v1, 0x24($s1)
    t1 = a0 - a3;                                               // 0x00123424: subu $t1, $a0, $a3
    a0 = *(int8_t*)((s0) + 0xe);                                // 0x00123428: lb $a0, 0xe($s0)
    v0 = (v1 < t1) ? 1 : 0;                                     // 0x0012342c: slt $v0, $v1, $t1
    a1 = *(int32_t*)((s1) + 4);                                 // 0x00123430: lw $a1, 4($s1)
    if (v0 != 0) t1 = v1;                                       // 0x00123434: movn $t1, $v1, $v0
    v1 = a3 << 1;                                               // 0x00123438: sll $v1, $a3, 1
    t3 = *(int32_t*)((s1) + 0x14);                              // 0x0012343c: lw $t3, 0x14($s1)
    v0 = (a1 < t1) ? 1 : 0;                                     // 0x00123440: slt $v0, $a1, $t1
    if (v0 != 0) t1 = a1;                                       // 0x00123444: movn $t1, $a1, $v0
    t2 = t3 + v1;                                               // 0x00123448: addu $t2, $t3, $v1
    if (a0 != a2) goto label_0x1234c0;                          // 0x0012344c: bne $a0, $a2, 0x1234c0
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x00123450: lbu $v1, 0xe($s0)
    v0 = *(int32_t*)((s1) + 0x1c);                              // 0x00123454: lw $v0, 0x1c($s1)
    v0 = v0 + a3;                                               // 0x0012345c: addu $v0, $v0, $a3
    v0 = v0 << 1;                                               // 0x00123460: sll $v0, $v0, 1
    if (t1 <= 0) goto label_0x1234f8;                           // 0x00123464: blez $t1, 0x1234f8
    t3 = t3 + v0;                                               // 0x00123468: addu $t3, $t3, $v0
label_0x123470:
    v0 = *(uint16_t*)(a3);                                      // 0x00123470: lhu $v0, 0($a3)
    a0 = t0 << 1;                                               // 0x00123474: sll $a0, $t0, 1
    a1 = a0 + t2;                                               // 0x00123478: addu $a1, $a0, $t2
    a0 = a0 + t3;                                               // 0x0012347c: addu $a0, $a0, $t3
    v1 = v0 << 8;                                               // 0x00123480: sll $v1, $v0, 8
    v0 = (unsigned)v0 >> 8;                                     // 0x00123484: srl $v0, $v0, 8
    v0 = v0 | v1;                                               // 0x00123488: or $v0, $v0, $v1
    t0 = t0 + 1;                                                // 0x0012348c: addiu $t0, $t0, 1
    *(uint16_t*)(a1) = v0;                                      // 0x00123490: sh $v0, 0($a1)
    a2 = (t0 < t1) ? 1 : 0;                                     // 0x00123494: slt $a2, $t0, $t1
    v0 = *(uint16_t*)((a3) + 2);                                // 0x00123498: lhu $v0, 2($a3)
    a3 = a3 + 4;                                                // 0x0012349c: addiu $a3, $a3, 4
    v1 = v0 << 8;                                               // 0x001234a0: sll $v1, $v0, 8
    v0 = (unsigned)v0 >> 8;                                     // 0x001234a4: srl $v0, $v0, 8
    v0 = v0 | v1;                                               // 0x001234a8: or $v0, $v0, $v1
    if (a2 != 0) goto label_0x123470;                           // 0x001234ac: bnez $a2, 0x123470
    *(uint16_t*)(a0) = v0;                                      // 0x001234b0: sh $v0, 0($a0)
    goto label_0x1234f8;                                        // 0x001234b4: b 0x1234f8
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x001234b8: lbu $v1, 0xe($s0)
    /* nop */                                                   // 0x001234bc: nop 
label_0x1234c0:
    if (t1 <= 0) goto label_0x1234f8;                           // 0x001234c0: blez $t1, 0x1234f8
label_0x1234c8:
    a0 = t0 << 1;                                               // 0x001234c8: sll $a0, $t0, 1
    t0 = t0 + 1;                                                // 0x001234cc: addiu $t0, $t0, 1
    v0 = a0 + s2;                                               // 0x001234d0: addu $v0, $a0, $s2
    a0 = a0 + t2;                                               // 0x001234d4: addu $a0, $a0, $t2
    v0 = *(uint16_t*)(v0);                                      // 0x001234d8: lhu $v0, 0($v0)
    a1 = (t0 < t1) ? 1 : 0;                                     // 0x001234dc: slt $a1, $t0, $t1
    v1 = v0 << 8;                                               // 0x001234e0: sll $v1, $v0, 8
    v0 = (unsigned)v0 >> 8;                                     // 0x001234e4: srl $v0, $v0, 8
    v0 = v0 | v1;                                               // 0x001234e8: or $v0, $v0, $v1
    if (a1 != 0) goto label_0x1234c8;                           // 0x001234ec: bnez $a1, 0x1234c8
    *(uint16_t*)(a0) = v0;                                      // 0x001234f0: sh $v0, 0($a0)
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x001234f4: lbu $v1, 0xe($s0)
label_0x1234f8:
    v0 = v1 << 0x18;                                            // 0x001234f8: sll $v0, $v1, 0x18
    v1 = 2;                                                     // 0x001234fc: addiu $v1, $zero, 2
    v0 = v0 >> 0x18;                                            // 0x00123500: sra $v0, $v0, 0x18
    *(uint32_t*)((s0) + 4) = v1;                                // 0x00123504: sw $v1, 4($s0)
    /* multiply: t1 * v0 -> hi:lo */                            // 0x00123508: mult $ac2, $t1, $v0
    *(uint32_t*)((s0) + 0x90) = t1;                             // 0x0012350c: sw $t1, 0x90($s0)
    v0 = v0 << 1;                                               // 0x00123510: sll $v0, $v0, 1
    *(uint32_t*)((s0) + 0x94) = v0;                             // 0x00123514: sw $v0, 0x94($s0)
label_0x123518:
    v0 = 2;                                                     // 0x00123518: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x123544;                          // 0x0012351c: bnel $v1, $v0, 0x123544
    v1 = *(int32_t*)((s0) + 0x80);                              // 0x00123524: lw $v1, 0x80($s0)
    a0 = *(int32_t*)((s0) + 0x84);                              // 0x00123528: lw $a0, 0x84($s0)
    a1 = *(int32_t*)((s0) + 0x94);                              // 0x0012352c: lw $a1, 0x94($s0)
    /* call function at address in v1 */                        // 0x00123530: jalr $v1
    a2 = *(int32_t*)((s0) + 0x90);                              // 0x00123534: lw $a2, 0x90($s0)
    v0 = 3;                                                     // 0x00123538: addiu $v0, $zero, 3
    *(uint32_t*)((s0) + 4) = v0;                                // 0x0012353c: sw $v0, 4($s0)
label_0x123544:
    return;                                                     // 0x00123550: jr $ra
    sp = sp + 0x20;                                             // 0x00123554: addiu $sp, $sp, 0x20
}