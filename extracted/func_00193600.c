void func_00193600() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    goto label_0x193610;                                        // 0x00193604: j 0x193610
    a3 = 1;                                                     // 0x00193608: addiu $a3, $zero, 1
    /* nop */                                                   // 0x0019360c: nop 
label_0x193610:
    sp = sp + -0x60;                                            // 0x00193610: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019361c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019362c: addu.qb $zero, $sp, $s1
    func_0018db10();  // 0x18db00                                // 0x00193634: jal 0x18db00
    s2 = *(int16_t*)((v0) + 2);                                 // 0x0019363c: lh $s2, 2($v0)
    goto label_0x1936ac;                                        // 0x00193644: b 0x1936ac
label_0x19364c:
    v1 = -1;                                                    // 0x0019364c: addiu $v1, $zero, -1
    a0 = s4 + v0;                                               // 0x00193650: addu $a0, $s4, $v0
    v0 = *(int32_t*)(a0);                                       // 0x00193654: lw $v0, 0($a0)
    *(uint16_t*)((v0) + 0xc2) = s2;                             // 0x00193658: sh $s2, 0xc2($v0)
    v0 = *(int32_t*)(a0);                                       // 0x0019365c: lw $v0, 0($a0)
    *(uint16_t*)((v0) + 0x180) = v1;                            // 0x00193660: sh $v1, 0x180($v0)
    v0 = *(int32_t*)(a0);                                       // 0x00193664: lw $v0, 0($a0)
    *(uint16_t*)((v0) + 0x182) = v1;                            // 0x00193668: sh $v1, 0x182($v0)
    v0 = *(int32_t*)(a0);                                       // 0x0019366c: lw $v0, 0($a0)
    *(uint32_t*)((v0) + 0xcc) = 0;                              // 0x00193670: sw $zero, 0xcc($v0)
    v0 = *(int32_t*)(a0);                                       // 0x00193674: lw $v0, 0($a0)
    *(uint32_t*)((v0) + 0xd0) = 0;                              // 0x00193678: sw $zero, 0xd0($v0)
    v0 = *(int32_t*)(a0);                                       // 0x0019367c: lw $v0, 0($a0)
    *(uint32_t*)((v0) + 0xd4) = 0;                              // 0x00193680: sw $zero, 0xd4($v0)
    v0 = *(int32_t*)(a0);                                       // 0x00193684: lw $v0, 0($a0)
    *(uint32_t*)((v0) + 0xd8) = 0;                              // 0x00193688: sw $zero, 0xd8($v0)
    v0 = *(int32_t*)(a0);                                       // 0x0019368c: lw $v0, 0($a0)
    *(uint32_t*)((v0) + 0x178) = 0;                             // 0x00193690: sw $zero, 0x178($v0)
    v0 = *(int32_t*)(a0);                                       // 0x00193694: lw $v0, 0($a0)
    *(uint32_t*)((v0) + 0x17c) = 0;                             // 0x00193698: sw $zero, 0x17c($v0)
    v0 = *(int32_t*)(a0);                                       // 0x0019369c: lw $v0, 0($a0)
    func_0018fbd0();  // 0x18fba0                                // 0x001936a0: jal 0x18fba0
    a0 = v0 + 0x40;                                             // 0x001936a4: addiu $a0, $v0, 0x40
    s0 = s0 + 1;                                                // 0x001936a8: addiu $s0, $s0, 1
label_0x1936ac:
    v0 = (s0 < s2) ? 1 : 0;                                     // 0x001936ac: slt $v0, $s0, $s2
    if (v0 != 0) goto label_0x19364c;                           // 0x001936b0: bnez $v0, 0x19364c
    v0 = s0 << 2;                                               // 0x001936b4: sll $v0, $s0, 2
    goto label_0x1936d8;                                        // 0x001936b8: b 0x1936d8
label_0x1936c0:
    v0 = s4 + v0;                                               // 0x001936c4: addu $v0, $s4, $v0
    a0 = *(int32_t*)(v0);                                       // 0x001936c8: lw $a0, 0($v0)
    func_00193d00();  // 0x193c50                                // 0x001936cc: jal 0x193c50
    s0 = s0 + 1;                                                // 0x001936d4: addiu $s0, $s0, 1
label_0x1936d8:
    v0 = (s0 < s2) ? 1 : 0;                                     // 0x001936d8: slt $v0, $s0, $s2
    if (v0 != 0) goto label_0x1936c0;                           // 0x001936dc: bnez $v0, 0x1936c0
    v0 = s0 << 2;                                               // 0x001936e0: sll $v0, $s0, 2
    a1 = *(int32_t*)(s4);                                       // 0x001936e4: lw $a1, 0($s4)
    func_001937f0();  // 0x193750                                // 0x001936ec: jal 0x193750
    v0 = 1;                                                     // 0x001936f4: addiu $v0, $zero, 1
    if (s3 == v0) goto label_0x193720;                          // 0x001936f8: beq $s3, $v0, 0x193720
    /* nop */                                                   // 0x001936fc: nop 
    if (s3 == 0) goto label_0x193710;                           // 0x00193700: beqz $s3, 0x193710
    /* nop */                                                   // 0x00193704: nop 
    goto label_0x19372c;                                        // 0x00193708: b 0x19372c
label_0x193710:
    func_00193810();  // 0x1937f0                                // 0x00193710: jal 0x1937f0
    a0 = *(int32_t*)(s4);                                       // 0x00193714: lw $a0, 0($s4)
    goto label_0x193728;                                        // 0x00193718: b 0x193728
    /* nop */                                                   // 0x0019371c: nop 
label_0x193720:
    func_00193920();  // 0x193900                                // 0x00193720: jal 0x193900
    a0 = *(int32_t*)(s4);                                       // 0x00193724: lw $a0, 0($s4)
label_0x193728:
label_0x19372c:
    v0 = 1;                                                     // 0x0019372c: addiu $v0, $zero, 1
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x00193730: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x00193738: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019373c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00193740: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00193744: jr $ra
    sp = sp + 0x60;                                             // 0x00193748: addiu $sp, $sp, 0x60
}