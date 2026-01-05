void func_001d28a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x001d28a0: addiu $sp, $sp, -0x80
    at = 0x33 << 16;                                            // 0x001d28a4: lui $at, 0x33
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d28b0: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d28c0: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d28d0: addu.qb $zero, $sp, $s1
    v1 = g_0032ceac;  // Global at 0x0032ceac                   // 0x001d28e0: lbu $v1, -0x3154($at)
    at = 0x33 << 16;                                            // 0x001d28e4: lui $at, 0x33
    v0 = g_0032cead;  // Global at 0x0032cead                   // 0x001d28e8: lbu $v0, -0x3153($at)
    at = (v0 < v1) ? 1 : 0;                                     // 0x001d28ec: slt $at, $v0, $v1
    if (at == 0) goto label_0x1d28fc;                           // 0x001d28f0: beqz $at, 0x1d28fc
    v1 = v0 + 1;                                                // 0x001d28f8: addiu $v1, $v0, 1
label_0x1d28fc:
    at = 0x33 << 16;                                            // 0x001d28fc: lui $at, 0x33
    v0 = 1;                                                     // 0x001d2900: addiu $v0, $zero, 1
    g_0032cead = v1;  // Global at 0x0032cead                   // 0x001d2904: sb $v1, -0x3153($at)
    v1 = *(int8_t*)(s5);                                        // 0x001d2908: lb $v1, 0($s5)
    if (v1 == v0) goto label_0x1d293c;                          // 0x001d290c: beq $v1, $v0, 0x1d293c
    if (v1 == 0) goto label_0x1d2924;                           // 0x001d2914: beqz $v1, 0x1d2924
    /* nop */                                                   // 0x001d2918: nop 
    goto label_0x1d2974;                                        // 0x001d291c: b 0x1d2974
label_0x1d2924:
    v1 = v1 + 1;                                                // 0x001d2924: addiu $v1, $v1, 1
    *(uint8_t*)(s5) = v1;                                       // 0x001d292c: sb $v1, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d2930: sb $zero, 0($s4)
    goto label_0x1d2974;                                        // 0x001d2934: b 0x1d2974
    *(uint16_t*)(s3) = 0;                                       // 0x001d2938: sh $zero, 0($s3)
label_0x1d293c:
    func_001d29a0();  // 1d29a0                                // 0x001d293c: jal 0x1d29a0
    if (v0 == 0) goto label_0x1d2970;                           // 0x001d2944: beqz $v0, 0x1d2970
    /* nop */                                                   // 0x001d2948: nop 
    *(uint8_t*)(s6) = 0;                                        // 0x001d294c: sb $zero, 0($s6)
    v0 = 4;                                                     // 0x001d2950: addiu $v0, $zero, 4
    *(uint8_t*)(s5) = 0;                                        // 0x001d2954: sb $zero, 0($s5)
    *(uint8_t*)(s4) = 0;                                        // 0x001d2958: sb $zero, 0($s4)
    *(uint16_t*)(s3) = 0;                                       // 0x001d295c: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x001d2960: sh $zero, 0($s2)
    *(uint16_t*)(s1) = 0;                                       // 0x001d2964: sh $zero, 0($s1)
    goto label_0x1d2974;                                        // 0x001d2968: b 0x1d2974
    *(uint16_t*)(s0) = 0;                                       // 0x001d296c: sh $zero, 0($s0)
label_0x1d2970:
label_0x1d2974:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001d2978: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d297c: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d2980: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d2988: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d298c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d2990: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d2994: jr $ra
    sp = sp + 0x80;                                             // 0x001d2998: addiu $sp, $sp, 0x80
}