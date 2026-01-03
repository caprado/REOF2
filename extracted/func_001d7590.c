void func_001d7590() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001d7590: addiu $sp, $sp, -0x50
    v0 = 1;                                                     // 0x001d7594: addiu $v0, $zero, 1
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d759c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d75a8: addu.qb $zero, $sp, $s1
    s0 = a2 & 0xff;                                             // 0x001d75b4: andi $s0, $a2, 0xff
    if (s0 != v0) goto label_0x1d75d8;                          // 0x001d75b8: bne $s0, $v0, 0x1d75d8
    v0 = s1 & 0xff;                                             // 0x001d75c0: andi $v0, $s1, 0xff
    v0 = v0 << 3;                                               // 0x001d75c4: sll $v0, $v0, 3
    func_001d3c20();  // 1d3c20                                // 0x001d75c8: jal 0x1d3c20
    a0 = v0 + 0x1600;                                           // 0x001d75cc: addiu $a0, $v0, 0x1600
    goto label_0x1d75e8;                                        // 0x001d75d0: b 0x1d75e8
    /* nop */                                                   // 0x001d75d4: nop 
label_0x1d75d8:
    v0 = s1 & 0xff;                                             // 0x001d75d8: andi $v0, $s1, 0xff
    v0 = v0 << 3;                                               // 0x001d75dc: sll $v0, $v0, 3
    func_001d3c20();  // 1d3c20                                // 0x001d75e0: jal 0x1d3c20
    a0 = v0 + 0x1400;                                           // 0x001d75e4: addiu $a0, $v0, 0x1400
label_0x1d75e8:
    func_001d7130();  // 1d7130                                // 0x001d75e8: jal 0x1d7130
    /* nop */                                                   // 0x001d75ec: nop 
    v0 = 1;                                                     // 0x001d75f0: addiu $v0, $zero, 1
    if (s0 != v0) goto label_0x1d7600;                          // 0x001d75f4: bne $s0, $v0, 0x1d7600
    a1 = 2;                                                     // 0x001d75f8: addiu $a1, $zero, 2
    a1 = a1 + 1;                                                // 0x001d75fc: addiu $a1, $a1, 1
label_0x1d7600:
    v0 = s3 & 0xff;                                             // 0x001d7600: andi $v0, $s3, 0xff
    a0 = s1 & 0xff;                                             // 0x001d7604: andi $a0, $s1, 0xff
    v1 = 0x1468;                                                // 0x001d7608: addiu $v1, $zero, 0x1468
    v0 = v0 << 0x10;                                            // 0x001d760c: sll $v0, $v0, 0x10
    /* multiply: a0 * v1 -> hi:lo */                            // 0x001d7610: mult $ac3, $a0, $v1
    a1 = a1 | v0;                                               // 0x001d7614: or $a1, $a1, $v0
    v0 = 0x3f << 16;                                            // 0x001d7618: lui $v0, 0x3f
    v0 = v0 + 0x71a0;                                           // 0x001d761c: addiu $v0, $v0, 0x71a0
    a0 = 0x20;                                                  // 0x001d7620: addiu $a0, $zero, 0x20
    func_001b2780();  // 1b2780                                // 0x001d7624: jal 0x1b2780
    s1 = v0 + v1;                                               // 0x001d7628: addu $s1, $v0, $v1
    *(uint32_t*)((s1) + 0x808) = v0;                            // 0x001d762c: sw $v0, 0x808($s1)
    v0 = s1 + 0x820;                                            // 0x001d7630: addiu $v0, $s1, 0x820
    *(uint32_t*)(s1) = v0;                                      // 0x001d7634: sw $v0, 0($s1)
    v0 = s1 + 0xa20;                                            // 0x001d7638: addiu $v0, $s1, 0xa20
    *(uint32_t*)((s1) + 4) = v0;                                // 0x001d763c: sw $v0, 4($s1)
    v0 = s1 + 0xc20;                                            // 0x001d7640: addiu $v0, $s1, 0xc20
    *(uint32_t*)((s1) + 0x818) = v0;                            // 0x001d7644: sw $v0, 0x818($s1)
    v0 = 1;                                                     // 0x001d7648: addiu $v0, $zero, 1
    if (s0 == v0) goto label_0x1d7658;                          // 0x001d764c: beq $s0, $v0, 0x1d7658
    a1 = s3 & 0xff;                                             // 0x001d7650: andi $a1, $s3, 0xff
label_0x1d7658:
    a3 = 3;                                                     // 0x001d7668: addiu $a3, $zero, 3
    func_001d5f60();  // 1d5f60                                // 0x001d766c: jal 0x1d5f60
    v1 = 1;                                                     // 0x001d7674: addiu $v1, $zero, 1
    if (s0 != v1) goto label_0x1d7688;                          // 0x001d7678: bne $s0, $v1, 0x1d7688
    func_001d7470();  // 1d7470                                // 0x001d7680: jal 0x1d7470
label_0x1d7688:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d7690: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d7694: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d7698: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d769c: jr $ra
    sp = sp + 0x50;                                             // 0x001d76a0: addiu $sp, $sp, 0x50
}