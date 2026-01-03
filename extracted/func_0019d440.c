/** @category graphics/texture @status complete @author caprado */
void func_0019d440() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_a0;
    
    goto label_0x19d450;                                        // 0x0019d440: j 0x19d450
    /* nop */                                                   // 0x0019d444: nop 
    /* nop */                                                   // 0x0019d448: nop 
    /* nop */                                                   // 0x0019d44c: nop 
label_0x19d450:
    sp = sp + -0xb0;                                            // 0x0019d450: addiu $sp, $sp, -0xb0
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x0019d460: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x0019d46c: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019d478: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019d484: addu.qb $zero, $sp, $s1
    goto label_0x19d5a8;                                        // 0x0019d48c: b 0x19d5a8
label_0x19d494:
    a2 = 0x29 << 16;                                            // 0x0019d494: lui $a2, 0x29
    v1 = s7 + v1;                                               // 0x0019d498: addu $v1, $s7, $v1
    a0 = 0xffff << 16;                                          // 0x0019d49c: lui $a0, 0xffff
    a1 = g_00285480;  // Global at 0x00285480                   // 0x0019d4a0: lw $a1, 0($v1)
    a2 = a2 + -0x7380;                                          // 0x0019d4a4: addiu $a2, $a2, -0x7380
    a0 = a1 & a0;                                               // 0x0019d4ac: and $a0, $a1, $a0
    s1 = a1 & 0xffff;                                           // 0x0019d4b0: andi $s1, $a1, 0xffff
    s0 = (unsigned)a0 >> 0x10;                                  // 0x0019d4b4: srl $s0, $a0, 0x10
    a3 = s1 + -1;                                               // 0x0019d4b8: addiu $a3, $s1, -1
    a0 = a3 << 3;                                               // 0x0019d4bc: sll $a0, $a3, 3
    v1 = 0x28 << 16;                                            // 0x0019d4c0: lui $v1, 0x28
    a1 = s0 + -1;                                               // 0x0019d4c4: addiu $a1, $s0, -1
    a3 = a0 - a3;                                               // 0x0019d4c8: subu $a3, $a0, $a3
    a0 = a1 << 3;                                               // 0x0019d4cc: sll $a0, $a1, 3
    v1 = v1 + 0x5480;                                           // 0x0019d4d0: addiu $v1, $v1, 0x5480
    a0 = a0 - a1;                                               // 0x0019d4d4: subu $a0, $a0, $a1
    a0 = a0 << 3;                                               // 0x0019d4d8: sll $a0, $a0, 3
    a1 = a3 << 3;                                               // 0x0019d4dc: sll $a1, $a3, 3
    v1 = v1 + a0;                                               // 0x0019d4e0: addu $v1, $v1, $a0
    fp = a2 + a1;                                               // 0x0019d4e4: addu $fp, $a2, $a1
    local_a0 = v1;                                              // 0x0019d4e8: sw $v1, 0xa0($sp)
label_0x19d4ec:
    if (s3 != 0) goto label_0x19d50c;                           // 0x0019d4ec: bnez $s3, 0x19d50c
    /* nop */                                                   // 0x0019d4f0: nop 
    if (s1 == 0) goto label_0x19d594;                           // 0x0019d4f4: beqz $s1, 0x19d594
    at = ((unsigned)s1 < (unsigned)0x100) ? 1 : 0;              // 0x0019d4f8: sltiu $at, $s1, 0x100
    if (at == 0) goto label_0x19d594;                           // 0x0019d4fc: beqz $at, 0x19d594
    goto label_0x19d524;                                        // 0x0019d504: b 0x19d524
    v1 = *(int8_t*)((s5) + 0x35);                               // 0x0019d508: lb $v1, 0x35($s5)
label_0x19d50c:
    if (s0 == 0) goto label_0x19d594;                           // 0x0019d50c: beqz $s0, 0x19d594
    at = ((unsigned)s0 < (unsigned)0x100) ? 1 : 0;              // 0x0019d510: sltiu $at, $s0, 0x100
    if (at == 0) goto label_0x19d594;                           // 0x0019d514: beqz $at, 0x19d594
    /* nop */                                                   // 0x0019d518: nop 
    s5 = local_a0;                                              // 0x0019d51c: lw $s5, 0xa0($sp)
    v1 = *(int8_t*)((s5) + 0x35);                               // 0x0019d520: lb $v1, 0x35($s5)
label_0x19d524:
    if (v1 != 0) goto label_0x19d594;                           // 0x0019d524: bnez $v1, 0x19d594
    /* nop */                                                   // 0x0019d528: nop 
    a1 = *(int16_t*)((s5) + 0x12);                              // 0x0019d52c: lh $a1, 0x12($s5)
    func_0019ee10();  // 0x19ed40                                // 0x0019d530: jal 0x19ed40
    a0 = *(int16_t*)((s5) + 0x10);                              // 0x0019d534: lh $a0, 0x10($s5)
    v1 = -1;                                                    // 0x0019d538: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x19d55c;                          // 0x0019d53c: beq $v0, $v1, 0x19d55c
    func_0019ea90();  // 0x19e990                                // 0x0019d548: jal 0x19e990
    goto label_0x19d584;                                        // 0x0019d550: b 0x19d584
label_0x19d558:
label_0x19d55c:
    func_0019f080();  // 0x19ee10                                // 0x0019d560: jal 0x19ee10
    v1 = -1;                                                    // 0x0019d568: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x19d558;                          // 0x0019d56c: beq $v0, $v1, 0x19d558
    /* nop */                                                   // 0x0019d570: nop 
    func_0019eb90();  // 0x19ea90                                // 0x0019d578: jal 0x19ea90
label_0x19d584:
    func_0019cd80();  // 0x19cb80                                // 0x0019d584: jal 0x19cb80
    /* nop */                                                   // 0x0019d588: nop 
    s2 = s2 + 1;                                                // 0x0019d590: addiu $s2, $s2, 1
label_0x19d594:
    s3 = s3 + 1;                                                // 0x0019d594: addiu $s3, $s3, 1
    v1 = (s3 < 2) ? 1 : 0;                                      // 0x0019d598: slti $v1, $s3, 2
    if (v1 != 0) goto label_0x19d4ec;                           // 0x0019d59c: bnez $v1, 0x19d4ec
    /* nop */                                                   // 0x0019d5a0: nop 
    s4 = s4 + 1;                                                // 0x0019d5a4: addiu $s4, $s4, 1
label_0x19d5a8:
    v1 = (s4 < s6) ? 1 : 0;                                     // 0x0019d5a8: slt $v1, $s4, $s6
    if (v1 != 0) goto label_0x19d494;                           // 0x0019d5ac: bnez $v1, 0x19d494
    v1 = s4 << 2;                                               // 0x0019d5b0: sll $v1, $s4, 2
    if (v0 == 0) goto label_0x19d5fc;                           // 0x0019d5b4: beqz $v0, 0x19d5fc
    func_0018c760();  // 0x18c750                                // 0x0019d5bc: jal 0x18c750
    /* nop */                                                   // 0x0019d5c0: nop 
    func_0018dca0();  // 0x18dc30                                // 0x0019d5c8: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019d5cc: addiu $a1, $zero, 0x10
    a1 = 1;                                                     // 0x0019d5d4: addiu $a1, $zero, 1
    func_0018cc10();  // 0x18cba0                                // 0x0019d5d8: jal 0x18cba0
    a3 = 0x29 << 16;                                            // 0x0019d5e4: lui $a3, 0x29
    func_0018cff0();  // 0x18ce40                                // 0x0019d5f4: jal 0x18ce40
    a3 = a3 + -0x350;                                           // 0x0019d5f8: addiu $a3, $a3, -0x350
label_0x19d5fc:
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x0019d604: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x0019d60c: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x0019d610: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0019d614: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019d61c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019d620: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019d624: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019d628: jr $ra
    sp = sp + 0xb0;                                             // 0x0019d62c: addiu $sp, $sp, 0xb0
}