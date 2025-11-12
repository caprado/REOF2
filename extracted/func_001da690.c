void func_001da690() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001da690: addiu $sp, $sp, -0x60
    v1 = 0x49 << 16;                                            // 0x001da694: lui $v1, 0x49
    a3 = a1 & 0xff;                                             // 0x001da69c: andi $a3, $a1, 0xff
    v1 = v1 + 0x1380;                                           // 0x001da6a4: addiu $v1, $v1, 0x1380
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001da6a8: dpa.w.ph $ac0, $sp, $s3
    t0 = v1 + a3;                                               // 0x001da6ac: addu $t0, $v1, $a3
    v1 = 0xff;                                                  // 0x001da6b4: addiu $v1, $zero, 0xff
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001da6b8: addu.qb $zero, $sp, $s1
    a0 = *(uint8_t*)(t0);                                       // 0x001da6c0: lbu $a0, 0($t0)
    if (a0 != v1) goto label_0x1da82c;                          // 0x001da6c4: bne $a0, $v1, 0x1da82c
    a0 = 0x49 << 16;                                            // 0x001da6cc: lui $a0, 0x49
    a2 = 0xc84;                                                 // 0x001da6d4: addiu $a2, $zero, 0xc84
    goto label_0x1da6f4;                                        // 0x001da6d8: b 0x1da6f4
    a0 = a0 + 0x5110;                                           // 0x001da6dc: addiu $a0, $a0, 0x5110
label_0x1da6e0:
    v1 = a0 + v1;                                               // 0x001da6e0: addu $v1, $a0, $v1
    v1 = g_00491381;  // Global at 0x00491381                   // 0x001da6e4: lbu $v1, 1($v1)
    if (v1 == 0) goto label_0x1da704;                           // 0x001da6e8: beqz $v1, 0x1da704
    v1 = 6;                                                     // 0x001da6ec: addiu $v1, $zero, 6
    s3 = s3 + 1;                                                // 0x001da6f0: addiu $s3, $s3, 1
label_0x1da6f4:
    v1 = (s3 < 6) ? 1 : 0;                                      // 0x001da6f4: slti $v1, $s3, 6
    if (v1 != 0) goto label_0x1da6e0;                           // 0x001da6f8: bnez $v1, 0x1da6e0
    /* multiply: s3 * a2 -> hi:lo */                            // 0x001da6fc: mult $ac3, $s3, $a2
    v1 = 6;                                                     // 0x001da700: addiu $v1, $zero, 6
label_0x1da704:
    if (s3 == v1) goto label_0x1da82c;                          // 0x001da704: beq $s3, $v1, 0x1da82c
    /* nop */                                                   // 0x001da708: nop 
    v0 = 0x36 << 16;                                            // 0x001da70c: lui $v0, 0x36
    a0 = a3 << 3;                                               // 0x001da710: sll $a0, $a3, 3
    v0 = v0 + -0x7930;                                          // 0x001da714: addiu $v0, $v0, -0x7930
    v1 = 0xc84;                                                 // 0x001da718: addiu $v1, $zero, 0xc84
    a0 = v0 + a0;                                               // 0x001da71c: addu $a0, $v0, $a0
    *(uint8_t*)(t0) = s3;                                       // 0x001da720: sb $s3, 0($t0)
    s1 = g_00495110;  // Global at 0x00495110                   // 0x001da724: lw $s1, 0($a0)
    v0 = 0x49 << 16;                                            // 0x001da728: lui $v0, 0x49
    /* multiply: s3 * v1 -> hi:lo */                            // 0x001da72c: mult $ac3, $s3, $v1
    v0 = v0 + 0x5110;                                           // 0x001da730: addiu $v0, $v0, 0x5110
    a1 = a1 & 0xff;                                             // 0x001da734: andi $a1, $a1, 0xff
    a2 = s4 & 0xff;                                             // 0x001da738: andi $a2, $s4, 0xff
    a3 = s3 & 0xffff;                                           // 0x001da73c: andi $a3, $s3, 0xffff
    s0 = v0 + v1;                                               // 0x001da740: addu $s0, $v0, $v1
    func_001d6630();  // 0x1d65c0                                // 0x001da744: jal 0x1d65c0
    v1 = 1;                                                     // 0x001da74c: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1da7b4;                          // 0x001da750: beq $v0, $v1, 0x1da7b4
    v1 = s4 & 0xff;                                             // 0x001da754: andi $v1, $s4, 0xff
    v0 = s4 & 0xff;                                             // 0x001da758: andi $v0, $s4, 0xff
    v1 = 0x36 << 16;                                            // 0x001da75c: lui $v1, 0x36
    v0 = v0 << 4;                                               // 0x001da760: sll $v0, $v0, 4
    at = 0x31 << 16;                                            // 0x001da764: lui $at, 0x31
    a0 = v0 + s1;                                               // 0x001da768: addu $a0, $v0, $s1
    s2 = g_003137fc;  // Global at 0x003137fc                   // 0x001da76c: lw $s2, 0x37fc($at)
    a0 = g_00495112;  // Global at 0x00495112                   // 0x001da770: lbu $a0, 2($a0)
    v0 = 2 << 16;                                               // 0x001da774: lui $v0, 2
    a2 = v0 | 1;                                                // 0x001da778: ori $a2, $v0, 1
    v1 = v1 + -0x6d80;                                          // 0x001da77c: addiu $v1, $v1, -0x6d80
    v0 = a0 << 2;                                               // 0x001da784: sll $v0, $a0, 2
    v0 = v1 + v0;                                               // 0x001da788: addu $v0, $v1, $v0
    a0 = g_00020000;  // Global at 0x00020000                   // 0x001da78c: lw $a0, 0($v0)
    func_001d33e0();  // 0x1d3390                                // 0x001da790: jal 0x1d3390
    a3 = 0xc8;                                                  // 0x001da7a4: addiu $a3, $zero, 0xc8
    func_001d87d0();  // 0x1d87a0                                // 0x001da7a8: jal 0x1d87a0
    v1 = s4 & 0xff;                                             // 0x001da7b0: andi $v1, $s4, 0xff
label_0x1da7b4:
    at = 0x31 << 16;                                            // 0x001da7b4: lui $at, 0x31
    v1 = v1 << 4;                                               // 0x001da7b8: sll $v1, $v1, 4
    s0 = g_003137fc;  // Global at 0x003137fc                   // 0x001da7bc: lw $s0, 0x37fc($at)
    v1 = v1 + s1;                                               // 0x001da7c0: addu $v1, $v1, $s1
    v1 = g_00359282;  // Global at 0x00359282                   // 0x001da7c4: lbu $v1, 2($v1)
    at = (v1 < 0x1b) ? 1 : 0;                                   // 0x001da7c8: slti $at, $v1, 0x1b
    if (at == 0) goto label_0x1da82c;                           // 0x001da7cc: beqz $at, 0x1da82c
    /* nop */                                                   // 0x001da7d0: nop 
    v0 = 0x36 << 16;                                            // 0x001da7d4: lui $v0, 0x36
    v1 = v1 << 2;                                               // 0x001da7d8: sll $v1, $v1, 2
    v0 = v0 + -0x6ca0;                                          // 0x001da7dc: addiu $v0, $v0, -0x6ca0
    v0 = v0 + v1;                                               // 0x001da7e4: addu $v0, $v0, $v1
    a2 = 1;                                                     // 0x001da7e8: addiu $a2, $zero, 1
    a0 = g_00359360;  // Global at 0x00359360                   // 0x001da7ec: lw $a0, 0($v0)
    func_001d33e0();  // 0x1d3390                                // 0x001da7f0: jal 0x1d3390
    if (a2 <= 0) goto label_0x1da82c;                           // 0x001da7fc: blez $a2, 0x1da82c
    /* nop */                                                   // 0x001da800: nop 
    v0 = s3 << 6;                                               // 0x001da804: sll $v0, $s3, 6
    v1 = v0 - s3;                                               // 0x001da80c: subu $v1, $v0, $s3
    v1 = v1 << 2;                                               // 0x001da810: sll $v1, $v1, 2
    v0 = 0x49 << 16;                                            // 0x001da814: lui $v0, 0x49
    v1 = v1 - s3;                                               // 0x001da818: subu $v1, $v1, $s3
    v0 = v0 + 0x3980;                                           // 0x001da81c: addiu $v0, $v0, 0x3980
    v1 = v1 << 2;                                               // 0x001da820: sll $v1, $v1, 2
    func_001d8810();  // 0x1d87d0                                // 0x001da824: jal 0x1d87d0
    a1 = v0 + v1;                                               // 0x001da828: addu $a1, $v0, $v1
label_0x1da82c:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001da830: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001da838: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001da83c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001da840: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001da844: jr $ra
    sp = sp + 0x60;                                             // 0x001da848: addiu $sp, $sp, 0x60
}