void func_0014fea8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    /* multiply: a3 *  -> hi:lo */                              // 0x0014fea8: mult $a0, $a3
    /* mflo $v0 */                                              // 0x0014feb0
    /* mfhi $a0 */                                              // 0x0014feb4
    a0 = a0 | v0;                                               // 0x0014fec8: or $a0, $a0, $v0
    v0 = v0 | v1;                                               // 0x0014fedc: or $v0, $v0, $v1
    v0 = (v0 < a0) ? 1 : 0;                                     // 0x0014fee0: slt $v0, $v0, $a0
    return;                                                     // 0x0014fee4: jr $ra
    v0 = v0 ^ 1;                                                // 0x0014fee8: xori $v0, $v0, 1
}