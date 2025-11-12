void func_001ae1b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x001ae1b0: addiu $sp, $sp, -0x80
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001ae1bc: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001ae1cc: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ae1dc: addu.qb $zero, $sp, $s1
    if (s5 != 0) goto label_0x1ae1fc;                           // 0x001ae1e0: bnez $s5, 0x1ae1fc
    func_001aacc0();  // 0x1aaca0                                // 0x001ae1e8: jal 0x1aaca0
    if (s2 < 0) goto label_0x1ae2c4;                            // 0x001ae1f4: bltz $s2, 0x1ae2c4
    /* nop */                                                   // 0x001ae1f8: nop 
label_0x1ae1fc:
    v1 = 0x2b << 16;                                            // 0x001ae1fc: lui $v1, 0x2b
    a0 = s6 << 2;                                               // 0x001ae200: sll $a0, $s6, 2
    v1 = v1 + -0x5788;                                          // 0x001ae204: addiu $v1, $v1, -0x5788
    s1 = v1 + a0;                                               // 0x001ae208: addu $s1, $v1, $a0
    v1 = *(int32_t*)(s1);                                       // 0x001ae20c: lw $v1, 0($s1)
    if (v1 == 0) goto label_0x1ae2c4;                           // 0x001ae210: beqz $v1, 0x1ae2c4
    a0 = 0xe;                                                   // 0x001ae214: addiu $a0, $zero, 0xe
    func_001b7a80();  // 0x1b7a70                                // 0x001ae218: jal 0x1b7a70
    /* nop */                                                   // 0x001ae21c: nop 
    if (v0 != 0) goto label_0x1ae2c4;                           // 0x001ae220: bnez $v0, 0x1ae2c4
    v1 = s6 << 1;                                               // 0x001ae224: sll $v1, $s6, 1
    v0 = 0x2b << 16;                                            // 0x001ae228: lui $v0, 0x2b
    v1 = v1 + s6;                                               // 0x001ae22c: addu $v1, $v1, $s6
    v0 = v0 + -0x57d8;                                          // 0x001ae230: addiu $v0, $v0, -0x57d8
    s0 = v1 << 3;                                               // 0x001ae234: sll $s0, $v1, 3
    v0 = v0 + s0;                                               // 0x001ae238: addu $v0, $v0, $s0
    a1 = g_002aa828;  // Global at 0x002aa828                   // 0x001ae23c: lw $a1, 0($v0)
    func_001adab0();  // 0x1ad9c0                                // 0x001ae240: jal 0x1ad9c0
    func_001ae120();  // 0x1ae0b0                                // 0x001ae248: jal 0x1ae0b0
    v0 = 1;                                                     // 0x001ae250: addiu $v0, $zero, 1
    if (s5 != v0) goto label_0x1ae294;                          // 0x001ae254: bne $s5, $v0, 0x1ae294
    /* nop */                                                   // 0x001ae258: nop 
    if (s3 >= 0) goto label_0x1ae27c;                           // 0x001ae25c: bgez $s3, 0x1ae27c
    /* nop */                                                   // 0x001ae260: nop 
    a0 = *(int32_t*)(s1);                                       // 0x001ae264: lw $a0, 0($s1)
    func_00133240();  // 0x133150                                // 0x001ae26c: jal 0x133150
    goto label_0x1ae2a4;                                        // 0x001ae274: b 0x1ae2a4
    /* nop */                                                   // 0x001ae278: nop 
label_0x1ae27c:
    a0 = *(int32_t*)(s1);                                       // 0x001ae27c: lw $a0, 0($s1)
    func_00133240();  // 0x133150                                // 0x001ae284: jal 0x133150
    goto label_0x1ae2a4;                                        // 0x001ae28c: b 0x1ae2a4
    /* nop */                                                   // 0x001ae290: nop 
label_0x1ae294:
    a0 = *(int32_t*)(s1);                                       // 0x001ae294: lw $a0, 0($s1)
    func_00133240();  // 0x133150                                // 0x001ae29c: jal 0x133150
    a1 = 3;                                                     // 0x001ae2a0: addiu $a1, $zero, 3
label_0x1ae2a4:
    v0 = 0x2b << 16;                                            // 0x001ae2a4: lui $v0, 0x2b
    v1 = 1;                                                     // 0x001ae2a8: addiu $v1, $zero, 1
    v0 = v0 + -0x57dd;                                          // 0x001ae2ac: addiu $v0, $v0, -0x57dd
    v0 = v0 + s0;                                               // 0x001ae2b0: addu $v0, $v0, $s0
    g_002aa823 = v1;  // Global at 0x002aa823                   // 0x001ae2b4: sb $v1, 0($v0)
    a0 = *(int32_t*)(s1);                                       // 0x001ae2b8: lw $a0, 0($s1)
    func_00132c40();  // 0x132b10                                // 0x001ae2bc: jal 0x132b10
label_0x1ae2c4:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001ae2c8: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001ae2cc: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001ae2d0: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001ae2d8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ae2dc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ae2e0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ae2e4: jr $ra
    sp = sp + 0x80;                                             // 0x001ae2e8: addiu $sp, $sp, 0x80
}