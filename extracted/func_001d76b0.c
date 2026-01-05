void func_001d76b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001d76b0: addiu $sp, $sp, -0x50
    v0 = 1;                                                     // 0x001d76b4: addiu $v0, $zero, 1
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d76bc: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d76c8: addu.qb $zero, $sp, $s1
    v1 = *(int16_t*)((gp) + -0x6348);                           // 0x001d76d4: lh $v1, -0x6348($gp)
    if (v1 == v0) goto label_0x1d76ec;                          // 0x001d76d8: beq $v1, $v0, 0x1d76ec
    if (t0 == 0) goto label_0x1d76f0;                           // 0x001d76e0: beqz $t0, 0x1d76f0
    v1 = a0 & 0xff;                                             // 0x001d76e4: andi $v1, $a0, 0xff
    s0 = 0x8000 << 16;                                          // 0x001d76e8: lui $s0, 0x8000
label_0x1d76ec:
    v1 = a0 & 0xff;                                             // 0x001d76ec: andi $v1, $a0, 0xff
label_0x1d76f0:
    v0 = 1;                                                     // 0x001d76f0: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1d7730;                          // 0x001d76f4: beq $v1, $v0, 0x1d7730
    v0 = a2 & 0xff;                                             // 0x001d76f8: andi $v0, $a2, 0xff
    v0 = a2 & 0xff;                                             // 0x001d76fc: andi $v0, $a2, 0xff
    v1 = 0x36 << 16;                                            // 0x001d7700: lui $v1, 0x36
    a0 = v0 << 3;                                               // 0x001d7704: sll $a0, $v0, 3
    v1 = v1 + -0x7930;                                          // 0x001d7708: addiu $v1, $v1, -0x7930
    v1 = v1 + a0;                                               // 0x001d770c: addu $v1, $v1, $a0
    v0 = s1 & 0xff;                                             // 0x001d7710: andi $v0, $s1, 0xff
    s2 = g_003586d0;  // Global at 0x003586d0                   // 0x001d7714: lw $s2, 0($v1)
    v0 = v0 << 2;                                               // 0x001d7718: sll $v0, $v0, 2
    func_001d3c20();  // 1d3c20                                // 0x001d771c: jal 0x1d3c20
    a0 = v0 + 0x1200;                                           // 0x001d7720: addiu $a0, $v0, 0x1200
    goto label_0x1d775c;                                        // 0x001d7724: b 0x1d775c
    /* nop */                                                   // 0x001d7728: nop 
    v0 = a2 & 0xff;                                             // 0x001d772c: andi $v0, $a2, 0xff
label_0x1d7730:
    v1 = 0x36 << 16;                                            // 0x001d7730: lui $v1, 0x36
    a0 = v0 << 3;                                               // 0x001d7734: sll $a0, $v0, 3
    v1 = v1 + -0x6f90;                                          // 0x001d7738: addiu $v1, $v1, -0x6f90
    v1 = v1 + a0;                                               // 0x001d773c: addu $v1, $v1, $a0
    v0 = s1 & 0xff;                                             // 0x001d7740: andi $v0, $s1, 0xff
    s2 = g_00359070;  // Global at 0x00359070                   // 0x001d7744: lw $s2, 0($v1)
    v0 = v0 << 2;                                               // 0x001d7748: sll $v0, $v0, 2
    func_001d3c20();  // 1d3c20                                // 0x001d774c: jal 0x1d3c20
    a0 = v0 + 0x1300;                                           // 0x001d7750: addiu $a0, $v0, 0x1300
    v0 = 0x2000 << 16;                                          // 0x001d7754: lui $v0, 0x2000
    s0 = s0 | v0;                                               // 0x001d7758: or $s0, $s0, $v0
label_0x1d775c:
    func_001d7130();  // 1d7130                                // 0x001d775c: jal 0x1d7130
    /* nop */                                                   // 0x001d7760: nop 
    v1 = s1 & 0xff;                                             // 0x001d7764: andi $v1, $s1, 0xff
    v0 = 0x1468;                                                // 0x001d7768: addiu $v0, $zero, 0x1468
    /* multiply: v1 * v0 -> hi:lo */                            // 0x001d776c: mult $ac3, $v1, $v0
    a0 = 0x20;                                                  // 0x001d7770: addiu $a0, $zero, 0x20
    a1 = 9;                                                     // 0x001d7774: addiu $a1, $zero, 9
    v0 = 0x43 << 16;                                            // 0x001d7778: lui $v0, 0x43
    v0 = v0 + -0x15f0;                                          // 0x001d777c: addiu $v0, $v0, -0x15f0
    func_001b2780();  // 1b2780                                // 0x001d7780: jal 0x1b2780
    s1 = v0 + v1;                                               // 0x001d7784: addu $s1, $v0, $v1
    v1 = s3 & 0xff;                                             // 0x001d7788: andi $v1, $s3, 0xff
    *(uint32_t*)((s1) + 0x808) = v0;                            // 0x001d778c: sw $v0, 0x808($s1)
    v1 = v1 << 4;                                               // 0x001d7790: sll $v1, $v1, 4
    a3 = s0 | 2;                                                // 0x001d7794: ori $a3, $s0, 2
    v0 = s2 + v1;                                               // 0x001d7798: addu $v0, $s2, $v1
    v1 = s1 + 0x820;                                            // 0x001d779c: addiu $v1, $s1, 0x820
    *(uint32_t*)(s1) = v1;                                      // 0x001d77a0: sw $v1, 0($s1)
    v1 = s1 + 0xa20;                                            // 0x001d77a4: addiu $v1, $s1, 0xa20
    *(uint32_t*)((s1) + 4) = v1;                                // 0x001d77a8: sw $v1, 4($s1)
    v1 = s1 + 0xc20;                                            // 0x001d77ac: addiu $v1, $s1, 0xc20
    *(uint32_t*)((s1) + 0x818) = v1;                            // 0x001d77b0: sw $v1, 0x818($s1)
    a1 = g_0042ea10;  // Global at 0x0042ea10                   // 0x001d77b4: lbu $a1, 0($v0)
    a2 = g_0042ea11;  // Global at 0x0042ea11                   // 0x001d77b8: lbu $a2, 1($v0)
    t0 = g_0042ea14;  // Global at 0x0042ea14                   // 0x001d77bc: lbu $t0, 4($v0)
    func_001d5d00();  // 1d5d00                                // 0x001d77c0: jal 0x1d5d00
    if (v0 != 0) goto label_0x1d77dc;                           // 0x001d77c8: bnez $v0, 0x1d77dc
    /* nop */                                                   // 0x001d77cc: nop 
    func_001b28a0();  // 1b28a0                                // 0x001d77d0: jal 0x1b28a0
    a0 = *(int32_t*)((s1) + 0x808);                             // 0x001d77d4: lw $a0, 0x808($s1)
    *(uint32_t*)((s1) + 0x808) = 0;                             // 0x001d77d8: sw $zero, 0x808($s1)
label_0x1d77dc:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d77e4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d77e8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d77ec: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d77f0: jr $ra
    sp = sp + 0x50;                                             // 0x001d77f4: addiu $sp, $sp, 0x50
}