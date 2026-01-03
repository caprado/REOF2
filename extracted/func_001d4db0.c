void func_001d4db0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x180;                                           // 0x001d4db0: addiu $sp, $sp, -0x180
    v0 = -1;                                                    // 0x001d4db4: addiu $v0, $zero, -1
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d4dc0: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d4dcc: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d4ddc: addu.qb $zero, $sp, $s1
    if (s4 != v0) goto label_0x1d4e00;                          // 0x001d4de4: bne $s4, $v0, 0x1d4e00
    s4 = *(int32_t*)((gp) + -0x7ae4);                           // 0x001d4dec: lw $s4, -0x7ae4($gp)
    if (s4 != v0) goto label_0x1d4e04;                          // 0x001d4df0: bne $s4, $v0, 0x1d4e04
    goto label_0x1d4f00;                                        // 0x001d4df8: b 0x1d4f00
label_0x1d4e00:
label_0x1d4e04:
    v0 = (unsigned)s5 >> 0x1d;                                  // 0x001d4e04: srl $v0, $s5, 0x1d
    a3 = v0 & 7;                                                // 0x001d4e08: andi $a3, $v0, 7
    func_001d4140();  // 1d4140                                // 0x001d4e10: jal 0x1d4140
    a2 = 1;                                                     // 0x001d4e14: addiu $a2, $zero, 1
    if (s1 != 0) goto label_0x1d4e2c;                           // 0x001d4e1c: bnez $s1, 0x1d4e2c
    goto label_0x1d4f00;                                        // 0x001d4e24: b 0x1d4f00
label_0x1d4e2c:
    func_0010ae00();  // 10ae00                                // 0x001d4e2c: jal 0x10ae00
    /* nop */                                                   // 0x001d4e30: nop 
    if (v0 != 0) goto label_0x1d4e44;                           // 0x001d4e34: bnez $v0, 0x1d4e44
    a0 = sp + 0x80;                                             // 0x001d4e38: addiu $a0, $sp, 0x80
    goto label_0x1d4f00;                                        // 0x001d4e3c: b 0x1d4f00
label_0x1d4e44:
    func_0010ac68();  // 10ac68                                // 0x001d4e44: jal 0x10ac68
    a1 = 0x24 << 16;                                            // 0x001d4e4c: lui $a1, 0x24
    a0 = sp + 0x80;                                             // 0x001d4e50: addiu $a0, $sp, 0x80
    func_0010a860();  // 10a860                                // 0x001d4e54: jal 0x10a860
    a1 = a1 + 0x7378;                                           // 0x001d4e58: addiu $a1, $a1, 0x7378
    s0 = *(int32_t*)((gp) + -0x6234);                           // 0x001d4e5c: lw $s0, -0x6234($gp)
    s6 = sp + 0x80;                                             // 0x001d4e60: addiu $s6, $sp, 0x80
    a2 = 1;                                                     // 0x001d4e68: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001d4e70: jal 0x1d3390
    if (v0 <= 0) goto label_0x1d4eb0;                           // 0x001d4e78: blez $v0, 0x1d4eb0
    func_001d9490();  // 1d9490                                // 0x001d4e88: jal 0x1d9490
    func_001b29e0();  // 1b29e0                                // 0x001d4e90: jal 0x1b29e0
    a2 = s5 & 0xff;                                             // 0x001d4e98: andi $a2, $s5, 0xff
    func_001d96b0();  // 1d96b0                                // 0x001d4ea0: jal 0x1d96b0
    s2 = 1;                                                     // 0x001d4ea8: addiu $s2, $zero, 1
label_0x1d4eb0:
    func_0010ac68();  // 10ac68                                // 0x001d4eb0: jal 0x10ac68
    a0 = sp + 0x80;                                             // 0x001d4eb4: addiu $a0, $sp, 0x80
    a1 = 0x24 << 16;                                            // 0x001d4eb8: lui $a1, 0x24
    a0 = sp + 0x80;                                             // 0x001d4ebc: addiu $a0, $sp, 0x80
    func_0010a860();  // 10a860                                // 0x001d4ec0: jal 0x10a860
    a1 = a1 + 0x7380;                                           // 0x001d4ec4: addiu $a1, $a1, 0x7380
    s0 = *(int32_t*)((gp) + -0x6234);                           // 0x001d4ec8: lw $s0, -0x6234($gp)
    a2 = 1;                                                     // 0x001d4ed0: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001d4ed8: jal 0x1d3390
    if (v0 <= 0) goto label_0x1d4efc;                           // 0x001d4ee0: blez $v0, 0x1d4efc
    func_001d4c80();  // 1d4c80                                // 0x001d4ef0: jal 0x1d4c80
    *(uint8_t*)((s3) + 0x81c) = 0;                              // 0x001d4ef4: sb $zero, 0x81c($s3)
    s2 = s2 + 2;                                                // 0x001d4ef8: addiu $s2, $s2, 2
label_0x1d4efc:
label_0x1d4f00:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001d4f04: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d4f08: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d4f0c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d4f14: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d4f18: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d4f1c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d4f20: jr $ra
    sp = sp + 0x180;                                            // 0x001d4f24: addiu $sp, $sp, 0x180
}