void func_001372d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x3fff;                                                // 0x001372d0: addiu $v0, $zero, 0x3fff
    v0 = v0 + -0x20;                                            // 0x001372d4: addiu $v0, $v0, -0x20
label_0x1372d8:
    /* nop */                                                   // 0x001372d8: nop 
    /* nop */                                                   // 0x001372dc: nop 
    /* nop */                                                   // 0x001372e0: nop 
    /* nop */                                                   // 0x001372e4: nop 
    /* nop */                                                   // 0x001372e8: nop 
    if (v0 >= 0) goto label_0x1372d8;                           // 0x001372ec: bgezl $v0, 0x1372d8
    v0 = v0 + -0x20;                                            // 0x001372f0: addiu $v0, $v0, -0x20
    return;                                                     // 0x001372f4: jr $ra
    /* nop */                                                   // 0x001372f8: nop 
}