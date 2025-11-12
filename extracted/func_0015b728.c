void func_0015b728() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015b728: addiu $sp, $sp, -0x10
    goto label_0x15b740;                                        // 0x0015b734: j 0x15b740
    sp = sp + 0x10;                                             // 0x0015b738: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015b73c: nop 
label_0x15b740:
    /* multiply: v0 *  -> hi:lo */                              // 0x0015b748: mult $a0, $v0
    sp = sp + -0x10;                                            // 0x0015b74c: addiu $sp, $sp, -0x10
    a0 = a0 ^ v0;                                               // 0x0015b750: xor $a0, $a0, $v0
    a0 = (a0 < 0) ? 1 : 0;                                      // 0x0015b758: slti $a0, $a0, 0
    /* mflo $a3 */                                              // 0x0015b75c
    /* mfhi $v1 */                                              // 0x0015b760
    if (a2 != 0) goto label_0x15b790;                           // 0x0015b770: bnez $a2, 0x15b790
    v1 = v1 | a3;                                               // 0x0015b774: or $v1, $v1, $a3
    v0 = 0x7fff << 16;                                          // 0x0015b778: lui $v0, 0x7fff
    v1 = 0x8000 << 16;                                          // 0x0015b77c: lui $v1, 0x8000
    v0 = v0 | 0xffff;                                           // 0x0015b780: ori $v0, $v0, 0xffff
    goto label_0x15b7a0;                                        // 0x0015b784: b 0x15b7a0
    if (a0 != 0) v0 = v1;                                       // 0x0015b788: movn $v0, $v1, $a0
    /* nop */                                                   // 0x0015b78c: nop 
label_0x15b790:
    func_0010fe58();  // 0x10f7c0                                // 0x0015b790: jal 0x10f7c0
label_0x15b7a0:
    return;                                                     // 0x0015b7a4: jr $ra
    sp = sp + 0x10;                                             // 0x0015b7a8: addiu $sp, $sp, 0x10
}