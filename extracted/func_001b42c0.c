void func_001b42c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x001b42c0: addiu $sp, $sp, -0x70
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001b42c8: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b42d4: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b42e4: addu.qb $zero, $sp, $s1
    a0 = 2;                                                     // 0x001b42f8: addiu $a0, $zero, 2
    func_001a9030();  // 0x1a8fc0                                // 0x001b42fc: jal 0x1a8fc0
    if (v0 == 0) goto label_0x1b4338;                           // 0x001b4304: beqz $v0, 0x1b4338
    at = 0x31 << 16;                                            // 0x001b430c: lui $at, 0x31
    v0 = g_003137a0;  // Global at 0x003137a0                   // 0x001b4310: lbu $v0, 0x37a0($at)
    if (v0 == 0) goto label_0x1b4334;                           // 0x001b4314: beqz $v0, 0x1b4334
    at = (s5 < 6) ? 1 : 0;                                      // 0x001b4318: slti $at, $s5, 6
    if (at == 0) goto label_0x1b4334;                           // 0x001b431c: beqz $at, 0x1b4334
    /* nop */                                                   // 0x001b4320: nop 
    func_006bbc50();  // 0x6bbc50                               // 0x001b4324: jal 0x6bbc50
    /* nop */                                                   // 0x001b4328: nop 
    if (v0 != 0) goto label_0x1b4354;                           // 0x001b432c: bnez $v0, 0x1b4354
    /* nop */                                                   // 0x001b4330: nop 
label_0x1b4334:
label_0x1b4338:
    func_001b42c0();  // 0x1b4180                                // 0x001b434c: jal 0x1b4180
label_0x1b4354:
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001b4358: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001b435c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b4364: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b4368: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b436c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b4370: jr $ra
    sp = sp + 0x70;                                             // 0x001b4374: addiu $sp, $sp, 0x70
}