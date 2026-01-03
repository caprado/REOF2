void func_001840a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_400, local_404;
    
    sp = sp + -0x4b0;                                           // 0x001840a8: addiu $sp, $sp, -0x4b0
    v0 = 1;                                                     // 0x001840ac: addiu $v0, $zero, 1
    local_400 = 0;                                              // 0x001840f4: sw $zero, 0x400($sp)
    goto label_0x18428c;                                        // 0x001840f8: b 0x18428c
    local_404 = v0;                                             // 0x001840fc: sw $v0, 0x404($sp)
label_0x184100:
    func_0010ab20();  // 10ab20                                // 0x00184104: jal 0x10ab20
    a1 = a2 + -0x60a0;                                          // 0x00184108: addiu $a1, $a2, -0x60a0
    if (v0 != 0) goto label_0x1842d8;                           // 0x0018410c: bnez $v0, 0x1842d8
    s0 = sp + 0x240;                                            // 0x00184110: addiu $s0, $sp, 0x240
    func_0010ae00();  // 10ae00                                // 0x00184114: jal 0x10ae00
    v0 = ((unsigned)v0 < (unsigned)0x20) ? 1 : 0;               // 0x0018411c: sltiu $v0, $v0, 0x20
    if (v0 == 0) goto label_0x1842d8;                           // 0x00184120: beqz $v0, 0x1842d8
    a3 = 0x23 << 16;                                            // 0x00184124: lui $a3, 0x23
    func_0010ab20();  // 10ab20                                // 0x0018412c: jal 0x10ab20
    a1 = a3 + -0x6098;                                          // 0x00184130: addiu $a1, $a3, -0x6098
    if (v0 != 0) goto label_0x1842d8;                           // 0x00184134: bnez $v0, 0x1842d8
label_0x18413c:
    if (s2 == 0) goto label_0x184250;                           // 0x0018413c: beqz $s2, 0x184250
    v0 = *(uint16_t*)(s0);                                      // 0x00184144: lhu $v0, 0($s0)
    v0 = v0 & 0x8000;                                           // 0x00184148: andi $v0, $v0, 0x8000
    if (v0 == 0) goto label_0x18422c;                           // 0x0018414c: beqz $v0, 0x18422c
    *(uint8_t*)((s0) + 0x5f) = 0;                               // 0x00184154: sb $zero, 0x5f($s0)
    func_0010ab20();  // 10ab20                                // 0x00184158: jal 0x10ab20
    a1 = s0 + 0x40;                                             // 0x0018415c: addiu $a1, $s0, 0x40
    if (v0 != 0) goto label_0x184230;                           // 0x00184160: bnez $v0, 0x184230
    v0 = (0 < s2) ? 1 : 0;                                      // 0x00184164: slt $v0, $zero, $s2
    if (s4 == 0) goto label_0x18421c;                           // 0x00184168: beqz $s4, 0x18421c
    /* nop */                                                   // 0x0018416c: nop 
    v0 = s0 | a1;                                               // 0x00184174: or $v0, $s0, $a1
    v0 = v0 & 7;                                                // 0x00184178: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x1841e4;                           // 0x0018417c: beqz $v0, 0x1841e4
    v0 = s0 + 0x200;                                            // 0x00184184: addiu $v0, $s0, 0x200
label_0x184188:
    v1 = v1 + 0x20;                                             // 0x001841c8: addiu $v1, $v1, 0x20
    a1 = a1 + 0x20;                                             // 0x001841cc: addiu $a1, $a1, 0x20
    /* nop */                                                   // 0x001841d0: nop 
    if (v1 != v0) goto label_0x184188;                          // 0x001841d4: bne $v1, $v0, 0x184188
    /* nop */                                                   // 0x001841d8: nop 
    goto label_0x18421c;                                        // 0x001841dc: b 0x18421c
    /* nop */                                                   // 0x001841e0: nop 
label_0x1841e4:
    v0 = s0 + 0x200;                                            // 0x001841e4: addiu $v0, $s0, 0x200
label_0x1841e8:
    v1 = v1 + 0x20;                                             // 0x00184208: addiu $v1, $v1, 0x20
    a1 = a1 + 0x20;                                             // 0x0018420c: addiu $a1, $a1, 0x20
    /* nop */                                                   // 0x00184210: nop 
    if (v1 != v0) goto label_0x1841e8;                          // 0x00184214: bne $v1, $v0, 0x1841e8
    /* nop */                                                   // 0x00184218: nop 
label_0x18421c:
    /* bnezl $s6, 0x184224 */                                   // 0x0018421c: bnezl $s6, 0x184224
    *(uint32_t*)(s6) = s5;                                      // 0x00184220: sw $s5, 0($s6)
    goto label_0x1842ec;                                        // 0x00184224: b 0x1842ec
label_0x18422c:
    v0 = (0 < s2) ? 1 : 0;                                      // 0x0018422c: slt $v0, $zero, $s2
label_0x184230:
    s1 = s1 + 1;                                                // 0x00184230: addiu $s1, $s1, 1
    s2 = s2 - v0;                                               // 0x00184234: subu $s2, $s2, $v0
    s0 = s0 + 0x200;                                            // 0x00184238: addiu $s0, $s0, 0x200
    v0 = (s1 < 2) ? 1 : 0;                                      // 0x0018423c: slti $v0, $s1, 2
    if (v0 == 0) goto label_0x184250;                           // 0x00184240: beqz $v0, 0x184250
    s5 = s5 + 1;                                                // 0x00184244: addiu $s5, $s5, 1
    /* bnezl $s2, 0x184148 */                                   // 0x00184248: bnezl $s2, 0x184148
    v0 = *(uint16_t*)(s0);                                      // 0x0018424c: lhu $v0, 0($s0)
label_0x184250:
    func_00182b88();  // 182b88                                // 0x00184258: jal 0x182b88
    a2 = sp + 0x400;                                            // 0x0018425c: addiu $a2, $sp, 0x400
    v1 = local_400;                                             // 0x00184260: lw $v1, 0x400($sp)
    if (v1 == 0) goto label_0x184274;                           // 0x00184264: beqz $v1, 0x184274
    goto label_0x1842ec;                                        // 0x0018426c: b 0x1842ec
label_0x184274:
    v0 = 0xffff << 16;                                          // 0x00184274: lui $v0, 0xffff
    v0 = v0 | 0xffff;                                           // 0x00184278: ori $v0, $v0, 0xffff
    if (s3 == v0) goto label_0x1842e4;                          // 0x0018427c: beq $s3, $v0, 0x1842e4
    v0 = 0x7fff << 16;                                          // 0x00184280: lui $v0, 0x7fff
    v0 = v0 | 0xffff;                                           // 0x00184284: ori $v0, $v0, 0xffff
    s3 = s3 & v0;                                               // 0x00184288: and $s3, $s3, $v0
label_0x18428c:
    func_00187390();  // 187390                                // 0x00184298: jal 0x187390
    a3 = 1;                                                     // 0x0018429c: addiu $a3, $zero, 1
    if (v0 != 0) goto label_0x1842b4;                           // 0x001842a0: bnez $v0, 0x1842b4
    t0 = local_404;                                             // 0x001842a4: lw $t0, 0x404($sp)
    v0 = 0x8101 << 16;                                          // 0x001842a8: lui $v0, 0x8101
    goto label_0x1842ec;                                        // 0x001842ac: b 0x1842ec
    v0 = v0 | 0x6f;                                             // 0x001842b0: ori $v0, $v0, 0x6f
label_0x1842b4:
    if (t0 == 0) goto label_0x18413c;                           // 0x001842b4: beqz $t0, 0x18413c
    s0 = sp + 0x40;                                             // 0x001842bc: addiu $s0, $sp, 0x40
    local_404 = 0;                                              // 0x001842c0: sw $zero, 0x404($sp)
    func_0010ae00();  // 10ae00                                // 0x001842c4: jal 0x10ae00
    v0 = ((unsigned)v0 < (unsigned)0x20) ? 1 : 0;               // 0x001842cc: sltiu $v0, $v0, 0x20
    if (v0 != 0) goto label_0x184100;                           // 0x001842d0: bnez $v0, 0x184100
    a2 = 0x23 << 16;                                            // 0x001842d4: lui $a2, 0x23
label_0x1842d8:
    v0 = 0x8101 << 16;                                          // 0x001842d8: lui $v0, 0x8101
    goto label_0x1842ec;                                        // 0x001842dc: b 0x1842ec
    v0 = v0 | 0x9002;                                           // 0x001842e0: ori $v0, $v0, 0x9002
label_0x1842e4:
    v0 = 0x8101 << 16;                                          // 0x001842e4: lui $v0, 0x8101
    v0 = v0 | 2;                                                // 0x001842e8: ori $v0, $v0, 2
label_0x1842ec:
    return;                                                     // 0x00184314: jr $ra
    sp = sp + 0x4b0;                                            // 0x00184318: addiu $sp, $sp, 0x4b0
}