void func_001a3420() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a3420: addiu $sp, $sp, -0x10
    func_001a3320();  // 0x1a32e0                                // 0x001a342c: jal 0x1a32e0
    v1 = -1;                                                    // 0x001a3434: addiu $v1, $zero, -1
    if (v0 != v1) goto label_0x1a3448;                          // 0x001a3438: bne $v0, $v1, 0x1a3448
    goto label_0x1a3470;                                        // 0x001a3440: b 0x1a3470
label_0x1a3448:
    goto label_0x1a3460;                                        // 0x001a3448: b 0x1a3460
label_0x1a3450:
    func_001a3420();  // 0x1a33a0                                // 0x001a3450: jal 0x1a33a0
    t1 = t1 + v0;                                               // 0x001a3458: addu $t1, $t1, $v0
    t2 = t2 + 1;                                                // 0x001a345c: addiu $t2, $t2, 1
label_0x1a3460:
    v0 = ((unsigned)t2 < (unsigned)t3) ? 1 : 0;                 // 0x001a3460: sltu $v0, $t2, $t3
    if (v0 != 0) goto label_0x1a3450;                           // 0x001a3464: bnez $v0, 0x1a3450
label_0x1a3470:
    return;                                                     // 0x001a3474: jr $ra
    sp = sp + 0x10;                                             // 0x001a3478: addiu $sp, $sp, 0x10
}