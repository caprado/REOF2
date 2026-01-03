void func_0018b280() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x0018b280: addiu $sp, $sp, -0x90
    v0 = 0x21 << 16;                                            // 0x0018b284: lui $v0, 0x21
    v1 = a2 << 2;                                               // 0x0018b28c: sll $v1, $a2, 2
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x0018b290: dps.w.ph $ac0, $sp, $s7
    v0 = v0 + 0x6340;                                           // 0x0018b294: addiu $v0, $v0, 0x6340
    v1 = v0 + v1;                                               // 0x0018b29c: addu $v1, $v0, $v1
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x0018b2a0: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0018b2b0: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018b2c0: addu.qb $zero, $sp, $s1
    s0 = *(int32_t*)((a0) + 0x20);                              // 0x0018b2cc: lw $s0, 0x20($a0)
    v0 = *(int32_t*)((a0) + 0x2c);                              // 0x0018b2d0: lw $v0, 0x2c($a0)
    s1 = *(int32_t*)(v1);                                       // 0x0018b2d4: lw $s1, 0($v1)
    goto label_0x18b308;                                        // 0x0018b2d8: b 0x18b308
    s7 = s0 + v0;                                               // 0x0018b2dc: addu $s7, $s0, $v0
label_0x18b2e0:
    a3 = g_00216340;  // Global at 0x00216340                   // 0x0018b2e4: lbu $a3, 0($v0)
    v0 = a3 << 2;                                               // 0x0018b2ec: sll $v0, $a3, 2
    v0 = s7 + v0;                                               // 0x0018b2f0: addu $v0, $s7, $v0
    v0 = g_00216340;  // Global at 0x00216340                   // 0x0018b2f4: lw $v0, 0($v0)
    func_0018b370();  // 18b370                                // 0x0018b2f8: jal 0x18b370
    a0 = s0 + v0;                                               // 0x0018b2fc: addu $a0, $s0, $v0
    s4 = s4 + s1;                                               // 0x0018b300: addu $s4, $s4, $s1
    s2 = s2 + 1;                                                // 0x0018b304: addiu $s2, $s2, 1
label_0x18b308:
    v0 = (s2 < s6) ? 1 : 0;                                     // 0x0018b308: slt $v0, $s2, $s6
    if (v0 != 0) goto label_0x18b2e0;                           // 0x0018b30c: bnez $v0, 0x18b2e0
    v0 = s3 + s2;                                               // 0x0018b310: addu $v0, $s3, $s2
    a1 = 1;                                                     // 0x0018b314: addiu $a1, $zero, 1
    func_0018c660();  // 18c660                                // 0x0018b320: jal 0x18c660
    *(uint32_t*)((s4) + 8) = 0;                                 // 0x0018b328: sw $zero, 8($s4)
    *(uint32_t*)((s4) + 0xc) = 0;                               // 0x0018b32c: sw $zero, 0xc($s4)
    *(uint32_t*)((s4) + 0x10) = 0;                              // 0x0018b330: sw $zero, 0x10($s4)
    *(uint32_t*)((s4) + 0x14) = 0;                              // 0x0018b334: sw $zero, 0x14($s4)
    *(uint32_t*)((s4) + 0x18) = 0;                              // 0x0018b338: sw $zero, 0x18($s4)
    *(uint32_t*)((s4) + 0x1c) = 0;                              // 0x0018b33c: sw $zero, 0x1c($s4)
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x0018b348: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x0018b34c: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0018b350: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018b358: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018b35c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018b360: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018b364: jr $ra
    sp = sp + 0x90;                                             // 0x0018b368: addiu $sp, $sp, 0x90
}