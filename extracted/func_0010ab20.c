void func_0010ab20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t0 = a0 | a1;                                               // 0x0010ab20: or $t0, $a0, $a1
    v0 = t0 & 7;                                                // 0x0010ab24: andi $v0, $t0, 7
    /* bnezl $v0, 0x10ac50 */                                   // 0x0010ab28: bnezl $v0, 0x10ac50
    v0 = *(int8_t*)(a0);                                        // 0x0010ab2c: lb $v0, 0($a0)
    t1 = t0 & 0xf;                                              // 0x0010ab30: andi $t1, $t0, 0xf
    a3 = 0x101 << 16;                                           // 0x0010ab34: lui $a3, 0x101
    a3 = a3 | 0x101;                                            // 0x0010ab38: ori $a3, $a3, 0x101
    a3 = a3 | 0x101;                                            // 0x0010ab40: ori $a3, $a3, 0x101
    a3 = a3 | 0x101;                                            // 0x0010ab48: ori $a3, $a3, 0x101
    a2 = 0x8080 << 16;                                          // 0x0010ab4c: lui $a2, 0x8080
    a2 = a2 | 0x8080;                                           // 0x0010ab50: ori $a2, $a2, 0x8080
    a2 = a2 | 0x8080;                                           // 0x0010ab58: ori $a2, $a2, 0x8080
    a2 = a2 | 0x8080;                                           // 0x0010ab60: ori $a2, $a2, 0x8080
    if (t1 != 0) return;  // Branch to 0x10abe4                 // 0x0010ab64: bnez $t1, 0x10abe4
    /* FPU: andi.b $w0, $w0, 0x83 */                            // 0x0010ab6c: andi.b $w0, $w0, 0x83
    /* FPU: andi.b $w0, $w0, 0xa2 */                            // 0x0010ab74: andi.b $w0, $w0, 0xa2
    v1 = a2 | a3;                                               // 0x0010ab84: or $v1, $a2, $a3
    /* bnezl $v1, 0x10ac50 */                                   // 0x0010ab88: bnezl $v1, 0x10ac50
    v0 = *(int8_t*)(a0);                                        // 0x0010ab8c: lb $v0, 0($a0)
    /* FPU: andi.b $w0, $w0, 0x82 */                            // 0x0010ab90: andi.b $w0, $w0, 0x82
    a2 = v1 | v0;                                               // 0x0010aba8: or $a2, $v1, $v0
    if (a2 == 0) return;  // Branch to 0x10abbc                 // 0x0010abac: beqz $a2, 0x10abbc
    a0 = a0 + 0x10;                                             // 0x0010abb0: addiu $a0, $a0, 0x10
    return;                                                     // 0x0010abb4: jr $ra
}