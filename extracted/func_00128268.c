void func_00128268() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0 | 0xc350;                                            // 0x00128268: ori $v0, $zero, 0xc350
    v0 = v0 + -1;                                               // 0x0012826c: addiu $v0, $v0, -1
    /* nop */                                                   // 0x00128270: nop 
    /* nop */                                                   // 0x00128274: nop 
    /* nop */                                                   // 0x00128278: nop 
    /* nop */                                                   // 0x0012827c: nop 
    /* nop */                                                   // 0x00128280: nop 
    /* bnezl $v0, 0x128270 */                                   // 0x00128284: bnezl $v0, 0x128270
    v0 = v0 + -1;                                               // 0x00128288: addiu $v0, $v0, -1
    return;                                                     // 0x0012828c: jr $ra
    /* nop */                                                   // 0x00128290: nop 
}