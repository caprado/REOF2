void func_001c2110() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xf0;                                            // 0x001c2110: addiu $sp, $sp, -0xf0
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c211c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c212c: addu.qb $zero, $sp, $s1
    func_001b5010();  // 1b5010                                // 0x001c2140: jal 0x1b5010
    a0 = -2;                                                    // 0x001c2144: addiu $a0, $zero, -2
    func_001b4ff0();  // 1b4ff0                                // 0x001c214c: jal 0x1b4ff0
    goto label_0x1c2218;                                        // 0x001c2154: b 0x1c2218
    v0 = *(int8_t*)(s4);                                        // 0x001c2158: lb $v0, 0($s4)
label_0x1c215c:
    func_001c2370();  // 1c2370                                // 0x001c215c: jal 0x1c2370
    a1 = sp + 0x60;                                             // 0x001c2160: addiu $a1, $sp, 0x60
    if (v0 != 0) goto label_0x1c2208;                           // 0x001c2164: bnez $v0, 0x1c2208
    func_001c23d0();  // 1c23d0                                // 0x001c2170: jal 0x1c23d0
    a1 = sp + 0x60;                                             // 0x001c2174: addiu $a1, $sp, 0x60
    if (s3 != 0) goto label_0x1c2190;                           // 0x001c2178: bnez $s3, 0x1c2190
    func_001b7130();  // 1b7130                                // 0x001c2180: jal 0x1b7130
    a0 = sp + 0x60;                                             // 0x001c2184: addiu $a0, $sp, 0x60
    goto label_0x1c2214;                                        // 0x001c2188: b 0x1c2214
    /* nop */                                                   // 0x001c218c: nop 
label_0x1c2190:
    s0 = sp + 0x60;                                             // 0x001c2190: addiu $s0, $sp, 0x60
    goto label_0x1c21f4;                                        // 0x001c2194: b 0x1c21f4
    s1 = sp + 0xec;                                             // 0x001c2198: addiu $s1, $sp, 0xec
label_0x1c219c:
    func_001b65d0();  // 1b65d0                                // 0x001c219c: jal 0x1b65d0
    v1 = v0 & 3;                                                // 0x001c21a4: andi $v1, $v0, 3
    goto label_0x1c21c4;                                        // 0x001c21a8: b 0x1c21c4
label_0x1c21b0:
    v0 = *(int8_t*)(s0);                                        // 0x001c21b0: lb $v0, 0($s0)
    a0 = a0 + 1;                                                // 0x001c21b4: addiu $a0, $a0, 1
    *(uint8_t*)(s1) = v0;                                       // 0x001c21b8: sb $v0, 0($s1)
    s0 = s0 + 1;                                                // 0x001c21bc: addiu $s0, $s0, 1
    s1 = s1 + 1;                                                // 0x001c21c0: addiu $s1, $s1, 1
label_0x1c21c4:
    v0 = (a0 < v1) ? 1 : 0;                                     // 0x001c21c4: slt $v0, $a0, $v1
    if (v0 != 0) goto label_0x1c21b0;                           // 0x001c21c8: bnez $v0, 0x1c21b0
    /* nop */                                                   // 0x001c21cc: nop 
    a0 = sp + 0xec;                                             // 0x001c21d0: addiu $a0, $sp, 0xec
    func_001b7130();  // 1b7130                                // 0x001c21d4: jal 0x1b7130
    *(uint8_t*)(s1) = 0;                                        // 0x001c21d8: sb $zero, 0($s1)
    s2 = s2 + 1;                                                // 0x001c21dc: addiu $s2, $s2, 1
    v0 = (s2 < s3) ? 1 : 0;                                     // 0x001c21e0: slt $v0, $s2, $s3
    if (v0 != 0) goto label_0x1c21f4;                           // 0x001c21e4: bnez $v0, 0x1c21f4
    s1 = sp + 0xec;                                             // 0x001c21e8: addiu $s1, $sp, 0xec
    goto label_0x1c2224;                                        // 0x001c21ec: b 0x1c2224
label_0x1c21f4:
    v0 = *(uint8_t*)(s0);                                       // 0x001c21f4: lbu $v0, 0($s0)
    if (v0 != 0) goto label_0x1c219c;                           // 0x001c21f8: bnez $v0, 0x1c219c
    /* nop */                                                   // 0x001c21fc: nop 
    goto label_0x1c2214;                                        // 0x001c2200: b 0x1c2214
    /* nop */                                                   // 0x001c2204: nop 
label_0x1c2208:
    func_001c2470();  // 1c2470                                // 0x001c2208: jal 0x1c2470
    a0 = sp + 0x60;                                             // 0x001c220c: addiu $a0, $sp, 0x60
label_0x1c2214:
    v0 = *(int8_t*)(s4);                                        // 0x001c2214: lb $v0, 0($s4)
label_0x1c2218:
    if (v0 != 0) goto label_0x1c215c;                           // 0x001c2218: bnez $v0, 0x1c215c
label_0x1c2224:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001c2228: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c2230: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c2234: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c2238: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c223c: jr $ra
    sp = sp + 0xf0;                                             // 0x001c2240: addiu $sp, $sp, 0xf0
}