void func_001c23d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001c23d0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c23dc: addu.qb $zero, $sp, $s1
    goto label_0x1c2444;                                        // 0x001c23e8: b 0x1c2444
label_0x1c23f0:
    func_001b65d0();  // 1b65d0                                // 0x001c23f0: jal 0x1b65d0
    a0 = v0 & 3;                                                // 0x001c23f8: andi $a0, $v0, 3
    v0 = 1;                                                     // 0x001c23fc: addiu $v0, $zero, 1
    if (a0 != v0) goto label_0x1c241c;                          // 0x001c2400: bne $a0, $v0, 0x1c241c
    v1 = s2 & 0xff;                                             // 0x001c2408: andi $v1, $s2, 0xff
    v0 = 0x3c;                                                  // 0x001c240c: addiu $v0, $zero, 0x3c
    if (v1 == v0) goto label_0x1c2450;                          // 0x001c2410: beq $v1, $v0, 0x1c2450
    /* nop */                                                   // 0x001c2414: nop 
label_0x1c241c:
    goto label_0x1c243c;                                        // 0x001c241c: b 0x1c243c
    v0 = (v1 < a0) ? 1 : 0;                                     // 0x001c2420: slt $v0, $v1, $a0
label_0x1c2424:
    v0 = *(int8_t*)(s1);                                        // 0x001c2424: lb $v0, 0($s1)
    v1 = v1 + 1;                                                // 0x001c2428: addiu $v1, $v1, 1
    *(uint8_t*)(s0) = v0;                                       // 0x001c242c: sb $v0, 0($s0)
    s1 = s1 + 1;                                                // 0x001c2430: addiu $s1, $s1, 1
    s0 = s0 + 1;                                                // 0x001c2434: addiu $s0, $s0, 1
    v0 = (v1 < a0) ? 1 : 0;                                     // 0x001c2438: slt $v0, $v1, $a0
label_0x1c243c:
    if (v0 != 0) goto label_0x1c2424;                           // 0x001c243c: bnez $v0, 0x1c2424
    /* nop */                                                   // 0x001c2440: nop 
label_0x1c2444:
    v0 = *(int8_t*)(s1);                                        // 0x001c2444: lb $v0, 0($s1)
    if (v0 != 0) goto label_0x1c23f0;                           // 0x001c2448: bnez $v0, 0x1c23f0
    s2 = v0 & 0xff;                                             // 0x001c244c: andi $s2, $v0, 0xff
label_0x1c2450:
    *(uint8_t*)(s0) = 0;                                        // 0x001c2450: sb $zero, 0($s0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c245c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c2460: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c2464: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c2468: jr $ra
    sp = sp + 0x40;                                             // 0x001c246c: addiu $sp, $sp, 0x40
}