/** @category graphics/dma @status complete @author caprado */
void func_0018cd80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0018cd80: addiu $sp, $sp, -0x50
    at = 0x29 << 16;                                            // 0x0018cd84: lui $at, 0x29
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0018cd8c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018cd98: addu.qb $zero, $sp, $s1
    v1 = g_00290374;  // Global at 0x00290374                   // 0x0018cda4: lw $v1, 0x374($at)
    v0 = *(int32_t*)((a1) + 4);                                 // 0x0018cda8: lw $v0, 4($a1)
    s0 = v1 << 2;                                               // 0x0018cdac: sll $s0, $v1, 2
    a0 = s0 + a1;                                               // 0x0018cdb0: addu $a0, $s0, $a1
    v0 = v0 + -1;                                               // 0x0018cdb4: addiu $v0, $v0, -1
    v1 = *(int32_t*)((a0) + 0x14);                              // 0x0018cdb8: lw $v1, 0x14($a0)
    at = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x0018cdbc: sltu $at, $v0, $v1
    if (at != 0) goto label_0x18ce1c;                           // 0x0018cdc0: bnez $at, 0x18ce1c
    s1 = a0 + 0x14;                                             // 0x0018cdc4: addiu $s1, $a0, 0x14
    func_0018db00();  // 18db00                                // 0x0018cdc8: jal 0x18db00
    a0 = *(int32_t*)((a0) + 0xc);                               // 0x0018cdcc: lw $a0, 0xc($a0)
    v1 = *(int32_t*)(s1);                                       // 0x0018cdd0: lw $v1, 0($s1)
    a1 = s0 + s2;                                               // 0x0018cdd4: addu $a1, $s0, $s2
    v1 = v1 + 1;                                                // 0x0018cdd8: addiu $v1, $v1, 1
    *(uint32_t*)(s1) = v1;                                      // 0x0018cddc: sw $v1, 0($s1)
    v1 = *(int32_t*)((a1) + 0x1c);                              // 0x0018cde0: lw $v1, 0x1c($a1)
    a0 = v1 + 1;                                                // 0x0018cde4: addiu $a0, $v1, 1
    v1 = v1 << 2;                                               // 0x0018cde8: sll $v1, $v1, 2
    *(uint32_t*)((a1) + 0x1c) = a0;                             // 0x0018cdec: sw $a0, 0x1c($a1)
    v0 = v0 + v1;                                               // 0x0018cdf0: addu $v0, $v0, $v1
    *(uint32_t*)(v0) = s3;                                      // 0x0018cdf4: sw $s3, 0($v0)
    v1 = *(int32_t*)((a1) + 0x1c);                              // 0x0018cdf8: lw $v1, 0x1c($a1)
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0018cdfc: lw $v0, 4($s2)
    if (v1 != v0) goto label_0x18ce0c;                          // 0x0018ce00: bne $v1, $v0, 0x18ce0c
    a2 = a1 + 0x1c;                                             // 0x0018ce04: addiu $a2, $a1, 0x1c
    *(uint32_t*)(a2) = 0;                                       // 0x0018ce08: sw $zero, 0($a2)
label_0x18ce0c:
    *(uint32_t*)((s2) + 0x34) = 0;                              // 0x0018ce0c: sw $zero, 0x34($s2)
    goto label_0x18ce20;                                        // 0x0018ce14: b 0x18ce20
    *(uint32_t*)((s2) + 0x38) = 0;                              // 0x0018ce18: sw $zero, 0x38($s2)
label_0x18ce1c:
    v0 = -1;                                                    // 0x0018ce1c: addiu $v0, $zero, -1
label_0x18ce20:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018ce28: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018ce2c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018ce30: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018ce34: jr $ra
    sp = sp + 0x50;                                             // 0x0018ce38: addiu $sp, $sp, 0x50
}