void func_001d2fa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a2 + -1;                                               // 0x001d2fa0: addiu $v0, $a2, -1
    a0 = a0 + v0;                                               // 0x001d2fa8: addu $a0, $a0, $v0
    goto label_0x1d2fd8;                                        // 0x001d2fac: b 0x1d2fd8
    v1 = 0xa;                                                   // 0x001d2fb0: addiu $v1, $zero, 0xa
label_0x1d2fb4:
    /* divide: a1 / v1 -> hi:lo */                              // 0x001d2fb4: div $zero, $a1, $v1
    a3 = a3 + 1;                                                // 0x001d2fb8: addiu $a3, $a3, 1
    /* nop */                                                   // 0x001d2fbc: nop 
    /* mfhi $v0 */                                              // 0x001d2fc0
    /* divide: a1 / v1 -> hi:lo */                              // 0x001d2fc4: div $zero, $a1, $v1
    v0 = v0 + 0x30;                                             // 0x001d2fc8: addiu $v0, $v0, 0x30
    *(uint8_t*)(a0) = v0;                                       // 0x001d2fcc: sb $v0, 0($a0)
    a0 = a0 + -1;                                               // 0x001d2fd0: addiu $a0, $a0, -1
    /* mflo $a1 */                                              // 0x001d2fd4
label_0x1d2fd8:
    v0 = (a3 < a2) ? 1 : 0;                                     // 0x001d2fd8: slt $v0, $a3, $a2
    if (v0 != 0) goto label_0x1d2fb4;                           // 0x001d2fdc: bnez $v0, 0x1d2fb4
    return;                                                     // 0x001d2fe4: jr $ra
    /* nop */                                                   // 0x001d2fe8: nop 
}