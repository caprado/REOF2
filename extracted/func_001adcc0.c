void func_001adcc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001adcc0: addiu $sp, $sp, -0x10
    v1 = 4;                                                     // 0x001adcc4: addiu $v1, $zero, 4
    if (a1 == v1) goto label_0x1add84;                          // 0x001adccc: beq $a1, $v1, 0x1add84
    v1 = 3;                                                     // 0x001adcd4: addiu $v1, $zero, 3
    if (a1 == v1) goto label_0x1add64;                          // 0x001adcd8: beq $a1, $v1, 0x1add64
    v1 = 2;                                                     // 0x001adcdc: addiu $v1, $zero, 2
    if (a1 == v1) goto label_0x1add40;                          // 0x001adce0: beq $a1, $v1, 0x1add40
    /* nop */                                                   // 0x001adce4: nop 
    v1 = 1;                                                     // 0x001adce8: addiu $v1, $zero, 1
    if (a1 == v1) goto label_0x1add24;                          // 0x001adcec: beq $a1, $v1, 0x1add24
    v1 = a0 << 1;                                               // 0x001adcf0: sll $v1, $a0, 1
    if (a1 == 0) goto label_0x1add04;                           // 0x001adcf4: beqz $a1, 0x1add04
    /* nop */                                                   // 0x001adcf8: nop 
    goto label_0x1adda4;                                        // 0x001adcfc: b 0x1adda4
label_0x1add04:
    v0 = 0x2b << 16;                                            // 0x001add04: lui $v0, 0x2b
    v1 = a0 << 2;                                               // 0x001add08: sll $v1, $a0, 2
    v0 = v0 + -0x5788;                                          // 0x001add0c: addiu $v0, $v0, -0x5788
    v0 = v0 + v1;                                               // 0x001add10: addu $v0, $v0, $v1
    func_00131c20();  // 0x131bb8                                // 0x001add14: jal 0x131bb8
    a0 = g_002aa878;  // Global at 0x002aa878                   // 0x001add18: lw $a0, 0($v0)
    goto label_0x1adda0;                                        // 0x001add1c: b 0x1adda0
    /* nop */                                                   // 0x001add20: nop 
label_0x1add24:
    v0 = 0x2b << 16;                                            // 0x001add24: lui $v0, 0x2b
    v1 = v1 + a0;                                               // 0x001add28: addu $v1, $v1, $a0
    v0 = v0 + -0x57dc;                                          // 0x001add2c: addiu $v0, $v0, -0x57dc
    v1 = v1 << 3;                                               // 0x001add30: sll $v1, $v1, 3
    v0 = v0 + v1;                                               // 0x001add34: addu $v0, $v0, $v1
    goto label_0x1adda0;                                        // 0x001add38: b 0x1adda0
    v0 = g_002aa824;  // Global at 0x002aa824                   // 0x001add3c: lw $v0, 0($v0)
label_0x1add40:
    v0 = 0x2b << 16;                                            // 0x001add40: lui $v0, 0x2b
    v1 = a0 << 2;                                               // 0x001add44: sll $v1, $a0, 2
    v0 = v0 + -0x5788;                                          // 0x001add48: addiu $v0, $v0, -0x5788
    v0 = v0 + v1;                                               // 0x001add4c: addu $v0, $v0, $v1
    a0 = g_002aa878;  // Global at 0x002aa878                   // 0x001add50: lw $a0, 0($v0)
    func_001323f0();  // 0x1323b0                                // 0x001add54: jal 0x1323b0
    goto label_0x1adda0;                                        // 0x001add5c: b 0x1adda0
    /* nop */                                                   // 0x001add60: nop 
label_0x1add64:
    v0 = 0x2b << 16;                                            // 0x001add64: lui $v0, 0x2b
    v1 = a0 << 2;                                               // 0x001add68: sll $v1, $a0, 2
    v0 = v0 + -0x5788;                                          // 0x001add6c: addiu $v0, $v0, -0x5788
    v0 = v0 + v1;                                               // 0x001add70: addu $v0, $v0, $v1
    func_001329e0();  // 0x1329b0                                // 0x001add74: jal 0x1329b0
    a0 = g_002aa878;  // Global at 0x002aa878                   // 0x001add78: lw $a0, 0($v0)
    goto label_0x1adda0;                                        // 0x001add7c: b 0x1adda0
    /* nop */                                                   // 0x001add80: nop 
label_0x1add84:
    v1 = a0 << 1;                                               // 0x001add84: sll $v1, $a0, 1
    v0 = 0x2b << 16;                                            // 0x001add88: lui $v0, 0x2b
    v1 = v1 + a0;                                               // 0x001add8c: addu $v1, $v1, $a0
    v0 = v0 + -0x57e0;                                          // 0x001add90: addiu $v0, $v0, -0x57e0
    v1 = v1 << 3;                                               // 0x001add94: sll $v1, $v1, 3
    v0 = v0 + v1;                                               // 0x001add98: addu $v0, $v0, $v1
    v0 = g_002aa820;  // Global at 0x002aa820                   // 0x001add9c: lb $v0, 0($v0)
label_0x1adda0:
label_0x1adda4:
    return;                                                     // 0x001adda4: jr $ra
    sp = sp + 0x10;                                             // 0x001adda8: addiu $sp, $sp, 0x10
}