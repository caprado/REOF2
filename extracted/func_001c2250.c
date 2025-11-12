void func_001c2250() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xf0;                                            // 0x001c2250: addiu $sp, $sp, -0xf0
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c225c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c226c: addu.qb $zero, $sp, $s1
    func_001b5010();  // 0x1b4ff0                                // 0x001c2274: jal 0x1b4ff0
    goto label_0x1c2340;                                        // 0x001c227c: b 0x1c2340
    v0 = *(int8_t*)(s4);                                        // 0x001c2280: lb $v0, 0($s4)
label_0x1c2284:
    func_001c23d0();  // 0x1c2370                                // 0x001c2284: jal 0x1c2370
    a1 = sp + 0x60;                                             // 0x001c2288: addiu $a1, $sp, 0x60
    if (v0 != 0) goto label_0x1c2330;                           // 0x001c228c: bnez $v0, 0x1c2330
    func_001c2470();  // 0x1c23d0                                // 0x001c2298: jal 0x1c23d0
    a1 = sp + 0x60;                                             // 0x001c229c: addiu $a1, $sp, 0x60
    if (s3 != 0) goto label_0x1c22b8;                           // 0x001c22a0: bnez $s3, 0x1c22b8
    func_001b7300();  // 0x1b7130                                // 0x001c22a8: jal 0x1b7130
    a0 = sp + 0x60;                                             // 0x001c22ac: addiu $a0, $sp, 0x60
    goto label_0x1c233c;                                        // 0x001c22b0: b 0x1c233c
    /* nop */                                                   // 0x001c22b4: nop 
label_0x1c22b8:
    s0 = sp + 0x60;                                             // 0x001c22b8: addiu $s0, $sp, 0x60
    goto label_0x1c231c;                                        // 0x001c22bc: b 0x1c231c
    s1 = sp + 0xec;                                             // 0x001c22c0: addiu $s1, $sp, 0xec
label_0x1c22c4:
    func_001b6720();  // 0x1b65d0                                // 0x001c22c4: jal 0x1b65d0
    v1 = v0 & 3;                                                // 0x001c22cc: andi $v1, $v0, 3
    goto label_0x1c22ec;                                        // 0x001c22d0: b 0x1c22ec
label_0x1c22d8:
    v0 = *(int8_t*)(s0);                                        // 0x001c22d8: lb $v0, 0($s0)
    a0 = a0 + 1;                                                // 0x001c22dc: addiu $a0, $a0, 1
    *(uint8_t*)(s1) = v0;                                       // 0x001c22e0: sb $v0, 0($s1)
    s0 = s0 + 1;                                                // 0x001c22e4: addiu $s0, $s0, 1
    s1 = s1 + 1;                                                // 0x001c22e8: addiu $s1, $s1, 1
label_0x1c22ec:
    v0 = (a0 < v1) ? 1 : 0;                                     // 0x001c22ec: slt $v0, $a0, $v1
    if (v0 != 0) goto label_0x1c22d8;                           // 0x001c22f0: bnez $v0, 0x1c22d8
    /* nop */                                                   // 0x001c22f4: nop 
    a0 = sp + 0xec;                                             // 0x001c22f8: addiu $a0, $sp, 0xec
    func_001b7300();  // 0x1b7130                                // 0x001c22fc: jal 0x1b7130
    *(uint8_t*)(s1) = 0;                                        // 0x001c2300: sb $zero, 0($s1)
    s2 = s2 + 1;                                                // 0x001c2304: addiu $s2, $s2, 1
    v0 = (s2 < s3) ? 1 : 0;                                     // 0x001c2308: slt $v0, $s2, $s3
    if (v0 != 0) goto label_0x1c231c;                           // 0x001c230c: bnez $v0, 0x1c231c
    s1 = sp + 0xec;                                             // 0x001c2310: addiu $s1, $sp, 0xec
    goto label_0x1c234c;                                        // 0x001c2314: b 0x1c234c
label_0x1c231c:
    v0 = *(uint8_t*)(s0);                                       // 0x001c231c: lbu $v0, 0($s0)
    if (v0 != 0) goto label_0x1c22c4;                           // 0x001c2320: bnez $v0, 0x1c22c4
    /* nop */                                                   // 0x001c2324: nop 
    goto label_0x1c233c;                                        // 0x001c2328: b 0x1c233c
    /* nop */                                                   // 0x001c232c: nop 
label_0x1c2330:
    func_001c24f0();  // 0x1c2470                                // 0x001c2330: jal 0x1c2470
    a0 = sp + 0x60;                                             // 0x001c2334: addiu $a0, $sp, 0x60
label_0x1c233c:
    v0 = *(int8_t*)(s4);                                        // 0x001c233c: lb $v0, 0($s4)
label_0x1c2340:
    if (v0 != 0) goto label_0x1c2284;                           // 0x001c2340: bnez $v0, 0x1c2284
label_0x1c234c:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001c2350: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c2358: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c235c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c2360: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c2364: jr $ra
    sp = sp + 0xf0;                                             // 0x001c2368: addiu $sp, $sp, 0xf0
}