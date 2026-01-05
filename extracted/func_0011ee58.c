void func_0011ee58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0011ee58: addiu $sp, $sp, -0x10
    if (a0 < 0) goto label_0x11ee74;                            // 0x0011ee5c: bltz $a0, 0x11ee74
    func_00111078();  // 111078                                // 0x0011ee64: jal 0x111078
    /* nop */                                                   // 0x0011ee68: nop 
    goto label_0x11ee88;                                        // 0x0011ee6c: b 0x11ee88
    /* FPU: mov.s $f1, $f0 */                                   // 0x0011ee70: mov.s $f1, $f0
label_0x11ee74:
    a0 = a0 & 1;                                                // 0x0011ee78: andi $a0, $a0, 1
    func_00111078();  // 111078                                // 0x0011ee7c: jal 0x111078
    a0 = a0 | v0;                                               // 0x0011ee80: or $a0, $a0, $v0
    /* FPU: add.s $f1, $f0, $f0 */                              // 0x0011ee84: add.s $f1, $f0, $f0
label_0x11ee88:
    at = 0x4d0c << 16;                                          // 0x0011ee88: lui $at, 0x4d0c
    at = at | 0xa000;                                           // 0x0011ee8c: ori $at, $at, 0xa000
    /* move to FPU: $at, $f0 */                                 // 0x0011ee90: mtc1 $at, $f0
    /* nop */                                                   // 0x0011ee98: nop 
    /* nop */                                                   // 0x0011ee9c: nop 
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x0011eea0: div.s $f0, $f0, $f1
    return;                                                     // 0x0011eea4: jr $ra
    sp = sp + 0x10;                                             // 0x0011eea8: addiu $sp, $sp, 0x10
}