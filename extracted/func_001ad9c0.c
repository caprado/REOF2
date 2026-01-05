void func_001ad9c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    /* move to FPU: $a1, $f2 */                                 // 0x001ad9c0: mtc1 $a1, $f2
    v1 = 0x42fe << 16;                                          // 0x001ad9c4: lui $v1, 0x42fe
    /* move to FPU: $v1, $f1 */                                 // 0x001ad9c8: mtc1 $v1, $f1
    sp = sp + -0x30;                                            // 0x001ad9cc: addiu $sp, $sp, -0x30
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x001ad9d0: cvt.s.w $f2, $f2
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ad9d8: addu.qb $zero, $sp, $s1
    v0 = a0 << 1;                                               // 0x001ad9dc: sll $v0, $a0, 1
    v0 = v0 + a0;                                               // 0x001ad9e4: addu $v0, $v0, $a0
    s0 = v0 << 3;                                               // 0x001ad9e8: sll $s0, $v0, 3
    v1 = a0 << 2;                                               // 0x001ad9ec: sll $v1, $a0, 2
    v0 = 0x2b << 16;                                            // 0x001ad9f0: lui $v0, 0x2b
    v0 = v0 + -0x57d8;                                          // 0x001ad9f4: addiu $v0, $v0, -0x57d8
    /* FPU: div.s $f1, $f2, $f1 */                              // 0x001ad9f8: div.s $f1, $f2, $f1
    v0 = v0 + s0;                                               // 0x001ad9fc: addu $v0, $v0, $s0
    FPU_F0 = *(float*)(v0);  // Load float                      // 0x001ada00: lwc1 $f0, 0($v0)
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001ada04: cvt.s.w $f0, $f0
    v0 = 0x2b << 16;                                            // 0x001ada08: lui $v0, 0x2b
    v0 = v0 + -0x5788;                                          // 0x001ada0c: addiu $v0, $v0, -0x5788
    v0 = v0 + v1;                                               // 0x001ada10: addu $v0, $v0, $v1
    v1 = 0x22 << 16;                                            // 0x001ada14: lui $v1, 0x22
    a0 = g_002aa878;  // Global at 0x002aa878                   // 0x001ada18: lw $a0, 0($v0)
    v1 = v1 + -0x4300;                                          // 0x001ada1c: addiu $v1, $v1, -0x4300
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x001ada20: mul.s $f0, $f1, $f0
    v0 = 0xa;                                                   // 0x001ada24: addiu $v0, $zero, 0xa
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001ada28: cvt.w.s $f0, $f0
    /* move from FPU: $a1, $f0 */                               // 0x001ada2c: mfc1 $a1, $f0
    /* nop */                                                   // 0x001ada30: nop 
    s1 = a1 & 0x7f;                                             // 0x001ada34: andi $s1, $a1, 0x7f
    a1 = s1 << 2;                                               // 0x001ada38: sll $a1, $s1, 2
    v1 = v1 + a1;                                               // 0x001ada3c: addu $v1, $v1, $a1
    v1 = g_0021bd00;  // Global at 0x0021bd00                   // 0x001ada40: lw $v1, 0($v1)
    /* divide: v1 / v0 -> hi:lo */                              // 0x001ada44: div $zero, $v1, $v0
    /* nop */                                                   // 0x001ada48: nop 
    /* nop */                                                   // 0x001ada4c: nop 
    /* mflo $a1 */                                              // 0x001ada50
    func_00132478();  // 132478                                // 0x001ada54: jal 0x132478
    /* nop */                                                   // 0x001ada58: nop 
    /* move to FPU: $s1, $f0 */                                 // 0x001ada5c: mtc1 $s1, $f0
    v1 = 0x2b << 16;                                            // 0x001ada60: lui $v1, 0x2b
    v1 = v1 + -0x57dc;                                          // 0x001ada64: addiu $v1, $v1, -0x57dc
    v0 = 0x2b << 16;                                            // 0x001ada68: lui $v0, 0x2b
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001ada6c: cvt.s.w $f0, $f0
    v1 = v1 + s0;                                               // 0x001ada70: addu $v1, $v1, $s0
    g_002aa824 = s1;  // Global at 0x002aa824                   // 0x001ada74: sw $s1, 0($v1)
    v0 = v0 + -0x57d0;                                          // 0x001ada78: addiu $v0, $v0, -0x57d0
    a0 = v0 + s0;                                               // 0x001ada7c: addu $a0, $v0, $s0
    v1 = 0x2b << 16;                                            // 0x001ada80: lui $v1, 0x2b
    v1 = v1 + -0x57d4;                                          // 0x001ada84: addiu $v1, $v1, -0x57d4
    v1 = v1 + s0;                                               // 0x001ada8c: addu $v1, $v1, $s0
    *(float*)(a0) = FPU_F0;  // Store float                     // 0x001ada90: swc1 $f0, 0($a0)
    g_002aa82c = 0;  // Global at 0x002aa82c                    // 0x001ada94: sw $zero, 0($v1)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ada9c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001adaa0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001adaa4: jr $ra
    sp = sp + 0x30;                                             // 0x001adaa8: addiu $sp, $sp, 0x30
}