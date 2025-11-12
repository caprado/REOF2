void func_001c11e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0xa;                                                   // 0x001c11e8: addiu $v1, $zero, 0xa
    a0 = a0 & 0xff;                                             // 0x001c11ec: andi $a0, $a0, 0xff
    /* divide: a0 / v1 -> hi:lo */                              // 0x001c11f0: divu $zero, $a0, $v1
    a1 = 6;                                                     // 0x001c11f4: addiu $a1, $zero, 6
    /* beqzl $v1, 0x1c1200 */                                   // 0x001c11f8: beqzl $v1, 0x1c1200
    /* break (trap) */                                          // 0x001c11fc: break 0, 7
    /* mflo $v0 */                                              // 0x001c1200
    /* multiply: v0 * a1 -> hi:lo */                            // 0x001c1204: mult $ac3, $v0, $a1
    v0 = v1 + a0;                                               // 0x001c1208: addu $v0, $v1, $a0
    return;                                                     // 0x001c120c: jr $ra
    v0 = v0 & 0xff;                                             // 0x001c1210: andi $v0, $v0, 0xff
}