void func_001bd7f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xf0;                                            // 0x001bd7f0: addiu $sp, $sp, -0xf0
    a1 = 0x24 << 16;                                            // 0x001bd7f4: lui $a1, 0x24
    a1 = &str_0023dff8;  // "HST:pfs0:"                         // 0x001bd7fc: addiu $a1, $a1, -0x2008
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001bd800: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001bd80c: dpa.w.ph $ac0, $sp, $s3
    a0 = sp + 0x70;                                             // 0x001bd810: addiu $a0, $sp, 0x70
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001bd818: addu.qb $zero, $sp, $s1
    func_0010ac68();  // 10ac68                                // 0x001bd81c: jal 0x10ac68
    a0 = sp + 0x70;                                             // 0x001bd824: addiu $a0, $sp, 0x70
    func_001199b0();  // 1199b0                                // 0x001bd828: jal 0x1199b0
    a1 = 0x1ff;                                                 // 0x001bd82c: addiu $a1, $zero, 0x1ff
    if (a1 >= 0) goto label_0x1bd84c;                           // 0x001bd834: bgez $a1, 0x1bd84c
    /* nop */                                                   // 0x001bd838: nop 
label_0x1bd83c:
    func_001bd340();  // 1bd340                                // 0x001bd83c: jal 0x1bd340
    goto label_0x1bd8e0;                                        // 0x001bd844: b 0x1bd8e0
label_0x1bd84c:
    s0 = *(int32_t*)((s5) + 0x3c);                              // 0x001bd84c: lw $s0, 0x3c($s5)
    s3 = *(int32_t*)((s0) + 4);                                 // 0x001bd854: lw $s3, 4($s0)
    goto label_0x1bd8c4;                                        // 0x001bd858: b 0x1bd8c4
    s0 = s0 + 8;                                                // 0x001bd85c: addiu $s0, $s0, 8
label_0x1bd860:
    v0 = 0x22 << 16;                                            // 0x001bd860: lui $v0, 0x22
    v1 = s4 << 2;                                               // 0x001bd864: sll $v1, $s4, 2
    v0 = v0 + -0x32c0;                                          // 0x001bd868: addiu $v0, $v0, -0x32c0
    s2 = *(int32_t*)(s0);                                       // 0x001bd86c: lw $s2, 0($s0)
    v0 = v0 + v1;                                               // 0x001bd870: addu $v0, $v0, $v1
    s1 = *(int32_t*)((s0) + 4);                                 // 0x001bd874: lw $s1, 4($s0)
    a1 = g_0021cd40;  // Global at 0x0021cd40                   // 0x001bd878: lw $a1, 0($v0)
    a0 = sp + 0x70;                                             // 0x001bd87c: addiu $a0, $sp, 0x70
    func_001bddd0();  // 1bddd0                                // 0x001bd880: jal 0x1bddd0
    s0 = s0 + 8;                                                // 0x001bd884: addiu $s0, $s0, 8
    a0 = sp + 0x70;                                             // 0x001bd888: addiu $a0, $sp, 0x70
    a1 = 0x602;                                                 // 0x001bd88c: addiu $a1, $zero, 0x602
    func_00118730();  // 118730                                // 0x001bd890: jal 0x118730
    a2 = 0x1b6;                                                 // 0x001bd894: addiu $a2, $zero, 0x1b6
    if (v0 < 0) goto label_0x1bd83c;                            // 0x001bd898: bltz $v0, 0x1bd83c
    *(uint32_t*)((s5) + 0x2c) = a1;                             // 0x001bd8a0: sw $a1, 0x2c($s5)
    v0 = *(int32_t*)((s5) + 0x3c);                              // 0x001bd8a8: lw $v0, 0x3c($s5)
    a0 = *(int32_t*)((s5) + 0x2c);                              // 0x001bd8ac: lw $a0, 0x2c($s5)
    func_00118fd0();  // 118fd0                                // 0x001bd8b0: jal 0x118fd0
    a1 = v0 + s2;                                               // 0x001bd8b4: addu $a1, $v0, $s2
    func_001189b8();  // 1189b8                                // 0x001bd8b8: jal 0x1189b8
    a0 = *(int32_t*)((s5) + 0x2c);                              // 0x001bd8bc: lw $a0, 0x2c($s5)
    s4 = s4 + 1;                                                // 0x001bd8c0: addiu $s4, $s4, 1
label_0x1bd8c4:
    v1 = (s4 < s3) ? 1 : 0;                                     // 0x001bd8c4: slt $v1, $s4, $s3
    if (v1 != 0) goto label_0x1bd860;                           // 0x001bd8c8: bnez $v1, 0x1bd860
    /* nop */                                                   // 0x001bd8cc: nop 
    v1 = *(int32_t*)(s5);                                       // 0x001bd8d0: lw $v1, 0($s5)
    v1 = v1 + 1;                                                // 0x001bd8d4: addiu $v1, $v1, 1
    *(uint32_t*)(s5) = v1;                                      // 0x001bd8d8: sw $v1, 0($s5)
label_0x1bd8e0:
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001bd8e0: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001bd8e4: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001bd8ec: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001bd8f0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bd8f4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bd8f8: jr $ra
    sp = sp + 0xf0;                                             // 0x001bd8fc: addiu $sp, $sp, 0xf0
}