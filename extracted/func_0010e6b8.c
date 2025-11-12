void func_0010e6b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    *(uint8_t*)(a0) = a2;                                       // 0x0010e6b8: sb $a2, 0($a0)
    a2 = a0 + 1;                                                // 0x0010e6bc: addiu $a2, $a0, 1
    if (a1 >= 0) goto label_0x10e6d8;                           // 0x0010e6c0: bgez $a1, 0x10e6d8
    sp = sp + -0x140;                                           // 0x0010e6c4: addiu $sp, $sp, -0x140
    v0 = 0x2d;                                                  // 0x0010e6c8: addiu $v0, $zero, 0x2d
    goto label_0x10e6dc;                                        // 0x0010e6cc: b 0x10e6dc
    a1 = -a1;                                                   // 0x0010e6d0: negu $a1, $a1
    /* nop */                                                   // 0x0010e6d4: nop 
label_0x10e6d8:
    v0 = 0x2b;                                                  // 0x0010e6d8: addiu $v0, $zero, 0x2b
label_0x10e6dc:
    *(uint8_t*)(a2) = v0;                                       // 0x0010e6dc: sb $v0, 0($a2)
    a2 = a0 + 2;                                                // 0x0010e6e0: addiu $a2, $a0, 2
    a3 = sp + 0x134;                                            // 0x0010e6e4: addiu $a3, $sp, 0x134
    v0 = (a1 < 0xa) ? 1 : 0;                                    // 0x0010e6e8: slti $v0, $a1, 0xa
    if (v0 != 0) goto label_0x10e770;                           // 0x0010e6ec: bnez $v0, 0x10e770
    t0 = 0xa;                                                   // 0x0010e6f4: addiu $t0, $zero, 0xa
    /* divide: a1 / t0 -> hi:lo */                              // 0x0010e6f8: div $zero, $a1, $t0
    /* nop */                                                   // 0x0010e6fc: nop 
    a3 = a3 + -1;                                               // 0x0010e700: addiu $a3, $a3, -1
    /* beqzl $t0, 0x10e70c */                                   // 0x0010e704: beqzl $t0, 0x10e70c
    /* break (trap) */                                          // 0x0010e708: break 0, 7
    /* mflo $v1 */                                              // 0x0010e70c
    /* mfhi $v0 */                                              // 0x0010e710
    v0 = v0 + 0x30;                                             // 0x0010e718: addiu $v0, $v0, 0x30
    v1 = (a1 < 0xa) ? 1 : 0;                                    // 0x0010e71c: slti $v1, $a1, 0xa
    *(uint8_t*)(a3) = v0;                                       // 0x0010e720: sb $v0, 0($a3)
    /* beqzl $v1, 0x10e700 */                                   // 0x0010e724: beqzl $v1, 0x10e700
    /* divide: a1 / t0 -> hi:lo */                              // 0x0010e728: div $zero, $a1, $t0
    a3 = a3 + -1;                                               // 0x0010e72c: addiu $a3, $a3, -1
    v0 = a1 + 0x30;                                             // 0x0010e730: addiu $v0, $a1, 0x30
    v1 = ((unsigned)a3 < (unsigned)t1) ? 1 : 0;                 // 0x0010e734: sltu $v1, $a3, $t1
    if (v1 == 0) goto label_0x10e788;                           // 0x0010e738: beqz $v1, 0x10e788
    *(uint8_t*)(a3) = v0;                                       // 0x0010e73c: sb $v0, 0($a3)
    /* nop */                                                   // 0x0010e744: nop 
label_0x10e748:
    v0 = *(uint8_t*)(a3);                                       // 0x0010e748: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x0010e74c: addiu $a3, $a3, 1
    v1 = ((unsigned)a3 < (unsigned)a1) ? 1 : 0;                 // 0x0010e750: sltu $v1, $a3, $a1
    *(uint8_t*)(a2) = v0;                                       // 0x0010e754: sb $v0, 0($a2)
    /* nop */                                                   // 0x0010e758: nop 
    if (v1 != 0) goto label_0x10e748;                           // 0x0010e75c: bnez $v1, 0x10e748
    a2 = a2 + 1;                                                // 0x0010e760: addiu $a2, $a2, 1
    goto label_0x10e78c;                                        // 0x0010e764: b 0x10e78c
    v0 = a2 - a0;                                               // 0x0010e768: subu $v0, $a2, $a0
    /* nop */                                                   // 0x0010e76c: nop 
label_0x10e770:
    v0 = 0x30;                                                  // 0x0010e770: addiu $v0, $zero, 0x30
    v1 = a1 + 0x30;                                             // 0x0010e774: addiu $v1, $a1, 0x30
    *(uint8_t*)(a2) = v0;                                       // 0x0010e778: sb $v0, 0($a2)
    a2 = a2 + 1;                                                // 0x0010e77c: addiu $a2, $a2, 1
    *(uint8_t*)(a2) = v1;                                       // 0x0010e780: sb $v1, 0($a2)
    a2 = a2 + 1;                                                // 0x0010e784: addiu $a2, $a2, 1
label_0x10e788:
    v0 = a2 - a0;                                               // 0x0010e788: subu $v0, $a2, $a0
label_0x10e78c:
    return;                                                     // 0x0010e78c: jr $ra
    sp = sp + 0x140;                                            // 0x0010e790: addiu $sp, $sp, 0x140
}