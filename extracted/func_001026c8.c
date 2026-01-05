void func_001026c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001026c8: addiu $sp, $sp, -0x60
    func_001022b8();  // 1022b8                                // 0x001026e0: jal 0x1022b8
    if (v0 != 0) goto label_0x1027f4;                           // 0x001026e8: bnez $v0, 0x1027f4
    s3 = s2 + 0x21c;                                            // 0x001026f4: addiu $s3, $s2, 0x21c
    /* nop */                                                   // 0x001026fc: nop 
label_0x102700:
    /* FPU: nori.b $w0, $w0, 2 */                               // 0x00102700: nori.b $w0, $w0, 2
    a0 = s1 + 0x400;                                            // 0x00102704: addiu $a0, $s1, 0x400
    a0 = a0 & 0xffff;                                           // 0x00102708: andi $a0, $a0, 0xffff
    func_001022e8();  // 1022e8                                // 0x00102714: jal 0x1022e8
    s1 = s1 + 1;                                                // 0x00102718: addiu $s1, $s1, 1
    v0 = ((unsigned)s1 < (unsigned)0x20) ? 1 : 0;               // 0x0010271c: sltiu $v0, $s1, 0x20
    if (v0 != 0) goto label_0x102700;                           // 0x00102720: bnez $v0, 0x102700
    s0 = s0 + 0x10;                                             // 0x00102724: addiu $s0, $s0, 0x10
    a0 = 0x430;                                                 // 0x00102734: addiu $a0, $zero, 0x430
    func_001022e8();  // 1022e8                                // 0x0010273c: jal 0x1022e8
    a0 = 0x431;                                                 // 0x0010274c: addiu $a0, $zero, 0x431
    func_001022e8();  // 1022e8                                // 0x00102758: jal 0x1022e8
    a0 = 0x432;                                                 // 0x00102764: addiu $a0, $zero, 0x432
    func_001022e8();  // 1022e8                                // 0x0010276c: jal 0x1022e8
    a0 = 0x434;                                                 // 0x00102778: addiu $a0, $zero, 0x434
    func_001022e8();  // 1022e8                                // 0x00102780: jal 0x1022e8
    a0 = 0x435;                                                 // 0x0010278c: addiu $a0, $zero, 0x435
    func_001022e8();  // 1022e8                                // 0x00102794: jal 0x1022e8
    a0 = 0x436;                                                 // 0x001027a0: addiu $a0, $zero, 0x436
    func_001022e8();  // 1022e8                                // 0x001027a8: jal 0x1022e8
    a0 = 0x437;                                                 // 0x001027b4: addiu $a0, $zero, 0x437
    func_001022e8();  // 1022e8                                // 0x001027bc: jal 0x1022e8
    /* nop */                                                   // 0x001027c4: nop 
label_0x1027c8:
    v0 = *(uint16_t*)(s0);                                      // 0x001027c8: lhu $v0, 0($s0)
    a0 = s1 + 0x420;                                            // 0x001027cc: addiu $a0, $s1, 0x420
    a0 = a0 & 0xffff;                                           // 0x001027d0: andi $a0, $a0, 0xffff
    func_001022e8();  // 1022e8                                // 0x001027dc: jal 0x1022e8
    s1 = s1 + 1;                                                // 0x001027e0: addiu $s1, $s1, 1
    v0 = ((unsigned)s1 < (unsigned)0x10) ? 1 : 0;               // 0x001027e4: sltiu $v0, $s1, 0x10
    if (v0 != 0) goto label_0x1027c8;                           // 0x001027e8: bnez $v0, 0x1027c8
    s0 = s0 + 2;                                                // 0x001027ec: addiu $s0, $s0, 2
    v0 = 1;                                                     // 0x001027f0: addiu $v0, $zero, 1
label_0x1027f4:
    return;                                                     // 0x00102808: jr $ra
    sp = sp + 0x60;                                             // 0x0010280c: addiu $sp, $sp, 0x60
}