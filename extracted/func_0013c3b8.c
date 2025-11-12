void func_0013c3b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0013c3b8: addiu $sp, $sp, -0x40
    if (s4 <= 0) goto label_0x13c450;                           // 0x0013c3ec: blez $s4, 0x13c450
    v0 = 0x20 << 16;                                            // 0x0013c3f4: lui $v0, 0x20
    s5 = v0 + 0x4490;                                           // 0x0013c3fc: addiu $s5, $v0, 0x4490
label_0x13c400:
    v0 = g_0020449c;  // Global at 0x0020449c                   // 0x0013c400: lw $v0, 0xc($s5)
    a1 = g_00204498;  // Global at 0x00204498                   // 0x0013c408: lw $a1, 8($s5)
    /* multiply: v0 * s0 -> hi:lo */                            // 0x0013c40c: mult $ac3, $v0, $s0
    a1 = a1 << 3;                                               // 0x0013c410: sll $a1, $a1, 3
    v0 = v1 + s0;                                               // 0x0013c414: addu $v0, $v1, $s0
    s0 = s0 + 1;                                                // 0x0013c418: addiu $s0, $s0, 1
    a1 = a1 + v0;                                               // 0x0013c41c: addu $a1, $a1, $v0
    func_0013bd60();  // 0x13bcc8                                // 0x0013c420: jal 0x13bcc8
    a1 = s2 + a1;                                               // 0x0013c424: addu $a1, $s2, $a1
    if (v0 != 0) goto label_0x13c448;                           // 0x0013c428: bnez $v0, 0x13c448
    v1 = (s0 < s4) ? 1 : 0;                                     // 0x0013c42c: slt $v1, $s0, $s4
    v0 = *(int32_t*)(s1);                                       // 0x0013c430: lw $v0, 0($s1)
    *(uint32_t*)(s3) = v0;                                      // 0x0013c434: sw $v0, 0($s3)
    v1 = *(int32_t*)((s1) + 4);                                 // 0x0013c438: lw $v1, 4($s1)
    goto label_0x13c458;                                        // 0x0013c43c: b 0x13c458
    *(uint32_t*)((s3) + 4) = v1;                                // 0x0013c440: sw $v1, 4($s3)
    /* nop */                                                   // 0x0013c444: nop 
label_0x13c448:
    if (v1 != 0) goto label_0x13c400;                           // 0x0013c448: bnez $v1, 0x13c400
    s1 = s1 + 8;                                                // 0x0013c44c: addiu $s1, $s1, 8
label_0x13c450:
    *(uint32_t*)((s3) + 4) = 0;                                 // 0x0013c450: sw $zero, 4($s3)
    *(uint32_t*)(s3) = 0;                                       // 0x0013c454: sw $zero, 0($s3)
label_0x13c458:
    return;                                                     // 0x0013c478: jr $ra
    sp = sp + 0x40;                                             // 0x0013c47c: addiu $sp, $sp, 0x40
}