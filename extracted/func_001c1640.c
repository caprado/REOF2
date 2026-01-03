void func_001c1640() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001c1640: addiu $sp, $sp, -0x50
    at = 0x31 << 16;                                            // 0x001c1644: lui $at, 0x31
    v0 = a0 << 3;                                               // 0x001c164c: sll $v0, $a0, 3
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c1650: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c1658: addu.qb $zero, $sp, $s1
    s3 = g_0031382c;  // Global at 0x0031382c                   // 0x001c1664: lw $s3, 0x382c($at)
    v1 = s3 + 4;                                                // 0x001c1668: addiu $v1, $s3, 4
    v1 = v1 + v0;                                               // 0x001c166c: addu $v1, $v1, $v0
    v0 = *(int32_t*)(v1);                                       // 0x001c1670: lw $v0, 0($v1)
    s0 = *(int32_t*)((v1) + 4);                                 // 0x001c1674: lw $s0, 4($v1)
    goto label_0x1c16b4;                                        // 0x001c1678: b 0x1c16b4
    s2 = s3 + v0;                                               // 0x001c167c: addu $s2, $s3, $v0
label_0x1c1680:
    v1 = s1 << 3;                                               // 0x001c1680: sll $v1, $s1, 3
    v0 = s2 + v0;                                               // 0x001c1684: addu $v0, $s2, $v0
    v1 = v1 - s1;                                               // 0x001c1688: subu $v1, $v1, $s1
    v0 = *(int32_t*)(v0);                                       // 0x001c168c: lw $v0, 0($v0)
    v1 = v1 << 2;                                               // 0x001c1690: sll $v1, $v1, 2
    a2 = v1 + 0x17c;                                            // 0x001c1694: addiu $a2, $v1, 0x17c
    a1 = 0x50;                                                  // 0x001c169c: addiu $a1, $zero, 0x50
    a3 = 1;                                                     // 0x001c16a0: addiu $a3, $zero, 1
    t0 = 0x18;                                                  // 0x001c16a4: addiu $t0, $zero, 0x18
    func_001b42c0();  // 1b42c0                                // 0x001c16a8: jal 0x1b42c0
    t1 = s3 + v0;                                               // 0x001c16ac: addu $t1, $s3, $v0
    s1 = s1 + 1;                                                // 0x001c16b0: addiu $s1, $s1, 1
label_0x1c16b4:
    v0 = (s1 < s0) ? 1 : 0;                                     // 0x001c16b4: slt $v0, $s1, $s0
    if (v0 != 0) goto label_0x1c1680;                           // 0x001c16b8: bnez $v0, 0x1c1680
    v0 = s1 << 2;                                               // 0x001c16bc: sll $v0, $s1, 2
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c16cc: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c16d0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c16d4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c16d8: jr $ra
    sp = sp + 0x50;                                             // 0x001c16dc: addiu $sp, $sp, 0x50
}