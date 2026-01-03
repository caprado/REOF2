void func_0018f690() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0018f690: addiu $sp, $sp, -0x50
    at = 0x7000 << 16;                                          // 0x0018f694: lui $at, 0x7000
    v0 = a0 << 6;                                               // 0x0018f69c: sll $v0, $a0, 6
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0018f6a0: dpa.w.ph $ac0, $sp, $s3
    at = at | 0x3700;                                           // 0x0018f6a4: ori $at, $at, 0x3700
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018f6b0: addu.qb $zero, $sp, $s1
    func_0018f780();  // 18f780                                // 0x0018f6c4: jal 0x18f780
    a0 = v0 + at;                                               // 0x0018f6c8: addu $a0, $v0, $at
    v0 = 0x7000 << 16;                                          // 0x0018f6cc: lui $v0, 0x7000
    func_0018f600();  // 18f600                                // 0x0018f6d0: jal 0x18f600
    a0 = v0 | 0x3f00;                                           // 0x0018f6d4: ori $a0, $v0, 0x3f00
    v0 = 0x7000 << 16;                                          // 0x0018f6d8: lui $v0, 0x7000
    a0 = 0x28 << 16;                                            // 0x0018f6dc: lui $a0, 0x28
    a0 = a0 + 0x5360;                                           // 0x0018f6e0: addiu $a0, $a0, 0x5360
    a1 = v0 | 0x3f00;                                           // 0x0018f6e4: ori $a1, $v0, 0x3f00
    func_00191030();  // 191030                                // 0x0018f6e8: jal 0x191030
    a2 = v0 | 0x3f80;                                           // 0x0018f6ec: ori $a2, $v0, 0x3f80
    a0 = 0x28 << 16;                                            // 0x0018f6f0: lui $a0, 0x28
    v0 = 0x7000 << 16;                                          // 0x0018f6f4: lui $v0, 0x7000
    a2 = 0x28 << 16;                                            // 0x0018f6f8: lui $a2, 0x28
    a0 = a0 + 0x53a0;                                           // 0x0018f6fc: addiu $a0, $a0, 0x53a0
    a1 = v0 | 0x3f00;                                           // 0x0018f700: ori $a1, $v0, 0x3f00
    func_00191030();  // 191030                                // 0x0018f704: jal 0x191030
    a2 = a2 + 0x53e0;                                           // 0x0018f708: addiu $a2, $a2, 0x53e0
    at = 0x29 << 16;                                            // 0x0018f70c: lui $at, 0x29
    v0 = g_0028ff74;  // Global at 0x0028ff74                   // 0x0018f710: lw $v0, -0x8c($at)
    if (v0 != 0) goto label_0x18f748;                           // 0x0018f714: bnez $v0, 0x18f748
    if (s2 >= 0) goto label_0x18f72c;                           // 0x0018f71c: bgez $s2, 0x18f72c
    v0 = s2 >> 1;                                               // 0x0018f720: sra $v0, $s2, 1
    v0 = s2 + 1;                                                // 0x0018f724: addiu $v0, $s2, 1
    v0 = v0 >> 1;                                               // 0x0018f728: sra $v0, $v0, 1
label_0x18f72c:
    if (s0 >= 0) goto label_0x18f740;                           // 0x0018f730: bgez $s0, 0x18f740
    v0 = s0 >> 1;                                               // 0x0018f734: sra $v0, $s0, 1
    v0 = s0 + 1;                                                // 0x0018f738: addiu $v0, $s0, 1
    v0 = v0 >> 1;                                               // 0x0018f73c: sra $v0, $v0, 1
label_0x18f740:
label_0x18f748:
    func_00197300();  // 197300                                // 0x0018f754: jal 0x197300
    t0 = 2;                                                     // 0x0018f758: addiu $t0, $zero, 2
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018f764: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018f768: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018f76c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018f770: jr $ra
    sp = sp + 0x50;                                             // 0x0018f774: addiu $sp, $sp, 0x50
}