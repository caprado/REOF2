void func_001ad420() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001ad420: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001ad428: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ad434: addu.qb $zero, $sp, $s1
    a0 = 0xe;                                                   // 0x001ad440: addiu $a0, $zero, 0xe
    func_001b7a80();  // 0x1b7a70                                // 0x001ad444: jal 0x1b7a70
    if (v0 == 0) goto label_0x1ad45c;                           // 0x001ad44c: beqz $v0, 0x1ad45c
    a0 = 0xa;                                                   // 0x001ad450: addiu $a0, $zero, 0xa
    goto label_0x1ad508;                                        // 0x001ad454: b 0x1ad508
label_0x1ad45c:
    func_001b7a80();  // 0x1b7a70                                // 0x001ad45c: jal 0x1b7a70
    /* nop */                                                   // 0x001ad460: nop 
    if (v0 == 0) goto label_0x1ad47c;                           // 0x001ad464: beqz $v0, 0x1ad47c
    v1 = s3 << 1;                                               // 0x001ad468: sll $v1, $s3, 1
    if (s3 != 0) goto label_0x1ad47c;                           // 0x001ad46c: bnez $s3, 0x1ad47c
    /* nop */                                                   // 0x001ad470: nop 
    goto label_0x1ad508;                                        // 0x001ad474: b 0x1ad508
label_0x1ad47c:
    v0 = 0x2b << 16;                                            // 0x001ad47c: lui $v0, 0x2b
    v1 = v1 + s3;                                               // 0x001ad480: addu $v1, $v1, $s3
    v0 = v0 + -0x57d8;                                          // 0x001ad484: addiu $v0, $v0, -0x57d8
    s0 = v1 << 3;                                               // 0x001ad488: sll $s0, $v1, 3
    v0 = v0 + s0;                                               // 0x001ad48c: addu $v0, $v0, $s0
    a1 = g_002aa828;  // Global at 0x002aa828                   // 0x001ad490: lw $a1, 0($v0)
    func_001adab0();  // 0x1ad9c0                                // 0x001ad494: jal 0x1ad9c0
    if (s1 >= 0) goto label_0x1ad4cc;                           // 0x001ad49c: bgez $s1, 0x1ad4cc
    v0 = 0x2b << 16;                                            // 0x001ad4a0: lui $v0, 0x2b
    v0 = 0x2b << 16;                                            // 0x001ad4a4: lui $v0, 0x2b
    v1 = s3 << 2;                                               // 0x001ad4a8: sll $v1, $s3, 2
    v0 = v0 + -0x5788;                                          // 0x001ad4ac: addiu $v0, $v0, -0x5788
    s1 = v0 + v1;                                               // 0x001ad4b4: addu $s1, $v0, $v1
    a0 = *(int32_t*)(s1);                                       // 0x001ad4b8: lw $a0, 0($s1)
    func_00133240();  // 0x133150                                // 0x001ad4bc: jal 0x133150
    goto label_0x1ad4ec;                                        // 0x001ad4c4: b 0x1ad4ec
    a0 = *(int32_t*)(s1);                                       // 0x001ad4c8: lw $a0, 0($s1)
label_0x1ad4cc:
    v1 = s3 << 2;                                               // 0x001ad4cc: sll $v1, $s3, 2
    v0 = v0 + -0x5788;                                          // 0x001ad4d4: addiu $v0, $v0, -0x5788
    s1 = v0 + v1;                                               // 0x001ad4d8: addu $s1, $v0, $v1
    a0 = *(int32_t*)(s1);                                       // 0x001ad4dc: lw $a0, 0($s1)
    func_00133240();  // 0x133150                                // 0x001ad4e0: jal 0x133150
    a0 = *(int32_t*)(s1);                                       // 0x001ad4e8: lw $a0, 0($s1)
label_0x1ad4ec:
    func_00132c40();  // 0x132b10                                // 0x001ad4ec: jal 0x132b10
    v1 = 0x2b << 16;                                            // 0x001ad4f4: lui $v1, 0x2b
    v1 = v1 + -0x57e0;                                          // 0x001ad4fc: addiu $v1, $v1, -0x57e0
    v1 = v1 + s0;                                               // 0x001ad500: addu $v1, $v1, $s0
    g_002aa820 = 0;  // Global at 0x002aa820                    // 0x001ad504: sb $zero, 0($v1)
label_0x1ad508:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001ad510: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ad514: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ad518: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ad51c: jr $ra
    sp = sp + 0x50;                                             // 0x001ad520: addiu $sp, $sp, 0x50
}