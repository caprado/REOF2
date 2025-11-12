void func_001d9290() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x001d9290: addiu $sp, $sp, -0x70
    a0 = 0x4200;                                                // 0x001d9294: addiu $a0, $zero, 0x4200
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d929c: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d92a4: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d92b0: addu.qb $zero, $sp, $s1
    func_001d3c30();  // 0x1d3c20                                // 0x001d92b4: jal 0x1d3c20
    at = 0x31 << 16;                                            // 0x001d92bc: lui $at, 0x31
    a0 = 0x24 << 16;                                            // 0x001d92c0: lui $a0, 0x24
    s2 = g_003137fc;  // Global at 0x003137fc                   // 0x001d92c4: lw $s2, 0x37fc($at)
    v0 = 0x10 << 16;                                            // 0x001d92c8: lui $v0, 0x10
    a0 = &str_002478d0;  // "%s/r%03d%02d%02d.rdt"              // 0x001d92cc: addiu $a0, $a0, 0x78d0
    a2 = 1;                                                     // 0x001d92d0: addiu $a2, $zero, 1
    s1 = s2 + v0;                                               // 0x001d92d8: addu $s1, $s2, $v0
    func_001d33e0();  // 0x1d3390                                // 0x001d92dc: jal 0x1d3390
    if (v0 == 0) goto label_0x1d933c;                           // 0x001d92e4: beqz $v0, 0x1d933c
    /* nop */                                                   // 0x001d92e8: nop 
    s5 = *(int32_t*)((s2) + 4);                                 // 0x001d92ec: lw $s5, 4($s2)
    s0 = s2 + 8;                                                // 0x001d92f0: addiu $s0, $s2, 8
    goto label_0x1d9330;                                        // 0x001d92f4: b 0x1d9330
label_0x1d92fc:
    v0 = *(int32_t*)(s0);                                       // 0x001d92fc: lw $v0, 0($s0)
    a0 = s2 + v0;                                               // 0x001d9304: addu $a0, $s2, $v0
    func_001aeef0();  // 0x1aee20                                // 0x001d9308: jal 0x1aee20
    s0 = s0 + 8;                                                // 0x001d930c: addiu $s0, $s0, 8
    a0 = s4 + 0x4200;                                           // 0x001d9310: addiu $a0, $s4, 0x4200
    func_001d36b0();  // 0x1d3600                                // 0x001d9314: jal 0x1d3600
    func_001d3d20();  // 0x1d3cb0                                // 0x001d931c: jal 0x1d3cb0
    a0 = s4 + 0x4200;                                           // 0x001d9320: addiu $a0, $s4, 0x4200
    *(uint32_t*)(s3) = v0;                                      // 0x001d9324: sw $v0, 0($s3)
    s4 = s4 + 1;                                                // 0x001d9328: addiu $s4, $s4, 1
    s3 = s3 + 4;                                                // 0x001d932c: addiu $s3, $s3, 4
label_0x1d9330:
    v1 = (s4 < s5) ? 1 : 0;                                     // 0x001d9330: slt $v1, $s4, $s5
    if (v1 != 0) goto label_0x1d92fc;                           // 0x001d9334: bnez $v1, 0x1d92fc
    /* nop */                                                   // 0x001d9338: nop 
label_0x1d933c:
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d9340: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d9344: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d934c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d9350: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d9354: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d9358: jr $ra
    sp = sp + 0x70;                                             // 0x001d935c: addiu $sp, $sp, 0x70
}