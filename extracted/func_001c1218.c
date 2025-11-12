void func_001c1218() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a0 & 0xff;                                             // 0x001c1218: andi $v0, $a0, 0xff
    v1 = (unsigned)v0 >> 4;                                     // 0x001c121c: srl $v1, $v0, 4
    a0 = 6;                                                     // 0x001c1220: addiu $a0, $zero, 6
    /* multiply: a0 *  -> hi:lo */                              // 0x001c1224: mult $v1, $a0
    /* mflo $v1 */                                              // 0x001c1228
    v0 = v0 - v1;                                               // 0x001c122c: subu $v0, $v0, $v1
    return;                                                     // 0x001c1230: jr $ra
    v0 = v0 & 0xff;                                             // 0x001c1234: andi $v0, $v0, 0xff
}