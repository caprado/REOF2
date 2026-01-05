void func_00193400() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    goto label_0x193410;                                        // 0x00193404: j 0x193410
    a3 = 1;                                                     // 0x00193408: addiu $a3, $zero, 1
    /* nop */                                                   // 0x0019340c: nop 
label_0x193410:
    sp = sp + -0x60;                                            // 0x00193410: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019341c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019342c: addu.qb $zero, $sp, $s1
    func_0018db00();  // 18db00                                // 0x00193434: jal 0x18db00
    s2 = *(int16_t*)((v0) + 2);                                 // 0x0019343c: lh $s2, 2($v0)
    goto label_0x193494;                                        // 0x00193444: b 0x193494
label_0x19344c:
    v0 = -1;                                                    // 0x0019344c: addiu $v0, $zero, -1
    a0 = v1 + s0;                                               // 0x00193450: addu $a0, $v1, $s0
    v1 = a0 << 2;                                               // 0x00193454: sll $v1, $a0, 2
    v1 = a0 + v1;                                               // 0x00193458: addu $v1, $a0, $v1
    v1 = v1 << 4;                                               // 0x0019345c: sll $v1, $v1, 4
    v1 = s4 + v1;                                               // 0x00193460: addu $v1, $s4, $v1
    *(uint16_t*)((v1) + 0xc2) = s2;                             // 0x00193464: sh $s2, 0xc2($v1)
    a0 = v1 + 0x40;                                             // 0x00193468: addiu $a0, $v1, 0x40
    *(uint16_t*)((v1) + 0x180) = v0;                            // 0x0019346c: sh $v0, 0x180($v1)
    *(uint16_t*)((v1) + 0x182) = v0;                            // 0x00193470: sh $v0, 0x182($v1)
    *(uint32_t*)((v1) + 0xcc) = 0;                              // 0x00193474: sw $zero, 0xcc($v1)
    *(uint32_t*)((v1) + 0xd0) = 0;                              // 0x00193478: sw $zero, 0xd0($v1)
    *(uint32_t*)((v1) + 0xd4) = 0;                              // 0x0019347c: sw $zero, 0xd4($v1)
    *(uint32_t*)((v1) + 0xd8) = 0;                              // 0x00193480: sw $zero, 0xd8($v1)
    *(uint32_t*)((v1) + 0x178) = 0;                             // 0x00193484: sw $zero, 0x178($v1)
    func_0018fba0();  // 18fba0                                // 0x00193488: jal 0x18fba0
    *(uint32_t*)((v1) + 0x17c) = 0;                             // 0x0019348c: sw $zero, 0x17c($v1)
    s0 = s0 + 1;                                                // 0x00193490: addiu $s0, $s0, 1
label_0x193494:
    v0 = (s0 < s2) ? 1 : 0;                                     // 0x00193494: slt $v0, $s0, $s2
    if (v0 != 0) goto label_0x19344c;                           // 0x00193498: bnez $v0, 0x19344c
    v1 = s0 << 2;                                               // 0x0019349c: sll $v1, $s0, 2
    goto label_0x1934cc;                                        // 0x001934a0: b 0x1934cc
label_0x1934a8:
    v1 = v0 + s0;                                               // 0x001934ac: addu $v1, $v0, $s0
    v0 = v1 << 2;                                               // 0x001934b4: sll $v0, $v1, 2
    v0 = v1 + v0;                                               // 0x001934b8: addu $v0, $v1, $v0
    v0 = v0 << 4;                                               // 0x001934bc: sll $v0, $v0, 4
    func_00193c50();  // 193c50                                // 0x001934c0: jal 0x193c50
    a0 = s4 + v0;                                               // 0x001934c4: addu $a0, $s4, $v0
    s0 = s0 + 1;                                                // 0x001934c8: addiu $s0, $s0, 1
label_0x1934cc:
    v0 = (s0 < s2) ? 1 : 0;                                     // 0x001934cc: slt $v0, $s0, $s2
    if (v0 != 0) goto label_0x1934a8;                           // 0x001934d0: bnez $v0, 0x1934a8
    v0 = s0 << 2;                                               // 0x001934d4: sll $v0, $s0, 2
    func_00193540();  // 193540                                // 0x001934e0: jal 0x193540
    v0 = 1;                                                     // 0x001934e8: addiu $v0, $zero, 1
    if (s3 == v0) goto label_0x193514;                          // 0x001934ec: beq $s3, $v0, 0x193514
    if (s3 == 0) goto label_0x193504;                           // 0x001934f4: beqz $s3, 0x193504
    goto label_0x193520;                                        // 0x001934fc: b 0x193520
label_0x193504:
    func_001937f0();  // 1937f0                                // 0x00193504: jal 0x1937f0
    /* nop */                                                   // 0x00193508: nop 
    goto label_0x19351c;                                        // 0x0019350c: b 0x19351c
    /* nop */                                                   // 0x00193510: nop 
label_0x193514:
    func_00193900();  // 193900                                // 0x00193514: jal 0x193900
    /* nop */                                                   // 0x00193518: nop 
label_0x19351c:
label_0x193520:
    v0 = 1;                                                     // 0x00193520: addiu $v0, $zero, 1
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x00193524: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019352c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00193530: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00193534: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00193538: jr $ra
    sp = sp + 0x60;                                             // 0x0019353c: addiu $sp, $sp, 0x60
}